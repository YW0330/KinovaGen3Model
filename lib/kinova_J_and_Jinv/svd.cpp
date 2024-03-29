//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: svd.cpp
//
// MATLAB Coder version            : 4.3
// C/C++ source code generated on  : 18-Aug-2022 17:03:06
//

// Include Files
#include "svd.h"
#include "kinova_J_and_Jinv.h"
#include "rt_nonfinite.h"
#include "xaxpy.h"
#include "xdotc.h"
#include "xnrm2.h"
#include "xrot.h"
#include "xrotg.h"
#include "xswap.h"
#include <math.h>
#include <string.h>

// Function Definitions

//
// Arguments    : const double A[42]
//                double U[42]
//                double s[6]
//                double V[36]
// Return Type  : void
//
void svd(const double A[42], double U[42], double s[6], double V[36])
{
  double b_A[42];
  int i;
  double b_s[6];
  double e[6];
  double work[7];
  double Vf[36];
  int q;
  int m;
  int qp1;
  int qq;
  boolean_T apply_transform;
  double nrm;
  int k;
  double snorm;
  int qp1jj;
  double r;
  int exitg1;
  boolean_T exitg2;
  double scale;
  double sm;
  double sqds;
  double b;
  memcpy(&b_A[0], &A[0], 42U * sizeof(double));
  for (i = 0; i < 6; i++) {
    b_s[i] = 0.0;
    e[i] = 0.0;
  }

  for (i = 0; i < 7; i++) {
    work[i] = 0.0;
  }

  memset(&U[0], 0, 42U * sizeof(double));
  memset(&Vf[0], 0, 36U * sizeof(double));
  for (q = 0; q < 6; q++) {
    qp1 = q + 2;
    qq = (q + 7 * q) + 1;
    apply_transform = false;
    nrm = xnrm2(7 - q, b_A, qq);
    if (nrm > 0.0) {
      apply_transform = true;
      if (b_A[qq - 1] < 0.0) {
        nrm = -nrm;
      }

      b_s[q] = nrm;
      if (fabs(nrm) >= 1.0020841800044864E-292) {
        nrm = 1.0 / nrm;
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
        xaxpy(7 - q, -(xdotc(7 - q, b_A, qq, b_A, i + 1) / b_A[q + 7 * q]), qq,
              b_A, i + 1);
      }

      e[k - 1] = b_A[i];
    }

    for (k = q + 1; k < 8; k++) {
      i = (k + 7 * q) - 1;
      U[i] = b_A[i];
    }

    if (q + 1 <= 4) {
      nrm = b_xnrm2(5 - q, e, q + 2);
      if (nrm == 0.0) {
        e[q] = 0.0;
      } else {
        if (e[q + 1] < 0.0) {
          e[q] = -nrm;
        } else {
          e[q] = nrm;
        }

        nrm = e[q];
        if (fabs(e[q]) >= 1.0020841800044864E-292) {
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
          b_xaxpy(6 - q, e[k - 1], b_A, (q + 7 * (k - 1)) + 2, work, q + 2);
        }

        for (k = qp1; k < 7; k++) {
          c_xaxpy(6 - q, -e[k - 1] / e[q + 1], work, q + 2, b_A, (q + 7 * (k - 1))
                  + 2);
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
        xaxpy(7 - q, -(xdotc(7 - q, U, qq + 1, U, i) / U[qq]), qq + 1, U, i);
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
        d_xaxpy(5 - q, -(b_xdotc(5 - q, Vf, i, Vf, qp1jj) / Vf[i - 1]), i, Vf,
                qp1jj);
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
    if (b_s[q] != 0.0) {
      nrm = fabs(b_s[q]);
      r = b_s[q] / nrm;
      b_s[q] = nrm;
      if (q + 1 < 6) {
        e[q] /= r;
      }

      i = 7 * q;
      qp1jj = i + 7;
      for (k = i + 1; k <= qp1jj; k++) {
        U[k - 1] *= r;
      }
    }

    if ((q + 1 < 6) && (e[q] != 0.0)) {
      nrm = fabs(e[q]);
      r = nrm / e[q];
      e[q] = nrm;
      b_s[q + 1] *= r;
      i = 6 * (q + 1);
      qp1jj = i + 6;
      for (k = i + 1; k <= qp1jj; k++) {
        Vf[k - 1] *= r;
      }
    }

    nrm = fabs(b_s[q]);
    r = fabs(e[q]);
    if ((nrm > r) || rtIsNaN(r)) {
      r = nrm;
    }

    if ((!(snorm > r)) && (!rtIsNaN(r))) {
      snorm = r;
    }
  }

  while ((m + 2 > 0) && (qq < 75)) {
    k = m;
    do {
      exitg1 = 0;
      q = k + 1;
      if (k + 1 == 0) {
        exitg1 = 1;
      } else {
        nrm = fabs(e[k]);
        if ((nrm <= 2.2204460492503131E-16 * (fabs(b_s[k]) + fabs(b_s[k + 1]))) ||
            (nrm <= 1.0020841800044864E-292) || ((qq > 20) && (nrm <=
              2.2204460492503131E-16 * snorm))) {
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
            nrm = fabs(e[i - 1]);
          }

          if (i > k + 2) {
            nrm += fabs(e[i - 2]);
          }

          r = fabs(b_s[i - 1]);
          if ((r <= 2.2204460492503131E-16 * nrm) || (r <=
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
      r = e[m];
      e[m] = 0.0;
      qp1jj = m + 1;
      for (k = qp1jj; k >= q + 1; k--) {
        xrotg(&b_s[k - 1], &r, &sm, &sqds);
        if (k > q + 1) {
          b = e[k - 2];
          r = -sqds * b;
          e[k - 2] = b * sm;
        }

        xrot(Vf, 6 * (k - 1) + 1, 6 * (m + 1) + 1, sm, sqds);
      }
      break;

     case 2:
      r = e[q - 1];
      e[q - 1] = 0.0;
      for (k = q + 1; k <= m + 2; k++) {
        xrotg(&b_s[k - 1], &r, &sm, &sqds);
        b = e[k - 1];
        r = -sqds * b;
        e[k - 1] = b * sm;
        b_xrot(U, 7 * (k - 1) + 1, 7 * (q - 1) + 1, sm, sqds);
      }
      break;

     case 3:
      i = m + 1;
      nrm = b_s[m + 1];
      scale = fabs(nrm);
      r = fabs(b_s[m]);
      if ((!(scale > r)) && (!rtIsNaN(r))) {
        scale = r;
      }

      r = fabs(e[m]);
      if ((!(scale > r)) && (!rtIsNaN(r))) {
        scale = r;
      }

      r = fabs(b_s[q]);
      if ((!(scale > r)) && (!rtIsNaN(r))) {
        scale = r;
      }

      r = fabs(e[q]);
      if ((!(scale > r)) && (!rtIsNaN(r))) {
        scale = r;
      }

      sm = nrm / scale;
      nrm = b_s[m] / scale;
      r = e[m] / scale;
      sqds = b_s[q] / scale;
      b = ((nrm + sm) * (nrm - sm) + r * r) / 2.0;
      nrm = sm * r;
      nrm *= nrm;
      if ((b != 0.0) || (nrm != 0.0)) {
        r = sqrt(b * b + nrm);
        if (b < 0.0) {
          r = -r;
        }

        r = nrm / (b + r);
      } else {
        r = 0.0;
      }

      r += (sqds + sm) * (sqds - sm);
      nrm = sqds * (e[q] / scale);
      for (k = q + 1; k <= i; k++) {
        xrotg(&r, &nrm, &sm, &sqds);
        if (k > q + 1) {
          e[k - 2] = r;
        }

        nrm = e[k - 1];
        b = b_s[k - 1];
        e[k - 1] = sm * nrm - sqds * b;
        r = sqds * b_s[k];
        b_s[k] *= sm;
        xrot(Vf, 6 * (k - 1) + 1, 6 * k + 1, sm, sqds);
        b_s[k - 1] = sm * b + sqds * nrm;
        xrotg(&b_s[k - 1], &r, &sm, &sqds);
        r = sm * e[k - 1] + sqds * b_s[k];
        b_s[k] = -sqds * e[k - 1] + sm * b_s[k];
        nrm = sqds * e[k];
        e[k] *= sm;
        b_xrot(U, 7 * (k - 1) + 1, 7 * k + 1, sm, sqds);
      }

      e[m] = r;
      qq++;
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
        nrm = b_s[q];
        b_s[q] = b_s[qp1];
        b_s[qp1] = nrm;
        xswap(Vf, 6 * q + 1, 6 * (q + 1) + 1);
        b_xswap(U, 7 * q + 1, 7 * (q + 1) + 1);
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

//
// File trailer for svd.cpp
//
// [EOF]
//
