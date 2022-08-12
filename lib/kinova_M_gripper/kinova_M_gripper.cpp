//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: kinova_M_gripper.cpp
//
// MATLAB Coder version            : 5.2
// C/C++ source code generated on  : 12-Aug-2022 19:11:12
//

// Include Files
#include "kinova_M_gripper.h"
#include <math.h>
#include <string.h>

// Type Definitions
struct cell_0 {
  double f1;
  double f2;
  double f3;
  double f4;
  double f5[4];
  double f6;
  double f7;
  double f8;
  double f9[2];
  double f10[5];
  double f11[2];
  double f12[3];
  double f13[2];
  double f14;
  double f15[2];
  double f16[2];
  double f17[2];
  double f18;
  double f19;
  double f20;
  double f21;
  double f22;
  double f23;
  double f24;
  double f25;
  double f26;
  double f27;
  double f28;
  double f29;
  double f30;
  double f31;
  double f32;
  double f33;
  double f34;
  double f35;
  double f36;
  double f37;
  double f38;
  double f39;
  double f40;
  double f41;
  double f42;
  double f43;
  double f44;
  double f45;
  double f46;
  double f47;
  double f48;
  double f49;
  double f50;
  double f51;
  double f52;
  double f53;
  double f54;
  double f55;
  double f56;
  double f57;
  double f58;
  double f59;
  double f60;
  double f61;
  double f62;
  double f63;
  double f64;
  double f65;
  double f66;
  double f67;
  double f68;
  double f69;
  double f70;
  double f71;
  double f72;
  double f73;
  double f74;
  double f75;
  double f76;
  double f77;
  double f78;
  double f79;
  double f80;
  double f81;
  double f82;
  double f83;
  double f84;
  double f85;
  double f86;
  double f87;
  double f88;
  double f89;
  double f90;
  double f91;
  double f92;
  double f93;
  double f94;
  double f95;
  double f96;
  double f97;
  double f98;
  double f99;
  double f100;
  double f101;
  double f102;
  double f103;
  double f104;
  double f105;
  double f106;
  double f107;
  double f108;
  double f109;
  double f110;
  double f111;
  double f112;
  double f113;
  double f114;
  double f115;
  double f116;
  double f117;
  double f118;
  double f119;
  double f120;
  double f121;
  double f122;
  double f123;
  double f124;
  double f125;
  double f126;
  double f127;
  double f128;
  double f129;
  double f130;
  double f131;
  double f132;
  double f133;
  double f134;
  double f135;
  double f136;
  double f137;
  double f138;
  double f139;
  double f140;
  double f141;
  double f142;
  double f143;
  double f144;
  double f145;
  double f146;
  double f147;
  double f148;
  double f149;
  double f150;
  double f151;
  double f152;
  double f153;
  double f154;
  double f155;
  double f156;
  double f157;
  double f158;
  double f159;
  double f160;
  double f161;
  double f162;
  double f163;
  double f164;
  double f165;
  double f166;
  double f167;
  double f168;
  double f169;
  double f170;
  double f171;
  double f172;
  double f173;
  double f174;
  double f175;
  double f176;
  double f177;
  double f178;
  double f179;
  double f180;
  double f181;
  double f182;
  double f183;
  double f184;
  double f185;
  double f186;
  double f187;
  double f188;
  double f189;
  double f190;
  double f191;
  double f192;
  double f193;
  double f194;
  double f195;
  double f196;
  double f197;
  double f198;
  double f199;
  double f200;
  double f201;
  double f202;
  double f203;
  double f204;
  double f205;
};

// Function Declarations
static void ft_1(const double ct[265], double M[49]);

static void ft_2(const double ct[333], double M[49]);

static void ft_3(const cell_0 *ct, double M[49]);

// Function Definitions
//
// Arguments    : const double ct[265]
//                double M[49]
// Return Type  : void
//
static void ft_1(const double ct[265], double M[49])
{
  double dv[333];
  double b_t583_tmp;
  double b_t853_tmp;
  double c_t583_tmp;
  double t1016;
  double t1017;
  double t1018;
  double t1018_tmp;
  double t1019;
  double t1056;
  double t1085;
  double t381;
  double t382;
  double t383;
  double t386;
  double t417;
  double t418;
  double t418_tmp;
  double t495;
  double t500;
  double t501;
  double t508;
  double t510;
  double t511;
  double t520;
  double t522;
  double t523;
  double t526;
  double t533;
  double t533_tmp;
  double t546;
  double t576;
  double t578;
  double t583_tmp;
  double t594;
  double t599;
  double t606;
  double t606_tmp;
  double t608;
  double t621;
  double t626;
  double t626_tmp;
  double t628;
  double t632;
  double t634;
  double t637;
  double t639;
  double t640;
  double t642;
  double t655;
  double t656;
  double t657;
  double t668;
  double t678;
  double t681;
  double t682;
  double t689;
  double t692;
  double t697;
  double t697_tmp;
  double t698;
  double t702;
  double t702_tmp;
  double t706;
  double t709;
  double t712;
  double t719;
  double t745;
  double t752;
  double t753;
  double t756;
  double t758;
  double t760;
  double t766;
  double t767;
  double t768;
  double t769;
  double t773;
  double t774;
  double t775;
  double t776;
  double t778;
  double t780;
  double t783;
  double t787;
  double t788;
  double t790;
  double t791;
  double t792;
  double t793;
  double t794;
  double t795;
  double t798;
  double t800;
  double t813;
  double t838;
  double t843;
  double t853;
  double t853_tmp;
  double t859;
  double t859_tmp;
  double t870;
  double t888;
  double t896;
  double t900;
  double t901;
  double t902;
  double t911;
  double t986;
  double t986_tmp;
  double t987;
  t417 = 0.1059 * ct[178];
  t418_tmp = ct[77] - ct[126];
  t418 = -0.009432 * t418_tmp;
  t495 = ct[113] + ct[178];
  t501 = ct[115] + ct[185];
  t522 = ct[222] + ct[226];
  t523 = ct[187] + ct[227];
  t546 = ct[67] * ct[221];
  t578 = ct[112] * ct[219];
  t583_tmp = ct[48] - ct[87];
  b_t583_tmp = ct[46] - ct[76];
  c_t583_tmp = (-ct[70] + ct[118]) + ct[3] * t583_tmp;
  t594 = ct[151] + ct[214];
  t788 = (ct[54] + ct[79]) + ct[83];
  t599 = ((t788 + ct[100]) + ct[123]) + ct[127];
  t606_tmp = (ct[64] + ct[73]) + ct[88];
  t606 = ((t606_tmp + ct[96]) + ct[121]) + ct[145];
  t1085 = ct[41] + ct[210];
  t608 = t1085 + ct[243];
  t657 = ct[216] + ct[223];
  t678 = (ct[156] + ct[189]) + ct[198];
  t682 = ct[122] * ct[252];
  t697_tmp = ct[37] * ct[44];
  t697 = t697_tmp * ct[252];
  t698 = (ct[160] + ct[201]) + ct[204];
  t1019 = ((ct[110] + ct[128]) + ct[175]) + ct[196];
  t745 = t583_tmp * t1019;
  t752 = (((t788 + ct[110]) + ct[128]) + ct[175]) + ct[196];
  t753 = ((((ct[84] + ct[97]) + ct[124]) + ct[143]) + ct[182]) + ct[191];
  t901 = (ct[241] + ct[246]) + ct[247];
  t381 = 1.0E-6 * ct[162];
  t382 = ct[162] * ct[254];
  t383 = ct[55] * ct[162];
  t500 = ct[114] + -ct[177];
  t510 = 0.060416999999999992 * t495;
  t511 = 0.1815 * t495;
  t576 = 0.093474385964912282 * t495;
  t621 = ct[194] + t608;
  t626_tmp = ct[37] * ct[262];
  t626 = t626_tmp * t608;
  t628 = (ct[149] + ct[155]) + ct[159];
  t632 = ct[67] * t599;
  t637 = (ct[153] + ct[158]) + ct[163];
  t640 = ct[74] * t606;
  t788 = (ct[40] + ct[258]) + ct[65];
  t642 = t788 + t599;
  t773 = (ct[38] + ct[50]) + ct[58];
  t656 = t773 + t606;
  t681 = (ct[161] + ct[188]) + ct[199];
  t706 = (ct[164] + ct[200]) + ct[205];
  t766 = ct[67] * t752;
  t774 = t788 + t752;
  t776 = ((ct[42] + ct[259]) + ct[66]) + t753;
  t813 = (t697_tmp * ct[221] + ct[68] * ct[219]) + ct[75] * ct[220];
  t838 = (ct[74] * ct[221] + ct[101] * ct[220]) + ct[219] * b_t583_tmp;
  t843 = ct[244] + -ct[75] * t1019;
  t853_tmp = (-ct[71] + ct[119]) + ct[10] * t583_tmp;
  b_t853_tmp = (-ct[72] + ct[120]) + ct[14] * t583_tmp;
  t853 = (-ct[67] * b_t853_tmp + ct[112] * c_t583_tmp) + t583_tmp * t853_tmp;
  t986_tmp = ct[85] + ct[51] * b_t583_tmp;
  t1019 = (-ct[109] + ct[173]) + ct[15] * t986_tmp;
  t655 = (-ct[105] + ct[171]) + ct[4] * t986_tmp;
  t668 = (-ct[108] + ct[172]) + ct[11] * t986_tmp;
  t987 = ct[47] - ct[78];
  t986 = (-ct[75] * t1019 + t987 * t655) + ct[102] * t668;
  t1017 = (-ct[101] * t1019 + ct[165] * t655) + t986_tmp * t668;
  t1018_tmp = ct[86] + ct[55] * t987;
  t1018 = (ct[102] * ct[250] + ct[166] * ct[248]) + ct[249] * t1018_tmp;
  t386 = 0.1059 * t383;
  t508 = ct[139] + t383;
  t520 = 1.0E-6 * t500;
  t533_tmp = t382 + ct[55] * t583_tmp;
  t533 = -1.0E-6 * t533_tmp;
  t788 = ct[39] + ct[202];
  t383 = t788 + t642;
  t702_tmp = ct[57] + ct[228];
  t702 = t702_tmp + t656;
  t719 = ct[80] * ct[226] + -(ct[227] * ct[262]);
  t756 = (((t606_tmp + ct[138]) + ct[146]) + t381) + t418;
  t758 = ct[230] + t697_tmp * t599;
  t760 = ct[229] + t697_tmp * t606;
  t778 = ct[122] * t774;
  t787 = t1085 + t776;
  t788 += t774;
  t790 = (ct[206] + 8.5500000000000011E-6 * ct[225]) +
         0.0016729499999999999 * t501;
  t791 = (ct[207] + 0.0010516500000000001 * ct[225]) +
         8.5500000000000011E-6 * t501;
  t792 = (ct[208] + 0.0003363 * ct[225]) + 8.5500000000000011E-6 * t501;
  t870 = ((ct[203] + ct[215]) + -0.0040007017543859649 * ct[225]) +
         -9.8596491228070173E-5 * t501;
  t900 = (ct[242] + ct[162] * ((-ct[81] + ct[104]) + ct[0] * t987)) +
         t418_tmp * ((-ct[82] + ct[106]) + ct[4] * t987);
  t1016 = (t583_tmp * t1019 + ct[162] * t655) + t418_tmp * t668;
  t1056 = ct[102] * t1018;
  t526 = 0.060416999999999992 * t508;
  t634 = ct[186] + ct[257] * t500;
  t639 = ct[197] + ct[56] * t500;
  t689 = ct[262] * t383;
  t692 = ct[187] + t383;
  t709 = ct[80] * t702;
  t712 = ct[222] + t702;
  t767 = (ct[192] + ct[5] * t495) + ct[1] * t500;
  t768 = (ct[193] + ct[12] * t495) + ct[5] * t500;
  t769 = (ct[195] + -0.000278 * t495) + 0.0 * t500;
  t775 = ct[74] * t756;
  t780 = t773 + t756;
  t783 = ct[233] + ct[122] * t642;
  t793 = ct[262] * t788;
  t794 = ct[187] + t788;
  t795 = ct[194] + t787;
  t798 = t626_tmp * t787;
  t800 = ct[235] + ct[122] * t656;
  t859_tmp = ct[37] * ct[80];
  t859 = t859_tmp * t642 + t626_tmp * t656;
  t1019 = (((-ct[117] - t417) + t510) + t520) + ct[28] * t986_tmp;
  t888 = -ct[102] * t1019;
  t896 = ct[74] * ct[243] + -(t697_tmp * t752);
  t902 = t418_tmp * t1019;
  t911 = (ct[97] + ct[143]) + t870;
  t1019 = (ct[7] * ct[162] + ct[15] * t418_tmp) + ct[19] * t583_tmp;
  t383 = (ct[0] * ct[162] + ct[4] * t418_tmp) + ct[7] * t583_tmp;
  t606_tmp = (ct[4] * ct[162] + ct[11] * t418_tmp) + ct[15] * t583_tmp;
  t987 = (-ct[75] * t1019 + t987 * t383) + ct[102] * t606_tmp;
  t599 = (-ct[101] * t1019 + ct[165] * t383) + t986_tmp * t606_tmp;
  t1019 = (t583_tmp * t1019 + ct[162] * t383) + t418_tmp * t606_tmp;
  t1085 = (ct[250] * t986_tmp + t495 * ct[249]) + t500 * ct[248];
  t655 = -9.8596491228070173E-5 * t634;
  t668 = -0.0040007017543859649 * t639;
  t702 = (0.0 * t418_tmp + ct[5] * t508) + -ct[1] * t533_tmp;
  t788 = (-0.000278 * t418_tmp + ct[12] * t508) + -ct[5] * t533_tmp;
  t773 = (0.001641 * t418_tmp + -0.000278 * t508) + -0.0 * t533_tmp;
  t606 = t702_tmp + t780;
  dv[0] = 0.001409;
  dv[1] = -2.3E-5;
  dv[2] = 1.377;
  dv[3] = 1.1636;
  dv[4] = 1.1636;
  dv[5] = 0.93;
  dv[6] = 0.678;
  dv[7] = 0.678;
  dv[8] = ct[37];
  dv[9] = ct[67] * t987;
  t642 = 0.678 * ct[80] * t621;
  dv[10] = t642 * t896;
  dv[11] = ct[74] * t986;
  dv[12] = ct[101] * t986;
  dv[13] = ct[38];
  dv[14] = -t987 * t583_tmp;
  t656 = t626 - t778;
  dv[15] = t642 * t656;
  dv[16] = t1018;
  dv[17] = ct[39];
  dv[18] = ct[262] * t1019;
  dv[19] = ct[262] * t599;
  dv[20] = ct[80] * t1016;
  dv[21] = ct[80] * t1017;
  dv[22] = ct[122] * t1018;
  dv[23] = t859_tmp * t599;
  dv[24] = t626_tmp * t1016;
  dv[25] = t626_tmp * t1017;
  dv[26] = ct[40];
  dv[27] = t697_tmp * t1018;
  dv[28] = t859_tmp * t1019;
  t752 = (ct[68] * c_t583_tmp + ct[75] * t853_tmp) + t697_tmp * b_t853_tmp;
  dv[29] = ct[80] * t813 + -ct[262] * t752;
  dv[30] = ct[41];
  dv[31] = ct[67] * t1019;
  dv[32] = ct[67] * t599;
  dv[33] = ct[74] * t1016;
  dv[34] = ct[74] * t1017;
  dv[35] = ct[42];
  dv[36] = ct[75] * t1018;
  dv[37] = 0.678 * t794 * t843;
  dv[38] = ct[101] * t1017;
  dv[39] = t1056;
  dv[40] = ct[101] * t1016;
  dv[41] = -t1056;
  dv[42] = -t1019 * t583_tmp;
  dv[43] = -t599 * t583_tmp;
  dv[44] = 0.678 * t794 * t896;
  t599 = t632 - t640;
  dv[45] = -0.93 * t859 * t599;
  t383 = (b_t583_tmp * c_t583_tmp + ct[101] * t853_tmp) + ct[74] * b_t853_tmp;
  dv[46] = ct[80] * t838 + -ct[262] * t383;
  dv[47] = -ct[80] * ((-t546 + t578) + ct[220] * t583_tmp) + ct[262] * t853;
  dv[48] = -0.678 * t794 * t656;
  t606_tmp = t689 - t709;
  dv[49] = 0.93 * t599 * t606_tmp;
  dv[50] = t1085;
  dv[51] = (ct[250] * t418_tmp + t508 * ct[249]) + -ct[248] * t533_tmp;
  dv[52] = ct[122] * t1085;
  dv[53] = t697_tmp * t1085;
  dv[54] = ct[44];
  dv[55] = ct[45];
  dv[56] = ct[75] * t1085;
  dv[57] = -0.93 * t859 * t606_tmp;
  dv[58] = ct[102] * t1085;
  dv[59] = ct[46];
  dv[60] = 0.678 * t843 * t896;
  dv[61] = ct[47];
  dv[62] = 0.678 * t843 * t656;
  dv[63] = (t682 + t626_tmp * t813) + t859_tmp * t752;
  dv[64] = 0.678 * t896 * t656;
  dv[65] = (t697 + ct[74] * t813) + -ct[67] * t752;
  dv[66] = (ct[122] * ct[256] + t626_tmp * t838) + t859_tmp * t383;
  dv[67] = -0.678 * ct[80] * t795 * (t888 + ct[255] * t986_tmp);
  dv[68] = (t697_tmp * ct[256] + ct[74] * t838) + -ct[67] * t383;
  dv[69] = ct[48];
  t656 = ((ct[138] + ct[146]) + t381) + t418;
  dv[70] = 0.678 * (t766 - t775) * (t745 + ct[101] * t656);
  dv[71] = (-t792 * t1018_tmp + ct[225] * t791) + t501 * t790;
  dv[72] = ct[49];
  t752 = ct[257] * t533_tmp + ct[56] * t418_tmp;
  t599 = ct[176] + ct[56] * t533_tmp;
  dv[73] = (t508 * t792 + -t790 * t752) + t791 * t599;
  memcpy(&dv[74], &ct[50], 17U * sizeof(double));
  dv[91] = ct[67];
  memcpy(&dv[92], &ct[73], 8U * sizeof(double));
  dv[100] = ct[83];
  memcpy(&dv[101], &ct[85], 10U * sizeof(double));
  dv[111] = ct[95];
  dv[112] = ct[101];
  dv[113] = ct[102];
  dv[114] = 1.425;
  dv[115] = ct[107];
  dv[116] = ct[110];
  dv[117] = ct[111];
  dv[118] = ct[117];
  dv[119] = ct[122];
  dv[120] = ct[126];
  dv[121] = ct[138];
  dv[122] = ct[142];
  dv[123] = ct[146];
  dv[124] = ct[147];
  dv[125] = ct[148];
  dv[126] = ct[152];
  dv[127] = ct[154];
  dv[128] = t381;
  dv[129] = t382;
  dv[130] = t386;
  dv[131] = ct[174];
  dv[132] = ct[176];
  dv[133] = t417;
  dv[134] = t418;
  dv[135] = ct[187];
  dv[136] = ct[190];
  dv[137] = ct[194];
  dv[138] = ct[202];
  dv[139] = ct[209];
  dv[140] = ct[210];
  dv[141] = ct[211];
  dv[142] = ct[212];
  dv[143] = ct[217];
  dv[144] = ct[218];
  dv[145] = ct[220];
  dv[146] = ct[222];
  dv[147] = ct[224];
  dv[148] = t495;
  dv[149] = ct[225];
  dv[150] = ct[228];
  dv[151] = t500;
  dv[152] = t501;
  dv[153] = t508;
  dv[154] = t511;
  dv[155] = t522;
  dv[156] = t523;
  dv[157] = 0.1815 * t508;
  dv[158] = -t511;
  dv[159] = ct[234];
  dv[160] = -t526;
  dv[161] = 1.0E-6 * t533_tmp;
  dv[162] = t546;
  dv[163] = 8.5500000000000011E-6 * t495;
  dv[164] = 0.0003363 * t495;
  dv[165] = 0.0017356499999999998 * t495;
  dv[166] = ct[236];
  dv[167] = ct[237];
  dv[168] = ct[238];
  dv[169] = t576;
  dv[170] = t578;
  dv[171] = -t576;
  dv[172] = -(0.093474385964912282 * t508);
  dv[173] = t594;
  dv[174] = t621;
  dv[175] = ct[67] * ct[243];
  t383 = 1.1636 * ct[80] * ct[150];
  dv[176] = -(t383 * t523);
  t606_tmp = 1.1636 * ct[262] * ct[150];
  dv[177] = -(t606_tmp * t522);
  dv[178] = t859_tmp * t608;
  dv[179] = t626;
  dv[180] = t621 * t621;
  dv[181] = ct[262] * t628;
  dv[182] = t632;
  dv[183] = t634;
  dv[184] = t859_tmp * t628;
  dv[185] = t639;
  dv[186] = t640;
  dv[187] = ct[80] * t637;
  dv[188] = -(t626_tmp * t637);
  dv[189] = 0.0016729499999999999 * t634;
  dv[190] = 8.5500000000000011E-6 * t634;
  dv[191] = 8.5500000000000011E-6 * t634;
  dv[192] = t655;
  dv[193] = t657;
  dv[194] = -9.8596491228070173E-5 * t752;
  dv[195] = 0.0040007017543859649 * t599;
  dv[196] = -t655;
  dv[197] = t668;
  dv[198] = ct[251];
  dv[199] = -(8.5500000000000011E-6 * t639);
  dv[200] = -(0.0010516500000000001 * t639);
  dv[201] = -(0.0003363 * t639);
  dv[202] = -t668;
  dv[203] = ct[252];
  dv[204] = ct[253];
  dv[205] = t682;
  dv[206] = t689;
  dv[207] = t692;
  dv[208] = t697;
  dv[209] = -t689;
  dv[210] = -(t606_tmp * t594);
  dv[211] = t709;
  dv[212] = t712;
  t606_tmp = ct[152] - ct[217];
  dv[213] = t383 * t606_tmp;
  dv[214] = t719;
  dv[215] = ct[255];
  dv[216] = ct[256];
  dv[217] = t745;
  dv[218] = 1.1636 * t522 * t594;
  dv[219] = -1.1636 * t523 * t606_tmp;
  dv[220] = t758;
  dv[221] = t760;
  dv[222] = -(t697_tmp * t756);
  dv[223] = t766;
  dv[224] = t702;
  dv[225] = t788;
  dv[226] = t773;
  dv[227] = t775;
  dv[228] = ct[101] * t753;
  dv[229] = t778;
  dv[230] = t859_tmp * t774;
  dv[231] = -ct[255] * t418_tmp;
  dv[232] = t783;
  dv[233] = ct[122] * t780;
  dv[234] = t753 * t583_tmp;
  dv[235] = t626_tmp * t780;
  dv[236] = t793;
  dv[237] = t794;
  dv[238] = t795;
  dv[239] = ct[67] * t776;
  dv[240] = t859_tmp * t787;
  dv[241] = t798;
  dv[242] = -t793;
  dv[243] = ct[257];
  dv[244] = t800;
  dv[245] = t795 * t795;
  dv[246] = ct[74] * t776;
  dv[247] = -t798;
  dv[248] = ct[102] * t769;
  dv[249] = ct[80] * t606;
  dv[250] = ct[102] * t773;
  dv[251] = ct[222] + t606;
  dv[252] = ct[258];
  t383 = 0.93 * ct[80] * ct[232];
  dv[253] = -(t383 * t692);
  t606_tmp = 0.93 * ct[262] * ct[232];
  dv[254] = -(t606_tmp * t712);
  dv[255] = ct[166] * t767;
  dv[256] = ct[259];
  dv[257] = ct[166] * t702;
  dv[258] = t769 * t418_tmp;
  dv[259] = t773 * t418_tmp;
  dv[260] = ct[260];
  dv[261] = t768 * t1018_tmp;
  dv[262] = t769 * t986_tmp;
  dv[263] = t788 * t1018_tmp;
  dv[264] = ct[261];
  dv[265] = ct[122] * ct[261];
  dv[266] = t843;
  dv[267] = t697_tmp * ct[261];
  dv[268] = t495 * t768;
  dv[269] = t508 * t768;
  dv[270] = t500 * t767;
  dv[271] = -(t383 * t758);
  dv[272] = -t767 * t533_tmp;
  dv[273] = t859;
  dv[274] = (((ct[117] + t417) + ct[184]) + -t510) + -t520;
  dv[275] = -(t606_tmp * t760);
  dv[276] = t859_tmp * t853;
  dv[277] = ct[75] * ct[261];
  dv[278] = ct[67] * t853;
  dv[279] = t495 * t792;
  dv[280] = ct[262] * t678 + ct[80] * t698;
  dv[281] = 1.1636 * t657 * t719;
  dv[282] = ct[262] * t681 + ct[80] * t706;
  dv[283] = t383 * t783;
  dv[284] = t888;
  dv[285] = t606_tmp * t800;
  t383 = ct[28] * t418_tmp;
  t606_tmp = 0.1059 * ct[254] * t583_tmp;
  t1019 = (((-t386 + t526) + t533) + t383) + t606_tmp;
  dv[286] = ct[102] * t1019;
  dv[287] = t896;
  dv[288] = ct[262];
  dv[289] = t900;
  dv[290] = t901;
  dv[291] = t902;
  t788 = ((((ct[144] - t386) + t526) + t533) + t383) + t606_tmp;
  dv[292] = -ct[75] * t788;
  dv[293] = ct[122] * t900;
  dv[294] = ct[122] * t901;
  dv[295] = -t902;
  dv[296] = t697_tmp * t900;
  dv[297] = t697_tmp * t901;
  dv[298] = t986_tmp * t1019;
  dv[299] = t911;
  dv[300] = -ct[101] * t788;
  dv[301] = ct[101] * t788;
  dv[302] = ct[75] * t901;
  dv[303] = ct[75] * t900;
  dv[304] = 0.93 * t692 * t758;
  dv[305] = t642 * t794;
  dv[306] = ct[84] + t911;
  dv[307] = t634 * t790;
  dv[308] = t639 * t791;
  dv[309] = 0.93 * t712 * t760;
  dv[310] = t495 * t870;
  t383 = (((((((ct[52] - ct[73]) - ct[88]) + ct[144]) - t386) + t526) + t533) +
          t383) +
         t606_tmp;
  dv[311] = t697_tmp * t383;
  dv[312] = t508 * t870;
  dv[313] = (8.5500000000000011E-6 * t508 + -0.0016729499999999999 * t752) +
            8.5500000000000011E-6 * t599;
  t752 *= -8.5500000000000011E-6;
  dv[314] = (0.0003363 * t508 + t752) + 0.0010516500000000001 * t599;
  dv[315] = (0.0017356499999999998 * t508 + t752) + 0.0003363 * t599;
  dv[316] = 0.93 * t692 * t783;
  dv[317] = ct[74] * t383;
  dv[318] = 0.93 * t712 * t800;
  dv[319] = -t911 * t418_tmp;
  dv[320] = -t911 * t986_tmp;
  dv[321] = -0.015764;
  dv[322] = (ct[239] + t859_tmp * t678) + -(t626_tmp * t698);
  dv[323] = (ct[240] + t859_tmp * t681) + -(t626_tmp * t706);
  dv[324] = t642 * t843;
  dv[325] = -0.678 * ct[262] * t621 * (ct[75] * t656 + ct[238] * t583_tmp);
  dv[326] = 0.93 * t758 * t783;
  dv[327] = 0.93 * t760 * t800;
  dv[328] = ct[262] * t987;
  dv[329] = ct[264];
  dv[330] = ct[80] * t986;
  dv[331] = t859_tmp * t987;
  dv[332] = t626_tmp * t986;
  ft_2(dv, M);
}

//
// Arguments    : const double ct[333]
//                double M[49]
// Return Type  : void
//
static void ft_2(const double ct[333], double M[49])
{
  cell_0 expl_temp;
  double a;
  double b_t1316_tmp;
  double t1008;
  double t1062;
  double t1062_tmp;
  double t1062_tmp_tmp;
  double t1063;
  double t1066;
  double t1067;
  double t1068;
  double t1069;
  double t1073;
  double t1075;
  double t1077;
  double t1080;
  double t1093;
  double t1094;
  double t1097;
  double t1101;
  double t1103;
  double t1106;
  double t1108;
  double t1116;
  double t1118;
  double t1123;
  double t1127;
  double t1131;
  double t1133;
  double t1139;
  double t1152;
  double t1153;
  double t1156;
  double t1164;
  double t1167;
  double t1167_tmp;
  double t1169;
  double t1169_tmp;
  double t1174;
  double t1180;
  double t1183;
  double t1183_tmp;
  double t1184;
  double t1186;
  double t1190;
  double t1190_tmp;
  double t1192;
  double t1195_tmp;
  double t1211_tmp;
  double t1213;
  double t1217;
  double t1219;
  double t1220;
  double t1220_tmp;
  double t1222;
  double t1224;
  double t1226;
  double t1229;
  double t1231;
  double t1231_tmp;
  double t1232;
  double t1234;
  double t1238;
  double t1239;
  double t1241;
  double t1243;
  double t1244;
  double t1245;
  double t1246;
  double t1248;
  double t1249;
  double t1250;
  double t1252;
  double t1257;
  double t1260;
  double t1263;
  double t1265;
  double t1268;
  double t1270;
  double t1277;
  double t1278;
  double t1279;
  double t1280;
  double t1280_tmp;
  double t1282;
  double t1284;
  double t1286;
  double t1288;
  double t1289;
  double t1290;
  double t1292;
  double t1297;
  double t1298;
  double t1299;
  double t1300;
  double t1301;
  double t1301_tmp;
  double t1303;
  double t1306;
  double t1310;
  double t1311;
  double t1312;
  double t1313;
  double t1314;
  double t1316;
  double t1316_tmp;
  double t1318;
  double t1318_tmp;
  double t1321;
  double t1322;
  double t1323;
  double t1326;
  double t1326_tmp;
  double t1327;
  double t1328;
  double t1329;
  double t1330;
  double t1334_tmp;
  double t1335;
  double t1335_tmp;
  double t1338;
  double t1338_tmp;
  double t1340;
  double t1341;
  double t1342;
  double t1346;
  double t1350;
  double t1350_tmp;
  double t1353;
  double t1362;
  double t1363;
  double t1371;
  double t1374;
  double t1381;
  double t1385;
  double t1386;
  double t1388;
  double t1390;
  double t1391;
  double t1393;
  double t1394;
  double t1396;
  double t1397;
  double t1398;
  double t1405;
  double t1406;
  double t1408;
  double t1411;
  double t1415;
  double t1417;
  double t1418;
  double t1420;
  double t1422;
  double t1423;
  double t1424;
  double t1426;
  double t1426_tmp;
  double t1427;
  double t1430;
  double t1433;
  double t1435;
  double t1437;
  double t1440;
  double t1441;
  double t1442;
  double t1443;
  double t1444;
  double t1444_tmp;
  double t1446;
  double t1453;
  double t1455;
  double t1455_tmp;
  double t1456;
  double t1458;
  double t1459;
  double t1467;
  double t1468;
  double t1469;
  double t1470;
  double t1471;
  double t1474;
  double t1475;
  double t1476;
  double t1477;
  double t1478;
  double t1483;
  double t1484;
  double t889;
  double t899;
  double t917;
  double t919;
  double t933;
  double t933_tmp;
  double t939;
  double t940;
  double t941;
  double t947;
  double t950;
  double t955;
  double t955_tmp;
  double t956;
  double t962;
  double t963;
  double t966;
  double t969_tmp;
  double t970;
  double t989;
  t889 = ct[116] + ct[274];
  t899 = ct[175] + ct[222];
  t917 = ct[178] + ct[233];
  t950 = ((ct[35] + ct[256]) + ct[90]) + ct[306];
  t989 = ct[230] + ct[235];
  t1008 = ((ct[157] + ct[172]) + ct[194]) + ct[195];
  t1066 = ct[231] + ct[286];
  t1073 = ct[234] + ct[292];
  t1103 = ct[239] + ct[311];
  t1108 = ct[51] * ct[113];
  t1152 = (ct[248] + ct[255]) + ct[261];
  t1184 = (ct[262] + ct[268]) + ct[270];
  t1186 = (ct[258] + ct[269]) + ct[272];
  t1219 = ct[71] * ct[119];
  t1220_tmp = ct[8] * ct[54];
  t1220 = t1220_tmp * ct[71];
  t1222 = ct[328] + ct[330];
  t1224 = ct[71] * ct[94];
  t1226 = ct[71] * ct[113];
  t1231_tmp = ct[102] + ct[79] * (ct[61] - ct[97]);
  t1231 = ct[71] * t1231_tmp;
  t1244 = ct[18] + ct[20];
  t1246 = ct[19] + ct[21];
  t1265 = ct[73] * ct[94];
  t1270 = ct[73] * ct[113];
  t1292 = (ct[9] + ct[267]) + ct[11];
  t1297 = (ct[12] + ct[277]) + ct[14];
  t1322 = (ct[32] + ct[297]) + ct[34];
  t1323 = (ct[31] + ct[296]) + ct[33];
  t1328 = (ct[40] + ct[303]) + ct[42];
  t1330 = (ct[38] + ct[302]) + ct[43];
  t1106 = (ct[78] + ct[98]) + ct[100];
  t919 = t1106 + t889;
  t933_tmp = 0.678 * ct[288] * ct[174];
  t933 = t933_tmp * ct[251];
  t939 = (ct[163] + ct[189]) + ct[199];
  t940 = (ct[164] + ct[190]) + ct[200];
  t941 = (ct[165] + ct[191]) + ct[201];
  t962 = (ct[30] + ct[140]) + t950;
  t1133 = ((ct[121] + ct[123]) + ct[128]) + ct[134];
  t1062_tmp_tmp = ct[69] - ct[103];
  t1062_tmp = ct[94] * t1133 + ct[168] * t1062_tmp_tmp;
  t1062 = 0.678 * ct[251] * t1062_tmp;
  t1063 = ((((ct[118] + ct[133]) + ct[154]) + ct[171]) + ct[196]) + ct[197];
  t1067 = ct[148] * t1008;
  t956 = ct[122] + ct[130];
  t1068 = t956 + t1008;
  t1077 = 0.678 * ct[251] * t899;
  t1093 = 0.678 * ct[251] * t917;
  t1123 = -0.678 * t899 * t1062_tmp;
  t1139 = 0.678 * t917 * t1062_tmp;
  t1156 = (ct[250] + ct[257]) + ct[263];
  t1167_tmp = 0.678 * ct[288] * ct[238];
  t1167 = t1167_tmp * t1066;
  t1174 = t1167_tmp * t1073;
  t1062_tmp = ct[217] + ct[112] * t1133;
  t1180 = 0.678 * t989 * t1062_tmp;
  t1183_tmp = ct[236] - ct[249];
  t1183 = 0.678 * t1183_tmp * t1062_tmp;
  t1190_tmp = ct[101] + ct[75] * (ct[59] - ct[95]);
  t1190 = (ct[226] * t1190_tmp + ct[148] * ct[225]) + ct[151] * ct[224];
  t1062_tmp = ct[129] + ct[79] * t1062_tmp_tmp;
  t1192 = (ct[259] + ct[153] * ct[225]) + -ct[224] * t1062_tmp;
  t1211_tmp = ct[223] - ct[227];
  t1252 = (ct[279] + ct[307]) + -ct[308];
  t1278 = 0.678 * t1066 * t1103;
  t1284 = 0.678 * t1073 * t1103;
  t1288 = (ct[265] + ct[332]) + -ct[331];
  t1306 = (-ct[315] * t1231_tmp + ct[149] * ct[314]) + ct[152] * ct[313];
  t1313 = (ct[24] + ct[293]) + -ct[28];
  t1314 = (ct[25] + ct[294]) + -ct[23];
  t1350_tmp = ct[96] - ct[120];
  t1133 = ct[243] * t1062_tmp + ct[80] * t1350_tmp;
  t1062_tmp = ct[132] + ct[80] * t1062_tmp;
  t1350 = (ct[153] * ct[315] + -ct[313] * t1133) + ct[314] * t1062_tmp;
  t1131 = (ct[26] + ct[252]) + ct[89];
  t947 = t1131 + t919;
  t966 = ct[137] + t962;
  t969_tmp = ct[8] * ct[288];
  t1075 = ct[116] + t1063;
  t1080 = ct[121] + t1068;
  t1217 = ct[312] + -t1008 * t1231_tmp;
  t1263 = ct[94] * t1252;
  t1268 = ct[113] * t1252;
  t1311 = ct[91] * t1306;
  t1329 = ct[153] * t1306;
  t1346 = (ct[148] * ct[315] + ct[183] * ct[313]) + -(ct[185] * ct[314]);
  t955_tmp = ct[17] + ct[138];
  t955 = t955_tmp + t947;
  t1008 = (ct[88] + ct[92]) + ct[104];
  t1260 = (ct[13] + ct[74]) + ct[82];
  t956 = t1260 + (t1008 + (ct[121] + (((t956 + ct[131]) + ct[160]) + ct[161])));
  t970 = t966 * t966;
  t1069 = ct[228] + -(ct[94] * t889);
  t1094 = ct[94] * t1080;
  t1101 = ct[112] * t1080;
  t1106 += t1075;
  t1153 = ct[91] * t919 + ct[317];
  t1459 = ((ct[154] + ct[171]) + ct[196]) + ct[197];
  t1213 = ct[310] + -(t1231_tmp * t1459);
  t1290 = -t1063 * t1350_tmp + t1068 * t1190_tmp;
  t1301_tmp = ct[288] * 1.425 * t966;
  t1301 = t1301_tmp * t1217;
  t1303 = (-t941 * t1231_tmp + ct[149] * t940) + ct[152] * t939;
  t1316_tmp = ct[99] * 1.425 * t966;
  b_t1316_tmp = ct[113] * t1063 - ct[299] * t1190_tmp;
  t1316 = t1316_tmp * b_t1316_tmp;
  t1318_tmp = ct[113] * t1068 - ct[299] * t1350_tmp;
  t1318 = t1301_tmp * t1318_tmp;
  t1342 = (ct[153] * t941 + -t939 * t1133) + t940 * t1062_tmp;
  t1371 = ct[99] * t1152 + ct[288] * t1156;
  t1396 = ct[99] * t1184 + ct[288] * t1190;
  t1397 = ct[99] * t1186 + ct[288] * t1192;
  t1430 = (ct[27] + ct[93] * t1152) + ct[91] * t1156;
  t1433 = (ct[36] + ct[112] * t1152) + -t1156 * t1062_tmp_tmp;
  t1440 = (ct[53] + ct[93] * t1184) + ct[91] * t1190;
  t1441 = (t1220_tmp * ct[51] + ct[93] * t1186) + ct[91] * t1192;
  t1442 = (ct[56] + ct[112] * t1184) + -t1190 * t1062_tmp_tmp;
  t1443 = (ct[51] * ct[94] + ct[112] * t1186) + -t1192 * t1062_tmp_tmp;
  t963 = ct[135] + t955;
  t1062_tmp = ct[81] + ct[150];
  t1068 = t1062_tmp + t956;
  t1097 = ct[246] + -(t1220_tmp * t919);
  t1063 = t1131 + t1106;
  t1133 = t1260 + (t1008 + t1080);
  t1169_tmp = 0.678 * ct[99] * ct[238];
  t1169 = t1169_tmp * t1069;
  t1195_tmp = ct[241] - ct[119] * t947;
  t1280_tmp = ct[284] + ct[215] * t1190_tmp;
  t1280 = 0.678 * t1195_tmp * t1280_tmp;
  t1286 = 0.678 * t1069 * t1195_tmp;
  t1300 = t1316_tmp * t1213;
  t1310 = ct[93] * t1303;
  t1312 = ct[112] * t1303;
  t1326_tmp = t1094 + ct[306] * t1062_tmp_tmp;
  t1326 = -ct[288] * 1.425 * t966 * t1326_tmp;
  t1327 = ct[148] * t1303;
  t1335_tmp = ct[291] - ct[298];
  t1335 = -0.678 * t1153 * t1335_tmp;
  t1338_tmp = ct[300] + t889 * t1062_tmp_tmp;
  t1338 = -0.678 * t1153 * t1338_tmp;
  t1341 = (ct[148] * t941 + ct[183] * t939) + -(ct[185] * t940);
  t1363 = ct[112] * t1342;
  t1426_tmp = ct[8] * ct[99];
  t1426 = (ct[22] + t969_tmp * t1152) + -(t1426_tmp * t1156);
  t1435 = (ct[52] + t969_tmp * t1184) + -(t1426_tmp * t1190);
  t1437 = (ct[51] * ct[119] + t969_tmp * t1186) + -(t1426_tmp * t1192);
  t940 = ct[146] + t1068;
  t1116 = ct[240] + ct[119] * t956;
  t1118 = t1169_tmp * t963;
  t1131 = t955_tmp + t1063;
  t1008 = t1062_tmp + t1133;
  t1164 = t1426_tmp * t947 + t969_tmp * t956;
  t1229 = 0.678 * t963 * t1280_tmp;
  t1232 = 0.678 * t963 * t1069;
  t1239 = ct[112] * ct[306] + -(ct[94] * t1075);
  t1241 = 0.678 * t963 * t1097;
  t1243 = -0.678 * t963 * t1195_tmp;
  t1062_tmp = ((-ct[76] + ct[92]) + ct[104]) + t1080;
  t1249 = ct[91] * t950 + -(t1220_tmp * t1062_tmp);
  t1277 = -0.678 * t1097 * t1280_tmp;
  t1279 = 0.678 * t1069 * t1097;
  t1298 = ct[91] * t1106 + -(ct[93] * t1062_tmp);
  t1362 = ct[112] * t1341;
  t1467 = ct[99] * t1303 + ct[288] * t1306;
  t1469 = ct[99] * t1342 + ct[288] * t1350;
  t1471 = (-t1220 + t1310) + t1311;
  t1474 = (-ct[71] * t1231_tmp + t1327) + t1329;
  t1478 = (-(t1220_tmp * ct[73]) + ct[93] * t1342) + ct[91] * t1350;
  t1484 = (-ct[73] * t1231_tmp + ct[148] * t1342) + ct[153] * t1350;
  t1127 = t1167_tmp * t940;
  t966 = ct[135] + t1131;
  t939 = ct[146] + t1008;
  t1234 = 0.678 * t940 * t1066;
  t1238 = 0.678 * t940 * t1073;
  t1245 = 0.678 * t940 * t1103;
  t1248 = ct[93] * t950 + -(t1220_tmp * t1106);
  t1250 = 0.678 * t940 * t1116;
  t1257 = t1426_tmp * t962 + ct[119] * t1133;
  t1282 = 0.678 * t1066 * t1116;
  t1289 = 0.678 * t1073 * t1116;
  t1299 = t1426_tmp * t1063 + t969_tmp * t1133;
  t1321 = t1316_tmp * t1239;
  t1334_tmp = t969_tmp * t962 - ct[119] * t1063;
  t1340 = 0.678 * t1164 * t1335_tmp;
  t1353 = 0.678 * t1164 * t1338_tmp;
  t1406 = 1.425 * t1217 * t1249;
  t1408 = 1.425 * t1213 * t1334_tmp;
  t1418 = 1.425 * t1249 * t1318_tmp;
  t1420 = -1.425 * t1334_tmp * b_t1316_tmp;
  t1422 = 1.425 * t1239 * t1334_tmp;
  t1424 = -1.425 * t1249 * t1326_tmp;
  t1444_tmp = t1067 - ct[153] * t1459;
  t1444 = 1.425 * t1298 * t1444_tmp;
  t1453 = 1.425 * t1290 * t1298;
  t1455_tmp = t1101 + t1075 * t1062_tmp_tmp;
  t1455 = -1.425 * t1298 * t1455_tmp;
  t1468 = ct[99] * t1341 + ct[288] * t1346;
  t1470 = (t1219 + -(t969_tmp * t1303)) + t1426_tmp * t1306;
  t1476 = (ct[73] * ct[119] + -(t969_tmp * t1342)) + t1426_tmp * t1350;
  t1477 = (-(t1220_tmp * t1252) + ct[93] * t1341) + ct[91] * t1346;
  t1483 = (-t1252 * t1231_tmp + ct[148] * t1341) + ct[153] * t1346;
  t1068 = ct[288] * t955 + -(ct[99] * t1068);
  t1260 = t1316_tmp * t966;
  t919 = t1301_tmp * t939;
  t1374 = 1.425 * t966 * t1213;
  t1381 = 1.425 * t939 * t1217;
  t1385 = 1.425 * t966 * b_t1316_tmp;
  t1386 = 1.425 * t966 * t1239;
  t1388 = 1.425 * t939 * t1318_tmp;
  t1390 = 1.425 * t939 * t1326_tmp;
  t1391 = 1.425 * t966 * t1248;
  t1393 = -1.425 * t966 * t1334_tmp;
  t1394 = 1.425 * t939 * t1249;
  t1398 = 1.425 * t939 * t1257;
  t1405 = 1.425 * t1213 * t1248;
  t1411 = 1.425 * t1217 * t1257;
  t1415 = 1.425 * t1248 * b_t1316_tmp;
  t1417 = 1.425 * t1239 * t1248;
  t1423 = 1.425 * t1257 * t1318_tmp;
  t1427 = 1.425 * t1257 * t1326_tmp;
  t1446 = 1.425 * t1299 * t1444_tmp;
  t1456 = 1.425 * t1290 * t1299;
  t1458 = 1.425 * t1299 * t1455_tmp;
  t1475 = (ct[119] * t1252 + -(t969_tmp * t1341)) + t1426_tmp * t1346;
  t1063 = ct[288] * t1131 + -(ct[99] * t1008);
  t1106 = -0.678 * t1068 * t1335_tmp;
  t950 = -0.678 * t1068 * t1338_tmp;
  t962 = 1.425 * t1063 * t1444_tmp;
  t1459 = 1.425 * t1290 * t1063;
  t955 = -1.425 * t1063 * t1455_tmp;
  t1231_tmp = ct[99] * ((((ct[198] + ct[204]) + ct[329]) + ct[55]) + ct[86]) +
              ct[288] * ((((ct[138] + ct[260]) + ct[17]) + ct[77]) + ct[87]);
  a = ct[206] - ct[211];
  t955_tmp = ((((ct[146] + ct[150]) - ct[198]) - ct[204]) + ct[72]) + ct[81];
  t1062_tmp = (ct[135] + ct[1] * ct[288]) + ct[99] * ct[321];
  t1008 = (ct[146] - ct[1] * ct[99]) + ct[288] * ct[321];
  expl_temp.f5[0] =
      ((((((((((((((((((((ct[144] + 0.001409) + ct[203]) + ct[264]) + ct[16]) +
                      ct[71]) +
                     ct[3] * (t955_tmp * t955_tmp)) +
                    ct[84] * ct[119]) +
                   ct[8] * ct[83]) +
                  ct[2] * (t1062_tmp * t1062_tmp)) +
                 ct[2] * (t1008 * t1008)) +
                ct[3] * (ct[124] * ct[124])) +
               ct[4] * (ct[155] * ct[155])) +
              ct[4] * (ct[156] * ct[156])) +
             ct[5] * (ct[207] * ct[207])) +
            ct[5] * (ct[212] * ct[212])) +
           0.678 * (ct[237] * ct[237])) +
          0.678 * (ct[251] * ct[251])) +
         0.678 * (t963 * t963)) +
        0.678 * (t940 * t940)) +
       1.425 * (t966 * t966)) +
      1.425 * (t939 * t939);
  t1080 = ((ct[139] + ct[141]) + ct[176]) + ct[177];
  expl_temp.f5[1] =
      (((((((((((((((t1080 - ct[181]) - ct[187]) + ct[253]) + ct[254]) +
                 -ct[305]) +
                -t933) +
               ct[29]) +
              -t1118) +
             -t1127) +
            t1222) +
           -t1260) +
          -t919) +
         t1371) -
        t1467) +
       ct[99] * (ct[110] * ct[119] + ct[8] * ct[109])) +
      ct[288] * (ct[107] * ct[119] + ct[8] * ct[106]);
  t1133 = (ct[147] + ct[184]) + ct[188];
  expl_temp.f5[2] =
      (((((((((((((t1133 + ct[218]) + ct[219]) + ct[316]) + ct[318]) + ct[48]) +
              t1093) +
             ct[63]) +
            t1243) +
           t1250) +
          t1288) +
         t1393) +
        t1398) +
       t1426) +
      t1470;
  expl_temp.f5[3] =
      ((((((((((((ct[304] + ct[309]) + -ct[44]) + -t1077) + ct[65]) + t1220) +
             -t1241) +
            -t1245) +
           t1292) -
          t1310) -
         t1311) +
        -t1391) +
       -t1394) +
      t1430;
  t956 = t1306 * t1062_tmp_tmp;
  expl_temp.f10[0] =
      (((((((((-ct[37] + t1062) + t1224) + -t1232) + t1238) + t1297) - t1312) +
         -t1386) +
        t1390) +
       t1433) +
      t956;
  t947 = t1152 * t1190_tmp;
  t955_tmp = t1156 * t1350_tmp;
  expl_temp.f10[1] = ((((((ct[39] + t1229) + -t1234) + t1385) + t1388) +
                       ((t1226 + -t1303 * t1190_tmp) + -t1306 * t1350_tmp)) +
                      t947) +
                     t955_tmp;
  expl_temp.f10[2] = (((t1231 - t1327) - t1329) + -t1374) + -t1381;
  t940 = ct[99] * ct[119];
  t941 = ct[119] * ct[288];
  t939 = (-ct[136] + ct[142]) + ct[125] * t1062_tmp_tmp;
  expl_temp.f10[3] =
      (((((((((((((((((((t1080 + ct[253]) + ct[254]) + -ct[305]) + -t933) +
                     -t1118) +
                    -t1127) +
                   -t1260) +
                  -t919) -
                 ct[99] * ct[167]) -
                ct[166] * ct[288]) +
               ct[99] * ct[216]) +
              ct[99] * ct[290]) +
             ct[288] * ct[289]) +
            ct[50] * ct[99]) +
           ct[51] * ct[288]) -
          ct[99] * t1252) -
         ct[73] * ct[288]) +
        ct[99] * ((ct[85] * ct[99] - t941 * ct[83]) + t969_tmp * ct[84])) +
       ct[288] * ((ct[85] * ct[288] + t940 * ct[83]) - t1426_tmp * ct[84])) -
      ct[288] * t939;
  expl_temp.f10[4] =
      ((((((((((((((((((((((((((((ct[288] * (ct[288] * ((ct[108] * ct[288] +
                                                         t940 * ct[106]) -
                                                        t1426_tmp * ct[107]) +
                                             ct[99] * ((ct[111] * ct[288] +
                                                        t940 * ct[109]) -
                                                       t1426_tmp * ct[110])) +
                                  ct[99] * (ct[288] * ((ct[99] * ct[108] -
                                                        t941 * ct[106]) +
                                                       t969_tmp * ct[107]) +
                                            ct[99] * ((ct[99] * ct[111] -
                                                       t941 * ct[109]) +
                                                      t969_tmp * ct[110]))) +
                                 ct[99] * ct[282]) +
                                ct[280] * ct[288]) +
                               ct[46] * ct[99]) +
                              ct[47] * ct[288]) +
                             ct[99] * t1246) +
                            ct[288] * t1244) +
                           ct[99] * t1396) +
                          ct[288] * t1397) +
                         ct[99] * t1468) +
                        ct[288] * t1469) +
                       ct[3] * (t1231_tmp * t1231_tmp)) +
                      ct[4] * (ct[214] * ct[214])) +
                     0.678 * (t1068 * t1068)) +
                    1.425 * (t1063 * t1063)) +
                   ct[5] * (a * a)) +
                  0.678 * (t1183_tmp * t1183_tmp)) +
                 ct[3] * ct[115] * ct[105]) +
                ct[3] * ct[117] * ct[105]) +
               ct[4] * ct[115] * ct[127]) +
              ct[4] * ct[117] * ct[127]) +
             ct[5] * ct[115] * ct[159]) +
            ct[5] * ct[117] * ct[159]) +
           0.678 * ct[115] * ct[180]) +
          0.678 * ct[117] * ct[180]) +
         0.678 * ct[115] * ct[245]) +
        0.678 * ct[117] * ct[245]) +
       1.425 * ct[115] * t970) +
      1.425 * ct[117] * t970;
  t1080 = (-ct[162] + ct[170]) + ct[145] * t1062_tmp_tmp;
  t940 = (((((((((((((ct[210] + ct[213]) + ct[281]) + -ct[283]) + -ct[285]) +
                  ct[15]) +
                 -(t933_tmp * t917)) +
                ct[57]) +
               t1169_tmp * t1195_tmp) +
              -(t1167_tmp * t1116)) +
             -0.678 * t989 * t1183_tmp) +
            t1316_tmp * t1334_tmp) +
           -(t1301_tmp * t1257)) +
          -(0.678 * t1164 * t1068)) +
         -(1.425 * t1299 * t1063);
  t941 = (ct[276] + ct[119] * t939) + t969_tmp * t1080;
  expl_temp.f11[0] =
      (((((((((t940 - ct[288] * t941) - ct[99] * ct[323]) - ct[288] * ct[322]) +
            ct[66] * ct[99]) +
           ct[99] * t1314) +
          ct[288] * t1313) +
         ct[99] * t1435) +
        ct[288] * t1437) -
       ct[99] * t1475) -
      ct[288] * t1476;
  t1080 = (-ct[278] + ct[93] * t1080) + t1220_tmp * t939;
  t1008 = ((((((((((ct[271] + ct[275]) + ct[10]) + t933_tmp * t899) + ct[49]) +
                t1169_tmp * t1097) +
               t1167_tmp * t1103) +
              0.678 * t1211_tmp * t1183_tmp) +
             t1316_tmp * t1248) +
            t1301_tmp * t1249) +
           0.678 * t1153 * t1068) +
          1.425 * t1298 * t1063;
  expl_temp.f11[1] =
      (((((((t1008 + ct[68] * ct[99]) + ct[99] * t1322) + ct[288] * t1323) +
          ct[99] * t1440) +
         ct[288] * t1441) +
        ct[99] * t1477) +
       ct[288] * t1478) -
      ct[288] * t1080;
  t966 = (t1265 - t1363) + t1350 * t1062_tmp_tmp;
  t1063 = (t1263 - t1362) + t1346 * t1062_tmp_tmp;
  expl_temp.f12[0] =
      (((((((((((((ct[324] + ct[325]) + t1169) + -t1174) + -t1183) + t1321) +
              t1326) +
             t950) +
            t955) +
           ct[99] * t1330) +
          ct[288] * t1328) +
         ct[99] * t1442) +
        ct[288] * t1443) -
       ct[99] * t1063) -
      ct[288] * t966;
  t1068 = (-t1270 + t1342 * t1190_tmp) + t1350 * t1350_tmp;
  t1131 = (-t1268 + t1341 * t1190_tmp) + t1346 * t1350_tmp;
  t1260 = (t1108 + t1186 * t1190_tmp) + t1192 * t1350_tmp;
  t919 = (ct[58] + t1184 * t1190_tmp) + t1190 * t1350_tmp;
  expl_temp.f12[1] =
      ((((((((ct[67] + t1167) + -t1316) + -t1318) + t1106) + -t1459) +
         ct[99] * t919) +
        ct[288] * t1260) +
       ct[99] * t1131) +
      ct[288] * t1068;
  expl_temp.f12[2] =
      (((t1300 + t1301) + -t962) + ct[99] * t1483) + ct[288] * t1484;
  expl_temp.f13[0] =
      (((((((((((((((((((((((ct[147] + ct[205]) + ct[218]) + ct[219]) +
                          ct[265]) +
                         ct[316]) +
                        ct[318]) +
                       ct[22]) +
                      ct[48]) +
                     t1093) +
                    t1219) +
                   t1243) +
                  t1250) +
                 t1393) +
                t1398) +
               t1426_tmp * t939) +
              t1426_tmp * ct[166]) -
             t969_tmp * ct[167]) +
            t969_tmp * ct[216]) -
           t1426_tmp * ct[289]) +
          t969_tmp * ct[290]) -
         t1426_tmp * ct[51]) +
        t969_tmp * ct[50]) +
       t1426_tmp * ct[73]) -
      t969_tmp * t1252;
  expl_temp.f13[1] =
      ((((((((((((((t940 - ct[119] * (ct[181] + ct[187])) + ct[29] * ct[119]) +
                  ct[119] * t1222) +
                 ct[119] * t1371) -
                ct[119] * t1467) -
               t1426_tmp * ct[280]) +
              t969_tmp * ct[282]) -
             t1426_tmp * ct[47]) +
            t969_tmp * ct[46]) -
           t1426_tmp * t1244) +
          t969_tmp * t1246) -
         t1426_tmp * t1397) +
        t969_tmp * t1396) -
       t1426_tmp * t1469) +
      t969_tmp * t1468;
  t1231_tmp = ct[126] - ct[143];
  a = ct[179] - ct[229];
  t940 = ((((((((((ct[326] + ct[327]) + ct[45]) + ct[64]) +
                -(0.678 * t899 * t917)) +
               -0.678 * t989 * t1211_tmp) +
              0.678 * t1097 * t1195_tmp) +
             -(0.678 * t1103 * t1116)) +
            -(0.678 * t1153 * t1164)) +
           1.425 * t1248 * t1334_tmp) +
          -(1.425 * t1249 * t1257)) +
         -(1.425 * t1298 * t1299);
  expl_temp.f15[0] = (((((((((((t940 + ct[65] * ct[119]) + ct[119] * t1292) +
                              ct[119] * t1430) -
                             ct[119] * t1471) +
                            t969_tmp * ct[68]) -
                           t1426_tmp * t1323) +
                          t969_tmp * t1322) -
                         t1426_tmp * t1441) +
                        t969_tmp * t1440) -
                       t1426_tmp * t1478) +
                      t969_tmp * t1477) +
                     t1426_tmp * t1080;
  t956 += t1224 - t1312;
  expl_temp.f15[1] =
      ((((((((((((((((ct[62] + t1139) + t1180) + t1286) + t1289) + t1353) +
                 t1422) +
                t1427) +
               t1458) +
              ct[119] * t1297) +
             ct[119] * t1433) +
            ct[119] * t956) +
           t1426_tmp * t966) -
          t969_tmp * t1063) -
         t1426_tmp * t1328) +
        t969_tmp * t1330) -
       t1426_tmp * t1443) +
      t969_tmp * t1442;
  t1062_tmp = (-t1226 + t1303 * t1190_tmp) + t1306 * t1350_tmp;
  t947 = (ct[39] + t947) + t955_tmp;
  expl_temp.f16[0] =
      ((((((((((-t1280 + -t1282) + t1340) + t1420) + t1423) + t1456) +
           ct[119] * t947) -
          ct[119] * t1062_tmp) -
         t1426_tmp * t1068) +
        t969_tmp * t1131) -
       t1426_tmp * t1260) +
      t969_tmp * t919;
  expl_temp.f16[1] =
      ((((t1408 + -t1411) + t1446) - ct[119] * t1474) - t1426_tmp * t1484) +
      t969_tmp * t1483;
  expl_temp.f17[0] =
      ((((((((((((((((((ct[208] + ct[267]) + ct[304]) + ct[309]) + ct[27]) +
                    -ct[44]) +
                   -t1077) +
                  t1220) +
                 -t1241) +
                -t1245) +
               -t1391) +
              -t1394) +
             ct[93] * ct[216]) +
            ct[91] * ct[289]) +
           ct[93] * ct[290]) +
          ct[51] * ct[91]) +
         ct[50] * ct[93]) -
        ct[73] * ct[91]) -
       ct[93] * t1252) -
      ct[91] * t939;
  expl_temp.f17[1] =
      (((((((((((t1008 + ct[47] * ct[91]) + ct[46] * ct[93]) + ct[91] * t1244) +
              ct[93] * t1246) +
             ct[91] * t1397) +
            ct[93] * t1396) +
           ct[91] * t1469) +
          ct[93] * t1468) +
         t1220_tmp * ct[29]) +
        t1220_tmp * t1222) +
       t1220_tmp * t1371) -
      t1220_tmp * t1467;
  t955_tmp = ct[182] - ct[186];
  expl_temp.f9[0] =
      ((((((((((t1277 + t1278) + t1335) + -t1415) + -t1418) + -t1453) +
           ct[91] * t1260) +
          ct[93] * t919) +
         ct[91] * t1068) +
        ct[93] * t1131) -
       t1220_tmp * t1062_tmp) +
      t1220_tmp * t947;
  expl_temp.f9[1] =
      ((((t1405 + t1406) + -t1444) + ct[91] * t1484) + ct[93] * t1483) -
      t1220_tmp * t1474;
  expl_temp.f205 = ct[325];
  expl_temp.f204 = ct[324];
  expl_temp.f203 = ct[306];
  expl_temp.f202 = ct[300];
  expl_temp.f201 = ct[290];
  expl_temp.f200 = ct[289];
  expl_temp.f199 = t889;
  expl_temp.f198 = ct[277];
  expl_temp.f197 = ct[266];
  expl_temp.f196 = ct[217];
  expl_temp.f195 = ct[197];
  expl_temp.f194 = ct[196];
  expl_temp.f193 = ct[171];
  expl_temp.f192 = ct[168];
  expl_temp.f191 = ct[154];
  expl_temp.f190 = ct[153];
  expl_temp.f189 = ct[148];
  expl_temp.f188 = ct[134];
  expl_temp.f187 = ct[128];
  expl_temp.f186 = ct[123];
  expl_temp.f185 = ct[121];
  expl_temp.f184 = ct[120];
  expl_temp.f183 = 1.425;
  expl_temp.f182 = ct[113];
  expl_temp.f181 = ct[112];
  expl_temp.f180 = ct[103];
  expl_temp.f179 = ct[102];
  expl_temp.f178 = ct[101];
  expl_temp.f177 = ct[97];
  expl_temp.f176 = ct[96];
  expl_temp.f175 = ct[95];
  expl_temp.f174 = ct[94];
  expl_temp.f173 = t1484;
  expl_temp.f172 = t1483;
  expl_temp.f171 = t1478;
  expl_temp.f170 = t1477;
  expl_temp.f169 = t1476;
  expl_temp.f168 = t1475;
  expl_temp.f167 = t1474;
  expl_temp.f166 = t1471;
  expl_temp.f165 = t1470;
  expl_temp.f164 = t1469;
  expl_temp.f163 = t1468;
  expl_temp.f162 = t1467;
  expl_temp.f161 = t955;
  expl_temp.f160 = -t1459;
  expl_temp.f159 = t1458;
  expl_temp.f158 = t1456;
  expl_temp.f157 = t1455;
  expl_temp.f156 = -t1453;
  expl_temp.f155 = -t962;
  expl_temp.f154 = 1.425 * t1290 * t1455_tmp;
  expl_temp.f153 = t1446;
  expl_temp.f152 = -t1444;
  expl_temp.f151 = t1443;
  expl_temp.f150 = t1442;
  expl_temp.f149 = t1441;
  expl_temp.f148 = t1440;
  expl_temp.f147 = 1.425 * t1455_tmp * t1444_tmp;
  expl_temp.f146 = t1437;
  expl_temp.f145 = 1.425 * t1290 * t1444_tmp;
  expl_temp.f144 = t1435;
  expl_temp.f143 = t1433;
  expl_temp.f142 = t1430;
  expl_temp.f141 = t1427;
  expl_temp.f140 = t1426;
  expl_temp.f139 = t1424;
  expl_temp.f138 = t1423;
  expl_temp.f137 = t1422;
  expl_temp.f136 = t1420;
  expl_temp.f135 = -t1418;
  expl_temp.f134 = t1417;
  expl_temp.f133 = -t1415;
  expl_temp.f132 = 1.425 * t1326_tmp * t1318_tmp;
  expl_temp.f131 = -t1411;
  expl_temp.f130 = -(1.425 * t1239 * b_t1316_tmp);
  expl_temp.f129 = t1408;
  expl_temp.f128 = t1406;
  expl_temp.f127 = t1405;
  expl_temp.f126 = -1.425 * t1217 * t1326_tmp;
  expl_temp.f125 = -(1.425 * t1217 * t1318_tmp);
  expl_temp.f124 = 1.425 * t1213 * t1239;
  expl_temp.f123 = -(1.425 * t1213 * b_t1316_tmp);
  expl_temp.f122 = ct[79];
  expl_temp.f121 = t1397;
  expl_temp.f120 = t1396;
  expl_temp.f119 = t1390;
  expl_temp.f118 = t1388;
  expl_temp.f117 = -t1386;
  expl_temp.f116 = t1385;
  expl_temp.f115 = -t1381;
  expl_temp.f114 = -t1374;
  expl_temp.f113 = t1371;
  expl_temp.f112 = t950;
  expl_temp.f111 = t1363;
  expl_temp.f110 = t1362;
  expl_temp.f109 = t1106;
  expl_temp.f108 = t1353;
  expl_temp.f107 = t1350;
  expl_temp.f106 = t1346;
  expl_temp.f105 = t1342;
  expl_temp.f104 = t1341;
  expl_temp.f103 = t1340;
  expl_temp.f102 = t1338;
  expl_temp.f101 = t1335;
  expl_temp.f100 = t1330;
  expl_temp.f99 = t1328;
  expl_temp.f98 = t1326;
  expl_temp.f97 = 0.678 * t1338_tmp * t1335_tmp;
  expl_temp.f96 = t1323;
  expl_temp.f95 = t1322;
  expl_temp.f94 = t1321;
  expl_temp.f93 = -t1318;
  expl_temp.f92 = -t1316;
  expl_temp.f91 = t1314;
  expl_temp.f90 = t1313;
  expl_temp.f89 = t1312;
  expl_temp.f88 = t1306;
  expl_temp.f87 = t1303;
  expl_temp.f86 = t1301;
  expl_temp.f85 = t1300;
  expl_temp.f84 = ct[75];
  expl_temp.f83 = t1297;
  expl_temp.f82 = t1292;
  expl_temp.f81 = t1289;
  expl_temp.f80 = t1288;
  expl_temp.f79 = -t1284;
  expl_temp.f78 = t1286;
  expl_temp.f77 = -t1282;
  expl_temp.f76 = -t1280;
  expl_temp.f75 = t1279;
  expl_temp.f74 = t1278;
  expl_temp.f73 = t1277;
  expl_temp.f72 = -(0.678 * t1066 * t1073);
  expl_temp.f71 = -0.678 * t1069 * t1280_tmp;
  expl_temp.f70 = t1270;
  expl_temp.f69 = t1268;
  expl_temp.f68 = t1265;
  expl_temp.f67 = t1263;
  expl_temp.f66 = ct[73];
  expl_temp.f65 = t1252;
  expl_temp.f64 = t1246;
  expl_temp.f63 = t1244;
  expl_temp.f62 = t1239;
  expl_temp.f61 = t1238;
  expl_temp.f60 = -t1234;
  expl_temp.f59 = -t1232;
  expl_temp.f58 = t1231;
  expl_temp.f57 = t1229;
  expl_temp.f56 = t1226;
  expl_temp.f55 = t1224;
  expl_temp.f54 = t1222;
  expl_temp.f53 = t1217;
  expl_temp.f52 = t1213;
  expl_temp.f51 = t1192;
  expl_temp.f50 = t1190;
  expl_temp.f49 = t1186;
  expl_temp.f48 = -t1183;
  expl_temp.f47 = t1184;
  expl_temp.f46 = t1180;
  expl_temp.f45 = -t1174;
  expl_temp.f44 = -ct[70];
  expl_temp.f43 = ct[69];
  expl_temp.f42 = t1169;
  expl_temp.f41 = t1167;
  expl_temp.f40 = ct[67];
  expl_temp.f39 = t1156;
  expl_temp.f38 = t1152;
  expl_temp.f37 = t1139;
  expl_temp.f36 = ct[62];
  expl_temp.f35 = t1123;
  expl_temp.f34 = ct[61];
  expl_temp.f33 = ct[60];
  expl_temp.f32 = ct[59];
  expl_temp.f31 = t1108;
  expl_temp.f30 = ct[58];
  expl_temp.f29 = t1101;
  expl_temp.f28 = t1094;
  expl_temp.f27 = ct[51];
  expl_temp.f26 = ct[50];
  expl_temp.f25 = t1075;
  expl_temp.f24 = t1073;
  expl_temp.f23 = t1069;
  expl_temp.f22 = t1067;
  expl_temp.f21 = t1062;
  expl_temp.f20 = ct[39];
  expl_temp.f19 = -ct[37];
  expl_temp.f18 = ct[36];
  expl_temp.f14 =
      ((((((((((((((((((((((((((((ct[63] * ct[119] + ct[119] * t1288) +
                                 ct[119] * t1426) +
                                ct[119] * t1470) +
                               ct[119] * t1133) +
                              ct[4] * (ct[173] * ct[173])) +
                             ct[4] * (ct[193] * ct[193])) +
                            ct[5] * (ct[232] * ct[232])) +
                           ct[5] * (ct[244] * ct[244])) +
                          ct[5] * (ct[273] * ct[273])) +
                         0.678 * (t917 * t917)) +
                        0.678 * (t989 * t989)) +
                       0.678 * (t1116 * t1116)) +
                      0.678 * (t1164 * t1164)) +
                     1.425 * (t1257 * t1257)) +
                    1.425 * (t1299 * t1299)) +
                   ct[4] * (t1231_tmp * t1231_tmp)) +
                  0.678 * (a * a)) +
                 0.678 * (t1195_tmp * t1195_tmp)) +
                1.425 * (t1334_tmp * t1334_tmp)) +
               t1426_tmp * t941) +
              t1426_tmp * ct[322]) -
             t969_tmp * ct[323]) +
            t969_tmp * ct[66]) -
           t1426_tmp * t1313) +
          t969_tmp * t1314) -
         t1426_tmp * t1437) +
        t969_tmp * t1435) +
       t1426_tmp * t1476) -
      t969_tmp * t1475;
  expl_temp.f8 =
      ((((((((((((((((ct[60] + t1123) + -ct[70]) + t1279) + -t1284) + t1338) +
                 t1417) +
                t1424) +
               t1455) +
              ct[91] * t1328) +
             ct[93] * t1330) +
            ct[91] * t1443) +
           ct[93] * t1442) -
          ct[91] * t966) -
         ct[93] * t1063) +
        t1220_tmp * t956) +
       t1220_tmp * t1297) +
      t1220_tmp * t1433;
  expl_temp.f7 = ((((((((((((((((((((((ct[68] * ct[93] + ct[91] * t1323) +
                                      ct[93] * t1322) +
                                     ct[91] * t1441) +
                                    ct[93] * t1440) +
                                   ct[91] * t1478) +
                                  ct[93] * t1477) -
                                 ct[91] * t1080) +
                                ct[5] * (ct[220] * ct[220])) +
                               ct[5] * (ct[221] * ct[221])) +
                              0.678 * (ct[287] * ct[287])) +
                             0.678 * (t899 * t899)) +
                            0.678 * (t1097 * t1097)) +
                           0.678 * (t1103 * t1103)) +
                          0.678 * (t1153 * t1153)) +
                         1.425 * (t1248 * t1248)) +
                        1.425 * (t1249 * t1249)) +
                       1.425 * (t1298 * t1298)) +
                      ct[5] * (t955_tmp * t955_tmp)) +
                     0.678 * (t1211_tmp * t1211_tmp)) +
                    t1220_tmp * ct[65]) +
                   t1220_tmp * t1292) +
                  t1220_tmp * t1430) -
                 t1220_tmp * t1471;
  expl_temp.f6 =
      (((((((((((t940 - ct[91] * t941) + ct[66] * ct[93]) + ct[91] * t1313) +
              ct[93] * t1314) +
             ct[91] * t1437) +
            ct[93] * t1435) -
           ct[91] * t1476) -
          ct[93] * t1475) +
         t1220_tmp * ct[63]) +
        t1220_tmp * t1288) +
       t1220_tmp * t1426) +
      t1220_tmp * t1470;
  expl_temp.f4 = 0.678;
  expl_temp.f3 = 0.678;
  expl_temp.f2 = ((-ct[113] * t1062_tmp + 1.425 * (t1290 * t1290)) +
                  0.678 * (t1335_tmp * t1335_tmp)) +
                 t1350_tmp * t1068;
  expl_temp.f1 = ((((((t1190_tmp * t919 + 0.678 * (t1280_tmp * t1280_tmp)) +
                      1.425 * (b_t1316_tmp * b_t1316_tmp)) +
                     ct[113] * t947) +
                    t1350_tmp * t1260) +
                   t1190_tmp * t1131) +
                  1.425 * (t1318_tmp * t1318_tmp)) +
                 0.678 * (t1066 * t1066);
  ft_3(&expl_temp, M);
}

//
// Arguments    : const cell_0 *ct
//                double M[49]
// Return Type  : void
//
static void ft_3(const cell_0 *ct, double M[49])
{
  double a;
  double a_tmp;
  double b_a;
  double b_a_tmp;
  double c_a;
  double d_a;
  double e_a;
  a_tmp = ((ct->f185 + ct->f186) + ct->f187) + ct->f188;
  a = ct->f196 + ct->f181 * a_tmp;
  b_a_tmp = ct->f43 - ct->f180;
  a_tmp = ct->f174 * a_tmp + ct->f192 * b_a_tmp;
  b_a = ct->f202 + ct->f199 * b_a_tmp;
  c_a = ct->f28 + ct->f203 * b_a_tmp;
  d_a = ct->f29 + ct->f25 * b_a_tmp;
  e_a = ct->f22 - ct->f190 * (((ct->f191 + ct->f193) + ct->f194) + ct->f195);
  M[0] = ct->f5[0];
  M[1] = ct->f5[1];
  M[2] = ct->f5[2];
  M[3] = ct->f5[3];
  for (int i = 0; i < 5; i++) {
    M[i + 4] = ct->f10[i];
  }
  double b_ct_tmp;
  double c_ct_tmp;
  double ct_tmp;
  double d_ct_tmp;
  double e_ct_tmp;
  M[9] = ct->f11[0];
  M[10] = ct->f11[1];
  M[11] = ct->f12[0];
  M[12] = ct->f12[1];
  M[13] = ct->f12[2];
  M[16] = ct->f14;
  M[23] = ct->f6;
  M[24] = ct->f7;
  M[25] = ct->f8;
  M[14] = ct->f13[0];
  M[17] = ct->f15[0];
  M[19] = ct->f16[0];
  M[21] = ct->f17[0];
  M[26] = ct->f9[0];
  M[15] = ct->f13[1];
  M[18] = ct->f15[1];
  M[20] = ct->f16[1];
  M[22] = ct->f17[1];
  M[27] = ct->f9[1];
  M[28] = (((((((((((((ct->f198 + ct->f18) + ct->f19) + ct->f21) + ct->f55) +
                   ct->f59) +
                  ct->f61) +
                 ct->f117) +
                ct->f119) +
               ct->f181 * ct->f201) +
              ct->f181 * ct->f26) -
             ct->f181 * ct->f65) -
            ct->f200 * b_a_tmp) -
           ct->f27 * b_a_tmp) +
          ct->f66 * b_a_tmp;
  M[29] =
      ((((((((((((((((ct->f204 + ct->f205) + ct->f42) + ct->f45) + ct->f48) +
                  ct->f94) +
                 ct->f98) +
                ct->f112) +
               ct->f161) +
              ct->f174 * ct->f54) +
             ct->f181 * ct->f64) +
            ct->f174 * ct->f113) +
           ct->f181 * ct->f120) -
          ct->f174 * ct->f162) +
         ct->f181 * ct->f163) -
        ct->f63 * b_a_tmp) -
       ct->f121 * b_a_tmp) -
      ct->f164 * b_a_tmp;
  M[30] = ((((((((((((((((ct->f36 + ct->f37) + ct->f46) + ct->f78) + ct->f81) +
                      ct->f108) +
                     ct->f137) +
                    ct->f141) +
                   ct->f159) +
                  ct->f174 * ct->f80) +
                 ct->f181 * ct->f91) +
                ct->f174 * ct->f140) +
               ct->f174 * ct->f165) +
              ct->f181 * ct->f144) -
             ct->f181 * ct->f168) -
            ct->f90 * b_a_tmp) -
           ct->f146 * b_a_tmp) +
          ct->f169 * b_a_tmp;
  M[31] = ((((((((((((((((ct->f33 + ct->f35) + ct->f44) + ct->f75) + ct->f79) +
                      ct->f102) +
                     ct->f134) +
                    ct->f139) +
                   ct->f157) +
                  ct->f174 * ct->f82) +
                 ct->f181 * ct->f95) +
                ct->f174 * ct->f142) -
               ct->f174 * ct->f166) +
              ct->f181 * ct->f148) +
             ct->f181 * ct->f170) -
            ct->f96 * b_a_tmp) -
           ct->f149 * b_a_tmp) -
          ct->f171 * b_a_tmp;
  ct_tmp = (ct->f68 - ct->f111) + ct->f107 * b_a_tmp;
  b_ct_tmp = (ct->f67 - ct->f110) + ct->f106 * b_a_tmp;
  c_ct_tmp = (ct->f55 - ct->f89) + ct->f88 * b_a_tmp;
  M[32] = ((((((((((((((((0.678 * (a * a) + 0.678 * (a_tmp * a_tmp)) +
                         b_a_tmp * ct_tmp) +
                        ct->f174 * ct->f83) +
                       ct->f181 * ct->f100) +
                      ct->f174 * ct->f143) +
                     ct->f181 * ct->f150) +
                    ct->f4 * (b_a * b_a)) -
                   ct->f99 * b_a_tmp) -
                  ct->f151 * b_a_tmp) +
                 1.425 * (c_a * c_a)) +
                1.425 * (d_a * d_a)) +
               0.678 * (ct->f197 * ct->f197)) +
              ct->f4 * (ct->f23 * ct->f23)) +
             ct->f4 * (ct->f24 * ct->f24)) +
            1.425 * (ct->f62 * ct->f62)) +
           ct->f174 * c_ct_tmp) -
          ct->f181 * b_ct_tmp;
  a_tmp = ct->f178 + ct->f84 * (ct->f32 - ct->f175);
  b_a = ct->f176 - ct->f184;
  c_a = ((((ct->f71 + ct->f72) + ct->f97) + ct->f130) + ct->f132) + ct->f154;
  d_a = (-ct->f56 + ct->f87 * a_tmp) + ct->f88 * b_a;
  a = (-ct->f69 + ct->f104 * a_tmp) + ct->f106 * b_a;
  d_ct_tmp = (-ct->f70 + ct->f105 * a_tmp) + ct->f107 * b_a;
  M[33] = (((((c_a + ct->f174 * ((ct->f20 + ct->f38 * a_tmp) + ct->f39 * b_a)) +
              ct->f181 * ((ct->f30 + ct->f47 * a_tmp) + ct->f50 * b_a)) -
             b_a_tmp * ((ct->f31 + ct->f49 * a_tmp) + ct->f51 * b_a)) -
            ct->f174 * d_a) +
           ct->f181 * a) -
          b_a_tmp * d_ct_tmp;
  e_ct_tmp = (ct->f124 + ct->f126) + ct->f147;
  M[34] = ((e_ct_tmp - ct->f174 * ct->f167) + ct->f181 * ct->f172) -
          ct->f173 * b_a_tmp;
  M[35] =
      ((((((((ct->f20 + ct->f56) + ct->f57) + ct->f60) + ct->f116) + ct->f118) +
         ct->f26 * a_tmp) -
        ct->f65 * a_tmp) +
       ct->f27 * b_a) -
      ct->f66 * b_a;
  M[36] = ((((((((((ct->f40 + ct->f41) + ct->f92) + ct->f93) + ct->f109) +
                ct->f160) +
               ct->f120 * a_tmp) +
              ct->f163 * a_tmp) +
             ct->f182 * ct->f113) -
            ct->f182 * ct->f162) +
           ct->f121 * b_a) +
          ct->f164 * b_a;
  M[37] = ((((((((((ct->f76 + ct->f77) + ct->f103) + ct->f136) + ct->f138) +
                ct->f158) +
               ct->f144 * a_tmp) -
              ct->f168 * a_tmp) +
             ct->f182 * ct->f140) +
            ct->f182 * ct->f165) +
           ct->f146 * b_a) -
          ct->f169 * b_a;
  M[38] = ((((((((((ct->f73 + ct->f74) + ct->f101) + ct->f133) + ct->f135) +
                ct->f156) +
               ct->f148 * a_tmp) +
              ct->f170 * a_tmp) +
             ct->f182 * ct->f142) -
            ct->f182 * ct->f166) +
           ct->f149 * b_a) +
          ct->f171 * b_a;
  M[39] = (((((c_a + ct->f150 * a_tmp) - b_a * ct_tmp) + ct->f182 * ct->f143) +
            ct->f151 * b_a) -
           a_tmp * b_ct_tmp) +
          ct->f182 * c_ct_tmp;
  M[40] = ct->f1 + ct->f2;
  c_a = (ct->f123 + ct->f125) + ct->f145;
  M[41] = ((c_a + ct->f172 * a_tmp) - ct->f182 * ct->f167) + ct->f173 * b_a;
  M[42] = (((ct->f58 + ct->f114) + ct->f115) - ct->f189 * ct->f65) -
          ct->f190 * ct->f66;
  a_tmp = ct->f179 + ct->f122 * (ct->f34 - ct->f177);
  M[43] = ((((ct->f85 + ct->f86) + ct->f155) - ct->f162 * a_tmp) +
           ct->f189 * ct->f163) +
          ct->f190 * ct->f164;
  M[44] = ((((ct->f129 + ct->f131) + ct->f153) + ct->f165 * a_tmp) -
           ct->f189 * ct->f168) -
          ct->f190 * ct->f169;
  M[45] = ((((ct->f127 + ct->f128) + ct->f152) - ct->f166 * a_tmp) +
           ct->f189 * ct->f170) +
          ct->f190 * ct->f171;
  M[46] =
      ((e_ct_tmp + a_tmp * c_ct_tmp) - ct->f189 * b_ct_tmp) - ct->f190 * ct_tmp;
  M[47] = ((c_a - a_tmp * d_a) + ct->f189 * a) + ct->f190 * d_ct_tmp;
  M[48] = ((((1.425 * (e_a * e_a) - ct->f167 * a_tmp) + ct->f189 * ct->f172) +
            ct->f190 * ct->f173) +
           1.425 * (ct->f52 * ct->f52)) +
          1.425 * (ct->f53 * ct->f53);
}

//
// KINOVA_M_GRIPPER
//     M =
//     KINOVA_M_GRIPPER(IXX2,IXX3,IXX4,IXX5,IXX6,IXX7,IXY2,IXY3,IXY4,IXY5,IXY6,IXY7,IXZ2,IXZ3,IXZ4,IXZ5,IXZ6,IXZ7,IYY2,IYY3,IYY4,IYY5,IYY6,IYY7,IYZ2,IYZ3,IYZ4,IYZ5,IYZ6,IYZ7,IZZ1,IZZ2,IZZ3,IZZ4,IZZ5,IZZ6,IZZ7,X1,X2,X3,X4,X5,X6,X7,Y1,Y2,Y3,Y4,Y5,Y6,Y7,Z2,Z3,Z4,Z5,Z6,Z7,Z8,D2,D3,D4,D5,D6,D7,D8,D9,D10,D11,D12,M1,M2,M3,M4,M5,M6,M7,M8,Q1,Q2,Q3,Q4,Q5,Q6,Q7)
//
// Arguments    : double q1
//                double q2
//                double q3
//                double q4
//                double q5
//                double q6
//                double q7
//                double M[49]
// Return Type  : void
//
void kinova_M_gripper(double q1, double q2, double q3, double q4, double q5,
                      double q6, double q7, double M[49])
{
  double dv[265];
  double t10;
  double t101;
  double t102_tmp;
  double t104_tmp;
  double t11;
  double t111;
  double t111_tmp;
  double t112;
  double t112_tmp;
  double t115;
  double t117;
  double t119;
  double t12;
  double t121;
  double t122;
  double t122_tmp;
  double t124;
  double t124_tmp;
  double t128;
  double t129;
  double t13;
  double t130;
  double t135;
  double t14;
  double t15;
  double t168;
  double t172;
  double t173;
  double t174;
  double t188;
  double t190;
  double t191;
  double t192;
  double t193;
  double t194;
  double t195;
  double t196;
  double t2;
  double t206;
  double t212;
  double t218;
  double t220;
  double t223;
  double t225;
  double t226;
  double t240;
  double t244;
  double t255;
  double t256;
  double t264;
  double t268;
  double t276;
  double t277;
  double t280;
  double t29;
  double t3;
  double t30;
  double t329_tmp;
  double t33;
  double t342;
  double t343;
  double t343_tmp;
  double t344;
  double t345;
  double t347;
  double t348;
  double t349;
  double t351;
  double t352;
  double t355;
  double t357;
  double t376;
  double t376_tmp;
  double t377;
  double t377_tmp;
  double t39;
  double t4;
  double t40;
  double t406;
  double t42;
  double t44;
  double t45_tmp;
  double t46;
  double t473;
  double t474;
  double t478;
  double t483;
  double t49;
  double t5;
  double t50;
  double t534;
  double t54;
  double t55;
  double t56;
  double t568;
  double t57;
  double t59;
  double t6;
  double t67;
  double t68;
  double t7;
  double t8;
  double t81;
  double t82;
  double t83;
  double t9;
  double t99_tmp;
  //     This function was generated by the Symbolic Math Toolbox version 8.7.
  //     12-Aug-2022 13:42:25
  //  參數設定
  t2 = cos(q1);
  t3 = cos(q2);
  t4 = cos(q3);
  t5 = cos(q4);
  t6 = cos(q5);
  t7 = cos(q6);
  t8 = cos(q7);
  t9 = sin(q1);
  t10 = sin(q2);
  t11 = sin(q3);
  t12 = sin(q4);
  t13 = sin(q5);
  t14 = sin(q6);
  t15 = sin(q7);
  t29 = 5.0E-6 * t3;
  t30 = 0.0 * t2;
  t33 = -0.000691 * t2;
  t39 = 5.0E-6 * t10;
  t40 = 0.0 * t9;
  t42 = -0.000691 * t9;
  t44 = 0.0054 * t2;
  t45_tmp = 0.2104 * t3;
  t46 = 0.0064 * t2;
  t49 = 0.0054 * t9;
  t50 = 0.0064 * t9;
  t54 = t2 * t4;
  t55 = t3 * t5;
  t56 = t2 * t11;
  t57 = t4 * t9;
  t59 = t9 * t11;
  t67 = -4.4E-5 * t2 * t3;
  t68 = t9 * -0.0068779999999999996;
  t83 = -4.4E-5 * t3 * t9;
  t99_tmp = 0.2104 * t2 * t10;
  t102_tmp = 0.2104 * t9 * t10;
  t104_tmp = 0.0064 * t10 * t11;
  t111_tmp = t9 * t10;
  t111 = t111_tmp * t12;
  t112_tmp = t10 * t11;
  t112 = t112_tmp * t13;
  t117 = t2 * t5 * t10;
  t121 = t5 * t9 * t10;
  t122_tmp = t4 * t10;
  t122 = t122_tmp * t12;
  t124_tmp = t2 * t10;
  t124 = t124_tmp * 0.11082;
  t128 = t112_tmp * -0.0086059999999999991;
  t81 = 0.0064 * t54;
  t82 = 0.2084 * t55;
  t101 = 0.0064 * t57;
  t115 = t3 * t56;
  t119 = t3 * t59;
  t130 = 0.2084 * t117;
  t135 = 0.2084 * t122;
  t174 = t3 * t12 + t4 * t5 * t10;
  t129 = 0.0064 * t115;
  t168 = -0.0064 * t119;
  t172 = t56 + t3 * t57;
  t173 = t57 + t115;
  t188 = -1.8E-5 * t174;
  t192 = t55 + -t122;
  t195 = t6 * t174;
  t220 = (-4.4E-5 * t10 + t3 * 0.11082) + -t45_tmp;
  t56 = 0.0 * t10 * t11;
  t57 = (-7.0E-6 * t3 + 0.010932 * t4 * t10) + -t56;
  t115 = (0.000606 * t3 + 0.0 * t4 * t10) + -(0.011127 * t10 * t11);
  t55 = (0.001043 * t3 + -7.0E-6 * t4 * t10) + -(0.000606 * t10 * t11);
  t342 = (((t45_tmp + t104_tmp) + -(t3 * 0.092508)) + -(-4.4E-5 * t4 * t10)) +
         t112_tmp * -0.013041;
  t343_tmp = -(t111_tmp * 0.11082);
  t343 = ((((t44 + t46) + t83) + t102_tmp) + -(t2 * -0.0068779999999999996)) +
         t343_tmp;
  t190 = t54 + -t119;
  t191 = t59 + -(t3 * t54);
  t193 = t5 * t172;
  t194 = t6 * t173;
  t196 = t12 * t172;
  t206 = 0.0 * t192;
  t212 = 0.000256 * t192;
  t218 = 0.1059 * t192;
  t225 = t7 * t192;
  t240 = 0.13292199999999998 * t192;
  t256 = t6 * t10 * t11 + t13 * t174;
  t355 = t45_tmp + t342;
  t357 = t111_tmp * t342;
  t223 = t6 * t190;
  t226 = t12 * t191;
  t244 = 0.1059 * t225;
  t255 = t121 + t196;
  t264 = 0.0 * t256;
  t268 = 0.001607 * t256;
  t276 = -0.00965 * t256;
  t347 = (t56 + 0.008147 * t174) + -1.0E-6 * t192;
  t348 = (-0.0005 * t10 * t11 + -1.0E-6 * t174) + 0.000631 * t192;
  t349 = (0.008316 * t10 * t11 + 0.0 * t174) + -0.0005 * t192;
  t377_tmp = t112 - t195;
  t377 = t14 * t192 + -t7 * t377_tmp;
  t473 = ((((t128 + t135) + -t82) + -t104_tmp) + t188) + t240;
  t277 = 0.1059 * t255;
  t280 = t124_tmp * t12 + t5 * t191;
  t122 = t7 * t255;
  t4 = 0.042017 * t255;
  t329_tmp = t117 - t226;
  t119 = -t7 * t329_tmp;
  t344 = (-7.0E-6 * t2 * t10 + 0.0 * t173) + 0.010932 * t191;
  t345 = (0.000606 * t2 * t10 + 0.011127 * t173) + 0.0 * t191;
  t54 = (0.001043 * t2 * t10 + 0.000606 * t173) + -7.0E-6 * t191;
  t351 = (-(-7.0E-6 * t9 * t10) + 0.010932 * t172) + 0.0 * t190;
  t352 = (-(0.000606 * t9 * t10) + 0.0 * t172) + 0.011127 * t190;
  t59 = (-(0.001043 * t9 * t10) + -7.0E-6 * t172) + 0.000606 * t190;
  t376_tmp = t111 - t193;
  t376 = t13 * t190 + -t6 * t376_tmp;
  t406 = 1.0E-6 * t377;
  t474 = ((((t101 + t124_tmp * 0.092508) + t129) + -t99_tmp) + -4.4E-5 * t191) +
         -0.013041 * t173;
  t478 =
      ((((t81 + t102_tmp) + -(t111_tmp * 0.092508)) + t168) + -4.4E-5 * t172) +
      -0.013041 * t190;
  t483 = (t3 * t55 + t122_tmp * t57) + -(t112_tmp * t115);
  t534 = (((((((t45_tmp + t45_tmp) + t82) + t104_tmp) + t104_tmp) + -t128) +
           -t135) +
          -t188) +
         -t240;
  t568 = (t124_tmp * t55 + t173 * t115) + t191 * t57;
  t5 = (-(t111_tmp * t55) + t172 * t57) + t190 * t115;
  t12 = ((t218 + -(0.042017 * t192)) + -0.009432 * t256) + 1.0E-6 * t377_tmp;
  t56 = 0.008147 * t280;
  t57 = -1.0E-6 * t280;
  t115 = 0.0 * t280;
  t55 = t13 * t280;
  dv[0] = 0.001596;
  dv[1] = 0.001641;
  dv[2] = 0.000587;
  dv[3] = -1.0E-6;
  dv[4] = 0.0;
  dv[5] = 0.0;
  dv[6] = 3.0E-6;
  dv[7] = 0.0;
  dv[8] = 0.0;
  dv[9] = 3.0E-6;
  dv[10] = 0.000631;
  dv[11] = 0.001607;
  dv[12] = 0.00041;
  dv[13] = 0.000369;
  dv[14] = -0.0005;
  dv[15] = 0.000256;
  dv[16] = -0.000278;
  dv[17] = 0.000118;
  dv[18] = 0.001409;
  dv[19] = 0.000399;
  dv[20] = 0.001641;
  dv[21] = 0.000609;
  dv[22] = -2.3E-5;
  dv[23] = 1.0E-6;
  dv[24] = 1.0E-6;
  dv[25] = -0.000281;
  dv[26] = -0.009432;
  dv[27] = -0.011402;
  dv[28] = -0.00965;
  dv[29] = 0.1059;
  dv[30] = 1.377;
  dv[31] = 1.1636;
  dv[32] = 1.1636;
  dv[33] = 0.93;
  dv[34] = 0.678;
  dv[35] = 0.678;
  dv[36] = 0.5;
  dv[37] = t10;
  dv[38] = t101;
  dv[39] = t102_tmp;
  dv[40] = t102_tmp;
  dv[41] = t104_tmp;
  dv[42] = t104_tmp;
  dv[43] = 0.70175438596491224;
  dv[44] = t11;
  dv[45] = -t50;
  dv[46] = t111;
  dv[47] = t112;
  dv[48] = t117;
  dv[49] = t124;
  dv[50] = t129;
  dv[51] = t13;
  dv[52] = t130;
  dv[53] = -(t2 * -0.0068779999999999996);
  dv[54] = 0.2084 * t121;
  dv[55] = t14;
  dv[56] = t15;
  dv[57] = -t99_tmp;
  dv[58] = -(0.2104 * t2 * t10);
  dv[59] = t29 + 0.011088 * t10;
  dv[60] = 0.001072 * t3 + t39;
  dv[61] = -0.000691 * t3 + 0.0 * t10;
  dv[62] = -t124;
  dv[63] = t343_tmp;
  dv[64] = -t130;
  dv[65] = t168;
  dv[66] = -t135;
  dv[67] = t173;
  dv[68] = t174;
  dv[69] = 0.060416999999999992;
  dv[70] = 0.0 * t173;
  dv[71] = -0.0005 * t173;
  dv[72] = 0.008316 * t173;
  dv[73] = 0.0064 * t173;
  dv[74] = t190;
  dv[75] = t192;
  dv[76] = t193;
  dv[77] = t194;
  dv[78] = t195;
  dv[79] = 0.2084 * t196;
  dv[80] = t2;
  dv[81] = t206;
  dv[82] = t212;
  dv[83] = 0.0064 * t190;
  dv[84] = t218;
  dv[85] = t223;
  dv[86] = t225;
  dv[87] = t226;
  dv[88] = 0.2084 * t226;
  dv[89] = t220 * t220;
  dv[90] = (t40 + 0.011088 * t2 * t3) + -(t2 * t39);
  dv[91] = (t42 + t2 * t29) + -(0.001072 * t2 * t10);
  dv[92] = (0.011255 * t9 + t3 * t30) + -(t10 * t33);
  dv[93] = (t30 + t9 * t39) + -(0.011088 * t3 * t9);
  dv[94] = (t33 + 0.001072 * t9 * t10) + -(t9 * t29);
  dv[95] = (0.011255 * t2 + t10 * t42) + -(t3 * t40);
  dv[96] = -(-0.0086059999999999991 * t173);
  dv[97] = t244;
  dv[98] = 0.093474385964912282;
  dv[99] = 0.1815;
  dv[100] = -(-0.0086059999999999991 * t190);
  dv[101] = t255;
  dv[102] = t256;
  dv[103] = 1.425;
  dv[104] = t264;
  dv[105] = 0.0 * t255;
  dv[106] = t268;
  dv[107] = t2 * t2;
  dv[108] = 0.000256 * t255;
  dv[109] = 0.000399 * t255;
  dv[110] = t277;
  dv[111] = t9 * t9;
  dv[112] = t280;
  dv[113] = t122;
  dv[114] = t14 * t255;
  dv[115] = t15 * t256;
  dv[116] = t4;
  dv[117] = 0.1059 * t122;
  dv[118] = t56;
  dv[119] = t57;
  dv[120] = t115;
  dv[121] = -1.8E-5 * t280;
  dv[122] = t3;
  dv[123] = 1.8E-5 * t376_tmp;
  dv[124] = -t276;
  dv[125] = -t277;
  dv[126] = t55;
  dv[127] = -(0.13292199999999998 * t255);
  dv[128] = -t4;
  dv[129] = -t56;
  dv[130] = 1.0E-6 * t329_tmp;
  dv[131] = -t57;
  dv[132] = -t115;
  dv[133] = -0.0 * t329_tmp;
  dv[134] = -0.000631 * t329_tmp;
  dv[135] = 0.0005 * t329_tmp;
  dv[136] = -0.000256 * t329_tmp;
  dv[137] = -0.000399 * t329_tmp;
  dv[138] = -0.1059 * t329_tmp;
  dv[139] = t119;
  dv[140] = -t14 * t329_tmp;
  dv[141] = -0.042017 * t329_tmp;
  dv[142] = 0.1059 * t119;
  dv[143] = 0.1059 * t14 * t377_tmp;
  dv[144] = 0.1059 * t329_tmp;
  dv[145] = 0.13292199999999998 * t329_tmp;
  dv[146] = 0.042017 * t329_tmp;
  dv[147] = t343;
  dv[148] = t348;
  dv[149] = t3 * t54;
  dv[150] = t355;
  dv[151] = t124_tmp * t342;
  dv[152] = t357;
  dv[153] = t3 * t59;
  dv[154] = t355 * t355;
  dv[155] = t122_tmp * t344;
  dv[156] = t124_tmp * t54;
  dv[157] = -t357;
  dv[158] = t122_tmp * t351;
  dv[159] = -(t112_tmp * t345);
  dv[160] = t124_tmp * t59;
  dv[161] = -(t111_tmp * t54);
  dv[162] = t13 * t173 + t6 * t280;
  dv[163] = -(t112_tmp * t352);
  dv[164] = -(t111_tmp * t59);
  dv[165] = t376;
  dv[166] = t377;
  t122 = t194 - t55;
  dv[167] = -0.0 * t122;
  dv[168] = -0.001607 * t122;
  dv[169] = -0.000256 * t122;
  dv[170] = 0.009432 * t122;
  dv[171] = 0.001596 * t376;
  dv[172] = 0.0 * t376;
  dv[173] = 0.0 * t376;
  dv[174] = 0.00965 * t122;
  dv[175] = 1.0E-6 * t376;
  dv[176] = -t8 * t122;
  dv[177] = t7 * t376;
  dv[178] = t14 * t376;
  t122 = t223 + t13 * t376_tmp;
  dv[179] = -0.0 * t122;
  dv[180] = -0.001607 * t122;
  dv[181] = -0.000256 * t122;
  dv[182] = -t406;
  dv[183] = 0.009432 * t122;
  dv[184] = 0.00965 * t122;
  dv[185] = -(t8 * t377);
  dv[186] = -t15 * t122;
  dv[187] = t44;
  dv[188] = t172 * t344;
  dv[189] = t173 * t345;
  dv[190] = t173 * t349;
  t55 = t225 + t14 * t377_tmp;
  dv[191] = -0.060416999999999992 * t55;
  dv[192] = 0.0 * t122;
  dv[193] = -0.000278 * t122;
  dv[194] = t45_tmp;
  dv[195] = 0.001641 * t122;
  dv[196] = -0.009432 * t122;
  dv[197] = t8 * t122;
  dv[198] = t191 * t344;
  dv[199] = t190 * t345;
  dv[200] = t172 * t351;
  dv[201] = t173 * t352;
  dv[202] = t46;
  dv[203] = 0.1815 * t55;
  dv[204] = t191 * t351;
  dv[205] = t190 * t352;
  dv[206] = -8.5500000000000011E-6 * t55;
  dv[207] = -0.0003363 * t55;
  dv[208] = -0.0017356499999999998 * t55;
  dv[209] = 1.1636 * t2 * t220 * t343;
  dv[210] = t45_tmp;
  dv[211] =
      1.1636 * t9 * t220 * (((((t49 + t50) - t67) - t68) + t124) + -t99_tmp);
  dv[212] = t280 * t347;
  dv[213] = -t348 * t329_tmp;
  dv[214] = t3 * t474;
  dv[215] = -0.093474385964912282 * t55;
  dv[216] = t111_tmp * t474;
  dv[217] = t3 * t478;
  dv[218] = t483;
  dv[219] = (0.0 * t190 + -1.0E-6 * t255) + 0.008147 * t376_tmp;
  dv[220] = (-0.0005 * t190 + 0.000631 * t255) + -1.0E-6 * t376_tmp;
  dv[221] = (0.008316 * t190 + -0.0005 * t255) + 0.0 * t376_tmp;
  dv[222] = t49;
  dv[223] = t124_tmp * t478;
  dv[224] = t3 * t483;
  dv[225] = t8 * t256 + t15 * t377;
  dv[226] = (t50 + -t99_tmp) + t474;
  dv[227] = (t46 + t102_tmp) + t478;
  dv[228] = t50;
  dv[229] = t173 * t473;
  dv[230] = t190 * t473;
  dv[231] = 2.0;
  dv[232] = t534;
  t115 =
      ((((((t45_tmp + t82) + t104_tmp) + t104_tmp) + -t128) + -t135) + -t188) +
      -t240;
  dv[233] = -t9 * t10 * t115;
  dv[234] = t534 * t534;
  dv[235] = t124_tmp * t115;
  dv[236] = t568;
  dv[237] = t5;
  dv[238] = t12;
  dv[239] = t3 * t568;
  dv[240] = t3 * t5;
  t115 = 0.0 * t377_tmp;
  t57 = (-(0.000399 * t192) + 0.000256 * t256) + t115;
  dv[241] = -t255 * t57;
  dv[242] = t329_tmp * t57;
  dv[243] = ((t82 + t104_tmp) + -t135) + t12;
  dv[244] = t255 * t12;
  dv[245] = -t12 * t329_tmp;
  t56 = (-t206 + t264) + 0.001596 * t377_tmp;
  dv[246] = t376 * t56;
  t115 += -t212 + t268;
  dv[247] = t122 * t115;
  dv[248] = (0.0 * t256 + 0.001641 * t377) + 0.0 * t55;
  dv[249] = (-0.000278 * t256 + 0.0 * t377) + 0.00041 * t55;
  dv[250] = (0.001641 * t256 + 0.0 * t377) + -0.000278 * t55;
  dv[251] = t67;
  dv[252] = (t112_tmp * t349 + t174 * t347) + t192 * t348;
  dv[253] = t68;
  dv[254] = t7;
  dv[255] = (((-t244 + t276) + 0.1059 * (-t14 * t377_tmp)) + t406) +
            0.060416999999999992 * t55;
  dv[256] = (t190 * t349 + t255 * t348) + t347 * t376_tmp;
  dv[257] = t8;
  dv[258] = t81;
  dv[259] = t82;
  dv[260] = t83;
  dv[261] = (-t192 * t57 + t377_tmp * t56) + t256 * t115;
  dv[262] = t9;
  dv[263] = -0.015764;
  dv[264] = t99_tmp;
  ft_1(dv, M);
}

//
// File trailer for kinova_M_gripper.cpp
//
// [EOF]
//
