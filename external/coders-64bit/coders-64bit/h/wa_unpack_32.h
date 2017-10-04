/* --------------------------------------------------------
  Copyright (C) 2009 Vo Ngoc Anh and Alistair Moffat, The University
	  of Melbourne, Australia.

	This program is free software; you can use, redistribute it and/or modify
	it, providing that these heading lines remain.
  There is no warranty, either express or implied, that it is fit for
	any purpose whatsoever, and neither the authors nor The University of
	Melbourne accept any responsibility for any consequences that may
	arise from your use of this software.

  We ask that, if you use this software to derive experimental results
	that are reported in any way, you cite the original work in which the
	underlying processes are described by referencing to the paper:
	  ...


  AUTHORS
	Vo Ngoc Anh and Alistair Moffat,
	Department of Computer Science and Software Engineering,
	The University of Melbourne,
	Victoria 3010, Australia.
	Email: vo@csse.unimelb.edu.au, alistair@csse.unimelb.edu.au.

	BUG & FEEDBACK REPORT: Please send to vo@csse.unimelb.edu.au


Released at: Thu Aug 27 14:52:57 EST 2009

 -------------------------------------------------------- */


/* This code is automatically generated by:
          ./create_wa_unpack 32
   Do not change! 
   -------------------------- */


#ifndef _UNPACK_32_H_
#define _UNPACK_32_H_
#if _BYTES_PER_WORD == 4


#include "global_vars.h"



UWORD *wa_unpack0(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i++ ) a[i]=1;
  a += 128;

  return b;
}



UWORD *unpack1(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 32, a += 32, b+= 1)
  {
    a[0] = (b[0] & __mask[1]) + 1;
    a[1] = ( (b[0] >> 1) & __mask[1] ) + 1;
    a[2] = ( (b[0] >> 2) & __mask[1] ) + 1;
    a[3] = ( (b[0] >> 3) & __mask[1] ) + 1;
    a[4] = ( (b[0] >> 4) & __mask[1] ) + 1;
    a[5] = ( (b[0] >> 5) & __mask[1] ) + 1;
    a[6] = ( (b[0] >> 6) & __mask[1] ) + 1;
    a[7] = ( (b[0] >> 7) & __mask[1] ) + 1;
    a[8] = ( (b[0] >> 8) & __mask[1] ) + 1;
    a[9] = ( (b[0] >> 9) & __mask[1] ) + 1;
    a[10] = ( (b[0] >> 10) & __mask[1] ) + 1;
    a[11] = ( (b[0] >> 11) & __mask[1] ) + 1;
    a[12] = ( (b[0] >> 12) & __mask[1] ) + 1;
    a[13] = ( (b[0] >> 13) & __mask[1] ) + 1;
    a[14] = ( (b[0] >> 14) & __mask[1] ) + 1;
    a[15] = ( (b[0] >> 15) & __mask[1] ) + 1;
    a[16] = ( (b[0] >> 16) & __mask[1] ) + 1;
    a[17] = ( (b[0] >> 17) & __mask[1] ) + 1;
    a[18] = ( (b[0] >> 18) & __mask[1] ) + 1;
    a[19] = ( (b[0] >> 19) & __mask[1] ) + 1;
    a[20] = ( (b[0] >> 20) & __mask[1] ) + 1;
    a[21] = ( (b[0] >> 21) & __mask[1] ) + 1;
    a[22] = ( (b[0] >> 22) & __mask[1] ) + 1;
    a[23] = ( (b[0] >> 23) & __mask[1] ) + 1;
    a[24] = ( (b[0] >> 24) & __mask[1] ) + 1;
    a[25] = ( (b[0] >> 25) & __mask[1] ) + 1;
    a[26] = ( (b[0] >> 26) & __mask[1] ) + 1;
    a[27] = ( (b[0] >> 27) & __mask[1] ) + 1;
    a[28] = ( (b[0] >> 28) & __mask[1] ) + 1;
    a[29] = ( (b[0] >> 29) & __mask[1] ) + 1;
    a[30] = ( (b[0] >> 30) & __mask[1] ) + 1;
    a[31] = ( (b[0] >> 31) & __mask[1] ) + 1;
  }
  return b;
}



UWORD *unpack2(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 16, a += 16, b+= 1)
  {
    a[0] = (b[0] & __mask[2]) + 1;
    a[1] = ( (b[0] >> 2) & __mask[2] ) + 1;
    a[2] = ( (b[0] >> 4) & __mask[2] ) + 1;
    a[3] = ( (b[0] >> 6) & __mask[2] ) + 1;
    a[4] = ( (b[0] >> 8) & __mask[2] ) + 1;
    a[5] = ( (b[0] >> 10) & __mask[2] ) + 1;
    a[6] = ( (b[0] >> 12) & __mask[2] ) + 1;
    a[7] = ( (b[0] >> 14) & __mask[2] ) + 1;
    a[8] = ( (b[0] >> 16) & __mask[2] ) + 1;
    a[9] = ( (b[0] >> 18) & __mask[2] ) + 1;
    a[10] = ( (b[0] >> 20) & __mask[2] ) + 1;
    a[11] = ( (b[0] >> 22) & __mask[2] ) + 1;
    a[12] = ( (b[0] >> 24) & __mask[2] ) + 1;
    a[13] = ( (b[0] >> 26) & __mask[2] ) + 1;
    a[14] = ( (b[0] >> 28) & __mask[2] ) + 1;
    a[15] = ( (b[0] >> 30) & __mask[2] ) + 1;
  }
  return b;
}



UWORD *unpack3(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 32, a += 32, b+= 3)
  {
    a[0] = (b[0] & __mask[3]) + 1;
    a[1] = ( (b[0] >> 3) & __mask[3] ) + 1;
    a[2] = ( (b[0] >> 6) & __mask[3] ) + 1;
    a[3] = ( (b[0] >> 9) & __mask[3] ) + 1;
    a[4] = ( (b[0] >> 12) & __mask[3] ) + 1;
    a[5] = ( (b[0] >> 15) & __mask[3] ) + 1;
    a[6] = ( (b[0] >> 18) & __mask[3] ) + 1;
    a[7] = ( (b[0] >> 21) & __mask[3] ) + 1;
    a[8] = ( (b[0] >> 24) & __mask[3] ) + 1;
    a[9] = ( (b[0] >> 27) & __mask[3] ) + 1;
    a[10] = (b[1] & __mask[3]) + 1;
    a[11] = ( (b[1] >> 3) & __mask[3] ) + 1;
    a[12] = ( (b[1] >> 6) & __mask[3] ) + 1;
    a[13] = ( (b[1] >> 9) & __mask[3] ) + 1;
    a[14] = ( (b[1] >> 12) & __mask[3] ) + 1;
    a[15] = ( (b[1] >> 15) & __mask[3] ) + 1;
    a[16] = ( (b[1] >> 18) & __mask[3] ) + 1;
    a[17] = ( (b[1] >> 21) & __mask[3] ) + 1;
    a[18] = ( (b[1] >> 24) & __mask[3] ) + 1;
    a[19] = ( (b[1] >> 27) & __mask[3] ) + 1;
    a[20] = (b[2] & __mask[3]) + 1;
    a[21] = ( (b[2] >> 3) & __mask[3] ) + 1;
    a[22] = ( (b[2] >> 6) & __mask[3] ) + 1;
    a[23] = ( (b[2] >> 9) & __mask[3] ) + 1;
    a[24] = ( (b[2] >> 12) & __mask[3] ) + 1;
    a[25] = ( (b[2] >> 15) & __mask[3] ) + 1;
    a[26] = ( (b[2] >> 18) & __mask[3] ) + 1;
    a[27] = ( (b[2] >> 21) & __mask[3] ) + 1;
    a[28] = ( (b[2] >> 24) & __mask[3] ) + 1;
    a[29] = ( (b[2] >> 27) & __mask[3] ) + 1;
    a[30] = (b[3] & __mask[3]) + 1;
    a[31] = ( (b[3] >> 3) & __mask[3] ) + 1;
  }
  return b;
}



UWORD *unpack4(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 8, a += 8, b+= 1)
  {
    a[0] = (b[0] & __mask[4]) + 1;
    a[1] = ( (b[0] >> 4) & __mask[4] ) + 1;
    a[2] = ( (b[0] >> 8) & __mask[4] ) + 1;
    a[3] = ( (b[0] >> 12) & __mask[4] ) + 1;
    a[4] = ( (b[0] >> 16) & __mask[4] ) + 1;
    a[5] = ( (b[0] >> 20) & __mask[4] ) + 1;
    a[6] = ( (b[0] >> 24) & __mask[4] ) + 1;
    a[7] = ( (b[0] >> 28) & __mask[4] ) + 1;
  }
  return b;
}



UWORD *unpack5(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 32, a += 32, b+= 5)
  {
    a[0] = (b[0] & __mask[5]) + 1;
    a[1] = ( (b[0] >> 5) & __mask[5] ) + 1;
    a[2] = ( (b[0] >> 10) & __mask[5] ) + 1;
    a[3] = ( (b[0] >> 15) & __mask[5] ) + 1;
    a[4] = ( (b[0] >> 20) & __mask[5] ) + 1;
    a[5] = ( (b[0] >> 25) & __mask[5] ) + 1;
    a[6] = (b[1] & __mask[5]) + 1;
    a[7] = ( (b[1] >> 5) & __mask[5] ) + 1;
    a[8] = ( (b[1] >> 10) & __mask[5] ) + 1;
    a[9] = ( (b[1] >> 15) & __mask[5] ) + 1;
    a[10] = ( (b[1] >> 20) & __mask[5] ) + 1;
    a[11] = ( (b[1] >> 25) & __mask[5] ) + 1;
    a[12] = (b[2] & __mask[5]) + 1;
    a[13] = ( (b[2] >> 5) & __mask[5] ) + 1;
    a[14] = ( (b[2] >> 10) & __mask[5] ) + 1;
    a[15] = ( (b[2] >> 15) & __mask[5] ) + 1;
    a[16] = ( (b[2] >> 20) & __mask[5] ) + 1;
    a[17] = ( (b[2] >> 25) & __mask[5] ) + 1;
    a[18] = (b[3] & __mask[5]) + 1;
    a[19] = ( (b[3] >> 5) & __mask[5] ) + 1;
    a[20] = ( (b[3] >> 10) & __mask[5] ) + 1;
    a[21] = ( (b[3] >> 15) & __mask[5] ) + 1;
    a[22] = ( (b[3] >> 20) & __mask[5] ) + 1;
    a[23] = ( (b[3] >> 25) & __mask[5] ) + 1;
    a[24] = (b[4] & __mask[5]) + 1;
    a[25] = ( (b[4] >> 5) & __mask[5] ) + 1;
    a[26] = ( (b[4] >> 10) & __mask[5] ) + 1;
    a[27] = ( (b[4] >> 15) & __mask[5] ) + 1;
    a[28] = ( (b[4] >> 20) & __mask[5] ) + 1;
    a[29] = ( (b[4] >> 25) & __mask[5] ) + 1;
    a[30] = (b[5] & __mask[5]) + 1;
    a[31] = ( (b[5] >> 5) & __mask[5] ) + 1;
  }
  return b;
}



UWORD *unpack6(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 16, a += 16, b+= 3)
  {
    a[0] = (b[0] & __mask[6]) + 1;
    a[1] = ( (b[0] >> 6) & __mask[6] ) + 1;
    a[2] = ( (b[0] >> 12) & __mask[6] ) + 1;
    a[3] = ( (b[0] >> 18) & __mask[6] ) + 1;
    a[4] = ( (b[0] >> 24) & __mask[6] ) + 1;
    a[5] = (b[1] & __mask[6]) + 1;
    a[6] = ( (b[1] >> 6) & __mask[6] ) + 1;
    a[7] = ( (b[1] >> 12) & __mask[6] ) + 1;
    a[8] = ( (b[1] >> 18) & __mask[6] ) + 1;
    a[9] = ( (b[1] >> 24) & __mask[6] ) + 1;
    a[10] = (b[2] & __mask[6]) + 1;
    a[11] = ( (b[2] >> 6) & __mask[6] ) + 1;
    a[12] = ( (b[2] >> 12) & __mask[6] ) + 1;
    a[13] = ( (b[2] >> 18) & __mask[6] ) + 1;
    a[14] = ( (b[2] >> 24) & __mask[6] ) + 1;
    a[15] = (b[3] & __mask[6]) + 1;
  }
  return b;
}



UWORD *unpack7(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 32, a += 32, b+= 7)
  {
    a[0] = (b[0] & __mask[7]) + 1;
    a[1] = ( (b[0] >> 7) & __mask[7] ) + 1;
    a[2] = ( (b[0] >> 14) & __mask[7] ) + 1;
    a[3] = ( (b[0] >> 21) & __mask[7] ) + 1;
    a[4] = (b[1] & __mask[7]) + 1;
    a[5] = ( (b[1] >> 7) & __mask[7] ) + 1;
    a[6] = ( (b[1] >> 14) & __mask[7] ) + 1;
    a[7] = ( (b[1] >> 21) & __mask[7] ) + 1;
    a[8] = (b[2] & __mask[7]) + 1;
    a[9] = ( (b[2] >> 7) & __mask[7] ) + 1;
    a[10] = ( (b[2] >> 14) & __mask[7] ) + 1;
    a[11] = ( (b[2] >> 21) & __mask[7] ) + 1;
    a[12] = (b[3] & __mask[7]) + 1;
    a[13] = ( (b[3] >> 7) & __mask[7] ) + 1;
    a[14] = ( (b[3] >> 14) & __mask[7] ) + 1;
    a[15] = ( (b[3] >> 21) & __mask[7] ) + 1;
    a[16] = (b[4] & __mask[7]) + 1;
    a[17] = ( (b[4] >> 7) & __mask[7] ) + 1;
    a[18] = ( (b[4] >> 14) & __mask[7] ) + 1;
    a[19] = ( (b[4] >> 21) & __mask[7] ) + 1;
    a[20] = (b[5] & __mask[7]) + 1;
    a[21] = ( (b[5] >> 7) & __mask[7] ) + 1;
    a[22] = ( (b[5] >> 14) & __mask[7] ) + 1;
    a[23] = ( (b[5] >> 21) & __mask[7] ) + 1;
    a[24] = (b[6] & __mask[7]) + 1;
    a[25] = ( (b[6] >> 7) & __mask[7] ) + 1;
    a[26] = ( (b[6] >> 14) & __mask[7] ) + 1;
    a[27] = ( (b[6] >> 21) & __mask[7] ) + 1;
    a[28] = (b[7] & __mask[7]) + 1;
    a[29] = ( (b[7] >> 7) & __mask[7] ) + 1;
    a[30] = ( (b[7] >> 14) & __mask[7] ) + 1;
    a[31] = ( (b[7] >> 21) & __mask[7] ) + 1;
  }
  return b;
}



UWORD *unpack8(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 4, a += 4, b+= 1)
  {
    a[0] = (b[0] & __mask[8]) + 1;
    a[1] = ( (b[0] >> 8) & __mask[8] ) + 1;
    a[2] = ( (b[0] >> 16) & __mask[8] ) + 1;
    a[3] = ( (b[0] >> 24) & __mask[8] ) + 1;
  }
  return b;
}



UWORD *unpack9(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 32, a += 32, b+= 9)
  {
    a[0] = (b[0] & __mask[9]) + 1;
    a[1] = ( (b[0] >> 9) & __mask[9] ) + 1;
    a[2] = ( (b[0] >> 18) & __mask[9] ) + 1;
    a[3] = (b[1] & __mask[9]) + 1;
    a[4] = ( (b[1] >> 9) & __mask[9] ) + 1;
    a[5] = ( (b[1] >> 18) & __mask[9] ) + 1;
    a[6] = (b[2] & __mask[9]) + 1;
    a[7] = ( (b[2] >> 9) & __mask[9] ) + 1;
    a[8] = ( (b[2] >> 18) & __mask[9] ) + 1;
    a[9] = (b[3] & __mask[9]) + 1;
    a[10] = ( (b[3] >> 9) & __mask[9] ) + 1;
    a[11] = ( (b[3] >> 18) & __mask[9] ) + 1;
    a[12] = (b[4] & __mask[9]) + 1;
    a[13] = ( (b[4] >> 9) & __mask[9] ) + 1;
    a[14] = ( (b[4] >> 18) & __mask[9] ) + 1;
    a[15] = (b[5] & __mask[9]) + 1;
    a[16] = ( (b[5] >> 9) & __mask[9] ) + 1;
    a[17] = ( (b[5] >> 18) & __mask[9] ) + 1;
    a[18] = (b[6] & __mask[9]) + 1;
    a[19] = ( (b[6] >> 9) & __mask[9] ) + 1;
    a[20] = ( (b[6] >> 18) & __mask[9] ) + 1;
    a[21] = (b[7] & __mask[9]) + 1;
    a[22] = ( (b[7] >> 9) & __mask[9] ) + 1;
    a[23] = ( (b[7] >> 18) & __mask[9] ) + 1;
    a[24] = (b[8] & __mask[9]) + 1;
    a[25] = ( (b[8] >> 9) & __mask[9] ) + 1;
    a[26] = ( (b[8] >> 18) & __mask[9] ) + 1;
    a[27] = (b[9] & __mask[9]) + 1;
    a[28] = ( (b[9] >> 9) & __mask[9] ) + 1;
    a[29] = ( (b[9] >> 18) & __mask[9] ) + 1;
    a[30] = (b[10] & __mask[9]) + 1;
    a[31] = ( (b[10] >> 9) & __mask[9] ) + 1;
  }
  return b;
}



UWORD *unpack10(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 16, a += 16, b+= 5)
  {
    a[0] = (b[0] & __mask[10]) + 1;
    a[1] = ( (b[0] >> 10) & __mask[10] ) + 1;
    a[2] = ( (b[0] >> 20) & __mask[10] ) + 1;
    a[3] = (b[1] & __mask[10]) + 1;
    a[4] = ( (b[1] >> 10) & __mask[10] ) + 1;
    a[5] = ( (b[1] >> 20) & __mask[10] ) + 1;
    a[6] = (b[2] & __mask[10]) + 1;
    a[7] = ( (b[2] >> 10) & __mask[10] ) + 1;
    a[8] = ( (b[2] >> 20) & __mask[10] ) + 1;
    a[9] = (b[3] & __mask[10]) + 1;
    a[10] = ( (b[3] >> 10) & __mask[10] ) + 1;
    a[11] = ( (b[3] >> 20) & __mask[10] ) + 1;
    a[12] = (b[4] & __mask[10]) + 1;
    a[13] = ( (b[4] >> 10) & __mask[10] ) + 1;
    a[14] = ( (b[4] >> 20) & __mask[10] ) + 1;
    a[15] = (b[5] & __mask[10]) + 1;
  }
  return b;
}



UWORD *unpack11(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 32, a += 32, b+= 11)
  {
    a[0] = (b[0] & __mask[11]) + 1;
    a[1] = ( (b[0] >> 11) & __mask[11] ) + 1;
    a[2] = (b[1] & __mask[11]) + 1;
    a[3] = ( (b[1] >> 11) & __mask[11] ) + 1;
    a[4] = (b[2] & __mask[11]) + 1;
    a[5] = ( (b[2] >> 11) & __mask[11] ) + 1;
    a[6] = (b[3] & __mask[11]) + 1;
    a[7] = ( (b[3] >> 11) & __mask[11] ) + 1;
    a[8] = (b[4] & __mask[11]) + 1;
    a[9] = ( (b[4] >> 11) & __mask[11] ) + 1;
    a[10] = (b[5] & __mask[11]) + 1;
    a[11] = ( (b[5] >> 11) & __mask[11] ) + 1;
    a[12] = (b[6] & __mask[11]) + 1;
    a[13] = ( (b[6] >> 11) & __mask[11] ) + 1;
    a[14] = (b[7] & __mask[11]) + 1;
    a[15] = ( (b[7] >> 11) & __mask[11] ) + 1;
    a[16] = (b[8] & __mask[11]) + 1;
    a[17] = ( (b[8] >> 11) & __mask[11] ) + 1;
    a[18] = (b[9] & __mask[11]) + 1;
    a[19] = ( (b[9] >> 11) & __mask[11] ) + 1;
    a[20] = (b[10] & __mask[11]) + 1;
    a[21] = ( (b[10] >> 11) & __mask[11] ) + 1;
    a[22] = (b[11] & __mask[11]) + 1;
    a[23] = ( (b[11] >> 11) & __mask[11] ) + 1;
    a[24] = (b[12] & __mask[11]) + 1;
    a[25] = ( (b[12] >> 11) & __mask[11] ) + 1;
    a[26] = (b[13] & __mask[11]) + 1;
    a[27] = ( (b[13] >> 11) & __mask[11] ) + 1;
    a[28] = (b[14] & __mask[11]) + 1;
    a[29] = ( (b[14] >> 11) & __mask[11] ) + 1;
    a[30] = (b[15] & __mask[11]) + 1;
    a[31] = ( (b[15] >> 11) & __mask[11] ) + 1;
  }
  return b;
}



UWORD *unpack12(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 8, a += 8, b+= 3)
  {
    a[0] = (b[0] & __mask[12]) + 1;
    a[1] = ( (b[0] >> 12) & __mask[12] ) + 1;
    a[2] = (b[1] & __mask[12]) + 1;
    a[3] = ( (b[1] >> 12) & __mask[12] ) + 1;
    a[4] = (b[2] & __mask[12]) + 1;
    a[5] = ( (b[2] >> 12) & __mask[12] ) + 1;
    a[6] = (b[3] & __mask[12]) + 1;
    a[7] = ( (b[3] >> 12) & __mask[12] ) + 1;
  }
  return b;
}



UWORD *unpack13(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 32, a += 32, b+= 13)
  {
    a[0] = (b[0] & __mask[13]) + 1;
    a[1] = ( (b[0] >> 13) & __mask[13] ) + 1;
    a[2] = (b[1] & __mask[13]) + 1;
    a[3] = ( (b[1] >> 13) & __mask[13] ) + 1;
    a[4] = (b[2] & __mask[13]) + 1;
    a[5] = ( (b[2] >> 13) & __mask[13] ) + 1;
    a[6] = (b[3] & __mask[13]) + 1;
    a[7] = ( (b[3] >> 13) & __mask[13] ) + 1;
    a[8] = (b[4] & __mask[13]) + 1;
    a[9] = ( (b[4] >> 13) & __mask[13] ) + 1;
    a[10] = (b[5] & __mask[13]) + 1;
    a[11] = ( (b[5] >> 13) & __mask[13] ) + 1;
    a[12] = (b[6] & __mask[13]) + 1;
    a[13] = ( (b[6] >> 13) & __mask[13] ) + 1;
    a[14] = (b[7] & __mask[13]) + 1;
    a[15] = ( (b[7] >> 13) & __mask[13] ) + 1;
    a[16] = (b[8] & __mask[13]) + 1;
    a[17] = ( (b[8] >> 13) & __mask[13] ) + 1;
    a[18] = (b[9] & __mask[13]) + 1;
    a[19] = ( (b[9] >> 13) & __mask[13] ) + 1;
    a[20] = (b[10] & __mask[13]) + 1;
    a[21] = ( (b[10] >> 13) & __mask[13] ) + 1;
    a[22] = (b[11] & __mask[13]) + 1;
    a[23] = ( (b[11] >> 13) & __mask[13] ) + 1;
    a[24] = (b[12] & __mask[13]) + 1;
    a[25] = ( (b[12] >> 13) & __mask[13] ) + 1;
    a[26] = (b[13] & __mask[13]) + 1;
    a[27] = ( (b[13] >> 13) & __mask[13] ) + 1;
    a[28] = (b[14] & __mask[13]) + 1;
    a[29] = ( (b[14] >> 13) & __mask[13] ) + 1;
    a[30] = (b[15] & __mask[13]) + 1;
    a[31] = ( (b[15] >> 13) & __mask[13] ) + 1;
  }
  return b;
}



UWORD *unpack14(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 16, a += 16, b+= 7)
  {
    a[0] = (b[0] & __mask[14]) + 1;
    a[1] = ( (b[0] >> 14) & __mask[14] ) + 1;
    a[2] = (b[1] & __mask[14]) + 1;
    a[3] = ( (b[1] >> 14) & __mask[14] ) + 1;
    a[4] = (b[2] & __mask[14]) + 1;
    a[5] = ( (b[2] >> 14) & __mask[14] ) + 1;
    a[6] = (b[3] & __mask[14]) + 1;
    a[7] = ( (b[3] >> 14) & __mask[14] ) + 1;
    a[8] = (b[4] & __mask[14]) + 1;
    a[9] = ( (b[4] >> 14) & __mask[14] ) + 1;
    a[10] = (b[5] & __mask[14]) + 1;
    a[11] = ( (b[5] >> 14) & __mask[14] ) + 1;
    a[12] = (b[6] & __mask[14]) + 1;
    a[13] = ( (b[6] >> 14) & __mask[14] ) + 1;
    a[14] = (b[7] & __mask[14]) + 1;
    a[15] = ( (b[7] >> 14) & __mask[14] ) + 1;
  }
  return b;
}



UWORD *unpack15(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 32, a += 32, b+= 15)
  {
    a[0] = (b[0] & __mask[15]) + 1;
    a[1] = ( (b[0] >> 15) & __mask[15] ) + 1;
    a[2] = (b[1] & __mask[15]) + 1;
    a[3] = ( (b[1] >> 15) & __mask[15] ) + 1;
    a[4] = (b[2] & __mask[15]) + 1;
    a[5] = ( (b[2] >> 15) & __mask[15] ) + 1;
    a[6] = (b[3] & __mask[15]) + 1;
    a[7] = ( (b[3] >> 15) & __mask[15] ) + 1;
    a[8] = (b[4] & __mask[15]) + 1;
    a[9] = ( (b[4] >> 15) & __mask[15] ) + 1;
    a[10] = (b[5] & __mask[15]) + 1;
    a[11] = ( (b[5] >> 15) & __mask[15] ) + 1;
    a[12] = (b[6] & __mask[15]) + 1;
    a[13] = ( (b[6] >> 15) & __mask[15] ) + 1;
    a[14] = (b[7] & __mask[15]) + 1;
    a[15] = ( (b[7] >> 15) & __mask[15] ) + 1;
    a[16] = (b[8] & __mask[15]) + 1;
    a[17] = ( (b[8] >> 15) & __mask[15] ) + 1;
    a[18] = (b[9] & __mask[15]) + 1;
    a[19] = ( (b[9] >> 15) & __mask[15] ) + 1;
    a[20] = (b[10] & __mask[15]) + 1;
    a[21] = ( (b[10] >> 15) & __mask[15] ) + 1;
    a[22] = (b[11] & __mask[15]) + 1;
    a[23] = ( (b[11] >> 15) & __mask[15] ) + 1;
    a[24] = (b[12] & __mask[15]) + 1;
    a[25] = ( (b[12] >> 15) & __mask[15] ) + 1;
    a[26] = (b[13] & __mask[15]) + 1;
    a[27] = ( (b[13] >> 15) & __mask[15] ) + 1;
    a[28] = (b[14] & __mask[15]) + 1;
    a[29] = ( (b[14] >> 15) & __mask[15] ) + 1;
    a[30] = (b[15] & __mask[15]) + 1;
    a[31] = ( (b[15] >> 15) & __mask[15] ) + 1;
  }
  return b;
}



UWORD *unpack16(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 2, a += 2, b+= 1)
  {
    a[0] = (b[0] & __mask[16]) + 1;
    a[1] = ( (b[0] >> 16) & __mask[16] ) + 1;
  }
  return b;
}



UWORD *unpack17(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 32, a += 32, b+= 17)
  {
    a[0] = (b[0] & __mask[17]) + 1;
    a[1] = (b[1] & __mask[17]) + 1;
    a[2] = (b[2] & __mask[17]) + 1;
    a[3] = (b[3] & __mask[17]) + 1;
    a[4] = (b[4] & __mask[17]) + 1;
    a[5] = (b[5] & __mask[17]) + 1;
    a[6] = (b[6] & __mask[17]) + 1;
    a[7] = (b[7] & __mask[17]) + 1;
    a[8] = (b[8] & __mask[17]) + 1;
    a[9] = (b[9] & __mask[17]) + 1;
    a[10] = (b[10] & __mask[17]) + 1;
    a[11] = (b[11] & __mask[17]) + 1;
    a[12] = (b[12] & __mask[17]) + 1;
    a[13] = (b[13] & __mask[17]) + 1;
    a[14] = (b[14] & __mask[17]) + 1;
    a[15] = (b[15] & __mask[17]) + 1;
    a[16] = (b[16] & __mask[17]) + 1;
    a[17] = (b[17] & __mask[17]) + 1;
    a[18] = (b[18] & __mask[17]) + 1;
    a[19] = (b[19] & __mask[17]) + 1;
    a[20] = (b[20] & __mask[17]) + 1;
    a[21] = (b[21] & __mask[17]) + 1;
    a[22] = (b[22] & __mask[17]) + 1;
    a[23] = (b[23] & __mask[17]) + 1;
    a[24] = (b[24] & __mask[17]) + 1;
    a[25] = (b[25] & __mask[17]) + 1;
    a[26] = (b[26] & __mask[17]) + 1;
    a[27] = (b[27] & __mask[17]) + 1;
    a[28] = (b[28] & __mask[17]) + 1;
    a[29] = (b[29] & __mask[17]) + 1;
    a[30] = (b[30] & __mask[17]) + 1;
    a[31] = (b[31] & __mask[17]) + 1;
  }
  return b;
}



UWORD *unpack18(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 16, a += 16, b+= 9)
  {
    a[0] = (b[0] & __mask[18]) + 1;
    a[1] = (b[1] & __mask[18]) + 1;
    a[2] = (b[2] & __mask[18]) + 1;
    a[3] = (b[3] & __mask[18]) + 1;
    a[4] = (b[4] & __mask[18]) + 1;
    a[5] = (b[5] & __mask[18]) + 1;
    a[6] = (b[6] & __mask[18]) + 1;
    a[7] = (b[7] & __mask[18]) + 1;
    a[8] = (b[8] & __mask[18]) + 1;
    a[9] = (b[9] & __mask[18]) + 1;
    a[10] = (b[10] & __mask[18]) + 1;
    a[11] = (b[11] & __mask[18]) + 1;
    a[12] = (b[12] & __mask[18]) + 1;
    a[13] = (b[13] & __mask[18]) + 1;
    a[14] = (b[14] & __mask[18]) + 1;
    a[15] = (b[15] & __mask[18]) + 1;
  }
  return b;
}



UWORD *unpack19(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 32, a += 32, b+= 19)
  {
    a[0] = (b[0] & __mask[19]) + 1;
    a[1] = (b[1] & __mask[19]) + 1;
    a[2] = (b[2] & __mask[19]) + 1;
    a[3] = (b[3] & __mask[19]) + 1;
    a[4] = (b[4] & __mask[19]) + 1;
    a[5] = (b[5] & __mask[19]) + 1;
    a[6] = (b[6] & __mask[19]) + 1;
    a[7] = (b[7] & __mask[19]) + 1;
    a[8] = (b[8] & __mask[19]) + 1;
    a[9] = (b[9] & __mask[19]) + 1;
    a[10] = (b[10] & __mask[19]) + 1;
    a[11] = (b[11] & __mask[19]) + 1;
    a[12] = (b[12] & __mask[19]) + 1;
    a[13] = (b[13] & __mask[19]) + 1;
    a[14] = (b[14] & __mask[19]) + 1;
    a[15] = (b[15] & __mask[19]) + 1;
    a[16] = (b[16] & __mask[19]) + 1;
    a[17] = (b[17] & __mask[19]) + 1;
    a[18] = (b[18] & __mask[19]) + 1;
    a[19] = (b[19] & __mask[19]) + 1;
    a[20] = (b[20] & __mask[19]) + 1;
    a[21] = (b[21] & __mask[19]) + 1;
    a[22] = (b[22] & __mask[19]) + 1;
    a[23] = (b[23] & __mask[19]) + 1;
    a[24] = (b[24] & __mask[19]) + 1;
    a[25] = (b[25] & __mask[19]) + 1;
    a[26] = (b[26] & __mask[19]) + 1;
    a[27] = (b[27] & __mask[19]) + 1;
    a[28] = (b[28] & __mask[19]) + 1;
    a[29] = (b[29] & __mask[19]) + 1;
    a[30] = (b[30] & __mask[19]) + 1;
    a[31] = (b[31] & __mask[19]) + 1;
  }
  return b;
}



UWORD *unpack20(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 8, a += 8, b+= 5)
  {
    a[0] = (b[0] & __mask[20]) + 1;
    a[1] = (b[1] & __mask[20]) + 1;
    a[2] = (b[2] & __mask[20]) + 1;
    a[3] = (b[3] & __mask[20]) + 1;
    a[4] = (b[4] & __mask[20]) + 1;
    a[5] = (b[5] & __mask[20]) + 1;
    a[6] = (b[6] & __mask[20]) + 1;
    a[7] = (b[7] & __mask[20]) + 1;
  }
  return b;
}



UWORD *unpack21(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 32, a += 32, b+= 21)
  {
    a[0] = (b[0] & __mask[21]) + 1;
    a[1] = (b[1] & __mask[21]) + 1;
    a[2] = (b[2] & __mask[21]) + 1;
    a[3] = (b[3] & __mask[21]) + 1;
    a[4] = (b[4] & __mask[21]) + 1;
    a[5] = (b[5] & __mask[21]) + 1;
    a[6] = (b[6] & __mask[21]) + 1;
    a[7] = (b[7] & __mask[21]) + 1;
    a[8] = (b[8] & __mask[21]) + 1;
    a[9] = (b[9] & __mask[21]) + 1;
    a[10] = (b[10] & __mask[21]) + 1;
    a[11] = (b[11] & __mask[21]) + 1;
    a[12] = (b[12] & __mask[21]) + 1;
    a[13] = (b[13] & __mask[21]) + 1;
    a[14] = (b[14] & __mask[21]) + 1;
    a[15] = (b[15] & __mask[21]) + 1;
    a[16] = (b[16] & __mask[21]) + 1;
    a[17] = (b[17] & __mask[21]) + 1;
    a[18] = (b[18] & __mask[21]) + 1;
    a[19] = (b[19] & __mask[21]) + 1;
    a[20] = (b[20] & __mask[21]) + 1;
    a[21] = (b[21] & __mask[21]) + 1;
    a[22] = (b[22] & __mask[21]) + 1;
    a[23] = (b[23] & __mask[21]) + 1;
    a[24] = (b[24] & __mask[21]) + 1;
    a[25] = (b[25] & __mask[21]) + 1;
    a[26] = (b[26] & __mask[21]) + 1;
    a[27] = (b[27] & __mask[21]) + 1;
    a[28] = (b[28] & __mask[21]) + 1;
    a[29] = (b[29] & __mask[21]) + 1;
    a[30] = (b[30] & __mask[21]) + 1;
    a[31] = (b[31] & __mask[21]) + 1;
  }
  return b;
}



UWORD *unpack22(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 16, a += 16, b+= 11)
  {
    a[0] = (b[0] & __mask[22]) + 1;
    a[1] = (b[1] & __mask[22]) + 1;
    a[2] = (b[2] & __mask[22]) + 1;
    a[3] = (b[3] & __mask[22]) + 1;
    a[4] = (b[4] & __mask[22]) + 1;
    a[5] = (b[5] & __mask[22]) + 1;
    a[6] = (b[6] & __mask[22]) + 1;
    a[7] = (b[7] & __mask[22]) + 1;
    a[8] = (b[8] & __mask[22]) + 1;
    a[9] = (b[9] & __mask[22]) + 1;
    a[10] = (b[10] & __mask[22]) + 1;
    a[11] = (b[11] & __mask[22]) + 1;
    a[12] = (b[12] & __mask[22]) + 1;
    a[13] = (b[13] & __mask[22]) + 1;
    a[14] = (b[14] & __mask[22]) + 1;
    a[15] = (b[15] & __mask[22]) + 1;
  }
  return b;
}



UWORD *unpack23(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 32, a += 32, b+= 23)
  {
    a[0] = (b[0] & __mask[23]) + 1;
    a[1] = (b[1] & __mask[23]) + 1;
    a[2] = (b[2] & __mask[23]) + 1;
    a[3] = (b[3] & __mask[23]) + 1;
    a[4] = (b[4] & __mask[23]) + 1;
    a[5] = (b[5] & __mask[23]) + 1;
    a[6] = (b[6] & __mask[23]) + 1;
    a[7] = (b[7] & __mask[23]) + 1;
    a[8] = (b[8] & __mask[23]) + 1;
    a[9] = (b[9] & __mask[23]) + 1;
    a[10] = (b[10] & __mask[23]) + 1;
    a[11] = (b[11] & __mask[23]) + 1;
    a[12] = (b[12] & __mask[23]) + 1;
    a[13] = (b[13] & __mask[23]) + 1;
    a[14] = (b[14] & __mask[23]) + 1;
    a[15] = (b[15] & __mask[23]) + 1;
    a[16] = (b[16] & __mask[23]) + 1;
    a[17] = (b[17] & __mask[23]) + 1;
    a[18] = (b[18] & __mask[23]) + 1;
    a[19] = (b[19] & __mask[23]) + 1;
    a[20] = (b[20] & __mask[23]) + 1;
    a[21] = (b[21] & __mask[23]) + 1;
    a[22] = (b[22] & __mask[23]) + 1;
    a[23] = (b[23] & __mask[23]) + 1;
    a[24] = (b[24] & __mask[23]) + 1;
    a[25] = (b[25] & __mask[23]) + 1;
    a[26] = (b[26] & __mask[23]) + 1;
    a[27] = (b[27] & __mask[23]) + 1;
    a[28] = (b[28] & __mask[23]) + 1;
    a[29] = (b[29] & __mask[23]) + 1;
    a[30] = (b[30] & __mask[23]) + 1;
    a[31] = (b[31] & __mask[23]) + 1;
  }
  return b;
}



UWORD *unpack24(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 4, a += 4, b+= 3)
  {
    a[0] = (b[0] & __mask[24]) + 1;
    a[1] = (b[1] & __mask[24]) + 1;
    a[2] = (b[2] & __mask[24]) + 1;
    a[3] = (b[3] & __mask[24]) + 1;
  }
  return b;
}



UWORD *unpack25(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 32, a += 32, b+= 25)
  {
    a[0] = (b[0] & __mask[25]) + 1;
    a[1] = (b[1] & __mask[25]) + 1;
    a[2] = (b[2] & __mask[25]) + 1;
    a[3] = (b[3] & __mask[25]) + 1;
    a[4] = (b[4] & __mask[25]) + 1;
    a[5] = (b[5] & __mask[25]) + 1;
    a[6] = (b[6] & __mask[25]) + 1;
    a[7] = (b[7] & __mask[25]) + 1;
    a[8] = (b[8] & __mask[25]) + 1;
    a[9] = (b[9] & __mask[25]) + 1;
    a[10] = (b[10] & __mask[25]) + 1;
    a[11] = (b[11] & __mask[25]) + 1;
    a[12] = (b[12] & __mask[25]) + 1;
    a[13] = (b[13] & __mask[25]) + 1;
    a[14] = (b[14] & __mask[25]) + 1;
    a[15] = (b[15] & __mask[25]) + 1;
    a[16] = (b[16] & __mask[25]) + 1;
    a[17] = (b[17] & __mask[25]) + 1;
    a[18] = (b[18] & __mask[25]) + 1;
    a[19] = (b[19] & __mask[25]) + 1;
    a[20] = (b[20] & __mask[25]) + 1;
    a[21] = (b[21] & __mask[25]) + 1;
    a[22] = (b[22] & __mask[25]) + 1;
    a[23] = (b[23] & __mask[25]) + 1;
    a[24] = (b[24] & __mask[25]) + 1;
    a[25] = (b[25] & __mask[25]) + 1;
    a[26] = (b[26] & __mask[25]) + 1;
    a[27] = (b[27] & __mask[25]) + 1;
    a[28] = (b[28] & __mask[25]) + 1;
    a[29] = (b[29] & __mask[25]) + 1;
    a[30] = (b[30] & __mask[25]) + 1;
    a[31] = (b[31] & __mask[25]) + 1;
  }
  return b;
}



UWORD *unpack26(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 16, a += 16, b+= 13)
  {
    a[0] = (b[0] & __mask[26]) + 1;
    a[1] = (b[1] & __mask[26]) + 1;
    a[2] = (b[2] & __mask[26]) + 1;
    a[3] = (b[3] & __mask[26]) + 1;
    a[4] = (b[4] & __mask[26]) + 1;
    a[5] = (b[5] & __mask[26]) + 1;
    a[6] = (b[6] & __mask[26]) + 1;
    a[7] = (b[7] & __mask[26]) + 1;
    a[8] = (b[8] & __mask[26]) + 1;
    a[9] = (b[9] & __mask[26]) + 1;
    a[10] = (b[10] & __mask[26]) + 1;
    a[11] = (b[11] & __mask[26]) + 1;
    a[12] = (b[12] & __mask[26]) + 1;
    a[13] = (b[13] & __mask[26]) + 1;
    a[14] = (b[14] & __mask[26]) + 1;
    a[15] = (b[15] & __mask[26]) + 1;
  }
  return b;
}



UWORD *unpack27(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 32, a += 32, b+= 27)
  {
    a[0] = (b[0] & __mask[27]) + 1;
    a[1] = (b[1] & __mask[27]) + 1;
    a[2] = (b[2] & __mask[27]) + 1;
    a[3] = (b[3] & __mask[27]) + 1;
    a[4] = (b[4] & __mask[27]) + 1;
    a[5] = (b[5] & __mask[27]) + 1;
    a[6] = (b[6] & __mask[27]) + 1;
    a[7] = (b[7] & __mask[27]) + 1;
    a[8] = (b[8] & __mask[27]) + 1;
    a[9] = (b[9] & __mask[27]) + 1;
    a[10] = (b[10] & __mask[27]) + 1;
    a[11] = (b[11] & __mask[27]) + 1;
    a[12] = (b[12] & __mask[27]) + 1;
    a[13] = (b[13] & __mask[27]) + 1;
    a[14] = (b[14] & __mask[27]) + 1;
    a[15] = (b[15] & __mask[27]) + 1;
    a[16] = (b[16] & __mask[27]) + 1;
    a[17] = (b[17] & __mask[27]) + 1;
    a[18] = (b[18] & __mask[27]) + 1;
    a[19] = (b[19] & __mask[27]) + 1;
    a[20] = (b[20] & __mask[27]) + 1;
    a[21] = (b[21] & __mask[27]) + 1;
    a[22] = (b[22] & __mask[27]) + 1;
    a[23] = (b[23] & __mask[27]) + 1;
    a[24] = (b[24] & __mask[27]) + 1;
    a[25] = (b[25] & __mask[27]) + 1;
    a[26] = (b[26] & __mask[27]) + 1;
    a[27] = (b[27] & __mask[27]) + 1;
    a[28] = (b[28] & __mask[27]) + 1;
    a[29] = (b[29] & __mask[27]) + 1;
    a[30] = (b[30] & __mask[27]) + 1;
    a[31] = (b[31] & __mask[27]) + 1;
  }
  return b;
}



UWORD *unpack28(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 8, a += 8, b+= 7)
  {
    a[0] = (b[0] & __mask[28]) + 1;
    a[1] = (b[1] & __mask[28]) + 1;
    a[2] = (b[2] & __mask[28]) + 1;
    a[3] = (b[3] & __mask[28]) + 1;
    a[4] = (b[4] & __mask[28]) + 1;
    a[5] = (b[5] & __mask[28]) + 1;
    a[6] = (b[6] & __mask[28]) + 1;
    a[7] = (b[7] & __mask[28]) + 1;
  }
  return b;
}



UWORD *unpack29(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 32, a += 32, b+= 29)
  {
    a[0] = (b[0] & __mask[29]) + 1;
    a[1] = (b[1] & __mask[29]) + 1;
    a[2] = (b[2] & __mask[29]) + 1;
    a[3] = (b[3] & __mask[29]) + 1;
    a[4] = (b[4] & __mask[29]) + 1;
    a[5] = (b[5] & __mask[29]) + 1;
    a[6] = (b[6] & __mask[29]) + 1;
    a[7] = (b[7] & __mask[29]) + 1;
    a[8] = (b[8] & __mask[29]) + 1;
    a[9] = (b[9] & __mask[29]) + 1;
    a[10] = (b[10] & __mask[29]) + 1;
    a[11] = (b[11] & __mask[29]) + 1;
    a[12] = (b[12] & __mask[29]) + 1;
    a[13] = (b[13] & __mask[29]) + 1;
    a[14] = (b[14] & __mask[29]) + 1;
    a[15] = (b[15] & __mask[29]) + 1;
    a[16] = (b[16] & __mask[29]) + 1;
    a[17] = (b[17] & __mask[29]) + 1;
    a[18] = (b[18] & __mask[29]) + 1;
    a[19] = (b[19] & __mask[29]) + 1;
    a[20] = (b[20] & __mask[29]) + 1;
    a[21] = (b[21] & __mask[29]) + 1;
    a[22] = (b[22] & __mask[29]) + 1;
    a[23] = (b[23] & __mask[29]) + 1;
    a[24] = (b[24] & __mask[29]) + 1;
    a[25] = (b[25] & __mask[29]) + 1;
    a[26] = (b[26] & __mask[29]) + 1;
    a[27] = (b[27] & __mask[29]) + 1;
    a[28] = (b[28] & __mask[29]) + 1;
    a[29] = (b[29] & __mask[29]) + 1;
    a[30] = (b[30] & __mask[29]) + 1;
    a[31] = (b[31] & __mask[29]) + 1;
  }
  return b;
}



UWORD *unpack30(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 16, a += 16, b+= 15)
  {
    a[0] = (b[0] & __mask[30]) + 1;
    a[1] = (b[1] & __mask[30]) + 1;
    a[2] = (b[2] & __mask[30]) + 1;
    a[3] = (b[3] & __mask[30]) + 1;
    a[4] = (b[4] & __mask[30]) + 1;
    a[5] = (b[5] & __mask[30]) + 1;
    a[6] = (b[6] & __mask[30]) + 1;
    a[7] = (b[7] & __mask[30]) + 1;
    a[8] = (b[8] & __mask[30]) + 1;
    a[9] = (b[9] & __mask[30]) + 1;
    a[10] = (b[10] & __mask[30]) + 1;
    a[11] = (b[11] & __mask[30]) + 1;
    a[12] = (b[12] & __mask[30]) + 1;
    a[13] = (b[13] & __mask[30]) + 1;
    a[14] = (b[14] & __mask[30]) + 1;
    a[15] = (b[15] & __mask[30]) + 1;
  }
  return b;
}



UWORD *unpack31(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 32, a += 32, b+= 31)
  {
    a[0] = (b[0] & __mask[31]) + 1;
    a[1] = (b[1] & __mask[31]) + 1;
    a[2] = (b[2] & __mask[31]) + 1;
    a[3] = (b[3] & __mask[31]) + 1;
    a[4] = (b[4] & __mask[31]) + 1;
    a[5] = (b[5] & __mask[31]) + 1;
    a[6] = (b[6] & __mask[31]) + 1;
    a[7] = (b[7] & __mask[31]) + 1;
    a[8] = (b[8] & __mask[31]) + 1;
    a[9] = (b[9] & __mask[31]) + 1;
    a[10] = (b[10] & __mask[31]) + 1;
    a[11] = (b[11] & __mask[31]) + 1;
    a[12] = (b[12] & __mask[31]) + 1;
    a[13] = (b[13] & __mask[31]) + 1;
    a[14] = (b[14] & __mask[31]) + 1;
    a[15] = (b[15] & __mask[31]) + 1;
    a[16] = (b[16] & __mask[31]) + 1;
    a[17] = (b[17] & __mask[31]) + 1;
    a[18] = (b[18] & __mask[31]) + 1;
    a[19] = (b[19] & __mask[31]) + 1;
    a[20] = (b[20] & __mask[31]) + 1;
    a[21] = (b[21] & __mask[31]) + 1;
    a[22] = (b[22] & __mask[31]) + 1;
    a[23] = (b[23] & __mask[31]) + 1;
    a[24] = (b[24] & __mask[31]) + 1;
    a[25] = (b[25] & __mask[31]) + 1;
    a[26] = (b[26] & __mask[31]) + 1;
    a[27] = (b[27] & __mask[31]) + 1;
    a[28] = (b[28] & __mask[31]) + 1;
    a[29] = (b[29] & __mask[31]) + 1;
    a[30] = (b[30] & __mask[31]) + 1;
    a[31] = (b[31] & __mask[31]) + 1;
  }
  return b;
}



UWORD *unpack32(UINT *a, UWORD *b)
{
  I4 i;
  for (i=0; i < 128 ; i += 1, a += 1, b+= 1)
  {
    a[0] = b[0] + 1;
  }
  return b;
}

UWORD* (*unpacks[33]) (UINT *a, UWORD *b) = {
  unpack0,
  unpack1,
  unpack2,
  unpack3,
  unpack4,
  unpack5,
  unpack6,
  unpack7,
  unpack8,
  unpack9,
  unpack10,
  unpack11,
  unpack12,
  unpack13,
  unpack14,
  unpack15,
  unpack16,
  unpack17,
  unpack18,
  unpack19,
  unpack20,
  unpack21,
  unpack22,
  unpack23,
  unpack24,
  unpack25,
  unpack26,
  unpack27,
  unpack28,
  unpack29,
  unpack30,
  unpack31,
  unpack32
};


#endif  /* _BYTES_PER_WORD == 4 */
#endif  /* _UNPACK_32_H_ */
