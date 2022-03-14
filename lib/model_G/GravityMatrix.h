//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// GravityMatrix.h
//
// Code generation for function 'GravityMatrix'
//

#ifndef GRAVITYMATRIX_H
#define GRAVITYMATRIX_H

// Include files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Type Definitions
class GravityMatrix {
public:
  GravityMatrix();
  ~GravityMatrix();
  void model_G(double q1, double q2, double q3, double q4, double q5, double q6,
               double q7, double g, double G[7]);
};

#endif
// End of code generation (GravityMatrix.h)
