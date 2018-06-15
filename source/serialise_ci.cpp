/*
	SERIALISE_CI.CPP
	----------------
	Copyright (c) 2017 Andrew Trotman
	Released under the 2-clause BSD license (See:https://en.wikipedia.org/wiki/BSD_licenses)
*/
#include <ostream>

#include "slice.h"
#include "version.h"
#include "checksum.h"
#include "serialise_ci.h"
#include "index_postings.h"
#include "index_manager_sequential.h"

namespace JASS
	{
	/*
		SERIALISE_CI::SERIALISE_CI()
		----------------------------
	*/
	serialise_ci::serialise_ci(size_t documents) :
		postings_file("JASS_postings.cpp", "w+b"),
		postings_header_file("JASS_postings.h", "w+b"),
		vocab_file("JASS_vocabulary.cpp", "w+b"),
		primary_key_file("JASS_primary_keys.cpp", "w+b"),
		terms(0),
		memory(1024 * 1024),
		documents_in_collection(documents),
		document_ids((decltype(document_ids))memory.malloc(documents * sizeof(*document_ids))),
		term_frequencies((decltype(term_frequencies))memory.malloc(documents * sizeof(*term_frequencies))),
		temporary_size(documents * (sizeof(*document_ids) / 7 + 1) * sizeof(*temporary)),
		temporary((decltype(temporary))memory.malloc(temporary_size))			// enough space to decompress variable-byte encodings
		{
		/*
			Write out the headers of each file
		*/
		vocab_file.write("/* Generated by " + version::build() + " */\n");
		vocab_file.write("#include <stdint.h>\n\n");
		vocab_file.write("#include\"JASS_postings.h\"\n");
		vocab_file.write("#include\"JASS_vocabulary.h\"\n");
		vocab_file.write("JASS_ci_vocab dictionary[] = {\n");

		postings_file.write("/* Generated by " + version::build() + " */\n");
		postings_file.write("#include <stddef.h>\n");
		postings_file.write("#include <stdint.h>\n");
		postings_file.write("#include\"query.h\"\n\n");
		postings_file.write("using namespace JASS;\n");

		postings_header_file.write("/* Generated by " + version::build() + " */\n");
		postings_header_file.write("#include\"query.h\"\n\n");
		postings_header_file.write("using namespace JASS;\n");

		primary_key_file.write("/* Generated by " + version::build() + " */\n");
		primary_key_file.write("#include <string>\n");
		primary_key_file.write("#include <vector>\n");
		primary_key_file.write("std::vector<std::string> primary_key =\n{\n");
		}

	/*
		SERIALISE_CI::~SERIALISE_CI()
		-----------------------------
	*/
	serialise_ci::~serialise_ci()
		{
		/*
			Terminate each file so that they are syntacticly correct
		*/
		vocab_file.write("};\n");

		std::ostringstream length;

		length << "uint64_t dictionary_length = " << terms << ";\n";
		vocab_file.write(length.str());

		primary_key_file.write("};\n");
		}

	/*
		SERIALISE_CI::OPERATOR()()
		--------------------------
	*/
	void serialise_ci::operator()(const slice &term, const index_postings &postings)
		{
		std::ostringstream code;

		/*
			Construct the method and write it out
		*/
		code << "void T_" << term << "(query<uint16_t, 10'000'000, 10> &q)\n";
		code << "{\n";

		/*
			Serialise and decompress the postings themselves
		*/
		auto document_frequency = postings.linearize(temporary, temporary_size, document_ids, term_frequencies, documents_in_collection);


//std::cout << term << "->" << document_frequency << "\n";
		/*
			Write out in this format
		*/
		auto end = document_ids + document_frequency;
		auto current_tf = term_frequencies;
		for (compress_integer::integer *current_id = document_ids; current_id < end; current_id++, current_tf++)
			code << "q.add_rsv(" << *current_id << ',' << (size_t)*current_tf << ");\n";
		code << "}\n";

		postings_file.write(code.str());

		/*
			Add this term to the vocabulary
		*/
		vocab_file.write("{\"");
		vocab_file.write(term.address(), term.size());
		vocab_file.write("\",T_");
		vocab_file.write(term.address(), term.size());
		vocab_file.write("},\n");

		/*
			Add to the header file
		*/
		postings_header_file.write("void T_");
		postings_header_file.write(term.address(), term.size());
		postings_header_file.write("(<uint16_t, 10'000'000, 10> &q);\n");

		terms++;
		}
		
	/*
		SERIALISE_CI::DELEGATE::OPERATOR()()
		------------------------------------
	*/
	void serialise_ci::operator()(size_t document_id, const slice &primary_key)
		{
		primary_key_file.write("\"");
		primary_key_file.write(primary_key.address(), primary_key.size());
		primary_key_file.write("\",\n");
		}

	/*
		SERIALISE_CI::UNITTEST()
		------------------------
	*/
	void serialise_ci::unittest(void)
		{
		/*
			Build an index.
		*/
		index_manager_sequential index;
		index_manager_sequential::unittest_build_index(index, unittest_data::ten_documents);
		
		/*
			Serialise the index.
		*/
		{
		serialise_ci serialiser(index.get_highest_document_id());
		index.iterate(serialiser);
		}

		/*
			Checksum the index to make sure its correct.
		*/
//		std::cout << "=====\n";
		auto checksum = checksum::fletcher_16_file("JASS_postings.cpp");
//		std::cout << "JASS_postings.c:" << checksum << '\n';
		JASS_assert(checksum == 3754 || checksum == 53180);

		checksum = checksum::fletcher_16_file("JASS_postings.h");
//		std::cout << "JASS_postings.h:" << checksum << '\n';
		JASS_assert(checksum == 31941 || checksum == 61399);

		checksum = checksum::fletcher_16_file("JASS_vocabulary.cpp");
//		std::cout << "JASS_vocabulary.cpp:" << checksum << '\n';
		JASS_assert(checksum == 10029 || checksum == 32575);

		checksum = checksum::fletcher_16_file("JASS_primary_keys.cpp");
//		std::cout << "JASS_primary_keys.cpp:" << checksum << '\n';
		JASS_assert(checksum == 18729 || checksum == 28987);

//		std::cout << "=====\n";
		puts("serialise_ci::PASSED");
		}
	}
