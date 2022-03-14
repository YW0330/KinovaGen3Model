//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: svd.cpp
//
// MATLAB Coder version            : 5.1
// C/C++ source code generated on  : 13-Mar-2022 17:09:26
//

// Include Files
#include "svd.h"
#include "rt_nonfinite.h"
#include "xaxpy.h"
#include "xdotc.h"
#include "xnrm2.h"
#include "xrot.h"
#include "xrotg.h"
#include "xswap.h"
#include "rt_nonfinite.h"
#include <cmath>
#include <cstring>

// Function Definitions
//
// Arguments    : const double A[42]
//                double U[42]
//                double s[6]
//                double V[36]
// Return Type  : void
//
namespace coder
{
  namespace internal
  {
    void svd(const double A[42], double U[42], double s[6], double V[36])
    {
      double b_A[42];
      double Vf[36];
      double work[7];
      double b_s[6];
      double e[6];
      double nrm;
      double rt;
      double sm;
      double snorm;
      double sqds;
      double ztest;
      int i;
      int k;
      int m;
      int q;
      int qp1;
      int qp1jj;
      int qq;
      std::memcpy(&b_A[0], &A[0], 42U * sizeof(double));
      for (i = 0; i < 6; i++) {
        b_s[i] = 0.0;
        e[i] = 0.0;
      }

      for (i = 0; i < 7; i++) {
        work[i] = 0.0;
      }

      std::memset(&U[0], 0, 42U * sizeof(double));
      std::memset(&Vf[0], 0, 36U * sizeof(double));
      for (q = 0; q < 6; q++) {
        boolean_T apply_transform;
        qp1 = q + 2;
        qq = (q + 7 * q) + 1;
        apply_transform = false;
        nrm = blas::xnrm2(7 - q, b_A, qq);
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
            qp1jj = (qq - q) + 6;
            for (k = qq; k <= qp1jj; k++) {
              b_A[k - 1] *= nrm;
            }
          } else {
            qp1jj = (qq - q) + 6;
            for (k = qq; k <= qp1jj; k++) {
              b_A[k - 1] /= b_s[q];
            }
          }

          b_A[qq - 1]++;
          b_s[q] = -b_s[q];
        } else {
          b_s[q] = 0.0;
        }

        for (k = qp1; k < 7; k++) {
          i = q + 7 * (k - 1);
          if (apply_transform) {
            blas::xaxpy(7 - q, -(blas::xdotc(7 - q, b_A, qq, b_A, i + 1) / b_A[q
                                 + 7 * q]), qq, b_A, i + 1);
          }

          e[k - 1] = b_A[i];
        }

        for (k = q + 1; k < 8; k++) {
          i = (k + 7 * q) - 1;
          U[i] = b_A[i];
        }

        if (q + 1 <= 4) {
          nrm = blas::b_xnrm2(5 - q, e, q + 2);
          if (nrm == 0.0) {
            e[q] = 0.0;
          } else {
            if (e[q + 1] < 0.0) {
              e[q] = -nrm;
            } else {
              e[q] = nrm;
            }

            nrm = e[q];
            if (std::abs(e[q]) >= 1.0020841800044864E-292) {
              nrm = 1.0 / e[q];
              for (k = qp1; k < 7; k++) {
                e[k - 1] *= nrm;
              }
            } else {
              for (k = qp1; k < 7; k++) {
                e[k - 1] /= nrm;
              }
            }

            e[q + 1]++;
            e[q] = -e[q];
            for (k = qp1; k < 8; k++) {
              work[k - 1] = 0.0;
            }

            for (k = qp1; k < 7; k++) {
              blas::xaxpy(6 - q, e[k - 1], b_A, (q + 7 * (k - 1)) + 2, work, q +
                          2);
            }

            for (k = qp1; k < 7; k++) {
              blas::b_xaxpy(6 - q, -e[k - 1] / e[q + 1], work, q + 2, b_A, (q +
                7 * (k - 1)) + 2);
            }
          }

          for (k = qp1; k < 7; k++) {
            Vf[(k + 6 * q) - 1] = e[k - 1];
          }
        }
      }

      m = 4;
      e[4] = b_A[39];
      e[5] = 0.0;
      for (q = 5; q >= 0; q--) {
        qp1 = q + 2;
        qq = q + 7 * q;
        if (b_s[q] != 0.0) {
          for (k = qp1; k < 7; k++) {
            i = (q + 7 * (k - 1)) + 1;
            blas::xaxpy(7 - q, -(blas::xdotc(7 - q, U, qq + 1, U, i) / U[qq]),
                        qq + 1, U, i);
          }

          for (k = q + 1; k < 8; k++) {
            i = (k + 7 * q) - 1;
            U[i] = -U[i];
          }

          U[qq]++;
          for (k = 0; k < q; k++) {
            U[k + 7 * q] = 0.0;
          }
        } else {
          for (k = 0; k < 7; k++) {
            U[k + 7 * q] = 0.0;
          }

          U[qq] = 1.0;
        }
      }

      for (q = 5; q >= 0; q--) {
        if ((q + 1 <= 4) && (e[q] != 0.0)) {
          qp1 = q + 2;
          i = (q + 6 * q) + 2;
          for (k = qp1; k < 7; k++) {
            qp1jj = (q + 6 * (k - 1)) + 2;
            blas::b_xaxpy(5 - q, -(blas::b_xdotc(5 - q, Vf, i, Vf, qp1jj) / Vf[i
              - 1]), i, Vf, qp1jj);
          }
        }

        for (k = 0; k < 6; k++) {
          Vf[k + 6 * q] = 0.0;
        }

        Vf[q + 6 * q] = 1.0;
      }

      qq = 0;
      snorm = 0.0;
      for (q = 0; q < 6; q++) {
        ztest = b_s[q];
        if (ztest != 0.0) {
          rt = std::abs(ztest);
          nrm = ztest / rt;
          b_s[q] = rt;
          if (q + 1 < 6) {
            e[q] /= nrm;
          }

          i = 7 * q;
          qp1jj = i + 7;
          for (k = i + 1; k <= qp1jj; k++) {
            U[k - 1] *= nrm;
          }
        }

        if (q + 1 < 6) {
          ztest = e[q];
          if (ztest != 0.0) {
            rt = std::abs(ztest);
            nrm = rt / ztest;
            e[q] = rt;
            b_s[q + 1] *= nrm;
            i = 6 * (q + 1);
            qp1jj = i + 6;
            for (k = i + 1; k <= qp1jj; k++) {
              Vf[k - 1] *= nrm;
            }
          }
        }

        nrm = std::abs(b_s[q]);
        ztest = std::abs(e[q]);
        if ((nrm > ztest) || rtIsNaN(ztest)) {
          ztest = nrm;
        }

        if ((!(snorm > ztest)) && (!rtIsNaN(ztest))) {
          snorm = ztest;
        }
      }

      while ((m + 2 > 0) && (qq < 75)) {
        k = m;
        int exitg1;
        do {
          exitg1 = 0;
          q = k + 1;
          if (k + 1 == 0) {
            exitg1 = 1;
          } else {
            nrm = std::abs(e[k]);
            if ((nrm <= 2.2204460492503131E-16 * (std::abs(b_s[k]) + std::abs
                  (b_s[k + 1]))) || (nrm <= 1.0020841800044864E-292) || ((qq >
                  20) && (nrm <= 2.2204460492503131E-16 * snorm))) {
              e[k] = 0.0;
              exitg1 = 1;
            } else {
              k--;
            }
          }
        } while (exitg1 == 0);

        if (k + 1 == m + 1) {
          i = 4;
        } else {
          boolean_T exitg2;
          qp1jj = m + 2;
          i = m + 2;
          exitg2 = false;
          while ((!exitg2) && (i >= k + 1)) {
            qp1jj = i;
            if (i == k + 1) {
              exitg2 = true;
            } else {
              nrm = 0.0;
              if (i < m + 2) {
                nrm = std::abs(e[i - 1]);
              }

              if (i > k + 2) {
                nrm += std::abs(e[i - 2]);
              }

              ztest = std::abs(b_s[i - 1]);
              if ((ztest <= 2.2204460492503131E-16 * nrm) || (ztest <=
                   1.0020841800044864E-292)) {
                b_s[i - 1] = 0.0;
                exitg2 = true;
              } else {
                i--;
              }
            }
          }

          if (qp1jj == k + 1) {
            i = 3;
          } else if (qp1jj == m + 2) {
            i = 1;
          } else {
            i = 2;
            q = qp1jj;
          }
        }

        switch (i) {
         case 1:
          ztest = e[m];
          e[m] = 0.0;
          qp1jj = m + 1;
          for (k = qp1jj; k >= q + 1; k--) {
            blas::xrotg(&b_s[k - 1], &ztest, &sm, &sqds);
            if (k > q + 1) {
              rt = e[k - 2];
              ztest = -sqds * rt;
              e[k - 2] = rt * sm;
            }

            blas::xrot(Vf, 6 * (k - 1) + 1, 6 * (m + 1) + 1, sm, sqds);
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
            blas::b_xrot(U, 7 * (k - 1) + 1, 7 * (q - 1) + 1, sm, sqds);
          }
          break;

         case 3:
          {
            double scale;
            i = m + 1;
            nrm = b_s[m + 1];
            scale = std::abs(nrm);
            ztest = std::abs(b_s[m]);
            if ((!(scale > ztest)) && (!rtIsNaN(ztest))) {
              scale = ztest;
            }

            ztest = std::abs(e[m]);
            if ((!(scale > ztest)) && (!rtIsNaN(ztest))) {
              scale = ztest;
            }

            ztest = std::abs(b_s[q]);
            if ((!(scale > ztest)) && (!rtIsNaN(ztest))) {
              scale = ztest;
            }

            ztest = std::abs(e[q]);
            if ((!(scale > ztest)) && (!rtIsNaN(ztest))) {
              scale = ztest;
            }

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
            for (k = q + 1; k <= i; k++) {
              blas::xrotg(&ztest, &nrm, &sm, &sqds);
              if (k > q + 1) {
                e[k - 2] = ztest;
              }

              nrm = e[k - 1];
              rt = b_s[k - 1];
              e[k - 1] = sm * nrm - sqds * rt;
              ztest = sqds * b_s[k];
              b_s[k] *= sm;
              blas::xrot(Vf, 6 * (k - 1) + 1, 6 * k + 1, sm, sqds);
              b_s[k - 1] = sm * rt + sqds * nrm;
              blas::xrotg(&b_s[k - 1], &ztest, &sm, &sqds);
              ztest = sm * e[k - 1] + sqds * b_s[k];
              b_s[k] = -sqds * e[k - 1] + sm * b_s[k];
              nrm = sqds * e[k];
              e[k] *= sm;
              blas::b_xrot(U, 7 * (k - 1) + 1, 7 * k + 1, sm, sqds);
            }

            e[m] = ztest;
            qq++;
          }
          break;

         default:
          if (b_s[q] < 0.0) {
            b_s[q] = -b_s[q];
            i = 6 * q;
            qp1jj = i + 6;
            for (k = i + 1; k <= qp1jj; k++) {
              Vf[k - 1] = -Vf[k - 1];
            }
          }

          qp1 = q + 1;
          while ((q + 1 < 6) && (b_s[q] < b_s[qp1])) {
            rt = b_s[q];
            b_s[q] = b_s[qp1];
            b_s[qp1] = rt;
            blas::xswap(Vf, 6 * q + 1, 6 * (q + 1) + 1);
            blas::b_xswap(U, 7 * q + 1, 7 * (q + 1) + 1);
            q = qp1;
            qp1++;
          }

          qq = 0;
          m--;
          break;
        }
      }

      for (k = 0; k < 6; k++) {
        s[k] = b_s[k];
        for (i = 0; i < 6; i++) {
          qp1jj = i + 6 * k;
          V[qp1jj] = Vf[qp1jj];
        }
      }
    }
  }
}

//
// File trailer for svd.cpp
//
// [EOF]
//
