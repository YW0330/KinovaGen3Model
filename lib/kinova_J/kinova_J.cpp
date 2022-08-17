//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: kinova_J.cpp
//
// MATLAB Coder version            : 5.2
// C/C++ source code generated on  : 17-Aug-2022 23:54:32
//

// Include Files
#include "kinova_J.h"
#include <math.h>

// Function Definitions
//
// 參數設定
//
// Arguments    : double q1
//                double q2
//                double q3
//                double q4
//                double q5
//                double q6
//                double J[42]
// Return Type  : void
//
void kinova_J(double q1, double q2, double q3, double q4, double q5, double q6,
              double J[42])
{
  double t10;
  double t105_tmp;
  double t107;
  double t107_tmp;
  double t11;
  double t114;
  double t115_tmp;
  double t118;
  double t119;
  double t12;
  double t120;
  double t124;
  double t125;
  double t13;
  double t16;
  double t19;
  double t2;
  double t20;
  double t21;
  double t22;
  double t24;
  double t25;
  double t27_tmp;
  double t29;
  double t3;
  double t30_tmp;
  double t34_tmp;
  double t35_tmp;
  double t37;
  double t39;
  double t4;
  double t41;
  double t43;
  double t44;
  double t46;
  double t48;
  double t5;
  double t6;
  double t62;
  double t63;
  double t66;
  double t68;
  double t7;
  double t72;
  double t8;
  double t81;
  double t82;
  double t85;
  double t89;
  double t9;
  double t90;
  double t94;
  double t94_tmp;
  t2 = cos(q1);
  t3 = cos(q2);
  t4 = cos(q3);
  t5 = cos(q4);
  t6 = cos(q5);
  t7 = cos(q6);
  t8 = sin(q1);
  t9 = sin(q2);
  t10 = sin(q3);
  t11 = sin(q4);
  t12 = sin(q5);
  t13 = sin(q6);
  t16 = 0.0064 * t2;
  t19 = t2 * t4;
  t20 = t3 * t5;
  t21 = t2 * t10;
  t22 = t4 * t8;
  t24 = t8 * t10;
  t27_tmp = 0.2104 * t2 * t9;
  t30_tmp = 0.2104 * t8 * t9;
  t34_tmp = t8 * t9;
  t35_tmp = t9 * t10;
  t39 = t2 * t5 * t9;
  t43 = t5 * t8 * t9;
  t44 = t4 * t9 * t11;
  t25 = 0.0064 * t19;
  t29 = 0.0064 * t22;
  t37 = t3 * t21;
  t41 = t3 * t24;
  t4 = t3 * t11 + t4 * t5 * t9;
  t46 = 0.0064 * t37;
  t48 = 0.0064 * t41;
  t62 = t21 + t3 * t22;
  t63 = t22 + t37;
  t68 = t20 + -t44;
  t66 = t19 + -t41;
  t21 = t24 + -(t3 * t19);
  t72 = t11 * t62;
  t81 = t7 * t68;
  t90 = t6 * t9 * t10 + t12 * t4;
  t107_tmp = t35_tmp * t12 - t6 * t4;
  t107 = 0.1059 * t13 * t107_tmp;
  t82 = t11 * t21;
  t85 = 0.1059 * t81;
  t89 = t43 + t72;
  t118 = 0.1815 * (t81 + t13 * t107_tmp);
  t94_tmp = t2 * t9;
  t94 = t94_tmp * t11 + t5 * t21;
  t22 = t7 * t89;
  t105_tmp = t39 - t82;
  t37 = -t7 * t105_tmp;
  t124 = ((0.1059 * t68 + t85) + t107) + t118;
  t115_tmp = t34_tmp * t11 - t5 * t62;
  t21 = t13 * (t12 * t66 + -t6 * t115_tmp);
  t4 = 0.0064 * t9 * t10;
  t125 = ((0.2084 * t20 + t4) + -(0.2084 * t44)) + t124;
  t119 = t22 + t21;
  t5 = (0.2104 * t3 + t4) + t125;
  t4 = t13 * (t12 * t63 + t6 * t94);
  t11 = 0.2104 * t3 + t5;
  t114 = 0.1059 * t4;
  t120 = t37 + t4;
  t62 = (0.1059 * t22 + 0.1059 * t21) + 0.1815 * t119;
  t41 = 0.1815 * t120;
  t19 = 0.1059 * t89 + t62;
  t24 = (0.1059 * t37 + t114) + t41;
  t4 = ((0.2084 * t43 + 0.2084 * t72) + 0.0064 * t66) + t19;
  t21 = ((t25 + t30_tmp) + -t48) + t4;
  t22 = ((-(0.2084 * t39) + 0.0064 * t63) + 0.2084 * t82) +
        (-0.1059 * t105_tmp + t24);
  J[0] = (((((-t16 - t25) - t30_tmp) - t30_tmp) + t48) - t4) - 0.0054 * t2;
  t37 = (0.0064 * t8 + -t27_tmp) + (((t29 + t46) + -t27_tmp) + t22);
  J[1] = t37 + 0.0054 * t8;
  J[2] = 0.0;
  J[3] = 0.0;
  J[4] = 0.0;
  J[5] = -1.0;
  J[6] = t2 * t11;
  J[7] = -t8 * t11;
  J[8] = -t8 * ((t16 + t30_tmp) + t21) + t2 * t37;
  J[9] = t8;
  J[10] = t2;
  J[11] = 0.0;
  J[12] = -t3 * t21 + t34_tmp * t5;
  t37 = ((-t27_tmp + t29) + t46) + t22;
  J[13] = t3 * t37 + t94_tmp * t5;
  J[14] = t94_tmp * t21 + t34_tmp * t37;
  J[15] = -t2 * t9;
  J[16] = t34_tmp;
  J[17] = -t3;
  J[18] = t66 * t125 - t35_tmp * t4;
  J[19] = -t63 * t125 + t35_tmp * t22;
  J[20] = -t63 * t4 + t66 * t22;
  J[21] = t63;
  J[22] = t66;
  J[23] = -t9 * t10;
  J[24] = -t68 * t19 + t89 * t124;
  t37 = ((t114 + t41) - 0.1059 * t105_tmp) - 0.1059 * t7 * t105_tmp;
  J[25] = t68 * t37 + t124 * t105_tmp;
  J[26] = t89 * t37 + t19 * t105_tmp;
  J[27] = -t39 + t82;
  J[28] = t89;
  J[29] = -t20 + t44;
  t37 = (t85 + t107) + t118;
  t21 = t6 * t66 + t12 * t115_tmp;
  J[30] = -t90 * t62 + t21 * t37;
  t4 = t6 * t63 - t12 * t94;
  J[31] = t90 * t24 - t4 * t37;
  J[32] = t24 * t21 - t62 * t4;
  J[33] = t4;
  J[34] = t21;
  J[35] = -t90;
  J[36] = 0.0;
  J[37] = 0.0;
  J[38] = 0.0;
  J[39] = t120;
  J[40] = t119;
  J[41] = -t81 + -t13 * t107_tmp;
}

//
// File trailer for kinova_J.cpp
//
// [EOF]
//
