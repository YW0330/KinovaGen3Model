//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// CoriolisMatrix.h
//
// Code generation for function 'CoriolisMatrix'
//

#ifndef CORIOLISMATRIX_H
#define CORIOLISMATRIX_H

// Include files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Type Definitions
class CoriolisMatrix {
public:
  CoriolisMatrix();
  ~CoriolisMatrix();
  void model_C(double q1, double q2, double q3, double q4, double q5, double q6,
               double q7, double dq1, double dq2, double dq3, double dq4,
               double dq5, double dq6, double dq7, double C[49]);
};

#endif
// End of code generation (CoriolisMatrix.h)
