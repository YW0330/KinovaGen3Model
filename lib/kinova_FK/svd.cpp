//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// svd.cpp
//
// Code generation for function 'svd'
//

// Include files
#include "svd.h"
#include "rt_nonfinite.h"
#include "xaxpy.h"
#include "xdotc.h"
#include "xnrm2.h"
#include "xrot.h"
#include "xrotg.h"
#include "xswap.h"
#include <cmath>

// Function Definitions
namespace coder {
namespace internal {
void svd(const double A[9], double U[9], double s[3], double V[9])
{
  double b_A[9];
  double b_s[3];
  double e[3];
  double work[3];
  double nrm;
  double rt;
  double sm;
  double snorm;
  double sqds;
  double ztest;
  int k;
  int kase;
  int m;
  int q;
  int qjj;
  int qp1;
  int qq;
  b_s[0] = 0.0;
  e[0] = 0.0;
  work[0] = 0.0;
  b_s[1] = 0.0;
  e[1] = 0.0;
  work[1] = 0.0;
  b_s[2] = 0.0;
  e[2] = 0.0;
  work[2] = 0.0;
  for (qjj = 0; qjj < 9; qjj++) {
    b_A[qjj] = A[qjj];
    U[qjj] = 0.0;
    V[qjj] = 0.0;
  }
  for (q = 0; q < 2; q++) {
    boolean_T apply_transform;
    qp1 = q + 2;
    qq = (q + 3 * q) + 1;
    apply_transform = false;
    nrm = blas::xnrm2(3 - q, b_A, qq);
    if (nrm > 0.0) {
      apply_transform = true;
      if (b_A[qq - 1] < 0.0) {
        ztest = -nrm;
        b_s[q] = -nrm;
      } else {
        ztest = nrm;
        b_s[q] = nrm;
      }
      if (std::abs(ztest) >= 1.0020841800044864E-292) {
        nrm = 1.0 / ztest;
        qjj = (qq - q) + 2;
        for (k = qq; k <= qjj; k++) {
          b_A[k - 1] *= nrm;
        }
      } else {
        qjj = (qq - q) + 2;
        for (k = qq; k <= qjj; k++) {
          b_A[k - 1] /= b_s[q];
        }
      }
      b_A[qq - 1]++;
      b_s[q] = -b_s[q];
    } else {
      b_s[q] = 0.0;
    }
    for (kase = qp1; kase < 4; kase++) {
      qjj = q + 3 * (kase - 1);
      if (apply_transform) {
        blas::xaxpy(
            3 - q,
            -(blas::xdotc(3 - q, b_A, qq, b_A, qjj + 1) / b_A[q + 3 * q]), qq,
            b_A, qjj + 1);
      }
      e[kase - 1] = b_A[qjj];
    }
    for (k = q + 1; k < 4; k++) {
      kase = (k + 3 * q) - 1;
      U[kase] = b_A[kase];
    }
    if (q + 1 <= 1) {
      nrm = blas::xnrm2(e, 2);
      if (nrm == 0.0) {
        e[0] = 0.0;
      } else {
        if (e[1] < 0.0) {
          e[0] = -nrm;
        } else {
          e[0] = nrm;
        }
        nrm = e[0];
        if (std::abs(e[0]) >= 1.0020841800044864E-292) {
          nrm = 1.0 / e[0];
          for (k = qp1; k < 4; k++) {
            e[k - 1] *= nrm;
          }
        } else {
          for (k = qp1; k < 4; k++) {
            e[k - 1] /= nrm;
          }
        }
        e[1]++;
        e[0] = -e[0];
        for (k = qp1; k < 4; k++) {
          work[k - 1] = 0.0;
        }
        for (kase = qp1; kase < 4; kase++) {
          blas::xaxpy(2, e[kase - 1], b_A, 3 * (kase - 1) + 2, work, 2);
        }
        for (kase = qp1; kase < 4; kase++) {
          blas::b_xaxpy(2, -e[kase - 1] / e[1], work, 2, b_A,
                        3 * (kase - 1) + 2);
        }
      }
      for (k = qp1; k < 4; k++) {
        V[k - 1] = e[k - 1];
      }
    }
  }
  m = 1;
  b_s[2] = b_A[8];
  e[1] = b_A[7];
  e[2] = 0.0;
  U[6] = 0.0;
  U[7] = 0.0;
  U[8] = 1.0;
  for (q = 1; q >= 0; q--) {
    qp1 = q + 2;
    qq = q + 3 * q;
    if (b_s[q] != 0.0) {
      for (kase = qp1; kase < 4; kase++) {
        qjj = (q + 3 * (kase - 1)) + 1;
        blas::xaxpy(3 - q, -(blas::xdotc(3 - q, U, qq + 1, U, qjj) / U[qq]),
                    qq + 1, U, qjj);
      }
      for (k = q + 1; k < 4; k++) {
        kase = (k + 3 * q) - 1;
        U[kase] = -U[kase];
      }
      U[qq]++;
      if (0 <= q - 1) {
        U[3 * q] = 0.0;
      }
    } else {
      U[3 * q] = 0.0;
      U[3 * q + 1] = 0.0;
      U[3 * q + 2] = 0.0;
      U[qq] = 1.0;
    }
  }
  for (q = 2; q >= 0; q--) {
    if ((q + 1 <= 1) && (e[0] != 0.0)) {
      blas::xaxpy(2, -(blas::xdotc(2, V, 2, V, 5) / V[1]), 2, V, 5);
      blas::xaxpy(2, -(blas::xdotc(2, V, 2, V, 8) / V[1]), 2, V, 8);
    }
    V[3 * q] = 0.0;
    V[3 * q + 1] = 0.0;
    V[3 * q + 2] = 0.0;
    V[q + 3 * q] = 1.0;
  }
  qp1 = 0;
  snorm = 0.0;
  for (q = 0; q < 3; q++) {
    ztest = b_s[q];
    if (ztest != 0.0) {
      rt = std::abs(ztest);
      nrm = ztest / rt;
      b_s[q] = rt;
      if (q + 1 < 3) {
        e[q] /= nrm;
      }
      kase = 3 * q;
      qjj = kase + 3;
      for (k = kase + 1; k <= qjj; k++) {
        U[k - 1] *= nrm;
      }
    }
    if (q + 1 < 3) {
      ztest = e[q];
      if (ztest != 0.0) {
        rt = std::abs(ztest);
        nrm = rt / ztest;
        e[q] = rt;
        b_s[q + 1] *= nrm;
        kase = 3 * (q + 1);
        qjj = kase + 3;
        for (k = kase + 1; k <= qjj; k++) {
          V[k - 1] *= nrm;
        }
      }
    }
    snorm = std::fmax(snorm, std::fmax(std::abs(b_s[q]), std::abs(e[q])));
  }
  while ((m + 2 > 0) && (qp1 < 75)) {
    k = m;
    int exitg1;
    do {
      exitg1 = 0;
      q = k + 1;
      if (k + 1 == 0) {
        exitg1 = 1;
      } else {
        nrm = std::abs(e[k]);
        if ((nrm <= 2.2204460492503131E-16 *
                        (std::abs(b_s[k]) + std::abs(b_s[k + 1]))) ||
            (nrm <= 1.0020841800044864E-292) ||
            ((qp1 > 20) && (nrm <= 2.2204460492503131E-16 * snorm))) {
          e[k] = 0.0;
          exitg1 = 1;
        } else {
          k--;
        }
      }
    } while (exitg1 == 0);
    if (k + 1 == m + 1) {
      kase = 4;
    } else {
      boolean_T exitg2;
      qjj = m + 2;
      kase = m + 2;
      exitg2 = false;
      while ((!exitg2) && (kase >= k + 1)) {
        qjj = kase;
        if (kase == k + 1) {
          exitg2 = true;
        } else {
          nrm = 0.0;
          if (kase < m + 2) {
            nrm = std::abs(e[kase - 1]);
          }
          if (kase > k + 2) {
            nrm += std::abs(e[kase - 2]);
          }
          ztest = std::abs(b_s[kase - 1]);
          if ((ztest <= 2.2204460492503131E-16 * nrm) ||
              (ztest <= 1.0020841800044864E-292)) {
            b_s[kase - 1] = 0.0;
            exitg2 = true;
          } else {
            kase--;
          }
        }
      }
      if (qjj == k + 1) {
        kase = 3;
      } else if (qjj == m + 2) {
        kase = 1;
      } else {
        kase = 2;
        q = qjj;
      }
    }
    switch (kase) {
    case 1:
      ztest = e[m];
      e[m] = 0.0;
      qjj = m + 1;
      for (k = qjj; k >= q + 1; k--) {
        blas::xrotg(&b_s[k - 1], &ztest, &sm, &sqds);
        if (k > q + 1) {
          ztest = -sqds * e[0];
          e[0] *= sm;
        }
        blas::xrot(V, 3 * (k - 1) + 1, 3 * (m + 1) + 1, sm, sqds);
      }
      break;
    case 2:
      ztest = e[q - 1];
      e[q - 1] = 0.0;
      for (k = q + 1; k <= m + 2; k++) {
        blas::xrotg(&b_s[k - 1], &ztest, &sm, &sqds);
        rt = e[k - 1];
        ztest = -sqds * rt;
        e[k - 1] = rt * sm;
        blas::xrot(U, 3 * (k - 1) + 1, 3 * (q - 1) + 1, sm, sqds);
      }
      break;
    case 3: {
      double scale;
      kase = m + 1;
      nrm = b_s[m + 1];
      scale = std::fmax(
          std::fmax(std::fmax(std::fmax(std::abs(nrm), std::abs(b_s[m])),
                              std::abs(e[m])),
                    std::abs(b_s[q])),
          std::abs(e[q]));
      sm = nrm / scale;
      nrm = b_s[m] / scale;
      ztest = e[m] / scale;
      sqds = b_s[q] / scale;
      rt = ((nrm + sm) * (nrm - sm) + ztest * ztest) / 2.0;
      nrm = sm * ztest;
      nrm *= nrm;
      if ((rt != 0.0) || (nrm != 0.0)) {
        ztest = std::sqrt(rt * rt + nrm);
        if (rt < 0.0) {
          ztest = -ztest;
        }
        ztest = nrm / (rt + ztest);
      } else {
        ztest = 0.0;
      }
      ztest += (sqds + sm) * (sqds - sm);
      nrm = sqds * (e[q] / scale);
      for (k = q + 1; k <= kase; k++) {
        blas::xrotg(&ztest, &nrm, &sm, &sqds);
        if (k > q + 1) {
          e[0] = ztest;
        }
        nrm = e[k - 1];
        rt = b_s[k - 1];
        e[k - 1] = sm * nrm - sqds * rt;
        ztest = sqds * b_s[k];
        b_s[k] *= sm;
        blas::xrot(V, 3 * (k - 1) + 1, 3 * k + 1, sm, sqds);
        b_s[k - 1] = sm * rt + sqds * nrm;
        blas::xrotg(&b_s[k - 1], &ztest, &sm, &sqds);
        ztest = sm * e[k - 1] + sqds * b_s[k];
        b_s[k] = -sqds * e[k - 1] + sm * b_s[k];
        nrm = sqds * e[k];
        e[k] *= sm;
        blas::xrot(U, 3 * (k - 1) + 1, 3 * k + 1, sm, sqds);
      }
      e[m] = ztest;
      qp1++;
    } break;
    default:
      if (b_s[q] < 0.0) {
        b_s[q] = -b_s[q];
        kase = 3 * q;
        qjj = kase + 3;
        for (k = kase + 1; k <= qjj; k++) {
          V[k - 1] = -V[k - 1];
        }
      }
      qp1 = q + 1;
      while ((q + 1 < 3) && (b_s[q] < b_s[qp1])) {
        rt = b_s[q];
        b_s[q] = b_s[qp1];
        b_s[qp1] = rt;
        blas::xswap(V, 3 * q + 1, 3 * (q + 1) + 1);
        blas::xswap(U, 3 * q + 1, 3 * (q + 1) + 1);
        q = qp1;
        qp1++;
      }
      qp1 = 0;
      m--;
      break;
    }
  }
  s[0] = b_s[0];
  s[1] = b_s[1];
  s[2] = b_s[2];
}

} // namespace internal
} // namespace coder

// End of code generation (svd.cpp)
