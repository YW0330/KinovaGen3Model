//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// CoriolisMatrix.cpp
//
// Code generation for function 'CoriolisMatrix'
//

// Include files
#include "CoriolisMatrix.h"
#include "model_C11.h"
#include "model_C12.h"
#include "model_C13.h"
#include "model_C14.h"
#include "model_C15.h"
#include "model_C16.h"
#include "model_C17.h"
#include "model_C21.h"
#include "model_C22.h"
#include "model_C23.h"
#include "model_C24.h"
#include "model_C25.h"
#include "model_C26.h"
#include "model_C27.h"
#include "model_C31.h"
#include "model_C32.h"
#include "model_C33.h"
#include "model_C34.h"
#include "model_C35.h"
#include "model_C36.h"
#include "model_C37.h"
#include "model_C41.h"
#include "model_C42.h"
#include "model_C43.h"
#include "model_C44.h"
#include "model_C45.h"
#include "model_C46.h"
#include "model_C47.h"
#include "model_C51.h"
#include "model_C52.h"
#include "model_C53.h"
#include "model_C54.h"
#include "model_C55.h"
#include "model_C56.h"
#include "model_C57.h"
#include "model_C61.h"
#include "model_C62.h"
#include "model_C63.h"
#include "model_C64.h"
#include "model_C65.h"
#include "model_C66.h"
#include "model_C67.h"
#include "model_C72.h"
#include "model_C73.h"
#include "model_C74.h"
#include "model_C75.h"
#include "model_C76.h"
#include "model_C77.h"
#include <cmath>

// Function Definitions
CoriolisMatrix::CoriolisMatrix()
{
}

CoriolisMatrix::~CoriolisMatrix()
{
  // (no terminate code required)
}

void CoriolisMatrix::model_C(double q1, double q2, double q3, double q4,
                             double q5, double q6, double q7, double dq1,
                             double dq2, double dq3, double dq4, double dq5,
                             double dq6, double dq7, double C[49])
{
  double C_tmp;
  double C_tmp_tmp;
  double C_tmp_tmp_tmp;
  double ab_C_tmp;
  double ac_C_tmp;
  double b_C_tmp;
  double b_C_tmp_tmp;
  double b_t501_tmp;
  double b_t567_tmp;
  double b_t597_tmp;
  double b_t605_tmp_tmp;
  double b_t606_tmp;
  double b_t620_tmp;
  double b_t624_tmp;
  double b_t704_tmp;
  double b_t708_tmp;
  double bb_C_tmp;
  double bc_C_tmp;
  double c_C_tmp;
  double c_C_tmp_tmp;
  double c_t620_tmp;
  double c_t704_tmp;
  double cb_C_tmp;
  double cc_C_tmp;
  double d;
  double d1;
  double d10;
  double d11;
  double d12;
  double d13;
  double d14;
  double d15;
  double d16;
  double d17;
  double d2;
  double d3;
  double d4;
  double d5;
  double d6;
  double d7;
  double d8;
  double d9;
  double d_C_tmp;
  double d_C_tmp_tmp;
  double d_t620_tmp;
  double d_t704_tmp;
  double db_C_tmp;
  double dc_C_tmp;
  double e_C_tmp;
  double e_C_tmp_tmp;
  double e_t704_tmp;
  double eb_C_tmp;
  double ec_C_tmp;
  double f_C_tmp;
  double f_C_tmp_tmp;
  double f_t704_tmp;
  double fb_C_tmp;
  double fc_C_tmp;
  double g_C_tmp;
  double g_C_tmp_tmp;
  double gb_C_tmp;
  double gc_C_tmp;
  double h_C_tmp;
  double h_C_tmp_tmp;
  double hb_C_tmp;
  double hc_C_tmp;
  double i_C_tmp;
  double i_C_tmp_tmp;
  double ib_C_tmp;
  double ic_C_tmp;
  double j_C_tmp;
  double j_C_tmp_tmp;
  double jb_C_tmp;
  double jc_C_tmp;
  double k_C_tmp;
  double k_C_tmp_tmp;
  double kb_C_tmp;
  double kc_C_tmp;
  double l_C_tmp;
  double l_C_tmp_tmp;
  double lb_C_tmp;
  double lc_C_tmp;
  double m_C_tmp;
  double m_C_tmp_tmp;
  double mb_C_tmp;
  double mc_C_tmp;
  double n_C_tmp;
  double n_C_tmp_tmp;
  double nb_C_tmp;
  double nc_C_tmp;
  double o_C_tmp;
  double o_C_tmp_tmp;
  double ob_C_tmp;
  double oc_C_tmp;
  double p_C_tmp;
  double p_C_tmp_tmp;
  double pb_C_tmp;
  double pc_C_tmp;
  double q_C_tmp;
  double q_C_tmp_tmp;
  double qb_C_tmp;
  double qc_C_tmp;
  double r_C_tmp;
  double r_C_tmp_tmp;
  double rb_C_tmp;
  double rc_C_tmp;
  double s_C_tmp;
  double sb_C_tmp;
  double sc_C_tmp;
  double t10;
  double t100_tmp;
  double t11;
  double t116_tmp;
  double t119_tmp;
  double t12;
  double t121;
  double t121_tmp;
  double t124;
  double t124_tmp;
  double t125_tmp;
  double t127;
  double t128;
  double t13;
  double t130_tmp;
  double t133_tmp;
  double t14;
  double t140;
  double t147;
  double t148;
  double t15;
  double t155;
  double t161;
  double t167_tmp;
  double t175_tmp;
  double t178;
  double t18;
  double t180;
  double t182;
  double t186;
  double t19;
  double t192;
  double t192_tmp;
  double t195_tmp;
  double t196_tmp_tmp;
  double t2;
  double t20;
  double t21;
  double t218;
  double t22;
  double t222;
  double t226_tmp;
  double t23;
  double t233_tmp;
  double t234_tmp;
  double t238;
  double t238_tmp;
  double t24;
  double t241;
  double t242;
  double t243;
  double t244;
  double t245;
  double t247;
  double t248;
  double t249;
  double t25;
  double t250;
  double t254;
  double t259;
  double t262;
  double t264;
  double t265;
  double t268_tmp;
  double t269;
  double t27;
  double t275;
  double t277;
  double t287_tmp;
  double t288_tmp;
  double t296;
  double t3;
  double t31;
  double t311_tmp;
  double t316;
  double t317;
  double t322;
  double t326_tmp;
  double t326_tmp_tmp;
  double t328;
  double t330;
  double t330_tmp;
  double t330_tmp_tmp;
  double t333_tmp;
  double t334_tmp;
  double t33_tmp;
  double t341;
  double t342_tmp;
  double t343;
  double t353_tmp;
  double t354;
  double t355_tmp;
  double t357_tmp;
  double t359_tmp;
  double t35_tmp;
  double t36;
  double t360;
  double t362;
  double t365;
  double t366;
  double t372;
  double t373_tmp;
  double t383;
  double t389_tmp;
  double t38_tmp;
  double t39;
  double t391_tmp;
  double t392;
  double t394;
  double t396_tmp;
  double t397;
  double t399;
  double t4;
  double t40;
  double t400_tmp;
  double t401;
  double t402_tmp;
  double t404;
  double t405;
  double t406;
  double t407;
  double t41;
  double t414_tmp;
  double t415;
  double t416;
  double t421_tmp;
  double t427_tmp;
  double t428_tmp;
  double t43;
  double t432;
  double t432_tmp;
  double t433;
  double t435_tmp;
  double t436;
  double t439;
  double t442;
  double t443;
  double t445_tmp;
  double t448;
  double t456;
  double t456_tmp;
  double t46;
  double t478_tmp;
  double t48;
  double t483;
  double t484;
  double t484_tmp;
  double t487;
  double t487_tmp;
  double t489;
  double t493;
  double t496;
  double t496_tmp;
  double t497_tmp;
  double t5;
  double t500_tmp;
  double t501;
  double t501_tmp;
  double t503;
  double t503_tmp;
  double t504;
  double t504_tmp;
  double t505_tmp;
  double t514_tmp;
  double t515;
  double t516;
  double t519;
  double t521;
  double t523;
  double t524;
  double t527;
  double t528;
  double t529;
  double t531_tmp;
  double t532;
  double t533;
  double t534;
  double t537_tmp;
  double t538_tmp;
  double t539_tmp;
  double t542;
  double t544;
  double t546;
  double t547;
  double t550;
  double t551;
  double t552;
  double t553;
  double t559;
  double t559_tmp;
  double t567_tmp;
  double t580;
  double t588;
  double t589_tmp;
  double t590_tmp_tmp;
  double t591_tmp_tmp;
  double t592_tmp;
  double t593_tmp;
  double t596_tmp;
  double t597_tmp;
  double t598_tmp_tmp;
  double t599_tmp_tmp;
  double t6;
  double t601_tmp_tmp;
  double t602_tmp;
  double t604_tmp;
  double t605_tmp_tmp;
  double t606_tmp;
  double t613_tmp;
  double t615;
  double t617;
  double t618;
  double t618_tmp;
  double t619;
  double t619_tmp;
  double t620;
  double t620_tmp;
  double t622;
  double t622_tmp;
  double t623_tmp;
  double t624;
  double t624_tmp;
  double t625_tmp;
  double t627_tmp;
  double t630;
  double t630_tmp;
  double t631;
  double t631_tmp;
  double t634;
  double t634_tmp;
  double t643;
  double t643_tmp;
  double t645;
  double t645_tmp;
  double t699;
  double t7;
  double t700;
  double t703;
  double t704;
  double t704_tmp;
  double t707;
  double t707_tmp;
  double t708;
  double t708_tmp;
  double t709;
  double t710;
  double t711;
  double t729;
  double t731;
  double t733;
  double t734;
  double t742;
  double t743;
  double t744;
  double t745;
  double t746;
  double t75_tmp;
  double t79_tmp;
  double t8;
  double t88;
  double t9;
  double t_C_tmp;
  double tb_C_tmp;
  double u_C_tmp;
  double ub_C_tmp;
  double v_C_tmp;
  double vb_C_tmp;
  double w_C_tmp;
  double wb_C_tmp;
  double x_C_tmp;
  double xb_C_tmp;
  double y_C_tmp;
  double yb_C_tmp;
  // MODEL_C71
  //     OUT1 = MODEL_C71(Q1,Q2,Q3,Q4,Q5,Q6,Q7,DQ1,DQ2,DQ3,DQ4,DQ5,DQ6,DQ7)
  //     This function was generated by the Symbolic Math Toolbox version 8.6.
  //     02-Jan-2022 18:18:59
  t2 = std::cos(q1);
  t3 = std::cos(q2);
  t4 = std::cos(q3);
  t5 = std::cos(q4);
  t6 = std::cos(q5);
  t7 = std::cos(q6);
  t8 = std::cos(q7);
  t9 = std::sin(q1);
  t10 = std::sin(q2);
  t11 = std::sin(q3);
  t12 = std::sin(q4);
  t13 = std::sin(q5);
  t14 = std::sin(q6);
  t15 = std::sin(q7);
  t18 = t2 * t4;
  t19 = t3 * t5;
  t20 = t2 * t11;
  t21 = t4 * t9;
  t22 = t3 * t12;
  t23 = t5 * t10;
  t24 = t9 * t11;
  t25 = t10 * t12;
  t33_tmp = t2 * t10;
  t35_tmp = t3 * t9;
  t38_tmp = t9 * t10;
  t365 = t6 * t10;
  t27 = t18 * 0.01279999999997017;
  t31 = t20 * 0.01279999999997017;
  t36 = t24 * -0.01279999999997017;
  t39 = t2 * t19;
  t40 = t3 * t20;
  t41 = t3 * t21;
  t43 = t9 * t19;
  t46 = t2 * t25;
  t48 = t9 * t23;
  t75_tmp = t2 * t23;
  t79_tmp = t9 * t25;
  t88 = t79_tmp * 0.31429999999818392;
  t100_tmp = t18 * t25;
  t546 = t10 * t13;
  t116_tmp = t21 * t25;
  t729 = t20 + t41;
  t119_tmp = t21 + t40;
  t624 = t22 + t4 * t23;
  t121_tmp = t3 * t24;
  t121 = t18 + -t121_tmp;
  t124_tmp = t3 * t18;
  t124 = t24 + -t124_tmp;
  t125_tmp = t19 + -(t4 * t25);
  t127 = t23 + t4 * t22;
  t128 = t25 + -(t4 * t19);
  t544 = t2 * t22 + t18 * t23;
  t362 = t9 * t22 + t21 * t23;
  t178 = t39 + -t100_tmp;
  t180 = t43 + -t116_tmp;
  t182 = t4 * t6 * t10 + -(t11 * t13 * t23);
  t4 = t4 * t10 * t13 + t6 * t11 * t23;
  t130_tmp = t5 * t729;
  t133_tmp = t12 * t729;
  t619 = t13 * t119_tmp;
  t140 = t5 * t124;
  t23 = t6 * t124;
  t415 = -(t6 * t119_tmp);
  t147 = t12 * t124;
  t148 = t13 * t121;
  t124 *= t13;
  t155 = t14 * t125_tmp;
  t161 = -(t6 * t121);
  t167_tmp = t7 * t125_tmp;
  t175_tmp = t12 * t121;
  t186 = t2 * t19 + -t100_tmp;
  t192_tmp = t12 * t14;
  t192 = t192_tmp * t121;
  t22 = t7 * t12;
  t195_tmp = t22 * t121;
  t218 = t7 * t180;
  t222 = t14 * t180;
  t226_tmp = t7 * t178;
  t196_tmp_tmp = t22 * t119_tmp;
  t233_tmp = t48 + t133_tmp;
  t234_tmp = t365 * t11 + t13 * t624;
  t19 = t46 + t140;
  t180 = -t79_tmp + t130_tmp;
  t238_tmp = t10 * t11;
  t238 = -(t238_tmp * t13) + t6 * t624;
  t241 = -t75_tmp + t147;
  t242 = t3 * t11 * t13 + t6 * t128;
  t243 = -(t3 * t6 * t11) + t13 * t128;
  t287_tmp = t365 * t20 + t13 * t544;
  t288_tmp = t365 * t24 + t13 * t362;
  t544 = -(t546 * t20) + t6 * t544;
  t311_tmp = -(t546 * t24) + t6 * t362;
  t316 = -(t11 * t14 * t25) + t7 * t4;
  t317 = t7 * t11 * t25 + t14 * t4;
  t244 = -t79_tmp + t130_tmp;
  t245 = t48 + t133_tmp;
  t247 = t7 * t233_tmp;
  t248 = t8 * t234_tmp;
  t249 = t14 * t233_tmp;
  t250 = t15 * t234_tmp;
  t254 = t7 * t180;
  t128 = t14 * t180;
  t262 = t14 * t238;
  t268_tmp = t7 * t19;
  t269 = t7 * t241;
  t546 = t14 * t19;
  t277 = t14 * t241;
  t326_tmp_tmp = t13 * t15;
  t326_tmp = t326_tmp_tmp * t241;
  t328 = t326_tmp * -0.00028100000000108588;
  t330_tmp_tmp = t8 * t13;
  t330_tmp = t330_tmp_tmp * t241;
  t330 = t330_tmp * -0.011402000000089171;
  t333_tmp = t15 * t287_tmp;
  t334_tmp = t8 * t287_tmp;
  t342_tmp = t14 * t544;
  t353_tmp = t6 * t729 + t5 * t148;
  t354 = t23 + t5 * t619;
  t357_tmp = t13 * t729 + t5 * t161;
  t360 = t124 + t5 * t415;
  t365 = t14 * t624 + t6 * -t167_tmp;
  t366 = t7 * t624 + t6 * t155;
  t259 = t248 * 3.6335150000000207E-8;
  t264 = t249 * 0.1356979999982286;
  t265 = t250 * 3.6335150000000207E-8;
  t275 = t7 * t245;
  t296 = t277 * 0.1356979999982286;
  t341 = t14 * t544;
  t343 = t15 * t288_tmp;
  t355_tmp = t14 * t311_tmp;
  t359_tmp = t23 + t5 * t619;
  t362 = t124 + t5 * t415;
  t124 = t14 * t357_tmp;
  t22 = t6 * t19;
  t25 = t619 + t22;
  t4 = t13 * t19;
  t389_tmp = t415 + t4;
  t729 = t148 + t6 * t180;
  t391_tmp = t155 + t7 * t238;
  t392 = t619 + t22;
  t394 = t14 * t127 + t7 * t242;
  t396_tmp = t161 + t13 * t180;
  t399 = -t167_tmp + t262;
  t400_tmp = t415 + t4;
  t401 = -(t7 * t127) + t14 * t242;
  t19 = t222 + t7 * t311_tmp;
  t22 = t14 * t178 + t7 * t544;
  t493 = t15 * t182 + t8 * t316;
  t501_tmp = t6 * t14;
  b_t501_tmp = t501_tmp * t233_tmp;
  t501 = t254 + -b_t501_tmp;
  t4 = t128 + t6 * t7 * t233_tmp;
  t503_tmp = t7 * t15;
  t503 = t8 * t238 + -(t503_tmp * t234_tmp);
  t504_tmp = t7 * t8;
  t504 = t15 * t238 + t504_tmp * t234_tmp;
  t322 = t6 * (t277 * -0.1356979999982286);
  t372 = t14 * t362;
  t373_tmp = t15 * t353_tmp;
  t383 = t124 * -0.1356979999982286;
  t397 = t148 + t6 * t244;
  t402_tmp = t161 + t13 * t244;
  t404 = t7 * t25;
  t405 = t14 * t25;
  t406 = t14 * t729;
  t407 = t15 * t391_tmp;
  t242 = t399 * t399;
  t414_tmp = t8 * t389_tmp;
  t415 = t414_tmp * 0.00028100000000108588;
  t416 = t14 * t392;
  t421_tmp = t15 * t389_tmp;
  t427_tmp = t7 * t729;
  t428_tmp = t14 * t389_tmp;
  t432_tmp = t8 * t391_tmp;
  t432 = t432_tmp * 3.6335150000000207E-8;
  t435_tmp = t15 * t729;
  t436 = t15 * t396_tmp;
  t439 = t414_tmp * 0.00040042500000154752;
  t445_tmp = t7 * t392;
  t448 = t15 * t400_tmp;
  t456_tmp = t14 * t396_tmp;
  t456 = t456_tmp * -0.1356979999982286;
  t478_tmp = t8 * t400_tmp;
  t483 = t504_tmp * t396_tmp * 0.01624785000012707;
  t11 = t222 + t7 * t311_tmp;
  t161 = t128 + t6 * t247;
  t23 = t192_tmp * t119_tmp;
  t238 = t23 + t7 * t360;
  t496_tmp = t7 * t186;
  t496 = -t496_tmp + t341;
  t497_tmp = t546 + t6 * t269;
  t178 = t192 + t7 * t357_tmp;
  t500_tmp = t8 * t22;
  t505_tmp = t15 * t22;
  t180 = t14 * t186 + t7 * t544;
  t128 = t192 + t7 * t357_tmp;
  t148 = -t195_tmp + t124;
  t523 = -(t330_tmp_tmp * t125_tmp) + t15 * t365;
  t524 = t326_tmp_tmp * t125_tmp + t8 * t365;
  t528 = t8 * t4;
  t529 = t15 * t4;
  t433 = t14 * t397;
  t442 = t407 * 3.6335150000000207E-8;
  t443 = t242 * 0.0023296955387195339;
  t484_tmp = t8 * t396_tmp;
  t484 = t7 * (t484_tmp * 0.00028100000000108588);
  t487_tmp = t7 * t436;
  t487 = t487_tmp * -0.011402000000089171;
  t489 = t487_tmp * 0.00040042500000154752;
  t514_tmp = t23 + t7 * t362;
  t515 = t14 * t244 + t6 * t275;
  t516 = t15 * t11;
  t519 = t268_tmp + t6 * -t277;
  t521 = -t196_tmp_tmp + t372;
  t22 = t546 + t6 * t269;
  t527 = t15 * t180;
  t537_tmp = t247 + t406;
  t538_tmp = t248 + t407;
  t539_tmp = t269 + t405;
  t127 = t249 + -t427_tmp;
  t542 = t250 + -t432_tmp;
  t547 = t269 + t416;
  t550 = t8 * t243 + t15 * t394;
  t4 = t277 - t445_tmp;
  t588 = t8 * t4;
  t590_tmp_tmp = t326_tmp_tmp * t233_tmp;
  t591_tmp_tmp = t330_tmp_tmp * t233_tmp;
  t704_tmp = (((t35_tmp * 0.42079999999987189 + t43 * 0.31429999999818392) +
               t10 * (t24 * 0.01279999999997017)) +
              t116_tmp * -0.31429999999818392) +
             t218 * 0.1356979999982286;
  b_t704_tmp = t8 * t288_tmp;
  c_t704_tmp = t15 * t288_tmp;
  d_t704_tmp = t14 * t311_tmp;
  e_t704_tmp = t8 * t19;
  f_t704_tmp = t15 * t19;
  t704 = ((((t704_tmp + c_t704_tmp * -0.00028100000000108588) +
            b_t704_tmp * -0.011402000000089171) +
           d_t704_tmp * -0.1356979999982286) +
          e_t704_tmp * 0.00028100000000108588) +
         f_t704_tmp * -0.011402000000089171;
  t531_tmp = t8 * t128;
  t532 = t8 * t22;
  t534 = t15 * t22;
  t544 = t537_tmp * t537_tmp;
  t546 = t539_tmp * t539_tmp;
  t551 = t275 + t433;
  t552 = t8 * t127;
  t553 = t15 * t127;
  t559_tmp = t3 * t542;
  t559 = t559_tmp * 3.6335150000000207E-8;
  t567_tmp = t14 * t245;
  b_t567_tmp = t7 * t397;
  t22 = -t567_tmp + b_t567_tmp;
  t589_tmp = t125_tmp * t542;
  t592_tmp = t8 * t11;
  t593_tmp = t8 * t288_tmp;
  t596_tmp = t8 * t287_tmp;
  t597_tmp = t15 * t287_tmp;
  b_t597_tmp = t8 * t180;
  t598_tmp_tmp = t8 * t25;
  t599_tmp_tmp = t15 * t25;
  t601_tmp_tmp = t8 * t729;
  t602_tmp = t234_tmp * t542;
  t620_tmp = t277 - t404;
  b_t620_tmp = t8 * t620_tmp;
  c_t620_tmp = t421_tmp + b_t620_tmp;
  d_t620_tmp = t9 * c_t620_tmp;
  t620 = d_t620_tmp * 3.6335149999899841E-8;
  t625_tmp = t15 * t4;
  t5 = t478_tmp + -t625_tmp;
  t155 = t448 + t588;
  t533 = t8 * t514_tmp;
  t580 = t15 * t22;
  t605_tmp_tmp = t8 * t353_tmp;
  b_t605_tmp_tmp = t15 * t128;
  t613_tmp = t436 + t552;
  t615 = -t484_tmp + t553;
  t617 = t414_tmp + -t15 * t620_tmp;
  t708_tmp = t15 * t620_tmp;
  b_t708_tmp = (((((t9 * 0.011799999999993821 + t21 * 0.01279999999997017) +
                   t33_tmp * -0.42079999999987189) +
                  t75_tmp * -0.31429999999818392) +
                 t3 * t31) +
                t147 * 0.31429999999818392) +
               t269 * 0.1356979999982286;
  t708 = ((((b_t708_tmp + t405 * 0.1356979999982286) +
            t421_tmp * 0.00028100000000108588) +
           t414_tmp * 0.011402000000089171) +
          b_t620_tmp * 0.00028100000000108588) +
         t708_tmp * -0.011402000000089171;
  t604_tmp = t15 * t359_tmp;
  t606_tmp = t8 * t359_tmp;
  b_t606_tmp = t15 * t514_tmp;
  t618_tmp = t2 * t615;
  t618 = t618_tmp * 3.6335149999899841E-8;
  t619_tmp = t8 * t402_tmp;
  t619 = t619_tmp + t580;
  t622_tmp = t9 * t617;
  t622 = t622_tmp * 3.6335149999899841E-8;
  t623_tmp = t38_tmp * t615;
  t624_tmp = t15 * t402_tmp;
  b_t624_tmp = t8 * t22;
  t624 = -t624_tmp + b_t624_tmp;
  t627_tmp = t33_tmp * t617;
  t630_tmp = t119_tmp * t617;
  t630 = t630_tmp * 3.6335149999899841E-8;
  t631_tmp = t121 * t615;
  t631 = t631_tmp * 3.6335149999899841E-8;
  t634_tmp = t233_tmp * t615;
  t634 = t634_tmp * 3.6335149999899841E-8;
  t643_tmp = t241 * t617;
  t643 = t643_tmp * 3.6335149999899841E-8;
  t645_tmp = t389_tmp * t617;
  t645 = t645_tmp * 3.6335149999899841E-8;
  t699 = ((t484_tmp * -0.00028100000000108588 + t436 * 0.011402000000089171) +
          t553 * 0.00028100000000108588) +
         t552 * 0.011402000000089171;
  t700 = ((t436 * 0.01624785000012707 + t484_tmp * -0.00040042500000154752) +
          t552 * 0.01624785000012707) +
         t553 * 0.00040042500000154752;
  t707_tmp =
      (((t2 * 0.011799999999993821 + t27) + t38_tmp * 0.42079999999987189) +
       t48 * 0.31429999999818392) +
      t3 * t36;
  t707 = ((((((t707_tmp + t133_tmp * 0.31429999999818392) +
              t247 * 0.1356979999982286) +
             t406 * 0.1356979999982286) +
            t436 * 0.00028100000000108588) +
           t484_tmp * 0.011402000000089171) +
          t552 * 0.00028100000000108588) +
         t553 * -0.011402000000089171;
  t703 =
      ((t624_tmp * -0.01624785000012707 + t619_tmp * 0.00040042500000154752) +
       b_t624_tmp * 0.01624785000012707) +
      t580 * 0.00040042500000154752;
  t22 = t399 * t538_tmp;
  t4 = t399 * t542;
  t23 = t537_tmp * t613_tmp;
  t124 = t537_tmp * t615;
  t19 = t539_tmp * t617;
  t180 = t539_tmp * c_t620_tmp;
  t709 = (((((((t242 * 0.001979328222603272 + t544 * 0.001979328222603272) +
               t546 * 0.001979328222603272) +
              t22 * 0.0023296955387195339) +
             t4 * 5.7506792350281437E-5) +
            t23 * 5.7506792350281437E-5) +
           t124 * -0.0023296955387195339) +
          t19 * 0.0023296955387195339) +
         t180 * 5.7506792350281437E-5;
  t710 = (((((((t242 * 5.7506792350281437E-5 + t544 * 5.7506792350281437E-5) +
               t546 * 5.7506792350281437E-5) +
              t22 * 3.6335149999899841E-8) +
             t4 * 0.0455640643276638) +
            t23 * 0.0455640643276638) +
           t124 * -3.6335149999899841E-8) +
          t19 * 3.6335149999899841E-8) +
         t180 * 0.0455640643276638;
  t711 = (((((((t443 + t544 * 0.0023296955387195339) +
               t546 * 0.0023296955387195339) +
              t22 * 0.046125882182423077) +
             t4 * 3.6335149999899841E-8) +
            t23 * 3.6335149999899841E-8) +
           t124 * -0.046125882182423077) +
          t180 * 3.6335149999899841E-8) +
         t19 * 0.046125882182423077;
  t22 = t537_tmp * t547;
  t4 = t539_tmp * t551;
  t23 = t547 * t613_tmp;
  t124 = t547 * t615;
  t19 = t551 * t617;
  t180 = t551 * c_t620_tmp;
  t128 = t539_tmp * t619;
  t544 = t539_tmp * t624;
  t546 = t537_tmp * t5;
  t11 = t537_tmp * t155;
  t25 = ((((((((t22 * 0.0046593910774390679 + t4 * -0.0046593910774390679) +
               t23 * 3.6335149999899841E-8) +
              t124 * -0.046125882182423077) +
             t180 * -3.6335149999899841E-8) +
            t19 * -0.046125882182423077) +
           t128 * -0.046125882182423077) +
          t546 * 0.046125882182423077) +
         t11 * 3.6335149999899841E-8) +
        t544 * 3.6335149999899841E-8;
  t729 = ((((((((t22 * 0.0039586564452065431 + t4 * -0.0039586564452065431) +
                t23 * 5.7506792350281437E-5) +
               t124 * -0.0023296955387195339) +
              t19 * -0.0023296955387195339) +
             t180 * -5.7506792350281437E-5) +
            t128 * -0.0023296955387195339) +
           t544 * 5.7506792350281437E-5) +
          t546 * 0.0023296955387195339) +
         t11 * 5.7506792350281437E-5;
  t22 = ((((((((t22 * 0.0001150135847005629 + t4 * -0.0001150135847005629) +
               t23 * 0.0455640643276638) +
              t124 * -3.6335149999899841E-8) +
             t19 * -3.6335149999899841E-8) +
            t180 * -0.0455640643276638) +
           t128 * -3.6335149999899841E-8) +
          t546 * 3.6335149999899841E-8) +
         t11 * 0.0455640643276638) +
        t544 * 0.0455640643276638;
  t731 = t399 * t729;
  t733 = t538_tmp * t25;
  t734 = t542 * t22;
  t742 = (t537_tmp * t709 + t613_tmp * t710) + -(t615 * t711);
  t743 = (t539_tmp * t709 + t710 * c_t620_tmp) + t617 * t711;
  t744 = (t731 + t733) + t734;
  t745 = ((((t547 * t709 + t155 * t710) + t5 * t711) + t537_tmp * t729) +
          t613_tmp * t22) +
         -(t615 * t25);
  t746 =
      ((((-(t551 * t709) + -(t619 * t711)) + t624 * t710) + t539_tmp * t729) +
       t617 * t25) +
      t22 * c_t620_tmp;
  C[0] =
      model_C11(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[7] =
      model_C12(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[14] =
      model_C13(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[21] =
      model_C14(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[28] =
      model_C15(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[35] =
      model_C16(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[42] =
      model_C17(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[1] =
      model_C21(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[8] =
      model_C22(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[15] =
      model_C23(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[22] =
      model_C24(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[29] =
      model_C25(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[36] =
      model_C26(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[43] =
      model_C27(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[2] =
      model_C31(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[9] =
      model_C32(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[16] =
      model_C33(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[23] =
      model_C34(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[30] =
      model_C35(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[37] =
      model_C36(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[44] =
      model_C37(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[3] =
      model_C41(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[10] =
      model_C42(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[17] =
      model_C43(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[24] =
      model_C44(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[31] =
      model_C45(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[38] =
      model_C46(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[45] =
      model_C47(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[4] =
      model_C51(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[11] =
      model_C52(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[18] =
      model_C53(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[25] =
      model_C54(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[32] =
      model_C55(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[39] =
      model_C56(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[46] =
      model_C57(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[5] =
      model_C61(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[12] =
      model_C62(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[19] =
      model_C63(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[26] =
      model_C64(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[33] =
      model_C65(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[40] =
      model_C66(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[47] =
      model_C67(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  d = t399 * t503;
  d1 = t399 * t504;
  d2 = t537_tmp * (t435_tmp + t7 * t484_tmp);
  d3 = t539_tmp * (t598_tmp_tmp + t7 * -t421_tmp);
  d4 = t537_tmp * (t601_tmp_tmp + -t487_tmp);
  d5 = t539_tmp * (t599_tmp_tmp + t7 * t414_tmp);
  d6 = t14 * t234_tmp;
  d7 = t8 * t242;
  d8 = t15 * t242;
  d9 = t391_tmp * t399;
  d10 = t391_tmp * t538_tmp;
  d11 = t391_tmp * t542;
  d12 = t537_tmp * t127;
  d13 = t127 * t613_tmp;
  d14 = t519 * c_t620_tmp;
  d15 = t366 * t399;
  d16 = t366 * t538_tmp;
  d17 = t366 * t542;
  C_tmp = ((t421_tmp * 0.01624785000012707 - t439) +
           b_t620_tmp * 0.01624785000012707) +
          t708_tmp * 0.00040042500000154752;
  b_C_tmp = t218 - t355_tmp;
  c_C_tmp = t399 * t401;
  d_C_tmp = t401 * t538_tmp;
  e_C_tmp = t401 * t542;
  f_C_tmp = t399 * t550;
  g_C_tmp = t496 * t539_tmp;
  h_C_tmp = t496 * t617;
  i_C_tmp = t537_tmp * (t343 + -t592_tmp);
  j_C_tmp = t537_tmp * (t593_tmp + t516);
  k_C_tmp = t539_tmp * (t596_tmp + t527);
  l_C_tmp = t539_tmp * (-t597_tmp + b_t597_tmp);
  m_C_tmp = t537_tmp * b_C_tmp;
  C_tmp_tmp = t15 * t243 - t8 * t394;
  n_C_tmp = t399 * C_tmp_tmp;
  o_C_tmp = t613_tmp * b_C_tmp;
  b_C_tmp *= t615;
  C_tmp_tmp_tmp = t2 * t3;
  b_C_tmp_tmp =
      ((C_tmp_tmp_tmp * 0.42079999999987189 + t39 * 0.31429999999818392) +
       t10 * t31) -
      t100_tmp * 0.31429999999818392;
  p_C_tmp = (((((b_C_tmp_tmp + t226_tmp * 0.1356979999982286) -
                t333_tmp * 0.00028100000000108588) -
               t334_tmp * 0.011402000000089171) -
              t342_tmp * 0.1356979999982286) +
             t500_tmp * 0.00028100000000108588) -
            t505_tmp * 0.011402000000089171;
  c_C_tmp_tmp = t2 * t613_tmp;
  q_C_tmp = t2 * t537_tmp;
  r_C_tmp = t9 * t539_tmp;
  s_C_tmp = t496 * c_t620_tmp;
  t_C_tmp = t503_tmp * t389_tmp * 0.00040042500000154752 +
            t504_tmp * t389_tmp * 0.01624785000012707;
  u_C_tmp = d6 * t542;
  v_C_tmp = t428_tmp * t539_tmp;
  w_C_tmp = t456_tmp * t537_tmp;
  x_C_tmp = t428_tmp * t617;
  y_C_tmp = t456_tmp * t613_tmp;
  ab_C_tmp = t456_tmp * t615;
  bb_C_tmp = ((-t415 + t421_tmp * 0.011402000000089171) +
              b_t620_tmp * 0.011402000000089171) +
             t708_tmp * 0.00028100000000108588;
  cb_C_tmp = t125_tmp * t399;
  d_C_tmp_tmp = t125_tmp * t538_tmp;
  db_C_tmp = t233_tmp * t537_tmp;
  eb_C_tmp = t241 * t539_tmp;
  e_C_tmp_tmp = t233_tmp * t613_tmp;
  f_C_tmp_tmp = t428_tmp * c_t620_tmp;
  g_C_tmp_tmp = d6 * t399;
  fb_C_tmp = d6 * t538_tmp;
  gb_C_tmp = (t428_tmp * -0.1356979999982286 + t7 * t415) +
             t7 * (t421_tmp * -0.011402000000089171);
  hb_C_tmp = t241 * (t421_tmp + t8 * (t277 - t404));
  ib_C_tmp = ((t448 * 0.01624785000012707 - t478_tmp * 0.000400425000002258) +
              t588 * 0.01624785000012707) +
             t625_tmp * 0.000400425000002258;
  jb_C_tmp =
      -(t589_tmp * 3.6335149999899841E-8) + hb_C_tmp * 3.6335149999899841E-8;
  h_C_tmp_tmp = t8 * t537_tmp;
  i_C_tmp_tmp = t15 * t537_tmp;
  kb_C_tmp = t396_tmp * t615;
  j_C_tmp_tmp = t8 * t539_tmp;
  k_C_tmp_tmp = t15 * t539_tmp;
  lb_C_tmp = t539_tmp * t620_tmp;
  mb_C_tmp = t617 * t620_tmp;
  nb_C_tmp = h_C_tmp_tmp * t537_tmp;
  ob_C_tmp = i_C_tmp_tmp * t537_tmp;
  pb_C_tmp = j_C_tmp_tmp * t539_tmp;
  qb_C_tmp = k_C_tmp_tmp * t539_tmp;
  l_C_tmp_tmp = t234_tmp * t538_tmp;
  m_C_tmp_tmp = t389_tmp * c_t620_tmp;
  rb_C_tmp =
      t602_tmp * 3.6335149999899841E-8 + m_C_tmp_tmp * 3.6335149999899841E-8;
  n_C_tmp_tmp = t396_tmp * t613_tmp;
  sb_C_tmp = t296 - t404 * 0.1356979999982286;
  tb_C_tmp = t234_tmp * t399;
  ub_C_tmp = t389_tmp * t539_tmp;
  vb_C_tmp = t396_tmp * t537_tmp;
  o_C_tmp_tmp = t127 * t615;
  p_C_tmp_tmp = c_t620_tmp * t620_tmp;
  wb_C_tmp = t264 - t427_tmp * 0.1356979999982286;
  xb_C_tmp = t8 * t353_tmp;
  yb_C_tmp = t15 * t353_tmp;
  ac_C_tmp = t14 * t357_tmp;
  bc_C_tmp = t8 * t178;
  cc_C_tmp = t15 * t178;
  q_C_tmp_tmp = t3 * t538_tmp;
  dc_C_tmp = t33_tmp * c_t620_tmp;
  r_C_tmp_tmp = t38_tmp * t613_tmp;
  ec_C_tmp = t8 * t182 - t15 * t316;
  fc_C_tmp = t3 * t399;
  gc_C_tmp =
      t623_tmp * 3.6335149999899841E-8 + t627_tmp * 3.6335150000000207E-8;
  hc_C_tmp = t33_tmp * t539_tmp;
  ic_C_tmp = t38_tmp * t537_tmp;
  jc_C_tmp = t8 * t354;
  kc_C_tmp = t15 * t354;
  lc_C_tmp = t8 * t238;
  t354 = t15 * t238;
  t182 = ((t20 * -0.01279999999997017 + t41 * -0.01279999999997017) +
          t175_tmp * 0.31429999999818392) +
         t195_tmp * 0.1356979999982286;
  mc_C_tmp = t317 * t399;
  nc_C_tmp = t317 * t538_tmp;
  oc_C_tmp = t317 * t542;
  pc_C_tmp = t399 * t493;
  qc_C_tmp = t148 * t537_tmp;
  rc_C_tmp = t521 * t539_tmp;
  sc_C_tmp = t148 * t613_tmp;
  t394 = t148 * t615;
  t243 = t521 * t617;
  t415 = t537_tmp * (t373_tmp + t531_tmp);
  t31 = t537_tmp * (-t605_tmp_tmp + b_t605_tmp_tmp);
  t353_tmp = t539_tmp * (t604_tmp + t533);
  t357_tmp = t539_tmp * (-t606_tmp + b_t606_tmp);
  t316 = t399 * ec_C_tmp;
  t619 = t12 * t119_tmp;
  t729 = t14 * t360;
  t624 = t521 * c_t620_tmp;
  t546 = (t36 + t3 * t27) + t619 * 0.31429999999818392;
  t362 =
      (t546 + t196_tmp_tmp * 0.1356979999982286) + t372 * -0.1356979999982286;
  t192 = t46 * 0.31429999999818392 + t140 * 0.31429999999818392;
  t311_tmp = (((t192 + t268_tmp * 0.1356979999982286) + t322) + t328) + t330;
  t288_tmp = t8 * t497_tmp;
  t287_tmp = t15 * t497_tmp;
  t544 = t8 * t161;
  t161 *= t15;
  t13 = t326_tmp * -0.01624785000012707 + t330_tmp * 0.00040042500000154752;
  t222 = t399 * t524;
  t192_tmp = t501 * t537_tmp;
  t365 = t519 * t539_tmp;
  t186 = t501 * t613_tmp;
  t242 = t501 * t615;
  t127 = t537_tmp * (-t590_tmp_tmp + t528);
  t178 = t537_tmp * (t591_tmp_tmp + t529);
  t238 = t539_tmp * (-t326_tmp + t532);
  t148 = t539_tmp * (t330_tmp + t534);
  t11 = t519 * t617;
  t25 = t119_tmp * c_t620_tmp;
  t5 = t238_tmp * t542;
  t155 = t399 * t523;
  t22 = t121 * t613_tmp;
  t4 = t238_tmp * t538_tmp;
  t23 = (t88 + t130_tmp * -0.31429999999818392) + t254 * -0.1356979999982286;
  t124 = t119_tmp * t539_tmp;
  t19 = t25 * 3.6335149999899841E-8;
  t180 = t121 * t537_tmp;
  t128 = t238_tmp * t399;
  C[6] =
      (((((dq2 *
               ((((((((((((((((((((((((((t704 * C_tmp -
                                         t538_tmp *
                                             (((((-t618 + t622) +
                                                 t9 *
                                                     (t421_tmp +
                                                      t8 * t620_tmp) *
                                                     0.0455640643276638) +
                                                q_C_tmp *
                                                    5.7506792350281437E-5) +
                                               r_C_tmp *
                                                   5.7506792350281437E-5) +
                                              c_C_tmp_tmp *
                                                  0.0455640643276638)) +
                                        t699 *
                                            (((((((((t39 * 0.44787749999741211 +
                                                     C_tmp_tmp_tmp *
                                                         0.59963999999981754) +
                                                    t10 * t20 *
                                                        0.018239999999957492) -
                                                   t100_tmp *
                                                       0.44787749999741211) +
                                                  t226_tmp *
                                                      0.1933696499974758) -
                                                 t334_tmp *
                                                     0.01624785000012707) -
                                                t333_tmp *
                                                    0.00040042500000154752) -
                                               t342_tmp * 0.1933696499974758) +
                                              t500_tmp *
                                                  0.00040042500000154752) -
                                             t505_tmp * 0.01624785000012707)) -
                                       t707 *
                                           (((t527 * 0.00040042500000154752 +
                                              t596_tmp *
                                                  0.00040042500000154752) -
                                             t597_tmp * 0.01624785000012707) +
                                            b_t597_tmp * 0.01624785000012707)) -
                                      t2 * t743) +
                                     t2 * t745) +
                                    t9 * t742) +
                                   t9 * t746) -
                                  t401 * t709) -
                                 t550 * t711) +
                                C_tmp * (((((t704_tmp -
                                             t343 * 0.00028100000000108588) -
                                            t516 * 0.011402000000089171) -
                                           t593_tmp * 0.011402000000089171) -
                                          t355_tmp * 0.1356979999982286) +
                                         t592_tmp * 0.00028100000000108588)) -
                               t399 *
                                   ((((((((((((((t496 *
                                                     (t421_tmp +
                                                      t8 * t620_tmp) *
                                                     -5.7506792350281437E-5 +
                                                 c_C_tmp *
                                                     0.0039586564452065431) +
                                                d_C_tmp *
                                                    0.0023296955387195339) +
                                               e_C_tmp *
                                                   5.7506792350281437E-5) +
                                              f_C_tmp * 0.0023296955387195339) -
                                             g_C_tmp * 0.0039586564452065431) -
                                            h_C_tmp * 0.0023296955387195339) +
                                           i_C_tmp * 5.7506792350281437E-5) +
                                          j_C_tmp * 0.0023296955387195339) -
                                         k_C_tmp * 0.0023296955387195339) +
                                        l_C_tmp * 5.7506792350281437E-5) -
                                       m_C_tmp * 0.0039586564452065431) +
                                      n_C_tmp * 5.7506792350281437E-5) -
                                     o_C_tmp * 5.7506792350281437E-5) +
                                    b_C_tmp * 0.0023296955387195339)) -
                              t704 * ib_C_tmp) -
                             t542 *
                                 ((((((((((((((s_C_tmp * -0.0455640643276638 +
                                               c_C_tmp *
                                                   0.0001150135847005629) +
                                              d_C_tmp * 3.6335149999899841E-8) +
                                             e_C_tmp * 0.0455640643276638) +
                                            f_C_tmp * 3.6335149999899841E-8) -
                                           g_C_tmp * 0.0001150135847005629) -
                                          h_C_tmp * 3.6335149999899841E-8) +
                                         i_C_tmp * 0.0455640643276638) +
                                        j_C_tmp * 3.6335149999899841E-8) -
                                       k_C_tmp * 3.6335149999899841E-8) +
                                      l_C_tmp * 0.0455640643276638) -
                                     m_C_tmp * 0.0001150135847005629) +
                                    n_C_tmp * 0.0455640643276638) -
                                   o_C_tmp * 0.0455640643276638) +
                                  b_C_tmp * 3.6335149999899841E-8)) -
                            t710 * C_tmp_tmp) +
                           bb_C_tmp * (((((((((t43 * 0.44787749999741211 +
                                               t218 * 0.1933696499974758) +
                                              t35_tmp * 0.59963999999981754) +
                                             t10 * t24 * 0.018239999999957492) -
                                            t116_tmp * 0.44787749999741211) -
                                           b_t704_tmp * 0.01624785000012707) -
                                          c_t704_tmp * 0.00040042500000154752) -
                                         d_t704_tmp * 0.1933696499974758) +
                                        e_t704_tmp * 0.00040042500000154752) -
                                       f_t704_tmp * 0.01624785000012707)) +
                          t542 *
                              (((t620 + c_C_tmp_tmp * 3.6335149999899841E-8) +
                                t618_tmp * 0.0455640643276638) -
                               t622_tmp * 0.0455640643276638)) +
                         t700 * p_C_tmp) +
                        t703 * p_C_tmp) +
                       t538_tmp * (((t618 - t622) +
                                    d_t620_tmp * 0.046125882182423077) +
                                   c_C_tmp_tmp * 0.046125882182423077)) +
                      t707 * (((t334_tmp * 0.00040042500000154752 -
                                t333_tmp * 0.01624785000012707) +
                               t500_tmp * 0.01624785000012707) +
                              t505_tmp * 0.00040042500000154752)) +
                     t708 * (((b_t704_tmp * 0.00040042500000154752 -
                               c_t704_tmp * 0.01624785000012707) +
                              e_t704_tmp * 0.01624785000012707) +
                             f_t704_tmp * 0.00040042500000154752)) +
                    t542 * (((((t620 + q_C_tmp * 0.0023296955387195339) +
                               r_C_tmp * 0.0023296955387195339) +
                              c_C_tmp_tmp * 3.6335149999899841E-8) -
                             t618_tmp * 0.046125882182423077) +
                            t622_tmp * 0.046125882182423077)) +
                   t399 * (((d_t620_tmp * 0.0023296955387195339 +
                             c_C_tmp_tmp * 0.0023296955387195339) +
                            t618_tmp * 5.7506792350281437E-5) -
                           t622_tmp * 5.7506792350281437E-5)) -
                  t708 * (((t343 * -0.01624785000012707 +
                            t516 * 0.00040042500000154752) +
                           t593_tmp * 0.00040042500000154752) +
                          t592_tmp * 0.01624785000012707)) -
                 t538_tmp * ((((((((((((((s_C_tmp * -3.6335149999899841E-8 +
                                          c_C_tmp * 0.0046593910774390679) +
                                         d_C_tmp * 0.046125882182423077) +
                                        e_C_tmp * 3.6335149999899841E-8) +
                                       f_C_tmp * 0.046125882182423077) -
                                      g_C_tmp * 0.0046593910774390679) -
                                     h_C_tmp * 0.046125882182423077) +
                                    i_C_tmp * 3.6335149999899841E-8) +
                                   j_C_tmp * 0.046125882182423077) -
                                  k_C_tmp * 0.046125882182423077) +
                                 l_C_tmp * 3.6335149999899841E-8) -
                                m_C_tmp * 0.0046593910774390679) +
                               n_C_tmp * 3.6335149999899841E-8) -
                              o_C_tmp * 3.6335149999899841E-8) +
                             b_C_tmp * 0.046125882182423077)) +
                t700 * ((((((b_C_tmp_tmp - t341 * 0.1356979999982286) -
                            t527 * 0.011402000000089171) +
                           t496_tmp * 0.1356979999982286) -
                          t596_tmp * 0.011402000000089171) -
                         t597_tmp * 0.00028100000000108588) +
                        b_t597_tmp * 0.00028100000000108588)) *
               -0.5 -
           dq5 *
               (((((((((((((((((((((((((((t399 *
                                              (((((t241 *
                                                       (t421_tmp + b_t620_tmp) *
                                                       0.0023296955387195339 -
                                                   t589_tmp *
                                                       0.0023296955387195339) +
                                                  d_C_tmp_tmp *
                                                      5.7506792350281437E-5) +
                                                 e_C_tmp_tmp *
                                                     0.0023296955387195339) +
                                                t634_tmp *
                                                    5.7506792350281437E-5) -
                                               t643_tmp *
                                                   5.7506792350281437E-5) -
                                          t538_tmp *
                                              ((((((((-t634 + t643) +
                                                     t241 * c_t620_tmp *
                                                         0.0455640643276638) -
                                                    cb_C_tmp *
                                                        5.7506792350281437E-5) -
                                                   d_C_tmp_tmp *
                                                       3.6335149999899841E-8) -
                                                  t589_tmp *
                                                      0.0455640643276638) +
                                                 db_C_tmp *
                                                     5.7506792350281437E-5) +
                                                eb_C_tmp *
                                                    5.7506792350281437E-5) +
                                               e_C_tmp_tmp *
                                                   0.0455640643276638)) +
                                         C_tmp *
                                             ((((t435_tmp *
                                                     0.00028100000000108588 +
                                                 t456) +
                                                t484) +
                                               t487) +
                                              t601_tmp_tmp *
                                                  0.011402000000089171)) -
                                        t538_tmp *
                                            ((((((((((((((d * -0.046125882182423077 -
                                                          d1 *
                                                              3.6335149999899841E-8) -
                                                         d2 *
                                                             3.6335149999899841E-8) -
                                                        d3 *
                                                            0.046125882182423077) -
                                                       d4 *
                                                           0.046125882182423077) -
                                                      d5 *
                                                          3.6335149999899841E-8) +
                                                     f_C_tmp_tmp *
                                                         3.6335149999899841E-8) +
                                                    g_C_tmp_tmp *
                                                        0.0046593910774390679) +
                                                   t14 * t234_tmp * t538_tmp *
                                                       0.046125882182423077) +
                                                  u_C_tmp *
                                                      3.6335149999899841E-8) +
                                                 v_C_tmp *
                                                     0.0046593910774390679) +
                                                w_C_tmp *
                                                    0.0046593910774390679) +
                                               x_C_tmp * 0.046125882182423077) +
                                              y_C_tmp * 3.6335149999899841E-8) -
                                             ab_C_tmp * 0.046125882182423077)) -
                                       t125_tmp * t744) +
                                      t233_tmp * t745) +
                                     t241 * t742) +
                                    t241 * t746) -
                                   t245 * t743) +
                                  t503 * t711) +
                                 t504 * t710) -
                                t707 * ((t_C_tmp - t598_tmp_tmp *
                                                       0.00040042500000154752) +
                                        t599_tmp_tmp * 0.01624785000012707)) +
                               t707 * ((t_C_tmp -
                                        t598_tmp_tmp * 0.00040042500000154752) +
                                       t599_tmp_tmp * 0.01624785000012707)) +
                              t708 * (((t483 + t489) -
                                       t601_tmp_tmp * 0.00040042500000154752) +
                                      t435_tmp * 0.01624785000012707)) -
                             t700 * ((((t8 * t392 * 0.011402000000089171 +
                                        t15 * t392 * 0.00028100000000108588) -
                                       t14 * t400_tmp * 0.1356979999982286) -
                                      t7 * t448 * 0.011402000000089171) +
                                     t504_tmp * t400_tmp *
                                         0.00028100000000108588)) -
                            t699 * ((((t598_tmp_tmp * 0.01624785000012707 +
                                       t599_tmp_tmp * 0.00040042500000154752) -
                                      t428_tmp * 0.1933696499974758) +
                                     t7 * (t421_tmp * -0.01624785000012707)) +
                                    t7 * t439)) -
                           t399 *
                               ((((((((((((((d * -0.0023296955387195339 -
                                             d1 * 5.7506792350281437E-5) -
                                            d2 * 5.7506792350281437E-5) -
                                           d3 * 0.0023296955387195339) -
                                          d4 * 0.0023296955387195339) -
                                         d5 * 5.7506792350281437E-5) +
                                        f_C_tmp_tmp * 5.7506792350281437E-5) +
                                       g_C_tmp_tmp * 0.0039586564452065431) +
                                      fb_C_tmp * 0.0023296955387195339) +
                                     u_C_tmp * 5.7506792350281437E-5) +
                                    v_C_tmp * 0.0039586564452065431) +
                                   w_C_tmp * 0.0039586564452065431) +
                                  x_C_tmp * 0.0023296955387195339) +
                                 y_C_tmp * 5.7506792350281437E-5) -
                                ab_C_tmp * 0.0023296955387195339)) +
                          bb_C_tmp *
                              ((((t601_tmp_tmp * 0.01624785000012707 +
                                  t435_tmp * 0.00040042500000154752) -
                                 t456_tmp * 0.1933696499974758) -
                                t487_tmp * 0.01624785000012707) +
                               t7 * (t484_tmp * 0.00040042500000154752))) +
                         t542 * (((((((jb_C_tmp -
                                       cb_C_tmp * 0.0023296955387195339) -
                                      d_C_tmp_tmp * 0.046125882182423077) +
                                     db_C_tmp * 0.0023296955387195339) +
                                    eb_C_tmp * 0.0023296955387195339) +
                                   e_C_tmp_tmp * 3.6335149999899841E-8) -
                                  t634_tmp * 0.046125882182423077) +
                                 t643_tmp * 0.046125882182423077)) -
                        t542 * ((((((((((((((d * -3.6335149999899841E-8 -
                                             d1 * 0.0455640643276638) -
                                            d2 * 0.0455640643276638) -
                                           d3 * 3.6335149999899841E-8) -
                                          d4 * 3.6335149999899841E-8) -
                                         d5 * 0.0455640643276638) +
                                        f_C_tmp_tmp * 0.0455640643276638) +
                                       g_C_tmp_tmp * 0.0001150135847005629) +
                                      fb_C_tmp * 3.6335149999899841E-8) +
                                     u_C_tmp * 0.0455640643276638) +
                                    v_C_tmp * 0.0001150135847005629) +
                                   w_C_tmp * 0.0001150135847005629) +
                                  x_C_tmp * 3.6335149999899841E-8) +
                                 y_C_tmp * 0.0455640643276638) -
                                ab_C_tmp * 3.6335149999899841E-8)) -
                       t700 *
                           ((gb_C_tmp + t598_tmp_tmp * 0.011402000000089171) +
                            t599_tmp_tmp * 0.00028100000000108588)) -
                      t703 * ((gb_C_tmp + t598_tmp_tmp * 0.011402000000089171) +
                              t599_tmp_tmp * 0.00028100000000108588)) +
                     t538_tmp *
                         (((((t634 - t643) + hb_C_tmp * 0.046125882182423077) -
                            t589_tmp * 0.046125882182423077) +
                           d_C_tmp_tmp * 3.6335149999899841E-8) +
                          e_C_tmp_tmp * 0.046125882182423077)) -
                    t708 * (((t435_tmp * 0.01624785000012707 + t483) + t489) -
                            t601_tmp_tmp * 0.00040042500000154752)) +
                   C_tmp * ((((t8 * t397 * 0.011402000000089171 +
                               t15 * t397 * 0.00028100000000108588) -
                              t14 * t402_tmp * 0.1356979999982286) +
                             t504_tmp * t402_tmp * 0.00028100000000108588) -
                            t503_tmp * t402_tmp * 0.011402000000089171)) -
                  ib_C_tmp * ((((t456 + t484) + t487) +
                               t601_tmp_tmp * 0.011402000000089171) +
                              t435_tmp * 0.00028100000000108588)) +
                 t542 * ((((jb_C_tmp + d_C_tmp_tmp * 0.0455640643276638) +
                           e_C_tmp_tmp * 3.6335149999899841E-8) +
                          t634_tmp * 0.0455640643276638) -
                         t643_tmp * 0.0455640643276638)) -
                d6 * t709) *
               0.5) +
          dq6 *
              (((((((((((((((((((((((((((t399 *
                                             (((((t389_tmp *
                                                      (t421_tmp +
                                                       t8 * t620_tmp) *
                                                      0.0023296955387195339 +
                                                  t602_tmp *
                                                      0.0023296955387195339) -
                                                 l_C_tmp_tmp *
                                                     5.7506792350281437E-5) -
                                                t645_tmp *
                                                    5.7506792350281437E-5) +
                                               n_C_tmp_tmp *
                                                   0.0023296955387195339) +
                                              kb_C_tmp *
                                                  5.7506792350281437E-5) +
                                         t542 *
                                             ((((((((((((((d7 *
                                                               -0.0455640643276638 +
                                                           d8 *
                                                               3.6335149999899841E-8) -
                                                          d9 *
                                                              0.0001150135847005629) -
                                                         d10 *
                                                             3.6335149999899841E-8) -
                                                        d11 *
                                                            0.0455640643276638) +
                                                       d12 *
                                                           0.0001150135847005629) +
                                                      d13 *
                                                          0.0455640643276638) -
                                                     o_C_tmp_tmp *
                                                         3.6335149999899841E-8) +
                                                    p_C_tmp_tmp *
                                                        0.0455640643276638) +
                                                   lb_C_tmp *
                                                       0.0001150135847005629) +
                                                  mb_C_tmp *
                                                      3.6335149999899841E-8) -
                                                 nb_C_tmp *
                                                     0.0455640643276638) +
                                                ob_C_tmp *
                                                    3.6335149999899841E-8) -
                                               pb_C_tmp * 0.0455640643276638) +
                                              qb_C_tmp *
                                                  3.6335149999899841E-8)) +
                                        bb_C_tmp *
                                            (((t249 * 0.1933696499974758 -
                                               t427_tmp * 0.1933696499974758) -
                                              h_C_tmp_tmp *
                                                  0.00040042500000154752) +
                                             i_C_tmp_tmp *
                                                 0.01624785000012707)) +
                                       t234_tmp * t744) -
                                      t391_tmp * t709) +
                                     t389_tmp * t746) +
                                    t396_tmp * t745) +
                                   C_tmp *
                                       (((t567_tmp * 0.1356979999982286 -
                                          b_t567_tmp * 0.1356979999982286) -
                                         t8 * t551 * 0.00028100000000108588) +
                                        t15 * t551 * 0.011402000000089171)) +
                                  t542 *
                                      (((((((rb_C_tmp +
                                             tb_C_tmp * 0.0023296955387195339) +
                                            l_C_tmp_tmp *
                                                0.046125882182423077) +
                                           ub_C_tmp * 0.0023296955387195339) +
                                          vb_C_tmp * 0.0023296955387195339) +
                                         t645_tmp * 0.046125882182423077) +
                                        n_C_tmp_tmp * 3.6335149999899841E-8) -
                                       kb_C_tmp * 0.046125882182423077)) -
                                 t700 *
                                     (((t296 - t445_tmp * 0.1356979999982286) -
                                       t8 * t547 * 0.00028100000000108588) +
                                      t15 * t547 * 0.011402000000089171)) -
                                t708 * (h_C_tmp_tmp * 0.01624785000012707 +
                                        i_C_tmp_tmp * 0.00040042500000154752)) +
                               t707 * (j_C_tmp_tmp * 0.01624785000012707 +
                                       k_C_tmp_tmp * 0.00040042500000154752)) +
                              t708 * (h_C_tmp_tmp * 0.01624785000012707 +
                                      i_C_tmp_tmp * 0.00040042500000154752)) -
                             t707 * (j_C_tmp_tmp * 0.01624785000012707 +
                                     k_C_tmp_tmp * 0.00040042500000154752)) +
                            C_tmp * ((wb_C_tmp -
                                      h_C_tmp_tmp * 0.00028100000000108588) +
                                     i_C_tmp_tmp * 0.011402000000089171)) +
                           t538_tmp *
                               ((((((((((((((d7 * -3.6335149999899841E-8 +
                                             d8 * 0.046125882182423077) -
                                            d9 * 0.0046593910774390679) -
                                           d10 * 0.046125882182423077) -
                                          d11 * 3.6335149999899841E-8) +
                                         d12 * 0.0046593910774390679) +
                                        d13 * 3.6335149999899841E-8) -
                                       o_C_tmp_tmp * 0.046125882182423077) +
                                      p_C_tmp_tmp * 3.6335149999899841E-8) +
                                     lb_C_tmp * 0.0046593910774390679) +
                                    mb_C_tmp * 0.046125882182423077) -
                                   nb_C_tmp * 3.6335149999899841E-8) +
                                  ob_C_tmp * 0.046125882182423077) -
                                 pb_C_tmp * 3.6335149999899841E-8) +
                                qb_C_tmp * 0.046125882182423077)) +
                          t542 *
                              ((((rb_C_tmp - l_C_tmp_tmp * 0.0455640643276638) -
                                 t645_tmp * 0.0455640643276638) +
                                n_C_tmp_tmp * 3.6335149999899841E-8) +
                               kb_C_tmp * 0.0455640643276638)) -
                         t703 * ((sb_C_tmp -
                                  j_C_tmp_tmp * 0.00028100000000108588) +
                                 k_C_tmp_tmp * 0.011402000000089171)) -
                        t700 *
                            ((sb_C_tmp - j_C_tmp_tmp * 0.00028100000000108588) +
                             k_C_tmp_tmp * 0.011402000000089171)) -
                       t538_tmp *
                           ((((((((t645 + kb_C_tmp * -3.6335149999899841E-8) +
                                  m_C_tmp_tmp * 0.0455640643276638) +
                                 tb_C_tmp * 5.7506792350281437E-5) +
                                l_C_tmp_tmp * 3.6335149999899841E-8) +
                               t602_tmp * 0.0455640643276638) +
                              ub_C_tmp * 5.7506792350281437E-5) +
                             vb_C_tmp * 5.7506792350281437E-5) +
                            n_C_tmp_tmp * 0.0455640643276638)) +
                      t399 * ((((((((((((((d7 * -5.7506792350281437E-5 +
                                           t15 * t443) -
                                          d9 * 0.0039586564452065431) -
                                         d10 * 0.0023296955387195339) -
                                        d11 * 5.7506792350281437E-5) +
                                       d12 * 0.0039586564452065431) +
                                      d13 * 5.7506792350281437E-5) -
                                     o_C_tmp_tmp * 0.0023296955387195339) +
                                    p_C_tmp_tmp * 5.7506792350281437E-5) +
                                   lb_C_tmp * 0.0039586564452065431) +
                                  mb_C_tmp * 0.0023296955387195339) -
                                 nb_C_tmp * 5.7506792350281437E-5) +
                                ob_C_tmp * 0.0023296955387195339) -
                               pb_C_tmp * 5.7506792350281437E-5) +
                              qb_C_tmp * 0.0023296955387195339)) +
                     t742 * t400_tmp) -
                    t743 * t402_tmp) -
                   t699 * (((t277 * 0.1933696499974758 -
                             t404 * 0.1933696499974758) -
                            j_C_tmp_tmp * 0.00040042500000154752) +
                           k_C_tmp_tmp * 0.01624785000012707)) +
                  t538_tmp * (((((-t645 + kb_C_tmp * 3.6335149999899841E-8) +
                                 m_C_tmp_tmp * 0.046125882182423077) +
                                t602_tmp * 0.046125882182423077) -
                               l_C_tmp_tmp * 3.6335149999899841E-8) +
                              n_C_tmp_tmp * 0.046125882182423077)) -
                 ib_C_tmp * ((wb_C_tmp - h_C_tmp_tmp * 0.00028100000000108588) +
                             i_C_tmp_tmp * 0.011402000000089171)) -
                t8 * t399 * t710) +
               t15 * t399 * t711) *
              0.5) +
         dq3 *
             (((((((((((((((((((((((((((t542 *
                                            ((((((((t559 +
                                                    fc_C_tmp *
                                                        0.002329695538700001) +
                                                   q_C_tmp_tmp *
                                                       0.046125882182625012) +
                                                  t33_tmp *
                                                      (t421_tmp +
                                                       t8 * t620_tmp) *
                                                      3.6335150000000207E-8) +
                                                 hc_C_tmp *
                                                     0.002329695538700001) -
                                                ic_C_tmp *
                                                    0.0023296955387195339) +
                                               t627_tmp *
                                                   0.046125882182625012) -
                                              r_C_tmp_tmp *
                                                  3.6335149999899841E-8) +
                                             t623_tmp * 0.046125882182423077) +
                                        ib_C_tmp *
                                            (((((t182 +
                                                 xb_C_tmp *
                                                     0.011402000000089171) +
                                                yb_C_tmp *
                                                    0.00028100000000108588) -
                                               ac_C_tmp * 0.1356979999982286) +
                                              bc_C_tmp *
                                                  0.00028100000000108588) -
                                             cc_C_tmp * 0.011402000000089171)) -
                                       t707 *
                                           (((t533 * 0.01624785000012707 -
                                              t606_tmp *
                                                  0.00040042500000154752) +
                                             t604_tmp * 0.01624785000012707) +
                                            b_t606_tmp *
                                                0.00040042500000154752)) -
                                      bb_C_tmp *
                                          ((((((((t20 * -0.018239999999957492 -
                                                  t41 * 0.018239999999957492) +
                                                 t175_tmp *
                                                     0.44787749999741211) +
                                                xb_C_tmp *
                                                    0.01624785000012707) +
                                               yb_C_tmp *
                                                   0.00040042500000154752) -
                                              ac_C_tmp * 0.1933696499974758) +
                                             bc_C_tmp *
                                                 0.00040042500000154752) -
                                            cc_C_tmp * 0.01624785000012707) +
                                           t195_tmp * 0.1933696499974758)) +
                                     t3 * t744) +
                                    t317 * t709) -
                                   t493 * t710) -
                                  t542 *
                                      (((((-t559 +
                                           dc_C_tmp * -3.6335150000000207E-8) +
                                          q_C_tmp_tmp * 0.0455640643274) +
                                         t627_tmp * 0.0455640643274) +
                                        r_C_tmp_tmp * 3.6335149999899841E-8) +
                                       t623_tmp * 0.0455640643276638)) +
                                 t538_tmp *
                                     ((((((((((((((t521 *
                                                       (t421_tmp + b_t620_tmp) *
                                                       3.6335149999899841E-8 +
                                                   mc_C_tmp *
                                                       0.0046593910774390679) +
                                                  nc_C_tmp *
                                                      0.046125882182423077) +
                                                 oc_C_tmp *
                                                     3.6335149999899841E-8) -
                                                pc_C_tmp *
                                                    3.6335149999899841E-8) +
                                               qc_C_tmp *
                                                   0.0046593910774390679) +
                                              rc_C_tmp *
                                                  0.0046593910774390679) +
                                             sc_C_tmp * 3.6335149999899841E-8) -
                                            t394 * 0.046125882182423077) +
                                           t243 * 0.046125882182423077) -
                                          t415 * 3.6335149999899841E-8) +
                                         t31 * 0.046125882182423077) -
                                        t353_tmp * 3.6335149999899841E-8) +
                                       t357_tmp * 0.046125882182423077) -
                                      t316 * 0.046125882182423077)) -
                                t538_tmp *
                                    ((((gc_C_tmp -
                                        t559_tmp * 0.046125882182625012) +
                                       q_C_tmp_tmp * 3.6335150000000207E-8) -
                                      dc_C_tmp * 0.046125882182625012) +
                                     r_C_tmp_tmp * 0.046125882182423077)) +
                               t700 *
                                   ((((t362 + t533 * 0.00028100000000108588) +
                                      t606_tmp * 0.011402000000089171) +
                                     t604_tmp * 0.00028100000000108588) -
                                    b_t606_tmp * 0.011402000000089171)) -
                              t711 * ec_C_tmp) -
                             t538_tmp *
                                 (((((((gc_C_tmp + fc_C_tmp * 5.750679235E-5) +
                                       q_C_tmp_tmp * 3.6335150000000207E-8) +
                                      t559_tmp * 0.0455640643274) +
                                     dc_C_tmp * 0.0455640643274) +
                                    hc_C_tmp * 5.750679235E-5) -
                                   ic_C_tmp * 5.7506792350281437E-5) -
                                  r_C_tmp_tmp * 0.0455640643276638)) +
                            t707 * (((jc_C_tmp * -0.00040042500000154752 +
                                      kc_C_tmp * 0.01624785000012707) +
                                     lc_C_tmp * 0.01624785000012707) +
                                    t354 * 0.00040042500000154752)) -
                           t708 * (((xb_C_tmp * -0.00040042500000154752 +
                                     yb_C_tmp * 0.01624785000012707) +
                                    bc_C_tmp * 0.01624785000012707) +
                                   cc_C_tmp * 0.00040042500000154752)) +
                          t703 * ((((((t546 + jc_C_tmp * 0.011402000000089171) +
                                      kc_C_tmp * 0.00028100000000108588) -
                                     t729 * 0.1356979999982286) +
                                    lc_C_tmp * 0.00028100000000108588) -
                                   t354 * 0.011402000000089171) +
                                  t196_tmp_tmp * 0.1356979999982286)) -
                         C_tmp * (((((t182 + t383) +
                                     t605_tmp_tmp * 0.011402000000089171) +
                                    t373_tmp * 0.00028100000000108588) +
                                   t531_tmp * 0.00028100000000108588) -
                                  b_t605_tmp_tmp * 0.011402000000089171)) +
                        t708 * (((t373_tmp * 0.01624785000012707 +
                                  t531_tmp * 0.01624785000012707) -
                                 t605_tmp_tmp * 0.00040042500000154752) +
                                b_t605_tmp_tmp * 0.00040042500000154752)) -
                       C_tmp * (((((t182 + t373_tmp * 0.00028100000000108588) +
                                   t383) +
                                  t531_tmp * 0.00028100000000108588) +
                                 t605_tmp_tmp * 0.011402000000089171) -
                                b_t605_tmp_tmp * 0.011402000000089171)) +
                      t399 * ((((((((((((((t624 * 5.7506792350281437E-5 +
                                           mc_C_tmp * 0.0039586564452065431) +
                                          nc_C_tmp * 0.0023296955387195339) +
                                         oc_C_tmp * 5.7506792350281437E-5) -
                                        pc_C_tmp * 5.7506792350281437E-5) +
                                       qc_C_tmp * 0.0039586564452065431) +
                                      rc_C_tmp * 0.0039586564452065431) +
                                     sc_C_tmp * 5.7506792350281437E-5) -
                                    t394 * 0.0023296955387195339) +
                                   t243 * 0.0023296955387195339) -
                                  t415 * 5.7506792350281437E-5) +
                                 t31 * 0.0023296955387195339) -
                                t353_tmp * 5.7506792350281437E-5) +
                               t357_tmp * 0.0023296955387195339) -
                              t316 * 0.0023296955387195339)) -
                     t399 * (((((t559_tmp * -0.002329695538700001 +
                                 q_C_tmp_tmp * 5.750679235E-5) -
                                dc_C_tmp * 0.002329695538700001) +
                               t627_tmp * 5.750679235E-5) +
                              r_C_tmp_tmp * 0.0023296955387195339) +
                             t623_tmp * 5.7506792350281437E-5)) +
                    t699 * ((((((((t24 * -0.018239999999957492 +
                                   t124_tmp * 0.018239999999957492) +
                                  t619 * 0.44787749999741211) +
                                 jc_C_tmp * 0.01624785000012707) +
                                kc_C_tmp * 0.00040042500000154752) -
                               t729 * 0.1933696499974758) +
                              lc_C_tmp * 0.00040042500000154752) -
                             t354 * 0.01624785000012707) +
                            t196_tmp_tmp * 0.1933696499974758)) +
                   t542 * ((((((((((((((t624 * 0.0455640643276638 +
                                        mc_C_tmp * 0.0001150135847005629) +
                                       nc_C_tmp * 3.6335149999899841E-8) +
                                      oc_C_tmp * 0.0455640643276638) -
                                     pc_C_tmp * 0.0455640643276638) +
                                    qc_C_tmp * 0.0001150135847005629) +
                                   rc_C_tmp * 0.0001150135847005629) +
                                  sc_C_tmp * 0.0455640643276638) -
                                 t394 * 3.6335149999899841E-8) +
                                t243 * 3.6335149999899841E-8) -
                               t415 * 0.0455640643276638) +
                              t31 * 3.6335149999899841E-8) -
                             t353_tmp * 0.0455640643276638) +
                            t357_tmp * 3.6335149999899841E-8) -
                           t316 * 3.6335149999899841E-8)) +
                  t700 * ((((t362 + t8 * t359_tmp * 0.011402000000089171) +
                            t15 * t359_tmp * 0.00028100000000108588) +
                           t8 * t514_tmp * 0.00028100000000108588) -
                          t15 * t514_tmp * 0.011402000000089171)) +
                 t33_tmp * t742) +
                t33_tmp * t746) +
               t38_tmp * t743) -
              t38_tmp * t745) *
             0.5) +
        dq1 *
            (((((((((((((((t731 * 2.0 + t733 * 2.0) + t734 * 2.0) +
                         C_tmp *
                             (((((b_t708_tmp + t416 * 0.1356979999982286) +
                                 t448 * 0.00028100000000108588) +
                                t588 * 0.00028100000000108588) +
                               t478_tmp * 0.011402000000089171) -
                              t625_tmp * 0.011402000000089171) *
                             2.0) +
                        t708 * C_tmp) +
                       bb_C_tmp * (((((((((((t9 * 0.016814999999991191 +
                                             t21 * 0.018239999999957492) +
                                            t40 * 0.018239999999957492) +
                                           t147 * 0.44787749999741211) +
                                          t269 * 0.1933696499974758) +
                                         t405 * 0.1933696499974758) -
                                        t33_tmp * 0.59963999999981754) -
                                       t75_tmp * 0.44787749999741211) +
                                      t414_tmp * 0.01624785000012707) +
                                     t421_tmp * 0.00040042500000154752) +
                                    b_t620_tmp * 0.00040042500000154752) -
                                   t708_tmp * 0.01624785000012707)) +
                      t700 * t707) +
                     t703 * t707 * 2.0) -
                    t708 * ib_C_tmp * 2.0) -
                   t399 *
                       (((t248 * 5.750679235E-5 - t250 * 0.002329695538700001) +
                         t407 * 5.750679235E-5) +
                        t432_tmp * 0.002329695538700001)) +
                  t542 * (((((t248 * 0.046125882182625012 +
                              t262 * 0.002329695538700001) +
                             t265) +
                            t407 * 0.046125882182625012) -
                           t432) -
                          t167_tmp * 0.002329695538700001)) +
                 t699 * (((((((((((t2 * 0.016814999999991191 +
                                   t18 * 0.018239999999957492) +
                                  t48 * 0.44787749999741211) +
                                 t133_tmp * 0.44787749999741211) +
                                t247 * 0.1933696499974758) +
                               t406 * 0.1933696499974758) +
                              t436 * 0.00040042500000154752) +
                             t552 * 0.00040042500000154752) -
                            t553 * 0.01624785000012707) +
                           t38_tmp * 0.59963999999981754) -
                          t121_tmp * 0.018239999999957492) +
                         t484_tmp * 0.01624785000012707)) +
                t700 *
                    (((((((t707_tmp + t133_tmp * 0.31429999999818392) +
                          t275 * 0.1356979999982286) +
                         t433 * 0.1356979999982286) +
                        t580 * 0.011402000000089171) +
                       t619_tmp * 0.011402000000089171) +
                      t624_tmp * 0.00028100000000108588) -
                     b_t624_tmp * 0.00028100000000108588) *
                    2.0) -
               t542 *
                   (((t248 * 0.0455640643274 - t265) + t407 * 0.0455640643274) +
                    t432)) -
              t538_tmp * (((t250 * -0.046125882182625012 + t259) + t442) +
                          t432_tmp * 0.046125882182625012)) -
             t538_tmp *
                 (((((t250 * 0.0455640643274 + t259) + t262 * 5.750679235E-5) +
                    t442) -
                   t167_tmp * 5.750679235E-5) -
                  t432_tmp * 0.0455640643274)) *
            0.5) -
       dq4 *
           (((((((((((((((((((((((((((-(t700 * ((t311_tmp +
                                                 t8 * t497_tmp *
                                                     0.00028100000000108588) -
                                                t15 * t497_tmp *
                                                    0.011402000000089171)) +
                                      t538_tmp *
                                          ((((((((((((((d14 *
                                                            3.6335149999899841E-8 +
                                                        d15 *
                                                            0.0046593910774390679) +
                                                       d16 *
                                                           0.046125882182423077) +
                                                      d17 *
                                                          3.6335149999899841E-8) -
                                                     t155 *
                                                         0.046125882182423077) +
                                                    t222 *
                                                        3.6335149999899841E-8) +
                                                   t192_tmp *
                                                       0.0046593910774390679) +
                                                  t365 *
                                                      0.0046593910774390679) +
                                                 t186 * 3.6335149999899841E-8) -
                                                t242 * 0.046125882182423077) +
                                               t127 * 3.6335149999899841E-8) -
                                              t178 * 0.046125882182423077) +
                                             t238 * 3.6335149999899841E-8) -
                                            t148 * 0.046125882182423077) +
                                           t11 * 0.046125882182423077)) -
                                     t700 * ((t311_tmp +
                                              t532 * 0.00028100000000108588) -
                                             t534 * 0.011402000000089171)) -
                                    t703 *
                                        ((((((t192 + t322) + t328) + t330) +
                                           t268_tmp * 0.1356979999982286) +
                                          t288_tmp * 0.00028100000000108588) -
                                         t287_tmp * 0.011402000000089171)) -
                                   bb_C_tmp *
                                       (((((((t130_tmp * -0.44787749999741211 -
                                              t254 * 0.1933696499974758) +
                                             t79_tmp * 0.44787749999741211) +
                                            t6 * t249 * 0.1933696499974758) -
                                           t544 * 0.00040042500000154752) +
                                          t161 * 0.01624785000012707) +
                                         t591_tmp_tmp * 0.01624785000012707) +
                                        t590_tmp_tmp *
                                            0.00040042500000154752)) -
                                  t121 * t743) +
                                 t119_tmp * t746) +
                                t119_tmp * t742) +
                               t121 * t745) +
                              t366 * t709) -
                             t523 * t711) +
                            t524 * t710) -
                           t707 * ((t13 + t288_tmp * 0.01624785000012707) +
                                   t287_tmp * 0.00040042500000154752)) +
                          ib_C_tmp * (((((t23 + t6 * t264) -
                                         t544 * 0.00028100000000108588) +
                                        t161 * 0.011402000000089171) +
                                       t591_tmp_tmp * 0.011402000000089171) +
                                      t590_tmp_tmp * 0.00028100000000108588)) +
                         t707 * ((t13 + t532 * 0.01624785000012707) +
                                 t534 * 0.00040042500000154752)) -
                        t699 * (((((((t46 * 0.44787749999741211 +
                                      t140 * 0.44787749999741211) +
                                     t268_tmp * 0.1933696499974758) -
                                    t6 * t277 * 0.1933696499974758) +
                                   t288_tmp * 0.00040042500000154752) -
                                  t287_tmp * 0.01624785000012707) -
                                 t330_tmp * 0.01624785000012707) -
                                t326_tmp * 0.00040042500000154752)) -
                       t538_tmp *
                           ((((((((t630 - t631) + t25 * 0.0455640643276638) +
                                 t124 * 5.7506792350281437E-5) +
                                t180 * 5.7506792350281437E-5) +
                               t22 * 0.0455640643276638) -
                              t128 * 5.750679235E-5) -
                             t4 * 3.6335150000000207E-8) -
                            t5 * 0.0455640643274)) -
                      C_tmp * (((((((t88 - t130_tmp * 0.31429999999818392) -
                                    t7 * t244 * 0.1356979999982286) -
                                   t8 * t515 * 0.00028100000000108588) +
                                  t15 * t515 * 0.011402000000089171) +
                                 t501_tmp * t245 * 0.1356979999982286) +
                                t330_tmp_tmp * t245 * 0.011402000000089171) +
                               t326_tmp_tmp * t245 * 0.00028100000000108588)) +
                     t708 * (((t544 * 0.01624785000012707 +
                               t161 * 0.00040042500000154752) +
                              t591_tmp_tmp * 0.00040042500000154752) -
                             t590_tmp_tmp * 0.01624785000012707)) +
                    t399 * ((((((((((((((d14 * 5.7506792350281437E-5 +
                                         d15 * 0.0039586564452065431) +
                                        d16 * 0.0023296955387195339) +
                                       d17 * 5.7506792350281437E-5) -
                                      t155 * 0.0023296955387195339) +
                                     t222 * 5.7506792350281437E-5) +
                                    t192_tmp * 0.0039586564452065431) +
                                   t365 * 0.0039586564452065431) +
                                  t186 * 5.7506792350281437E-5) -
                                 t242 * 0.0023296955387195339) +
                                t127 * 5.7506792350281437E-5) -
                               t178 * 0.0023296955387195339) +
                              t238 * 5.7506792350281437E-5) -
                             t148 * 0.0023296955387195339) +
                            t11 * 0.0023296955387195339)) +
                   t542 * (((((t19 + t22 * 3.6335149999899841E-8) -
                              t630_tmp * 0.0455640643276638) +
                             t631_tmp * 0.0455640643276638) -
                            t5 * 3.6335149999899841E-8) +
                           t4 * 0.0455640643276638)) -
                  t708 * (((t528 * 0.01624785000012707 +
                            t529 * 0.00040042500000154752) +
                           t591_tmp_tmp * 0.00040042500000154752) -
                          t590_tmp_tmp * 0.01624785000012707)) +
                 t542 * ((((((((((((((d14 * 0.0455640643276638 +
                                      d15 * 0.0001150135847005629) +
                                     d16 * 3.6335149999899841E-8) +
                                    d17 * 0.0455640643276638) -
                                   t155 * 3.6335149999899841E-8) +
                                  t222 * 0.0455640643276638) +
                                 t192_tmp * 0.0001150135847005629) +
                                t365 * 0.0001150135847005629) +
                               t186 * 0.0455640643276638) -
                              t242 * 3.6335149999899841E-8) +
                             t127 * 0.0455640643276638) -
                            t178 * 3.6335149999899841E-8) +
                           t238 * 0.0455640643276638) -
                          t148 * 3.6335149999899841E-8) +
                         t11 * 3.6335149999899841E-8)) +
                t538_tmp * (((((-t630 + t631) + t25 * 0.046125882182423077) +
                              t22 * 0.046125882182423077) -
                             t5 * 0.046125882182423077) +
                            t4 * 3.6335149999899841E-8)) -
               C_tmp * (((((t23 - t528 * 0.00028100000000108588) +
                           t529 * 0.011402000000089171) +
                          b_t501_tmp * 0.1356979999982286) +
                         t591_tmp_tmp * 0.011402000000089171) +
                        t590_tmp_tmp * 0.00028100000000108588)) +
              t542 * ((((((((t19 + t124 * 0.0023296955387195339) +
                            t180 * 0.0023296955387195339) +
                           t22 * 3.6335149999899841E-8) +
                          t630_tmp * 0.046125882182423077) -
                         t631_tmp * 0.046125882182423077) -
                        t128 * 0.002329695538700001) -
                       t4 * 0.046125882182625012) -
                      t5 * 3.6335150000000207E-8)) +
             t399 * (((((t25 * 0.0023296955387195339 +
                         t22 * 0.0023296955387195339) -
                        t630_tmp * 5.7506792350281437E-5) +
                       t631_tmp * 5.7506792350281437E-5) -
                      t5 * 0.0023296955387195339) +
                     t4 * 5.7506792350281437E-5)) -
            t238_tmp * t744) *
           0.5) -
      dq7 *
          ((((((((t703 * bb_C_tmp + t399 * t744) + t537_tmp * t745) +
                t539_tmp * t746) +
               t547 * t742) -
              t551 * t743) +
             t699 * ib_C_tmp) +
            t700 *
                (((t448 * 0.011402000000089171 + t588 * 0.011402000000089171) -
                  t478_tmp * 0.00028100000000108588) +
                 t625_tmp * 0.00028100000000108588)) +
           C_tmp * (((t580 * 0.00028100000000108588 +
                      t619_tmp * 0.00028100000000108588) -
                     t624_tmp * 0.011402000000089171) +
                    b_t624_tmp * 0.011402000000089171)) *
          0.5;
  C[13] =
      model_C72(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[20] =
      model_C73(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[27] =
      model_C74(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[34] =
      model_C75(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[41] =
      model_C76(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
  C[48] =
      model_C77(q1, q2, q3, q4, q5, q6, q7, dq1, dq2, dq3, dq4, dq5, dq6, dq7);
}

// End of code generation (CoriolisMatrix.cpp)
