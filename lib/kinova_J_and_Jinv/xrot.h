//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: xrot.h
//
// MATLAB Coder version            : 4.3
// C/C++ source code generated on  : 18-Aug-2022 17:03:06
//
#ifndef XROT_H
#define XROT_H

// Include Files
#include <cstddef>
#include <cstdlib>
#include "rtwtypes.h"
#include "kinova_J_and_Jinv_types.h"

// Function Declarations
extern void b_xrot(double x[42], int ix0, int iy0, double c, double s);
extern void xrot(double x[36], int ix0, int iy0, double c, double s);

#endif

//
// File trailer for xrot.h
//
// [EOF]
//
