//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: kinova_J_and_Jinv_initialize.cpp
//
// MATLAB Coder version            : 4.3
// C/C++ source code generated on  : 18-Aug-2022 17:03:06
//

// Include Files
#include "kinova_J_and_Jinv_initialize.h"
#include "kinova_J_and_Jinv.h"
#include "kinova_J_and_Jinv_data.h"
#include "rt_nonfinite.h"

// Function Definitions

//
// Arguments    : void
// Return Type  : void
//
void kinova_J_and_Jinv_initialize()
{
  rt_InitInfAndNaN();
  isInitialized_kinova_J_and_Jinv = true;
}

//
// File trailer for kinova_J_and_Jinv_initialize.cpp
//
// [EOF]
//
