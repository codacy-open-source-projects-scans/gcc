/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -fno-vect-cost-model -march=rv32gcv_zvfh -mabi=ilp32d --param=riscv-autovec-preference=scalable" } */

#include "vfwcvt-ftoi-template.h"

/* { dg-final { scan-assembler-times {\tvfwcvt\.rtz\.x\.f\.v} 2 } } */
/* { dg-final { scan-assembler-times {\tvfwcvt\.rtz\.xu\.f\.v} 2 } } */