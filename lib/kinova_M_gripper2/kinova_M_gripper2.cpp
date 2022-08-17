//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: kinova_M_gripper2.cpp
//
// MATLAB Coder version            : 5.2
// C/C++ source code generated on  : 17-Aug-2022 16:26:00
//

// Include Files
#include "kinova_M_gripper2.h"
#include <math.h>
#include <string.h>

// Function Declarations
static void ft_1(const double ct[266], double M[49]);

static void ft_2(const double ct[381], double M[49]);

// Function Definitions
//
// Arguments    : const double ct[266]
//                double M[49]
// Return Type  : void
//
static void ft_1(const double ct[266], double M[49])
{
  double dv[381];
  double b_t1106_tmp;
  double b_t651_tmp;
  double b_t710_tmp;
  double b_t806_tmp;
  double c_t806_tmp;
  double t1067;
  double t1075;
  double t1106;
  double t1106_tmp;
  double t1112;
  double t1120;
  double t431;
  double t445;
  double t446;
  double t447;
  double t458;
  double t459_tmp;
  double t462;
  double t469;
  double t472;
  double t473;
  double t473_tmp;
  double t544;
  double t546;
  double t547;
  double t555;
  double t556;
  double t557;
  double t564;
  double t566;
  double t566_tmp;
  double t566_tmp_tmp;
  double t568;
  double t568_tmp;
  double t569;
  double t571;
  double t577;
  double t579;
  double t580;
  double t584;
  double t586;
  double t587;
  double t590;
  double t619;
  double t621;
  double t628;
  double t636;
  double t641;
  double t642;
  double t651;
  double t651_tmp;
  double t658;
  double t659;
  double t664;
  double t665;
  double t668;
  double t670;
  double t674;
  double t675;
  double t676;
  double t680;
  double t685;
  double t690;
  double t691;
  double t697;
  double t698;
  double t703;
  double t709;
  double t710;
  double t710_tmp;
  double t727;
  double t728;
  double t732;
  double t735;
  double t736;
  double t736_tmp;
  double t740;
  double t740_tmp;
  double t741;
  double t743;
  double t745;
  double t746;
  double t747;
  double t748;
  double t767;
  double t767_tmp;
  double t770;
  double t779;
  double t785;
  double t785_tmp;
  double t790;
  double t795;
  double t802;
  double t804;
  double t806;
  double t806_tmp;
  double t806_tmp_tmp;
  double t808;
  double t814;
  double t817;
  double t818;
  double t820;
  double t824;
  double t826;
  double t828;
  double t830;
  double t842;
  double t843;
  double t846;
  double t847;
  double t848;
  double t849;
  double t854;
  double t875;
  double t883;
  double t893;
  double t898;
  double t898_tmp;
  double t902;
  double t902_tmp;
  double t909;
  double t910;
  double t923;
  double t956;
  t458 = 0.001641 * ct[194];
  t459_tmp = 0.0 * ct[194];
  t462 = 1.0E-6 * ct[194];
  t469 = ct[47] * ct[194];
  t544 = ct[104] * ct[235];
  t546 = (ct[103] + ct[108]) + ct[120];
  t547 = (ct[105] + ct[109]) + ct[117];
  t566_tmp_tmp = ct[42] - ct[78];
  t727 = 0.0 * t566_tmp_tmp;
  t566_tmp = (-ct[84] + ct[114]) + t727;
  t566 = -ct[31] * ct[34] * t566_tmp;
  t568_tmp = ct[53] + ct[251];
  t568 = t568_tmp + ct[232];
  t735 = ct[36] + ct[245];
  t569 = t735 + ct[235];
  t636 = ct[106] * ct[240];
  t651_tmp = ct[45] - ct[93];
  b_t651_tmp = (-ct[85] + ct[116]) + t727;
  t651 = t651_tmp * b_t651_tmp;
  t849 = (ct[39] + ct[264]) + ct[62];
  t659 = t849 + ct[257];
  t664 = ct[194] * ct[239];
  t790 = (((ct[102] + ct[118]) + ct[149]) + ct[200]) + ct[214];
  t806_tmp = ct[90] + ct[44] * t566_tmp_tmp;
  b_t806_tmp = ct[43] - ct[80];
  t806_tmp_tmp = ct[92] + ct[47] * b_t806_tmp;
  c_t806_tmp = (-ct[164] + ct[219]) + 0.0003363 * t806_tmp_tmp;
  t806 = t806_tmp * c_t806_tmp;
  t431 = ct[81] + ct[145];
  t472 = 0.1059 * t469;
  t473_tmp = ct[79] - ct[146];
  t473 = -0.009432 * t473_tmp;
  t555 = (ct[71] + ct[128]) + ct[156];
  t556 = (ct[72] + ct[129]) + ct[158];
  t557 = (ct[73] + ct[130]) + ct[160];
  t564 = ct[122] + t469;
  t586 = ct[249] + t568;
  t587 = ct[238] + t569;
  t658 = ct[175] + ct[104] * ct[232];
  t727 = (ct[52] + ct[82]) + ct[87];
  t665 = ((t727 + ct[101]) + ct[141]) + ct[147];
  t469 = (ct[60] + ct[74]) + ct[94];
  t668 = ((t469 + ct[97]) + ct[131]) + ct[166];
  t854 = ct[38] + ct[246];
  t670 = t854 + t659;
  t690 = (ct[179] + ct[186]) + ct[191];
  t691 = (ct[180] + ct[183]) + ct[188];
  t710_tmp = ct[31] * ct[262];
  b_t710_tmp = ct[31] * ct[69];
  t710 = t710_tmp * ct[232] + b_t710_tmp * ct[235];
  t736_tmp = (ct[111] - t458) + 0.0 * t806_tmp;
  t736 = b_t806_tmp * t736_tmp;
  t740_tmp = (ct[113] - t459_tmp) + -0.000278 * t806_tmp;
  t740 = t651_tmp * t740_tmp;
  t748 = (ct[193] + ct[212]) + ct[217];
  t785_tmp = (ct[115] - t459_tmp) + 0.001641 * t806_tmp;
  t785 = t473_tmp * t785_tmp;
  t795 = (ct[213] + ct[121] * ct[172]) + ct[237];
  t804 = (((t727 + ct[119]) + ct[148]) + t462) + ct[210];
  t808 = ((((ct[88] + ct[98]) + ct[142]) + ct[161]) + -ct[200]) + ct[209];
  t883 = (ct[77] * ct[240] + ct[107] * ct[241]) + -ct[239] * b_t806_tmp;
  t898_tmp = (-ct[83] + ct[112]) + 0.001596 * t566_tmp_tmp;
  t898 = (-ct[75] * t566_tmp + t566_tmp_tmp * t898_tmp) + ct[106] * b_t651_tmp;
  t1106_tmp = (-ct[163] + ct[218]) + 8.5500000000000011E-6 * t806_tmp_tmp;
  b_t1106_tmp = (-ct[165] + ct[220]) + 0.0017356499999999998 * t806_tmp_tmp;
  t1106 = (-ct[107] * c_t806_tmp + ct[195] * t1106_tmp) +
          t806_tmp_tmp * b_t1106_tmp;
  t445 = 1.0E-6 * t431;
  t446 = ct[258] * t431;
  t447 = ct[47] * t431;
  t571 = ct[124] + -(ct[194] * ct[258]);
  t579 = 0.060416999999999992 * t564;
  t580 = 0.1815 * t564;
  t628 = ct[75] * t556;
  t641 = 0.093474385964912282 * t564;
  t642 = ct[106] * t557;
  t680 = ct[244] + t670;
  t685 = t710_tmp * t670;
  t697 = ct[262] * t690;
  t698 = ct[69] * t691;
  t727 = (ct[37] + ct[263]) + ct[61];
  t703 = t727 + t665;
  t875 = (ct[35] + ct[48]) + ct[54];
  t709 = t875 + t668;
  t743 = (ct[192] + ct[76] * ct[169]) + -(ct[67] * ct[170]);
  t745 = (ct[185] + -(ct[66] * ct[169])) + ct[75] * ct[170];
  t746 = (ct[184] + ct[76] * ct[171]) + -(ct[67] * ct[173]);
  t747 = (ct[187] + -(ct[66] * ct[171])) + ct[75] * ct[173];
  t767_tmp = ct[31] * ct[34];
  t767 = t767_tmp * t748;
  t779 = ct[77] * t748;
  t802 = t767_tmp * t795;
  t818 = ct[77] * t795;
  t824 = ct[67] * t804;
  t826 = t727 + t804;
  t828 = t849 + t808;
  t893 = t767_tmp * t883;
  t902_tmp = ((ct[119] + ct[148]) + t462) + ct[210];
  t902 = ct[106] * ct[257] + -ct[77] * t902_tmp;
  t909 = ct[77] * t883;
  t1067 = (ct[106] * t740_tmp + -ct[194] * t736_tmp) + t806_tmp * t785_tmp;
  t1112 = t767_tmp * t1106;
  t1120 = ct[77] * t1106;
  t577 = ct[151] + t447;
  t584 = 1.0E-6 * t571;
  t674 = (ct[155] + 0.001641 * t431) + -0.0 * t473_tmp;
  t675 = (ct[157] + 0.0 * t431) + 0.000278 * t473_tmp;
  t676 = (ct[159] + 0.0 * t431) + -0.001641 * t473_tmp;
  t727 = t735 + t703;
  t741 = t568_tmp + t709;
  t770 = ct[69] * t568 + -(ct[262] * t569);
  t814 = (((t469 + ct[150]) + ct[167]) + t445) + t473;
  t817 = ct[248] + t767_tmp * t665;
  t820 = ct[247] + t767_tmp * t668;
  t830 = ct[104] * t826;
  t842 = t854 + t828;
  t843 = t735 + t826;
  t910 = (ct[67] * t556 + ct[121] * t555) + t557 * t651_tmp;
  t923 = ((ct[215] + ct[236]) + -0.0040007017543859649 * (ct[123] + ct[202])) +
         -9.8596491228070173E-5 * (ct[125] + -ct[201]);
  t956 = (ct[240] * t651_tmp + t431 * ct[239]) + -ct[241] * t473_tmp;
  t1075 = t710_tmp * t1067;
  t590 = 0.060416999999999992 * t577;
  t619 = 8.5500000000000011E-6 * t577;
  t621 = 0.0017356499999999998 * t577;
  t728 = ct[106] * t675;
  t732 = ct[262] * t727;
  t735 = ct[238] + t727;
  t727 = ct[249] + t741;
  t469 = t875 + t814;
  t846 =
      (ct[221] + 8.5500000000000011E-6 * t564) + 0.0016729499999999999 * t571;
  t847 = (ct[223] + 0.0003363 * t564) + 8.5500000000000011E-6 * t571;
  t848 =
      (ct[224] + 0.0017356499999999998 * t564) + 8.5500000000000011E-6 * t571;
  t849 = ct[262] * t843;
  t569 = ct[244] + t842;
  t854 = t710_tmp * t842;
  t875 = (-(t767_tmp * t556) + ct[68] * t555) + ct[77] * t557;
  dv[0] = 0.001596;
  dv[1] = 0.000587;
  dv[2] = 0.0;
  dv[3] = 3.0E-6;
  dv[4] = 0.0;
  dv[5] = 0.0;
  dv[6] = 3.0E-6;
  dv[7] = 0.001072;
  dv[8] = -0.000278;
  dv[9] = 0.000118;
  dv[10] = 0.001409;
  dv[11] = 0.001641;
  dv[12] = 0.000609;
  dv[13] = -2.3E-5;
  dv[14] = -0.00965;
  dv[15] = 0.1059;
  dv[16] = 1.377;
  dv[17] = 1.1636;
  dv[18] = 1.1636;
  dv[19] = 0.93;
  dv[20] = 0.678;
  dv[21] = 0.678;
  dv[22] = ct[31];
  dv[23] = t564 * t923;
  dv[24] = t577 * t923;
  dv[25] = (ct[104] * ct[254] + b_t710_tmp * t743) + t710_tmp * t746;
  dv[26] = (ct[104] * ct[255] + b_t710_tmp * t745) + t710_tmp * t747;
  t556 = 0.678 * ct[69] * t680;
  dv[27] = t556 * t902;
  dv[28] =
      -0.678 * ct[262] * t680 *
      (ct[77] * (((ct[150] + ct[167]) + t445) + t473) + ct[257] * t651_tmp);
  t462 = (-t736 + ct[77] * t740_tmp) + ct[107] * t785_tmp;
  dv[29] = -ct[69] * t462;
  dv[30] = t710_tmp * t462;
  dv[31] = -ct[75] * t462;
  dv[32] = -ct[106] * t462;
  t568 = t685 - t830;
  dv[33] = t556 * t568;
  dv[34] = t806_tmp * t462;
  dv[35] = t1067;
  dv[36] = -0.015764;
  t556 = (t740 - t785) + t431 * t736_tmp;
  dv[37] = -ct[69] * t556;
  dv[38] = ct[69] * t1067;
  dv[39] = t1075;
  dv[40] = t710_tmp * t556;
  dv[41] = -t1075;
  dv[42] = -ct[75] * t556;
  dv[43] = ct[75] * t1067;
  dv[44] = ct[106] * t1067;
  dv[45] = ct[33];
  dv[46] = -ct[106] * t556;
  dv[47] = ct[34];
  dv[48] = t806_tmp * t556;
  dv[49] = -t1067 * t806_tmp;
  dv[50] = t1106;
  dv[51] = ct[104] * t1106;
  dv[52] = ct[35];
  dv[53] = t1112;
  dv[54] = -t1112;
  t556 = (-t628 + t642) + t555 * t566_tmp_tmp;
  dv[55] = ct[69] * t898 + -ct[262] * t556;
  dv[56] = ct[36];
  dv[57] = t1120;
  dv[58] = -t1120;
  dv[59] = ct[107] * t1106;
  dv[60] = ct[37];
  dv[61] = ct[38];
  dv[62] = -t1106 * t806_tmp_tmp;
  dv[63] = t1106 * t806_tmp_tmp;
  dv[64] = ct[39];
  dv[65] = 0.678 * t902 * t568;
  t462 = (-t806 + t571 * t1106_tmp) + t564 * b_t1106_tmp;
  dv[66] = -ct[104] * t462;
  dv[67] = t767_tmp * t462;
  dv[68] = ct[77] * t462;
  dv[69] = -ct[107] * t462;
  dv[70] = t806_tmp_tmp * t462;
  t462 = (-ct[216] + ct[230]) + ct[172] * t566_tmp_tmp;
  dv[71] = (t767_tmp * t462 + ct[75] * t898) + -ct[67] * t556;
  dv[72] = (ct[77] * t462 + ct[106] * t898) + t651_tmp * t556;
  memcpy(&dv[73], &ct[41], 9U * sizeof(double));
  dv[82] = ct[50];
  dv[83] = ct[52];
  dv[84] = ct[53];
  dv[85] = ct[54];
  dv[86] = ct[55];
  dv[87] = ct[56];
  dv[88] = ct[57];
  dv[89] = ct[58];
  dv[90] = ct[60];
  dv[91] = ct[61];
  dv[92] = ct[62];
  dv[93] = ct[63];
  dv[94] = ct[64];
  dv[95] = ct[65];
  dv[96] = ct[67];
  dv[97] = ct[68];
  dv[98] = ct[69];
  dv[99] = ct[70];
  dv[100] = ct[74];
  dv[101] = ct[75];
  dv[102] = ct[77];
  dv[103] = ct[78];
  dv[104] = ct[79];
  dv[105] = ct[80];
  dv[106] = ct[82];
  dv[107] = ct[83];
  dv[108] = ct[84];
  dv[109] = ct[85];
  dv[110] = ct[87];
  dv[111] = ct[88];
  dv[112] = 1.425;
  dv[113] = ct[90];
  dv[114] = ct[92];
  dv[115] = ct[93];
  dv[116] = ct[94];
  dv[117] = ct[95];
  dv[118] = ct[96];
  dv[119] = ct[99];
  dv[120] = ct[104];
  dv[121] = ct[106];
  dv[122] = ct[107];
  dv[123] = ct[110];
  dv[124] = ct[111];
  dv[125] = ct[112];
  dv[126] = ct[113];
  dv[127] = ct[114];
  dv[128] = ct[115];
  dv[129] = ct[116];
  dv[130] = ct[119];
  dv[131] = ct[121];
  dv[132] = ct[127];
  dv[133] = ct[144];
  dv[134] = ct[146];
  dv[135] = ct[150];
  dv[136] = ct[154];
  dv[137] = ct[162];
  dv[138] = ct[163];
  dv[139] = ct[165];
  dv[140] = ct[167];
  dv[141] = ct[168];
  dv[142] = ct[172];
  dv[143] = ct[176];
  dv[144] = ct[177];
  dv[145] = ct[178];
  dv[146] = ct[181];
  dv[147] = t431;
  dv[148] = ct[196];
  dv[149] = ct[197];
  dv[150] = t445;
  dv[151] = t446;
  dv[152] = ct[198];
  dv[153] = 0.1059 * t447;
  dv[154] = t458;
  dv[155] = t459_tmp;
  dv[156] = t459_tmp;
  dv[157] = 0.00965 * t473_tmp;
  dv[158] = -ct[199];
  dv[159] = t472;
  dv[160] = t473;
  dv[161] = ct[216];
  dv[162] = ct[218];
  dv[163] = ct[220];
  dv[164] = ct[227];
  dv[165] = ct[228];
  dv[166] = ct[229];
  dv[167] = ct[230];
  dv[168] = ct[231];
  dv[169] = ct[234];
  dv[170] = ct[238];
  dv[171] = ct[241];
  dv[172] = t544;
  dv[173] = ct[244];
  dv[174] = t555;
  dv[175] = ct[245];
  dv[176] = t564;
  dv[177] = t566;
  dv[178] = ct[246];
  dv[179] = t571;
  dv[180] = t577;
  dv[181] = t580;
  dv[182] = t586;
  dv[183] = t587;
  dv[184] = ct[249];
  dv[185] = t590;
  dv[186] = 0.1815 * t577;
  dv[187] = -t580;
  t556 = t446 + ct[47] * t651_tmp;
  dv[188] = -1.0E-6 * t556;
  dv[189] = ct[250];
  dv[190] = ct[251];
  dv[191] = ct[250] * ct[250];
  dv[192] = -t590;
  dv[193] = 1.0E-6 * t556;
  dv[194] = ct[254];
  dv[195] = ct[255];
  dv[196] = t619;
  dv[197] = t621;
  dv[198] = t628;
  dv[199] = 2.0;
  dv[200] = t767_tmp * ct[254];
  dv[201] = t767_tmp * ct[255];
  dv[202] = ct[257];
  dv[203] = t636;
  dv[204] = t641;
  dv[205] = t642;
  dv[206] = -t641;
  dv[207] = t651;
  dv[208] = -(0.093474385964912282 * t577);
  dv[209] = t658;
  dv[210] = t664;
  dv[211] = t676;
  dv[212] = t680;
  dv[213] = ct[67] * t659;
  t462 = 1.1636 * ct[69] * ct[174];
  dv[214] = -(t462 * t587);
  t568 = 1.1636 * ct[262] * ct[174];
  dv[215] = -(t568 * t586);
  dv[216] = b_t710_tmp * t670;
  dv[217] = t685;
  dv[218] = t680 * t680;
  dv[219] = ct[67] * t665;
  dv[220] = t697;
  dv[221] = t698;
  dv[222] = ct[258];
  dv[223] = ct[75] * t668;
  dv[224] = ct[77] * t675;
  dv[225] = -9.8596491228070173E-5 * (ct[208] + ct[261] * t571);
  dv[226] = t710;
  dv[227] = -9.8596491228070173E-5 * (ct[261] * t556 + ct[51] * t473_tmp);
  dv[228] = 0.0040007017543859649 * (-ct[261] * t473_tmp + ct[51] * t556);
  dv[229] = -0.0040007017543859649 * (ct[211] + ct[51] * t571);
  dv[230] = ct[69] * t547 + ct[242] * ct[262];
  dv[231] = ct[69] * ct[243] + ct[262] * t546;
  dv[232] = t728;
  dv[233] = ct[107] * t676;
  dv[234] = t732;
  dv[235] = -t674 * b_t806_tmp;
  dv[236] = -t728;
  dv[237] = t735;
  dv[238] = t736;
  dv[239] = -t732;
  dv[240] = t740;
  dv[241] = t748;
  dv[242] = t675 * t651_tmp;
  dv[243] = -(t568 * t658);
  dv[244] = ct[69] * t741;
  dv[245] = ct[69] * t747;
  dv[246] = ct[104] * t748;
  dv[247] = ct[262] * t743;
  dv[248] = t727;
  dv[249] = -(ct[262] * t745);
  dv[250] = -(ct[69] * t746);
  dv[251] = t767;
  t568 = ct[177] - t544;
  dv[252] = t462 * t568;
  dv[253] = -t767;
  dv[254] = ct[259];
  dv[255] = t770;
  dv[256] = -(ct[67] * t743);
  dv[257] = -(ct[67] * t745);
  dv[258] = ct[75] * t746;
  dv[259] = ct[75] * t747;
  dv[260] = t779;
  dv[261] = ct[260];
  dv[262] = t431 * t674;
  dv[263] = -t779;
  dv[264] = -t676 * t473_tmp;
  dv[265] = ct[194] * t674;
  dv[266] = t785;
  dv[267] = -t676 * t806_tmp;
  dv[268] = t790;
  dv[269] = t651_tmp * t902_tmp;
  dv[270] = t795;
  dv[271] = ct[104] * t795;
  dv[272] = t473_tmp * c_t806_tmp;
  dv[273] = 1.1636 * t586 * t658;
  dv[274] = t802;
  dv[275] = t806;
  dv[276] = -t802;
  dv[277] = (ct[189] + b_t710_tmp * ct[242]) + -(t710_tmp * t547);
  dv[278] = (ct[190] + b_t710_tmp * t546) + -(t710_tmp * ct[243]);
  dv[279] = -1.1636 * t587 * t568;
  dv[280] = t817;
  dv[281] = t818;
  dv[282] = t820;
  dv[283] = -t818;
  dv[284] = -(t767_tmp * t814);
  dv[285] = t824;
  dv[286] = -t824;
  dv[287] = ct[75] * t814;
  dv[288] = ct[106] * t808;
  dv[289] = t830;
  dv[290] = b_t710_tmp * t826;
  dv[291] = -t790 * t473_tmp;
  dv[292] = ct[252] + ct[104] * t703;
  dv[293] = -t577 * b_t1106_tmp;
  dv[294] = ct[104] * t469;
  dv[295] = t808 * t651_tmp;
  dv[296] = -t790 * t806_tmp;
  dv[297] = t556 * t1106_tmp;
  dv[298] = t710_tmp * t469;
  dv[299] = t846;
  dv[300] = t847;
  dv[301] = t848;
  dv[302] = t849;
  dv[303] = ct[238] + t843;
  dv[304] = t569;
  dv[305] = ct[67] * t828;
  dv[306] = b_t710_tmp * t842;
  dv[307] = t854;
  dv[308] = -t849;
  dv[309] = ct[253] + ct[104] * t709;
  dv[310] = t569 * t569;
  dv[311] = ct[75] * t828;
  dv[312] = -t854;
  dv[313] = t568_tmp + t469;
  t462 = 0.93 * ct[69] * ct[250];
  dv[314] = t462 * t735;
  t568 = 0.93 * ct[262] * ct[250];
  dv[315] = t568 * t727;
  dv[316] = ct[107] * t847;
  t469 = (t566 + ct[68] * t898_tmp) + ct[77] * b_t651_tmp;
  dv[317] = -ct[69] * t469;
  t849 = 8.5500000000000011E-6 * t556;
  t727 = (-(0.0003363 * t577) + ct[10] * 1.425 * 2.0 * t473_tmp) + t849;
  dv[318] = -ct[107] * t727;
  dv[319] = t875;
  dv[320] = t710_tmp * t469;
  dv[321] = ct[262] * t875;
  dv[322] = b_t710_tmp * t875;
  dv[323] = -ct[75] * t469;
  dv[324] = ct[67] * t875;
  dv[325] = t697 + -t698;
  dv[326] = t883;
  dv[327] = -ct[106] * t469;
  dv[328] = -t847 * t473_tmp;
  dv[329] = ct[195] * t846;
  dv[330] = ct[104] * t883;
  dv[331] = t473_tmp * t727;
  dv[332] = -t847 * t806_tmp;
  dv[333] = -t848 * t806_tmp_tmp;
  dv[334] = t893;
  dv[335] = ct[195] * ((-t619 + 8.5500000000000011E-6 * t473_tmp) +
                       0.0016729499999999999 * t556);
  dv[336] = t806_tmp * t727;
  t556 = (-t621 + 0.0003363 * t473_tmp) + t849;
  dv[337] = t806_tmp_tmp * t556;
  dv[338] = -t893;
  dv[339] = ct[262];
  dv[340] = -t875 * t651_tmp;
  dv[341] = t902;
  t469 = (t651 + ct[121] * t898_tmp) + ct[67] * t566_tmp;
  dv[342] = -ct[69] * t469;
  dv[343] = t710_tmp * t898;
  dv[344] = t909;
  dv[345] = ct[263];
  dv[346] = t910;
  dv[347] = t710_tmp * t469;
  dv[348] = -(t462 * t817);
  dv[349] = -t909;
  dv[350] = b_t710_tmp * t703 + t710_tmp * t709;
  dv[351] = (((ct[127] + t472) + ct[207]) + -t579) + -t584;
  dv[352] = ct[262] * t910;
  dv[353] = -(t568 * t820);
  dv[354] = ct[264];
  dv[355] = b_t710_tmp * t910;
  dv[356] = ct[107] * t883;
  dv[357] = -ct[75] * t469;
  dv[358] = ct[67] * t910;
  dv[359] = ct[265];
  dv[360] = t564 * t848;
  dv[361] = -t564 * t556;
  dv[362] = -ct[106] * t469;
  dv[363] = 1.1636 * t710 * t770;
  t556 = (((-ct[127] - t472) + t579) + t584) + -0.00965 * t806_tmp;
  dv[364] = -ct[107] * t556;
  dv[365] = -t910 * t651_tmp;
  dv[366] = ct[107] * t556;
  dv[367] = t956;
  dv[368] = ct[75] * t659 + -(t767_tmp * t804);
  dv[369] = ct[104] * t956;
  t462 = (t636 - t664) + ct[241] * t806_tmp;
  dv[370] = -ct[104] * t462;
  dv[371] = t767_tmp * t956;
  dv[372] = t767_tmp * t462;
  dv[373] = t473_tmp * t556;
  dv[374] = (ct[231] + b_t710_tmp * t690) + t710_tmp * t691;
  dv[375] = (ct[98] + ct[161]) + t923;
  dv[376] = ct[77] * t956;
  dv[377] = ct[77] * t462;
  dv[378] = ct[107] * t956;
  dv[379] = -ct[107] * t462;
  dv[380] = (ct[234] + -(ct[67] * t690)) + ct[75] * t691;
  ft_2(dv, M);
}

//
// Arguments    : const double ct[381]
//                double M[49]
// Return Type  : void
//
static void ft_2(const double ct[381], double M[49])
{
  double a;
  double b_ct_tmp;
  double b_t1212_tmp;
  double b_t1339_tmp;
  double b_t1346_tmp;
  double b_t973_tmp;
  double b_t973_tmp_tmp;
  double c_ct_tmp;
  double c_t1212_tmp;
  double c_t973_tmp_tmp;
  double ct_tmp;
  double d_ct_tmp;
  double e_ct_tmp;
  double f_ct_tmp;
  double g_ct_tmp;
  double h_ct_tmp;
  double i_ct_tmp;
  double j_ct_tmp;
  double k_ct_tmp;
  double t0_f143_tmp;
  double t0_f144_tmp;
  double t1003;
  double t1004;
  double t1006;
  double t1011;
  double t1012;
  double t1016;
  double t1018;
  double t1019;
  double t1022;
  double t1026;
  double t1029;
  double t1039;
  double t1040;
  double t1043;
  double t1044;
  double t1047;
  double t1050;
  double t1057;
  double t1068;
  double t1094_tmp;
  double t1095;
  double t1098;
  double t1101_tmp;
  double t1102;
  double t1105;
  double t1107;
  double t1108_tmp;
  double t1111;
  double t1114;
  double t1117;
  double t1121;
  double t1124;
  double t1124_tmp;
  double t1125_tmp;
  double t1130;
  double t1134;
  double t1138;
  double t1138_tmp;
  double t1141;
  double t1149;
  double t1151;
  double t1164;
  double t1166;
  double t1172;
  double t1180;
  double t1183;
  double t1191;
  double t1202;
  double t1204;
  double t1205;
  double t1206_tmp;
  double t1207_tmp;
  double t1208_tmp;
  double t1210;
  double t1212_tmp;
  double t1219;
  double t1221;
  double t1227;
  double t1232_tmp;
  double t1236_tmp;
  double t1243;
  double t1244;
  double t1247;
  double t1247_tmp;
  double t1248;
  double t1251_tmp;
  double t1256;
  double t1256_tmp;
  double t1272;
  double t1275_tmp;
  double t1279;
  double t1285;
  double t1290;
  double t1292;
  double t1293;
  double t1294;
  double t1295;
  double t1297;
  double t1298;
  double t1299;
  double t1301;
  double t1321;
  double t1321_tmp;
  double t1323;
  double t1331;
  double t1332;
  double t1333;
  double t1335_tmp;
  double t1336;
  double t1337;
  double t1339_tmp;
  double t1341_tmp;
  double t1343;
  double t1346_tmp;
  double t1347_tmp;
  double t1349;
  double t1353_tmp;
  double t1358;
  double t1368;
  double t1371;
  double t1375;
  double t1378;
  double t1379;
  double t1379_tmp;
  double t1382;
  double t1384;
  double t1385;
  double t1387;
  double t1388;
  double t1389;
  double t1389_tmp;
  double t1422;
  double t1428;
  double t1439;
  double t1442;
  double t1449;
  double t1455;
  double t1459;
  double t866;
  double t946;
  double t950;
  double t951;
  double t963;
  double t973_tmp;
  double t973_tmp_tmp;
  double t982;
  double t985;
  double t986;
  double t987;
  double t987_tmp;
  double t988;
  double t993;
  double t995;
  double t995_tmp;
  t950 = ct[247] + ct[250];
  t951 = ct[245] + ct[249];
  t973_tmp_tmp = ct[104] - ct[134];
  t973_tmp = ct[14] * t973_tmp_tmp;
  b_t973_tmp_tmp = ct[77] - ct[115];
  t1180 = ct[15] * ct[222] * b_t973_tmp_tmp;
  c_t973_tmp_tmp = ct[74] - ct[103];
  b_t973_tmp = ct[113] + ct[76] * c_t973_tmp_tmp;
  t1166 = (((-ct[153] + ct[185]) + ct[188]) + t973_tmp) + t1180;
  t1164 = ((((ct[137] - ct[153]) + ct[185]) + ct[188]) + t973_tmp) + t1180;
  t985 = 0.93 * ct[237] * ct[280];
  t987_tmp = 0.678 * ct[98] * ct[212];
  t987 = t987_tmp * ct[303];
  t988 = ct[111] + ct[375];
  t993 = 0.93 * ct[248] * ct[282];
  t1004 = 0.93 * ct[237] * ct[292];
  t1016 = 0.93 * ct[248] * ct[309];
  t1039 = (ct[200] + ct[256]) + ct[258];
  t1040 = (ct[201] + ct[257]) + ct[259];
  t1043 = (ct[224] + ct[233]) + ct[235];
  t1068 = (ct[242] + ct[262]) + ct[264];
  t1101_tmp = (ct[232] - ct[265]) + ct[211] * b_t973_tmp;
  t1107 = 0.678 * ct[303] * ct[368];
  t1108_tmp = ct[219] - ct[223];
  t1124_tmp = ct[217] - ct[289];
  t1124 = -0.678 * ct[303] * t1124_tmp;
  t1125_tmp = ct[234] - ct[244];
  t1172 = (ct[272] + ct[293]) + ct[297];
  t1205 = (ct[271] + ct[347]) + ct[355];
  t1206_tmp = ct[364] + ct[268] * b_t973_tmp;
  t1095 = ((ct[135] + ct[140]) + ct[150]) + ct[160];
  t1212_tmp = ct[269] + ct[121] * t1095;
  b_t1212_tmp = ct[285] - ct[287];
  c_t1212_tmp = 0.678 * b_t1212_tmp;
  t866 = ct[184] + ct[313];
  t946 = ct[130] + ct[351];
  t963 = ct[213] + ct[284];
  t982 = ct[216] + ct[294];
  t1006 = ((ct[64] + ct[354]) + ct[92]) + t988;
  t1044 = ct[339] * t1043;
  t1047 = ct[290] + ct[298];
  t1050 = ct[96] * t1043;
  t1057 = ((ct[186] + ct[208]) + ct[227]) + ct[228];
  t1098 = ct[291] + ct[122] * t1166;
  t1111 = ct[295] + -ct[102] * t1164;
  t1138_tmp = ct[22] * ct[47];
  t1029 = (((((((ct[81] - ct[100]) - ct[116]) + ct[137]) - ct[153]) + ct[185]) +
            ct[188]) +
           t973_tmp) +
          t1180;
  t1138 = ct[305] + t1138_tmp * t1029;
  t1191 = (ct[246] + ct[320]) + ct[322];
  t1219 = (ct[318] + ct[335]) + ct[337];
  t1244 = (ct[332] + ct[360]) + ct[179] * ct[299];
  t1256_tmp = ct[151] + ct[79] * b_t973_tmp_tmp;
  t973_tmp = (-ct[196] + 8.5500000000000011E-6 * t973_tmp_tmp) +
             0.0016729499999999999 * t1256_tmp;
  t1180 =
      (-ct[197] + 0.0003363 * t973_tmp_tmp) + 8.5500000000000011E-6 * t1256_tmp;
  t1256 = (ct[331] + -ct[180] * t1180) + t1256_tmp * t973_tmp;
  t1275_tmp = (-ct[336] + ct[179] * t973_tmp) + ct[176] * t1180;
  t1295 = -ct[339] * t1101_tmp + ct[38];
  t1343 = (ct[372] + -ct[96] * t1101_tmp) + ct[43];
  t1349 = (ct[44] + ct[377]) + b_t973_tmp_tmp * t1101_tmp;
  t1180 = (ct[83] + ct[106]) + ct[110];
  t986 = t1180 + t946;
  t995_tmp = 0.678 * ct[339] * ct[212];
  t995 = t995_tmp * t866;
  t1018 = (ct[61] + ct[178]) + t1006;
  t1094_tmp = ct[102] * t1095 + ct[202] * b_t973_tmp_tmp;
  t1095 = ((((ct[132] + ct[159]) + ct[181]) + ct[206]) + -ct[225]) + ct[229];
  t973_tmp = ct[136] + ct[153];
  t1102 = t973_tmp + t1057;
  t1117 = 0.678 * t866 * t963;
  t1130 = 0.678 * t866 * t982;
  t1207_tmp = 0.678 * ct[339] * ct[304];
  t1221 = ct[339] * t1219;
  t1227 = ct[96] * t1219;
  t1232_tmp = ct[302] - ct[98] * ct[313];
  t1248 = t1044 + ct[29];
  t1251_tmp = ct[22] * ct[339];
  t1293 = ct[339] * t1068 + ct[37];
  t1321_tmp = ct[22] * ct[98];
  t1321 = (ct[330] + t1321_tmp * t1043) + ct[30];
  t1333 = (ct[356] + -t1043 * t973_tmp_tmp) + ct[34];
  t1337 = (ct[369] + t1321_tmp * t1068) + ct[40];
  t1346_tmp = ct[373] - b_t973_tmp * t1166;
  b_t1346_tmp = -ct[121] * t1164 + t946 * b_t973_tmp_tmp;
  t1358 = (ct[378] + -t1068 * t973_tmp_tmp) + ct[48];
  t1166 = (ct[60] + ct[345]) + ct[91];
  t1003 = t1166 + t986;
  t1022 = ct[173] + t1018;
  t1114 = ct[130] + t1095;
  t1121 = ct[135] + t1102;
  t1247_tmp = ct[114] + ct[79] * (ct[75] - ct[105]);
  t1247 = ct[24] + -t1057 * t1247_tmp;
  t1379_tmp = (-ct[316] + ct[329]) + ct[301] * t1247_tmp;
  t1379 = -ct[98] * t1379_tmp + t1221;
  t1388 = ct[98] * t1244 + -ct[339] * t1275_tmp;
  t1389_tmp =
      (-(ct[180] * ct[301]) + ct[299] * t1256_tmp) + ct[300] * t973_tmp_tmp;
  t1389 = -ct[98] * t1389_tmp + ct[339] * t1256;
  t1422 = (ct[51] + t1251_tmp * t1379_tmp) + t1321_tmp * t1219;
  t1428 = (ct[59] + b_t973_tmp * t1379_tmp) + -t1219 * t973_tmp_tmp;
  t1439 = (ct[120] * t1172 + t1251_tmp * t1389_tmp) + t1321_tmp * t1256;
  t1442 = (ct[67] + ct[101] * t1244) + -ct[96] * t1275_tmp;
  t1449 = (ct[68] + ct[121] * t1244) + b_t973_tmp_tmp * t1275_tmp;
  t1455 = (ct[122] * t1172 + b_t973_tmp * t1389_tmp) + -t1256 * t973_tmp_tmp;
  t1459 = (ct[70] + ct[176] * t1244) + -ct[180] * t1275_tmp;
  t1183 = ct[56] + ct[175];
  t1011 = t1183 + t1003;
  t1164 = (ct[90] + ct[100]) + ct[116];
  t1256_tmp = (ct[52] + ct[80]) + ct[85];
  t1012 = t1256_tmp +
          (t1164 + (ct[135] + (((t973_tmp + ct[157]) + ct[192]) + ct[193])));
  t1026 = t1022 * t1022;
  t1105 = ct[288] + -(ct[102] * t946);
  t1141 = t1180 + t1114;
  t1202 = ct[96] * t986 + ct[101] * t1029;
  t973_tmp = ((ct[181] + ct[206]) + -ct[225]) + ct[229];
  t1243 = ct[23] + -(t1247_tmp * t973_tmp);
  t1323 = -t1095 * t973_tmp_tmp + t1102 * b_t973_tmp;
  t1335_tmp = ct[339] * 1.425 * t1022;
  t1339_tmp = ct[98] * 1.425 * t1022;
  b_t1339_tmp = ct[122] * t1095 - ct[375] * b_t973_tmp;
  t1341_tmp = ct[122] * t1102 - ct[375] * t973_tmp_tmp;
  t1019 = ct[170] + t1011;
  t1180 = ct[84] + ct[190];
  t1029 = t1180 + t1012;
  t1134 = ct[311] + -(t1138_tmp * t986);
  t946 = t1166 + t1141;
  t1166 = t1256_tmp + (t1164 + t1121);
  t1208_tmp = 0.678 * ct[98] * ct[304];
  t1236_tmp = ct[307] - ct[120] * t1003;
  t1347_tmp = ct[102] * t1121 + t988 * b_t973_tmp_tmp;
  t0_f143_tmp = ct[176] * t1057 - ct[180] * t973_tmp;
  t0_f144_tmp = ct[121] * t1121 + t1114 * b_t973_tmp_tmp;
  t1057 = ct[184] + t1029;
  t1149 = ct[306] + ct[120] * t1012;
  t1151 = t1208_tmp * t1019;
  t1164 = t1183 + t946;
  t1180 += t1166;
  t1204 = t1321_tmp * t1003 + t1251_tmp * t1012;
  t1272 = 0.678 * t1019 * t1206_tmp;
  t1285 = ct[121] * t988 + -(ct[102] * t1114);
  t1290 = 0.678 * t1019 * t1134;
  t1292 = -0.678 * t1019 * t1236_tmp;
  t973_tmp = ((-ct[81] + ct[100]) + ct[116]) + t1121;
  t1298 = ct[96] * t1006 + -(t1138_tmp * t973_tmp);
  t1331 = ct[96] * t1141 + -(ct[101] * t973_tmp);
  t1012 = t1207_tmp * t1057;
  t986 = ct[170] + t1164;
  t1183 = ct[184] + t1180;
  t1279 = 0.678 * t1057 * t1098;
  t1294 = 0.678 * t1057 * t1138;
  t1297 = ct[101] * t1006 + -(t1138_tmp * t1141);
  t1299 = 0.678 * t1057 * t1149;
  t1301 = t1321_tmp * t1018 + ct[120] * t1166;
  t1332 = t1321_tmp * t946 + t1251_tmp * t1166;
  t1353_tmp = t1251_tmp * t1018 - ct[120] * t946;
  t1210 = ct[339] * t1011 + -(ct[98] * t1029);
  t1095 = t1339_tmp * t986;
  t1102 = t1335_tmp * t1183;
  t1368 = 1.425 * t986 * t1243;
  t1371 = 1.425 * t1183 * t1247;
  t1375 = 1.425 * t986 * b_t1339_tmp;
  t1378 = 1.425 * t1183 * t1341_tmp;
  t1382 = 1.425 * t986 * t1297;
  t1384 = -1.425 * t986 * t1353_tmp;
  t1385 = 1.425 * t1183 * t1298;
  t1387 = 1.425 * t1183 * t1301;
  t1336 = ct[339] * t1164 + -(ct[98] * t1180);
  t946 = ct[98] * ((((ct[254] + ct[261]) + ct[45]) + ct[73]) + ct[88]) +
         ct[339] * ((((ct[175] + ct[359]) + ct[56]) + ct[82]) + ct[89]);
  a = ct[144] - ct[172];
  t973_tmp = ((((ct[184] + ct[190]) - ct[254]) - ct[261]) + ct[78]) + ct[84];
  t1180 = (ct[170] + ct[13] * ct[339]) + ct[36] * ct[98];
  t1164 = (ct[184] - ct[13] * ct[98]) + ct[36] * ct[339];
  M[0] =
      ((((((((((((((((((ct[123] + 0.002481) + ct[166]) + ct[241]) + ct[326]) +
                    ct[50]) +
                   ct[17] * (t973_tmp * t973_tmp)) +
                  ct[16] * (t1180 * t1180)) +
                 ct[16] * (t1164 * t1164)) +
                ct[17] * (ct[141] * ct[141])) +
               ct[18] * (ct[182] * ct[182])) +
              ct[18] * (ct[183] * ct[183])) +
             0.93 * (ct[237] * ct[237])) +
            0.93 * (ct[248] * ct[248])) +
           0.678 * (ct[303] * ct[303])) +
          0.678 * (t866 * t866)) +
         0.678 * (t1019 * t1019)) +
        0.678 * (t1057 * t1057)) +
       1.425 * (t986 * t986)) +
      1.425 * (t1183 * t1183);
  t973_tmp = (-ct[107] + ct[125]) + 0.001596 * c_t973_tmp_tmp;
  t1256_tmp = 0.0 * c_t973_tmp_tmp;
  ct_tmp = (ct[177] + ct[97] * t973_tmp) +
           ct[102] * ((-ct[109] + ct[129]) + t1256_tmp);
  b_ct_tmp =
      (-ct[238] + ct[102] * ((ct[126] - ct[155]) + -0.000278 * b_t973_tmp)) +
      ct[122] * ((ct[128] - ct[156]) + 0.001641 * b_t973_tmp);
  c_ct_tmp = ct[95] + ct[99];
  d_ct_tmp = ct[98] * ct_tmp;
  M[1] = (((((((((((((((((((((c_ct_tmp - ct[148]) - ct[149]) + ct[164]) +
                           ct[165]) +
                          ct[214]) +
                         ct[215]) -
                        ct[220]) +
                       ct[221]) +
                      -ct[314]) +
                     -ct[315]) -
                    ct[321]) +
                   -t987) +
                  -t995) -
                 t1044) +
                -t1151) +
               -t1012) -
              t1221) +
             -t1095) +
            -t1102) +
           d_ct_tmp) +
          ct[98] * t1379_tmp) +
         ct[98] * b_ct_tmp;
  e_ct_tmp = (ct[133] + ct[152]) + ct[158];
  M[2] =
      (((((((((((((e_ct_tmp + ct[273]) + ct[279]) + ct[374]) + t1004) + t1016) +
              t1124) +
             t1130) +
            t1191) +
           t1292) +
          t1299) +
         t1321) +
        t1384) +
       t1387) +
      t1422;
  f_ct_tmp = ct[101] * t1379_tmp;
  g_ct_tmp = ct[101] * b_ct_tmp;
  h_ct_tmp = ct[251] - ct[324];
  i_ct_tmp = ct[101] * ct_tmp;
  M[3] =
      (((((((((((((((h_ct_tmp + ct[334]) + t985) + ct[380]) + t993) - t1050) +
                -t1107) +
               ct[53]) +
              -t1117) -
             t1227) +
            -t1290) +
           -t1294) +
          -t1382) +
         -t1385) +
        i_ct_tmp) +
       f_ct_tmp) +
      g_ct_tmp;
  t1044 = t1043 * b_t973_tmp_tmp;
  b_ct_tmp *= ct[121];
  ct_tmp *= ct[121];
  t1043 = ct[319] * b_t973_tmp_tmp;
  j_ct_tmp = t1219 * b_t973_tmp_tmp;
  k_ct_tmp = ct[121] * t1379_tmp;
  t1019 = (((((((ct[260] + ct[344]) + -(0.678 * ct[303] * ct[341])) +
               0.678 * t866 * t1094_tmp) +
              ct[57]) +
             -(0.678 * t1019 * t1105)) +
            0.678 * t1057 * t1111) +
           -(1.425 * t986 * t1285)) +
          1.425 * t1183 * t1347_tmp;
  M[4] =
      (((((t1019 + ct_tmp) + t1043) + t1044) + j_ct_tmp) + k_ct_tmp) + b_ct_tmp;
  M[5] = ((((t1272 + -t1279) + t1333) + t1375) + t1378) + t1428;
  t1221 = ct[63] - ct[180] * t1219;
  t1029 = ct[176] * t1379_tmp;
  M[6] = ((t1221 + -t1368) + -t1371) + t1029;
  t1011 = (-ct[161] + ct[167]) + ct[142] * c_t973_tmp_tmp;
  t1006 = (-ct[275] + ct[179] * ((-ct[138] + ct[162]) +
                                 8.5500000000000011E-6 * t1247_tmp)) +
          ct[176] * ((-ct[139] + ct[163]) + 0.0017356499999999998 * t1247_tmp);
  t1018 = (ct[203] - ct[210]) + ct[171] * b_t973_tmp;
  M[7] = (((((((((((((((((((((c_ct_tmp + ct[164]) + ct[165]) + ct[214]) +
                           ct[215]) +
                          -ct[314]) +
                         -ct[315]) +
                        -t987) +
                       -t995) +
                      -t1151) +
                     -t1012) +
                    -t1095) +
                   -t1102) -
                  ct[98] * ct[145]) -
                 ct[143] * ct[339]) +
                ct[98] * ct[195]) -
               ct[194] * ct[339]) -
              ct[270] * ct[339]) -
             ct[339] * ct[367]) -
            ct[339] * t1172) +
           ct[98] * t1018) +
          ct[98] * t1006) +
         ct[98] * t1011;
  c_ct_tmp = (ct[207] + ct[131] * t973_tmp) +
             ct[96] * ((-ct[108] + ct[127]) + t1256_tmp);
  t1141 = ct[352] - ct[98] * c_ct_tmp;
  M[8] = ((((((((((((((((((((((((ct[98] * ct[231] + ct[230] * ct[339]) +
                                ct[98] * t951) +
                               ct[339] * t950) +
                              ct[55] * ct[98]) +
                             ct[98] * t1295) +
                            ct[339] * t1293) +
                           ct[98] * t1388) +
                          ct[339] * t1389) +
                         ct[17] * (t946 * t946)) +
                        ct[18] * (ct[255] * ct[255])) +
                       0.678 * (t1210 * t1210)) +
                      1.425 * (t1336 * t1336)) +
                     ct[98] * (ct[339] * (ct[87] * ct[98] - ct[86] * ct[339]) +
                               ct[98] * (ct[94] * ct[98] - ct[93] * ct[339]))) +
                    ct[339] * (ct[339] * (ct[86] * ct[98] + ct[87] * ct[339]) +
                               ct[98] * (ct[93] * ct[98] + ct[94] * ct[339]))) +
                   0.93 * (t1125_tmp * t1125_tmp)) +
                  0.678 * (t1232_tmp * t1232_tmp)) +
                 ct[339] * t1141) +
                ct[17] * ct[118] * ct[117]) +
               ct[17] * ct[119] * ct[117]) +
              ct[18] * ct[118] * ct[146]) +
             ct[18] * ct[119] * ct[146]) +
            0.93 * ct[118] * ct[191]) +
           0.93 * ct[119] * ct[191]) +
          0.678 * ct[118] * ct[218]) +
         ((((0.678 * ct[119] * ct[218] + 0.678 * ct[118] * ct[310]) +
            0.678 * ct[119] * ct[310]) +
           1.425 * ct[118] * t1026) +
          1.425 * ct[119] * t1026);
  t988 = (((((((((((((ct[243] + ct[252]) + ct[363]) +
                    -(0.93 * ct[98] * ct[189] * ct[292])) +
                   -(0.93 * ct[339] * ct[189] * ct[309])) +
                  ct[33]) +
                 -(t995_tmp * t982)) +
                -0.93 * ct[350] * t1125_tmp) +
               t1208_tmp * t1236_tmp) +
              -(t1207_tmp * t1149)) +
             -0.678 * t1047 * t1232_tmp) +
            t1339_tmp * t1353_tmp) +
           -(t1335_tmp * t1301)) +
          -(0.678 * t1204 * t1210)) +
         -(1.425 * t1332 * t1336);
  t1183 = (ct[343] + ct[120] * t1011) +
          t1321_tmp * ((-ct[198] + ct[205]) + ct[174] * c_t973_tmp_tmp);
  t1012 = (t1251_tmp * t1244 + ct[120] * t1006) + t1321_tmp * t1275_tmp;
  t1057 = (ct[39] + ct[120] * t1018) + t1321_tmp * t1101_tmp;
  M[9] = (((((((t988 + ct[98] * t1183) + ct[98] * t1012) - ct[98] * ct[278]) -
             ct[277] * ct[339]) +
            ct[26] * ct[98]) -
           ct[25] * ct[339]) -
          ct[339] * t1205) +
         ((-ct[339] * t1337 - ct[339] * t1439) + ct[98] * t1057);
  t1003 =
      (ct[240] - ct[266]) + ct[147] * ((ct[124] - ct[154]) + 0.0 * b_t973_tmp);
  t1114 = (ct[274] - ct[358]) + ct[101] * c_ct_tmp;
  t1121 = (t1138_tmp * t1172 - ct[96] * t1256) + ct[101] * t1389_tmp;
  t1166 = (ct[371] - ct[96] * t1068) + ct[101] * t1003;
  t1102 =
      ((((((((((ct[348] + ct[353]) + t987_tmp * ct[368]) + t995_tmp * t963) +
             0.93 * t1108_tmp * t1125_tmp) +
            t1208_tmp * t1134) +
           t1207_tmp * t1138) +
          c_t1212_tmp * t1232_tmp) +
         t1339_tmp * t1297) +
        t1335_tmp * t1298) +
       0.678 * t1202 * t1210) +
      1.425 * t1331 * t1336;
  M[10] = (((((((t1102 - ct[339] * t1121) + ct[98] * t1040) - ct[339] * t1039) +
              ct[71] * ct[98]) +
             ct[98] * t1343) +
            ct[98] * t1442) -
           ct[339] * t1166) -
          ct[339] * t1114;
  t986 = (ct[102] * t1172 + t1256 * b_t973_tmp_tmp) + ct[121] * t1389_tmp;
  t1003 = (ct[376] + t1068 * b_t973_tmp_tmp) + ct[121] * t1003;
  c_ct_tmp = (ct[281] + ct[121] * c_ct_tmp) + ct[346] * b_t973_tmp_tmp;
  t1095 = (((((((ct[27] + ct[28]) + t1208_tmp * t1105) + -(t1207_tmp * t1111)) +
              -(0.678 * t1232_tmp * t1212_tmp)) +
             t1339_tmp * t1285) +
            -ct[339] * 1.425 * t1022 * t1347_tmp) +
           -0.678 * t1210 * b_t1346_tmp) +
          -1.425 * t1336 * t0_f144_tmp;
  M[11] = (((((t1095 - ct[339] * t1003) + ct[72] * ct[98]) + ct[98] * t1349) +
            ct[98] * t1449) -
           ct[339] * c_ct_tmp) -
          ct[339] * t986;
  t946 = (-(t973_tmp_tmp * t1101_tmp) + ct[35] * b_t973_tmp) + ct[122] * t1018;
  t1256_tmp =
      (-(t973_tmp_tmp * t1275_tmp) + t1244 * b_t973_tmp) + ct[122] * t1006;
  t1164 = ((((-0.678 * ct[98] * ct[304] * t1206_tmp + t1207_tmp * t1098) +
             -(t1339_tmp * b_t1339_tmp)) +
            -(t1335_tmp * t1341_tmp)) +
           -0.678 * t1210 * t1346_tmp) +
          -(1.425 * t1323 * t1336);
  M[12] = (((t1164 - ct[339] * t1358) - ct[339] * t1455) + ct[98] * t946) +
          ct[98] * t1256_tmp;
  t1180 = (-(ct[180] * t1256) + t1172 * t1247_tmp) + ct[176] * t1389_tmp;
  t973_tmp =
      (t1339_tmp * t1243 + t1335_tmp * t1247) + -(1.425 * t1336 * t0_f143_tmp);
  M[13] = (t973_tmp + ct[98] * t1459) - ct[339] * t1180;
  M[14] = (((((((((((((((((((((((ct[133] + ct[168]) + ct[246]) + ct[273]) +
                              ct[279]) +
                             ct[330]) +
                            t1004) +
                           t1016) +
                          ct[51]) +
                         t1124) +
                        t1130) +
                       t1292) +
                      t1299) +
                     t1384) +
                    t1387) +
                   t1251_tmp * t1018) +
                  t1251_tmp * t1006) +
                 t1251_tmp * t1011) +
                t1321_tmp * ct[143]) -
               t1251_tmp * ct[145]) +
              t1321_tmp * ct[194]) +
             t1251_tmp * ct[195]) +
            t1321_tmp * ct[270]) +
           t1321_tmp * ct[367]) +
          t1321_tmp * t1172;
  d_ct_tmp = ct[321] - d_ct_tmp;
  M[15] =
      ((((((((((((((t988 - ct[120] * (ct[148] + ct[149])) - ct[120] * ct[325]) -
                  ct[120] * t1248) -
                 ct[120] * t1379) -
                ct[120] * d_ct_tmp) -
               t1321_tmp * t1141) -
              t1321_tmp * ct[230]) +
             t1251_tmp * ct[231]) -
            t1321_tmp * t950) +
           t1251_tmp * t951) +
          t1251_tmp * ct[55]) -
         t1321_tmp * t1293) +
        t1251_tmp * t1295) -
       t1321_tmp * t1389) +
      t1251_tmp * t1388;
  M[16] =
      (((((((((((((((((((((ct[120] * ct[374] + ct[120] * t1191) +
                          ct[120] * t1321) +
                         ct[120] * t1422) +
                        ct[120] * e_ct_tmp) +
                       ct[18] * (ct[209] * ct[209])) +
                      ct[18] * (ct[226] * ct[226])) +
                     0.93 * (ct[292] * ct[292])) +
                    0.93 * (ct[309] * ct[309])) +
                   0.93 * (ct[350] * ct[350])) +
                  0.678 * (t982 * t982)) +
                 0.678 * (t1047 * t1047)) +
                0.678 * (t1149 * t1149)) +
               0.678 * (t1204 * t1204)) +
              1.425 * (t1301 * t1301)) +
             1.425 * (t1332 * t1332)) +
            ct[18] * (a * a)) +
           0.678 * (t1124_tmp * t1124_tmp)) +
          0.678 * (t1236_tmp * t1236_tmp)) +
         1.425 * (t1353_tmp * t1353_tmp)) +
        t1251_tmp * t1183) +
       (((((((t1251_tmp * t1012 + t1321_tmp * ct[277]) - t1251_tmp * ct[278]) +
            t1321_tmp * ct[25]) +
           t1251_tmp * ct[26]) +
          t1321_tmp * t1205) +
         t1321_tmp * t1337) +
        t1321_tmp * t1439)) +
      t1251_tmp * t1057;
  e_ct_tmp = ((((((((((0.93 * ct[280] * ct[292] + 0.93 * ct[282] * ct[309]) +
                      -0.93 * ct[350] * t1108_tmp) +
                     0.678 * ct[368] * t1124_tmp) +
                    -(0.678 * t963 * t982)) +
                   -0.678 * t1047 * b_t1212_tmp) +
                  0.678 * t1134 * t1236_tmp) +
                 -(0.678 * t1138 * t1149)) +
                -(0.678 * t1202 * t1204)) +
               1.425 * t1297 * t1353_tmp) +
              -(1.425 * t1298 * t1301)) +
             -(1.425 * t1331 * t1332);
  h_ct_tmp += i_ct_tmp;
  f_ct_tmp += ct[53] - t1227;
  g_ct_tmp += ct[334] - t1050;
  M[17] = (((((e_ct_tmp + ct[120] * f_ct_tmp) + ct[120] * ct[380]) +
             ct[120] * g_ct_tmp) +
            ct[120] * h_ct_tmp) +
           t1321_tmp * t1114) +
          ((((((t1321_tmp * t1121 + t1321_tmp * t1039) + t1251_tmp * t1040) +
              t1251_tmp * ct[71]) +
             t1251_tmp * t1343) +
            t1251_tmp * t1442) +
           t1321_tmp * t1166);
  i_ct_tmp = (ct[57] + j_ct_tmp) + k_ct_tmp;
  b_ct_tmp += ct[344] + t1044;
  ct_tmp = (ct[260] + ct_tmp) + t1043;
  t1044 =
      (((((((ct[65] + 0.678 * t982 * t1094_tmp) + 0.678 * t1047 * t1212_tmp) +
           0.678 * t1105 * t1236_tmp) +
          0.678 * t1111 * t1149) +
         0.678 * t1204 * b_t1346_tmp) +
        1.425 * t1285 * t1353_tmp) +
       1.425 * t1301 * t1347_tmp) +
      1.425 * t1332 * t0_f144_tmp;
  M[18] = ((((t1044 + ct[120] * b_ct_tmp) + ct[120] * ct_tmp) +
            ct[120] * i_ct_tmp) +
           t1321_tmp * t986) +
          ((((t1321_tmp * t1003 + t1251_tmp * ct[72]) + t1251_tmp * t1349) +
            t1251_tmp * t1449) +
           t1321_tmp * c_ct_tmp);
  t1043 = ((((-(0.678 * t1236_tmp * t1206_tmp) + -(0.678 * t1098 * t1149)) +
             0.678 * t1204 * t1346_tmp) +
            -1.425 * t1353_tmp * b_t1339_tmp) +
           1.425 * t1301 * t1341_tmp) +
          1.425 * t1323 * t1332;
  M[19] = (((((t1043 + ct[120] * t1333) + ct[120] * t1428) + t1251_tmp * t946) +
            t1251_tmp * t1256_tmp) +
           t1321_tmp * t1358) +
          t1321_tmp * t1455;
  j_ct_tmp = t1221 + t1029;
  k_ct_tmp = (1.425 * t1243 * t1353_tmp + -(1.425 * t1247 * t1301)) +
             1.425 * t1332 * t0_f143_tmp;
  M[20] =
      ((k_ct_tmp + ct[120] * j_ct_tmp) + t1321_tmp * t1180) + t1251_tmp * t1459;
  M[21] = ((((((((((((((((((ct[169] + ct[251]) + ct[334]) + t985) + t993) +
                        -t1107) +
                       ct[53]) +
                      -t1117) +
                     -t1290) +
                    -t1294) +
                   -t1382) +
                  -t1385) -
                 ct[96] * ct[194]) +
                ct[101] * ct[195]) -
               ct[96] * ct[270]) -
              ct[96] * ct[367]) -
             ct[96] * t1172) +
            ct[101] * t1018) +
           ct[101] * t1006) +
          ct[101] * t1011;
  M[22] =
      (((((((((((t1102 + ct[96] * t950) + ct[101] * t951) + ct[55] * ct[101]) +
              ct[96] * t1293) +
             ct[101] * t1295) +
            ct[96] * t1389) +
           ct[101] * t1388) +
          ct[96] * t1141) -
         t1138_tmp * d_ct_tmp) -
        t1138_tmp * ct[325]) -
       t1138_tmp * t1248) -
      t1138_tmp * t1379;
  M[23] =
      (((((((e_ct_tmp + ct[101] * t1183) + ct[101] * t1012) - ct[25] * ct[96]) +
          ct[26] * ct[101]) -
         ct[96] * t1205) -
        ct[96] * t1337) -
       ct[96] * t1439) +
      ((((ct[101] * t1057 + t1138_tmp * ct[374]) + t1138_tmp * t1191) +
        t1138_tmp * t1321) +
       t1138_tmp * t1422);
  M[24] =
      ((((((((((((((((((-ct[96] * t1121 - ct[96] * t1039) + ct[101] * t1040) +
                      ct[71] * ct[101]) +
                     ct[101] * t1343) +
                    ct[101] * t1442) -
                   ct[96] * t1166) +
                  0.93 * (ct[280] * ct[280])) +
                 0.93 * (ct[282] * ct[282])) +
                0.678 * (ct[368] * ct[368])) +
               0.678 * (t963 * t963)) +
              0.678 * (t1134 * t1134)) +
             0.678 * (t1138 * t1138)) +
            0.678 * (t1202 * t1202)) +
           1.425 * (t1297 * t1297)) +
          1.425 * (t1298 * t1298)) +
         1.425 * (t1331 * t1331)) -
        ct[96] * t1114) +
       0.93 * (t1108_tmp * t1108_tmp)) +
      ((((0.678 * (b_t1212_tmp * b_t1212_tmp) + t1138_tmp * h_ct_tmp) +
         t1138_tmp * f_ct_tmp) +
        t1138_tmp * ct[380]) +
       t1138_tmp * g_ct_tmp);
  e_ct_tmp = (((((((0.678 * ct[341] * ct[368] + -0.678 * t963 * t1094_tmp) +
                   -(c_t1212_tmp * t1212_tmp)) +
                  0.678 * t1105 * t1134) +
                 -(0.678 * t1111 * t1138)) +
                -0.678 * t1202 * b_t1346_tmp) +
               1.425 * t1285 * t1297) +
              -1.425 * t1298 * t1347_tmp) +
             -1.425 * t1331 * t0_f144_tmp;
  M[25] =
      (((((((e_ct_tmp - ct[96] * t1003) + ct[72] * ct[101]) + ct[101] * t1349) +
          ct[101] * t1449) -
         ct[96] * c_ct_tmp) -
        ct[96] * t986) +
       t1138_tmp * i_ct_tmp) +
      (t1138_tmp * b_ct_tmp + t1138_tmp * ct_tmp);
  t1221 = ((((-0.678 * t1134 * t1206_tmp + 0.678 * t1098 * t1138) +
             -0.678 * t1202 * t1346_tmp) +
            -(1.425 * t1297 * b_t1339_tmp)) +
           -(1.425 * t1298 * t1341_tmp)) +
          -(1.425 * t1323 * t1331);
  M[26] = (((((t1221 - ct[96] * t1358) - ct[96] * t1455) + ct[101] * t946) +
            ct[101] * t1256_tmp) +
           t1138_tmp * t1333) +
          t1138_tmp * t1428;
  t1029 = (1.425 * t1243 * t1297 + 1.425 * t1247 * t1298) +
          -(1.425 * t1331 * t0_f143_tmp);
  M[27] = ((t1029 + ct[101] * t1459) - ct[96] * t1180) + t1138_tmp * j_ct_tmp;
  M[28] = (((((t1019 + ct[270] * b_t973_tmp_tmp) + ct[367] * b_t973_tmp_tmp) +
             t1172 * b_t973_tmp_tmp) +
            ct[121] * t1018) +
           ct[121] * t1006) +
          ct[121] * t1011;
  M[29] = ((((((((t1095 - t1141 * b_t973_tmp_tmp) + ct[55] * ct[121]) -
                ct[102] * t1248) +
               ct[121] * t1295) -
              ct[102] * t1379) +
             ct[121] * t1388) -
            t1293 * b_t973_tmp_tmp) -
           t1389 * b_t973_tmp_tmp) -
          ct[102] * d_ct_tmp;
  M[30] =
      (((((t1044 + ct[121] * t1183) + ct[121] * t1012) + ct[102] * t1191) +
        ct[102] * t1321) +
       ct[102] * t1422) +
      (((ct[121] * t1057 + t1205 * b_t973_tmp_tmp) + t1337 * b_t973_tmp_tmp) +
       t1439 * b_t973_tmp_tmp);
  M[31] = (((((((e_ct_tmp + ct[102] * f_ct_tmp) + ct[71] * ct[121]) +
               ct[121] * t1343) +
              ct[121] * t1442) +
             b_t973_tmp_tmp * t1121) +
            ct[102] * g_ct_tmp) +
           b_t973_tmp_tmp * t1166) +
          (ct[102] * h_ct_tmp + b_t973_tmp_tmp * t1114);
  M[32] = (((((((0.678 * (t1212_tmp * t1212_tmp) +
                 0.678 * (t1094_tmp * t1094_tmp)) +
                ct[102] * b_ct_tmp) +
               b_t973_tmp_tmp * t1003) +
              ct[72] * ct[121]) +
             ct[121] * t1349) +
            ct[121] * t1449) +
           ct[102] * ct_tmp) +
          (((((((((0.678 * (b_t1346_tmp * b_t1346_tmp) +
                   1.425 * (t1347_tmp * t1347_tmp)) +
                  1.425 * (t0_f144_tmp * t0_f144_tmp)) +
                 b_t973_tmp_tmp * c_ct_tmp) +
                0.678 * (ct[341] * ct[341])) +
               0.678 * (t1105 * t1105)) +
              0.678 * (t1111 * t1111)) +
             1.425 * (t1285 * t1285)) +
            ct[102] * i_ct_tmp) +
           b_t973_tmp_tmp * t986);
  ct_tmp = ((((-0.678 * t1105 * t1206_tmp + -(0.678 * t1098 * t1111)) +
              0.678 * b_t1346_tmp * t1346_tmp) +
             -(1.425 * t1285 * b_t1339_tmp)) +
            1.425 * t1347_tmp * t1341_tmp) +
           1.425 * t1323 * t0_f144_tmp;
  M[33] = (((((ct_tmp + ct[102] * t1333) + ct[102] * t1428) +
             t1358 * b_t973_tmp_tmp) +
            t1455 * b_t973_tmp_tmp) +
           ct[121] * t946) +
          ct[121] * t1256_tmp;
  c_ct_tmp = (1.425 * t1243 * t1285 + -1.425 * t1247 * t1347_tmp) +
             1.425 * t0_f144_tmp * t0_f143_tmp;
  M[34] = ((c_ct_tmp + ct[102] * j_ct_tmp) + ct[121] * t1459) +
          b_t973_tmp_tmp * t1180;
  M[35] = ((((((((ct[59] + ct[356]) + t1272) + -t1279) + t1375) + t1378) +
             b_t973_tmp * t1018) -
            ct[367] * t973_tmp_tmp) -
           t1172 * t973_tmp_tmp) +
          b_t973_tmp * t1006;
  M[36] = (((((t1164 + t1295 * b_t973_tmp) + t1388 * b_t973_tmp) -
             ct[122] * t1248) -
            ct[122] * t1379) +
           t1293 * t973_tmp_tmp) +
          t1389 * t973_tmp_tmp;
  M[37] =
      (((((t1043 + b_t973_tmp * t1057) + ct[122] * t1321) + ct[122] * t1422) -
        t1337 * t973_tmp_tmp) -
       t1439 * t973_tmp_tmp) +
      b_t973_tmp * t1012;
  M[38] = (((((t1221 + ct[122] * f_ct_tmp) + t1343 * b_t973_tmp) +
             t1442 * b_t973_tmp) -
            t973_tmp_tmp * t1121) +
           ct[122] * g_ct_tmp) -
          t973_tmp_tmp * t1166;
  M[39] = (((((ct_tmp + ct[122] * b_ct_tmp) + t1349 * b_t973_tmp) +
             t1449 * b_t973_tmp) -
            t973_tmp_tmp * t1003) +
           ct[122] * i_ct_tmp) +
          -t973_tmp_tmp * t986;
  M[40] = (((((((((0.678 * (t1206_tmp * t1206_tmp) +
                   1.425 * (b_t1339_tmp * b_t1339_tmp)) +
                  ct[122] * t1333) +
                 ct[122] * t1428) -
                t1358 * t973_tmp_tmp) -
               t1455 * t973_tmp_tmp) +
              1.425 * (t1341_tmp * t1341_tmp)) +
             b_t973_tmp * t946) +
            0.678 * (t1098 * t1098)) +
           1.425 * (t1323 * t1323)) +
          (b_t973_tmp * t1256_tmp + 0.678 * (t1346_tmp * t1346_tmp));
  ct_tmp = (-(1.425 * t1243 * b_t1339_tmp) + -(1.425 * t1247 * t1341_tmp)) +
           1.425 * t1323 * t0_f143_tmp;
  M[41] = ((ct_tmp + ct[122] * j_ct_tmp) + t1459 * b_t973_tmp) -
          t973_tmp_tmp * t1180;
  M[42] = (((ct[63] + -t1368) + -t1371) - ct[180] * t1172) + ct[176] * t1006;
  M[43] = ((t973_tmp - t1379 * t1247_tmp) + ct[176] * t1388) + ct[180] * t1389;
  M[44] = ((k_ct_tmp + ct[176] * t1012) + t1422 * t1247_tmp) - ct[180] * t1439;
  M[45] = ((t1029 - ct[180] * t1121) + ct[176] * t1442) + t1247_tmp * f_ct_tmp;
  M[46] =
      ((c_ct_tmp + ct[176] * t1449) + t1247_tmp * i_ct_tmp) - ct[180] * t986;
  M[47] =
      ((ct_tmp + t1428 * t1247_tmp) - ct[180] * t1455) + ct[176] * t1256_tmp;
  M[48] = ((((1.425 * (t0_f143_tmp * t0_f143_tmp) + ct[176] * t1459) +
             1.425 * (t1243 * t1243)) +
            1.425 * (t1247 * t1247)) -
           ct[180] * t1180) +
          t1247_tmp * j_ct_tmp;
}

//
// KINOVA_M_GRIPPER2
//     M =
//     KINOVA_M_GRIPPER2(IXX2,IXX3,IXX4,IXX5,IXX6,IXX7,IXY2,IXY3,IXY4,IXY5,IXY6,IXY7,IXZ2,IXZ3,IXZ4,IXZ5,IXZ6,IXZ7,IYY2,IYY3,IYY4,IYY5,IYY6,IYY7,IYZ2,IYZ3,IYZ4,IYZ5,IYZ6,IYZ7,IZZ1,IZZ2,IZZ3,IZZ4,IZZ5,IZZ6,IZZ7,X1,X2,X3,X4,X5,X6,X7,Y1,Y2,Y3,Y4,Y5,Y6,Y7,Z2,Z3,Z4,Z5,Z6,Z7,Z8,D2,D3,D4,D5,D6,D7,D8,D9,D10,D11,D12,M1,M2,M3,M4,M5,M6,M7,M8,Q1,Q2,Q3,Q4,Q5,Q6,Q7)
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
void kinova_M_gripper2(double q1, double q2, double q3, double q4, double q5,
                       double q6, double q7, double M[49])
{
  double dv[266];
  double t10;
  double t109;
  double t11;
  double t111;
  double t112_tmp;
  double t114_tmp;
  double t12;
  double t124;
  double t124_tmp;
  double t125;
  double t125_tmp;
  double t128;
  double t13;
  double t130;
  double t132;
  double t134;
  double t135;
  double t135_tmp;
  double t137;
  double t137_tmp;
  double t14;
  double t141;
  double t142;
  double t143;
  double t15;
  double t151;
  double t167;
  double t169;
  double t171;
  double t181;
  double t193;
  double t194;
  double t195;
  double t2;
  double t214;
  double t216;
  double t217;
  double t218;
  double t221;
  double t222;
  double t223;
  double t224;
  double t252;
  double t253;
  double t254;
  double t255;
  double t257;
  double t260;
  double t262;
  double t268;
  double t269;
  double t270;
  double t271;
  double t272;
  double t273;
  double t274;
  double t3;
  double t301;
  double t302;
  double t311;
  double t318;
  double t319;
  double t31_tmp;
  double t320;
  double t322;
  double t326;
  double t327;
  double t34;
  double t38;
  double t4;
  double t401;
  double t402;
  double t402_tmp;
  double t408;
  double t410;
  double t412;
  double t413;
  double t415;
  double t415_tmp;
  double t416;
  double t417_tmp;
  double t423;
  double t439;
  double t439_tmp;
  double t46_tmp;
  double t49;
  double t5;
  double t52;
  double t526;
  double t528;
  double t54;
  double t55_tmp;
  double t56;
  double t59;
  double t6;
  double t60;
  double t64;
  double t65;
  double t66;
  double t67;
  double t69;
  double t7;
  double t77;
  double t78;
  double t8;
  double t9;
  double t91;
  double t92;
  double t93;
  //     This function was generated by the Symbolic Math Toolbox version 8.7.
  //     16-Aug-2022 22:09:33
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
  t31_tmp = 0.0 * t2;
  t34 = -7.0E-6 * t3;
  t38 = 0.000606 * t2;
  t46_tmp = 0.0 * t9;
  t49 = -7.0E-6 * t10;
  t52 = 0.000606 * t9;
  t54 = 0.0054 * t2;
  t55_tmp = 0.2104 * t3;
  t56 = 0.0064 * t2;
  t59 = 0.0054 * t9;
  t60 = 0.0064 * t9;
  t64 = t2 * t4;
  t65 = t3 * t5;
  t66 = t2 * t11;
  t67 = t4 * t9;
  t69 = t9 * t11;
  t77 = -4.4E-5 * t2 * t3;
  t78 = t9 * -0.0068779999999999996;
  t93 = -4.4E-5 * t3 * t9;
  t109 = 0.2104 * t2 * t10;
  t112_tmp = 0.2104 * t9 * t10;
  t114_tmp = 0.0064 * t10 * t11;
  t124_tmp = t9 * t10;
  t124 = t124_tmp * t12;
  t125_tmp = t10 * t11;
  t125 = t125_tmp * t13;
  t130 = t2 * t5 * t10;
  t134 = t5 * t9 * t10;
  t135_tmp = t4 * t10;
  t135 = t135_tmp * t12;
  t137_tmp = t2 * t10;
  t137 = t137_tmp * 0.11082;
  t141 = t125_tmp * -0.0086059999999999991;
  t91 = 0.0064 * t64;
  t92 = 0.2084 * t65;
  t111 = 0.0064 * t67;
  t128 = t3 * t66;
  t132 = t3 * t69;
  t143 = 0.2084 * t130;
  t151 = 0.2084 * t135;
  t167 = t34 + 0.010932 * t10;
  t169 = 0.000606 * t3 + 0.0 * t10;
  t171 = 0.001043 * t3 + t49;
  t195 = t3 * t12 + t4 * t5 * t10;
  t423 = 0.0 * t10 * t11;
  t253 = (-1.0E-6 * t3 + 0.008147 * t4 * t10) + t423;
  t254 = (0.000631 * t3 + -1.0E-6 * t4 * t10) + -0.0005 * t10 * t11;
  t255 = (-0.0005 * t3 + 0.0 * t4 * t10) + 0.008316 * t10 * t11;
  t142 = 0.0064 * t128;
  t181 = -0.0064 * t132;
  t193 = t66 + t3 * t67;
  t194 = t67 + t128;
  t214 = -1.8E-5 * t195;
  t218 = t65 + -t135;
  t223 = t6 * t195;
  t257 = (-4.4E-5 * t10 + t3 * 0.11082) + -t55_tmp;
  t268 = (t46_tmp + t2 * t49) + -(0.010932 * t2 * t3);
  t273 = (t38 + t9 * t34) + -(0.001043 * t9 * t10);
  t401 = (((t55_tmp + t114_tmp) + -(t3 * 0.092508)) + -(-4.4E-5 * t4 * t10)) +
         t125_tmp * -0.013041;
  t402_tmp = -(t124_tmp * 0.11082);
  t402 = ((((t54 + t56) + t93) + t112_tmp) + -(t2 * -0.0068779999999999996)) +
         t402_tmp;
  t216 = t64 + -t132;
  t217 = t69 + -(t3 * t64);
  t221 = t5 * t193;
  t222 = t6 * t194;
  t224 = t12 * t193;
  t252 = 0.1059 * t218;
  t262 = t7 * t218;
  t269 = (0.011127 * t9 + t10 * t38) + -(t3 * t31_tmp);
  t270 = (t52 + 0.001043 * t2 * t10) + -(t2 * t34);
  t271 = (t31_tmp + 0.010932 * t3 * t9) + -(t9 * t49);
  t272 = (0.011127 * t2 + t3 * t46_tmp) + -(t10 * t52);
  t274 = 0.13292199999999998 * t218;
  t302 = t6 * t10 * t11 + t13 * t195;
  t311 = t3 * t171 + t10 * t167;
  t413 = t55_tmp + t401;
  t416 = t124_tmp * t401;
  t526 = (t3 * t254 + t135_tmp * t253) + t125_tmp * t255;
  t260 = t6 * t216;
  t67 = t12 * t217;
  t128 = 0.1059 * t262;
  t301 = t134 + t224;
  t326 = -0.00965 * t302;
  t408 = (-t423 + 0.001596 * t195) + 0.0 * t218;
  t410 = (-(0.001607 * t10 * t11) + 0.0 * t195) + 0.000256 * t218;
  t412 = (-(0.000256 * t10 * t11) + 0.0 * t195) + 0.000399 * t218;
  t415_tmp = t2 * t3;
  t415 = (t9 * t169 + t137_tmp * t171) + -(t415_tmp * t167);
  t417_tmp = t3 * t9;
  t169 = (t2 * t169 + t417_tmp * t167) + -(t124_tmp * t171);
  t439_tmp = t125 - t223;
  t439 = t14 * t218 + -t7 * t439_tmp;
  t528 = ((((t141 + t151) + -t92) + -t114_tmp) + t214) + t274;
  t171 = 0.0 * t301;
  t318 = 0.00041 * t301;
  t319 = 0.000256 * t301;
  t320 = -0.000278 * t301;
  t322 = 0.000399 * t301;
  t327 = 0.1059 * t301;
  t65 = t137_tmp * t12 + t5 * t217;
  t66 = t7 * t301;
  t135 = 0.042017 * t301;
  t167 = t130 - t67;
  t4 = -t7 * t167;
  t132 = (-1.0E-6 * t2 * t10 + 0.008147 * t217) + -(0.0 * t194);
  t64 = (0.000631 * t2 * t10 + -1.0E-6 * t217) + -(-0.0005 * t194);
  t69 = (-0.0005 * t2 * t10 + 0.0 * t217) + -(0.008316 * t194);
  t38 = (-1.0E-6 * t9 * t10 + -(0.008147 * t193)) + 0.0 * t216;
  t34 = (0.000631 * t9 * t10 + -(-1.0E-6 * t193)) + -0.0005 * t216;
  t49 = (-0.0005 * t9 * t10 + -(0.0 * t193)) + 0.008316 * t216;
  t52 = t3 * t270 + t10 * t268;
  t423 = t3 * t273 + t10 * t271;
  dv[0] = 0.001596;
  dv[1] = 0.001641;
  dv[2] = 0.000587;
  dv[3] = 0.0;
  dv[4] = 0.0;
  dv[5] = 3.0E-6;
  dv[6] = 0.0;
  dv[7] = 0.0;
  dv[8] = 3.0E-6;
  dv[9] = 0.001072;
  dv[10] = 0.000369;
  dv[11] = -0.000278;
  dv[12] = 0.000118;
  dv[13] = 0.001409;
  dv[14] = 0.001641;
  dv[15] = 0.000609;
  dv[16] = -2.3E-5;
  dv[17] = 1.0E-6;
  dv[18] = 1.0E-6;
  dv[19] = -0.000281;
  dv[20] = -0.009432;
  dv[21] = -0.011402;
  dv[22] = -0.00965;
  dv[23] = 0.1059;
  dv[24] = 1.377;
  dv[25] = 1.1636;
  dv[26] = 1.1636;
  dv[27] = 0.93;
  dv[28] = 0.678;
  dv[29] = 0.678;
  dv[30] = 0.5;
  dv[31] = t10;
  dv[32] = -0.015764;
  dv[33] = t109;
  dv[34] = t11;
  dv[35] = t111;
  dv[36] = t112_tmp;
  dv[37] = t112_tmp;
  dv[38] = t114_tmp;
  dv[39] = t114_tmp;
  dv[40] = 0.70175438596491224;
  dv[41] = -t60;
  dv[42] = t124;
  dv[43] = t125;
  dv[44] = t13;
  dv[45] = t130;
  dv[46] = t137;
  dv[47] = t14;
  dv[48] = t142;
  dv[49] = t143;
  dv[50] = -(t2 * -0.0068779999999999996);
  dv[51] = t15;
  dv[52] = 0.2084 * t134;
  dv[53] = -t109;
  dv[54] = -(0.2104 * t2 * t10);
  dv[55] = 0.011088 * t2 + t46_tmp;
  dv[56] = t31_tmp + 0.011255 * t9;
  dv[57] = -t137;
  dv[58] = t402_tmp;
  dv[59] = 0.060416999999999992;
  dv[60] = -t143;
  dv[61] = t181;
  dv[62] = -t151;
  dv[63] = t31_tmp + -(0.011088 * t9);
  dv[64] = 0.011255 * t2 + -t46_tmp;
  dv[65] = t9 * (5.0E-6 * t2 + -0.000691 * t9);
  dv[66] = t193;
  dv[67] = t194;
  dv[68] = t195;
  dv[69] = t2;
  dv[70] = t2 * (-0.000691 * t2 + -(5.0E-6 * t9));
  dv[71] = 0.0 * t194;
  dv[72] = 0.001607 * t194;
  dv[73] = 0.000256 * t194;
  dv[74] = 0.0064 * t194;
  dv[75] = t216;
  dv[76] = t217;
  dv[77] = t218;
  dv[78] = t221;
  dv[79] = t222;
  dv[80] = t223;
  dv[81] = t13 * t194;
  dv[82] = 0.2084 * t224;
  dv[83] = 0.0 * t216;
  dv[84] = 0.001607 * t216;
  dv[85] = 0.000256 * t216;
  dv[86] = 0.1815;
  dv[87] = 0.0064 * t216;
  dv[88] = t252;
  dv[89] = 1.425;
  dv[90] = t260;
  dv[91] = -t222;
  dv[92] = t262;
  dv[93] = t67;
  dv[94] = 0.2084 * t67;
  dv[95] = t257 * t257;
  dv[96] = t2 * t2;
  dv[97] = -(-0.0086059999999999991 * t194);
  dv[98] = t128;
  dv[99] = t9 * t9;
  dv[100] = 0.093474385964912282;
  dv[101] = -(-0.0086059999999999991 * t216);
  dv[102] = -t128;
  dv[103] = t2 * t269;
  dv[104] = t3;
  dv[105] = t9 * t272;
  dv[106] = t301;
  dv[107] = t302;
  dv[108] = t417_tmp * t268;
  dv[109] = t137_tmp * t273;
  dv[110] = t311;
  dv[111] = t171;
  dv[112] = t171;
  dv[113] = t318;
  dv[114] = t319;
  dv[115] = t320;
  dv[116] = t322;
  dv[117] = -(t415_tmp * t271);
  dv[118] = t326;
  dv[119] = t327;
  dv[120] = -(t124_tmp * t270);
  dv[121] = t65;
  dv[122] = t66;
  dv[123] = t8 * t302;
  dv[124] = t14 * t301;
  dv[125] = t15 * t302;
  dv[126] = t135;
  dv[127] = 0.1059 * t66;
  dv[128] = 0.001596 * t65;
  dv[129] = 0.0 * t65;
  dv[130] = 0.0 * t65;
  dv[131] = -1.8E-5 * t65;
  t67 = t124 - t221;
  dv[132] = -0.001596 * t67;
  t128 = -0.0 * t67;
  dv[133] = t128;
  dv[134] = -t171;
  dv[135] = t128;
  dv[136] = -t171;
  dv[137] = -t318;
  dv[138] = -t319;
  dv[139] = -t320;
  dv[140] = -t322;
  dv[141] = 1.8E-5 * t67;
  dv[142] = -t326;
  dv[143] = -t327;
  dv[144] = t3 * t311;
  dv[145] = t6 * t65;
  dv[146] = t13 * t65;
  dv[147] = -(0.13292199999999998 * t301);
  dv[148] = -t135;
  dv[149] = 0.1059 * (-t14 * t439_tmp);
  dv[150] = -0.1059 * t167;
  dv[151] = t4;
  dv[152] = -t14 * t167;
  dv[153] = -0.042017 * t167;
  dv[154] = 0.1059 * t4;
  t128 = 0.0 * t167;
  dv[155] = t128;
  dv[156] = t128;
  dv[157] = 0.00041 * t167;
  dv[158] = 0.000256 * t167;
  dv[159] = -0.000278 * t167;
  dv[160] = 0.000399 * t167;
  dv[161] = 0.1059 * t14 * t439_tmp;
  dv[162] = 0.1059 * t167;
  dv[163] = 8.5500000000000011E-6 * t302;
  dv[164] = 0.0010516500000000001 * t302;
  dv[165] = 0.0003363 * t302;
  dv[166] = 0.13292199999999998 * t167;
  dv[167] = 0.042017 * t167;
  dv[168] = t402;
  dv[169] = t132;
  dv[170] = t69;
  dv[171] = t38;
  dv[172] = t408;
  dv[173] = t49;
  dv[174] = t413;
  dv[175] = t137_tmp * t401;
  dv[176] = t415;
  dv[177] = t416;
  dv[178] = t169;
  dv[179] = t3 * t64;
  dv[180] = t3 * t34;
  dv[181] = t413 * t413;
  dv[182] = -t416;
  dv[183] = t135_tmp * t38;
  dv[184] = t137_tmp * t34;
  dv[185] = t124_tmp * t64;
  dv[186] = t125_tmp * t69;
  dv[187] = t124_tmp * t34;
  dv[188] = t125_tmp * t49;
  dv[189] = t3 * t415;
  dv[190] = t3 * t169;
  dv[191] = t135_tmp * t132;
  dv[192] = t137_tmp * t64;
  dv[193] = -(t125_tmp * t410);
  dv[194] = t13 * t216 + -t6 * t67;
  dv[195] = t439;
  dv[196] = t9 * t52;
  dv[197] = t2 * t423;
  dv[198] = t137_tmp * t52;
  dv[199] = t124_tmp * t423;
  dv[200] = 1.0E-6 * t439;
  dv[201] = t8 * t439;
  dv[202] = t15 * t439;
  t128 = t260 + t13 * t67;
  dv[203] = -0.0 * t128;
  dv[204] = 0.000278 * t128;
  dv[205] = -0.001641 * t128;
  dv[206] = 0.009432 * t128;
  dv[207] = 0.00965 * t128;
  dv[208] = -t15 * t128;
  t66 = t262 + t14 * t439_tmp;
  dv[209] = -0.060416999999999992 * t66;
  dv[210] = -0.009432 * t128;
  dv[211] = t8 * t128;
  dv[212] = t195 * t408;
  dv[213] = t194 * t410;
  dv[214] = 0.060416999999999992 * t66;
  dv[215] = 0.1815 * t66;
  dv[216] = t216 * t410;
  dv[217] = t218 * t412;
  dv[218] = 0.0016729499999999999 * t439;
  dv[219] = 8.5500000000000011E-6 * t439;
  dv[220] = 8.5500000000000011E-6 * t439;
  dv[221] = -8.5500000000000011E-6 * t128;
  dv[222] = -8.5500000000000011E-6 * t66;
  dv[223] = -0.0010516500000000001 * t128;
  dv[224] = -0.0003363 * t128;
  dv[225] = -0.0003363 * t66;
  dv[226] = -0.0017356499999999998 * t66;
  dv[227] = 1.1636 * t2 * t257 * t402;
  dv[228] = 1.1636 * t9 * t257 * (((((t59 + t60) - t77) - t78) + t137) + -t109);
  dv[229] = t526;
  dv[230] = t301 * t412;
  dv[231] = t3 * t526;
  dv[232] = ((((t111 + t137_tmp * 0.092508) + t142) + -(0.2104 * t2 * t10)) +
             -4.4E-5 * t217) +
            -0.013041 * t194;
  dv[233] = -t408 * t67;
  dv[234] = t125_tmp * t526;
  dv[235] =
      ((((t91 + t112_tmp) + -(t124_tmp * 0.092508)) + t181) + -4.4E-5 * t193) +
      -0.013041 * t216;
  dv[236] = -0.093474385964912282 * t66;
  dv[237] = t412 * t167;
  dv[238] = t54;
  dv[239] = (0.0 * t218 + 0.0 * t302) + -0.001641 * t439_tmp;
  t67 = -0.0 * t439_tmp;
  dv[240] = (0.00041 * t218 + -0.000278 * t302) + t67;
  dv[241] = (-0.000278 * t218 + 0.001641 * t302) + t67;
  dv[242] = (t9 * t269 + t137_tmp * t270) + -(t415_tmp * t268);
  dv[243] = (t2 * t272 + t417_tmp * t271) + -(t124_tmp * t273);
  dv[244] = t55_tmp;
  dv[245] = t56;
  dv[246] = t55_tmp;
  dv[247] = t194 * t528;
  dv[248] = t216 * t528;
  dv[249] = t59;
  dv[250] = (((((((t55_tmp + t55_tmp) + t92) + t114_tmp) + t114_tmp) + -t141) +
              -t151) +
             -t214) +
            -t274;
  dv[251] = t60;
  t67 =
      ((((((t55_tmp + t92) + t114_tmp) + t114_tmp) + -t141) + -t151) + -t214) +
      -t274;
  dv[252] = -t9 * t10 * t67;
  dv[253] = t137_tmp * t67;
  dv[254] = (t137_tmp * t254 + t217 * t253) + -(t194 * t255);
  dv[255] = (t124_tmp * t254 + -(t193 * t253)) + t216 * t255;
  dv[256] = 2.0;
  dv[257] =
      ((t252 + -(0.042017 * t218)) + -0.009432 * t302) + 1.0E-6 * t439_tmp;
  dv[258] = t7;
  dv[259] = t77;
  dv[260] = t78;
  dv[261] = t8;
  dv[262] = t9;
  dv[263] = t91;
  dv[264] = t92;
  dv[265] = t93;
  ft_1(dv, M);
}

//
// File trailer for kinova_M_gripper2.cpp
//
// [EOF]
//
