//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// kinova_manipulability.cpp
//
// Code generation for function 'kinova_manipulability'
//

// Include files
#include "kinova_manipulability.h"
#include <cmath>

// Function Definitions
double kinova_manipulability(double q1, double q2, double q3, double q4,
                             double q5, double q6)
{
  double a_tmp;
  double b_a_tmp;
  double b_t341_tmp;
  double b_t393_tmp;
  double b_t500_tmp;
  double c_a_tmp;
  double d_a_tmp;
  double t10;
  double t101;
  double t104;
  double t11;
  double t110;
  double t111;
  double t117_tmp;
  double t12;
  double t13;
  double t132;
  double t15;
  double t150;
  double t162;
  double t163;
  double t167;
  double t168;
  double t17;
  double t174;
  double t178;
  double t18;
  double t180;
  double t184;
  double t192;
  double t194;
  double t198;
  double t2;
  double t200;
  double t211;
  double t216;
  double t217;
  double t221;
  double t223;
  double t227;
  double t228;
  double t230;
  double t235;
  double t238;
  double t24;
  double t242;
  double t25;
  double t26;
  double t260;
  double t27;
  double t28;
  double t285;
  double t29;
  double t3;
  double t30;
  double t32;
  double t324;
  double t334;
  double t337;
  double t341;
  double t341_tmp;
  double t342;
  double t343;
  double t349;
  double t35_tmp;
  double t37;
  double t370;
  double t371;
  double t385;
  double t393;
  double t393_tmp;
  double t395;
  double t396;
  double t4;
  double t405;
  double t42;
  double t43_tmp;
  double t46;
  double t471;
  double t48;
  double t5;
  double t500_tmp;
  double t51;
  double t53;
  double t54;
  double t56;
  double t6;
  double t7;
  double t78;
  double t79;
  double t8;
  double t81;
  double t83;
  double t85;
  double t88;
  double t9;
  double t98;
  // KINOVA_MANIPULABILITY
  //     F =
  //     KINOVA_MANIPULABILITY(D2,D3,D4,D5,D6,D7,D8,D9,D10,D11,D12,Q1,Q2,Q3,Q4,Q5,Q6)
  //     This function was generated by the Symbolic Math Toolbox version 8.7.
  //     14-Sep-2022 21:03:07
  //  參數設定
  t2 = std::cos(q1);
  t3 = std::cos(q2);
  t4 = std::cos(q3);
  t5 = std::cos(q4);
  t6 = std::cos(q5);
  t7 = std::cos(q6);
  t8 = std::sin(q1);
  t9 = std::sin(q2);
  t10 = std::sin(q3);
  t11 = std::sin(q4);
  t12 = std::sin(q5);
  t13 = std::sin(q6);
  t15 = t2 * t2;
  t17 = t8 * t8;
  t18 = t9 * t9;
  t24 = 0.0054 * t8;
  t25 = 0.0064 * t8;
  t26 = t2 * t4;
  t27 = t3 * t5;
  t28 = t2 * t8;
  t29 = t2 * t10;
  t30 = t4 * t8;
  t32 = t8 * t10;
  t35_tmp = 0.2104 * t2 * t9;
  t405 = t8 * t9;
  t42 = t405 * t11;
  t43_tmp = t9 * t10;
  t48 = t2 * t5 * t9;
  t53 = t5 * t8 * t9;
  t54 = t4 * t9 * t11;
  t37 = 0.0064 * t30;
  t46 = t3 * t29;
  t51 = t3 * t32;
  t79 = t3 * t11 + t4 * t5 * t9;
  t56 = 0.0064 * t46;
  t4 = t29 + t3 * t30;
  t78 = t30 + t46;
  t83 = t27 + -t54;
  t81 = t26 + -t51;
  t30 = t32 + -(t3 * t26);
  t85 = t5 * t4;
  t88 = t11 * t4;
  t29 = t7 * t83;
  t111 = t6 * t9 * t10 + t12 * t79;
  t4 = t43_tmp * t12 - t6 * t79;
  t132 = 0.1059 * t13 * t4;
  t98 = t6 * t81;
  t101 = t11 * t30;
  t104 = 0.1059 * t29;
  t110 = t53 + t88;
  a_tmp = t29 + t13 * t4;
  t150 = 0.1815 * a_tmp;
  t117_tmp = t2 * t9;
  t29 = t117_tmp * t11 + t5 * t30;
  t30 = t7 * t110;
  b_a_tmp = t48 - t101;
  t32 = -t7 * b_a_tmp;
  c_a_tmp = t42 - t85;
  d_a_tmp = t98 + t12 * c_a_tmp;
  t162 = ((((t3 * t3 + t18 * (t10 * t10)) + t83 * t83) + t111 * t111) +
          a_tmp * a_tmp) +
         1.0;
  t163 = ((0.1059 * t83 + t104) + t132) + t150;
  t46 = t13 * (t12 * t81 + -t6 * c_a_tmp);
  t4 = 0.0064 * t9 * t10;
  t167 = ((0.2084 * t27 + t4) + -(0.2084 * t54)) + t163;
  t168 = t110 * t163;
  c_a_tmp = t6 * t78 - t12 * t29;
  t5 = t30 + t46;
  t54 = (0.2104 * t3 + t4) + t167;
  t4 = t13 * (t12 * t78 + t6 * t29);
  t174 = 0.2104 * t3 + t54;
  t178 = t405 * t54;
  t29 = 0.1059 * t4;
  t79 = t32 + t4;
  t180 = t174 * t174;
  t11 = (0.1059 * t30 + 0.1059 * t46) + 0.1815 * t5;
  t13 = t28 * t174;
  t184 = t15 * t174;
  t192 = ((((t15 + t17 * t18) + t81 * t81) + t110 * t110) + d_a_tmp * d_a_tmp) +
         t5 * t5;
  t227 = (((t3 * t8 * t9 + t43_tmp * t81) + t83 * t110) + t111 * d_a_tmp) +
         t5 * a_tmp;
  t4 = 0.1815 * t79;
  t46 = 0.1059 * t110 + t11;
  t27 = (0.1059 * t32 + t29) + t4;
  t194 = ((((t17 + t15 * t18) + t78 * t78) + b_a_tmp * b_a_tmp) +
          c_a_tmp * c_a_tmp) +
         t79 * t79;
  t198 = t83 * t46;
  t29 = ((t29 + t4) - 0.1059 * b_a_tmp) - 0.1059 * t7 * b_a_tmp;
  t200 = t83 * t29;
  t32 = ((0.2084 * t53 + 0.2084 * t88) + 0.0064 * t81) + t46;
  t230 =
      (((t2 * t3 * t9 + -(t43_tmp * t78)) + t83 * b_a_tmp) + -t111 * c_a_tmp) +
      -t79 * a_tmp;
  t238 = ((((t28 + -(t18 * t28)) + t78 * t81) + -t110 * b_a_tmp) +
          d_a_tmp * c_a_tmp) +
         t5 * t79;
  t211 = t78 * t32;
  t4 = 0.2104 * t8 * t9;
  t79 = ((0.0064 * t26 + t4) + -(0.0064 * t51)) + t32;
  t30 = (t104 + t132) + t150;
  t235 = d_a_tmp * t30 + -(t111 * t11);
  a_tmp = t200 + t163 * b_a_tmp;
  t285 = t46 * b_a_tmp + t110 * t29;
  t46 = ((-(0.2084 * t48) + 0.0064 * t78) + 0.2084 * t101) +
        (-0.1059 * b_a_tmp + t27);
  t216 = t3 * t79;
  t4 = (0.0064 * t2 + t4) + t79;
  t242 = t111 * t235;
  t104 = -t11 * c_a_tmp + t27 * d_a_tmp;
  t26 = t162 * t238 + t227 * t230;
  t337 = t192 * t230 + t227 * t238;
  t217 = t81 * t46;
  t221 = t8 * t4;
  t223 = 0.0054 * t2 + t4;
  t6 = c_a_tmp * t30 + -(t111 * t27);
  t260 = t81 * t167 + -(t43_tmp * t32);
  t29 = (t25 + -t35_tmp) + (((t37 + t56) + -t35_tmp) + t46);
  t7 = t43_tmp * t260;
  t132 = t81 * t260;
  t4 = ((-t35_tmp + t37) + t56) + t46;
  t30 = t117_tmp * t54 + t3 * t4;
  t88 = t211 - t217;
  t54 = t117_tmp * t79 + t405 * t4;
  t324 = t6 * t104;
  t53 = t227 * t227 - t162 * t192;
  t385 = (t194 * t53 + t230 * t337) + t238 * t26;
  t228 = t2 * t29;
  t29 += t24;
  t18 = t78 * t167 + -(t43_tmp * t46);
  t334 = t30 * t54;
  t341_tmp = t168 - t198;
  b_t341_tmp = t178 - t216;
  t341 = (((t13 + -(b_a_tmp * t341_tmp)) + t235 * c_a_tmp) + t78 * t260) +
         -t2 * t9 * b_t341_tmp;
  t32 = t221 - t228;
  t4 = -t2 * t32;
  t349 = ((t111 * t104 + t83 * t285) + -t9 * t10 * t88) + t3 * t54;
  t393_tmp = (((-t223 + t242) + t7) + t3 * b_t341_tmp) + t83 * t341_tmp;
  b_t393_tmp =
      (((t184 + t132) + t235 * d_a_tmp) + t110 * t341_tmp) + t405 * b_t341_tmp;
  t393 = t162 * b_t393_tmp + -t227 * t393_tmp;
  t395 = -t192 * t393_tmp + t227 * b_t393_tmp;
  t342 = (((t17 * t174 + a_tmp * b_a_tmp) + t6 * c_a_tmp) + t78 * t18) +
         t117_tmp * t30;
  t343 = (((t13 + -t110 * a_tmp) + t6 * d_a_tmp) + t81 * t18) + -(t405 * t30);
  t370 = (((t104 * t104 + t285 * t285) + t88 * t88) + t54 * t54) + t32 * t32;
  t371 = (((t110 * t285 + t104 * d_a_tmp) + -t81 * t88) + t405 * t54) + t4;
  t396 = (((t174 * t4 + t235 * t104) + t285 * t341_tmp) + -t260 * t88) +
         t54 * b_t341_tmp;
  t471 = (t341 * t53 + t230 * t395) + t238 * t393;
  t150 = t230 * b_t393_tmp + t238 * t393_tmp;
  t500_tmp = (-(t337 * t341) + t194 * t395) + t238 * t150;
  b_t500_tmp = (((-t324 + t334) + t285 * a_tmp) + t18 * t88) + t8 * t174 * t32;
  t56 = (((((((((t24 + t25) - t35_tmp) - t35_tmp) + t37) + t56) + t46) +
           -(t111 * t6)) +
          t83 * a_tmp) +
         -(t43_tmp * t18)) +
        t3 * t30;
  t13 = t162 * t343 + t227 * t56;
  t27 = t192 * t56 + t227 * t343;
  t10 = t238 * t349 + t230 * t371;
  t81 = t343 * t349 + t371 * t56;
  t405 = t230 * t343 + -(t238 * t56);
  t5 = t227 * t349 + -(t162 * t371);
  t11 = t192 * t349 + -(t227 * t371);
  t162 = ((((t17 * t180 + t29 * t29) + t6 * t6) + a_tmp * a_tmp) + t18 * t18) +
         t30 * t30;
  t111 = ((((t28 * t180 + t223 * t29) + t235 * t6) + -(a_tmp * t341_tmp)) +
          t260 * t18) +
         -t30 * b_t341_tmp;
  t192 = (t342 * t53 + t230 * t27) + t238 * t13;
  t79 = b_t393_tmp * t56 + t343 * t393_tmp;
  t227 = (t342 * t395 - t341 * t27) + t238 * t79;
  t2 = (((-t104 * c_a_tmp + t117_tmp * t54) + t285 * b_a_tmp) + t8 * t32) +
       t78 * t88;
  t29 = -t371 * t393_tmp + t349 * b_t393_tmp;
  d_a_tmp = (t150 * t2 + t341 * t10) + -t194 * t29;
  t242 = ((((((t184 + t132) + t235 * (t98 + t12 * (t42 - t85))) +
             t110 * (t168 - t198)) +
            t8 * t9 * (t178 - t216)) *
               t56 +
           t343 * ((((-t223 + t242) + t7) + t3 * (t178 - t216)) +
                   t83 * (t168 - t198))) *
              t2 +
          -t342 * t29) +
         t341 * t81;
  t4 = (t26 * t341 - t194 * t393) + t230 * t150;
  t216 = ((t385 * t396 + t471 * t2) + -t349 * t500_tmp) + -t371 * t4;
  t32 = (t26 * t342 + -(t194 * t13)) + t230 * t405;
  t51 = (-(t337 * t342) + t194 * t27) + t238 * t405;
  t167 = (t53 * t2 + t238 * t5) + t230 * t11;
  t26 = (-t26 * t2 + t194 * t5) + t230 * t10;
  t18 = (((-t324 + t334) + t285 * (t200 + t163 * (t48 - t101))) +
         t18 * (t211 - t217)) +
        t174 * t8 * (t221 - t228);
  t46 = (-(t194 * t11) + t238 * t10) + t337 * t2;
  t104 = (-t342 * t150 + t341 * t405) + t194 * t79;
  t30 = (-t393 * t2 + t341 * t5) + t230 * t29;
  t53 = (-t13 * t2 + t342 * t5) + t230 * t81;
  t132 = (-(t341 * t11) + t238 * t29) + t395 * t2;
  t7 = (-(t342 * t11) + t238 * t81) + t27 * t2;
  t29 = (-(t342 * t393) + t341 * t13) + t230 * t79;
  t13 = ((t471 * b_t500_tmp + t396 * t192) + -t349 * t227) + -t371 * t29;
  t88 = ((t385 * b_t500_tmp + -t192 * t2) + t349 * t51) + t371 * t32;
  t150 = ((t4 * b_t500_tmp + t396 * t32) + t349 * t104) + -(t29 * t2);
  t6 = ((-t370 * t4 + t396 * t26) + t349 * d_a_tmp) + t30 * t2;
  t4 = (t342 * t10 - t194 * t81) + t405 * t2;
  t54 = ((t370 * t32 + t26 * t18) + -t349 * t4) + -t53 * t2;
  t27 = ((-t370 * t29 + t30 * t18) + t396 * t53) + t349 * t242;
  t5 = ((t370 * t471 + t396 * t167) + -t349 * t132) + -(t371 * t30);
  t11 = ((t370 * t104 + -t242 * t2) + d_a_tmp * t18) + t396 * t4;
  t79 = ((t370 * t51 + t46 * t18) - t7 * t2) + t371 * t4;
  t32 = ((-(t370 * t385) + t371 * t26) + t349 * t46) + t167 * t2;
  t46 = ((-t370 * t500_tmp + t132 * t2) - t371 * d_a_tmp) + t396 * t46;
  t30 = ((t500_tmp * b_t500_tmp + t396 * t51) - t227 * t2) - t371 * t104;
  t29 = ((-(t370 * t192) + t371 * t53) + t167 * t18) + t349 * t7;
  t4 = ((-t370 * t227 + t132 * t18) - t371 * t242) + t396 * t7;
  return std::sqrt(
      (((-((((t150 * t18 - t342 * t27) + t162 * t6) + t111 * t54) - t11 * t56) *
             b_t393_tmp +
         (-(((-t343 * t11 + t30 * t18) + t162 * t46) +
            (t111 * t79 - t342 * t4)) *
              t393_tmp +
          ((((t88 * t18 + t162 * t32) + t343 * t54) - t342 * t29) +
           -t79 * t56) *
              (((((t341_tmp * t341_tmp + b_t341_tmp * b_t341_tmp) +
                  t15 * t180) +
                 t223 * t223) +
                t235 * t235) +
               t260 * t260))) +
        -t111 * ((((-t216 * t18 + t111 * t32) + t342 * t5) - t343 * t6) +
                 t46 * t56)) +
       t396 * ((((-t342 * t13 - t343 * t150) + t162 * t216) + t111 * t88) +
               t30 * t56)) +
      t341 *
          ((((-t13 * t18 - t343 * t27) + t162 * t5) + t111 * t29) + t4 * t56));
}

// End of code generation (kinova_manipulability.cpp)
