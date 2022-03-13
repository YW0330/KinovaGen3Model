//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: xdotc.h
//
// MATLAB Coder version            : 5.1
// C/C++ source code generated on  : 13-Mar-2022 17:09:26
//
#ifndef XDOTC_H
#define XDOTC_H

// Include Files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Function Declarations
namespace coder
{
  namespace internal
  {
    namespace blas
    {
      double b_xdotc(int n, const double x[36], int ix0, const double y[36], int
                     iy0);
      double xdotc(int n, const double x[42], int ix0, const double y[42], int
                   iy0);
    }
  }
}

#endif

//
// File trailer for xdotc.h
//
// [EOF]
//
