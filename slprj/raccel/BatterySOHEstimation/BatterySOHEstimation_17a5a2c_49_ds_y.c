#include "ne_ds.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_sys_struct.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_y.h"
#include "BatterySOHEstimation_17a5a2c_49_ds.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_externals.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T BatterySOHEstimation_17a5a2c_49_ds_y(const NeDynamicSystem *LC, const NeDynamicSystemInput *t3450, NeDsMethodOutput *out)
{
    static real_T _cg_const_1[7] = { 0.0, 0.1, 0.25, 0.5, 0.75, 0.9, 1.0 };
    static real_T _cg_const_2[3] = { 278.0, 293.0, 313.0 };
    ETTSf3049b48 t125;
    ETTSf3049b48 t140;
    ETTSf3049b48 t153;
    ETTSf3049b48 t161;
    ETTSf3049b48 t162;
    ETTSf3049b48 t165;
    ETTSf3049b48 t18;
    ETTSf3049b48 t186;
    ETTSf3049b48 t187;
    ETTSf3049b48 t19;
    ETTSf3049b48 t21;
    ETTSf3049b48 t214;
    ETTSf3049b48 t217;
    ETTSf3049b48 t222;
    ETTSf3049b48 t231;
    ETTSf3049b48 t270;
    ETTSf3049b48 t61;
    ETTSf3049b48 t96;
    real_T nonscalar1[7];
    real_T nonscalar2[3];
    real_T t1488[1];
    real_T t2179[1];
    real_T BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3;
    real_T BatteryPack_v2_ModuleAssembly_23_Module16_Cell_1_electricalMod3;
    real_T BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    real_T BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    real_T intrm_sf_mf_100;
    real_T intrm_sf_mf_105;
    real_T intrm_sf_mf_107;
    real_T intrm_sf_mf_108;
    real_T intrm_sf_mf_109;
    real_T intrm_sf_mf_11;
    real_T intrm_sf_mf_110;
    real_T intrm_sf_mf_112;
    real_T intrm_sf_mf_113;
    real_T intrm_sf_mf_117;
    real_T intrm_sf_mf_119;
    real_T intrm_sf_mf_121;
    real_T intrm_sf_mf_125;
    real_T intrm_sf_mf_126;
    real_T intrm_sf_mf_13;
    real_T intrm_sf_mf_14;
    real_T intrm_sf_mf_18;
    real_T intrm_sf_mf_19;
    real_T intrm_sf_mf_20;
    real_T intrm_sf_mf_29;
    real_T intrm_sf_mf_3;
    real_T intrm_sf_mf_33;
    real_T intrm_sf_mf_39;
    real_T intrm_sf_mf_4;
    real_T intrm_sf_mf_43;
    real_T intrm_sf_mf_44;
    real_T intrm_sf_mf_47;
    real_T intrm_sf_mf_5;
    real_T intrm_sf_mf_52;
    real_T intrm_sf_mf_57;
    real_T intrm_sf_mf_67;
    real_T intrm_sf_mf_69;
    real_T intrm_sf_mf_7;
    real_T intrm_sf_mf_71;
    real_T intrm_sf_mf_72;
    real_T intrm_sf_mf_73;
    real_T intrm_sf_mf_79;
    real_T intrm_sf_mf_80;
    real_T intrm_sf_mf_81;
    real_T intrm_sf_mf_83;
    real_T intrm_sf_mf_84;
    real_T intrm_sf_mf_89;
    real_T intrm_sf_mf_92;
    real_T intrm_sf_mf_95;
    real_T intrm_sf_mf_98;
    real_T t3449;
    real_T zc_int10;
    real_T zc_int102;
    real_T zc_int110;
    real_T zc_int114;
    real_T zc_int118;
    real_T zc_int120;
    real_T zc_int121;
    real_T zc_int128;
    real_T zc_int13;
    real_T zc_int133;
    real_T zc_int134;
    real_T zc_int146;
    real_T zc_int147;
    real_T zc_int148;
    real_T zc_int154;
    real_T zc_int155;
    real_T zc_int161;
    real_T zc_int164;
    real_T zc_int171;
    real_T zc_int177;
    real_T zc_int178;
    real_T zc_int183;
    real_T zc_int192;
    real_T zc_int195;
    real_T zc_int200;
    real_T zc_int202;
    real_T zc_int203;
    real_T zc_int207;
    real_T zc_int208;
    real_T zc_int211;
    real_T zc_int212;
    real_T zc_int218;
    real_T zc_int22;
    real_T zc_int221;
    real_T zc_int225;
    real_T zc_int236;
    real_T zc_int24;
    real_T zc_int242;
    real_T zc_int243;
    real_T zc_int247;
    real_T zc_int248;
    real_T zc_int250;
    real_T zc_int253;
    real_T zc_int258;
    real_T zc_int262;
    real_T zc_int265;
    real_T zc_int273;
    real_T zc_int276;
    real_T zc_int279;
    real_T zc_int281;
    real_T zc_int283;
    real_T zc_int289;
    real_T zc_int290;
    real_T zc_int293;
    real_T zc_int299;
    real_T zc_int3;
    real_T zc_int30;
    real_T zc_int301;
    real_T zc_int304;
    real_T zc_int314;
    real_T zc_int320;
    real_T zc_int324;
    real_T zc_int325;
    real_T zc_int334;
    real_T zc_int348;
    real_T zc_int349;
    real_T zc_int35;
    real_T zc_int350;
    real_T zc_int353;
    real_T zc_int354;
    real_T zc_int355;
    real_T zc_int357;
    real_T zc_int358;
    real_T zc_int360;
    real_T zc_int362;
    real_T zc_int365;
    real_T zc_int368;
    real_T zc_int373;
    real_T zc_int374;
    real_T zc_int38;
    real_T zc_int385;
    real_T zc_int387;
    real_T zc_int388;
    real_T zc_int393;
    real_T zc_int396;
    real_T zc_int397;
    real_T zc_int40;
    real_T zc_int401;
    real_T zc_int404;
    real_T zc_int405;
    real_T zc_int410;
    real_T zc_int414;
    real_T zc_int415;
    real_T zc_int424;
    real_T zc_int425;
    real_T zc_int426;
    real_T zc_int428;
    real_T zc_int429;
    real_T zc_int431;
    real_T zc_int435;
    real_T zc_int439;
    real_T zc_int44;
    real_T zc_int444;
    real_T zc_int452;
    real_T zc_int454;
    real_T zc_int455;
    real_T zc_int457;
    real_T zc_int458;
    real_T zc_int46;
    real_T zc_int463;
    real_T zc_int472;
    real_T zc_int480;
    real_T zc_int481;
    real_T zc_int483;
    real_T zc_int485;
    real_T zc_int49;
    real_T zc_int490;
    real_T zc_int491;
    real_T zc_int492;
    real_T zc_int494;
    real_T zc_int496;
    real_T zc_int500;
    real_T zc_int501;
    real_T zc_int504;
    real_T zc_int506;
    real_T zc_int509;
    real_T zc_int51;
    real_T zc_int517;
    real_T zc_int518;
    real_T zc_int521;
    real_T zc_int528;
    real_T zc_int53;
    real_T zc_int530;
    real_T zc_int535;
    real_T zc_int536;
    real_T zc_int537;
    real_T zc_int540;
    real_T zc_int541;
    real_T zc_int55;
    real_T zc_int551;
    real_T zc_int552;
    real_T zc_int556;
    real_T zc_int560;
    real_T zc_int561;
    real_T zc_int565;
    real_T zc_int567;
    real_T zc_int572;
    real_T zc_int576;
    real_T zc_int579;
    real_T zc_int58;
    real_T zc_int586;
    real_T zc_int588;
    real_T zc_int595;
    real_T zc_int598;
    real_T zc_int600;
    real_T zc_int606;
    real_T zc_int607;
    real_T zc_int615;
    real_T zc_int618;
    real_T zc_int625;
    real_T zc_int628;
    real_T zc_int63;
    real_T zc_int631;
    real_T zc_int634;
    real_T zc_int638;
    real_T zc_int641;
    real_T zc_int643;
    real_T zc_int650;
    real_T zc_int651;
    real_T zc_int652;
    real_T zc_int655;
    real_T zc_int661;
    real_T zc_int665;
    real_T zc_int666;
    real_T zc_int668;
    real_T zc_int669;
    real_T zc_int673;
    real_T zc_int674;
    real_T zc_int675;
    real_T zc_int677;
    real_T zc_int68;
    real_T zc_int680;
    real_T zc_int682;
    real_T zc_int689;
    real_T zc_int77;
    real_T zc_int8;
    real_T zc_int80;
    real_T zc_int83;
    real_T zc_int86;
    real_T zc_int89;
    real_T zc_int97;
    real_T zc_int99;
    size_t t2245[1];
    size_t t278[1];
    size_t t280[1];
    size_t t2585;
    size_t t2667;
    size_t t2689;
    nonscalar1[0] = _cg_const_1[0];
    nonscalar1[1] = _cg_const_1[1];
    nonscalar1[2] = _cg_const_1[2];
    nonscalar1[3] = _cg_const_1[3];
    nonscalar1[4] = _cg_const_1[4];
    nonscalar1[5] = _cg_const_1[5];
    nonscalar1[6] = _cg_const_1[6];
    nonscalar2[0] = _cg_const_2[0];
    nonscalar2[1] = _cg_const_2[1];
    nonscalar2[2] = _cg_const_2[2];
    t1488[0UL] = t3450->mX.mX[1107UL];
    t2245[0] = 7UL;
    t278[0] = 1UL;
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[0UL];
    t280[0] = 3UL;
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int454 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int455 = t2179[0UL];
    out->mY.mX[1UL] = t3450->mX.mX[2UL];
    out->mY.mX[4UL] = t3450->mX.mX[0UL];
    t1488[0UL] = t3450->mX.mX[1111UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[8UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int10 = t2179[0UL];
    out->mY.mX[8UL] = t3450->mX.mX[10UL];
    out->mY.mX[11UL] = t3450->mX.mX[8UL];
    t1488[0UL] = t3450->mX.mX[1115UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[16UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int30 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int40 = t2179[0UL];
    out->mY.mX[15UL] = t3450->mX.mX[18UL];
    out->mY.mX[18UL] = t3450->mX.mX[16UL];
    t1488[0UL] = t3450->mX.mX[1119UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[24UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int8 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_3 = t2179[0UL];
    out->mY.mX[22UL] = t3450->mX.mX[26UL];
    out->mY.mX[25UL] = t3450->mX.mX[24UL];
    t1488[0UL] = t3450->mX.mX[1123UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[32UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int110 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_4 = t2179[0UL];
    out->mY.mX[29UL] = t3450->mX.mX[34UL];
    out->mY.mX[32UL] = t3450->mX.mX[32UL];
    t1488[0UL] = t3450->mX.mX[1127UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[40UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int120 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_5 = t2179[0UL];
    out->mY.mX[36UL] = t3450->mX.mX[42UL];
    out->mY.mX[39UL] = t3450->mX.mX[40UL];
    t1488[0UL] = t3450->mX.mX[1131UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[48UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int161 = t2179[0UL];
    out->mY.mX[43UL] = t3450->mX.mX[50UL];
    out->mY.mX[46UL] = t3450->mX.mX[48UL];
    t1488[0UL] = t3450->mX.mX[1135UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[56UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t222.mField0[0UL], &t222.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t222.mField0[0UL], &t222.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_7 = t2179[0UL];
    out->mY.mX[50UL] = t3450->mX.mX[58UL];
    out->mY.mX[53UL] = t3450->mX.mX[56UL];
    t1488[0UL] = t3450->mX.mX[1139UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[64UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int212 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int221 = t2179[0UL];
    out->mY.mX[57UL] = t3450->mX.mX[66UL];
    out->mY.mX[60UL] = t3450->mX.mX[64UL];
    t1488[0UL] = t3450->mX.mX[1143UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[72UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int242 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int250 = t2179[0UL];
    out->mY.mX[64UL] = t3450->mX.mX[74UL];
    out->mY.mX[67UL] = t3450->mX.mX[72UL];
    t1488[0UL] = t3450->mX.mX[1147UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[80UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int281 = t2179[0UL];
    out->mY.mX[71UL] = t3450->mX.mX[82UL];
    out->mY.mX[74UL] = t3450->mX.mX[80UL];
    t1488[0UL] = t3450->mX.mX[1151UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[88UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_11 = t2179[0UL];
    out->mY.mX[78UL] = t3450->mX.mX[90UL];
    out->mY.mX[81UL] = t3450->mX.mX[88UL];
    t1488[0UL] = t3450->mX.mX[1155UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[96UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int572 = t2179[0UL];
    out->mY.mX[85UL] = t3450->mX.mX[98UL];
    out->mY.mX[88UL] = t3450->mX.mX[96UL];
    t1488[0UL] = t3450->mX.mX[1159UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[104UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int360 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_13 = t2179[0UL];
    out->mY.mX[92UL] = t3450->mX.mX[106UL];
    out->mY.mX[95UL] = t3450->mX.mX[104UL];
    t1488[0UL] = t3450->mX.mX[1163UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[112UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t96.mField0[0UL], &t96.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t96.mField0[0UL], &t96.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_14 = t2179[0UL];
    out->mY.mX[99UL] = t3450->mX.mX[114UL];
    out->mY.mX[102UL] = t3450->mX.mX[112UL];
    t1488[0UL] = t3450->mX.mX[1167UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[120UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t222.mField0[0UL], &t222.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t222.mField0[0UL], &t222.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int63 = t2179[0UL];
    out->mY.mX[106UL] = t3450->mX.mX[122UL];
    out->mY.mX[109UL] = t3450->mX.mX[120UL];
    t1488[0UL] = t3450->mX.mX[1171UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[128UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int46 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int472 = t2179[0UL];
    out->mY.mX[113UL] = t3450->mX.mX[130UL];
    out->mY.mX[116UL] = t3450->mX.mX[128UL];
    t1488[0UL] = t3450->mX.mX[1175UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[136UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int49 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int435 = t2179[0UL];
    out->mY.mX[120UL] = t3450->mX.mX[138UL];
    out->mY.mX[123UL] = t3450->mX.mX[136UL];
    t1488[0UL] = t3450->mX.mX[1179UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[144UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int53 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_18 = t2179[0UL];
    out->mY.mX[127UL] = t3450->mX.mX[146UL];
    out->mY.mX[130UL] = t3450->mX.mX[144UL];
    t1488[0UL] = t3450->mX.mX[1183UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[152UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int55 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_19 = t2179[0UL];
    out->mY.mX[134UL] = t3450->mX.mX[154UL];
    out->mY.mX[137UL] = t3450->mX.mX[152UL];
    t1488[0UL] = t3450->mX.mX[1187UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[160UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int58 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_20 = t2179[0UL];
    out->mY.mX[141UL] = t3450->mX.mX[162UL];
    out->mY.mX[144UL] = t3450->mX.mX[160UL];
    t1488[0UL] = t3450->mX.mX[1191UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[168UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int431 = t2179[0UL];
    out->mY.mX[148UL] = t3450->mX.mX[170UL];
    out->mY.mX[151UL] = t3450->mX.mX[168UL];
    t1488[0UL] = t3450->mX.mX[1195UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[176UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t96.mField0[0UL], &t96.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int480 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t96.mField0[0UL], &t96.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int481 = t2179[0UL];
    out->mY.mX[155UL] = t3450->mX.mX[178UL];
    out->mY.mX[158UL] = t3450->mX.mX[176UL];
    t1488[0UL] = t3450->mX.mX[1199UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[184UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int68 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int429 = t2179[0UL];
    out->mY.mX[162UL] = t3450->mX.mX[186UL];
    out->mY.mX[165UL] = t3450->mX.mX[184UL];
    t1488[0UL] = t3450->mX.mX[1203UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[192UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int428 = t2179[0UL];
    out->mY.mX[169UL] = t3450->mX.mX[194UL];
    out->mY.mX[172UL] = t3450->mX.mX[192UL];
    t1488[0UL] = t3450->mX.mX[1207UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[200UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int485 = t2179[0UL];
    out->mY.mX[176UL] = t3450->mX.mX[202UL];
    out->mY.mX[179UL] = t3450->mX.mX[200UL];
    t1488[0UL] = t3450->mX.mX[1211UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[208UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int77 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int426 = t2179[0UL];
    out->mY.mX[183UL] = t3450->mX.mX[210UL];
    out->mY.mX[186UL] = t3450->mX.mX[208UL];
    t1488[0UL] = t3450->mX.mX[1215UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[216UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int80 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int425 = t2179[0UL];
    out->mY.mX[190UL] = t3450->mX.mX[218UL];
    out->mY.mX[193UL] = t3450->mX.mX[216UL];
    t1488[0UL] = t3450->mX.mX[1219UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[224UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int83 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int424 = t2179[0UL];
    out->mY.mX[197UL] = t3450->mX.mX[226UL];
    out->mY.mX[200UL] = t3450->mX.mX[224UL];
    t1488[0UL] = t3450->mX.mX[1223UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[232UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int86 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_29 = t2179[0UL];
    out->mY.mX[204UL] = t3450->mX.mX[234UL];
    out->mY.mX[207UL] = t3450->mX.mX[232UL];
    t1488[0UL] = t3450->mX.mX[1227UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[240UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int89 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int490 = t2179[0UL];
    out->mY.mX[211UL] = t3450->mX.mX[242UL];
    out->mY.mX[214UL] = t3450->mX.mX[240UL];
    t1488[0UL] = t3450->mX.mX[1231UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[248UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int491 = t2179[0UL];
    out->mY.mX[218UL] = t3450->mX.mX[250UL];
    out->mY.mX[221UL] = t3450->mX.mX[248UL];
    t1488[0UL] = t3450->mX.mX[1235UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[256UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int492 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int44 = t2179[0UL];
    out->mY.mX[225UL] = t3450->mX.mX[258UL];
    out->mY.mX[228UL] = t3450->mX.mX[256UL];
    t1488[0UL] = t3450->mX.mX[1239UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[264UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t222.mField0[0UL], &t222.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int97 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t222.mField0[0UL], &t222.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_33 = t2179[0UL];
    out->mY.mX[232UL] = t3450->mX.mX[266UL];
    out->mY.mX[235UL] = t3450->mX.mX[264UL];
    t1488[0UL] = t3450->mX.mX[1243UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[272UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int102 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int99 = t2179[0UL];
    out->mY.mX[239UL] = t3450->mX.mX[274UL];
    out->mY.mX[242UL] = t3450->mX.mX[272UL];
    t1488[0UL] = t3450->mX.mX[1247UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[280UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int114 = t2179[0UL];
    out->mY.mX[246UL] = t3450->mX.mX[282UL];
    out->mY.mX[249UL] = t3450->mX.mX[280UL];
    t1488[0UL] = t3450->mX.mX[1251UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[288UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int118 = t2179[0UL];
    out->mY.mX[253UL] = t3450->mX.mX[290UL];
    out->mY.mX[256UL] = t3450->mX.mX[288UL];
    t1488[0UL] = t3450->mX.mX[1255UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[296UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int121 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int128 = t2179[0UL];
    out->mY.mX[260UL] = t3450->mX.mX[298UL];
    out->mY.mX[263UL] = t3450->mX.mX[296UL];
    t1488[0UL] = t3450->mX.mX[1259UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[304UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int134 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int13 = t2179[0UL];
    out->mY.mX[267UL] = t3450->mX.mX[306UL];
    out->mY.mX[270UL] = t3450->mX.mX[304UL];
    t1488[0UL] = t3450->mX.mX[1263UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[312UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int133 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_39 = t2179[0UL];
    out->mY.mX[274UL] = t3450->mX.mX[314UL];
    out->mY.mX[277UL] = t3450->mX.mX[312UL];
    t1488[0UL] = t3450->mX.mX[1267UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[320UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int146 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int147 = t2179[0UL];
    out->mY.mX[281UL] = t3450->mX.mX[322UL];
    out->mY.mX[284UL] = t3450->mX.mX[320UL];
    t1488[0UL] = t3450->mX.mX[1271UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[328UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int148 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int155 = t2179[0UL];
    out->mY.mX[288UL] = t3450->mX.mX[330UL];
    out->mY.mX[291UL] = t3450->mX.mX[328UL];
    t1488[0UL] = t3450->mX.mX[1275UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[336UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int154 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int164 = t2179[0UL];
    out->mY.mX[295UL] = t3450->mX.mX[338UL];
    out->mY.mX[298UL] = t3450->mX.mX[336UL];
    t1488[0UL] = t3450->mX.mX[1279UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[344UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_43 = t2179[0UL];
    out->mY.mX[302UL] = t3450->mX.mX[346UL];
    out->mY.mX[305UL] = t3450->mX.mX[344UL];
    t1488[0UL] = t3450->mX.mX[1283UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[352UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int171 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_44 = t2179[0UL];
    out->mY.mX[309UL] = t3450->mX.mX[354UL];
    out->mY.mX[312UL] = t3450->mX.mX[352UL];
    t1488[0UL] = t3450->mX.mX[1287UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[360UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int506 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int51 = t2179[0UL];
    out->mY.mX[316UL] = t3450->mX.mX[362UL];
    out->mY.mX[319UL] = t3450->mX.mX[360UL];
    t1488[0UL] = t3450->mX.mX[1291UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[368UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t270.mField0[0UL], &t270.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int177 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t270.mField0[0UL], &t270.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int178 = t2179[0UL];
    out->mY.mX[323UL] = t3450->mX.mX[370UL];
    out->mY.mX[326UL] = t3450->mX.mX[368UL];
    t1488[0UL] = t3450->mX.mX[1295UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[376UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int183 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_47 = t2179[0UL];
    out->mY.mX[330UL] = t3450->mX.mX[378UL];
    out->mY.mX[333UL] = t3450->mX.mX[376UL];
    t1488[0UL] = t3450->mX.mX[1299UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[384UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int192 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int200 = t2179[0UL];
    out->mY.mX[337UL] = t3450->mX.mX[386UL];
    out->mY.mX[340UL] = t3450->mX.mX[384UL];
    t1488[0UL] = t3450->mX.mX[1303UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[392UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int195 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int203 = t2179[0UL];
    out->mY.mX[344UL] = t3450->mX.mX[394UL];
    out->mY.mX[347UL] = t3450->mX.mX[392UL];
    t1488[0UL] = t3450->mX.mX[1307UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[400UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int202 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int207 = t2179[0UL];
    out->mY.mX[351UL] = t3450->mX.mX[402UL];
    out->mY.mX[354UL] = t3450->mX.mX[400UL];
    t1488[0UL] = t3450->mX.mX[1311UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[408UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int208 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int211 = t2179[0UL];
    out->mY.mX[358UL] = t3450->mX.mX[410UL];
    out->mY.mX[361UL] = t3450->mX.mX[408UL];
    t1488[0UL] = t3450->mX.mX[1315UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[416UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int218 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_52 = t2179[0UL];
    out->mY.mX[365UL] = t3450->mX.mX[418UL];
    out->mY.mX[368UL] = t3450->mX.mX[416UL];
    t1488[0UL] = t3450->mX.mX[1319UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[424UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int22 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int225 = t2179[0UL];
    out->mY.mX[372UL] = t3450->mX.mX[426UL];
    out->mY.mX[375UL] = t3450->mX.mX[424UL];
    t1488[0UL] = t3450->mX.mX[1323UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[432UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int236 = t2179[0UL];
    out->mY.mX[379UL] = t3450->mX.mX[434UL];
    out->mY.mX[382UL] = t3450->mX.mX[432UL];
    t1488[0UL] = t3450->mX.mX[1327UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[440UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int24 = t2179[0UL];
    out->mY.mX[386UL] = t3450->mX.mX[442UL];
    out->mY.mX[389UL] = t3450->mX.mX[440UL];
    t1488[0UL] = t3450->mX.mX[1331UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[448UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int243 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int248 = t2179[0UL];
    out->mY.mX[393UL] = t3450->mX.mX[450UL];
    out->mY.mX[396UL] = t3450->mX.mX[448UL];
    t1488[0UL] = t3450->mX.mX[1335UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[456UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int247 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_57 = t2179[0UL];
    out->mY.mX[400UL] = t3450->mX.mX[458UL];
    out->mY.mX[403UL] = t3450->mX.mX[456UL];
    t1488[0UL] = t3450->mX.mX[1339UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[464UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int253 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int258 = t2179[0UL];
    out->mY.mX[407UL] = t3450->mX.mX[466UL];
    out->mY.mX[410UL] = t3450->mX.mX[464UL];
    t1488[0UL] = t3450->mX.mX[1343UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[472UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int262 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int265 = t2179[0UL];
    out->mY.mX[414UL] = t3450->mX.mX[474UL];
    out->mY.mX[417UL] = t3450->mX.mX[472UL];
    t1488[0UL] = t3450->mX.mX[1347UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[480UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t270.mField0[0UL], &t270.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t270.mField0[0UL], &t270.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int273 = t2179[0UL];
    out->mY.mX[421UL] = t3450->mX.mX[482UL];
    out->mY.mX[424UL] = t3450->mX.mX[480UL];
    t1488[0UL] = t3450->mX.mX[1351UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[488UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int276 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int279 = t2179[0UL];
    out->mY.mX[428UL] = t3450->mX.mX[490UL];
    out->mY.mX[431UL] = t3450->mX.mX[488UL];
    t1488[0UL] = t3450->mX.mX[1355UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[496UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int290 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int283 = t2179[0UL];
    out->mY.mX[435UL] = t3450->mX.mX[498UL];
    out->mY.mX[438UL] = t3450->mX.mX[496UL];
    t1488[0UL] = t3450->mX.mX[1359UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[504UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int293 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int289 = t2179[0UL];
    out->mY.mX[442UL] = t3450->mX.mX[506UL];
    out->mY.mX[445UL] = t3450->mX.mX[504UL];
    t1488[0UL] = t3450->mX.mX[1363UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[512UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int299 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int3 = t2179[0UL];
    out->mY.mX[449UL] = t3450->mX.mX[514UL];
    out->mY.mX[452UL] = t3450->mX.mX[512UL];
    t1488[0UL] = t3450->mX.mX[1367UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[520UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int301 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int304 = t2179[0UL];
    out->mY.mX[456UL] = t3450->mX.mX[522UL];
    out->mY.mX[459UL] = t3450->mX.mX[520UL];
    t1488[0UL] = t3450->mX.mX[1371UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[528UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int314 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int320 = t2179[0UL];
    out->mY.mX[463UL] = t3450->mX.mX[530UL];
    out->mY.mX[466UL] = t3450->mX.mX[528UL];
    t1488[0UL] = t3450->mX.mX[1375UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[536UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t231.mField0[0UL], &t231.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t231.mField0[0UL], &t231.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_67 = t2179[0UL];
    out->mY.mX[470UL] = t3450->mX.mX[538UL];
    out->mY.mX[473UL] = t3450->mX.mX[536UL];
    t1488[0UL] = t3450->mX.mX[1379UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[544UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int324 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int325 = t2179[0UL];
    out->mY.mX[477UL] = t3450->mX.mX[546UL];
    out->mY.mX[480UL] = t3450->mX.mX[544UL];
    t1488[0UL] = t3450->mX.mX[1383UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[552UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int35 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_69 = t2179[0UL];
    out->mY.mX[484UL] = t3450->mX.mX[554UL];
    out->mY.mX[487UL] = t3450->mX.mX[552UL];
    t1488[0UL] = t3450->mX.mX[1387UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[560UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t231.mField0[0UL], &t231.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int334 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t231.mField0[0UL], &t231.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int350 = t2179[0UL];
    out->mY.mX[491UL] = t3450->mX.mX[562UL];
    out->mY.mX[494UL] = t3450->mX.mX[560UL];
    t1488[0UL] = t3450->mX.mX[1391UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[568UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_71 = t2179[0UL];
    out->mY.mX[498UL] = t3450->mX.mX[570UL];
    out->mY.mX[501UL] = t3450->mX.mX[568UL];
    t1488[0UL] = t3450->mX.mX[1395UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[576UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_72 = t2179[0UL];
    out->mY.mX[505UL] = t3450->mX.mX[578UL];
    out->mY.mX[508UL] = t3450->mX.mX[576UL];
    t1488[0UL] = t3450->mX.mX[1399UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[584UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int567 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_73 = t2179[0UL];
    out->mY.mX[512UL] = t3450->mX.mX[586UL];
    out->mY.mX[515UL] = t3450->mX.mX[584UL];
    t1488[0UL] = t3450->mX.mX[1403UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[592UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int565 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int348 = t2179[0UL];
    out->mY.mX[519UL] = t3450->mX.mX[594UL];
    out->mY.mX[522UL] = t3450->mX.mX[592UL];
    t1488[0UL] = t3450->mX.mX[1407UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[600UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int349 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int561 = t2179[0UL];
    out->mY.mX[526UL] = t3450->mX.mX[602UL];
    out->mY.mX[529UL] = t3450->mX.mX[600UL];
    t1488[0UL] = t3450->mX.mX[1411UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[608UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int560 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int353 = t2179[0UL];
    out->mY.mX[533UL] = t3450->mX.mX[610UL];
    out->mY.mX[536UL] = t3450->mX.mX[608UL];
    t1488[0UL] = t3450->mX.mX[1415UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[616UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int354 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int355 = t2179[0UL];
    out->mY.mX[540UL] = t3450->mX.mX[618UL];
    out->mY.mX[543UL] = t3450->mX.mX[616UL];
    t1488[0UL] = t3450->mX.mX[1419UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[624UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int556 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int357 = t2179[0UL];
    out->mY.mX[547UL] = t3450->mX.mX[626UL];
    out->mY.mX[550UL] = t3450->mX.mX[624UL];
    t1488[0UL] = t3450->mX.mX[1423UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[632UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int358 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_79 = t2179[0UL];
    out->mY.mX[554UL] = t3450->mX.mX[634UL];
    out->mY.mX[557UL] = t3450->mX.mX[632UL];
    t1488[0UL] = t3450->mX.mX[1427UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[640UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int38 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_80 = t2179[0UL];
    out->mY.mX[561UL] = t3450->mX.mX[642UL];
    out->mY.mX[564UL] = t3450->mX.mX[640UL];
    t1488[0UL] = t3450->mX.mX[1431UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[648UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int362 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_81 = t2179[0UL];
    out->mY.mX[568UL] = t3450->mX.mX[650UL];
    out->mY.mX[571UL] = t3450->mX.mX[648UL];
    t1488[0UL] = t3450->mX.mX[1435UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[656UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int365 = t2179[0UL];
    out->mY.mX[575UL] = t3450->mX.mX[658UL];
    out->mY.mX[578UL] = t3450->mX.mX[656UL];
    t1488[0UL] = t3450->mX.mX[1439UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[664UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_83 = t2179[0UL];
    out->mY.mX[582UL] = t3450->mX.mX[666UL];
    out->mY.mX[585UL] = t3450->mX.mX[664UL];
    t1488[0UL] = t3450->mX.mX[1443UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[672UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int368 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_84 = t2179[0UL];
    out->mY.mX[589UL] = t3450->mX.mX[674UL];
    out->mY.mX[592UL] = t3450->mX.mX[672UL];
    t1488[0UL] = t3450->mX.mX[1447UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[680UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int541 = t2179[0UL];
    out->mY.mX[596UL] = t3450->mX.mX[682UL];
    out->mY.mX[599UL] = t3450->mX.mX[680UL];
    t1488[0UL] = t3450->mX.mX[1451UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[688UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int540 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int373 = t2179[0UL];
    out->mY.mX[603UL] = t3450->mX.mX[690UL];
    out->mY.mX[606UL] = t3450->mX.mX[688UL];
    t1488[0UL] = t3450->mX.mX[1455UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[696UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int374 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int537 = t2179[0UL];
    out->mY.mX[610UL] = t3450->mX.mX[698UL];
    out->mY.mX[613UL] = t3450->mX.mX[696UL];
    t1488[0UL] = t3450->mX.mX[1459UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[704UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int536 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int535 = t2179[0UL];
    out->mY.mX[617UL] = t3450->mX.mX[706UL];
    out->mY.mX[620UL] = t3450->mX.mX[704UL];
    t1488[0UL] = t3450->mX.mX[1463UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[712UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_89 = t2179[0UL];
    out->mY.mX[624UL] = t3450->mX.mX[714UL];
    out->mY.mX[627UL] = t3450->mX.mX[712UL];
    t1488[0UL] = t3450->mX.mX[1467UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[720UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int530 = t2179[0UL];
    out->mY.mX[631UL] = t3450->mX.mX[722UL];
    out->mY.mX[634UL] = t3450->mX.mX[720UL];
    t1488[0UL] = t3450->mX.mX[1471UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[728UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int551 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int552 = t2179[0UL];
    out->mY.mX[638UL] = t3450->mX.mX[730UL];
    out->mY.mX[641UL] = t3450->mX.mX[728UL];
    t1488[0UL] = t3450->mX.mX[1475UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[736UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int385 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_92 = t2179[0UL];
    out->mY.mX[645UL] = t3450->mX.mX[738UL];
    out->mY.mX[648UL] = t3450->mX.mX[736UL];
    t1488[0UL] = t3450->mX.mX[1479UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[744UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int387 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int388 = t2179[0UL];
    out->mY.mX[652UL] = t3450->mX.mX[746UL];
    out->mY.mX[655UL] = t3450->mX.mX[744UL];
    t1488[0UL] = t3450->mX.mX[1483UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[752UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t270.mField0[0UL], &t270.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t270.mField0[0UL], &t270.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int410 = t2179[0UL];
    out->mY.mX[659UL] = t3450->mX.mX[754UL];
    out->mY.mX[662UL] = t3450->mX.mX[752UL];
    t1488[0UL] = t3450->mX.mX[1487UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[760UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int521 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_95 = t2179[0UL];
    out->mY.mX[666UL] = t3450->mX.mX[762UL];
    out->mY.mX[669UL] = t3450->mX.mX[760UL];
    t1488[0UL] = t3450->mX.mX[1491UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[768UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int393 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int518 = t2179[0UL];
    out->mY.mX[673UL] = t3450->mX.mX[770UL];
    out->mY.mX[676UL] = t3450->mX.mX[768UL];
    t1488[0UL] = t3450->mX.mX[1495UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[776UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int517 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int396 = t2179[0UL];
    out->mY.mX[680UL] = t3450->mX.mX[778UL];
    out->mY.mX[683UL] = t3450->mX.mX[776UL];
    t1488[0UL] = t3450->mX.mX[1499UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[784UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int397 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_98 = t2179[0UL];
    out->mY.mX[687UL] = t3450->mX.mX[786UL];
    out->mY.mX[690UL] = t3450->mX.mX[784UL];
    t1488[0UL] = t3450->mX.mX[1503UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[792UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int458 = t2179[0UL];
    out->mY.mX[694UL] = t3450->mX.mX[794UL];
    out->mY.mX[697UL] = t3450->mX.mX[792UL];
    t1488[0UL] = t3450->mX.mX[1507UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[800UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int401 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_100 = t2179[0UL];
    out->mY.mX[701UL] = t3450->mX.mX[802UL];
    out->mY.mX[704UL] = t3450->mX.mX[800UL];
    t1488[0UL] = t3450->mX.mX[1511UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[808UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int509 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int404 = t2179[0UL];
    out->mY.mX[708UL] = t3450->mX.mX[810UL];
    out->mY.mX[711UL] = t3450->mX.mX[808UL];
    t1488[0UL] = t3450->mX.mX[1515UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[816UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int405 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int528 = t2179[0UL];
    out->mY.mX[715UL] = t3450->mX.mX[818UL];
    out->mY.mX[718UL] = t3450->mX.mX[816UL];
    t1488[0UL] = t3450->mX.mX[1519UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[824UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int504 = t2179[0UL];
    out->mY.mX[722UL] = t3450->mX.mX[826UL];
    out->mY.mX[725UL] = t3450->mX.mX[824UL];
    t1488[0UL] = t3450->mX.mX[1523UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[832UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int501 = t2179[0UL];
    out->mY.mX[729UL] = t3450->mX.mX[834UL];
    out->mY.mX[732UL] = t3450->mX.mX[832UL];
    t1488[0UL] = t3450->mX.mX[1527UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[840UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int500 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_105 = t2179[0UL];
    out->mY.mX[736UL] = t3450->mX.mX[842UL];
    out->mY.mX[739UL] = t3450->mX.mX[840UL];
    t1488[0UL] = t3450->mX.mX[1531UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[848UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int414 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int415 = t2179[0UL];
    out->mY.mX[743UL] = t3450->mX.mX[850UL];
    out->mY.mX[746UL] = t3450->mX.mX[848UL];
    t1488[0UL] = t3450->mX.mX[1535UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[856UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int496 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_107 = t2179[0UL];
    out->mY.mX[750UL] = t3450->mX.mX[858UL];
    out->mY.mX[753UL] = t3450->mX.mX[856UL];
    t1488[0UL] = t3450->mX.mX[1539UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[864UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int494 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_108 = t2179[0UL];
    out->mY.mX[757UL] = t3450->mX.mX[866UL];
    out->mY.mX[760UL] = t3450->mX.mX[864UL];
    t1488[0UL] = t3450->mX.mX[1543UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[872UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int439 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_109 = t2179[0UL];
    out->mY.mX[764UL] = t3450->mX.mX[874UL];
    out->mY.mX[767UL] = t3450->mX.mX[872UL];
    t1488[0UL] = t3450->mX.mX[1547UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[880UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_110 = t2179[0UL];
    out->mY.mX[771UL] = t3450->mX.mX[882UL];
    out->mY.mX[774UL] = t3450->mX.mX[880UL];
    t1488[0UL] = t3450->mX.mX[1551UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[888UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int444 = t2179[0UL];
    out->mY.mX[778UL] = t3450->mX.mX[890UL];
    out->mY.mX[781UL] = t3450->mX.mX[888UL];
    t1488[0UL] = t3450->mX.mX[1555UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[896UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int463 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_112 = t2179[0UL];
    out->mY.mX[785UL] = t3450->mX.mX[898UL];
    out->mY.mX[788UL] = t3450->mX.mX[896UL];
    t1488[0UL] = t3450->mX.mX[1559UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[904UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_113 = t2179[0UL];
    out->mY.mX[792UL] = t3450->mX.mX[906UL];
    out->mY.mX[795UL] = t3450->mX.mX[904UL];
    t1488[0UL] = t3450->mX.mX[1563UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[912UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int457 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int452 = t2179[0UL];
    out->mY.mX[799UL] = t3450->mX.mX[914UL];
    out->mY.mX[802UL] = t3450->mX.mX[912UL];
    t1488[0UL] = t3450->mX.mX[1567UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[920UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int661 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int689 = t2179[0UL];
    out->mY.mX[806UL] = t3450->mX.mX[922UL];
    out->mY.mX[809UL] = t3450->mX.mX[920UL];
    t1488[0UL] = t3450->mX.mX[1571UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[928UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int576 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int579 = t2179[0UL];
    out->mY.mX[813UL] = t3450->mX.mX[930UL];
    out->mY.mX[816UL] = t3450->mX.mX[928UL];
    t1488[0UL] = t3450->mX.mX[1575UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[936UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int586 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_117 = t2179[0UL];
    out->mY.mX[820UL] = t3450->mX.mX[938UL];
    out->mY.mX[823UL] = t3450->mX.mX[936UL];
    t1488[0UL] = t3450->mX.mX[1579UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[944UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int588 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int595 = t2179[0UL];
    out->mY.mX[827UL] = t3450->mX.mX[946UL];
    out->mY.mX[830UL] = t3450->mX.mX[944UL];
    t1488[0UL] = t3450->mX.mX[1583UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[952UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int598 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_119 = t2179[0UL];
    out->mY.mX[834UL] = t3450->mX.mX[954UL];
    out->mY.mX[837UL] = t3450->mX.mX[952UL];
    t1488[0UL] = t3450->mX.mX[1587UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[960UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int600 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int607 = t2179[0UL];
    out->mY.mX[841UL] = t3450->mX.mX[962UL];
    out->mY.mX[844UL] = t3450->mX.mX[960UL];
    t1488[0UL] = t3450->mX.mX[1591UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[968UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int606 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_121 = t2179[0UL];
    out->mY.mX[848UL] = t3450->mX.mX[970UL];
    out->mY.mX[851UL] = t3450->mX.mX[968UL];
    t1488[0UL] = t3450->mX.mX[1595UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[976UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int615 = t2179[0UL];
    out->mY.mX[855UL] = t3450->mX.mX[978UL];
    out->mY.mX[858UL] = t3450->mX.mX[976UL];
    t1488[0UL] = t3450->mX.mX[1599UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[984UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int618 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int625 = t2179[0UL];
    out->mY.mX[862UL] = t3450->mX.mX[986UL];
    out->mY.mX[865UL] = t3450->mX.mX[984UL];
    t1488[0UL] = t3450->mX.mX[1603UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[992UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int628 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int631 = t2179[0UL];
    out->mY.mX[869UL] = t3450->mX.mX[994UL];
    out->mY.mX[872UL] = t3450->mX.mX[992UL];
    t1488[0UL] = t3450->mX.mX[1607UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[1000UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int634 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_125 = t2179[0UL];
    out->mY.mX[876UL] = t3450->mX.mX[1002UL];
    out->mY.mX[879UL] = t3450->mX.mX[1000UL];
    t1488[0UL] = t3450->mX.mX[1611UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[1008UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int638 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_126 = t2179[0UL];
    out->mY.mX[883UL] = t3450->mX.mX[1010UL];
    out->mY.mX[886UL] = t3450->mX.mX[1008UL];
    t1488[0UL] = t3450->mX.mX[1615UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[1016UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int682 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int641 = t2179[0UL];
    out->mY.mX[890UL] = t3450->mX.mX[1018UL];
    out->mY.mX[893UL] = t3450->mX.mX[1016UL];
    t1488[0UL] = t3450->mX.mX[1619UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[1024UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int680 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int643 = t2179[0UL];
    out->mY.mX[897UL] = t3450->mX.mX[1026UL];
    out->mY.mX[900UL] = t3450->mX.mX[1024UL];
    t1488[0UL] = t3450->mX.mX[1623UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[1032UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module16_Cell_1_electricalMod3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int677 = t2179[0UL];
    out->mY.mX[904UL] = t3450->mX.mX[1034UL];
    out->mY.mX[907UL] = t3450->mX.mX[1032UL];
    t1488[0UL] = t3450->mX.mX[1627UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[1040UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int675 = t2179[0UL];
    out->mY.mX[911UL] = t3450->mX.mX[1042UL];
    out->mY.mX[914UL] = t3450->mX.mX[1040UL];
    t1488[0UL] = t3450->mX.mX[1631UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[1048UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int674 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int673 = t2179[0UL];
    out->mY.mX[918UL] = t3450->mX.mX[1050UL];
    out->mY.mX[921UL] = t3450->mX.mX[1048UL];
    t1488[0UL] = t3450->mX.mX[1635UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[1056UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int650 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int651 = t2179[0UL];
    out->mY.mX[925UL] = t3450->mX.mX[1058UL];
    out->mY.mX[928UL] = t3450->mX.mX[1056UL];
    t1488[0UL] = t3450->mX.mX[1639UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[1064UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int652 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int669 = t2179[0UL];
    out->mY.mX[932UL] = t3450->mX.mX[1066UL];
    out->mY.mX[935UL] = t3450->mX.mX[1064UL];
    t1488[0UL] = t3450->mX.mX[1643UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[1072UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int668 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int655 = t2179[0UL];
    out->mY.mX[939UL] = t3450->mX.mX[1074UL];
    out->mY.mX[942UL] = t3450->mX.mX[1072UL];
    t1488[0UL] = t3450->mX.mX[1647UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[1080UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int666 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int665 = t2179[0UL];
    out->mY.mX[946UL] = t3450->mX.mX[1082UL];
    out->mY.mX[949UL] = t3450->mX.mX[1080UL];
    t1488[0UL] = t3450->mX.mX[1651UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[1088UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    out->mY.mX[953UL] = t3450->mX.mX[1090UL];
    out->mY.mX[956UL] = t3450->mX.mX[1088UL];
    t1488[0UL] = t3450->mX.mX[1655UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3450->mX.mX[1096UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t1488[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    t3449 = t1488[0UL];
    tlu2_2d_linear_nearest_value(&t1488[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    out->mY.mX[960UL] = t3450->mX.mX[1098UL];
    out->mY.mX[963UL] = t3450->mX.mX[1096UL];
    if (t3450->mM.mX[0UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int483 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int483 = BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[1UL] != 0) {
        BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3 = t3450->mX.mX[1110UL] * zc_int10;
    }
    if (t3450->mM.mX[771UL] != 0) {
        zc_int10 = 8.200000000000002E-8;
    } else {
        zc_int10 = t3450->mX.mX[1122UL] * intrm_sf_mf_4;
    }
    if (t3450->mM.mX[738UL] != 0) {
        intrm_sf_mf_4 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_4 = t3450->mX.mX[1242UL] * zc_int99;
    }
    if (t3450->mM.mX[727UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int99 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int99 = zc_int102;
    }
    intrm_sf_mf_4 = (((((t3450->mU.mX[0UL] * intrm_sf_mf_4 + t3450->mX.mX[275UL]) + t3450->mX.mX[276UL]) + t3450->mX.mX[277UL]) + t3450->mX.mX[278UL]) + t3450->mX.mX[279UL]) + zc_int99;
    if (t3450->mM.mX[749UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int102 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int102 = BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[760UL] != 0) {
        zc_int99 = 8.200000000000002E-8;
    } else {
        zc_int99 = t3450->mX.mX[1246UL] * zc_int114;
    }
    zc_int102 += ((((t3450->mU.mX[0UL] * zc_int99 + t3450->mX.mX[283UL]) + t3450->mX.mX[284UL]) + t3450->mX.mX[285UL]) + t3450->mX.mX[286UL]) + t3450->mX.mX[287UL];
    if (t3450->mM.mX[772UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int99 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int99 = BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[783UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 = t3450->mX.mX[1250UL] * zc_int118;
    }
    zc_int99 += ((((t3450->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 + t3450->mX.mX[291UL]) + t3450->mX.mX[292UL]) + t3450->mX.mX[293UL]) + t3450->mX.mX[294UL]) + t3450->mX.mX[295UL];
    if (t3450->mM.mX[794UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 = zc_int121;
    }
    if (t3450->mM.mX[805UL] != 0) {
        zc_int114 = 8.200000000000002E-8;
    } else {
        zc_int114 = t3450->mX.mX[1254UL] * zc_int128;
    }
    if (t3450->mM.mX[660UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 = zc_int110;
    }
    zc_int10 = (((((t3450->mU.mX[0UL] * zc_int10 + t3450->mX.mX[35UL]) + t3450->mX.mX[36UL]) + t3450->mX.mX[37UL]) + t3450->mX.mX[38UL]) + t3450->mX.mX[39UL]) + BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3;
    zc_int110 = (((((t3450->mU.mX[0UL] * zc_int114 + t3450->mX.mX[299UL]) + t3450->mX.mX[300UL]) + t3450->mX.mX[301UL]) + t3450->mX.mX[302UL]) + t3450->mX.mX[303UL]) + BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3;
    if (t3450->mM.mX[816UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 = zc_int134;
    }
    if (t3450->mM.mX[827UL] != 0) {
        zc_int114 = 8.200000000000002E-8;
    } else {
        zc_int114 = t3450->mX.mX[1258UL] * zc_int13;
    }
    BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 += ((((t3450->mU.mX[0UL] * zc_int114 + t3450->mX.mX[307UL]) + t3450->mX.mX[308UL]) + t3450->mX.mX[309UL]) + t3450->mX.mX[310UL]) + t3450->mX.mX[311UL];
    if (t3450->mM.mX[838UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int114 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int114 = zc_int133;
    }
    if (t3450->mM.mX[849UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 = t3450->mX.mX[1262UL] * intrm_sf_mf_39;
    }
    zc_int114 += ((((t3450->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 + t3450->mX.mX[315UL]) + t3450->mX.mX[316UL]) + t3450->mX.mX[317UL]) + t3450->mX.mX[318UL]) + t3450->mX.mX[319UL];
    if (t3450->mM.mX[860UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 = zc_int146;
    }
    if (t3450->mM.mX[871UL] != 0) {
        zc_int118 = 8.200000000000002E-8;
    } else {
        zc_int118 = t3450->mX.mX[1266UL] * zc_int147;
    }
    BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 += ((((t3450->mU.mX[0UL] * zc_int118 + t3450->mX.mX[323UL]) + t3450->mX.mX[324UL]) + t3450->mX.mX[325UL]) + t3450->mX.mX[326UL]) + t3450->mX.mX[327UL];
    if (t3450->mM.mX[882UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int118 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int118 = zc_int120;
    }
    if (t3450->mM.mX[883UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int120 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int120 = zc_int148;
    }
    if (t3450->mM.mX[894UL] != 0) {
        zc_int121 = 8.200000000000002E-8;
    } else {
        zc_int121 = t3450->mX.mX[1270UL] * zc_int155;
    }
    zc_int120 += ((((t3450->mU.mX[0UL] * zc_int121 + t3450->mX.mX[331UL]) + t3450->mX.mX[332UL]) + t3450->mX.mX[333UL]) + t3450->mX.mX[334UL]) + t3450->mX.mX[335UL];
    if (t3450->mM.mX[905UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int121 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int121 = zc_int154;
    }
    if (t3450->mM.mX[916UL] != 0) {
        zc_int128 = 8.200000000000002E-8;
    } else {
        zc_int128 = t3450->mX.mX[1274UL] * zc_int164;
    }
    zc_int121 += ((((t3450->mU.mX[0UL] * zc_int128 + t3450->mX.mX[339UL]) + t3450->mX.mX[340UL]) + t3450->mX.mX[341UL]) + t3450->mX.mX[342UL]) + t3450->mX.mX[343UL];
    if (t3450->mM.mX[927UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int128 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int128 = BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[938UL] != 0) {
        zc_int134 = 8.200000000000002E-8;
    } else {
        zc_int134 = t3450->mX.mX[1278UL] * intrm_sf_mf_43;
    }
    zc_int128 += ((((t3450->mU.mX[0UL] * zc_int134 + t3450->mX.mX[347UL]) + t3450->mX.mX[348UL]) + t3450->mX.mX[349UL]) + t3450->mX.mX[350UL]) + t3450->mX.mX[351UL];
    if (t3450->mM.mX[949UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int134 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int134 = zc_int171;
    }
    if (t3450->mM.mX[993UL] != 0) {
        zc_int13 = 8.200000000000002E-8;
    } else {
        zc_int13 = t3450->mX.mX[1126UL] * intrm_sf_mf_5;
    }
    if (t3450->mM.mX[960UL] != 0) {
        intrm_sf_mf_5 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_5 = t3450->mX.mX[1282UL] * intrm_sf_mf_44;
    }
    intrm_sf_mf_5 = (((((t3450->mU.mX[0UL] * intrm_sf_mf_5 + t3450->mX.mX[355UL]) + t3450->mX.mX[356UL]) + t3450->mX.mX[357UL]) + t3450->mX.mX[358UL]) + t3450->mX.mX[359UL]) + zc_int134;
    if (t3450->mM.mX[971UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int134 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int134 = zc_int324;
    }
    if (t3450->mM.mX[982UL] != 0) {
        zc_int133 = 8.200000000000002E-8;
    } else {
        zc_int133 = t3450->mX.mX[1378UL] * zc_int325;
    }
    zc_int134 += ((((t3450->mU.mX[0UL] * zc_int133 + t3450->mX.mX[547UL]) + t3450->mX.mX[548UL]) + t3450->mX.mX[549UL]) + t3450->mX.mX[550UL]) + t3450->mX.mX[551UL];
    if (t3450->mM.mX[994UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int133 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int133 = zc_int177;
    }
    if (t3450->mM.mX[1005UL] != 0) {
        intrm_sf_mf_39 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_39 = t3450->mX.mX[1290UL] * zc_int178;
    }
    zc_int133 += ((((t3450->mU.mX[0UL] * intrm_sf_mf_39 + t3450->mX.mX[371UL]) + t3450->mX.mX[372UL]) + t3450->mX.mX[373UL]) + t3450->mX.mX[374UL]) + t3450->mX.mX[375UL];
    if (t3450->mM.mX[1016UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        intrm_sf_mf_39 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_39 = zc_int183;
    }
    if (t3450->mM.mX[1027UL] != 0) {
        zc_int146 = 8.200000000000002E-8;
    } else {
        zc_int146 = t3450->mX.mX[1294UL] * intrm_sf_mf_47;
    }
    zc_int118 += ((((t3450->mU.mX[0UL] * zc_int13 + t3450->mX.mX[43UL]) + t3450->mX.mX[44UL]) + t3450->mX.mX[45UL]) + t3450->mX.mX[46UL]) + t3450->mX.mX[47UL];
    zc_int13 = (((((t3450->mU.mX[0UL] * zc_int146 + t3450->mX.mX[379UL]) + t3450->mX.mX[380UL]) + t3450->mX.mX[381UL]) + t3450->mX.mX[382UL]) + t3450->mX.mX[383UL]) + intrm_sf_mf_39;
    if (t3450->mM.mX[1038UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        intrm_sf_mf_39 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_39 = zc_int192;
    }
    if (t3450->mM.mX[1049UL] != 0) {
        zc_int146 = 8.200000000000002E-8;
    } else {
        zc_int146 = t3450->mX.mX[1298UL] * zc_int200;
    }
    intrm_sf_mf_39 += ((((t3450->mU.mX[0UL] * zc_int146 + t3450->mX.mX[387UL]) + t3450->mX.mX[388UL]) + t3450->mX.mX[389UL]) + t3450->mX.mX[390UL]) + t3450->mX.mX[391UL];
    if (t3450->mM.mX[1060UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int146 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int146 = zc_int195;
    }
    if (t3450->mM.mX[1071UL] != 0) {
        zc_int147 = 8.200000000000002E-8;
    } else {
        zc_int147 = t3450->mX.mX[1302UL] * zc_int203;
    }
    zc_int146 += ((((t3450->mU.mX[0UL] * zc_int147 + t3450->mX.mX[395UL]) + t3450->mX.mX[396UL]) + t3450->mX.mX[397UL]) + t3450->mX.mX[398UL]) + t3450->mX.mX[399UL];
    if (t3450->mM.mX[1082UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int147 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int147 = zc_int202;
    }
    if (t3450->mM.mX[1093UL] != 0) {
        zc_int148 = 8.200000000000002E-8;
    } else {
        zc_int148 = t3450->mX.mX[1306UL] * zc_int207;
    }
    zc_int147 += ((((t3450->mU.mX[0UL] * zc_int148 + t3450->mX.mX[403UL]) + t3450->mX.mX[404UL]) + t3450->mX.mX[405UL]) + t3450->mX.mX[406UL]) + t3450->mX.mX[407UL];
    if (t3450->mM.mX[2UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int148 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int148 = BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[3UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3 = zc_int208;
    }
    if (t3450->mM.mX[14UL] != 0) {
        zc_int155 = 8.200000000000002E-8;
    } else {
        zc_int155 = t3450->mX.mX[1310UL] * zc_int211;
    }
    BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3 += ((((t3450->mU.mX[0UL] * zc_int155 + t3450->mX.mX[411UL]) + t3450->mX.mX[412UL]) + t3450->mX.mX[413UL]) + t3450->mX.mX[414UL]) + t3450->mX.mX[415UL];
    if (t3450->mM.mX[25UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int155 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int155 = zc_int218;
    }
    if (t3450->mM.mX[36UL] != 0) {
        zc_int154 = 8.200000000000002E-8;
    } else {
        zc_int154 = t3450->mX.mX[1314UL] * intrm_sf_mf_52;
    }
    zc_int155 += ((((t3450->mU.mX[0UL] * zc_int154 + t3450->mX.mX[419UL]) + t3450->mX.mX[420UL]) + t3450->mX.mX[421UL]) + t3450->mX.mX[422UL]) + t3450->mX.mX[423UL];
    if (t3450->mM.mX[47UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int154 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int154 = zc_int22;
    }
    if (t3450->mM.mX[58UL] != 0) {
        zc_int164 = 8.200000000000002E-8;
    } else {
        zc_int164 = t3450->mX.mX[1318UL] * zc_int225;
    }
    zc_int154 += ((((t3450->mU.mX[0UL] * zc_int164 + t3450->mX.mX[427UL]) + t3450->mX.mX[428UL]) + t3450->mX.mX[429UL]) + t3450->mX.mX[430UL]) + t3450->mX.mX[431UL];
    if (t3450->mM.mX[69UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int164 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int164 = BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[113UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3 = t3450->mX.mX[1130UL] * zc_int161;
    }
    if (t3450->mM.mX[80UL] != 0) {
        zc_int161 = 8.200000000000002E-8;
    } else {
        zc_int161 = t3450->mX.mX[1322UL] * zc_int236;
    }
    zc_int161 = (((((t3450->mU.mX[0UL] * zc_int161 + t3450->mX.mX[435UL]) + t3450->mX.mX[436UL]) + t3450->mX.mX[437UL]) + t3450->mX.mX[438UL]) + t3450->mX.mX[439UL]) + zc_int164;
    if (t3450->mM.mX[91UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int164 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int164 = BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[102UL] != 0) {
        intrm_sf_mf_43 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_43 = t3450->mX.mX[1326UL] * zc_int24;
    }
    zc_int164 += ((((t3450->mU.mX[0UL] * intrm_sf_mf_43 + t3450->mX.mX[443UL]) + t3450->mX.mX[444UL]) + t3450->mX.mX[445UL]) + t3450->mX.mX[446UL]) + t3450->mX.mX[447UL];
    if (t3450->mM.mX[114UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        intrm_sf_mf_43 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_43 = zc_int243;
    }
    if (t3450->mM.mX[119UL] != 0) {
        zc_int171 = 8.200000000000002E-8;
    } else {
        zc_int171 = t3450->mX.mX[1330UL] * zc_int248;
    }
    intrm_sf_mf_43 += ((((t3450->mU.mX[0UL] * zc_int171 + t3450->mX.mX[451UL]) + t3450->mX.mX[452UL]) + t3450->mX.mX[453UL]) + t3450->mX.mX[454UL]) + t3450->mX.mX[455UL];
    if (t3450->mM.mX[120UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int171 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int171 = zc_int247;
    }
    if (t3450->mM.mX[121UL] != 0) {
        intrm_sf_mf_44 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_44 = t3450->mX.mX[1334UL] * intrm_sf_mf_57;
    }
    zc_int148 += ((((t3450->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3 + t3450->mX.mX[51UL]) + t3450->mX.mX[52UL]) + t3450->mX.mX[53UL]) + t3450->mX.mX[54UL]) + t3450->mX.mX[55UL];
    BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3 = (((((t3450->mU.mX[0UL] * intrm_sf_mf_44 + t3450->mX.mX[459UL]) + t3450->mX.mX[460UL]) + t3450->mX.mX[461UL]) + t3450->mX.mX[462UL]) + t3450->mX.mX[463UL]) + zc_int171;
    if (t3450->mM.mX[122UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int171 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int171 = zc_int253;
    }
    if (t3450->mM.mX[123UL] != 0) {
        intrm_sf_mf_44 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_44 = t3450->mX.mX[1338UL] * zc_int258;
    }
    zc_int171 += ((((t3450->mU.mX[0UL] * intrm_sf_mf_44 + t3450->mX.mX[467UL]) + t3450->mX.mX[468UL]) + t3450->mX.mX[469UL]) + t3450->mX.mX[470UL]) + t3450->mX.mX[471UL];
    if (t3450->mM.mX[124UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        intrm_sf_mf_44 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_44 = zc_int262;
    }
    if (t3450->mM.mX[125UL] != 0) {
        zc_int177 = 8.200000000000002E-8;
    } else {
        zc_int177 = t3450->mX.mX[1342UL] * zc_int265;
    }
    intrm_sf_mf_44 += ((((t3450->mU.mX[0UL] * zc_int177 + t3450->mX.mX[475UL]) + t3450->mX.mX[476UL]) + t3450->mX.mX[477UL]) + t3450->mX.mX[478UL]) + t3450->mX.mX[479UL];
    if (t3450->mM.mX[126UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int177 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int177 = BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[127UL] != 0) {
        zc_int178 = 8.200000000000002E-8;
    } else {
        zc_int178 = t3450->mX.mX[1346UL] * zc_int273;
    }
    zc_int177 += ((((t3450->mU.mX[0UL] * zc_int178 + t3450->mX.mX[483UL]) + t3450->mX.mX[484UL]) + t3450->mX.mX[485UL]) + t3450->mX.mX[486UL]) + t3450->mX.mX[487UL];
    if (t3450->mM.mX[128UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int178 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int178 = BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[129UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3 = zc_int276;
    }
    if (t3450->mM.mX[130UL] != 0) {
        zc_int183 = 8.200000000000002E-8;
    } else {
        zc_int183 = t3450->mX.mX[1350UL] * zc_int279;
    }
    BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3 += ((((t3450->mU.mX[0UL] * zc_int183 + t3450->mX.mX[491UL]) + t3450->mX.mX[492UL]) + t3450->mX.mX[493UL]) + t3450->mX.mX[494UL]) + t3450->mX.mX[495UL];
    if (t3450->mM.mX[131UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int183 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int183 = zc_int290;
    }
    if (t3450->mM.mX[132UL] != 0) {
        intrm_sf_mf_47 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_47 = t3450->mX.mX[1354UL] * zc_int283;
    }
    zc_int183 += ((((t3450->mU.mX[0UL] * intrm_sf_mf_47 + t3450->mX.mX[499UL]) + t3450->mX.mX[500UL]) + t3450->mX.mX[501UL]) + t3450->mX.mX[502UL]) + t3450->mX.mX[503UL];
    if (t3450->mM.mX[133UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        intrm_sf_mf_47 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_47 = zc_int293;
    }
    if (t3450->mM.mX[134UL] != 0) {
        zc_int192 = 8.200000000000002E-8;
    } else {
        zc_int192 = t3450->mX.mX[1358UL] * zc_int289;
    }
    intrm_sf_mf_47 += ((((t3450->mU.mX[0UL] * zc_int192 + t3450->mX.mX[507UL]) + t3450->mX.mX[508UL]) + t3450->mX.mX[509UL]) + t3450->mX.mX[510UL]) + t3450->mX.mX[511UL];
    if (t3450->mM.mX[135UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int192 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int192 = zc_int299;
    }
    if (t3450->mM.mX[139UL] != 0) {
        zc_int200 = 8.200000000000002E-8;
    } else {
        zc_int200 = t3450->mX.mX[1134UL] * intrm_sf_mf_7;
    }
    if (t3450->mM.mX[136UL] != 0) {
        intrm_sf_mf_7 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_7 = t3450->mX.mX[1362UL] * zc_int3;
    }
    intrm_sf_mf_7 = (((((t3450->mU.mX[0UL] * intrm_sf_mf_7 + t3450->mX.mX[515UL]) + t3450->mX.mX[516UL]) + t3450->mX.mX[517UL]) + t3450->mX.mX[518UL]) + t3450->mX.mX[519UL]) + zc_int192;
    if (t3450->mM.mX[137UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int192 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int192 = zc_int301;
    }
    if (t3450->mM.mX[138UL] != 0) {
        zc_int195 = 8.200000000000002E-8;
    } else {
        zc_int195 = t3450->mX.mX[1366UL] * zc_int304;
    }
    zc_int192 += ((((t3450->mU.mX[0UL] * zc_int195 + t3450->mX.mX[523UL]) + t3450->mX.mX[524UL]) + t3450->mX.mX[525UL]) + t3450->mX.mX[526UL]) + t3450->mX.mX[527UL];
    if (t3450->mM.mX[140UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int195 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int195 = zc_int314;
    }
    if (t3450->mM.mX[141UL] != 0) {
        zc_int203 = 8.200000000000002E-8;
    } else {
        zc_int203 = t3450->mX.mX[1370UL] * zc_int320;
    }
    zc_int195 += ((((t3450->mU.mX[0UL] * zc_int203 + t3450->mX.mX[531UL]) + t3450->mX.mX[532UL]) + t3450->mX.mX[533UL]) + t3450->mX.mX[534UL]) + t3450->mX.mX[535UL];
    if (t3450->mM.mX[142UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int203 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int203 = BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[143UL] != 0) {
        zc_int202 = 8.200000000000002E-8;
    } else {
        zc_int202 = t3450->mX.mX[1374UL] * intrm_sf_mf_67;
    }
    BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3 = (((((t3450->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3 + t3450->mX.mX[11UL]) + t3450->mX.mX[12UL]) + t3450->mX.mX[13UL]) + t3450->mX.mX[14UL]) + t3450->mX.mX[15UL]) + zc_int483;
    zc_int178 += ((((t3450->mU.mX[0UL] * zc_int200 + t3450->mX.mX[59UL]) + t3450->mX.mX[60UL]) + t3450->mX.mX[61UL]) + t3450->mX.mX[62UL]) + t3450->mX.mX[63UL];
    zc_int200 = (((((t3450->mU.mX[0UL] * zc_int202 + t3450->mX.mX[539UL]) + t3450->mX.mX[540UL]) + t3450->mX.mX[541UL]) + t3450->mX.mX[542UL]) + t3450->mX.mX[543UL]) + zc_int203;
    if (t3450->mM.mX[144UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int203 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int203 = zc_int551;
    }
    if (t3450->mM.mX[145UL] != 0) {
        zc_int202 = 8.200000000000002E-8;
    } else {
        zc_int202 = t3450->mX.mX[1470UL] * zc_int552;
    }
    zc_int203 += ((((t3450->mU.mX[0UL] * zc_int202 + t3450->mX.mX[731UL]) + t3450->mX.mX[732UL]) + t3450->mX.mX[733UL]) + t3450->mX.mX[734UL]) + t3450->mX.mX[735UL];
    if (t3450->mM.mX[146UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int202 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int202 = zc_int35;
    }
    if (t3450->mM.mX[147UL] != 0) {
        zc_int207 = 8.200000000000002E-8;
    } else {
        zc_int207 = t3450->mX.mX[1382UL] * intrm_sf_mf_69;
    }
    zc_int202 += ((((t3450->mU.mX[0UL] * zc_int207 + t3450->mX.mX[555UL]) + t3450->mX.mX[556UL]) + t3450->mX.mX[557UL]) + t3450->mX.mX[558UL]) + t3450->mX.mX[559UL];
    if (t3450->mM.mX[148UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int207 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int207 = zc_int334;
    }
    if (t3450->mM.mX[149UL] != 0) {
        zc_int208 = 8.200000000000002E-8;
    } else {
        zc_int208 = t3450->mX.mX[1386UL] * zc_int350;
    }
    zc_int207 += ((((t3450->mU.mX[0UL] * zc_int208 + t3450->mX.mX[563UL]) + t3450->mX.mX[564UL]) + t3450->mX.mX[565UL]) + t3450->mX.mX[566UL]) + t3450->mX.mX[567UL];
    if (t3450->mM.mX[150UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int208 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int208 = zc_int212;
    }
    if (t3450->mM.mX[151UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int212 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int212 = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[152UL] != 0) {
        zc_int211 = 8.200000000000002E-8;
    } else {
        zc_int211 = t3450->mX.mX[1390UL] * intrm_sf_mf_71;
    }
    zc_int212 += ((((t3450->mU.mX[0UL] * zc_int211 + t3450->mX.mX[571UL]) + t3450->mX.mX[572UL]) + t3450->mX.mX[573UL]) + t3450->mX.mX[574UL]) + t3450->mX.mX[575UL];
    if (t3450->mM.mX[153UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int211 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int211 = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[154UL] != 0) {
        zc_int218 = 8.200000000000002E-8;
    } else {
        zc_int218 = t3450->mX.mX[1394UL] * intrm_sf_mf_72;
    }
    zc_int211 += ((((t3450->mU.mX[0UL] * zc_int218 + t3450->mX.mX[579UL]) + t3450->mX.mX[580UL]) + t3450->mX.mX[581UL]) + t3450->mX.mX[582UL]) + t3450->mX.mX[583UL];
    if (t3450->mM.mX[155UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int218 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int218 = zc_int567;
    }
    if (t3450->mM.mX[156UL] != 0) {
        intrm_sf_mf_52 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_52 = t3450->mX.mX[1398UL] * intrm_sf_mf_73;
    }
    zc_int218 += ((((t3450->mU.mX[0UL] * intrm_sf_mf_52 + t3450->mX.mX[587UL]) + t3450->mX.mX[588UL]) + t3450->mX.mX[589UL]) + t3450->mX.mX[590UL]) + t3450->mX.mX[591UL];
    if (t3450->mM.mX[157UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        intrm_sf_mf_52 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_52 = zc_int565;
    }
    if (t3450->mM.mX[161UL] != 0) {
        zc_int22 = 8.200000000000002E-8;
    } else {
        zc_int22 = t3450->mX.mX[1138UL] * zc_int221;
    }
    if (t3450->mM.mX[158UL] != 0) {
        zc_int221 = 8.200000000000002E-8;
    } else {
        zc_int221 = t3450->mX.mX[1402UL] * zc_int348;
    }
    zc_int221 = (((((t3450->mU.mX[0UL] * zc_int221 + t3450->mX.mX[595UL]) + t3450->mX.mX[596UL]) + t3450->mX.mX[597UL]) + t3450->mX.mX[598UL]) + t3450->mX.mX[599UL]) + intrm_sf_mf_52;
    if (t3450->mM.mX[159UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        intrm_sf_mf_52 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_52 = zc_int349;
    }
    if (t3450->mM.mX[160UL] != 0) {
        zc_int225 = 8.200000000000002E-8;
    } else {
        zc_int225 = t3450->mX.mX[1406UL] * zc_int561;
    }
    intrm_sf_mf_52 += ((((t3450->mU.mX[0UL] * zc_int225 + t3450->mX.mX[603UL]) + t3450->mX.mX[604UL]) + t3450->mX.mX[605UL]) + t3450->mX.mX[606UL]) + t3450->mX.mX[607UL];
    if (t3450->mM.mX[162UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int225 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int225 = zc_int560;
    }
    if (t3450->mM.mX[163UL] != 0) {
        BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 = t3450->mX.mX[1410UL] * zc_int353;
    }
    zc_int225 += ((((t3450->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 + t3450->mX.mX[611UL]) + t3450->mX.mX[612UL]) + t3450->mX.mX[613UL]) + t3450->mX.mX[614UL]) + t3450->mX.mX[615UL];
    if (t3450->mM.mX[164UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 = zc_int354;
    }
    if (t3450->mM.mX[165UL] != 0) {
        zc_int236 = 8.200000000000002E-8;
    } else {
        zc_int236 = t3450->mX.mX[1414UL] * zc_int355;
    }
    zc_int208 += ((((t3450->mU.mX[0UL] * zc_int22 + t3450->mX.mX[67UL]) + t3450->mX.mX[68UL]) + t3450->mX.mX[69UL]) + t3450->mX.mX[70UL]) + t3450->mX.mX[71UL];
    zc_int22 = (((((t3450->mU.mX[0UL] * zc_int236 + t3450->mX.mX[619UL]) + t3450->mX.mX[620UL]) + t3450->mX.mX[621UL]) + t3450->mX.mX[622UL]) + t3450->mX.mX[623UL]) + BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3;
    if (t3450->mM.mX[166UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 = zc_int556;
    }
    if (t3450->mM.mX[167UL] != 0) {
        zc_int236 = 8.200000000000002E-8;
    } else {
        zc_int236 = t3450->mX.mX[1418UL] * zc_int357;
    }
    BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 += ((((t3450->mU.mX[0UL] * zc_int236 + t3450->mX.mX[627UL]) + t3450->mX.mX[628UL]) + t3450->mX.mX[629UL]) + t3450->mX.mX[630UL]) + t3450->mX.mX[631UL];
    if (t3450->mM.mX[168UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int236 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int236 = zc_int358;
    }
    if (t3450->mM.mX[169UL] != 0) {
        BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 = t3450->mX.mX[1422UL] * intrm_sf_mf_79;
    }
    zc_int236 += ((((t3450->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 + t3450->mX.mX[635UL]) + t3450->mX.mX[636UL]) + t3450->mX.mX[637UL]) + t3450->mX.mX[638UL]) + t3450->mX.mX[639UL];
    if (t3450->mM.mX[170UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 = zc_int38;
    }
    if (t3450->mM.mX[171UL] != 0) {
        zc_int24 = 8.200000000000002E-8;
    } else {
        zc_int24 = t3450->mX.mX[1426UL] * intrm_sf_mf_80;
    }
    BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 += ((((t3450->mU.mX[0UL] * zc_int24 + t3450->mX.mX[643UL]) + t3450->mX.mX[644UL]) + t3450->mX.mX[645UL]) + t3450->mX.mX[646UL]) + t3450->mX.mX[647UL];
    if (t3450->mM.mX[172UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int24 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int24 = zc_int242;
    }
    if (t3450->mM.mX[173UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int242 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int242 = zc_int362;
    }
    if (t3450->mM.mX[174UL] != 0) {
        zc_int243 = 8.200000000000002E-8;
    } else {
        zc_int243 = t3450->mX.mX[1430UL] * intrm_sf_mf_81;
    }
    zc_int242 += ((((t3450->mU.mX[0UL] * zc_int243 + t3450->mX.mX[651UL]) + t3450->mX.mX[652UL]) + t3450->mX.mX[653UL]) + t3450->mX.mX[654UL]) + t3450->mX.mX[655UL];
    if (t3450->mM.mX[175UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int243 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int243 = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[176UL] != 0) {
        zc_int248 = 8.200000000000002E-8;
    } else {
        zc_int248 = t3450->mX.mX[1434UL] * zc_int365;
    }
    zc_int243 += ((((t3450->mU.mX[0UL] * zc_int248 + t3450->mX.mX[659UL]) + t3450->mX.mX[660UL]) + t3450->mX.mX[661UL]) + t3450->mX.mX[662UL]) + t3450->mX.mX[663UL];
    if (t3450->mM.mX[177UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int248 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int248 = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[178UL] != 0) {
        zc_int247 = 8.200000000000002E-8;
    } else {
        zc_int247 = t3450->mX.mX[1438UL] * intrm_sf_mf_83;
    }
    zc_int248 += ((((t3450->mU.mX[0UL] * zc_int247 + t3450->mX.mX[667UL]) + t3450->mX.mX[668UL]) + t3450->mX.mX[669UL]) + t3450->mX.mX[670UL]) + t3450->mX.mX[671UL];
    if (t3450->mM.mX[179UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int247 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int247 = zc_int368;
    }
    if (t3450->mM.mX[183UL] != 0) {
        intrm_sf_mf_57 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_57 = t3450->mX.mX[1142UL] * zc_int250;
    }
    if (t3450->mM.mX[180UL] != 0) {
        zc_int250 = 8.200000000000002E-8;
    } else {
        zc_int250 = t3450->mX.mX[1442UL] * intrm_sf_mf_84;
    }
    zc_int250 = (((((t3450->mU.mX[0UL] * zc_int250 + t3450->mX.mX[675UL]) + t3450->mX.mX[676UL]) + t3450->mX.mX[677UL]) + t3450->mX.mX[678UL]) + t3450->mX.mX[679UL]) + zc_int247;
    if (t3450->mM.mX[181UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int247 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int247 = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[182UL] != 0) {
        zc_int253 = 8.200000000000002E-8;
    } else {
        zc_int253 = t3450->mX.mX[1446UL] * zc_int541;
    }
    zc_int247 += ((((t3450->mU.mX[0UL] * zc_int253 + t3450->mX.mX[683UL]) + t3450->mX.mX[684UL]) + t3450->mX.mX[685UL]) + t3450->mX.mX[686UL]) + t3450->mX.mX[687UL];
    if (t3450->mM.mX[184UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int253 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int253 = zc_int540;
    }
    if (t3450->mM.mX[185UL] != 0) {
        zc_int258 = 8.200000000000002E-8;
    } else {
        zc_int258 = t3450->mX.mX[1450UL] * zc_int373;
    }
    zc_int253 += ((((t3450->mU.mX[0UL] * zc_int258 + t3450->mX.mX[691UL]) + t3450->mX.mX[692UL]) + t3450->mX.mX[693UL]) + t3450->mX.mX[694UL]) + t3450->mX.mX[695UL];
    if (t3450->mM.mX[186UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int258 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int258 = zc_int374;
    }
    if (t3450->mM.mX[187UL] != 0) {
        zc_int262 = 8.200000000000002E-8;
    } else {
        zc_int262 = t3450->mX.mX[1454UL] * zc_int537;
    }
    zc_int24 += ((((t3450->mU.mX[0UL] * intrm_sf_mf_57 + t3450->mX.mX[75UL]) + t3450->mX.mX[76UL]) + t3450->mX.mX[77UL]) + t3450->mX.mX[78UL]) + t3450->mX.mX[79UL];
    intrm_sf_mf_57 = (((((t3450->mU.mX[0UL] * zc_int262 + t3450->mX.mX[699UL]) + t3450->mX.mX[700UL]) + t3450->mX.mX[701UL]) + t3450->mX.mX[702UL]) + t3450->mX.mX[703UL]) + zc_int258;
    if (t3450->mM.mX[188UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int258 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int258 = zc_int536;
    }
    if (t3450->mM.mX[189UL] != 0) {
        zc_int262 = 8.200000000000002E-8;
    } else {
        zc_int262 = t3450->mX.mX[1458UL] * zc_int535;
    }
    zc_int258 += ((((t3450->mU.mX[0UL] * zc_int262 + t3450->mX.mX[707UL]) + t3450->mX.mX[708UL]) + t3450->mX.mX[709UL]) + t3450->mX.mX[710UL]) + t3450->mX.mX[711UL];
    if (t3450->mM.mX[190UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int262 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int262 = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[191UL] != 0) {
        zc_int265 = 8.200000000000002E-8;
    } else {
        zc_int265 = t3450->mX.mX[1462UL] * intrm_sf_mf_89;
    }
    zc_int262 += ((((t3450->mU.mX[0UL] * zc_int265 + t3450->mX.mX[715UL]) + t3450->mX.mX[716UL]) + t3450->mX.mX[717UL]) + t3450->mX.mX[718UL]) + t3450->mX.mX[719UL];
    if (t3450->mM.mX[192UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int265 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int265 = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[193UL] != 0) {
        BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 = t3450->mX.mX[1466UL] * zc_int530;
    }
    zc_int265 += ((((t3450->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 + t3450->mX.mX[723UL]) + t3450->mX.mX[724UL]) + t3450->mX.mX[725UL]) + t3450->mX.mX[726UL]) + t3450->mX.mX[727UL];
    if (t3450->mM.mX[194UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 = BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[195UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3 = zc_int457;
    }
    if (t3450->mM.mX[196UL] != 0) {
        zc_int273 = 8.200000000000002E-8;
    } else {
        zc_int273 = t3450->mX.mX[1562UL] * zc_int452;
    }
    BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3 += ((((t3450->mU.mX[0UL] * zc_int273 + t3450->mX.mX[915UL]) + t3450->mX.mX[916UL]) + t3450->mX.mX[917UL]) + t3450->mX.mX[918UL]) + t3450->mX.mX[919UL];
    if (t3450->mM.mX[197UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int273 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int273 = zc_int385;
    }
    if (t3450->mM.mX[198UL] != 0) {
        zc_int276 = 8.200000000000002E-8;
    } else {
        zc_int276 = t3450->mX.mX[1474UL] * intrm_sf_mf_92;
    }
    zc_int273 += ((((t3450->mU.mX[0UL] * zc_int276 + t3450->mX.mX[739UL]) + t3450->mX.mX[740UL]) + t3450->mX.mX[741UL]) + t3450->mX.mX[742UL]) + t3450->mX.mX[743UL];
    if (t3450->mM.mX[199UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int276 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int276 = zc_int387;
    }
    if (t3450->mM.mX[200UL] != 0) {
        zc_int279 = 8.200000000000002E-8;
    } else {
        zc_int279 = t3450->mX.mX[1478UL] * zc_int388;
    }
    zc_int276 += ((((t3450->mU.mX[0UL] * zc_int279 + t3450->mX.mX[747UL]) + t3450->mX.mX[748UL]) + t3450->mX.mX[749UL]) + t3450->mX.mX[750UL]) + t3450->mX.mX[751UL];
    if (t3450->mM.mX[201UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int279 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int279 = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[205UL] != 0) {
        zc_int290 = 8.200000000000002E-8;
    } else {
        zc_int290 = t3450->mX.mX[1146UL] * zc_int281;
    }
    if (t3450->mM.mX[202UL] != 0) {
        zc_int281 = 8.200000000000002E-8;
    } else {
        zc_int281 = t3450->mX.mX[1482UL] * zc_int410;
    }
    zc_int281 = (((((t3450->mU.mX[0UL] * zc_int281 + t3450->mX.mX[755UL]) + t3450->mX.mX[756UL]) + t3450->mX.mX[757UL]) + t3450->mX.mX[758UL]) + t3450->mX.mX[759UL]) + zc_int279;
    if (t3450->mM.mX[203UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int279 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int279 = zc_int521;
    }
    if (t3450->mM.mX[204UL] != 0) {
        zc_int283 = 8.200000000000002E-8;
    } else {
        zc_int283 = t3450->mX.mX[1486UL] * intrm_sf_mf_95;
    }
    zc_int279 += ((((t3450->mU.mX[0UL] * zc_int283 + t3450->mX.mX[763UL]) + t3450->mX.mX[764UL]) + t3450->mX.mX[765UL]) + t3450->mX.mX[766UL]) + t3450->mX.mX[767UL];
    if (t3450->mM.mX[206UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int283 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int283 = zc_int393;
    }
    if (t3450->mM.mX[207UL] != 0) {
        zc_int293 = 8.200000000000002E-8;
    } else {
        zc_int293 = t3450->mX.mX[1490UL] * zc_int518;
    }
    zc_int283 += ((((t3450->mU.mX[0UL] * zc_int293 + t3450->mX.mX[771UL]) + t3450->mX.mX[772UL]) + t3450->mX.mX[773UL]) + t3450->mX.mX[774UL]) + t3450->mX.mX[775UL];
    if (t3450->mM.mX[208UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int293 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int293 = zc_int517;
    }
    if (t3450->mM.mX[209UL] != 0) {
        zc_int289 = 8.200000000000002E-8;
    } else {
        zc_int289 = t3450->mX.mX[1494UL] * zc_int396;
    }
    BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 += ((((t3450->mU.mX[0UL] * zc_int290 + t3450->mX.mX[83UL]) + t3450->mX.mX[84UL]) + t3450->mX.mX[85UL]) + t3450->mX.mX[86UL]) + t3450->mX.mX[87UL];
    zc_int290 = (((((t3450->mU.mX[0UL] * zc_int289 + t3450->mX.mX[779UL]) + t3450->mX.mX[780UL]) + t3450->mX.mX[781UL]) + t3450->mX.mX[782UL]) + t3450->mX.mX[783UL]) + zc_int293;
    if (t3450->mM.mX[210UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int293 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int293 = zc_int397;
    }
    if (t3450->mM.mX[211UL] != 0) {
        zc_int289 = 8.200000000000002E-8;
    } else {
        zc_int289 = t3450->mX.mX[1498UL] * intrm_sf_mf_98;
    }
    zc_int293 += ((((t3450->mU.mX[0UL] * zc_int289 + t3450->mX.mX[787UL]) + t3450->mX.mX[788UL]) + t3450->mX.mX[789UL]) + t3450->mX.mX[790UL]) + t3450->mX.mX[791UL];
    if (t3450->mM.mX[212UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int289 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int289 = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[213UL] != 0) {
        zc_int299 = 8.200000000000002E-8;
    } else {
        zc_int299 = t3450->mX.mX[1502UL] * zc_int458;
    }
    zc_int289 += ((((t3450->mU.mX[0UL] * zc_int299 + t3450->mX.mX[795UL]) + t3450->mX.mX[796UL]) + t3450->mX.mX[797UL]) + t3450->mX.mX[798UL]) + t3450->mX.mX[799UL];
    if (t3450->mM.mX[214UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int299 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int299 = zc_int401;
    }
    if (t3450->mM.mX[215UL] != 0) {
        zc_int3 = 8.200000000000002E-8;
    } else {
        zc_int3 = t3450->mX.mX[1506UL] * intrm_sf_mf_100;
    }
    zc_int299 += ((((t3450->mU.mX[0UL] * zc_int3 + t3450->mX.mX[803UL]) + t3450->mX.mX[804UL]) + t3450->mX.mX[805UL]) + t3450->mX.mX[806UL]) + t3450->mX.mX[807UL];
    if (t3450->mM.mX[216UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int3 = zc_int30;
    }
    if (t3450->mM.mX[217UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int30 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int30 = BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[218UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3 = zc_int509;
    }
    if (t3450->mM.mX[219UL] != 0) {
        zc_int301 = 8.200000000000002E-8;
    } else {
        zc_int301 = t3450->mX.mX[1510UL] * zc_int404;
    }
    BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3 += ((((t3450->mU.mX[0UL] * zc_int301 + t3450->mX.mX[811UL]) + t3450->mX.mX[812UL]) + t3450->mX.mX[813UL]) + t3450->mX.mX[814UL]) + t3450->mX.mX[815UL];
    if (t3450->mM.mX[220UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int301 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int301 = zc_int405;
    }
    if (t3450->mM.mX[221UL] != 0) {
        zc_int304 = 8.200000000000002E-8;
    } else {
        zc_int304 = t3450->mX.mX[1514UL] * zc_int528;
    }
    zc_int301 += ((((t3450->mU.mX[0UL] * zc_int304 + t3450->mX.mX[819UL]) + t3450->mX.mX[820UL]) + t3450->mX.mX[821UL]) + t3450->mX.mX[822UL]) + t3450->mX.mX[823UL];
    if (t3450->mM.mX[222UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int304 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int304 = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[223UL] != 0) {
        zc_int314 = 8.200000000000002E-8;
    } else {
        zc_int314 = t3450->mX.mX[1518UL] * zc_int504;
    }
    zc_int304 += ((((t3450->mU.mX[0UL] * zc_int314 + t3450->mX.mX[827UL]) + t3450->mX.mX[828UL]) + t3450->mX.mX[829UL]) + t3450->mX.mX[830UL]) + t3450->mX.mX[831UL];
    if (t3450->mM.mX[224UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int314 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int314 = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[228UL] != 0) {
        zc_int320 = 8.200000000000002E-8;
    } else {
        zc_int320 = t3450->mX.mX[1150UL] * intrm_sf_mf_11;
    }
    if (t3450->mM.mX[225UL] != 0) {
        intrm_sf_mf_11 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_11 = t3450->mX.mX[1522UL] * zc_int501;
    }
    intrm_sf_mf_11 = (((((t3450->mU.mX[0UL] * intrm_sf_mf_11 + t3450->mX.mX[835UL]) + t3450->mX.mX[836UL]) + t3450->mX.mX[837UL]) + t3450->mX.mX[838UL]) + t3450->mX.mX[839UL]) + zc_int314;
    if (t3450->mM.mX[226UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int314 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int314 = zc_int500;
    }
    if (t3450->mM.mX[227UL] != 0) {
        BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 = t3450->mX.mX[1526UL] * intrm_sf_mf_105;
    }
    zc_int314 += ((((t3450->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 + t3450->mX.mX[843UL]) + t3450->mX.mX[844UL]) + t3450->mX.mX[845UL]) + t3450->mX.mX[846UL]) + t3450->mX.mX[847UL];
    if (t3450->mM.mX[229UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 = zc_int414;
    }
    if (t3450->mM.mX[230UL] != 0) {
        intrm_sf_mf_67 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_67 = t3450->mX.mX[1530UL] * zc_int415;
    }
    BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 += ((((t3450->mU.mX[0UL] * intrm_sf_mf_67 + t3450->mX.mX[851UL]) + t3450->mX.mX[852UL]) + t3450->mX.mX[853UL]) + t3450->mX.mX[854UL]) + t3450->mX.mX[855UL];
    if (t3450->mM.mX[231UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        intrm_sf_mf_67 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_67 = zc_int496;
    }
    if (t3450->mM.mX[232UL] != 0) {
        zc_int324 = 8.200000000000002E-8;
    } else {
        zc_int324 = t3450->mX.mX[1534UL] * intrm_sf_mf_107;
    }
    zc_int30 += ((((t3450->mU.mX[0UL] * zc_int320 + t3450->mX.mX[91UL]) + t3450->mX.mX[92UL]) + t3450->mX.mX[93UL]) + t3450->mX.mX[94UL]) + t3450->mX.mX[95UL];
    zc_int320 = (((((t3450->mU.mX[0UL] * zc_int324 + t3450->mX.mX[859UL]) + t3450->mX.mX[860UL]) + t3450->mX.mX[861UL]) + t3450->mX.mX[862UL]) + t3450->mX.mX[863UL]) + intrm_sf_mf_67;
    if (t3450->mM.mX[233UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        intrm_sf_mf_67 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_67 = zc_int494;
    }
    if (t3450->mM.mX[234UL] != 0) {
        zc_int324 = 8.200000000000002E-8;
    } else {
        zc_int324 = t3450->mX.mX[1538UL] * intrm_sf_mf_108;
    }
    intrm_sf_mf_67 += ((((t3450->mU.mX[0UL] * zc_int324 + t3450->mX.mX[867UL]) + t3450->mX.mX[868UL]) + t3450->mX.mX[869UL]) + t3450->mX.mX[870UL]) + t3450->mX.mX[871UL];
    if (t3450->mM.mX[235UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int324 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int324 = zc_int439;
    }
    if (t3450->mM.mX[236UL] != 0) {
        zc_int325 = 8.200000000000002E-8;
    } else {
        zc_int325 = t3450->mX.mX[1542UL] * intrm_sf_mf_109;
    }
    zc_int324 += ((((t3450->mU.mX[0UL] * zc_int325 + t3450->mX.mX[875UL]) + t3450->mX.mX[876UL]) + t3450->mX.mX[877UL]) + t3450->mX.mX[878UL]) + t3450->mX.mX[879UL];
    if (t3450->mM.mX[237UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int325 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int325 = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[238UL] != 0) {
        zc_int35 = 8.200000000000002E-8;
    } else {
        zc_int35 = t3450->mX.mX[1546UL] * intrm_sf_mf_110;
    }
    zc_int325 += ((((t3450->mU.mX[0UL] * zc_int35 + t3450->mX.mX[883UL]) + t3450->mX.mX[884UL]) + t3450->mX.mX[885UL]) + t3450->mX.mX[886UL]) + t3450->mX.mX[887UL];
    if (t3450->mM.mX[239UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int35 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int35 = BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[240UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3 = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[241UL] != 0) {
        intrm_sf_mf_69 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_69 = t3450->mX.mX[1550UL] * zc_int444;
    }
    BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3 += ((((t3450->mU.mX[0UL] * intrm_sf_mf_69 + t3450->mX.mX[891UL]) + t3450->mX.mX[892UL]) + t3450->mX.mX[893UL]) + t3450->mX.mX[894UL]) + t3450->mX.mX[895UL];
    if (t3450->mM.mX[242UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        intrm_sf_mf_69 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_69 = zc_int463;
    }
    if (t3450->mM.mX[243UL] != 0) {
        zc_int334 = 8.200000000000002E-8;
    } else {
        zc_int334 = t3450->mX.mX[1554UL] * intrm_sf_mf_112;
    }
    intrm_sf_mf_69 += ((((t3450->mU.mX[0UL] * zc_int334 + t3450->mX.mX[899UL]) + t3450->mX.mX[900UL]) + t3450->mX.mX[901UL]) + t3450->mX.mX[902UL]) + t3450->mX.mX[903UL];
    if (t3450->mM.mX[244UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int334 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int334 = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[245UL] != 0) {
        zc_int350 = 8.200000000000002E-8;
    } else {
        zc_int350 = t3450->mX.mX[1558UL] * intrm_sf_mf_113;
    }
    zc_int334 += ((((t3450->mU.mX[0UL] * zc_int350 + t3450->mX.mX[907UL]) + t3450->mX.mX[908UL]) + t3450->mX.mX[909UL]) + t3450->mX.mX[910UL]) + t3450->mX.mX[911UL];
    if (t3450->mM.mX[250UL] != 0) {
        zc_int350 = 8.200000000000002E-8;
    } else {
        zc_int350 = t3450->mX.mX[1154UL] * zc_int572;
    }
    zc_int572 = intrm_sf_mf_69 - (-zc_int334);
    BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3 = BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3 - (-zc_int572);
    intrm_sf_mf_71 = zc_int325 - (-BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3);
    BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3 = zc_int324 - (-intrm_sf_mf_71);
    intrm_sf_mf_72 = intrm_sf_mf_67 - (-BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3);
    zc_int567 = zc_int320 - (-intrm_sf_mf_72);
    intrm_sf_mf_73 = BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 - (-zc_int567);
    zc_int565 = zc_int314 - (-intrm_sf_mf_73);
    zc_int348 = intrm_sf_mf_11 - (-zc_int565);
    zc_int349 = zc_int304 - (-zc_int348);
    zc_int35 += ((((t3450->mU.mX[0UL] * zc_int350 + t3450->mX.mX[99UL]) + t3450->mX.mX[100UL]) + t3450->mX.mX[101UL]) + t3450->mX.mX[102UL]) + t3450->mX.mX[103UL];
    zc_int350 = zc_int301 - (-zc_int349);
    zc_int561 = BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3 - (-zc_int350);
    zc_int560 = zc_int299 - (-zc_int561);
    zc_int353 = zc_int289 - (-zc_int560);
    zc_int354 = zc_int293 - (-zc_int353);
    zc_int355 = zc_int290 - (-zc_int354);
    zc_int556 = zc_int283 - (-zc_int355);
    zc_int357 = zc_int279 - (-zc_int556);
    zc_int358 = zc_int281 - (-zc_int357);
    intrm_sf_mf_79 = zc_int276 - (-zc_int358);
    if (t3450->mM.mX[261UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int38 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int38 = zc_int360;
    }
    zc_int360 = zc_int273 - (-intrm_sf_mf_79);
    intrm_sf_mf_80 = BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3 - (-zc_int360);
    zc_int362 = zc_int265 - (-intrm_sf_mf_80);
    intrm_sf_mf_81 = zc_int262 - (-zc_int362);
    BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3 = zc_int258 - (-intrm_sf_mf_81);
    zc_int365 = intrm_sf_mf_57 - (-BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3);
    BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3 = zc_int253 - (-zc_int365);
    intrm_sf_mf_83 = zc_int247 - (-BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3);
    zc_int368 = zc_int250 - (-intrm_sf_mf_83);
    intrm_sf_mf_84 = zc_int248 - (-zc_int368);
    if (t3450->mM.mX[272UL] != 0) {
        BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3 = t3450->mX.mX[1158UL] * intrm_sf_mf_13;
    }
    intrm_sf_mf_13 = zc_int243 - (-intrm_sf_mf_84);
    zc_int541 = zc_int242 - (-intrm_sf_mf_13);
    zc_int540 = BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 - (-zc_int541);
    zc_int373 = zc_int236 - (-zc_int540);
    zc_int374 = BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 - (-zc_int373);
    zc_int537 = zc_int22 - (-zc_int374);
    zc_int536 = zc_int225 - (-zc_int537);
    zc_int535 = intrm_sf_mf_52 - (-zc_int536);
    BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3 = zc_int221 - (-zc_int535);
    intrm_sf_mf_89 = zc_int218 - (-BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3);
    zc_int38 += ((((t3450->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3 + t3450->mX.mX[107UL]) + t3450->mX.mX[108UL]) + t3450->mX.mX[109UL]) + t3450->mX.mX[110UL]) + t3450->mX.mX[111UL];
    BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3 = zc_int211 - (-intrm_sf_mf_89);
    BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3 = zc_int212 - (-BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3);
    zc_int530 = zc_int207 - (-BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3);
    zc_int551 = zc_int202 - (-zc_int530);
    zc_int552 = zc_int203 - (-zc_int551);
    zc_int385 = zc_int200 - (-zc_int552);
    intrm_sf_mf_92 = zc_int195 - (-zc_int385);
    zc_int387 = zc_int192 - (-intrm_sf_mf_92);
    zc_int388 = intrm_sf_mf_7 - (-zc_int387);
    BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3 = intrm_sf_mf_47 - (-zc_int388);
    if (t3450->mM.mX[283UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int410 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int410 = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    }
    BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3 = zc_int183 - (-BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3);
    zc_int521 = BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3 - (-BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3);
    intrm_sf_mf_95 = zc_int177 - (-zc_int521);
    zc_int393 = intrm_sf_mf_44 - (-intrm_sf_mf_95);
    zc_int518 = zc_int171 - (-zc_int393);
    zc_int517 = BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3 - (-zc_int518);
    zc_int396 = intrm_sf_mf_43 - (-zc_int517);
    zc_int397 = zc_int164 - (-zc_int396);
    intrm_sf_mf_98 = zc_int161 - (-zc_int397);
    BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3 = zc_int154 - (-intrm_sf_mf_98);
    if (t3450->mM.mX[327UL] != 0) {
        zc_int458 = 8.200000000000002E-8;
    } else {
        zc_int458 = t3450->mX.mX[1114UL] * zc_int40;
    }
    if (t3450->mM.mX[294UL] != 0) {
        zc_int40 = 8.200000000000002E-8;
    } else {
        zc_int40 = t3450->mX.mX[1162UL] * intrm_sf_mf_14;
    }
    intrm_sf_mf_14 = zc_int155 - (-BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3);
    zc_int401 = BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3 - (-intrm_sf_mf_14);
    intrm_sf_mf_100 = zc_int147 - (-zc_int401);
    zc_int509 = zc_int146 - (-intrm_sf_mf_100);
    zc_int404 = intrm_sf_mf_39 - (-zc_int509);
    zc_int405 = zc_int13 - (-zc_int404);
    zc_int528 = zc_int133 - (-zc_int405);
    BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3 = zc_int134 - (-zc_int528);
    zc_int504 = intrm_sf_mf_5 - (-BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3);
    BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3 = zc_int128 - (-zc_int504);
    zc_int40 = (((((t3450->mU.mX[0UL] * zc_int40 + t3450->mX.mX[115UL]) + t3450->mX.mX[116UL]) + t3450->mX.mX[117UL]) + t3450->mX.mX[118UL]) + t3450->mX.mX[119UL]) + zc_int410;
    zc_int410 = zc_int121 - (-BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3);
    zc_int501 = zc_int120 - (-zc_int410);
    zc_int500 = BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 - (-zc_int501);
    intrm_sf_mf_105 = zc_int114 - (-zc_int500);
    zc_int414 = BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 - (-intrm_sf_mf_105);
    zc_int415 = zc_int110 - (-zc_int414);
    zc_int496 = zc_int99 - (-zc_int415);
    intrm_sf_mf_107 = zc_int102 - (-zc_int496);
    zc_int494 = intrm_sf_mf_4 - (-intrm_sf_mf_107);
    if (t3450->mM.mX[705UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        intrm_sf_mf_108 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_108 = zc_int97;
    }
    if (t3450->mM.mX[716UL] != 0) {
        zc_int97 = 8.200000000000002E-8;
    } else {
        zc_int97 = t3450->mX.mX[1238UL] * intrm_sf_mf_33;
    }
    zc_int97 = (((((t3450->mU.mX[0UL] * zc_int97 + t3450->mX.mX[267UL]) + t3450->mX.mX[268UL]) + t3450->mX.mX[269UL]) + t3450->mX.mX[270UL]) + t3450->mX.mX[271UL]) + intrm_sf_mf_108;
    intrm_sf_mf_33 = zc_int97 - (-zc_int494);
    if (t3450->mM.mX[305UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        intrm_sf_mf_108 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_108 = BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[683UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3 = zc_int492;
    }
    if (t3450->mM.mX[694UL] != 0) {
        zc_int492 = 8.200000000000002E-8;
    } else {
        zc_int492 = t3450->mX.mX[1234UL] * zc_int44;
    }
    BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3 += ((((t3450->mU.mX[0UL] * zc_int492 + t3450->mX.mX[259UL]) + t3450->mX.mX[260UL]) + t3450->mX.mX[261UL]) + t3450->mX.mX[262UL]) + t3450->mX.mX[263UL];
    zc_int492 = BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3 - (-intrm_sf_mf_33);
    if (t3450->mM.mX[661UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int44 = BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[672UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3 = t3450->mX.mX[1230UL] * zc_int491;
    }
    BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3 = (((((t3450->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3 + t3450->mX.mX[251UL]) + t3450->mX.mX[252UL]) + t3450->mX.mX[253UL]) + t3450->mX.mX[254UL]) + t3450->mX.mX[255UL]) + zc_int44;
    zc_int491 = BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3 - (-zc_int492);
    if (t3450->mM.mX[638UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int44 = zc_int89;
    }
    if (t3450->mM.mX[649UL] != 0) {
        zc_int89 = 8.200000000000002E-8;
    } else {
        zc_int89 = t3450->mX.mX[1226UL] * zc_int490;
    }
    zc_int89 = (((((t3450->mU.mX[0UL] * zc_int89 + t3450->mX.mX[243UL]) + t3450->mX.mX[244UL]) + t3450->mX.mX[245UL]) + t3450->mX.mX[246UL]) + t3450->mX.mX[247UL]) + zc_int44;
    zc_int490 = zc_int89 - (-zc_int491);
    if (t3450->mM.mX[616UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int44 = zc_int86;
    }
    if (t3450->mM.mX[627UL] != 0) {
        zc_int86 = 8.200000000000002E-8;
    } else {
        zc_int86 = t3450->mX.mX[1222UL] * intrm_sf_mf_29;
    }
    zc_int86 = (((((t3450->mU.mX[0UL] * zc_int86 + t3450->mX.mX[235UL]) + t3450->mX.mX[236UL]) + t3450->mX.mX[237UL]) + t3450->mX.mX[238UL]) + t3450->mX.mX[239UL]) + zc_int44;
    intrm_sf_mf_29 = zc_int86 - (-zc_int490);
    if (t3450->mM.mX[594UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int44 = zc_int83;
    }
    if (t3450->mM.mX[605UL] != 0) {
        zc_int83 = 8.200000000000002E-8;
    } else {
        zc_int83 = t3450->mX.mX[1218UL] * zc_int424;
    }
    zc_int83 = (((((t3450->mU.mX[0UL] * zc_int83 + t3450->mX.mX[227UL]) + t3450->mX.mX[228UL]) + t3450->mX.mX[229UL]) + t3450->mX.mX[230UL]) + t3450->mX.mX[231UL]) + zc_int44;
    zc_int424 = zc_int83 - (-intrm_sf_mf_29);
    if (t3450->mM.mX[572UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int44 = zc_int80;
    }
    if (t3450->mM.mX[583UL] != 0) {
        zc_int80 = 8.200000000000002E-8;
    } else {
        zc_int80 = t3450->mX.mX[1214UL] * zc_int425;
    }
    zc_int80 = (((((t3450->mU.mX[0UL] * zc_int80 + t3450->mX.mX[219UL]) + t3450->mX.mX[220UL]) + t3450->mX.mX[221UL]) + t3450->mX.mX[222UL]) + t3450->mX.mX[223UL]) + zc_int44;
    zc_int425 = zc_int80 - (-zc_int424);
    if (t3450->mM.mX[550UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int44 = zc_int77;
    }
    if (t3450->mM.mX[561UL] != 0) {
        zc_int77 = 8.200000000000002E-8;
    } else {
        zc_int77 = t3450->mX.mX[1210UL] * zc_int426;
    }
    zc_int77 = (((((t3450->mU.mX[0UL] * zc_int77 + t3450->mX.mX[211UL]) + t3450->mX.mX[212UL]) + t3450->mX.mX[213UL]) + t3450->mX.mX[214UL]) + t3450->mX.mX[215UL]) + zc_int44;
    zc_int426 = zc_int77 - (-zc_int425);
    if (t3450->mM.mX[527UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int44 = BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[538UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3 = t3450->mX.mX[1206UL] * zc_int485;
    }
    BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3 = (((((t3450->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3 + t3450->mX.mX[203UL]) + t3450->mX.mX[204UL]) + t3450->mX.mX[205UL]) + t3450->mX.mX[206UL]) + t3450->mX.mX[207UL]) + zc_int44;
    zc_int485 = BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3 - (-zc_int426);
    if (t3450->mM.mX[505UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int44 = BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[516UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3 = t3450->mX.mX[1202UL] * zc_int428;
    }
    BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3 = (((((t3450->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3 + t3450->mX.mX[195UL]) + t3450->mX.mX[196UL]) + t3450->mX.mX[197UL]) + t3450->mX.mX[198UL]) + t3450->mX.mX[199UL]) + zc_int44;
    zc_int428 = BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3 - (-zc_int485);
    if (t3450->mM.mX[483UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int44 = zc_int68;
    }
    if (t3450->mM.mX[494UL] != 0) {
        zc_int68 = 8.200000000000002E-8;
    } else {
        zc_int68 = t3450->mX.mX[1198UL] * zc_int429;
    }
    zc_int68 = (((((t3450->mU.mX[0UL] * zc_int68 + t3450->mX.mX[187UL]) + t3450->mX.mX[188UL]) + t3450->mX.mX[189UL]) + t3450->mX.mX[190UL]) + t3450->mX.mX[191UL]) + zc_int44;
    zc_int429 = zc_int68 - (-zc_int428);
    if (t3450->mM.mX[316UL] != 0) {
        zc_int44 = 8.200000000000002E-8;
    } else {
        zc_int44 = t3450->mX.mX[1166UL] * zc_int63;
    }
    if (t3450->mM.mX[461UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int63 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int63 = zc_int506;
    }
    if (t3450->mM.mX[472UL] != 0) {
        zc_int506 = 8.200000000000002E-8;
    } else {
        zc_int506 = t3450->mX.mX[1286UL] * zc_int51;
    }
    zc_int63 += ((((t3450->mU.mX[0UL] * zc_int506 + t3450->mX.mX[363UL]) + t3450->mX.mX[364UL]) + t3450->mX.mX[365UL]) + t3450->mX.mX[366UL]) + t3450->mX.mX[367UL];
    zc_int506 = zc_int63 - (-zc_int429);
    if (t3450->mM.mX[439UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int51 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int51 = BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3;
    }
    if (t3450->mM.mX[450UL] != 0) {
        BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3 = t3450->mX.mX[1190UL] * zc_int431;
    }
    BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3 = (((((t3450->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3 + t3450->mX.mX[171UL]) + t3450->mX.mX[172UL]) + t3450->mX.mX[173UL]) + t3450->mX.mX[174UL]) + t3450->mX.mX[175UL]) + zc_int51;
    zc_int431 = BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3 - (-zc_int506);
    if (t3450->mM.mX[416UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int51 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int51 = zc_int58;
    }
    if (t3450->mM.mX[427UL] != 0) {
        zc_int58 = 8.200000000000002E-8;
    } else {
        zc_int58 = t3450->mX.mX[1186UL] * intrm_sf_mf_20;
    }
    zc_int58 = (((((t3450->mU.mX[0UL] * zc_int58 + t3450->mX.mX[163UL]) + t3450->mX.mX[164UL]) + t3450->mX.mX[165UL]) + t3450->mX.mX[166UL]) + t3450->mX.mX[167UL]) + zc_int51;
    intrm_sf_mf_20 = zc_int58 - (-zc_int431);
    if (t3450->mM.mX[394UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int51 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int51 = zc_int55;
    }
    if (t3450->mM.mX[405UL] != 0) {
        zc_int55 = 8.200000000000002E-8;
    } else {
        zc_int55 = t3450->mX.mX[1182UL] * intrm_sf_mf_19;
    }
    zc_int55 = (((((t3450->mU.mX[0UL] * zc_int55 + t3450->mX.mX[155UL]) + t3450->mX.mX[156UL]) + t3450->mX.mX[157UL]) + t3450->mX.mX[158UL]) + t3450->mX.mX[159UL]) + zc_int51;
    intrm_sf_mf_19 = zc_int55 - (-intrm_sf_mf_20);
    if (t3450->mM.mX[372UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int51 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int51 = zc_int53;
    }
    if (t3450->mM.mX[383UL] != 0) {
        zc_int53 = 8.200000000000002E-8;
    } else {
        zc_int53 = t3450->mX.mX[1178UL] * intrm_sf_mf_18;
    }
    zc_int53 = (((((t3450->mU.mX[0UL] * zc_int53 + t3450->mX.mX[147UL]) + t3450->mX.mX[148UL]) + t3450->mX.mX[149UL]) + t3450->mX.mX[150UL]) + t3450->mX.mX[151UL]) + zc_int51;
    intrm_sf_mf_18 = zc_int53 - (-intrm_sf_mf_19);
    if (t3450->mM.mX[350UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int51 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int51 = zc_int49;
    }
    if (t3450->mM.mX[361UL] != 0) {
        zc_int49 = 8.200000000000002E-8;
    } else {
        zc_int49 = t3450->mX.mX[1174UL] * zc_int435;
    }
    zc_int49 = (((((t3450->mU.mX[0UL] * zc_int49 + t3450->mX.mX[139UL]) + t3450->mX.mX[140UL]) + t3450->mX.mX[141UL]) + t3450->mX.mX[142UL]) + t3450->mX.mX[143UL]) + zc_int51;
    zc_int435 = zc_int49 - (-intrm_sf_mf_18);
    if (t3450->mM.mX[328UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int51 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int51 = zc_int46;
    }
    if (t3450->mM.mX[339UL] != 0) {
        zc_int46 = 8.200000000000002E-8;
    } else {
        zc_int46 = t3450->mX.mX[1170UL] * zc_int472;
    }
    zc_int46 = (((((t3450->mU.mX[0UL] * zc_int46 + t3450->mX.mX[131UL]) + t3450->mX.mX[132UL]) + t3450->mX.mX[133UL]) + t3450->mX.mX[134UL]) + t3450->mX.mX[135UL]) + zc_int51;
    zc_int472 = zc_int46 - (-zc_int435);
    zc_int44 = (((((t3450->mU.mX[0UL] * zc_int44 + t3450->mX.mX[123UL]) + t3450->mX.mX[124UL]) + t3450->mX.mX[125UL]) + t3450->mX.mX[126UL]) + t3450->mX.mX[127UL]) + intrm_sf_mf_108;
    zc_int51 = zc_int44 - (-zc_int472);
    intrm_sf_mf_108 = zc_int40 - (-zc_int51);
    zc_int439 = zc_int38 - (-intrm_sf_mf_108);
    intrm_sf_mf_109 = zc_int35 - (-zc_int439);
    BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3 = zc_int30 - (-intrm_sf_mf_109);
    intrm_sf_mf_110 = BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 - (-BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3);
    BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3 = zc_int24 - (-intrm_sf_mf_110);
    zc_int444 = zc_int208 - (-BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3);
    zc_int463 = zc_int178 - (-zc_int444);
    intrm_sf_mf_112 = zc_int148 - (-zc_int463);
    BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3 = zc_int118 - (-intrm_sf_mf_112);
    intrm_sf_mf_113 = zc_int10 - (-BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3);
    if (t3450->mM.mX[438UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int457 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int457 = zc_int8;
    }
    if (t3450->mM.mX[549UL] != 0) {
        zc_int8 = 8.200000000000002E-8;
    } else {
        zc_int8 = t3450->mX.mX[1118UL] * intrm_sf_mf_3;
    }
    zc_int8 = (((((t3450->mU.mX[0UL] * zc_int8 + t3450->mX.mX[27UL]) + t3450->mX.mX[28UL]) + t3450->mX.mX[29UL]) + t3450->mX.mX[30UL]) + t3450->mX.mX[31UL]) + zc_int457;
    intrm_sf_mf_3 = zc_int8 - (-intrm_sf_mf_113);
    zc_int3 += ((((t3450->mU.mX[0UL] * zc_int458 + t3450->mX.mX[19UL]) + t3450->mX.mX[20UL]) + t3450->mX.mX[21UL]) + t3450->mX.mX[22UL]) + t3450->mX.mX[23UL];
    zc_int458 = zc_int3 - (-intrm_sf_mf_3);
    zc_int457 = BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3 - (-zc_int458);
    if (t3450->mM.mX[246UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int452 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int452 = zc_int454;
    }
    if (t3450->mM.mX[247UL] != 0) {
        zc_int454 = 8.200000000000002E-8;
    } else {
        zc_int454 = t3450->mX.mX[1106UL] * zc_int455;
    }
    zc_int454 = (((((t3450->mU.mX[0UL] * zc_int454 + t3450->mX.mX[3UL]) + t3450->mX.mX[4UL]) + t3450->mX.mX[5UL]) + t3450->mX.mX[6UL]) + t3450->mX.mX[7UL]) + zc_int452;
    zc_int455 = zc_int454 - (-zc_int457);
    out->mY.mX[6UL] = zc_int455 - zc_int457;
    out->mY.mX[13UL] = zc_int457 - zc_int458;
    out->mY.mX[20UL] = zc_int458 - intrm_sf_mf_3;
    out->mY.mX[27UL] = intrm_sf_mf_3 - intrm_sf_mf_113;
    out->mY.mX[34UL] = intrm_sf_mf_113 - BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    out->mY.mX[41UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3 - intrm_sf_mf_112;
    out->mY.mX[48UL] = intrm_sf_mf_112 - zc_int463;
    out->mY.mX[55UL] = zc_int463 - zc_int444;
    out->mY.mX[62UL] = zc_int444 - BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    out->mY.mX[69UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3 - intrm_sf_mf_110;
    out->mY.mX[76UL] = intrm_sf_mf_110 - BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    out->mY.mX[83UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3 - intrm_sf_mf_109;
    out->mY.mX[90UL] = intrm_sf_mf_109 - zc_int439;
    out->mY.mX[97UL] = zc_int439 - intrm_sf_mf_108;
    out->mY.mX[104UL] = intrm_sf_mf_108 - zc_int51;
    out->mY.mX[111UL] = zc_int51 - zc_int472;
    out->mY.mX[118UL] = zc_int472 - zc_int435;
    out->mY.mX[125UL] = zc_int435 - intrm_sf_mf_18;
    out->mY.mX[132UL] = intrm_sf_mf_18 - intrm_sf_mf_19;
    out->mY.mX[139UL] = intrm_sf_mf_19 - intrm_sf_mf_20;
    out->mY.mX[146UL] = intrm_sf_mf_20 - zc_int431;
    out->mY.mX[153UL] = zc_int431 - zc_int506;
    if (t3450->mM.mX[248UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int483 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int483 = zc_int480;
    }
    if (t3450->mM.mX[249UL] != 0) {
        zc_int480 = 8.200000000000002E-8;
    } else {
        zc_int480 = t3450->mX.mX[1194UL] * zc_int481;
    }
    zc_int480 = (((((t3450->mU.mX[0UL] * zc_int480 + t3450->mX.mX[179UL]) + t3450->mX.mX[180UL]) + t3450->mX.mX[181UL]) + t3450->mX.mX[182UL]) + t3450->mX.mX[183UL]) + zc_int483;
    zc_int481 = zc_int480 - (-zc_int455);
    out->mY.mX[160UL] = zc_int481 - zc_int455;
    out->mY.mX[167UL] = zc_int429 - zc_int428;
    out->mY.mX[174UL] = zc_int428 - zc_int485;
    out->mY.mX[181UL] = zc_int485 - zc_int426;
    out->mY.mX[188UL] = zc_int426 - zc_int425;
    out->mY.mX[195UL] = zc_int425 - zc_int424;
    out->mY.mX[202UL] = zc_int424 - intrm_sf_mf_29;
    out->mY.mX[209UL] = intrm_sf_mf_29 - zc_int490;
    out->mY.mX[216UL] = zc_int490 - zc_int491;
    out->mY.mX[223UL] = zc_int491 - zc_int492;
    out->mY.mX[230UL] = zc_int492 - intrm_sf_mf_33;
    out->mY.mX[237UL] = intrm_sf_mf_33 - zc_int494;
    out->mY.mX[244UL] = zc_int494 - intrm_sf_mf_107;
    out->mY.mX[251UL] = intrm_sf_mf_107 - zc_int496;
    out->mY.mX[258UL] = zc_int496 - zc_int415;
    out->mY.mX[265UL] = zc_int415 - zc_int414;
    out->mY.mX[272UL] = zc_int414 - intrm_sf_mf_105;
    out->mY.mX[279UL] = intrm_sf_mf_105 - zc_int500;
    out->mY.mX[286UL] = zc_int500 - zc_int501;
    out->mY.mX[293UL] = zc_int501 - zc_int410;
    out->mY.mX[300UL] = zc_int410 - BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    out->mY.mX[307UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3 - zc_int504;
    out->mY.mX[314UL] = zc_int504 - BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mY.mX[321UL] = zc_int506 - zc_int429;
    out->mY.mX[328UL] = zc_int528 - zc_int405;
    out->mY.mX[335UL] = zc_int405 - zc_int404;
    out->mY.mX[342UL] = zc_int404 - zc_int509;
    out->mY.mX[349UL] = zc_int509 - intrm_sf_mf_100;
    out->mY.mX[356UL] = intrm_sf_mf_100 - zc_int401;
    out->mY.mX[363UL] = zc_int401 - intrm_sf_mf_14;
    out->mY.mX[370UL] = intrm_sf_mf_14 - BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    out->mY.mX[377UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3 - intrm_sf_mf_98;
    out->mY.mX[384UL] = intrm_sf_mf_98 - zc_int397;
    out->mY.mX[391UL] = zc_int397 - zc_int396;
    out->mY.mX[398UL] = zc_int396 - zc_int517;
    out->mY.mX[405UL] = zc_int517 - zc_int518;
    out->mY.mX[412UL] = zc_int518 - zc_int393;
    out->mY.mX[419UL] = zc_int393 - intrm_sf_mf_95;
    out->mY.mX[426UL] = intrm_sf_mf_95 - zc_int521;
    out->mY.mX[433UL] = zc_int521 - BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    out->mY.mX[440UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3 - BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    out->mY.mX[447UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3 - zc_int388;
    out->mY.mX[454UL] = zc_int388 - zc_int387;
    out->mY.mX[461UL] = zc_int387 - intrm_sf_mf_92;
    out->mY.mX[468UL] = intrm_sf_mf_92 - zc_int385;
    out->mY.mX[475UL] = zc_int385 - zc_int552;
    out->mY.mX[482UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3 - zc_int528;
    out->mY.mX[489UL] = zc_int551 - zc_int530;
    out->mY.mX[496UL] = zc_int530 - BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    out->mY.mX[503UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3 - BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    out->mY.mX[510UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3 - intrm_sf_mf_89;
    out->mY.mX[517UL] = intrm_sf_mf_89 - BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    out->mY.mX[524UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3 - zc_int535;
    out->mY.mX[531UL] = zc_int535 - zc_int536;
    out->mY.mX[538UL] = zc_int536 - zc_int537;
    out->mY.mX[545UL] = zc_int537 - zc_int374;
    out->mY.mX[552UL] = zc_int374 - zc_int373;
    out->mY.mX[559UL] = zc_int373 - zc_int540;
    out->mY.mX[566UL] = zc_int540 - zc_int541;
    out->mY.mX[573UL] = zc_int541 - intrm_sf_mf_13;
    out->mY.mX[580UL] = intrm_sf_mf_13 - intrm_sf_mf_84;
    out->mY.mX[587UL] = intrm_sf_mf_84 - zc_int368;
    out->mY.mX[594UL] = zc_int368 - intrm_sf_mf_83;
    out->mY.mX[601UL] = intrm_sf_mf_83 - BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    out->mY.mX[608UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3 - zc_int365;
    out->mY.mX[615UL] = zc_int365 - BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    out->mY.mX[622UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3 - intrm_sf_mf_81;
    out->mY.mX[629UL] = intrm_sf_mf_81 - zc_int362;
    out->mY.mX[636UL] = zc_int362 - intrm_sf_mf_80;
    out->mY.mX[643UL] = zc_int552 - zc_int551;
    out->mY.mX[650UL] = zc_int360 - intrm_sf_mf_79;
    out->mY.mX[657UL] = intrm_sf_mf_79 - zc_int358;
    out->mY.mX[664UL] = zc_int358 - zc_int357;
    out->mY.mX[671UL] = zc_int357 - zc_int556;
    out->mY.mX[678UL] = zc_int556 - zc_int355;
    out->mY.mX[685UL] = zc_int355 - zc_int354;
    out->mY.mX[692UL] = zc_int354 - zc_int353;
    out->mY.mX[699UL] = zc_int353 - zc_int560;
    out->mY.mX[706UL] = zc_int560 - zc_int561;
    out->mY.mX[713UL] = zc_int561 - zc_int350;
    out->mY.mX[720UL] = zc_int350 - zc_int349;
    out->mY.mX[727UL] = zc_int349 - zc_int348;
    out->mY.mX[734UL] = zc_int348 - zc_int565;
    out->mY.mX[741UL] = zc_int565 - intrm_sf_mf_73;
    out->mY.mX[748UL] = intrm_sf_mf_73 - zc_int567;
    out->mY.mX[755UL] = zc_int567 - intrm_sf_mf_72;
    out->mY.mX[762UL] = intrm_sf_mf_72 - BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    out->mY.mX[769UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3 - intrm_sf_mf_71;
    out->mY.mX[776UL] = intrm_sf_mf_71 - BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    out->mY.mX[783UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3 - zc_int572;
    out->mY.mX[790UL] = zc_int572 - zc_int334;
    out->mY.mX[797UL] = zc_int334;
    out->mY.mX[804UL] = intrm_sf_mf_80 - zc_int360;
    if (t3450->mM.mX[251UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        intrm_sf_mf_80 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_80 = zc_int576;
    }
    if (t3450->mM.mX[252UL] != 0) {
        zc_int576 = 8.200000000000002E-8;
    } else {
        zc_int576 = t3450->mX.mX[1570UL] * zc_int579;
    }
    intrm_sf_mf_80 += ((((t3450->mU.mX[0UL] * zc_int576 + t3450->mX.mX[931UL]) + t3450->mX.mX[932UL]) + t3450->mX.mX[933UL]) + t3450->mX.mX[934UL]) + t3450->mX.mX[935UL];
    if (t3450->mM.mX[253UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int576 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int576 = zc_int586;
    }
    if (t3450->mM.mX[254UL] != 0) {
        zc_int579 = 8.200000000000002E-8;
    } else {
        zc_int579 = t3450->mX.mX[1574UL] * intrm_sf_mf_117;
    }
    zc_int576 += ((((t3450->mU.mX[0UL] * zc_int579 + t3450->mX.mX[939UL]) + t3450->mX.mX[940UL]) + t3450->mX.mX[941UL]) + t3450->mX.mX[942UL]) + t3450->mX.mX[943UL];
    if (t3450->mM.mX[255UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int579 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int579 = zc_int588;
    }
    if (t3450->mM.mX[256UL] != 0) {
        zc_int586 = 8.200000000000002E-8;
    } else {
        zc_int586 = t3450->mX.mX[1578UL] * zc_int595;
    }
    zc_int579 += ((((t3450->mU.mX[0UL] * zc_int586 + t3450->mX.mX[947UL]) + t3450->mX.mX[948UL]) + t3450->mX.mX[949UL]) + t3450->mX.mX[950UL]) + t3450->mX.mX[951UL];
    if (t3450->mM.mX[257UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int586 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int586 = zc_int598;
    }
    if (t3450->mM.mX[258UL] != 0) {
        intrm_sf_mf_117 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_117 = t3450->mX.mX[1582UL] * intrm_sf_mf_119;
    }
    zc_int586 += ((((t3450->mU.mX[0UL] * intrm_sf_mf_117 + t3450->mX.mX[955UL]) + t3450->mX.mX[956UL]) + t3450->mX.mX[957UL]) + t3450->mX.mX[958UL]) + t3450->mX.mX[959UL];
    if (t3450->mM.mX[259UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        intrm_sf_mf_117 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_117 = zc_int600;
    }
    if (t3450->mM.mX[260UL] != 0) {
        zc_int588 = 8.200000000000002E-8;
    } else {
        zc_int588 = t3450->mX.mX[1586UL] * zc_int607;
    }
    intrm_sf_mf_117 += ((((t3450->mU.mX[0UL] * zc_int588 + t3450->mX.mX[963UL]) + t3450->mX.mX[964UL]) + t3450->mX.mX[965UL]) + t3450->mX.mX[966UL]) + t3450->mX.mX[967UL];
    if (t3450->mM.mX[262UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int588 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int588 = zc_int606;
    }
    if (t3450->mM.mX[263UL] != 0) {
        zc_int595 = 8.200000000000002E-8;
    } else {
        zc_int595 = t3450->mX.mX[1590UL] * intrm_sf_mf_121;
    }
    zc_int588 += ((((t3450->mU.mX[0UL] * zc_int595 + t3450->mX.mX[971UL]) + t3450->mX.mX[972UL]) + t3450->mX.mX[973UL]) + t3450->mX.mX[974UL]) + t3450->mX.mX[975UL];
    if (t3450->mM.mX[264UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int595 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int595 = BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3;
    }
    if (t3450->mM.mX[265UL] != 0) {
        zc_int598 = 8.200000000000002E-8;
    } else {
        zc_int598 = t3450->mX.mX[1594UL] * zc_int615;
    }
    zc_int595 += ((((t3450->mU.mX[0UL] * zc_int598 + t3450->mX.mX[979UL]) + t3450->mX.mX[980UL]) + t3450->mX.mX[981UL]) + t3450->mX.mX[982UL]) + t3450->mX.mX[983UL];
    if (t3450->mM.mX[266UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int598 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int598 = zc_int618;
    }
    if (t3450->mM.mX[267UL] != 0) {
        intrm_sf_mf_119 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_119 = t3450->mX.mX[1598UL] * zc_int625;
    }
    zc_int598 += ((((t3450->mU.mX[0UL] * intrm_sf_mf_119 + t3450->mX.mX[987UL]) + t3450->mX.mX[988UL]) + t3450->mX.mX[989UL]) + t3450->mX.mX[990UL]) + t3450->mX.mX[991UL];
    if (t3450->mM.mX[268UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        intrm_sf_mf_119 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_119 = zc_int628;
    }
    if (t3450->mM.mX[269UL] != 0) {
        zc_int600 = 8.200000000000002E-8;
    } else {
        zc_int600 = t3450->mX.mX[1602UL] * zc_int631;
    }
    intrm_sf_mf_119 += ((((t3450->mU.mX[0UL] * zc_int600 + t3450->mX.mX[995UL]) + t3450->mX.mX[996UL]) + t3450->mX.mX[997UL]) + t3450->mX.mX[998UL]) + t3450->mX.mX[999UL];
    if (t3450->mM.mX[270UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int600 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int600 = zc_int634;
    }
    if (t3450->mM.mX[271UL] != 0) {
        zc_int607 = 8.200000000000002E-8;
    } else {
        zc_int607 = t3450->mX.mX[1606UL] * intrm_sf_mf_125;
    }
    zc_int600 += ((((t3450->mU.mX[0UL] * zc_int607 + t3450->mX.mX[1003UL]) + t3450->mX.mX[1004UL]) + t3450->mX.mX[1005UL]) + t3450->mX.mX[1006UL]) + t3450->mX.mX[1007UL];
    if (t3450->mM.mX[273UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int607 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int607 = zc_int638;
    }
    if (t3450->mM.mX[274UL] != 0) {
        zc_int606 = 8.200000000000002E-8;
    } else {
        zc_int606 = t3450->mX.mX[1610UL] * intrm_sf_mf_126;
    }
    zc_int607 += ((((t3450->mU.mX[0UL] * zc_int606 + t3450->mX.mX[1011UL]) + t3450->mX.mX[1012UL]) + t3450->mX.mX[1013UL]) + t3450->mX.mX[1014UL]) + t3450->mX.mX[1015UL];
    if (t3450->mM.mX[275UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int606 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int606 = zc_int682;
    }
    if (t3450->mM.mX[276UL] != 0) {
        intrm_sf_mf_121 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_121 = t3450->mX.mX[1614UL] * zc_int641;
    }
    zc_int606 += ((((t3450->mU.mX[0UL] * intrm_sf_mf_121 + t3450->mX.mX[1019UL]) + t3450->mX.mX[1020UL]) + t3450->mX.mX[1021UL]) + t3450->mX.mX[1022UL]) + t3450->mX.mX[1023UL];
    if (t3450->mM.mX[277UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        intrm_sf_mf_121 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_121 = zc_int680;
    }
    if (t3450->mM.mX[278UL] != 0) {
        BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 = t3450->mX.mX[1618UL] * zc_int643;
    }
    intrm_sf_mf_121 += ((((t3450->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 + t3450->mX.mX[1027UL]) + t3450->mX.mX[1028UL]) + t3450->mX.mX[1029UL]) + t3450->mX.mX[1030UL]) + t3450->mX.mX[1031UL];
    if (t3450->mM.mX[279UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 = BatteryPack_v2_ModuleAssembly_23_Module16_Cell_1_electricalMod3;
    }
    if (t3450->mM.mX[280UL] != 0) {
        zc_int615 = 8.200000000000002E-8;
    } else {
        zc_int615 = t3450->mX.mX[1622UL] * zc_int677;
    }
    BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 += ((((t3450->mU.mX[0UL] * zc_int615 + t3450->mX.mX[1035UL]) + t3450->mX.mX[1036UL]) + t3450->mX.mX[1037UL]) + t3450->mX.mX[1038UL]) + t3450->mX.mX[1039UL];
    if (t3450->mM.mX[281UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int615 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int615 = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    }
    if (t3450->mM.mX[282UL] != 0) {
        zc_int618 = 8.200000000000002E-8;
    } else {
        zc_int618 = t3450->mX.mX[1626UL] * zc_int675;
    }
    zc_int615 += ((((t3450->mU.mX[0UL] * zc_int618 + t3450->mX.mX[1043UL]) + t3450->mX.mX[1044UL]) + t3450->mX.mX[1045UL]) + t3450->mX.mX[1046UL]) + t3450->mX.mX[1047UL];
    if (t3450->mM.mX[284UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int618 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int618 = zc_int674;
    }
    if (t3450->mM.mX[285UL] != 0) {
        zc_int625 = 8.200000000000002E-8;
    } else {
        zc_int625 = t3450->mX.mX[1630UL] * zc_int673;
    }
    zc_int618 += ((((t3450->mU.mX[0UL] * zc_int625 + t3450->mX.mX[1051UL]) + t3450->mX.mX[1052UL]) + t3450->mX.mX[1053UL]) + t3450->mX.mX[1054UL]) + t3450->mX.mX[1055UL];
    if (t3450->mM.mX[286UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int625 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int625 = zc_int650;
    }
    if (t3450->mM.mX[287UL] != 0) {
        zc_int628 = 8.200000000000002E-8;
    } else {
        zc_int628 = t3450->mX.mX[1634UL] * zc_int651;
    }
    zc_int625 += ((((t3450->mU.mX[0UL] * zc_int628 + t3450->mX.mX[1059UL]) + t3450->mX.mX[1060UL]) + t3450->mX.mX[1061UL]) + t3450->mX.mX[1062UL]) + t3450->mX.mX[1063UL];
    if (t3450->mM.mX[288UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int628 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int628 = zc_int652;
    }
    if (t3450->mM.mX[289UL] != 0) {
        zc_int631 = 8.200000000000002E-8;
    } else {
        zc_int631 = t3450->mX.mX[1638UL] * zc_int669;
    }
    zc_int628 += ((((t3450->mU.mX[0UL] * zc_int631 + t3450->mX.mX[1067UL]) + t3450->mX.mX[1068UL]) + t3450->mX.mX[1069UL]) + t3450->mX.mX[1070UL]) + t3450->mX.mX[1071UL];
    if (t3450->mM.mX[290UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int631 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int631 = zc_int668;
    }
    if (t3450->mM.mX[291UL] != 0) {
        zc_int634 = 8.200000000000002E-8;
    } else {
        zc_int634 = t3450->mX.mX[1642UL] * zc_int655;
    }
    zc_int631 += ((((t3450->mU.mX[0UL] * zc_int634 + t3450->mX.mX[1075UL]) + t3450->mX.mX[1076UL]) + t3450->mX.mX[1077UL]) + t3450->mX.mX[1078UL]) + t3450->mX.mX[1079UL];
    if (t3450->mM.mX[292UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int634 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int634 = zc_int666;
    }
    if (t3450->mM.mX[293UL] != 0) {
        intrm_sf_mf_125 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_125 = t3450->mX.mX[1646UL] * zc_int665;
    }
    zc_int634 += ((((t3450->mU.mX[0UL] * intrm_sf_mf_125 + t3450->mX.mX[1083UL]) + t3450->mX.mX[1084UL]) + t3450->mX.mX[1085UL]) + t3450->mX.mX[1086UL]) + t3450->mX.mX[1087UL];
    if (t3450->mM.mX[295UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        intrm_sf_mf_125 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_125 = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    }
    if (t3450->mM.mX[296UL] != 0) {
        zc_int638 = 8.200000000000002E-8;
    } else {
        zc_int638 = t2179[0UL] * t3450->mX.mX[1650UL];
    }
    intrm_sf_mf_125 += ((((t3450->mU.mX[0UL] * zc_int638 + t3450->mX.mX[1091UL]) + t3450->mX.mX[1092UL]) + t3450->mX.mX[1093UL]) + t3450->mX.mX[1094UL]) + t3450->mX.mX[1095UL];
    zc_int638 = intrm_sf_mf_125 - (-zc_int481);
    intrm_sf_mf_126 = zc_int634 - (-zc_int638);
    zc_int682 = zc_int631 - (-intrm_sf_mf_126);
    zc_int641 = zc_int628 - (-zc_int682);
    zc_int680 = zc_int625 - (-zc_int641);
    zc_int643 = zc_int618 - (-zc_int680);
    BatteryPack_v2_ModuleAssembly_23_Module16_Cell_1_electricalMod3 = zc_int615 - (-zc_int643);
    zc_int677 = BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 - (-BatteryPack_v2_ModuleAssembly_23_Module16_Cell_1_electricalMod3);
    BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3 = intrm_sf_mf_121 - (-zc_int677);
    zc_int675 = zc_int606 - (-BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3);
    zc_int674 = zc_int607 - (-zc_int675);
    zc_int673 = zc_int600 - (-zc_int674);
    zc_int650 = intrm_sf_mf_119 - (-zc_int673);
    zc_int651 = zc_int598 - (-zc_int650);
    zc_int652 = zc_int595 - (-zc_int651);
    zc_int669 = zc_int588 - (-zc_int652);
    zc_int668 = intrm_sf_mf_117 - (-zc_int669);
    zc_int655 = zc_int586 - (-zc_int668);
    zc_int666 = zc_int579 - (-zc_int655);
    zc_int665 = zc_int576 - (-zc_int666);
    BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3 = intrm_sf_mf_80 - (-zc_int665);
    if (t3450->mM.mX[297UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int455 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int455 = zc_int661;
    }
    if (t3450->mM.mX[298UL] != 0) {
        zc_int661 = 8.200000000000002E-8;
    } else {
        zc_int661 = t3450->mX.mX[1566UL] * zc_int689;
    }
    zc_int661 = (((((t3450->mU.mX[0UL] * zc_int661 + t3450->mX.mX[923UL]) + t3450->mX.mX[924UL]) + t3450->mX.mX[925UL]) + t3450->mX.mX[926UL]) + t3450->mX.mX[927UL]) + zc_int455;
    zc_int689 = zc_int661 - (-BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3);
    out->mY.mX[811UL] = zc_int689 - BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    out->mY.mX[818UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3 - zc_int665;
    out->mY.mX[825UL] = zc_int665 - zc_int666;
    out->mY.mX[832UL] = zc_int666 - zc_int655;
    out->mY.mX[839UL] = zc_int655 - zc_int668;
    out->mY.mX[846UL] = zc_int668 - zc_int669;
    out->mY.mX[853UL] = zc_int669 - zc_int652;
    out->mY.mX[860UL] = zc_int652 - zc_int651;
    out->mY.mX[867UL] = zc_int651 - zc_int650;
    out->mY.mX[874UL] = zc_int650 - zc_int673;
    out->mY.mX[881UL] = zc_int673 - zc_int674;
    out->mY.mX[888UL] = zc_int674 - zc_int675;
    out->mY.mX[895UL] = zc_int675 - BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    out->mY.mX[902UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3 - zc_int677;
    out->mY.mX[909UL] = zc_int677 - BatteryPack_v2_ModuleAssembly_23_Module16_Cell_1_electricalMod3;
    out->mY.mX[916UL] = BatteryPack_v2_ModuleAssembly_23_Module16_Cell_1_electricalMod3 - zc_int643;
    out->mY.mX[923UL] = zc_int643 - zc_int680;
    out->mY.mX[930UL] = zc_int680 - zc_int641;
    out->mY.mX[937UL] = zc_int641 - zc_int682;
    out->mY.mX[944UL] = zc_int682 - intrm_sf_mf_126;
    out->mY.mX[951UL] = intrm_sf_mf_126 - zc_int638;
    out->mY.mX[958UL] = zc_int638 - zc_int481;
    if (t3450->mM.mX[299UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2689 = 0UL; t2689 < 21UL; t2689++) {
            t2585 = t2689 / 21UL;
            t2667 = (t2689 - t2689 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2689] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2689 % 21UL;
            }
        }
        zc_int638 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int638 = t3449;
    }
    if (t3450->mM.mX[300UL] != 0) {
        zc_int455 = 8.200000000000002E-8;
    } else {
        zc_int455 = t1488[0UL] * t3450->mX.mX[1654UL];
    }
    zc_int455 = (((((t3450->mU.mX[0UL] * zc_int455 + t3450->mX.mX[1099UL]) + t3450->mX.mX[1100UL]) + t3450->mX.mX[1101UL]) + t3450->mX.mX[1102UL]) + t3450->mX.mX[1103UL]) + zc_int638;
    out->mY.mX[965UL] = (zc_int455 - (-zc_int689)) - zc_int689;
    out->mY.mX[0UL] = t3450->mU.mX[0UL];
    out->mY.mX[2UL] = t3450->mX.mX[1107UL];
    out->mY.mX[3UL] = t3450->mX.mX[1107UL];
    out->mY.mX[5UL] = zc_int454;
    out->mY.mX[7UL] = t3450->mU.mX[0UL];
    out->mY.mX[9UL] = t3450->mX.mX[1111UL];
    out->mY.mX[10UL] = t3450->mX.mX[1111UL];
    out->mY.mX[12UL] = BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3;
    out->mY.mX[14UL] = t3450->mU.mX[0UL];
    out->mY.mX[16UL] = t3450->mX.mX[1115UL];
    out->mY.mX[17UL] = t3450->mX.mX[1115UL];
    out->mY.mX[19UL] = zc_int3;
    out->mY.mX[21UL] = t3450->mU.mX[0UL];
    out->mY.mX[23UL] = t3450->mX.mX[1119UL];
    out->mY.mX[24UL] = t3450->mX.mX[1119UL];
    out->mY.mX[26UL] = zc_int8;
    out->mY.mX[28UL] = t3450->mU.mX[0UL];
    out->mY.mX[30UL] = t3450->mX.mX[1123UL];
    out->mY.mX[31UL] = t3450->mX.mX[1123UL];
    out->mY.mX[33UL] = zc_int10;
    out->mY.mX[35UL] = t3450->mU.mX[0UL];
    out->mY.mX[37UL] = t3450->mX.mX[1127UL];
    out->mY.mX[38UL] = t3450->mX.mX[1127UL];
    out->mY.mX[40UL] = zc_int118;
    out->mY.mX[42UL] = t3450->mU.mX[0UL];
    out->mY.mX[44UL] = t3450->mX.mX[1131UL];
    out->mY.mX[45UL] = t3450->mX.mX[1131UL];
    out->mY.mX[47UL] = zc_int148;
    out->mY.mX[49UL] = t3450->mU.mX[0UL];
    out->mY.mX[51UL] = t3450->mX.mX[1135UL];
    out->mY.mX[52UL] = t3450->mX.mX[1135UL];
    out->mY.mX[54UL] = zc_int178;
    out->mY.mX[56UL] = t3450->mU.mX[0UL];
    out->mY.mX[58UL] = t3450->mX.mX[1139UL];
    out->mY.mX[59UL] = t3450->mX.mX[1139UL];
    out->mY.mX[61UL] = zc_int208;
    out->mY.mX[63UL] = t3450->mU.mX[0UL];
    out->mY.mX[65UL] = t3450->mX.mX[1143UL];
    out->mY.mX[66UL] = t3450->mX.mX[1143UL];
    out->mY.mX[68UL] = zc_int24;
    out->mY.mX[70UL] = t3450->mU.mX[0UL];
    out->mY.mX[72UL] = t3450->mX.mX[1147UL];
    out->mY.mX[73UL] = t3450->mX.mX[1147UL];
    out->mY.mX[75UL] = BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3;
    out->mY.mX[77UL] = t3450->mU.mX[0UL];
    out->mY.mX[79UL] = t3450->mX.mX[1151UL];
    out->mY.mX[80UL] = t3450->mX.mX[1151UL];
    out->mY.mX[82UL] = zc_int30;
    out->mY.mX[84UL] = t3450->mU.mX[0UL];
    out->mY.mX[86UL] = t3450->mX.mX[1155UL];
    out->mY.mX[87UL] = t3450->mX.mX[1155UL];
    out->mY.mX[89UL] = zc_int35;
    out->mY.mX[91UL] = t3450->mU.mX[0UL];
    out->mY.mX[93UL] = t3450->mX.mX[1159UL];
    out->mY.mX[94UL] = t3450->mX.mX[1159UL];
    out->mY.mX[96UL] = zc_int38;
    out->mY.mX[98UL] = t3450->mU.mX[0UL];
    out->mY.mX[100UL] = t3450->mX.mX[1163UL];
    out->mY.mX[101UL] = t3450->mX.mX[1163UL];
    out->mY.mX[103UL] = zc_int40;
    out->mY.mX[105UL] = t3450->mU.mX[0UL];
    out->mY.mX[107UL] = t3450->mX.mX[1167UL];
    out->mY.mX[108UL] = t3450->mX.mX[1167UL];
    out->mY.mX[110UL] = zc_int44;
    out->mY.mX[112UL] = t3450->mU.mX[0UL];
    out->mY.mX[114UL] = t3450->mX.mX[1171UL];
    out->mY.mX[115UL] = t3450->mX.mX[1171UL];
    out->mY.mX[117UL] = zc_int46;
    out->mY.mX[119UL] = t3450->mU.mX[0UL];
    out->mY.mX[121UL] = t3450->mX.mX[1175UL];
    out->mY.mX[122UL] = t3450->mX.mX[1175UL];
    out->mY.mX[124UL] = zc_int49;
    out->mY.mX[126UL] = t3450->mU.mX[0UL];
    out->mY.mX[128UL] = t3450->mX.mX[1179UL];
    out->mY.mX[129UL] = t3450->mX.mX[1179UL];
    out->mY.mX[131UL] = zc_int53;
    out->mY.mX[133UL] = t3450->mU.mX[0UL];
    out->mY.mX[135UL] = t3450->mX.mX[1183UL];
    out->mY.mX[136UL] = t3450->mX.mX[1183UL];
    out->mY.mX[138UL] = zc_int55;
    out->mY.mX[140UL] = t3450->mU.mX[0UL];
    out->mY.mX[142UL] = t3450->mX.mX[1187UL];
    out->mY.mX[143UL] = t3450->mX.mX[1187UL];
    out->mY.mX[145UL] = zc_int58;
    out->mY.mX[147UL] = t3450->mU.mX[0UL];
    out->mY.mX[149UL] = t3450->mX.mX[1191UL];
    out->mY.mX[150UL] = t3450->mX.mX[1191UL];
    out->mY.mX[152UL] = BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3;
    out->mY.mX[154UL] = t3450->mU.mX[0UL];
    out->mY.mX[156UL] = t3450->mX.mX[1195UL];
    out->mY.mX[157UL] = t3450->mX.mX[1195UL];
    out->mY.mX[159UL] = zc_int480;
    out->mY.mX[161UL] = t3450->mU.mX[0UL];
    out->mY.mX[163UL] = t3450->mX.mX[1199UL];
    out->mY.mX[164UL] = t3450->mX.mX[1199UL];
    out->mY.mX[166UL] = zc_int68;
    out->mY.mX[168UL] = t3450->mU.mX[0UL];
    out->mY.mX[170UL] = t3450->mX.mX[1203UL];
    out->mY.mX[171UL] = t3450->mX.mX[1203UL];
    out->mY.mX[173UL] = BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3;
    out->mY.mX[175UL] = t3450->mU.mX[0UL];
    out->mY.mX[177UL] = t3450->mX.mX[1207UL];
    out->mY.mX[178UL] = t3450->mX.mX[1207UL];
    out->mY.mX[180UL] = BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3;
    out->mY.mX[182UL] = t3450->mU.mX[0UL];
    out->mY.mX[184UL] = t3450->mX.mX[1211UL];
    out->mY.mX[185UL] = t3450->mX.mX[1211UL];
    out->mY.mX[187UL] = zc_int77;
    out->mY.mX[189UL] = t3450->mU.mX[0UL];
    out->mY.mX[191UL] = t3450->mX.mX[1215UL];
    out->mY.mX[192UL] = t3450->mX.mX[1215UL];
    out->mY.mX[194UL] = zc_int80;
    out->mY.mX[196UL] = t3450->mU.mX[0UL];
    out->mY.mX[198UL] = t3450->mX.mX[1219UL];
    out->mY.mX[199UL] = t3450->mX.mX[1219UL];
    out->mY.mX[201UL] = zc_int83;
    out->mY.mX[203UL] = t3450->mU.mX[0UL];
    out->mY.mX[205UL] = t3450->mX.mX[1223UL];
    out->mY.mX[206UL] = t3450->mX.mX[1223UL];
    out->mY.mX[208UL] = zc_int86;
    out->mY.mX[210UL] = t3450->mU.mX[0UL];
    out->mY.mX[212UL] = t3450->mX.mX[1227UL];
    out->mY.mX[213UL] = t3450->mX.mX[1227UL];
    out->mY.mX[215UL] = zc_int89;
    out->mY.mX[217UL] = t3450->mU.mX[0UL];
    out->mY.mX[219UL] = t3450->mX.mX[1231UL];
    out->mY.mX[220UL] = t3450->mX.mX[1231UL];
    out->mY.mX[222UL] = BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3;
    out->mY.mX[224UL] = t3450->mU.mX[0UL];
    out->mY.mX[226UL] = t3450->mX.mX[1235UL];
    out->mY.mX[227UL] = t3450->mX.mX[1235UL];
    out->mY.mX[229UL] = BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3;
    out->mY.mX[231UL] = t3450->mU.mX[0UL];
    out->mY.mX[233UL] = t3450->mX.mX[1239UL];
    out->mY.mX[234UL] = t3450->mX.mX[1239UL];
    out->mY.mX[236UL] = zc_int97;
    out->mY.mX[238UL] = t3450->mU.mX[0UL];
    out->mY.mX[240UL] = t3450->mX.mX[1243UL];
    out->mY.mX[241UL] = t3450->mX.mX[1243UL];
    out->mY.mX[243UL] = intrm_sf_mf_4;
    out->mY.mX[245UL] = t3450->mU.mX[0UL];
    out->mY.mX[247UL] = t3450->mX.mX[1247UL];
    out->mY.mX[248UL] = t3450->mX.mX[1247UL];
    out->mY.mX[250UL] = zc_int102;
    out->mY.mX[252UL] = t3450->mU.mX[0UL];
    out->mY.mX[254UL] = t3450->mX.mX[1251UL];
    out->mY.mX[255UL] = t3450->mX.mX[1251UL];
    out->mY.mX[257UL] = zc_int99;
    out->mY.mX[259UL] = t3450->mU.mX[0UL];
    out->mY.mX[261UL] = t3450->mX.mX[1255UL];
    out->mY.mX[262UL] = t3450->mX.mX[1255UL];
    out->mY.mX[264UL] = zc_int110;
    out->mY.mX[266UL] = t3450->mU.mX[0UL];
    out->mY.mX[268UL] = t3450->mX.mX[1259UL];
    out->mY.mX[269UL] = t3450->mX.mX[1259UL];
    out->mY.mX[271UL] = BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3;
    out->mY.mX[273UL] = t3450->mU.mX[0UL];
    out->mY.mX[275UL] = t3450->mX.mX[1263UL];
    out->mY.mX[276UL] = t3450->mX.mX[1263UL];
    out->mY.mX[278UL] = zc_int114;
    out->mY.mX[280UL] = t3450->mU.mX[0UL];
    out->mY.mX[282UL] = t3450->mX.mX[1267UL];
    out->mY.mX[283UL] = t3450->mX.mX[1267UL];
    out->mY.mX[285UL] = BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3;
    out->mY.mX[287UL] = t3450->mU.mX[0UL];
    out->mY.mX[289UL] = t3450->mX.mX[1271UL];
    out->mY.mX[290UL] = t3450->mX.mX[1271UL];
    out->mY.mX[292UL] = zc_int120;
    out->mY.mX[294UL] = t3450->mU.mX[0UL];
    out->mY.mX[296UL] = t3450->mX.mX[1275UL];
    out->mY.mX[297UL] = t3450->mX.mX[1275UL];
    out->mY.mX[299UL] = zc_int121;
    out->mY.mX[301UL] = t3450->mU.mX[0UL];
    out->mY.mX[303UL] = t3450->mX.mX[1279UL];
    out->mY.mX[304UL] = t3450->mX.mX[1279UL];
    out->mY.mX[306UL] = zc_int128;
    out->mY.mX[308UL] = t3450->mU.mX[0UL];
    out->mY.mX[310UL] = t3450->mX.mX[1283UL];
    out->mY.mX[311UL] = t3450->mX.mX[1283UL];
    out->mY.mX[313UL] = intrm_sf_mf_5;
    out->mY.mX[315UL] = t3450->mU.mX[0UL];
    out->mY.mX[317UL] = t3450->mX.mX[1287UL];
    out->mY.mX[318UL] = t3450->mX.mX[1287UL];
    out->mY.mX[320UL] = zc_int63;
    out->mY.mX[322UL] = t3450->mU.mX[0UL];
    out->mY.mX[324UL] = t3450->mX.mX[1291UL];
    out->mY.mX[325UL] = t3450->mX.mX[1291UL];
    out->mY.mX[327UL] = zc_int133;
    out->mY.mX[329UL] = t3450->mU.mX[0UL];
    out->mY.mX[331UL] = t3450->mX.mX[1295UL];
    out->mY.mX[332UL] = t3450->mX.mX[1295UL];
    out->mY.mX[334UL] = zc_int13;
    out->mY.mX[336UL] = t3450->mU.mX[0UL];
    out->mY.mX[338UL] = t3450->mX.mX[1299UL];
    out->mY.mX[339UL] = t3450->mX.mX[1299UL];
    out->mY.mX[341UL] = intrm_sf_mf_39;
    out->mY.mX[343UL] = t3450->mU.mX[0UL];
    out->mY.mX[345UL] = t3450->mX.mX[1303UL];
    out->mY.mX[346UL] = t3450->mX.mX[1303UL];
    out->mY.mX[348UL] = zc_int146;
    out->mY.mX[350UL] = t3450->mU.mX[0UL];
    out->mY.mX[352UL] = t3450->mX.mX[1307UL];
    out->mY.mX[353UL] = t3450->mX.mX[1307UL];
    out->mY.mX[355UL] = zc_int147;
    out->mY.mX[357UL] = t3450->mU.mX[0UL];
    out->mY.mX[359UL] = t3450->mX.mX[1311UL];
    out->mY.mX[360UL] = t3450->mX.mX[1311UL];
    out->mY.mX[362UL] = BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3;
    out->mY.mX[364UL] = t3450->mU.mX[0UL];
    out->mY.mX[366UL] = t3450->mX.mX[1315UL];
    out->mY.mX[367UL] = t3450->mX.mX[1315UL];
    out->mY.mX[369UL] = zc_int155;
    out->mY.mX[371UL] = t3450->mU.mX[0UL];
    out->mY.mX[373UL] = t3450->mX.mX[1319UL];
    out->mY.mX[374UL] = t3450->mX.mX[1319UL];
    out->mY.mX[376UL] = zc_int154;
    out->mY.mX[378UL] = t3450->mU.mX[0UL];
    out->mY.mX[380UL] = t3450->mX.mX[1323UL];
    out->mY.mX[381UL] = t3450->mX.mX[1323UL];
    out->mY.mX[383UL] = zc_int161;
    out->mY.mX[385UL] = t3450->mU.mX[0UL];
    out->mY.mX[387UL] = t3450->mX.mX[1327UL];
    out->mY.mX[388UL] = t3450->mX.mX[1327UL];
    out->mY.mX[390UL] = zc_int164;
    out->mY.mX[392UL] = t3450->mU.mX[0UL];
    out->mY.mX[394UL] = t3450->mX.mX[1331UL];
    out->mY.mX[395UL] = t3450->mX.mX[1331UL];
    out->mY.mX[397UL] = intrm_sf_mf_43;
    out->mY.mX[399UL] = t3450->mU.mX[0UL];
    out->mY.mX[401UL] = t3450->mX.mX[1335UL];
    out->mY.mX[402UL] = t3450->mX.mX[1335UL];
    out->mY.mX[404UL] = BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3;
    out->mY.mX[406UL] = t3450->mU.mX[0UL];
    out->mY.mX[408UL] = t3450->mX.mX[1339UL];
    out->mY.mX[409UL] = t3450->mX.mX[1339UL];
    out->mY.mX[411UL] = zc_int171;
    out->mY.mX[413UL] = t3450->mU.mX[0UL];
    out->mY.mX[415UL] = t3450->mX.mX[1343UL];
    out->mY.mX[416UL] = t3450->mX.mX[1343UL];
    out->mY.mX[418UL] = intrm_sf_mf_44;
    out->mY.mX[420UL] = t3450->mU.mX[0UL];
    out->mY.mX[422UL] = t3450->mX.mX[1347UL];
    out->mY.mX[423UL] = t3450->mX.mX[1347UL];
    out->mY.mX[425UL] = zc_int177;
    out->mY.mX[427UL] = t3450->mU.mX[0UL];
    out->mY.mX[429UL] = t3450->mX.mX[1351UL];
    out->mY.mX[430UL] = t3450->mX.mX[1351UL];
    out->mY.mX[432UL] = BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3;
    out->mY.mX[434UL] = t3450->mU.mX[0UL];
    out->mY.mX[436UL] = t3450->mX.mX[1355UL];
    out->mY.mX[437UL] = t3450->mX.mX[1355UL];
    out->mY.mX[439UL] = zc_int183;
    out->mY.mX[441UL] = t3450->mU.mX[0UL];
    out->mY.mX[443UL] = t3450->mX.mX[1359UL];
    out->mY.mX[444UL] = t3450->mX.mX[1359UL];
    out->mY.mX[446UL] = intrm_sf_mf_47;
    out->mY.mX[448UL] = t3450->mU.mX[0UL];
    out->mY.mX[450UL] = t3450->mX.mX[1363UL];
    out->mY.mX[451UL] = t3450->mX.mX[1363UL];
    out->mY.mX[453UL] = intrm_sf_mf_7;
    out->mY.mX[455UL] = t3450->mU.mX[0UL];
    out->mY.mX[457UL] = t3450->mX.mX[1367UL];
    out->mY.mX[458UL] = t3450->mX.mX[1367UL];
    out->mY.mX[460UL] = zc_int192;
    out->mY.mX[462UL] = t3450->mU.mX[0UL];
    out->mY.mX[464UL] = t3450->mX.mX[1371UL];
    out->mY.mX[465UL] = t3450->mX.mX[1371UL];
    out->mY.mX[467UL] = zc_int195;
    out->mY.mX[469UL] = t3450->mU.mX[0UL];
    out->mY.mX[471UL] = t3450->mX.mX[1375UL];
    out->mY.mX[472UL] = t3450->mX.mX[1375UL];
    out->mY.mX[474UL] = zc_int200;
    out->mY.mX[476UL] = t3450->mU.mX[0UL];
    out->mY.mX[478UL] = t3450->mX.mX[1379UL];
    out->mY.mX[479UL] = t3450->mX.mX[1379UL];
    out->mY.mX[481UL] = zc_int134;
    out->mY.mX[483UL] = t3450->mU.mX[0UL];
    out->mY.mX[485UL] = t3450->mX.mX[1383UL];
    out->mY.mX[486UL] = t3450->mX.mX[1383UL];
    out->mY.mX[488UL] = zc_int202;
    out->mY.mX[490UL] = t3450->mU.mX[0UL];
    out->mY.mX[492UL] = t3450->mX.mX[1387UL];
    out->mY.mX[493UL] = t3450->mX.mX[1387UL];
    out->mY.mX[495UL] = zc_int207;
    out->mY.mX[497UL] = t3450->mU.mX[0UL];
    out->mY.mX[499UL] = t3450->mX.mX[1391UL];
    out->mY.mX[500UL] = t3450->mX.mX[1391UL];
    out->mY.mX[502UL] = zc_int212;
    out->mY.mX[504UL] = t3450->mU.mX[0UL];
    out->mY.mX[506UL] = t3450->mX.mX[1395UL];
    out->mY.mX[507UL] = t3450->mX.mX[1395UL];
    out->mY.mX[509UL] = zc_int211;
    out->mY.mX[511UL] = t3450->mU.mX[0UL];
    out->mY.mX[513UL] = t3450->mX.mX[1399UL];
    out->mY.mX[514UL] = t3450->mX.mX[1399UL];
    out->mY.mX[516UL] = zc_int218;
    out->mY.mX[518UL] = t3450->mU.mX[0UL];
    out->mY.mX[520UL] = t3450->mX.mX[1403UL];
    out->mY.mX[521UL] = t3450->mX.mX[1403UL];
    out->mY.mX[523UL] = zc_int221;
    out->mY.mX[525UL] = t3450->mU.mX[0UL];
    out->mY.mX[527UL] = t3450->mX.mX[1407UL];
    out->mY.mX[528UL] = t3450->mX.mX[1407UL];
    out->mY.mX[530UL] = intrm_sf_mf_52;
    out->mY.mX[532UL] = t3450->mU.mX[0UL];
    out->mY.mX[534UL] = t3450->mX.mX[1411UL];
    out->mY.mX[535UL] = t3450->mX.mX[1411UL];
    out->mY.mX[537UL] = zc_int225;
    out->mY.mX[539UL] = t3450->mU.mX[0UL];
    out->mY.mX[541UL] = t3450->mX.mX[1415UL];
    out->mY.mX[542UL] = t3450->mX.mX[1415UL];
    out->mY.mX[544UL] = zc_int22;
    out->mY.mX[546UL] = t3450->mU.mX[0UL];
    out->mY.mX[548UL] = t3450->mX.mX[1419UL];
    out->mY.mX[549UL] = t3450->mX.mX[1419UL];
    out->mY.mX[551UL] = BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3;
    out->mY.mX[553UL] = t3450->mU.mX[0UL];
    out->mY.mX[555UL] = t3450->mX.mX[1423UL];
    out->mY.mX[556UL] = t3450->mX.mX[1423UL];
    out->mY.mX[558UL] = zc_int236;
    out->mY.mX[560UL] = t3450->mU.mX[0UL];
    out->mY.mX[562UL] = t3450->mX.mX[1427UL];
    out->mY.mX[563UL] = t3450->mX.mX[1427UL];
    out->mY.mX[565UL] = BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3;
    out->mY.mX[567UL] = t3450->mU.mX[0UL];
    out->mY.mX[569UL] = t3450->mX.mX[1431UL];
    out->mY.mX[570UL] = t3450->mX.mX[1431UL];
    out->mY.mX[572UL] = zc_int242;
    out->mY.mX[574UL] = t3450->mU.mX[0UL];
    out->mY.mX[576UL] = t3450->mX.mX[1435UL];
    out->mY.mX[577UL] = t3450->mX.mX[1435UL];
    out->mY.mX[579UL] = zc_int243;
    out->mY.mX[581UL] = t3450->mU.mX[0UL];
    out->mY.mX[583UL] = t3450->mX.mX[1439UL];
    out->mY.mX[584UL] = t3450->mX.mX[1439UL];
    out->mY.mX[586UL] = zc_int248;
    out->mY.mX[588UL] = t3450->mU.mX[0UL];
    out->mY.mX[590UL] = t3450->mX.mX[1443UL];
    out->mY.mX[591UL] = t3450->mX.mX[1443UL];
    out->mY.mX[593UL] = zc_int250;
    out->mY.mX[595UL] = t3450->mU.mX[0UL];
    out->mY.mX[597UL] = t3450->mX.mX[1447UL];
    out->mY.mX[598UL] = t3450->mX.mX[1447UL];
    out->mY.mX[600UL] = zc_int247;
    out->mY.mX[602UL] = t3450->mU.mX[0UL];
    out->mY.mX[604UL] = t3450->mX.mX[1451UL];
    out->mY.mX[605UL] = t3450->mX.mX[1451UL];
    out->mY.mX[607UL] = zc_int253;
    out->mY.mX[609UL] = t3450->mU.mX[0UL];
    out->mY.mX[611UL] = t3450->mX.mX[1455UL];
    out->mY.mX[612UL] = t3450->mX.mX[1455UL];
    out->mY.mX[614UL] = intrm_sf_mf_57;
    out->mY.mX[616UL] = t3450->mU.mX[0UL];
    out->mY.mX[618UL] = t3450->mX.mX[1459UL];
    out->mY.mX[619UL] = t3450->mX.mX[1459UL];
    out->mY.mX[621UL] = zc_int258;
    out->mY.mX[623UL] = t3450->mU.mX[0UL];
    out->mY.mX[625UL] = t3450->mX.mX[1463UL];
    out->mY.mX[626UL] = t3450->mX.mX[1463UL];
    out->mY.mX[628UL] = zc_int262;
    out->mY.mX[630UL] = t3450->mU.mX[0UL];
    out->mY.mX[632UL] = t3450->mX.mX[1467UL];
    out->mY.mX[633UL] = t3450->mX.mX[1467UL];
    out->mY.mX[635UL] = zc_int265;
    out->mY.mX[637UL] = t3450->mU.mX[0UL];
    out->mY.mX[639UL] = t3450->mX.mX[1471UL];
    out->mY.mX[640UL] = t3450->mX.mX[1471UL];
    out->mY.mX[642UL] = zc_int203;
    out->mY.mX[644UL] = t3450->mU.mX[0UL];
    out->mY.mX[646UL] = t3450->mX.mX[1475UL];
    out->mY.mX[647UL] = t3450->mX.mX[1475UL];
    out->mY.mX[649UL] = zc_int273;
    out->mY.mX[651UL] = t3450->mU.mX[0UL];
    out->mY.mX[653UL] = t3450->mX.mX[1479UL];
    out->mY.mX[654UL] = t3450->mX.mX[1479UL];
    out->mY.mX[656UL] = zc_int276;
    out->mY.mX[658UL] = t3450->mU.mX[0UL];
    out->mY.mX[660UL] = t3450->mX.mX[1483UL];
    out->mY.mX[661UL] = t3450->mX.mX[1483UL];
    out->mY.mX[663UL] = zc_int281;
    out->mY.mX[665UL] = t3450->mU.mX[0UL];
    out->mY.mX[667UL] = t3450->mX.mX[1487UL];
    out->mY.mX[668UL] = t3450->mX.mX[1487UL];
    out->mY.mX[670UL] = zc_int279;
    out->mY.mX[672UL] = t3450->mU.mX[0UL];
    out->mY.mX[674UL] = t3450->mX.mX[1491UL];
    out->mY.mX[675UL] = t3450->mX.mX[1491UL];
    out->mY.mX[677UL] = zc_int283;
    out->mY.mX[679UL] = t3450->mU.mX[0UL];
    out->mY.mX[681UL] = t3450->mX.mX[1495UL];
    out->mY.mX[682UL] = t3450->mX.mX[1495UL];
    out->mY.mX[684UL] = zc_int290;
    out->mY.mX[686UL] = t3450->mU.mX[0UL];
    out->mY.mX[688UL] = t3450->mX.mX[1499UL];
    out->mY.mX[689UL] = t3450->mX.mX[1499UL];
    out->mY.mX[691UL] = zc_int293;
    out->mY.mX[693UL] = t3450->mU.mX[0UL];
    out->mY.mX[695UL] = t3450->mX.mX[1503UL];
    out->mY.mX[696UL] = t3450->mX.mX[1503UL];
    out->mY.mX[698UL] = zc_int289;
    out->mY.mX[700UL] = t3450->mU.mX[0UL];
    out->mY.mX[702UL] = t3450->mX.mX[1507UL];
    out->mY.mX[703UL] = t3450->mX.mX[1507UL];
    out->mY.mX[705UL] = zc_int299;
    out->mY.mX[707UL] = t3450->mU.mX[0UL];
    out->mY.mX[709UL] = t3450->mX.mX[1511UL];
    out->mY.mX[710UL] = t3450->mX.mX[1511UL];
    out->mY.mX[712UL] = BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3;
    out->mY.mX[714UL] = t3450->mU.mX[0UL];
    out->mY.mX[716UL] = t3450->mX.mX[1515UL];
    out->mY.mX[717UL] = t3450->mX.mX[1515UL];
    out->mY.mX[719UL] = zc_int301;
    out->mY.mX[721UL] = t3450->mU.mX[0UL];
    out->mY.mX[723UL] = t3450->mX.mX[1519UL];
    out->mY.mX[724UL] = t3450->mX.mX[1519UL];
    out->mY.mX[726UL] = zc_int304;
    out->mY.mX[728UL] = t3450->mU.mX[0UL];
    out->mY.mX[730UL] = t3450->mX.mX[1523UL];
    out->mY.mX[731UL] = t3450->mX.mX[1523UL];
    out->mY.mX[733UL] = intrm_sf_mf_11;
    out->mY.mX[735UL] = t3450->mU.mX[0UL];
    out->mY.mX[737UL] = t3450->mX.mX[1527UL];
    out->mY.mX[738UL] = t3450->mX.mX[1527UL];
    out->mY.mX[740UL] = zc_int314;
    out->mY.mX[742UL] = t3450->mU.mX[0UL];
    out->mY.mX[744UL] = t3450->mX.mX[1531UL];
    out->mY.mX[745UL] = t3450->mX.mX[1531UL];
    out->mY.mX[747UL] = BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3;
    out->mY.mX[749UL] = t3450->mU.mX[0UL];
    out->mY.mX[751UL] = t3450->mX.mX[1535UL];
    out->mY.mX[752UL] = t3450->mX.mX[1535UL];
    out->mY.mX[754UL] = zc_int320;
    out->mY.mX[756UL] = t3450->mU.mX[0UL];
    out->mY.mX[758UL] = t3450->mX.mX[1539UL];
    out->mY.mX[759UL] = t3450->mX.mX[1539UL];
    out->mY.mX[761UL] = intrm_sf_mf_67;
    out->mY.mX[763UL] = t3450->mU.mX[0UL];
    out->mY.mX[765UL] = t3450->mX.mX[1543UL];
    out->mY.mX[766UL] = t3450->mX.mX[1543UL];
    out->mY.mX[768UL] = zc_int324;
    out->mY.mX[770UL] = t3450->mU.mX[0UL];
    out->mY.mX[772UL] = t3450->mX.mX[1547UL];
    out->mY.mX[773UL] = t3450->mX.mX[1547UL];
    out->mY.mX[775UL] = zc_int325;
    out->mY.mX[777UL] = t3450->mU.mX[0UL];
    out->mY.mX[779UL] = t3450->mX.mX[1551UL];
    out->mY.mX[780UL] = t3450->mX.mX[1551UL];
    out->mY.mX[782UL] = BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3;
    out->mY.mX[784UL] = t3450->mU.mX[0UL];
    out->mY.mX[786UL] = t3450->mX.mX[1555UL];
    out->mY.mX[787UL] = t3450->mX.mX[1555UL];
    out->mY.mX[789UL] = intrm_sf_mf_69;
    out->mY.mX[791UL] = t3450->mU.mX[0UL];
    out->mY.mX[793UL] = t3450->mX.mX[1559UL];
    out->mY.mX[794UL] = t3450->mX.mX[1559UL];
    out->mY.mX[796UL] = zc_int334;
    out->mY.mX[798UL] = t3450->mU.mX[0UL];
    out->mY.mX[800UL] = t3450->mX.mX[1563UL];
    out->mY.mX[801UL] = t3450->mX.mX[1563UL];
    out->mY.mX[803UL] = BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3;
    out->mY.mX[805UL] = t3450->mU.mX[0UL];
    out->mY.mX[807UL] = t3450->mX.mX[1567UL];
    out->mY.mX[808UL] = t3450->mX.mX[1567UL];
    out->mY.mX[810UL] = zc_int661;
    out->mY.mX[812UL] = t3450->mU.mX[0UL];
    out->mY.mX[814UL] = t3450->mX.mX[1571UL];
    out->mY.mX[815UL] = t3450->mX.mX[1571UL];
    out->mY.mX[817UL] = intrm_sf_mf_80;
    out->mY.mX[819UL] = t3450->mU.mX[0UL];
    out->mY.mX[821UL] = t3450->mX.mX[1575UL];
    out->mY.mX[822UL] = t3450->mX.mX[1575UL];
    out->mY.mX[824UL] = zc_int576;
    out->mY.mX[826UL] = t3450->mU.mX[0UL];
    out->mY.mX[828UL] = t3450->mX.mX[1579UL];
    out->mY.mX[829UL] = t3450->mX.mX[1579UL];
    out->mY.mX[831UL] = zc_int579;
    out->mY.mX[833UL] = t3450->mU.mX[0UL];
    out->mY.mX[835UL] = t3450->mX.mX[1583UL];
    out->mY.mX[836UL] = t3450->mX.mX[1583UL];
    out->mY.mX[838UL] = zc_int586;
    out->mY.mX[840UL] = t3450->mU.mX[0UL];
    out->mY.mX[842UL] = t3450->mX.mX[1587UL];
    out->mY.mX[843UL] = t3450->mX.mX[1587UL];
    out->mY.mX[845UL] = intrm_sf_mf_117;
    out->mY.mX[847UL] = t3450->mU.mX[0UL];
    out->mY.mX[849UL] = t3450->mX.mX[1591UL];
    out->mY.mX[850UL] = t3450->mX.mX[1591UL];
    out->mY.mX[852UL] = zc_int588;
    out->mY.mX[854UL] = t3450->mU.mX[0UL];
    out->mY.mX[856UL] = t3450->mX.mX[1595UL];
    out->mY.mX[857UL] = t3450->mX.mX[1595UL];
    out->mY.mX[859UL] = zc_int595;
    out->mY.mX[861UL] = t3450->mU.mX[0UL];
    out->mY.mX[863UL] = t3450->mX.mX[1599UL];
    out->mY.mX[864UL] = t3450->mX.mX[1599UL];
    out->mY.mX[866UL] = zc_int598;
    out->mY.mX[868UL] = t3450->mU.mX[0UL];
    out->mY.mX[870UL] = t3450->mX.mX[1603UL];
    out->mY.mX[871UL] = t3450->mX.mX[1603UL];
    out->mY.mX[873UL] = intrm_sf_mf_119;
    out->mY.mX[875UL] = t3450->mU.mX[0UL];
    out->mY.mX[877UL] = t3450->mX.mX[1607UL];
    out->mY.mX[878UL] = t3450->mX.mX[1607UL];
    out->mY.mX[880UL] = zc_int600;
    out->mY.mX[882UL] = t3450->mU.mX[0UL];
    out->mY.mX[884UL] = t3450->mX.mX[1611UL];
    out->mY.mX[885UL] = t3450->mX.mX[1611UL];
    out->mY.mX[887UL] = zc_int607;
    out->mY.mX[889UL] = t3450->mU.mX[0UL];
    out->mY.mX[891UL] = t3450->mX.mX[1615UL];
    out->mY.mX[892UL] = t3450->mX.mX[1615UL];
    out->mY.mX[894UL] = zc_int606;
    out->mY.mX[896UL] = t3450->mU.mX[0UL];
    out->mY.mX[898UL] = t3450->mX.mX[1619UL];
    out->mY.mX[899UL] = t3450->mX.mX[1619UL];
    out->mY.mX[901UL] = intrm_sf_mf_121;
    out->mY.mX[903UL] = t3450->mU.mX[0UL];
    out->mY.mX[905UL] = t3450->mX.mX[1623UL];
    out->mY.mX[906UL] = t3450->mX.mX[1623UL];
    out->mY.mX[908UL] = BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3;
    out->mY.mX[910UL] = t3450->mU.mX[0UL];
    out->mY.mX[912UL] = t3450->mX.mX[1627UL];
    out->mY.mX[913UL] = t3450->mX.mX[1627UL];
    out->mY.mX[915UL] = zc_int615;
    out->mY.mX[917UL] = t3450->mU.mX[0UL];
    out->mY.mX[919UL] = t3450->mX.mX[1631UL];
    out->mY.mX[920UL] = t3450->mX.mX[1631UL];
    out->mY.mX[922UL] = zc_int618;
    out->mY.mX[924UL] = t3450->mU.mX[0UL];
    out->mY.mX[926UL] = t3450->mX.mX[1635UL];
    out->mY.mX[927UL] = t3450->mX.mX[1635UL];
    out->mY.mX[929UL] = zc_int625;
    out->mY.mX[931UL] = t3450->mU.mX[0UL];
    out->mY.mX[933UL] = t3450->mX.mX[1639UL];
    out->mY.mX[934UL] = t3450->mX.mX[1639UL];
    out->mY.mX[936UL] = zc_int628;
    out->mY.mX[938UL] = t3450->mU.mX[0UL];
    out->mY.mX[940UL] = t3450->mX.mX[1643UL];
    out->mY.mX[941UL] = t3450->mX.mX[1643UL];
    out->mY.mX[943UL] = zc_int631;
    out->mY.mX[945UL] = t3450->mU.mX[0UL];
    out->mY.mX[947UL] = t3450->mX.mX[1647UL];
    out->mY.mX[948UL] = t3450->mX.mX[1647UL];
    out->mY.mX[950UL] = zc_int634;
    out->mY.mX[952UL] = t3450->mU.mX[0UL];
    out->mY.mX[954UL] = t3450->mX.mX[1651UL];
    out->mY.mX[955UL] = t3450->mX.mX[1651UL];
    out->mY.mX[957UL] = intrm_sf_mf_125;
    out->mY.mX[959UL] = t3450->mU.mX[0UL];
    out->mY.mX[961UL] = t3450->mX.mX[1655UL];
    out->mY.mX[962UL] = t3450->mX.mX[1655UL];
    out->mY.mX[964UL] = zc_int455;
(void)LC;
    (void)out;
    return 0;}
