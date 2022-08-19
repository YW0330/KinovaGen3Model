//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: xaxpy.h
//
// MATLAB Coder version            : 4.3
// C/C++ source code generated on  : 18-Aug-2022 17:03:06
//
#ifndef XAXPY_H
#define XAXPY_H

// Include Files
#include <cstddef>
#include <cstdlib>
#include "rtwtypes.h"
#include "kinova_J_and_Jinv_types.h"

// Function Declarations
extern void b_xaxpy(int n, double a, const double x[42], int ix0, double y[7],
                    int iy0);
extern void c_xaxpy(int n, double a, const double x[7], int ix0, double y[42],
                    int iy0);
extern void d_xaxpy(int n, double a, int ix0, double y[36], int iy0);
extern void xaxpy(int n, double a, int ix0, double y[42], int iy0);

#endif

//
// File trailer for xaxpy.h
//
// [EOF]
//
