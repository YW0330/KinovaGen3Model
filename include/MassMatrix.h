//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// MassMatrix.h
//
// Code generation for function 'MassMatrix'
//

#ifndef MASSMATRIX_H
#define MASSMATRIX_H

// Include files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Type Definitions
class MassMatrix {
public:
  MassMatrix();
  ~MassMatrix();
  void model_M(double q1, double q2, double q3, double q4, double q5, double q6,
               double q7, double M[49]);
};

#endif
// End of code generation (MassMatrix.h)
