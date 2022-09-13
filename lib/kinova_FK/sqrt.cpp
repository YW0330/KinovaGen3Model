//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sqrt.cpp
//
// Code generation for function 'sqrt'
//

// Include files
#include "sqrt.h"
#include "rt_nonfinite.h"
#include <cmath>

// Function Declarations
static double rt_hypotd_snf(double u0, double u1);

// Function Definitions
static double rt_hypotd_snf(double u0, double u1)
{
  double a;
  double y;
  a = std::abs(u0);
  y = std::abs(u1);
  if (a < y) {
    a /= y;
    y *= std::sqrt(a * a + 1.0);
  } else if (a > y) {
    y /= a;
    y = a * std::sqrt(y * y + 1.0);
  } else if (!std::isnan(y)) {
    y = a * 1.4142135623730951;
  }
  return y;
}

namespace coder {
namespace internal {
namespace scalar {
void b_sqrt(creal_T *x)
{
  double absxr;
  double xi;
  double xr;
  xr = x->re;
  xi = x->im;
  if (xi == 0.0) {
    if (xr < 0.0) {
      absxr = 0.0;
      xr = std::sqrt(-xr);
    } else {
      absxr = std::sqrt(xr);
      xr = 0.0;
    }
  } else if (xr == 0.0) {
    if (xi < 0.0) {
      absxr = std::sqrt(-xi / 2.0);
      xr = -absxr;
    } else {
      absxr = std::sqrt(xi / 2.0);
      xr = absxr;
    }
  } else if (std::isnan(xr)) {
    absxr = xr;
  } else if (std::isnan(xi)) {
    absxr = xi;
    xr = xi;
  } else {
    absxr = std::abs(xr);
    absxr = std::sqrt((rt_hypotd_snf(absxr, std::abs(xi)) + absxr) * 0.5);
    if (xr > 0.0) {
      xr = 0.5 * (xi / absxr);
    } else {
      if (xi < 0.0) {
        xr = -absxr;
      } else {
        xr = absxr;
      }
      absxr = 0.5 * (xi / xr);
    }
  }
  x->re = absxr;
  x->im = xr;
}

} // namespace scalar
} // namespace internal
} // namespace coder

// End of code generation (sqrt.cpp)
