/* { dg-do run } */
/* { dg-options "-mlasx -w -fno-strict-aliasing" } */
#include "../simd_correctness_check.h"
#include <lasxintrin.h>

int
main ()
{
  __m256i __m256i_op0, __m256i_op1, __m256i_op2, __m256i_out, __m256i_result;
  __m256 __m256_op0, __m256_op1, __m256_op2, __m256_out, __m256_result;
  __m256d __m256d_op0, __m256d_op1, __m256d_op2, __m256d_out, __m256d_result;

  int int_op0, int_op1, int_op2, int_out, int_result, i = 1, fail;
  long int long_op0, long_op1, long_op2, lont_out, lont_result;
  long int long_int_out, long_int_result;
  unsigned int unsigned_int_out, unsigned_int_result;
  unsigned long int unsigned_long_int_out, unsigned_long_int_result;

  *((unsigned long *)&__m256i_op0[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[3]) = 0xfffffffffffffefe;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000101;
  *((unsigned long *)&__m256i_op1[1]) = 0xfffffffffffffefe;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000101;
  *((unsigned long *)&__m256i_result[3]) = 0xff01ff01ff01fe02;
  *((unsigned long *)&__m256i_result[2]) = 0x00000000000000ff;
  *((unsigned long *)&__m256i_result[1]) = 0xff01ff01ff01fe02;
  *((unsigned long *)&__m256i_result[0]) = 0x00000000000000ff;
  __m256i_out = __lasx_xvmulwev_h_bu_b (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000505;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x00000000000004fb;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_h_bu_b (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x00000000ffffffff;
  *((unsigned long *)&__m256i_op0[2]) = 0x00000000ffff8c80;
  *((unsigned long *)&__m256i_op0[1]) = 0x00000000ffffffff;
  *((unsigned long *)&__m256i_op0[0]) = 0x00000000fff0e400;
  *((unsigned long *)&__m256i_op1[3]) = 0x80000000ffffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0x80000000ffff8c80;
  *((unsigned long *)&__m256i_op1[1]) = 0x80000000ffffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0x80000000fff0e400;
  *((unsigned long *)&__m256i_result[3]) = 0x00000000ff01ff01;
  *((unsigned long *)&__m256i_result[2]) = 0x00000000ff01c000;
  *((unsigned long *)&__m256i_result[1]) = 0x00000000ff01ff01;
  *((unsigned long *)&__m256i_result[0]) = 0x00000000f1000000;
  __m256i_out = __lasx_xvmulwev_h_bu_b (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0xfffffffffffffffe;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000001;
  *((unsigned long *)&__m256i_op0[1]) = 0xfffffffffffffffe;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000001;
  *((unsigned long *)&__m256i_op1[3]) = 0xfffffffffffffffe;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000001;
  *((unsigned long *)&__m256i_op1[1]) = 0xfffffffffffffffe;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000001;
  *((unsigned long *)&__m256i_result[3]) = 0xff01ff01ff01fe04;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000001;
  *((unsigned long *)&__m256i_result[1]) = 0xff01ff01ff01fe04;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000001;
  __m256i_out = __lasx_xvmulwev_h_bu_b (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_h_bu_b (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x000000000022ffdd;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x000000000022ffdd;
  *((unsigned long *)&__m256i_op1[3]) = 0x00000000aaabffff;
  *((unsigned long *)&__m256i_op1[2]) = 0x00000000aaabffff;
  *((unsigned long *)&__m256i_op1[1]) = 0x00000000aaabffff;
  *((unsigned long *)&__m256i_op1[0]) = 0x00000000aaabffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x00000000f4b6ff23;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x00000000f4b6ff23;
  __m256i_out = __lasx_xvmulwev_h_bu_b (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_h_bu_b (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_h_bu_b (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0xffff000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000fffe00000000;
  *((unsigned long *)&__m256i_op0[1]) = 0xffff000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000fffe00000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x386000003df80000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x386000003df80000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x5fa0000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x5fa0000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_h_bu_b (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000004;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000004;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000004;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000004;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_h_bu_b (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000f20;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x00000000000009f0;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_d_wu_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_d_wu_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x00000000002a5429;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x00000000002a5429;
  *((unsigned long *)&__m256i_op1[3]) = 0x417e01f040800000;
  *((unsigned long *)&__m256i_op1[2]) = 0x299d060000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x417e01f040800000;
  *((unsigned long *)&__m256i_op1[0]) = 0x29108b0000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_d_wu_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000008;
  *((unsigned long *)&__m256i_op0[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000008;
  *((unsigned long *)&__m256i_op1[3]) = 0x0707feb60707b7d0;
  *((unsigned long *)&__m256i_op1[2]) = 0x45baa7ef6a95a985;
  *((unsigned long *)&__m256i_op1[1]) = 0x0707feb60707b7d0;
  *((unsigned long *)&__m256i_op1[0]) = 0x45baa7ef6a95a985;
  *((unsigned long *)&__m256i_result[3]) = 0x0707b7cff8f84830;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000354ad4c28;
  *((unsigned long *)&__m256i_result[1]) = 0x0707b7cff8f84830;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000354ad4c28;
  __m256i_out = __lasx_xvmulwev_d_wu_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0xff00d5007f00ffff;
  *((unsigned long *)&__m256i_op0[2]) = 0xff00ffffff00ffff;
  *((unsigned long *)&__m256i_op0[1]) = 0xff00d5007f00ffff;
  *((unsigned long *)&__m256i_op0[0]) = 0xff00ffffff00ffff;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_d_wu_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_d_wu_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0xc03ae000ffff6000;
  *((unsigned long *)&__m256i_op0[2]) = 0xc600000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0xc03ae000ffff6000;
  *((unsigned long *)&__m256i_op0[0]) = 0xc600000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_d_wu_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[2]) = 0x00000000ffffffff;
  *((unsigned long *)&__m256i_op0[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[0]) = 0x00000000ffffffff;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_d_wu_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_d_wu_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0080000000800000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0080000000800000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0080000000800000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0080000000800000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_d_wu_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x00000000000000ff;
  *((unsigned long *)&__m256i_op0[2]) = 0x00000000000000ef;
  *((unsigned long *)&__m256i_op0[1]) = 0x00000000000000ff;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000080;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000016e00;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000016e00;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x000000000155b200;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000b70000;
  __m256i_out = __lasx_xvmulwev_d_wu_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000001ff03fe;
  *((unsigned long *)&__m256i_op0[2]) = 0xfffffec75c2d209f;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000001ff03fe;
  *((unsigned long *)&__m256i_op0[0]) = 0xfffffec75c2d209f;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_d_wu_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0x000000000000008b;
  *((unsigned long *)&__m256i_op1[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0xffffff010000008b;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_d_wu_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000ffff0002fffd;
  *((unsigned long *)&__m256i_op0[2]) = 0x04f104f104f504ed;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000ffff0002fffd;
  *((unsigned long *)&__m256i_op0[0]) = 0x04f104f104f504ed;
  *((unsigned long *)&__m256i_op1[3]) = 0x03af03af03af03af;
  *((unsigned long *)&__m256i_op1[2]) = 0x03acfc5303260e80;
  *((unsigned long *)&__m256i_op1[1]) = 0x03af03af03af03af;
  *((unsigned long *)&__m256i_op1[0]) = 0x03acfc5303260e80;
  *((unsigned long *)&__m256i_result[3]) = 0x00000b0cfffff4f3;
  *((unsigned long *)&__m256i_result[2]) = 0x000f9bb562f56c80;
  *((unsigned long *)&__m256i_result[1]) = 0x00000b0cfffff4f3;
  *((unsigned long *)&__m256i_result[0]) = 0x000f9bb562f56c80;
  __m256i_out = __lasx_xvmulwev_d_wu_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x1000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x1000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_q_du_d (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0101010101010101;
  *((unsigned long *)&__m256i_op0[2]) = 0x3ff1808001020101;
  *((unsigned long *)&__m256i_op0[1]) = 0x0101010101010101;
  *((unsigned long *)&__m256i_op0[0]) = 0x3ff1808001020101;
  *((unsigned long *)&__m256i_op1[3]) = 0x00000ff7f1080ef8;
  *((unsigned long *)&__m256i_op1[2]) = 0x0100000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x00000ff7f1080ef8;
  *((unsigned long *)&__m256i_op1[0]) = 0x0100000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x003ff18080010201;
  *((unsigned long *)&__m256i_result[2]) = 0x0100000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x003ff18080010201;
  *((unsigned long *)&__m256i_result[0]) = 0x0100000000000000;
  __m256i_out = __lasx_xvmulwev_q_du_d (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x00000000f0000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x00000000f0000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_q_du_d (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x1f0fdf7f3e3b31d4;
  *((unsigned long *)&__m256i_op0[2]) = 0x7ff8000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x1f0fdf7f3e3b31d4;
  *((unsigned long *)&__m256i_op0[0]) = 0x7ff8000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0xfbba01c0003f7e3f;
  *((unsigned long *)&__m256i_op1[2]) = 0xffc6cc05c64d960e;
  *((unsigned long *)&__m256i_op1[1]) = 0xfbd884e7003f7e3f;
  *((unsigned long *)&__m256i_op1[0]) = 0xff874dc687870000;
  *((unsigned long *)&__m256i_result[3]) = 0xffe367cc82f8989a;
  *((unsigned long *)&__m256i_result[2]) = 0x4f90000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0xffc3aaa8d58f43c8;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_q_du_d (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_q_du_d (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000020202020;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000020202020;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000020202020;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000020202020;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_q_du_d (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[2]) = 0x8000000080000000;
  *((unsigned long *)&__m256i_op0[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[0]) = 0x8000000080000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_q_du_d (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[2]) = 0xffdfffffffdfffff;
  *((unsigned long *)&__m256i_op0[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[0]) = 0xffdfffffffdfffff;
  *((unsigned long *)&__m256i_op1[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0x0020000000200001;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0x0020000000200001;
  __m256i_out = __lasx_xvmulwev_q_du_d (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x00000000aaabffff;
  *((unsigned long *)&__m256i_op0[2]) = 0x00000000aaabffff;
  *((unsigned long *)&__m256i_op0[1]) = 0x00000000aaabffff;
  *((unsigned long *)&__m256i_op0[0]) = 0x00000000aaabffff;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_q_du_d (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0xfffffffffffff000;
  *((unsigned long *)&__m256i_op0[2]) = 0xffffffffffffff01;
  *((unsigned long *)&__m256i_op0[1]) = 0xfffffffffffffff2;
  *((unsigned long *)&__m256i_op0[0]) = 0xffffffffffffff01;
  *((unsigned long *)&__m256i_op1[3]) = 0x1010101010001000;
  *((unsigned long *)&__m256i_op1[2]) = 0x000000ff000000ff;
  *((unsigned long *)&__m256i_op1[1]) = 0x101010100000000e;
  *((unsigned long *)&__m256i_op1[0]) = 0x000000ff000000ff;
  *((unsigned long *)&__m256i_result[3]) = 0x000000ff000000fe;
  *((unsigned long *)&__m256i_result[2]) = 0xffff01feffff01ff;
  *((unsigned long *)&__m256i_result[1]) = 0x000000ff000000fe;
  *((unsigned long *)&__m256i_result[0]) = 0xffff01feffff01ff;
  __m256i_out = __lasx_xvmulwev_q_du_d (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000ffff02000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000ffff02000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_q_du_d (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_q_du_d (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x5fa0000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x5fa0000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0xe07de0801f20607a;
  *((unsigned long *)&__m256i_op1[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0xe07de0801f20607a;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_q_du_d (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[2]) = 0xfffe97c020010001;
  *((unsigned long *)&__m256i_op0[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[0]) = 0xfffe97c020010001;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_q_du_d (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvmulwev_q_du_d (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  return 0;
}