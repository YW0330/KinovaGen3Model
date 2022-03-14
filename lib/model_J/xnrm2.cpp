//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: xnrm2.cpp
//
// MATLAB Coder version            : 5.1
// C/C++ source code generated on  : 13-Mar-2022 17:09:26
//

// Include Files
#include "xnrm2.h"
#include "rt_nonfinite.h"
#include <cmath>

// Function Definitions
//
// Arguments    : int n
//                const double x[6]
//                int ix0
// Return Type  : double
//
namespace coder
{
  namespace internal
  {
    namespace blas
    {
      double b_xnrm2(int n, const double x[6], int ix0)
      {
        double scale;
        double y;
        int kend;
        y = 0.0;
        scale = 3.3121686421112381E-170;
        kend = (ix0 + n) - 1;
        for (int k = ix0; k <= kend; k++) {
          double absxk;
          absxk = std::abs(x[k - 1]);
          if (absxk > scale) {
            double t;
            t = scale / absxk;
            y = y * t * t + 1.0;
            scale = absxk;
          } else {
            double t;
            t = absxk / scale;
            y += t * t;
          }
        }

        return scale * std::sqrt(y);
      }

      //
      // Arguments    : int n
      //                const double x[42]
      //                int ix0
      // Return Type  : double
      //
      double xnrm2(int n, const double x[42], int ix0)
      {
        double scale;
        double y;
        int kend;
        y = 0.0;
        scale = 3.3121686421112381E-170;
        kend = (ix0 + n) - 1;
        for (int k = ix0; k <= kend; k++) {
          double absxk;
          absxk = std::abs(x[k - 1]);
          if (absxk > scale) {
            double t;
            t = scale / absxk;
            y = y * t * t + 1.0;
            scale = absxk;
          } else {
            double t;
            t = absxk / scale;
            y += t * t;
          }
        }

        return scale * std::sqrt(y);
      }
    }
  }
}

//
// File trailer for xnrm2.cpp
//
// [EOF]
//
