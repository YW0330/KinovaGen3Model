//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: xdotc.cpp
//
// MATLAB Coder version            : 5.1
// C/C++ source code generated on  : 13-Mar-2022 17:09:26
//

// Include Files
#include "xdotc.h"
#include "rt_nonfinite.h"

// Function Definitions
//
// Arguments    : int n
//                const double x[36]
//                int ix0
//                const double y[36]
//                int iy0
// Return Type  : double
//
namespace coder
{
  namespace internal
  {
    namespace blas
    {
      double b_xdotc(int n, const double x[36], int ix0, const double y[36], int
                     iy0)
      {
        double d;
        int ix;
        int iy;
        ix = ix0;
        iy = iy0;
        d = 0.0;
        for (int k = 0; k < n; k++) {
          d += x[ix - 1] * y[iy - 1];
          ix++;
          iy++;
        }

        return d;
      }

      //
      // Arguments    : int n
      //                const double x[42]
      //                int ix0
      //                const double y[42]
      //                int iy0
      // Return Type  : double
      //
      double xdotc(int n, const double x[42], int ix0, const double y[42], int
                   iy0)
      {
        double d;
        int ix;
        int iy;
        ix = ix0;
        iy = iy0;
        d = 0.0;
        for (int k = 0; k < n; k++) {
          d += x[ix - 1] * y[iy - 1];
          ix++;
          iy++;
        }

        return d;
      }
    }
  }
}

//
// File trailer for xdotc.cpp
//
// [EOF]
//
