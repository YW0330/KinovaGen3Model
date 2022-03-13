//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: xrot.cpp
//
// MATLAB Coder version            : 5.1
// C/C++ source code generated on  : 13-Mar-2022 17:09:26
//

// Include Files
#include "xrot.h"
#include "rt_nonfinite.h"

// Function Definitions
//
// Arguments    : double x[42]
//                int ix0
//                int iy0
//                double c
//                double s
// Return Type  : void
//
namespace coder
{
  namespace internal
  {
    namespace blas
    {
      void b_xrot(double x[42], int ix0, int iy0, double c, double s)
      {
        int ix;
        int iy;
        ix = ix0 - 1;
        iy = iy0 - 1;
        for (int k = 0; k < 7; k++) {
          double temp;
          temp = c * x[ix] + s * x[iy];
          x[iy] = c * x[iy] - s * x[ix];
          x[ix] = temp;
          iy++;
          ix++;
        }
      }

      //
      // Arguments    : double x[36]
      //                int ix0
      //                int iy0
      //                double c
      //                double s
      // Return Type  : void
      //
      void xrot(double x[36], int ix0, int iy0, double c, double s)
      {
        int ix;
        int iy;
        ix = ix0 - 1;
        iy = iy0 - 1;
        for (int k = 0; k < 6; k++) {
          double temp;
          temp = c * x[ix] + s * x[iy];
          x[iy] = c * x[iy] - s * x[ix];
          x[ix] = temp;
          iy++;
          ix++;
        }
      }
    }
  }
}

//
// File trailer for xrot.cpp
//
// [EOF]
//
