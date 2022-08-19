//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: xswap.cpp
//
// MATLAB Coder version            : 4.3
// C/C++ source code generated on  : 18-Aug-2022 17:03:06
//

// Include Files
#include "xswap.h"
#include "kinova_J_and_Jinv.h"
#include "rt_nonfinite.h"

// Function Definitions

//
// Arguments    : double x[42]
//                int ix0
//                int iy0
// Return Type  : void
//
void b_xswap(double x[42], int ix0, int iy0)
{
  int ix;
  int iy;
  int k;
  double temp;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < 7; k++) {
    temp = x[ix];
    x[ix] = x[iy];
    x[iy] = temp;
    ix++;
    iy++;
  }
}

//
// Arguments    : double x[36]
//                int ix0
//                int iy0
// Return Type  : void
//
void xswap(double x[36], int ix0, int iy0)
{
  int ix;
  int iy;
  int k;
  double temp;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < 6; k++) {
    temp = x[ix];
    x[ix] = x[iy];
    x[iy] = temp;
    ix++;
    iy++;
  }
}

//
// File trailer for xswap.cpp
//
// [EOF]
//
