//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: ModelPosition.h
//
// MATLAB Coder version            : 5.1
// C/C++ source code generated on  : 12-Mar-2022 21:00:26
//
#ifndef MODELPOSITION_H
#define MODELPOSITION_H

// Include Files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Type Definitions
class ModelPosition
{
 public:
  ModelPosition();
  ~ModelPosition();
  void model_X_beforre_gripper(double q1, double q2, double q3, double q4,
    double q5, double q6, double q7, double Pbgripper[3]);
};

#endif

//
// File trailer for ModelPosition.h
//
// [EOF]
//
