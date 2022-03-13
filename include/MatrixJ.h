//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: MatrixJ.h
//
// MATLAB Coder version            : 5.1
// C/C++ source code generated on  : 13-Mar-2022 17:09:26
//
#ifndef MATRIXJ_H
#define MATRIXJ_H

// Include Files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Type Definitions
class MatrixJ
{
 public:
  MatrixJ();
  ~MatrixJ();
  void model_J(double q1, double q2, double q3, double q4, double q5, double q6,
               double q7, double Jacobi[42], double Jacobi_inv[42], double
               Jacobi_tra[42]);
};

#endif

//
// File trailer for MatrixJ.h
//
// [EOF]
//
