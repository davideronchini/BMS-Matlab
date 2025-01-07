#include "ne_ds.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_sys_struct.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_duf.h"
#include "BatterySOHEstimation_17a5a2c_49_ds.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_externals.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T BatterySOHEstimation_17a5a2c_49_ds_duf(const NeDynamicSystem *LC, const NeDynamicSystemInput *t2072, NeDsMethodOutput *out)
{
    static real_T _cg_const_1[7] = { 0.0, 0.1, 0.25, 0.5, 0.75, 0.9, 1.0 };
    static real_T _cg_const_2[3] = { 278.0, 293.0, 313.0 };
    ETTSf3049b48 t101;
    ETTSf3049b48 t116;
    ETTSf3049b48 t119;
    ETTSf3049b48 t135;
    ETTSf3049b48 t140;
    ETTSf3049b48 t161;
    ETTSf3049b48 t170;
    ETTSf3049b48 t175;
    ETTSf3049b48 t186;
    ETTSf3049b48 t204;
    ETTSf3049b48 t232;
    ETTSf3049b48 t236;
    ETTSf3049b48 t270;
    ETTSf3049b48 t271;
    ETTSf3049b48 t273;
    ETTSf3049b48 t32;
    ETTSf3049b48 t62;
    ETTSf3049b48 t78;
    real_T nonscalar1[7];
    real_T nonscalar10[3];
    real_T nonscalar100[3];
    real_T nonscalar101[3];
    real_T nonscalar102[3];
    real_T nonscalar103[3];
    real_T nonscalar104[3];
    real_T nonscalar105[3];
    real_T nonscalar106[3];
    real_T nonscalar107[3];
    real_T nonscalar108[3];
    real_T nonscalar109[3];
    real_T nonscalar11[3];
    real_T nonscalar110[3];
    real_T nonscalar111[3];
    real_T nonscalar112[3];
    real_T nonscalar113[3];
    real_T nonscalar114[3];
    real_T nonscalar115[3];
    real_T nonscalar116[3];
    real_T nonscalar117[3];
    real_T nonscalar118[3];
    real_T nonscalar119[3];
    real_T nonscalar12[3];
    real_T nonscalar120[3];
    real_T nonscalar121[3];
    real_T nonscalar122[3];
    real_T nonscalar123[3];
    real_T nonscalar124[3];
    real_T nonscalar125[3];
    real_T nonscalar126[3];
    real_T nonscalar127[3];
    real_T nonscalar128[3];
    real_T nonscalar129[3];
    real_T nonscalar13[3];
    real_T nonscalar130[3];
    real_T nonscalar131[3];
    real_T nonscalar132[3];
    real_T nonscalar133[3];
    real_T nonscalar134[3];
    real_T nonscalar135[3];
    real_T nonscalar136[3];
    real_T nonscalar137[3];
    real_T nonscalar138[3];
    real_T nonscalar139[3];
    real_T nonscalar14[3];
    real_T nonscalar140[3];
    real_T nonscalar141[3];
    real_T nonscalar15[3];
    real_T nonscalar16[3];
    real_T nonscalar17[3];
    real_T nonscalar18[3];
    real_T nonscalar19[3];
    real_T nonscalar2[3];
    real_T nonscalar20[3];
    real_T nonscalar21[3];
    real_T nonscalar22[3];
    real_T nonscalar23[3];
    real_T nonscalar24[3];
    real_T nonscalar25[3];
    real_T nonscalar26[3];
    real_T nonscalar27[3];
    real_T nonscalar28[3];
    real_T nonscalar29[3];
    real_T nonscalar30[3];
    real_T nonscalar31[3];
    real_T nonscalar32[3];
    real_T nonscalar33[3];
    real_T nonscalar34[3];
    real_T nonscalar35[3];
    real_T nonscalar36[3];
    real_T nonscalar37[3];
    real_T nonscalar38[3];
    real_T nonscalar39[3];
    real_T nonscalar4[3];
    real_T nonscalar40[3];
    real_T nonscalar41[3];
    real_T nonscalar42[3];
    real_T nonscalar43[3];
    real_T nonscalar44[3];
    real_T nonscalar45[3];
    real_T nonscalar46[3];
    real_T nonscalar47[3];
    real_T nonscalar48[3];
    real_T nonscalar49[3];
    real_T nonscalar5[3];
    real_T nonscalar50[3];
    real_T nonscalar51[3];
    real_T nonscalar52[3];
    real_T nonscalar53[3];
    real_T nonscalar54[3];
    real_T nonscalar55[3];
    real_T nonscalar56[3];
    real_T nonscalar57[3];
    real_T nonscalar58[3];
    real_T nonscalar59[3];
    real_T nonscalar6[3];
    real_T nonscalar60[3];
    real_T nonscalar61[3];
    real_T nonscalar62[3];
    real_T nonscalar63[3];
    real_T nonscalar64[3];
    real_T nonscalar65[3];
    real_T nonscalar66[3];
    real_T nonscalar67[3];
    real_T nonscalar68[3];
    real_T nonscalar69[3];
    real_T nonscalar7[3];
    real_T nonscalar70[3];
    real_T nonscalar71[3];
    real_T nonscalar72[3];
    real_T nonscalar73[3];
    real_T nonscalar74[3];
    real_T nonscalar75[3];
    real_T nonscalar76[3];
    real_T nonscalar77[3];
    real_T nonscalar78[3];
    real_T nonscalar79[3];
    real_T nonscalar8[3];
    real_T nonscalar80[3];
    real_T nonscalar81[3];
    real_T nonscalar82[3];
    real_T nonscalar83[3];
    real_T nonscalar84[3];
    real_T nonscalar85[3];
    real_T nonscalar86[3];
    real_T nonscalar87[3];
    real_T nonscalar88[3];
    real_T nonscalar89[3];
    real_T nonscalar9[3];
    real_T nonscalar90[3];
    real_T nonscalar91[3];
    real_T nonscalar92[3];
    real_T nonscalar93[3];
    real_T nonscalar94[3];
    real_T nonscalar95[3];
    real_T nonscalar96[3];
    real_T nonscalar97[3];
    real_T nonscalar98[3];
    real_T nonscalar99[3];
    real_T t1354[1];
    real_T t2066[1];
    real_T BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel6;
    real_T BatteryPack_v2_ModuleAssembly2_Module05_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly2_Module10_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly2_Module15_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly2_Module22_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly2_Module_1_1_Cell_1_electricalMod4;
    real_T BatteryPack_v2_ModuleAssembly3_Module05_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly3_Module07_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly3_Module08_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly3_Module13_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly3_Module20_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly3_Module23_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly4_Module05_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly4_Module06_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly4_Module12_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly4_Module13_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly4_Module15_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly4_Module17_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly4_Module18_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly4_Module21_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly4_Module_1_1_Cell_1_electricalMod4;
    real_T BatteryPack_v2_ModuleAssembly5_Module03_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly5_Module11_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly5_Module13_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly5_Module21_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly6_Module10_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly6_Module11_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly6_Module12_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly6_Module16_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly6_Module17_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel4;
    real_T BatteryPack_v2_ModuleAssembly_23_Module02_Cell_1_electricalMod4;
    real_T BatteryPack_v2_ModuleAssembly_23_Module04_Cell_1_electricalMod4;
    real_T BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod4;
    real_T BatteryPack_v2_ModuleAssembly_23_Module07_Cell_1_electricalMod4;
    real_T BatteryPack_v2_ModuleAssembly_23_Module08_Cell_1_electricalMod4;
    real_T BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod4;
    real_T BatteryPack_v2_ModuleAssembly_23_Module10_Cell_1_electricalMod4;
    real_T BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod4;
    real_T BatteryPack_v2_ModuleAssembly_23_Module14_Cell_1_electricalMod4;
    real_T BatteryPack_v2_ModuleAssembly_23_Module15_Cell_1_electricalMod4;
    real_T BatteryPack_v2_ModuleAssembly_23_Module16_Cell_1_electricalMod4;
    real_T BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod4;
    real_T BatteryPack_v2_ModuleAssembly_23_Module20_Cell_1_electricalMod4;
    real_T BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod4;
    real_T intermediate_der82807;
    real_T intermediate_der82811;
    real_T intermediate_der82828;
    real_T intermediate_der82840;
    real_T intermediate_der82852;
    real_T intermediate_der82870;
    real_T intermediate_der82900;
    real_T intermediate_der82904;
    real_T intermediate_der82912;
    real_T intermediate_der82927;
    real_T intermediate_der82951;
    real_T intermediate_der82956;
    real_T intermediate_der82959;
    real_T intermediate_der82964;
    real_T intermediate_der82976;
    real_T intermediate_der82979;
    real_T intermediate_der82995;
    real_T intermediate_der83016;
    real_T intermediate_der83046;
    real_T intermediate_der83074;
    real_T intermediate_der83079;
    real_T intermediate_der83089;
    real_T intermediate_der83095;
    real_T intermediate_der83108;
    real_T intermediate_der83116;
    real_T intermediate_der83119;
    real_T intermediate_der83125;
    real_T intermediate_der83136;
    real_T intermediate_der83156;
    real_T intermediate_der83163;
    real_T intermediate_der83168;
    real_T intermediate_der83179;
    real_T intermediate_der83199;
    real_T intermediate_der83212;
    real_T intermediate_der83215;
    real_T intermediate_der83221;
    real_T intermediate_der83227;
    real_T intermediate_der83231;
    real_T intermediate_der83236;
    real_T intermediate_der83240;
    real_T intermediate_der83251;
    real_T intermediate_der83264;
    real_T intermediate_der83267;
    real_T intermediate_der83292;
    real_T intermediate_der83307;
    real_T intermediate_der83311;
    real_T intermediate_der83335;
    real_T intermediate_der83339;
    real_T intermediate_der83355;
    real_T intrm_sf_mf_10;
    real_T intrm_sf_mf_103;
    real_T intrm_sf_mf_107;
    real_T intrm_sf_mf_108;
    real_T intrm_sf_mf_110;
    real_T intrm_sf_mf_113;
    real_T intrm_sf_mf_121;
    real_T intrm_sf_mf_126;
    real_T intrm_sf_mf_13;
    real_T intrm_sf_mf_133;
    real_T intrm_sf_mf_137;
    real_T intrm_sf_mf_14;
    real_T intrm_sf_mf_15;
    real_T intrm_sf_mf_19;
    real_T intrm_sf_mf_20;
    real_T intrm_sf_mf_28;
    real_T intrm_sf_mf_33;
    real_T intrm_sf_mf_39;
    real_T intrm_sf_mf_4;
    real_T intrm_sf_mf_43;
    real_T intrm_sf_mf_45;
    real_T intrm_sf_mf_47;
    real_T intrm_sf_mf_5;
    real_T intrm_sf_mf_52;
    real_T intrm_sf_mf_53;
    real_T intrm_sf_mf_55;
    real_T intrm_sf_mf_57;
    real_T intrm_sf_mf_6;
    real_T intrm_sf_mf_61;
    real_T intrm_sf_mf_64;
    real_T intrm_sf_mf_67;
    real_T intrm_sf_mf_7;
    real_T intrm_sf_mf_71;
    real_T intrm_sf_mf_73;
    real_T intrm_sf_mf_78;
    real_T intrm_sf_mf_79;
    real_T intrm_sf_mf_84;
    real_T intrm_sf_mf_86;
    real_T intrm_sf_mf_89;
    real_T intrm_sf_mf_92;
    real_T intrm_sf_mf_95;
    real_T intrm_sf_mf_98;
    real_T t2071;
    real_T zc_int1;
    real_T zc_int115;
    real_T zc_int127;
    real_T zc_int133;
    real_T zc_int139;
    real_T zc_int145;
    real_T zc_int148;
    real_T zc_int154;
    real_T zc_int163;
    real_T zc_int169;
    real_T zc_int178;
    real_T zc_int181;
    real_T zc_int187;
    real_T zc_int208;
    real_T zc_int217;
    real_T zc_int223;
    real_T zc_int244;
    real_T zc_int247;
    real_T zc_int25;
    real_T zc_int250;
    real_T zc_int283;
    real_T zc_int292;
    real_T zc_int307;
    real_T zc_int334;
    real_T zc_int37;
    real_T zc_int40;
    real_T zc_int46;
    real_T zc_int49;
    real_T zc_int576;
    real_T zc_int579;
    real_T zc_int58;
    real_T zc_int582;
    real_T zc_int585;
    real_T zc_int591;
    real_T zc_int597;
    real_T zc_int606;
    real_T zc_int612;
    real_T zc_int615;
    real_T zc_int618;
    real_T zc_int627;
    real_T zc_int633;
    real_T zc_int660;
    real_T zc_int693;
    real_T zc_int694;
    real_T zc_int696;
    real_T zc_int697;
    real_T zc_int699;
    real_T zc_int7;
    real_T zc_int70;
    real_T zc_int701;
    real_T zc_int704;
    real_T zc_int706;
    real_T zc_int707;
    real_T zc_int708;
    real_T zc_int709;
    real_T zc_int710;
    real_T zc_int711;
    real_T zc_int713;
    real_T zc_int715;
    real_T zc_int716;
    real_T zc_int717;
    real_T zc_int719;
    real_T zc_int722;
    real_T zc_int725;
    real_T zc_int729;
    real_T zc_int730;
    real_T zc_int731;
    real_T zc_int732;
    real_T zc_int734;
    real_T zc_int737;
    real_T zc_int738;
    real_T zc_int739;
    real_T zc_int740;
    real_T zc_int743;
    real_T zc_int744;
    real_T zc_int745;
    real_T zc_int746;
    real_T zc_int750;
    real_T zc_int752;
    real_T zc_int755;
    real_T zc_int756;
    real_T zc_int758;
    real_T zc_int759;
    real_T zc_int76;
    real_T zc_int761;
    real_T zc_int763;
    real_T zc_int765;
    real_T zc_int767;
    real_T zc_int768;
    real_T zc_int769;
    real_T zc_int771;
    real_T zc_int773;
    real_T zc_int776;
    real_T zc_int778;
    real_T zc_int779;
    real_T zc_int781;
    real_T zc_int782;
    real_T zc_int783;
    real_T zc_int784;
    real_T zc_int785;
    real_T zc_int786;
    real_T zc_int788;
    real_T zc_int789;
    real_T zc_int790;
    real_T zc_int791;
    real_T zc_int795;
    real_T zc_int800;
    real_T zc_int801;
    real_T zc_int805;
    real_T zc_int806;
    real_T zc_int808;
    real_T zc_int811;
    real_T zc_int816;
    real_T zc_int817;
    real_T zc_int82;
    real_T zc_int822;
    real_T zc_int824;
    real_T zc_int826;
    real_T zc_int827;
    real_T zc_int88;
    real_T zc_int91;
    size_t t277[1];
    size_t t278[1];
    size_t t280[1];
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
    nonscalar4[0] = 49756.425413970115;
    nonscalar4[1] = 49756.425413970115;
    nonscalar4[2] = 49756.425413970115;
    nonscalar5[0] = 48752.676279699204;
    nonscalar5[1] = 48752.676279699204;
    nonscalar5[2] = 48752.676279699204;
    nonscalar6[0] = 48078.83491515166;
    nonscalar6[1] = 48078.83491515166;
    nonscalar6[2] = 48078.83491515166;
    nonscalar7[0] = 49291.110298684158;
    nonscalar7[1] = 49291.110298684158;
    nonscalar7[2] = 49291.110298684158;
    nonscalar8[0] = 49823.752905094138;
    nonscalar8[1] = 49823.752905094138;
    nonscalar8[2] = 49823.752905094138;
    nonscalar9[0] = 48708.570492901526;
    nonscalar9[1] = 48708.570492901526;
    nonscalar9[2] = 48708.570492901526;
    nonscalar10[0] = 49343.998300065294;
    nonscalar10[1] = 49343.998300065294;
    nonscalar10[2] = 49343.998300065294;
    nonscalar11[0] = 49600.081783587259;
    nonscalar11[1] = 49600.081783587259;
    nonscalar11[2] = 49600.081783587259;
    nonscalar12[0] = 48252.294996333505;
    nonscalar12[1] = 48252.294996333505;
    nonscalar12[2] = 48252.294996333505;
    nonscalar13[0] = 48003.7460732471;
    nonscalar13[1] = 48003.7460732471;
    nonscalar13[2] = 48003.7460732471;
    nonscalar14[0] = 48215.790259561712;
    nonscalar14[1] = 48215.790259561712;
    nonscalar14[2] = 48215.790259561712;
    nonscalar15[0] = 47887.551755551249;
    nonscalar15[1] = 47887.551755551249;
    nonscalar15[2] = 47887.551755551249;
    nonscalar16[0] = 48875.423582391188;
    nonscalar16[1] = 48875.423582391188;
    nonscalar16[2] = 48875.423582391188;
    nonscalar17[0] = 50336.659836010287;
    nonscalar17[1] = 50336.659836010287;
    nonscalar17[2] = 50336.659836010287;
    nonscalar18[0] = 48571.046325976982;
    nonscalar18[1] = 48571.046325976982;
    nonscalar18[2] = 48571.046325976982;
    nonscalar19[0] = 48549.741178192853;
    nonscalar19[1] = 48549.741178192853;
    nonscalar19[2] = 48549.741178192853;
    nonscalar20[0] = 47987.392263058777;
    nonscalar20[1] = 47987.392263058777;
    nonscalar20[2] = 47987.392263058777;
    nonscalar21[0] = 49836.09858016346;
    nonscalar21[1] = 49836.09858016346;
    nonscalar21[2] = 49836.09858016346;
    nonscalar22[0] = 48786.906298418282;
    nonscalar22[1] = 48786.906298418282;
    nonscalar22[2] = 48786.906298418282;
    nonscalar23[0] = 48577.6028324586;
    nonscalar23[1] = 48577.6028324586;
    nonscalar23[2] = 48577.6028324586;
    nonscalar24[0] = 49432.651125298631;
    nonscalar24[1] = 49432.651125298631;
    nonscalar24[2] = 49432.651125298631;
    nonscalar25[0] = 48105.363628921965;
    nonscalar25[1] = 48105.363628921965;
    nonscalar25[2] = 48105.363628921965;
    nonscalar26[0] = 48350.95570970088;
    nonscalar26[1] = 48350.95570970088;
    nonscalar26[2] = 48350.95570970088;
    nonscalar27[0] = 48949.752953548908;
    nonscalar27[1] = 48949.752953548908;
    nonscalar27[2] = 48949.752953548908;
    nonscalar28[0] = 49773.45502165184;
    nonscalar28[1] = 49773.45502165184;
    nonscalar28[2] = 49773.45502165184;
    nonscalar29[0] = 48372.787049295068;
    nonscalar29[1] = 48372.787049295068;
    nonscalar29[2] = 48372.787049295068;
    nonscalar30[0] = 49050.126239518562;
    nonscalar30[1] = 49050.126239518562;
    nonscalar30[2] = 49050.126239518562;
    nonscalar31[0] = 47907.354827555144;
    nonscalar31[1] = 47907.354827555144;
    nonscalar31[2] = 47907.354827555144;
    nonscalar32[0] = 50354.192615235523;
    nonscalar32[1] = 50354.192615235523;
    nonscalar32[2] = 50354.192615235523;
    nonscalar33[0] = 49053.973328935528;
    nonscalar33[1] = 49053.973328935528;
    nonscalar33[2] = 49053.973328935528;
    nonscalar34[0] = 48822.637182277154;
    nonscalar34[1] = 48822.637182277154;
    nonscalar34[2] = 48822.637182277154;
    nonscalar35[0] = 49941.004488756109;
    nonscalar35[1] = 49941.004488756109;
    nonscalar35[2] = 49941.004488756109;
    nonscalar36[0] = 48846.562417584079;
    nonscalar36[1] = 48846.562417584079;
    nonscalar36[2] = 48846.562417584079;
    nonscalar37[0] = 49365.214693050024;
    nonscalar37[1] = 49365.214693050024;
    nonscalar37[2] = 49365.214693050024;
    nonscalar38[0] = 48694.855410347482;
    nonscalar38[1] = 48694.855410347482;
    nonscalar38[2] = 48694.855410347482;
    nonscalar39[0] = 49551.51785373348;
    nonscalar39[1] = 49551.51785373348;
    nonscalar39[2] = 49551.51785373348;
    nonscalar40[0] = 49655.321727904375;
    nonscalar40[1] = 49655.321727904375;
    nonscalar40[2] = 49655.321727904375;
    nonscalar41[0] = 49362.784346213011;
    nonscalar41[1] = 49362.784346213011;
    nonscalar41[2] = 49362.784346213011;
    nonscalar42[0] = 48929.496400859862;
    nonscalar42[1] = 48929.496400859862;
    nonscalar42[2] = 48929.496400859862;
    nonscalar43[0] = 49110.213801704638;
    nonscalar43[1] = 49110.213801704638;
    nonscalar43[2] = 49110.213801704638;
    nonscalar44[0] = 47889.686599531895;
    nonscalar44[1] = 47889.686599531895;
    nonscalar44[2] = 47889.686599531895;
    nonscalar45[0] = 49526.949121523096;
    nonscalar45[1] = 49526.949121523096;
    nonscalar45[2] = 49526.949121523096;
    nonscalar46[0] = 49358.163231667546;
    nonscalar46[1] = 49358.163231667546;
    nonscalar46[2] = 49358.163231667546;
    nonscalar47[0] = 49621.535224211621;
    nonscalar47[1] = 49621.535224211621;
    nonscalar47[2] = 49621.535224211621;
    nonscalar48[0] = 48651.655210233017;
    nonscalar48[1] = 48651.655210233017;
    nonscalar48[2] = 48651.655210233017;
    nonscalar49[0] = 48075.723365553386;
    nonscalar49[1] = 48075.723365553386;
    nonscalar49[2] = 48075.723365553386;
    nonscalar50[0] = 49446.970934633449;
    nonscalar50[1] = 49446.970934633449;
    nonscalar50[2] = 49446.970934633449;
    nonscalar51[0] = 49834.821781925428;
    nonscalar51[1] = 49834.821781925428;
    nonscalar51[2] = 49834.821781925428;
    nonscalar52[0] = 49196.719661728312;
    nonscalar52[1] = 49196.719661728312;
    nonscalar52[2] = 49196.719661728312;
    nonscalar53[0] = 49953.648138664248;
    nonscalar53[1] = 49953.648138664248;
    nonscalar53[2] = 49953.648138664248;
    nonscalar54[0] = 48045.114751741967;
    nonscalar54[1] = 48045.114751741967;
    nonscalar54[2] = 48045.114751741967;
    nonscalar55[0] = 50150.279888295408;
    nonscalar55[1] = 50150.279888295408;
    nonscalar55[2] = 50150.279888295408;
    nonscalar56[0] = 48142.353234042726;
    nonscalar56[1] = 48142.353234042726;
    nonscalar56[2] = 48142.353234042726;
    nonscalar57[0] = 48995.616207372;
    nonscalar57[1] = 48995.616207372;
    nonscalar57[2] = 48995.616207372;
    nonscalar58[0] = 49948.964152127875;
    nonscalar58[1] = 49948.964152127875;
    nonscalar58[2] = 49948.964152127875;
    nonscalar59[0] = 49114.415650191571;
    nonscalar59[1] = 49114.415650191571;
    nonscalar59[2] = 49114.415650191571;
    nonscalar60[0] = 50144.134600192971;
    nonscalar60[1] = 50144.134600192971;
    nonscalar60[2] = 50144.134600192971;
    nonscalar61[0] = 49136.7670587279;
    nonscalar61[1] = 49136.7670587279;
    nonscalar61[2] = 49136.7670587279;
    nonscalar62[0] = 48354.761495891784;
    nonscalar62[1] = 48354.761495891784;
    nonscalar62[2] = 48354.761495891784;
    nonscalar63[0] = 50053.382581187;
    nonscalar63[1] = 50053.382581187;
    nonscalar63[2] = 50053.382581187;
    nonscalar64[0] = 48087.915542311384;
    nonscalar64[1] = 48087.915542311384;
    nonscalar64[2] = 48087.915542311384;
    nonscalar65[0] = 49534.914516591809;
    nonscalar65[1] = 49534.914516591809;
    nonscalar65[2] = 49534.914516591809;
    nonscalar66[0] = 48558.924889005619;
    nonscalar66[1] = 48558.924889005619;
    nonscalar66[2] = 48558.924889005619;
    nonscalar67[0] = 49396.32878488869;
    nonscalar67[1] = 49396.32878488869;
    nonscalar67[2] = 49396.32878488869;
    nonscalar68[0] = 49587.399798647108;
    nonscalar68[1] = 49587.399798647108;
    nonscalar68[2] = 49587.399798647108;
    nonscalar69[0] = 49015.742496793879;
    nonscalar69[1] = 49015.742496793879;
    nonscalar69[2] = 49015.742496793879;
    nonscalar70[0] = 49491.195841074448;
    nonscalar70[1] = 49491.195841074448;
    nonscalar70[2] = 49491.195841074448;
    nonscalar71[0] = 49159.290336949955;
    nonscalar71[1] = 49159.290336949955;
    nonscalar71[2] = 49159.290336949955;
    nonscalar72[0] = 49574.057499556613;
    nonscalar72[1] = 49574.057499556613;
    nonscalar72[2] = 49574.057499556613;
    nonscalar73[0] = 47995.480369923549;
    nonscalar73[1] = 47995.480369923549;
    nonscalar73[2] = 47995.480369923549;
    nonscalar74[0] = 48730.11233759622;
    nonscalar74[1] = 48730.11233759622;
    nonscalar74[2] = 48730.11233759622;
    nonscalar75[0] = 48607.956051025583;
    nonscalar75[1] = 48607.956051025583;
    nonscalar75[2] = 48607.956051025583;
    nonscalar76[0] = 48735.69632489224;
    nonscalar76[1] = 48735.69632489224;
    nonscalar76[2] = 48735.69632489224;
    nonscalar77[0] = 49262.621737503527;
    nonscalar77[1] = 49262.621737503527;
    nonscalar77[2] = 49262.621737503527;
    nonscalar78[0] = 48242.42062414415;
    nonscalar78[1] = 48242.42062414415;
    nonscalar78[2] = 48242.42062414415;
    nonscalar79[0] = 50052.837510850819;
    nonscalar79[1] = 50052.837510850819;
    nonscalar79[2] = 50052.837510850819;
    nonscalar80[0] = 48917.712348818473;
    nonscalar80[1] = 48917.712348818473;
    nonscalar80[2] = 48917.712348818473;
    nonscalar81[0] = 49130.472419844089;
    nonscalar81[1] = 49130.472419844089;
    nonscalar81[2] = 49130.472419844089;
    nonscalar82[0] = 49510.082631393831;
    nonscalar82[1] = 49510.082631393831;
    nonscalar82[2] = 49510.082631393831;
    nonscalar83[0] = 50293.409549255353;
    nonscalar83[1] = 50293.409549255353;
    nonscalar83[2] = 50293.409549255353;
    nonscalar84[0] = 48718.856843899004;
    nonscalar84[1] = 48718.856843899004;
    nonscalar84[2] = 48718.856843899004;
    nonscalar85[0] = 49490.22443602945;
    nonscalar85[1] = 49490.22443602945;
    nonscalar85[2] = 49490.22443602945;
    nonscalar86[0] = 50351.471156916363;
    nonscalar86[1] = 50351.471156916363;
    nonscalar86[2] = 50351.471156916363;
    nonscalar87[0] = 48758.599178313314;
    nonscalar87[1] = 48758.599178313314;
    nonscalar87[2] = 48758.599178313314;
    nonscalar88[0] = 50092.508294004627;
    nonscalar88[1] = 50092.508294004627;
    nonscalar88[2] = 50092.508294004627;
    nonscalar89[0] = 49564.203598368571;
    nonscalar89[1] = 49564.203598368571;
    nonscalar89[2] = 49564.203598368571;
    nonscalar90[0] = 50093.420695144523;
    nonscalar90[1] = 50093.420695144523;
    nonscalar90[2] = 50093.420695144523;
    nonscalar91[0] = 48056.297622209131;
    nonscalar91[1] = 48056.297622209131;
    nonscalar91[2] = 48056.297622209131;
    nonscalar92[0] = 49537.218772034932;
    nonscalar92[1] = 49537.218772034932;
    nonscalar92[2] = 49537.218772034932;
    nonscalar93[0] = 49026.837136423426;
    nonscalar93[1] = 49026.837136423426;
    nonscalar93[2] = 49026.837136423426;
    nonscalar94[0] = 50261.924689402273;
    nonscalar94[1] = 50261.924689402273;
    nonscalar94[2] = 50261.924689402273;
    nonscalar95[0] = 49907.398555642831;
    nonscalar95[1] = 49907.398555642831;
    nonscalar95[2] = 49907.398555642831;
    nonscalar96[0] = 48187.946340698145;
    nonscalar96[1] = 48187.946340698145;
    nonscalar96[2] = 48187.946340698145;
    nonscalar97[0] = 48074.68368312349;
    nonscalar97[1] = 48074.68368312349;
    nonscalar97[2] = 48074.68368312349;
    nonscalar98[0] = 49029.968653239761;
    nonscalar98[1] = 49029.968653239761;
    nonscalar98[2] = 49029.968653239761;
    nonscalar99[0] = 48285.7966147284;
    nonscalar99[1] = 48285.7966147284;
    nonscalar99[2] = 48285.7966147284;
    nonscalar100[0] = 48987.002204167722;
    nonscalar100[1] = 48987.002204167722;
    nonscalar100[2] = 48987.002204167722;
    nonscalar101[0] = 49130.202810879564;
    nonscalar101[1] = 49130.202810879564;
    nonscalar101[2] = 49130.202810879564;
    nonscalar102[0] = 50050.413917083075;
    nonscalar102[1] = 50050.413917083075;
    nonscalar102[2] = 50050.413917083075;
    nonscalar103[0] = 48413.954160435664;
    nonscalar103[1] = 48413.954160435664;
    nonscalar103[2] = 48413.954160435664;
    nonscalar104[0] = 50063.570273653495;
    nonscalar104[1] = 50063.570273653495;
    nonscalar104[2] = 50063.570273653495;
    nonscalar105[0] = 49641.936074464887;
    nonscalar105[1] = 49641.936074464887;
    nonscalar105[2] = 49641.936074464887;
    nonscalar106[0] = 49677.716619986466;
    nonscalar106[1] = 49677.716619986466;
    nonscalar106[2] = 49677.716619986466;
    nonscalar107[0] = 48894.233026419068;
    nonscalar107[1] = 48894.233026419068;
    nonscalar107[2] = 48894.233026419068;
    nonscalar108[0] = 49016.121619701844;
    nonscalar108[1] = 49016.121619701844;
    nonscalar108[2] = 49016.121619701844;
    nonscalar109[0] = 50334.839172870488;
    nonscalar109[1] = 50334.839172870488;
    nonscalar109[2] = 50334.839172870488;
    nonscalar110[0] = 49086.568559265514;
    nonscalar110[1] = 49086.568559265514;
    nonscalar110[2] = 49086.568559265514;
    nonscalar111[0] = 48309.577282193182;
    nonscalar111[1] = 48309.577282193182;
    nonscalar111[2] = 48309.577282193182;
    nonscalar112[0] = 48905.1748704494;
    nonscalar112[1] = 48905.1748704494;
    nonscalar112[2] = 48905.1748704494;
    nonscalar113[0] = 48715.470028609336;
    nonscalar113[1] = 48715.470028609336;
    nonscalar113[2] = 48715.470028609336;
    nonscalar114[0] = 50218.430090923968;
    nonscalar114[1] = 50218.430090923968;
    nonscalar114[2] = 50218.430090923968;
    nonscalar115[0] = 48047.011337944256;
    nonscalar115[1] = 48047.011337944256;
    nonscalar115[2] = 48047.011337944256;
    nonscalar116[0] = 48492.99199063491;
    nonscalar116[1] = 48492.99199063491;
    nonscalar116[2] = 48492.99199063491;
    nonscalar117[0] = 47910.303752898304;
    nonscalar117[1] = 47910.303752898304;
    nonscalar117[2] = 47910.303752898304;
    nonscalar118[0] = 49254.050593341439;
    nonscalar118[1] = 49254.050593341439;
    nonscalar118[2] = 49254.050593341439;
    nonscalar119[0] = 48175.249233930706;
    nonscalar119[1] = 48175.249233930706;
    nonscalar119[2] = 48175.249233930706;
    nonscalar120[0] = 48890.85238107956;
    nonscalar120[1] = 48890.85238107956;
    nonscalar120[2] = 48890.85238107956;
    nonscalar121[0] = 49265.008176756673;
    nonscalar121[1] = 49265.008176756673;
    nonscalar121[2] = 49265.008176756673;
    nonscalar122[0] = 48478.284440779469;
    nonscalar122[1] = 48478.284440779469;
    nonscalar122[2] = 48478.284440779469;
    nonscalar123[0] = 48703.470514140317;
    nonscalar123[1] = 48703.470514140317;
    nonscalar123[2] = 48703.470514140317;
    nonscalar124[0] = 49373.557573896833;
    nonscalar124[1] = 49373.557573896833;
    nonscalar124[2] = 49373.557573896833;
    nonscalar125[0] = 49685.87135829508;
    nonscalar125[1] = 49685.87135829508;
    nonscalar125[2] = 49685.87135829508;
    nonscalar126[0] = 49417.133187708729;
    nonscalar126[1] = 49417.133187708729;
    nonscalar126[2] = 49417.133187708729;
    nonscalar127[0] = 48297.390117228162;
    nonscalar127[1] = 48297.390117228162;
    nonscalar127[2] = 48297.390117228162;
    nonscalar128[0] = 49578.373729274565;
    nonscalar128[1] = 49578.373729274565;
    nonscalar128[2] = 49578.373729274565;
    nonscalar129[0] = 48171.2992859045;
    nonscalar129[1] = 48171.2992859045;
    nonscalar129[2] = 48171.2992859045;
    nonscalar130[0] = 48699.563302836723;
    nonscalar130[1] = 48699.563302836723;
    nonscalar130[2] = 48699.563302836723;
    nonscalar131[0] = 50105.067214845745;
    nonscalar131[1] = 50105.067214845745;
    nonscalar131[2] = 50105.067214845745;
    nonscalar132[0] = 49779.5051521287;
    nonscalar132[1] = 49779.5051521287;
    nonscalar132[2] = 49779.5051521287;
    nonscalar133[0] = 49022.684441430945;
    nonscalar133[1] = 49022.684441430945;
    nonscalar133[2] = 49022.684441430945;
    nonscalar134[0] = 49396.710183581032;
    nonscalar134[1] = 49396.710183581032;
    nonscalar134[2] = 49396.710183581032;
    nonscalar135[0] = 48003.693700372307;
    nonscalar135[1] = 48003.693700372307;
    nonscalar135[2] = 48003.693700372307;
    nonscalar136[0] = 48303.684224888879;
    nonscalar136[1] = 48303.684224888879;
    nonscalar136[2] = 48303.684224888879;
    nonscalar137[0] = 50187.697428167063;
    nonscalar137[1] = 50187.697428167063;
    nonscalar137[2] = 50187.697428167063;
    nonscalar138[0] = 49639.648521444287;
    nonscalar138[1] = 49639.648521444287;
    nonscalar138[2] = 49639.648521444287;
    nonscalar139[0] = 50159.660814577888;
    nonscalar139[1] = 50159.660814577888;
    nonscalar139[2] = 50159.660814577888;
    nonscalar140[0] = 48234.51256319946;
    nonscalar140[1] = 48234.51256319946;
    nonscalar140[2] = 48234.51256319946;
    nonscalar141[0] = 47887.937459271125;
    nonscalar141[1] = 47887.937459271125;
    nonscalar141[2] = 47887.937459271125;
    t1354[0UL] = t2072->mX.mX[1107UL];
    t277[0] = 7UL;
    t278[0] = 1UL;
    tlu2_linear_nearest_prelookup(&t236.mField0[0UL], &t236.mField1[0UL], &t236.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[0UL];
    t280[0] = 3UL;
    tlu2_linear_nearest_prelookup(&t175.mField0[0UL], &t175.mField1[0UL], &t175.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t236.mField0[0UL], &t236.mField2[0UL], &t175.mField0[0UL], &t175.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der82900 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t175.mField0[0UL], &t175.mField2[0UL], &nonscalar4[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel6 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1111UL];
    tlu2_linear_nearest_prelookup(&t175.mField0[0UL], &t175.mField1[0UL], &t175.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[8UL];
    tlu2_linear_nearest_prelookup(&t236.mField0[0UL], &t236.mField1[0UL], &t236.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t175.mField0[0UL], &t175.mField2[0UL], &t236.mField0[0UL], &t236.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der82828 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t236.mField0[0UL], &t236.mField2[0UL], &nonscalar5[0UL], &t280[0UL], &t278[0UL]);
    zc_int693 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1115UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[16UL];
    tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL], &t204.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t204.mField0[0UL], &t204.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int40 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t204.mField0[0UL], &t204.mField2[0UL], &nonscalar6[0UL], &t280[0UL], &t278[0UL]);
    zc_int694 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1119UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[24UL];
    tlu2_linear_nearest_prelookup(&t175.mField0[0UL], &t175.mField1[0UL], &t175.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t175.mField0[0UL], &t175.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der82811 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t175.mField0[0UL], &t175.mField2[0UL], &nonscalar7[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module05_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1123UL];
    tlu2_linear_nearest_prelookup(&t236.mField0[0UL], &t236.mField1[0UL], &t236.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[32UL];
    tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL], &t204.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t236.mField0[0UL], &t236.mField2[0UL], &t204.mField0[0UL], &t204.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_4 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t204.mField0[0UL], &t204.mField2[0UL], &nonscalar8[0UL], &t280[0UL], &t278[0UL]);
    zc_int696 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1127UL];
    tlu2_linear_nearest_prelookup(&t236.mField0[0UL], &t236.mField1[0UL], &t236.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[40UL];
    tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL], &t204.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t236.mField0[0UL], &t236.mField2[0UL], &t204.mField0[0UL], &t204.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_5 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t204.mField0[0UL], &t204.mField2[0UL], &nonscalar9[0UL], &t280[0UL], &t278[0UL]);
    zc_int697 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1131UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[48UL];
    tlu2_linear_nearest_prelookup(&t175.mField0[0UL], &t175.mField1[0UL], &t175.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t175.mField0[0UL], &t175.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_6 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t175.mField0[0UL], &t175.mField2[0UL], &nonscalar10[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1135UL];
    tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL], &t78.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[56UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t78.mField0[0UL], &t78.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_7 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &nonscalar11[0UL], &t280[0UL], &t278[0UL]);
    zc_int699 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1139UL];
    tlu2_linear_nearest_prelookup(&t135.mField0[0UL], &t135.mField1[0UL], &t135.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[64UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t135.mField0[0UL], &t135.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83108 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &nonscalar12[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module10_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1143UL];
    tlu2_linear_nearest_prelookup(&t236.mField0[0UL], &t236.mField1[0UL], &t236.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[72UL];
    tlu2_linear_nearest_prelookup(&t175.mField0[0UL], &t175.mField1[0UL], &t175.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t236.mField0[0UL], &t236.mField2[0UL], &t175.mField0[0UL], &t175.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int250 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t175.mField0[0UL], &t175.mField2[0UL], &nonscalar13[0UL], &t280[0UL], &t278[0UL]);
    zc_int701 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1147UL];
    tlu2_linear_nearest_prelookup(&t170.mField0[0UL], &t170.mField1[0UL], &t170.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[80UL];
    tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL], &t204.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t170.mField0[0UL], &t170.mField2[0UL], &t204.mField0[0UL], &t204.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_10 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t204.mField0[0UL], &t204.mField2[0UL], &nonscalar14[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1151UL];
    tlu2_linear_nearest_prelookup(&t236.mField0[0UL], &t236.mField1[0UL], &t236.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[88UL];
    tlu2_linear_nearest_prelookup(&t175.mField0[0UL], &t175.mField1[0UL], &t175.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t236.mField0[0UL], &t236.mField2[0UL], &t175.mField0[0UL], &t175.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83227 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t175.mField0[0UL], &t175.mField2[0UL], &nonscalar15[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1155UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[96UL];
    tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL], &t204.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t204.mField0[0UL], &t204.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int37 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t204.mField0[0UL], &t204.mField2[0UL], &nonscalar16[0UL], &t280[0UL], &t278[0UL]);
    zc_int704 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1159UL];
    tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL], &t204.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[104UL];
    tlu2_linear_nearest_prelookup(&t175.mField0[0UL], &t175.mField1[0UL], &t175.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t204.mField0[0UL], &t204.mField2[0UL], &t175.mField0[0UL], &t175.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_13 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t175.mField0[0UL], &t175.mField2[0UL], &nonscalar17[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module15_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1163UL];
    tlu2_linear_nearest_prelookup(&t170.mField0[0UL], &t170.mField1[0UL], &t170.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[112UL];
    tlu2_linear_nearest_prelookup(&t135.mField0[0UL], &t135.mField1[0UL], &t135.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t170.mField0[0UL], &t170.mField2[0UL], &t135.mField0[0UL], &t135.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_14 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t135.mField0[0UL], &t135.mField2[0UL], &nonscalar18[0UL], &t280[0UL], &t278[0UL]);
    zc_int706 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1167UL];
    tlu2_linear_nearest_prelookup(&t170.mField0[0UL], &t170.mField1[0UL], &t170.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[120UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t170.mField0[0UL], &t170.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_15 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &nonscalar19[0UL], &t280[0UL], &t278[0UL]);
    zc_int707 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1171UL];
    tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL], &t204.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[128UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t204.mField0[0UL], &t204.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int7 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &nonscalar20[0UL], &t280[0UL], &t278[0UL]);
    zc_int708 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1175UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[136UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int46 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &nonscalar21[0UL], &t280[0UL], &t278[0UL]);
    zc_int709 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1179UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[144UL];
    tlu2_linear_nearest_prelookup(&t236.mField0[0UL], &t236.mField1[0UL], &t236.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t236.mField0[0UL], &t236.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int49 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t236.mField0[0UL], &t236.mField2[0UL], &nonscalar22[0UL], &t280[0UL], &t278[0UL]);
    zc_int710 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1183UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[152UL];
    tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL], &t78.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t78.mField0[0UL], &t78.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_19 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t78.mField0[0UL], &t78.mField2[0UL], &nonscalar23[0UL], &t280[0UL], &t278[0UL]);
    zc_int711 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1187UL];
    tlu2_linear_nearest_prelookup(&t175.mField0[0UL], &t175.mField1[0UL], &t175.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[160UL];
    tlu2_linear_nearest_prelookup(&t236.mField0[0UL], &t236.mField1[0UL], &t236.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t175.mField0[0UL], &t175.mField2[0UL], &t236.mField0[0UL], &t236.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_20 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t236.mField0[0UL], &t236.mField2[0UL], &nonscalar24[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module22_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1191UL];
    tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL], &t273.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[168UL];
    tlu2_linear_nearest_prelookup(&t32.mField0[0UL], &t32.mField1[0UL], &t32.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t273.mField0[0UL], &t273.mField2[0UL], &t32.mField0[0UL], &t32.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int58 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t32.mField0[0UL], &t32.mField2[0UL], &nonscalar25[0UL], &t280[0UL], &t278[0UL]);
    zc_int713 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1195UL];
    tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL], &t78.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[176UL];
    tlu2_linear_nearest_prelookup(&t135.mField0[0UL], &t135.mField1[0UL], &t135.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t78.mField0[0UL], &t78.mField2[0UL], &t135.mField0[0UL], &t135.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int576 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t135.mField0[0UL], &t135.mField2[0UL], &nonscalar26[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module_1_1_Cell_1_electricalMod4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1199UL];
    tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL], &t273.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[184UL];
    tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL], &t204.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t273.mField0[0UL], &t273.mField2[0UL], &t204.mField0[0UL], &t204.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der82870 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t204.mField0[0UL], &t204.mField2[0UL], &nonscalar27[0UL], &t280[0UL], &t278[0UL]);
    zc_int715 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1203UL];
    tlu2_linear_nearest_prelookup(&t135.mField0[0UL], &t135.mField1[0UL], &t135.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[192UL];
    tlu2_linear_nearest_prelookup(&t32.mField0[0UL], &t32.mField1[0UL], &t32.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t135.mField0[0UL], &t135.mField2[0UL], &t32.mField0[0UL], &t32.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der82904 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t32.mField0[0UL], &t32.mField2[0UL], &nonscalar28[0UL], &t280[0UL], &t278[0UL]);
    zc_int716 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1207UL];
    tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL], &t273.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[200UL];
    tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL], &t204.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t273.mField0[0UL], &t273.mField2[0UL], &t204.mField0[0UL], &t204.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int70 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t204.mField0[0UL], &t204.mField2[0UL], &nonscalar29[0UL], &t280[0UL], &t278[0UL]);
    zc_int717 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1211UL];
    tlu2_linear_nearest_prelookup(&t135.mField0[0UL], &t135.mField1[0UL], &t135.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[208UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t135.mField0[0UL], &t135.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der82912 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &nonscalar30[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module05_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1215UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[216UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int76 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &nonscalar31[0UL], &t280[0UL], &t278[0UL]);
    zc_int719 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1219UL];
    tlu2_linear_nearest_prelookup(&t271.mField0[0UL], &t271.mField1[0UL], &t271.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[224UL];
    tlu2_linear_nearest_prelookup(&t170.mField0[0UL], &t170.mField1[0UL], &t170.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t271.mField0[0UL], &t271.mField2[0UL], &t170.mField0[0UL], &t170.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_28 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t170.mField0[0UL], &t170.mField2[0UL], &nonscalar32[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module07_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1223UL];
    tlu2_linear_nearest_prelookup(&t135.mField0[0UL], &t135.mField1[0UL], &t135.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[232UL];
    tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL], &t273.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t135.mField0[0UL], &t135.mField2[0UL], &t273.mField0[0UL], &t273.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int82 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t273.mField0[0UL], &t273.mField2[0UL], &nonscalar33[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module08_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1227UL];
    tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL], &t78.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[240UL];
    tlu2_linear_nearest_prelookup(&t236.mField0[0UL], &t236.mField1[0UL], &t236.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t78.mField0[0UL], &t78.mField2[0UL], &t236.mField0[0UL], &t236.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der82927 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t236.mField0[0UL], &t236.mField2[0UL], &nonscalar34[0UL], &t280[0UL], &t278[0UL]);
    zc_int722 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1231UL];
    tlu2_linear_nearest_prelookup(&t135.mField0[0UL], &t135.mField1[0UL], &t135.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[248UL];
    tlu2_linear_nearest_prelookup(&t271.mField0[0UL], &t271.mField1[0UL], &t271.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t135.mField0[0UL], &t135.mField2[0UL], &t271.mField0[0UL], &t271.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int88 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t271.mField0[0UL], &t271.mField2[0UL], &nonscalar35[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1235UL];
    tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL], &t78.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[256UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t78.mField0[0UL], &t78.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int91 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &nonscalar36[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1239UL];
    tlu2_linear_nearest_prelookup(&t170.mField0[0UL], &t170.mField1[0UL], &t170.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[264UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t170.mField0[0UL], &t170.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_33 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &nonscalar37[0UL], &t280[0UL], &t278[0UL]);
    zc_int725 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1243UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[272UL];
    tlu2_linear_nearest_prelookup(&t271.mField0[0UL], &t271.mField1[0UL], &t271.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t271.mField0[0UL], &t271.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der82951 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t271.mField0[0UL], &t271.mField2[0UL], &nonscalar38[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module13_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1247UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[280UL];
    tlu2_linear_nearest_prelookup(&t232.mField0[0UL], &t232.mField1[0UL], &t232.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t232.mField0[0UL], &t232.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der82956 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t232.mField0[0UL], &t232.mField2[0UL], &nonscalar39[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1251UL];
    tlu2_linear_nearest_prelookup(&t135.mField0[0UL], &t135.mField1[0UL], &t135.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[288UL];
    tlu2_linear_nearest_prelookup(&t32.mField0[0UL], &t32.mField1[0UL], &t32.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t135.mField0[0UL], &t135.mField2[0UL], &t32.mField0[0UL], &t32.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der82959 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t32.mField0[0UL], &t32.mField2[0UL], &nonscalar40[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1255UL];
    tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL], &t62.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[296UL];
    tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL], &t101.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t62.mField0[0UL], &t62.mField2[0UL], &t101.mField0[0UL], &t101.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der82964 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t101.mField0[0UL], &t101.mField2[0UL], &nonscalar41[0UL], &t280[0UL], &t278[0UL]);
    zc_int729 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1259UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[304UL];
    tlu2_linear_nearest_prelookup(&t170.mField0[0UL], &t170.mField1[0UL], &t170.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t170.mField0[0UL], &t170.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int115 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t170.mField0[0UL], &t170.mField2[0UL], &nonscalar42[0UL], &t280[0UL], &t278[0UL]);
    zc_int730 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1263UL];
    tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL], &t116.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[312UL];
    tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL], &t273.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t116.mField0[0UL], &t116.mField2[0UL], &t273.mField0[0UL], &t273.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_39 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t273.mField0[0UL], &t273.mField2[0UL], &nonscalar43[0UL], &t280[0UL], &t278[0UL]);
    zc_int731 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1267UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[320UL];
    tlu2_linear_nearest_prelookup(&t170.mField0[0UL], &t170.mField1[0UL], &t170.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t170.mField0[0UL], &t170.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der82976 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t170.mField0[0UL], &t170.mField2[0UL], &nonscalar44[0UL], &t280[0UL], &t278[0UL]);
    zc_int732 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1271UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[328UL];
    tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL], &t273.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t273.mField0[0UL], &t273.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der82979 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t273.mField0[0UL], &t273.mField2[0UL], &nonscalar45[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module20_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1275UL];
    tlu2_linear_nearest_prelookup(&t32.mField0[0UL], &t32.mField1[0UL], &t32.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[336UL];
    tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL], &t273.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t32.mField0[0UL], &t32.mField2[0UL], &t273.mField0[0UL], &t273.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int127 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t273.mField0[0UL], &t273.mField2[0UL], &nonscalar46[0UL], &t280[0UL], &t278[0UL]);
    zc_int734 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1279UL];
    tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL], &t204.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[344UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t204.mField0[0UL], &t204.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_43 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &nonscalar47[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1283UL];
    tlu2_linear_nearest_prelookup(&t271.mField0[0UL], &t271.mField1[0UL], &t271.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[352UL];
    tlu2_linear_nearest_prelookup(&t32.mField0[0UL], &t32.mField1[0UL], &t32.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t271.mField0[0UL], &t271.mField2[0UL], &t32.mField0[0UL], &t32.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int133 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t32.mField0[0UL], &t32.mField2[0UL], &nonscalar48[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module23_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1287UL];
    tlu2_linear_nearest_prelookup(&t232.mField0[0UL], &t232.mField1[0UL], &t232.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[360UL];
    tlu2_linear_nearest_prelookup(&t32.mField0[0UL], &t32.mField1[0UL], &t32.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t232.mField0[0UL], &t232.mField2[0UL], &t32.mField0[0UL], &t32.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_45 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t32.mField0[0UL], &t32.mField2[0UL], &nonscalar49[0UL], &t280[0UL], &t278[0UL]);
    zc_int737 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1291UL];
    tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL], &t273.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[368UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t273.mField0[0UL], &t273.mField2[0UL], &t270.mField0[0UL], &t270.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int139 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &nonscalar50[0UL], &t280[0UL], &t278[0UL]);
    zc_int738 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1295UL];
    tlu2_linear_nearest_prelookup(&t271.mField0[0UL], &t271.mField1[0UL], &t271.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[376UL];
    tlu2_linear_nearest_prelookup(&t119.mField0[0UL], &t119.mField1[0UL], &t119.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t271.mField0[0UL], &t271.mField2[0UL], &t119.mField0[0UL], &t119.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_47 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t119.mField0[0UL], &t119.mField2[0UL], &nonscalar51[0UL], &t280[0UL], &t278[0UL]);
    zc_int739 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1299UL];
    tlu2_linear_nearest_prelookup(&t271.mField0[0UL], &t271.mField1[0UL], &t271.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[384UL];
    tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL], &t116.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t271.mField0[0UL], &t271.mField2[0UL], &t116.mField0[0UL], &t116.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int145 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t116.mField0[0UL], &t116.mField2[0UL], &nonscalar52[0UL], &t280[0UL], &t278[0UL]);
    zc_int740 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1303UL];
    tlu2_linear_nearest_prelookup(&t232.mField0[0UL], &t232.mField1[0UL], &t232.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[392UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t232.mField0[0UL], &t232.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int148 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &nonscalar53[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly4_Module05_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1307UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[400UL];
    tlu2_linear_nearest_prelookup(&t32.mField0[0UL], &t32.mField1[0UL], &t32.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t32.mField0[0UL], &t32.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83016 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t32.mField0[0UL], &t32.mField2[0UL], &nonscalar54[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly4_Module06_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1311UL];
    tlu2_linear_nearest_prelookup(&t170.mField0[0UL], &t170.mField1[0UL], &t170.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[408UL];
    tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL], &t62.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t170.mField0[0UL], &t170.mField2[0UL], &t62.mField0[0UL], &t62.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int154 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t62.mField0[0UL], &t62.mField2[0UL], &nonscalar55[0UL], &t280[0UL], &t278[0UL]);
    zc_int743 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1315UL];
    tlu2_linear_nearest_prelookup(&t232.mField0[0UL], &t232.mField1[0UL], &t232.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[416UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t232.mField0[0UL], &t232.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_52 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &nonscalar56[0UL], &t280[0UL], &t278[0UL]);
    zc_int744 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1319UL];
    tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL], &t273.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[424UL];
    tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL], &t62.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t273.mField0[0UL], &t273.mField2[0UL], &t62.mField0[0UL], &t62.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_53 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t62.mField0[0UL], &t62.mField2[0UL], &nonscalar57[0UL], &t280[0UL], &t278[0UL]);
    zc_int745 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1323UL];
    tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL], &t101.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[432UL];
    tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL], &t78.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t101.mField0[0UL], &t101.mField2[0UL], &t78.mField0[0UL], &t78.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int163 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t78.mField0[0UL], &t78.mField2[0UL], &nonscalar58[0UL], &t280[0UL], &t278[0UL]);
    zc_int746 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1327UL];
    tlu2_linear_nearest_prelookup(&t232.mField0[0UL], &t232.mField1[0UL], &t232.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[440UL];
    tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL], &t62.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t232.mField0[0UL], &t232.mField2[0UL], &t62.mField0[0UL], &t62.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_55 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t62.mField0[0UL], &t62.mField2[0UL], &nonscalar59[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1331UL];
    tlu2_linear_nearest_prelookup(&t135.mField0[0UL], &t135.mField1[0UL], &t135.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[448UL];
    tlu2_linear_nearest_prelookup(&t232.mField0[0UL], &t232.mField1[0UL], &t232.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t135.mField0[0UL], &t135.mField2[0UL], &t232.mField0[0UL], &t232.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int169 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t232.mField0[0UL], &t232.mField2[0UL], &nonscalar60[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly4_Module12_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1335UL];
    tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL], &t62.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[456UL];
    tlu2_linear_nearest_prelookup(&t236.mField0[0UL], &t236.mField1[0UL], &t236.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t62.mField0[0UL], &t62.mField2[0UL], &t236.mField0[0UL], &t236.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_57 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t236.mField0[0UL], &t236.mField2[0UL], &nonscalar61[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly4_Module13_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1339UL];
    tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL], &t101.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[464UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t101.mField0[0UL], &t101.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83046 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &nonscalar62[0UL], &t280[0UL], &t278[0UL]);
    zc_int750 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1343UL];
    tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL], &t62.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[472UL];
    tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL], &t116.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t62.mField0[0UL], &t62.mField2[0UL], &t116.mField0[0UL], &t116.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int178 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t116.mField0[0UL], &t116.mField2[0UL], &nonscalar63[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly4_Module15_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1347UL];
    tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL], &t101.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[480UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t101.mField0[0UL], &t101.mField2[0UL], &t270.mField0[0UL], &t270.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int181 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &nonscalar64[0UL], &t280[0UL], &t278[0UL]);
    zc_int752 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1351UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[488UL];
    tlu2_linear_nearest_prelookup(&t236.mField0[0UL], &t236.mField1[0UL], &t236.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t236.mField0[0UL], &t236.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_61 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t236.mField0[0UL], &t236.mField2[0UL], &nonscalar65[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly4_Module17_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1355UL];
    tlu2_linear_nearest_prelookup(&t271.mField0[0UL], &t271.mField1[0UL], &t271.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[496UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t271.mField0[0UL], &t271.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int187 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &nonscalar66[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly4_Module18_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1359UL];
    tlu2_linear_nearest_prelookup(&t232.mField0[0UL], &t232.mField1[0UL], &t232.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[504UL];
    tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL], &t116.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t232.mField0[0UL], &t232.mField2[0UL], &t116.mField0[0UL], &t116.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der82840 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t116.mField0[0UL], &t116.mField2[0UL], &nonscalar67[0UL], &t280[0UL], &t278[0UL]);
    zc_int755 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1363UL];
    tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL], &t116.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[512UL];
    tlu2_linear_nearest_prelookup(&t175.mField0[0UL], &t175.mField1[0UL], &t175.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t116.mField0[0UL], &t116.mField2[0UL], &t175.mField0[0UL], &t175.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_64 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t175.mField0[0UL], &t175.mField2[0UL], &nonscalar68[0UL], &t280[0UL], &t278[0UL]);
    zc_int756 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1367UL];
    tlu2_linear_nearest_prelookup(&t232.mField0[0UL], &t232.mField1[0UL], &t232.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[520UL];
    tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL], &t62.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t232.mField0[0UL], &t232.mField2[0UL], &t62.mField0[0UL], &t62.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83074 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t62.mField0[0UL], &t62.mField2[0UL], &nonscalar69[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly4_Module21_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1371UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[528UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83079 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &nonscalar70[0UL], &t280[0UL], &t278[0UL]);
    zc_int758 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1375UL];
    tlu2_linear_nearest_prelookup(&t119.mField0[0UL], &t119.mField1[0UL], &t119.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[536UL];
    tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL], &t101.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t119.mField0[0UL], &t119.mField2[0UL], &t101.mField0[0UL], &t101.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_67 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t101.mField0[0UL], &t101.mField2[0UL], &nonscalar71[0UL], &t280[0UL], &t278[0UL]);
    zc_int759 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1379UL];
    tlu2_linear_nearest_prelookup(&t170.mField0[0UL], &t170.mField1[0UL], &t170.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[544UL];
    tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL], &t62.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t170.mField0[0UL], &t170.mField2[0UL], &t62.mField0[0UL], &t62.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der82995 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t62.mField0[0UL], &t62.mField2[0UL], &nonscalar72[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly4_Module_1_1_Cell_1_electricalMod4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1383UL];
    tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL], &t101.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[552UL];
    tlu2_linear_nearest_prelookup(&t232.mField0[0UL], &t232.mField1[0UL], &t232.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t101.mField0[0UL], &t101.mField2[0UL], &t232.mField0[0UL], &t232.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int208 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t232.mField0[0UL], &t232.mField2[0UL], &nonscalar73[0UL], &t280[0UL], &t278[0UL]);
    zc_int761 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1387UL];
    tlu2_linear_nearest_prelookup(&t119.mField0[0UL], &t119.mField1[0UL], &t119.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[560UL];
    tlu2_linear_nearest_prelookup(&t32.mField0[0UL], &t32.mField1[0UL], &t32.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t119.mField0[0UL], &t119.mField2[0UL], &t32.mField0[0UL], &t32.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83095 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t32.mField0[0UL], &t32.mField2[0UL], &nonscalar74[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module03_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1391UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[568UL];
    tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL], &t204.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t204.mField0[0UL], &t204.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_71 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t204.mField0[0UL], &t204.mField2[0UL], &nonscalar75[0UL], &t280[0UL], &t278[0UL]);
    zc_int763 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1395UL];
    tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL], &t116.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[576UL];
    tlu2_linear_nearest_prelookup(&t119.mField0[0UL], &t119.mField1[0UL], &t119.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t116.mField0[0UL], &t116.mField2[0UL], &t119.mField0[0UL], &t119.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int217 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t119.mField0[0UL], &t119.mField2[0UL], &nonscalar76[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1399UL];
    tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL], &t101.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[584UL];
    tlu2_linear_nearest_prelookup(&t119.mField0[0UL], &t119.mField1[0UL], &t119.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t101.mField0[0UL], &t101.mField2[0UL], &t119.mField0[0UL], &t119.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_73 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t119.mField0[0UL], &t119.mField2[0UL], &nonscalar77[0UL], &t280[0UL], &t278[0UL]);
    zc_int765 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1403UL];
    tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL], &t62.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[592UL];
    tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL], &t116.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t62.mField0[0UL], &t62.mField2[0UL], &t116.mField0[0UL], &t116.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int223 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t116.mField0[0UL], &t116.mField2[0UL], &nonscalar78[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1407UL];
    tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL], &t101.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[600UL];
    tlu2_linear_nearest_prelookup(&t119.mField0[0UL], &t119.mField1[0UL], &t119.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t101.mField0[0UL], &t101.mField2[0UL], &t119.mField0[0UL], &t119.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83116 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t119.mField0[0UL], &t119.mField2[0UL], &nonscalar79[0UL], &t280[0UL], &t278[0UL]);
    zc_int767 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1411UL];
    tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL], &t273.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[608UL];
    tlu2_linear_nearest_prelookup(&t32.mField0[0UL], &t32.mField1[0UL], &t32.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t273.mField0[0UL], &t273.mField2[0UL], &t32.mField0[0UL], &t32.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83119 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t32.mField0[0UL], &t32.mField2[0UL], &nonscalar80[0UL], &t280[0UL], &t278[0UL]);
    zc_int768 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1415UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[616UL];
    tlu2_linear_nearest_prelookup(&t119.mField0[0UL], &t119.mField1[0UL], &t119.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t119.mField0[0UL], &t119.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83125 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t119.mField0[0UL], &t119.mField2[0UL], &nonscalar81[0UL], &t280[0UL], &t278[0UL]);
    zc_int769 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1419UL];
    tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL], &t62.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[624UL];
    tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL], &t204.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t62.mField0[0UL], &t62.mField2[0UL], &t204.mField0[0UL], &t204.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_78 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t204.mField0[0UL], &t204.mField2[0UL], &nonscalar82[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module11_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1423UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[632UL];
    tlu2_linear_nearest_prelookup(&t232.mField0[0UL], &t232.mField1[0UL], &t232.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t232.mField0[0UL], &t232.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_79 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t232.mField0[0UL], &t232.mField2[0UL], &nonscalar83[0UL], &t280[0UL], &t278[0UL]);
    zc_int771 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1427UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[640UL];
    tlu2_linear_nearest_prelookup(&t232.mField0[0UL], &t232.mField1[0UL], &t232.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t232.mField0[0UL], &t232.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83136 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t232.mField0[0UL], &t232.mField2[0UL], &nonscalar84[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module13_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1431UL];
    tlu2_linear_nearest_prelookup(&t32.mField0[0UL], &t32.mField1[0UL], &t32.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[648UL];
    tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL], &t116.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t32.mField0[0UL], &t32.mField2[0UL], &t116.mField0[0UL], &t116.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int244 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t116.mField0[0UL], &t116.mField2[0UL], &nonscalar85[0UL], &t280[0UL], &t278[0UL]);
    zc_int773 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1435UL];
    tlu2_linear_nearest_prelookup(&t175.mField0[0UL], &t175.mField1[0UL], &t175.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[656UL];
    tlu2_linear_nearest_prelookup(&t119.mField0[0UL], &t119.mField1[0UL], &t119.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t175.mField0[0UL], &t175.mField2[0UL], &t119.mField0[0UL], &t119.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int247 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t119.mField0[0UL], &t119.mField2[0UL], &nonscalar86[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1439UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[664UL];
    tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL], &t101.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t101.mField0[0UL], &t101.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int25 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t101.mField0[0UL], &t101.mField2[0UL], &nonscalar87[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1443UL];
    tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL], &t62.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[672UL];
    tlu2_linear_nearest_prelookup(&t232.mField0[0UL], &t232.mField1[0UL], &t232.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t62.mField0[0UL], &t62.mField2[0UL], &t232.mField0[0UL], &t232.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_84 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t232.mField0[0UL], &t232.mField2[0UL], &nonscalar88[0UL], &t280[0UL], &t278[0UL]);
    zc_int776 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1447UL];
    tlu2_linear_nearest_prelookup(&t232.mField0[0UL], &t232.mField1[0UL], &t232.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[680UL];
    tlu2_linear_nearest_prelookup(&t271.mField0[0UL], &t271.mField1[0UL], &t271.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t232.mField0[0UL], &t232.mField2[0UL], &t271.mField0[0UL], &t271.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83156 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t271.mField0[0UL], &t271.mField2[0UL], &nonscalar89[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1451UL];
    tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL], &t204.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[688UL];
    tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL], &t78.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t204.mField0[0UL], &t204.mField2[0UL], &t78.mField0[0UL], &t78.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_86 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t78.mField0[0UL], &t78.mField2[0UL], &nonscalar90[0UL], &t280[0UL], &t278[0UL]);
    zc_int778 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1455UL];
    tlu2_linear_nearest_prelookup(&t135.mField0[0UL], &t135.mField1[0UL], &t135.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[696UL];
    tlu2_linear_nearest_prelookup(&t119.mField0[0UL], &t119.mField1[0UL], &t119.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t135.mField0[0UL], &t135.mField2[0UL], &t119.mField0[0UL], &t119.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83163 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t119.mField0[0UL], &t119.mField2[0UL], &nonscalar91[0UL], &t280[0UL], &t278[0UL]);
    zc_int779 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1459UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[704UL];
    tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL], &t116.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t116.mField0[0UL], &t116.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83168 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t116.mField0[0UL], &t116.mField2[0UL], &nonscalar92[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module21_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1463UL];
    tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL], &t116.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[712UL];
    tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL], &t101.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t116.mField0[0UL], &t116.mField2[0UL], &t101.mField0[0UL], &t101.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_89 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t101.mField0[0UL], &t101.mField2[0UL], &nonscalar93[0UL], &t280[0UL], &t278[0UL]);
    zc_int781 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1467UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[720UL];
    tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL], &t273.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t273.mField0[0UL], &t273.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83267 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t273.mField0[0UL], &t273.mField2[0UL], &nonscalar94[0UL], &t280[0UL], &t278[0UL]);
    zc_int782 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1471UL];
    tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL], &t101.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[728UL];
    tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL], &t62.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t101.mField0[0UL], &t101.mField2[0UL], &t62.mField0[0UL], &t62.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83089 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t62.mField0[0UL], &t62.mField2[0UL], &nonscalar95[0UL], &t280[0UL], &t278[0UL]);
    zc_int783 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1475UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[736UL];
    tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL], &t204.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t204.mField0[0UL], &t204.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_92 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t204.mField0[0UL], &t204.mField2[0UL], &nonscalar96[0UL], &t280[0UL], &t278[0UL]);
    zc_int784 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1479UL];
    tlu2_linear_nearest_prelookup(&t232.mField0[0UL], &t232.mField1[0UL], &t232.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[744UL];
    tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL], &t101.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t232.mField0[0UL], &t232.mField2[0UL], &t101.mField0[0UL], &t101.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der82852 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t101.mField0[0UL], &t101.mField2[0UL], &nonscalar97[0UL], &t280[0UL], &t278[0UL]);
    zc_int785 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1483UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[752UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t270.mField0[0UL], &t270.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int283 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &nonscalar98[0UL], &t280[0UL], &t278[0UL]);
    zc_int786 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1487UL];
    tlu2_linear_nearest_prelookup(&t271.mField0[0UL], &t271.mField1[0UL], &t271.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[760UL];
    tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL], &t101.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t271.mField0[0UL], &t271.mField2[0UL], &t101.mField0[0UL], &t101.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_95 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t101.mField0[0UL], &t101.mField2[0UL], &nonscalar99[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1491UL];
    tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL], &t62.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[768UL];
    tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL], &t116.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t62.mField0[0UL], &t62.mField2[0UL], &t116.mField0[0UL], &t116.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83199 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t116.mField0[0UL], &t116.mField2[0UL], &nonscalar100[0UL], &t280[0UL], &t278[0UL]);
    zc_int788 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1495UL];
    tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL], &t62.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[776UL];
    tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL], &t273.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t62.mField0[0UL], &t62.mField2[0UL], &t273.mField0[0UL], &t273.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int292 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t273.mField0[0UL], &t273.mField2[0UL], &nonscalar101[0UL], &t280[0UL], &t278[0UL]);
    zc_int789 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1499UL];
    tlu2_linear_nearest_prelookup(&t232.mField0[0UL], &t232.mField1[0UL], &t232.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[784UL];
    tlu2_linear_nearest_prelookup(&t271.mField0[0UL], &t271.mField1[0UL], &t271.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t232.mField0[0UL], &t232.mField2[0UL], &t271.mField0[0UL], &t271.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_98 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t271.mField0[0UL], &t271.mField2[0UL], &nonscalar102[0UL], &t280[0UL], &t278[0UL]);
    zc_int790 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1503UL];
    tlu2_linear_nearest_prelookup(&t271.mField0[0UL], &t271.mField1[0UL], &t271.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[792UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t271.mField0[0UL], &t271.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83212 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &nonscalar103[0UL], &t280[0UL], &t278[0UL]);
    zc_int791 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1507UL];
    tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL], &t273.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[800UL];
    tlu2_linear_nearest_prelookup(&t32.mField0[0UL], &t32.mField1[0UL], &t32.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t273.mField0[0UL], &t273.mField2[0UL], &t32.mField0[0UL], &t32.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83215 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t32.mField0[0UL], &t32.mField2[0UL], &nonscalar104[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module10_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1511UL];
    tlu2_linear_nearest_prelookup(&t236.mField0[0UL], &t236.mField1[0UL], &t236.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[808UL];
    tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL], &t101.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t236.mField0[0UL], &t236.mField2[0UL], &t101.mField0[0UL], &t101.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83221 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t101.mField0[0UL], &t101.mField2[0UL], &nonscalar105[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module11_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1515UL];
    tlu2_linear_nearest_prelookup(&t170.mField0[0UL], &t170.mField1[0UL], &t170.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[816UL];
    tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL], &t62.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t170.mField0[0UL], &t170.mField2[0UL], &t62.mField0[0UL], &t62.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int307 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t62.mField0[0UL], &t62.mField2[0UL], &nonscalar106[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module12_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1519UL];
    tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL], &t273.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[824UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t273.mField0[0UL], &t273.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_103 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &nonscalar107[0UL], &t280[0UL], &t278[0UL]);
    zc_int795 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1523UL];
    tlu2_linear_nearest_prelookup(&t232.mField0[0UL], &t232.mField1[0UL], &t232.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[832UL];
    tlu2_linear_nearest_prelookup(&t175.mField0[0UL], &t175.mField1[0UL], &t175.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t232.mField0[0UL], &t232.mField2[0UL], &t175.mField0[0UL], &t175.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83231 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t175.mField0[0UL], &t175.mField2[0UL], &nonscalar108[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1527UL];
    tlu2_linear_nearest_prelookup(&t175.mField0[0UL], &t175.mField1[0UL], &t175.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[840UL];
    tlu2_linear_nearest_prelookup(&t232.mField0[0UL], &t232.mField1[0UL], &t232.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t175.mField0[0UL], &t175.mField2[0UL], &t232.mField0[0UL], &t232.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83236 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t232.mField0[0UL], &t232.mField2[0UL], &nonscalar109[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1531UL];
    tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL], &t101.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[848UL];
    tlu2_linear_nearest_prelookup(&t271.mField0[0UL], &t271.mField1[0UL], &t271.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t101.mField0[0UL], &t101.mField2[0UL], &t271.mField0[0UL], &t271.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83240 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t271.mField0[0UL], &t271.mField2[0UL], &nonscalar110[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module16_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1535UL];
    tlu2_linear_nearest_prelookup(&t32.mField0[0UL], &t32.mField1[0UL], &t32.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[856UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t32.mField0[0UL], &t32.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_107 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &nonscalar111[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module17_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1539UL];
    tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL], &t204.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[864UL];
    tlu2_linear_nearest_prelookup(&t32.mField0[0UL], &t32.mField1[0UL], &t32.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t204.mField0[0UL], &t204.mField2[0UL], &t32.mField0[0UL], &t32.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_108 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t32.mField0[0UL], &t32.mField2[0UL], &nonscalar112[0UL], &t280[0UL], &t278[0UL]);
    zc_int800 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1543UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[872UL];
    tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL], &t273.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t273.mField0[0UL], &t273.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83251 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t273.mField0[0UL], &t273.mField2[0UL], &nonscalar113[0UL], &t280[0UL], &t278[0UL]);
    zc_int801 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1547UL];
    tlu2_linear_nearest_prelookup(&t170.mField0[0UL], &t170.mField1[0UL], &t170.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[880UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t170.mField0[0UL], &t170.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_110 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &nonscalar114[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1551UL];
    tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL], &t101.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[888UL];
    tlu2_linear_nearest_prelookup(&t170.mField0[0UL], &t170.mField1[0UL], &t170.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t101.mField0[0UL], &t101.mField2[0UL], &t170.mField0[0UL], &t170.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int334 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t170.mField0[0UL], &t170.mField2[0UL], &nonscalar115[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1555UL];
    tlu2_linear_nearest_prelookup(&t135.mField0[0UL], &t135.mField1[0UL], &t135.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[896UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t135.mField0[0UL], &t135.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83264 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &nonscalar116[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1559UL];
    tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL], &t78.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[904UL];
    tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL], &t62.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t78.mField0[0UL], &t78.mField2[0UL], &t62.mField0[0UL], &t62.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_113 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t62.mField0[0UL], &t62.mField2[0UL], &nonscalar117[0UL], &t280[0UL], &t278[0UL]);
    zc_int805 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1563UL];
    tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL], &t204.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[912UL];
    tlu2_linear_nearest_prelookup(&t232.mField0[0UL], &t232.mField1[0UL], &t232.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t204.mField0[0UL], &t204.mField2[0UL], &t232.mField0[0UL], &t232.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83179 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t232.mField0[0UL], &t232.mField2[0UL], &nonscalar118[0UL], &t280[0UL], &t278[0UL]);
    zc_int806 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1567UL];
    tlu2_linear_nearest_prelookup(&t271.mField0[0UL], &t271.mField1[0UL], &t271.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[920UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t271.mField0[0UL], &t271.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    t2071 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &nonscalar119[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module02_Cell_1_electricalMod4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1571UL];
    tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL], &t78.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[928UL];
    tlu2_linear_nearest_prelookup(&t271.mField0[0UL], &t271.mField1[0UL], &t271.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t78.mField0[0UL], &t78.mField2[0UL], &t271.mField0[0UL], &t271.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int579 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t271.mField0[0UL], &t271.mField2[0UL], &nonscalar120[0UL], &t280[0UL], &t278[0UL]);
    zc_int808 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1575UL];
    tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL], &t204.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[936UL];
    tlu2_linear_nearest_prelookup(&t170.mField0[0UL], &t170.mField1[0UL], &t170.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t204.mField0[0UL], &t204.mField2[0UL], &t170.mField0[0UL], &t170.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int582 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t170.mField0[0UL], &t170.mField2[0UL], &nonscalar121[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module04_Cell_1_electricalMod4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1579UL];
    tlu2_linear_nearest_prelookup(&t232.mField0[0UL], &t232.mField1[0UL], &t232.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[944UL];
    tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL], &t273.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t232.mField0[0UL], &t232.mField2[0UL], &t273.mField0[0UL], &t273.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int585 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t273.mField0[0UL], &t273.mField2[0UL], &nonscalar122[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1583UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[952UL];
    tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL], &t78.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t78.mField0[0UL], &t78.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83292 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t78.mField0[0UL], &t78.mField2[0UL], &nonscalar123[0UL], &t280[0UL], &t278[0UL]);
    zc_int811 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1587UL];
    tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL], &t62.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[960UL];
    tlu2_linear_nearest_prelookup(&t236.mField0[0UL], &t236.mField1[0UL], &t236.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t62.mField0[0UL], &t62.mField2[0UL], &t236.mField0[0UL], &t236.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int591 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t236.mField0[0UL], &t236.mField2[0UL], &nonscalar124[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module07_Cell_1_electricalMod4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1591UL];
    tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL], &t78.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[968UL];
    tlu2_linear_nearest_prelookup(&t232.mField0[0UL], &t232.mField1[0UL], &t232.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t78.mField0[0UL], &t78.mField2[0UL], &t232.mField0[0UL], &t232.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_121 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t232.mField0[0UL], &t232.mField2[0UL], &nonscalar125[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module08_Cell_1_electricalMod4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1595UL];
    tlu2_linear_nearest_prelookup(&t271.mField0[0UL], &t271.mField1[0UL], &t271.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[976UL];
    tlu2_linear_nearest_prelookup(&t32.mField0[0UL], &t32.mField1[0UL], &t32.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t271.mField0[0UL], &t271.mField2[0UL], &t32.mField0[0UL], &t32.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int597 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t32.mField0[0UL], &t32.mField2[0UL], &nonscalar126[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1599UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[984UL];
    tlu2_linear_nearest_prelookup(&t271.mField0[0UL], &t271.mField1[0UL], &t271.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t271.mField0[0UL], &t271.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83307 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t271.mField0[0UL], &t271.mField2[0UL], &nonscalar127[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module10_Cell_1_electricalMod4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1603UL];
    tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL], &t273.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[992UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t273.mField0[0UL], &t273.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83311 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &nonscalar128[0UL], &t280[0UL], &t278[0UL]);
    zc_int816 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1607UL];
    tlu2_linear_nearest_prelookup(&t32.mField0[0UL], &t32.mField1[0UL], &t32.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[1000UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t32.mField0[0UL], &t32.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int606 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &nonscalar129[0UL], &t280[0UL], &t278[0UL]);
    zc_int817 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1611UL];
    tlu2_linear_nearest_prelookup(&t170.mField0[0UL], &t170.mField1[0UL], &t170.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[1008UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t170.mField0[0UL], &t170.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_126 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &nonscalar130[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1615UL];
    tlu2_linear_nearest_prelookup(&t135.mField0[0UL], &t135.mField1[0UL], &t135.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[1016UL];
    tlu2_linear_nearest_prelookup(&t236.mField0[0UL], &t236.mField1[0UL], &t236.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t135.mField0[0UL], &t135.mField2[0UL], &t236.mField0[0UL], &t236.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int612 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t236.mField0[0UL], &t236.mField2[0UL], &nonscalar131[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module14_Cell_1_electricalMod4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1619UL];
    tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL], &t78.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[1024UL];
    tlu2_linear_nearest_prelookup(&t236.mField0[0UL], &t236.mField1[0UL], &t236.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t78.mField0[0UL], &t78.mField2[0UL], &t236.mField0[0UL], &t236.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int615 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t236.mField0[0UL], &t236.mField2[0UL], &nonscalar132[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module15_Cell_1_electricalMod4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1623UL];
    tlu2_linear_nearest_prelookup(&t135.mField0[0UL], &t135.mField1[0UL], &t135.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[1032UL];
    tlu2_linear_nearest_prelookup(&t236.mField0[0UL], &t236.mField1[0UL], &t236.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t135.mField0[0UL], &t135.mField2[0UL], &t236.mField0[0UL], &t236.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int618 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t236.mField0[0UL], &t236.mField2[0UL], &nonscalar133[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module16_Cell_1_electricalMod4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1627UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[1040UL];
    tlu2_linear_nearest_prelookup(&t236.mField0[0UL], &t236.mField1[0UL], &t236.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t236.mField0[0UL], &t236.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83335 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t236.mField0[0UL], &t236.mField2[0UL], &nonscalar134[0UL], &t280[0UL], &t278[0UL]);
    zc_int822 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1631UL];
    tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL], &t78.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[1048UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t78.mField0[0UL], &t78.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83339 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &nonscalar135[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1635UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[1056UL];
    tlu2_linear_nearest_prelookup(&t236.mField0[0UL], &t236.mField1[0UL], &t236.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t236.mField0[0UL], &t236.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int627 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t236.mField0[0UL], &t236.mField2[0UL], &nonscalar136[0UL], &t280[0UL], &t278[0UL]);
    zc_int824 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1639UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[1064UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_133 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &nonscalar137[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module20_Cell_1_electricalMod4 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1643UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[1072UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int633 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &nonscalar138[0UL], &t280[0UL], &t278[0UL]);
    zc_int826 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1647UL];
    tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL], &t204.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[1080UL];
    tlu2_linear_nearest_prelookup(&t236.mField0[0UL], &t236.mField1[0UL], &t236.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t204.mField0[0UL], &t204.mField2[0UL], &t236.mField0[0UL], &t236.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intermediate_der83355 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t236.mField0[0UL], &t236.mField2[0UL], &nonscalar139[0UL], &t280[0UL], &t278[0UL]);
    zc_int827 = t2066[0UL];
    t1354[0UL] = t2072->mX.mX[1651UL];
    tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL], &t204.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[1088UL];
    tlu2_linear_nearest_prelookup(&t236.mField0[0UL], &t236.mField1[0UL], &t236.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2066[0UL], &t204.mField0[0UL], &t204.mField2[0UL], &t236.mField0[0UL], &t236.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    zc_int660 = t2066[0UL];
    tlu2_1d_linear_nearest_value(&t2066[0UL], &t236.mField0[0UL], &t236.mField2[0UL], &nonscalar140[0UL], &t280[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[1655UL];
    tlu2_linear_nearest_prelookup(&t236.mField0[0UL], &t236.mField1[0UL], &t236.mField2[0UL], &nonscalar1[0UL], &t1354[0UL], &t277[0UL], &t278[0UL]);
    t1354[0UL] = t2072->mX.mX[1096UL];
    tlu2_linear_nearest_prelookup(&t175.mField0[0UL], &t175.mField1[0UL], &t175.mField2[0UL], &nonscalar2[0UL], &t1354[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t1354[0UL], &t236.mField0[0UL], &t236.mField2[0UL], &t175.mField0[0UL], &t175.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t277[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_137 = t1354[0UL];
    tlu2_1d_linear_nearest_value(&t1354[0UL], &t175.mField0[0UL], &t175.mField2[0UL], &nonscalar141[0UL], &t280[0UL], &t278[0UL]);
    if (t2072->mM.mX[1UL] != 0) {
        zc_int1 = 8.200000000000002E-8;
    } else {
        zc_int1 = t2072->mX.mX[1110UL] * intermediate_der82828;
    }
    if (t2072->mM.mX[771UL] != 0) {
        intermediate_der82828 = 8.200000000000002E-8;
    } else {
        intermediate_der82828 = t2072->mX.mX[1122UL] * intrm_sf_mf_4;
    }
    if (t2072->mM.mX[738UL] != 0) {
        intrm_sf_mf_4 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_4 = t2072->mX.mX[1242UL] * intermediate_der82951;
    }
    if (t2072->mM.mX[760UL] != 0) {
        intermediate_der82951 = 8.200000000000002E-8;
    } else {
        intermediate_der82951 = t2072->mX.mX[1246UL] * intermediate_der82956;
    }
    if (t2072->mM.mX[783UL] != 0) {
        intermediate_der82956 = 8.200000000000002E-8;
    } else {
        intermediate_der82956 = t2072->mX.mX[1250UL] * intermediate_der82959;
    }
    if (t2072->mM.mX[805UL] != 0) {
        intermediate_der82959 = 8.200000000000002E-8;
    } else {
        intermediate_der82959 = t2072->mX.mX[1254UL] * intermediate_der82964;
    }
    if (t2072->mM.mX[827UL] != 0) {
        intermediate_der82964 = 8.200000000000002E-8;
    } else {
        intermediate_der82964 = t2072->mX.mX[1258UL] * zc_int115;
    }
    if (t2072->mM.mX[849UL] != 0) {
        zc_int115 = 8.200000000000002E-8;
    } else {
        zc_int115 = t2072->mX.mX[1262UL] * intrm_sf_mf_39;
    }
    if (t2072->mM.mX[871UL] != 0) {
        intrm_sf_mf_39 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_39 = t2072->mX.mX[1266UL] * intermediate_der82976;
    }
    if (t2072->mM.mX[894UL] != 0) {
        intermediate_der82976 = 8.200000000000002E-8;
    } else {
        intermediate_der82976 = t2072->mX.mX[1270UL] * intermediate_der82979;
    }
    if (t2072->mM.mX[916UL] != 0) {
        intermediate_der82979 = 8.200000000000002E-8;
    } else {
        intermediate_der82979 = t2072->mX.mX[1274UL] * zc_int127;
    }
    if (t2072->mM.mX[938UL] != 0) {
        zc_int127 = 8.200000000000002E-8;
    } else {
        zc_int127 = t2072->mX.mX[1278UL] * intrm_sf_mf_43;
    }
    if (t2072->mM.mX[993UL] != 0) {
        intrm_sf_mf_43 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_43 = t2072->mX.mX[1126UL] * intrm_sf_mf_5;
    }
    if (t2072->mM.mX[960UL] != 0) {
        intrm_sf_mf_5 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_5 = t2072->mX.mX[1282UL] * zc_int133;
    }
    if (t2072->mM.mX[982UL] != 0) {
        zc_int133 = 8.200000000000002E-8;
    } else {
        zc_int133 = t2072->mX.mX[1378UL] * intermediate_der82995;
    }
    if (t2072->mM.mX[1005UL] != 0) {
        intermediate_der82995 = 8.200000000000002E-8;
    } else {
        intermediate_der82995 = t2072->mX.mX[1290UL] * zc_int139;
    }
    if (t2072->mM.mX[1027UL] != 0) {
        zc_int139 = 8.200000000000002E-8;
    } else {
        zc_int139 = t2072->mX.mX[1294UL] * intrm_sf_mf_47;
    }
    if (t2072->mM.mX[1049UL] != 0) {
        intrm_sf_mf_47 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_47 = t2072->mX.mX[1298UL] * zc_int145;
    }
    if (t2072->mM.mX[1071UL] != 0) {
        zc_int145 = 8.200000000000002E-8;
    } else {
        zc_int145 = t2072->mX.mX[1302UL] * zc_int148;
    }
    if (t2072->mM.mX[1093UL] != 0) {
        zc_int148 = 8.200000000000002E-8;
    } else {
        zc_int148 = t2072->mX.mX[1306UL] * intermediate_der83016;
    }
    if (t2072->mM.mX[14UL] != 0) {
        intermediate_der83016 = 8.200000000000002E-8;
    } else {
        intermediate_der83016 = t2072->mX.mX[1310UL] * zc_int154;
    }
    if (t2072->mM.mX[36UL] != 0) {
        zc_int154 = 8.200000000000002E-8;
    } else {
        zc_int154 = t2072->mX.mX[1314UL] * intrm_sf_mf_52;
    }
    if (t2072->mM.mX[58UL] != 0) {
        intrm_sf_mf_52 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_52 = t2072->mX.mX[1318UL] * intrm_sf_mf_53;
    }
    if (t2072->mM.mX[113UL] != 0) {
        intrm_sf_mf_53 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_53 = t2072->mX.mX[1130UL] * intrm_sf_mf_6;
    }
    if (t2072->mM.mX[80UL] != 0) {
        intrm_sf_mf_6 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_6 = t2072->mX.mX[1322UL] * zc_int163;
    }
    if (t2072->mM.mX[102UL] != 0) {
        zc_int163 = 8.200000000000002E-8;
    } else {
        zc_int163 = t2072->mX.mX[1326UL] * intrm_sf_mf_55;
    }
    if (t2072->mM.mX[119UL] != 0) {
        intrm_sf_mf_55 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_55 = t2072->mX.mX[1330UL] * zc_int169;
    }
    if (t2072->mM.mX[121UL] != 0) {
        zc_int169 = 8.200000000000002E-8;
    } else {
        zc_int169 = t2072->mX.mX[1334UL] * intrm_sf_mf_57;
    }
    if (t2072->mM.mX[123UL] != 0) {
        intrm_sf_mf_57 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_57 = t2072->mX.mX[1338UL] * intermediate_der83046;
    }
    if (t2072->mM.mX[125UL] != 0) {
        intermediate_der83046 = 8.200000000000002E-8;
    } else {
        intermediate_der83046 = t2072->mX.mX[1342UL] * zc_int178;
    }
    if (t2072->mM.mX[127UL] != 0) {
        zc_int178 = 8.200000000000002E-8;
    } else {
        zc_int178 = t2072->mX.mX[1346UL] * zc_int181;
    }
    if (t2072->mM.mX[130UL] != 0) {
        zc_int181 = 8.200000000000002E-8;
    } else {
        zc_int181 = t2072->mX.mX[1350UL] * intrm_sf_mf_61;
    }
    if (t2072->mM.mX[132UL] != 0) {
        intrm_sf_mf_61 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_61 = t2072->mX.mX[1354UL] * zc_int187;
    }
    if (t2072->mM.mX[134UL] != 0) {
        zc_int187 = 8.200000000000002E-8;
    } else {
        zc_int187 = t2072->mX.mX[1358UL] * intermediate_der82840;
    }
    if (t2072->mM.mX[139UL] != 0) {
        intermediate_der82840 = 8.200000000000002E-8;
    } else {
        intermediate_der82840 = t2072->mX.mX[1134UL] * intrm_sf_mf_7;
    }
    if (t2072->mM.mX[136UL] != 0) {
        intrm_sf_mf_7 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_7 = t2072->mX.mX[1362UL] * intrm_sf_mf_64;
    }
    if (t2072->mM.mX[138UL] != 0) {
        intrm_sf_mf_64 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_64 = t2072->mX.mX[1366UL] * intermediate_der83074;
    }
    if (t2072->mM.mX[141UL] != 0) {
        intermediate_der83074 = 8.200000000000002E-8;
    } else {
        intermediate_der83074 = t2072->mX.mX[1370UL] * intermediate_der83079;
    }
    if (t2072->mM.mX[143UL] != 0) {
        intermediate_der83079 = 8.200000000000002E-8;
    } else {
        intermediate_der83079 = t2072->mX.mX[1374UL] * intrm_sf_mf_67;
    }
    if (t2072->mM.mX[145UL] != 0) {
        intrm_sf_mf_67 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_67 = t2072->mX.mX[1470UL] * intermediate_der83089;
    }
    if (t2072->mM.mX[147UL] != 0) {
        intermediate_der83089 = 8.200000000000002E-8;
    } else {
        intermediate_der83089 = t2072->mX.mX[1382UL] * zc_int208;
    }
    if (t2072->mM.mX[149UL] != 0) {
        zc_int208 = 8.200000000000002E-8;
    } else {
        zc_int208 = t2072->mX.mX[1386UL] * intermediate_der83095;
    }
    if (t2072->mM.mX[152UL] != 0) {
        intermediate_der83095 = 8.200000000000002E-8;
    } else {
        intermediate_der83095 = t2072->mX.mX[1390UL] * intrm_sf_mf_71;
    }
    if (t2072->mM.mX[154UL] != 0) {
        intrm_sf_mf_71 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_71 = t2072->mX.mX[1394UL] * zc_int217;
    }
    if (t2072->mM.mX[156UL] != 0) {
        zc_int217 = 8.200000000000002E-8;
    } else {
        zc_int217 = t2072->mX.mX[1398UL] * intrm_sf_mf_73;
    }
    if (t2072->mM.mX[161UL] != 0) {
        intrm_sf_mf_73 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_73 = t2072->mX.mX[1138UL] * intermediate_der83108;
    }
    if (t2072->mM.mX[158UL] != 0) {
        intermediate_der83108 = 8.200000000000002E-8;
    } else {
        intermediate_der83108 = t2072->mX.mX[1402UL] * zc_int223;
    }
    if (t2072->mM.mX[160UL] != 0) {
        zc_int223 = 8.200000000000002E-8;
    } else {
        zc_int223 = t2072->mX.mX[1406UL] * intermediate_der83116;
    }
    if (t2072->mM.mX[163UL] != 0) {
        intermediate_der83116 = 8.200000000000002E-8;
    } else {
        intermediate_der83116 = t2072->mX.mX[1410UL] * intermediate_der83119;
    }
    if (t2072->mM.mX[165UL] != 0) {
        intermediate_der83119 = 8.200000000000002E-8;
    } else {
        intermediate_der83119 = t2072->mX.mX[1414UL] * intermediate_der83125;
    }
    if (t2072->mM.mX[167UL] != 0) {
        intermediate_der83125 = 8.200000000000002E-8;
    } else {
        intermediate_der83125 = t2072->mX.mX[1418UL] * intrm_sf_mf_78;
    }
    if (t2072->mM.mX[169UL] != 0) {
        intrm_sf_mf_78 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_78 = t2072->mX.mX[1422UL] * intrm_sf_mf_79;
    }
    if (t2072->mM.mX[171UL] != 0) {
        intrm_sf_mf_79 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_79 = t2072->mX.mX[1426UL] * intermediate_der83136;
    }
    if (t2072->mM.mX[174UL] != 0) {
        intermediate_der83136 = 8.200000000000002E-8;
    } else {
        intermediate_der83136 = t2072->mX.mX[1430UL] * zc_int244;
    }
    if (t2072->mM.mX[176UL] != 0) {
        zc_int244 = 8.200000000000002E-8;
    } else {
        zc_int244 = t2072->mX.mX[1434UL] * zc_int247;
    }
    if (t2072->mM.mX[178UL] != 0) {
        zc_int247 = 8.200000000000002E-8;
    } else {
        zc_int247 = t2072->mX.mX[1438UL] * zc_int25;
    }
    if (t2072->mM.mX[183UL] != 0) {
        zc_int25 = 8.200000000000002E-8;
    } else {
        zc_int25 = t2072->mX.mX[1142UL] * zc_int250;
    }
    if (t2072->mM.mX[180UL] != 0) {
        zc_int250 = 8.200000000000002E-8;
    } else {
        zc_int250 = t2072->mX.mX[1442UL] * intrm_sf_mf_84;
    }
    if (t2072->mM.mX[182UL] != 0) {
        intrm_sf_mf_84 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_84 = t2072->mX.mX[1446UL] * intermediate_der83156;
    }
    if (t2072->mM.mX[185UL] != 0) {
        intermediate_der83156 = 8.200000000000002E-8;
    } else {
        intermediate_der83156 = t2072->mX.mX[1450UL] * intrm_sf_mf_86;
    }
    if (t2072->mM.mX[187UL] != 0) {
        intrm_sf_mf_86 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_86 = t2072->mX.mX[1454UL] * intermediate_der83163;
    }
    if (t2072->mM.mX[189UL] != 0) {
        intermediate_der83163 = 8.200000000000002E-8;
    } else {
        intermediate_der83163 = t2072->mX.mX[1458UL] * intermediate_der83168;
    }
    if (t2072->mM.mX[191UL] != 0) {
        intermediate_der83168 = 8.200000000000002E-8;
    } else {
        intermediate_der83168 = t2072->mX.mX[1462UL] * intrm_sf_mf_89;
    }
    if (t2072->mM.mX[193UL] != 0) {
        intrm_sf_mf_89 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_89 = t2072->mX.mX[1466UL] * intermediate_der83267;
    }
    if (t2072->mM.mX[196UL] != 0) {
        intermediate_der83267 = 8.200000000000002E-8;
    } else {
        intermediate_der83267 = t2072->mX.mX[1562UL] * intermediate_der83179;
    }
    if (t2072->mM.mX[198UL] != 0) {
        intermediate_der83179 = 8.200000000000002E-8;
    } else {
        intermediate_der83179 = t2072->mX.mX[1474UL] * intrm_sf_mf_92;
    }
    if (t2072->mM.mX[200UL] != 0) {
        intrm_sf_mf_92 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_92 = t2072->mX.mX[1478UL] * intermediate_der82852;
    }
    if (t2072->mM.mX[205UL] != 0) {
        intermediate_der82852 = 8.200000000000002E-8;
    } else {
        intermediate_der82852 = t2072->mX.mX[1146UL] * intrm_sf_mf_10;
    }
    if (t2072->mM.mX[202UL] != 0) {
        intrm_sf_mf_10 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_10 = t2072->mX.mX[1482UL] * zc_int283;
    }
    if (t2072->mM.mX[204UL] != 0) {
        zc_int283 = 8.200000000000002E-8;
    } else {
        zc_int283 = t2072->mX.mX[1486UL] * intrm_sf_mf_95;
    }
    if (t2072->mM.mX[207UL] != 0) {
        intrm_sf_mf_95 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_95 = t2072->mX.mX[1490UL] * intermediate_der83199;
    }
    if (t2072->mM.mX[209UL] != 0) {
        intermediate_der83199 = 8.200000000000002E-8;
    } else {
        intermediate_der83199 = t2072->mX.mX[1494UL] * zc_int292;
    }
    if (t2072->mM.mX[211UL] != 0) {
        zc_int292 = 8.200000000000002E-8;
    } else {
        zc_int292 = t2072->mX.mX[1498UL] * intrm_sf_mf_98;
    }
    if (t2072->mM.mX[213UL] != 0) {
        intrm_sf_mf_98 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_98 = t2072->mX.mX[1502UL] * intermediate_der83212;
    }
    if (t2072->mM.mX[215UL] != 0) {
        intermediate_der83212 = 8.200000000000002E-8;
    } else {
        intermediate_der83212 = t2072->mX.mX[1506UL] * intermediate_der83215;
    }
    if (t2072->mM.mX[219UL] != 0) {
        intermediate_der83215 = 8.200000000000002E-8;
    } else {
        intermediate_der83215 = t2072->mX.mX[1510UL] * intermediate_der83221;
    }
    if (t2072->mM.mX[221UL] != 0) {
        intermediate_der83221 = 8.200000000000002E-8;
    } else {
        intermediate_der83221 = t2072->mX.mX[1514UL] * zc_int307;
    }
    if (t2072->mM.mX[223UL] != 0) {
        zc_int307 = 8.200000000000002E-8;
    } else {
        zc_int307 = t2072->mX.mX[1518UL] * intrm_sf_mf_103;
    }
    if (t2072->mM.mX[228UL] != 0) {
        intrm_sf_mf_103 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_103 = t2072->mX.mX[1150UL] * intermediate_der83227;
    }
    if (t2072->mM.mX[225UL] != 0) {
        intermediate_der83227 = 8.200000000000002E-8;
    } else {
        intermediate_der83227 = t2072->mX.mX[1522UL] * intermediate_der83231;
    }
    if (t2072->mM.mX[227UL] != 0) {
        intermediate_der83231 = 8.200000000000002E-8;
    } else {
        intermediate_der83231 = t2072->mX.mX[1526UL] * intermediate_der83236;
    }
    if (t2072->mM.mX[230UL] != 0) {
        intermediate_der83236 = 8.200000000000002E-8;
    } else {
        intermediate_der83236 = t2072->mX.mX[1530UL] * intermediate_der83240;
    }
    if (t2072->mM.mX[232UL] != 0) {
        intermediate_der83240 = 8.200000000000002E-8;
    } else {
        intermediate_der83240 = t2072->mX.mX[1534UL] * intrm_sf_mf_107;
    }
    if (t2072->mM.mX[234UL] != 0) {
        intrm_sf_mf_107 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_107 = t2072->mX.mX[1538UL] * intrm_sf_mf_108;
    }
    if (t2072->mM.mX[236UL] != 0) {
        intrm_sf_mf_108 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_108 = t2072->mX.mX[1542UL] * intermediate_der83251;
    }
    if (t2072->mM.mX[238UL] != 0) {
        intermediate_der83251 = 8.200000000000002E-8;
    } else {
        intermediate_der83251 = t2072->mX.mX[1546UL] * intrm_sf_mf_110;
    }
    if (t2072->mM.mX[241UL] != 0) {
        intrm_sf_mf_110 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_110 = t2072->mX.mX[1550UL] * zc_int334;
    }
    if (t2072->mM.mX[243UL] != 0) {
        zc_int334 = 8.200000000000002E-8;
    } else {
        zc_int334 = t2072->mX.mX[1554UL] * intermediate_der83264;
    }
    if (t2072->mM.mX[245UL] != 0) {
        intermediate_der83264 = 8.200000000000002E-8;
    } else {
        intermediate_der83264 = t2072->mX.mX[1558UL] * intrm_sf_mf_113;
    }
    if (t2072->mM.mX[250UL] != 0) {
        intrm_sf_mf_113 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_113 = t2072->mX.mX[1154UL] * zc_int37;
    }
    if (t2072->mM.mX[272UL] != 0) {
        zc_int37 = 8.200000000000002E-8;
    } else {
        zc_int37 = t2072->mX.mX[1158UL] * intrm_sf_mf_13;
    }
    if (t2072->mM.mX[327UL] != 0) {
        intrm_sf_mf_13 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_13 = t2072->mX.mX[1114UL] * zc_int40;
    }
    if (t2072->mM.mX[294UL] != 0) {
        zc_int40 = 8.200000000000002E-8;
    } else {
        zc_int40 = t2072->mX.mX[1162UL] * intrm_sf_mf_14;
    }
    if (t2072->mM.mX[716UL] != 0) {
        intrm_sf_mf_14 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_14 = t2072->mX.mX[1238UL] * intrm_sf_mf_33;
    }
    if (t2072->mM.mX[694UL] != 0) {
        intrm_sf_mf_33 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_33 = t2072->mX.mX[1234UL] * zc_int91;
    }
    if (t2072->mM.mX[672UL] != 0) {
        zc_int91 = 8.200000000000002E-8;
    } else {
        zc_int91 = t2072->mX.mX[1230UL] * zc_int88;
    }
    if (t2072->mM.mX[649UL] != 0) {
        zc_int88 = 8.200000000000002E-8;
    } else {
        zc_int88 = t2072->mX.mX[1226UL] * intermediate_der82927;
    }
    if (t2072->mM.mX[627UL] != 0) {
        intermediate_der82927 = 8.200000000000002E-8;
    } else {
        intermediate_der82927 = t2072->mX.mX[1222UL] * zc_int82;
    }
    if (t2072->mM.mX[605UL] != 0) {
        zc_int82 = 8.200000000000002E-8;
    } else {
        zc_int82 = t2072->mX.mX[1218UL] * intrm_sf_mf_28;
    }
    if (t2072->mM.mX[583UL] != 0) {
        intrm_sf_mf_28 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_28 = t2072->mX.mX[1214UL] * zc_int76;
    }
    if (t2072->mM.mX[561UL] != 0) {
        zc_int76 = 8.200000000000002E-8;
    } else {
        zc_int76 = t2072->mX.mX[1210UL] * intermediate_der82912;
    }
    if (t2072->mM.mX[538UL] != 0) {
        intermediate_der82912 = 8.200000000000002E-8;
    } else {
        intermediate_der82912 = t2072->mX.mX[1206UL] * zc_int70;
    }
    if (t2072->mM.mX[516UL] != 0) {
        zc_int70 = 8.200000000000002E-8;
    } else {
        zc_int70 = t2072->mX.mX[1202UL] * intermediate_der82904;
    }
    if (t2072->mM.mX[494UL] != 0) {
        intermediate_der82904 = 8.200000000000002E-8;
    } else {
        intermediate_der82904 = t2072->mX.mX[1198UL] * intermediate_der82870;
    }
    if (t2072->mM.mX[316UL] != 0) {
        intermediate_der82870 = 8.200000000000002E-8;
    } else {
        intermediate_der82870 = t2072->mX.mX[1166UL] * intrm_sf_mf_15;
    }
    if (t2072->mM.mX[472UL] != 0) {
        intrm_sf_mf_15 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_15 = t2072->mX.mX[1286UL] * intrm_sf_mf_45;
    }
    if (t2072->mM.mX[450UL] != 0) {
        intrm_sf_mf_45 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_45 = t2072->mX.mX[1190UL] * zc_int58;
    }
    if (t2072->mM.mX[427UL] != 0) {
        zc_int58 = 8.200000000000002E-8;
    } else {
        zc_int58 = t2072->mX.mX[1186UL] * intrm_sf_mf_20;
    }
    if (t2072->mM.mX[405UL] != 0) {
        intrm_sf_mf_20 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_20 = t2072->mX.mX[1182UL] * intrm_sf_mf_19;
    }
    if (t2072->mM.mX[383UL] != 0) {
        intrm_sf_mf_19 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_19 = t2072->mX.mX[1178UL] * zc_int49;
    }
    if (t2072->mM.mX[361UL] != 0) {
        zc_int49 = 8.200000000000002E-8;
    } else {
        zc_int49 = t2072->mX.mX[1174UL] * zc_int46;
    }
    if (t2072->mM.mX[339UL] != 0) {
        zc_int46 = 8.200000000000002E-8;
    } else {
        zc_int46 = t2072->mX.mX[1170UL] * zc_int7;
    }
    if (t2072->mM.mX[549UL] != 0) {
        zc_int7 = 8.200000000000002E-8;
    } else {
        zc_int7 = t2072->mX.mX[1118UL] * intermediate_der82811;
    }
    if (t2072->mM.mX[247UL] != 0) {
        intermediate_der82811 = 8.200000000000002E-8;
    } else {
        intermediate_der82811 = t2072->mX.mX[1106UL] * intermediate_der82900;
    }
    if (t2072->mM.mX[249UL] != 0) {
        intermediate_der82900 = 8.200000000000002E-8;
    } else {
        intermediate_der82900 = t2072->mX.mX[1194UL] * zc_int576;
    }
    if (t2072->mM.mX[252UL] != 0) {
        zc_int576 = 8.200000000000002E-8;
    } else {
        zc_int576 = t2072->mX.mX[1570UL] * zc_int579;
    }
    if (t2072->mM.mX[254UL] != 0) {
        zc_int579 = 8.200000000000002E-8;
    } else {
        zc_int579 = t2072->mX.mX[1574UL] * zc_int582;
    }
    if (t2072->mM.mX[256UL] != 0) {
        zc_int582 = 8.200000000000002E-8;
    } else {
        zc_int582 = t2072->mX.mX[1578UL] * zc_int585;
    }
    if (t2072->mM.mX[258UL] != 0) {
        zc_int585 = 8.200000000000002E-8;
    } else {
        zc_int585 = t2072->mX.mX[1582UL] * intermediate_der83292;
    }
    if (t2072->mM.mX[260UL] != 0) {
        intermediate_der83292 = 8.200000000000002E-8;
    } else {
        intermediate_der83292 = t2072->mX.mX[1586UL] * zc_int591;
    }
    if (t2072->mM.mX[263UL] != 0) {
        zc_int591 = 8.200000000000002E-8;
    } else {
        zc_int591 = t2072->mX.mX[1590UL] * intrm_sf_mf_121;
    }
    if (t2072->mM.mX[265UL] != 0) {
        intrm_sf_mf_121 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_121 = t2072->mX.mX[1594UL] * zc_int597;
    }
    if (t2072->mM.mX[267UL] != 0) {
        zc_int597 = 8.200000000000002E-8;
    } else {
        zc_int597 = t2072->mX.mX[1598UL] * intermediate_der83307;
    }
    if (t2072->mM.mX[269UL] != 0) {
        intermediate_der83307 = 8.200000000000002E-8;
    } else {
        intermediate_der83307 = t2072->mX.mX[1602UL] * intermediate_der83311;
    }
    if (t2072->mM.mX[271UL] != 0) {
        intermediate_der83311 = 8.200000000000002E-8;
    } else {
        intermediate_der83311 = t2072->mX.mX[1606UL] * zc_int606;
    }
    if (t2072->mM.mX[274UL] != 0) {
        zc_int606 = 8.200000000000002E-8;
    } else {
        zc_int606 = t2072->mX.mX[1610UL] * intrm_sf_mf_126;
    }
    if (t2072->mM.mX[276UL] != 0) {
        intrm_sf_mf_126 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_126 = t2072->mX.mX[1614UL] * zc_int612;
    }
    if (t2072->mM.mX[278UL] != 0) {
        zc_int612 = 8.200000000000002E-8;
    } else {
        zc_int612 = t2072->mX.mX[1618UL] * zc_int615;
    }
    if (t2072->mM.mX[280UL] != 0) {
        zc_int615 = 8.200000000000002E-8;
    } else {
        zc_int615 = t2072->mX.mX[1622UL] * zc_int618;
    }
    if (t2072->mM.mX[282UL] != 0) {
        zc_int618 = 8.200000000000002E-8;
    } else {
        zc_int618 = t2072->mX.mX[1626UL] * intermediate_der83335;
    }
    if (t2072->mM.mX[285UL] != 0) {
        intermediate_der83335 = 8.200000000000002E-8;
    } else {
        intermediate_der83335 = t2072->mX.mX[1630UL] * intermediate_der83339;
    }
    if (t2072->mM.mX[287UL] != 0) {
        intermediate_der83339 = 8.200000000000002E-8;
    } else {
        intermediate_der83339 = t2072->mX.mX[1634UL] * zc_int627;
    }
    if (t2072->mM.mX[289UL] != 0) {
        zc_int627 = 8.200000000000002E-8;
    } else {
        zc_int627 = t2072->mX.mX[1638UL] * intrm_sf_mf_133;
    }
    if (t2072->mM.mX[291UL] != 0) {
        intrm_sf_mf_133 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_133 = t2072->mX.mX[1642UL] * zc_int633;
    }
    if (t2072->mM.mX[293UL] != 0) {
        zc_int633 = 8.200000000000002E-8;
    } else {
        zc_int633 = t2072->mX.mX[1646UL] * intermediate_der83355;
    }
    if (t2072->mM.mX[296UL] != 0) {
        intermediate_der83355 = 8.200000000000002E-8;
    } else {
        intermediate_der83355 = t2072->mX.mX[1650UL] * zc_int660;
    }
    if (t2072->mM.mX[298UL] != 0) {
        zc_int660 = 8.200000000000002E-8;
    } else {
        zc_int660 = t2072->mX.mX[1566UL] * t2071;
    }
    if (t2072->mM.mX[300UL] != 0) {
        t2071 = 8.200000000000002E-8;
    } else {
        t2071 = t2072->mX.mX[1654UL] * intrm_sf_mf_137;
    }
    if (t2072->mM.mX[301UL] != 0) {
        intrm_sf_mf_137 = 0.49756425413970118;
    } else {
        intrm_sf_mf_137 = t2072->mX.mX[1105UL] * BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel6;
    }
    if (t2072->mM.mX[302UL] != 0) {
        BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel6 = 0.48752676279699209;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel6 = t2072->mX.mX[1109UL] * zc_int693;
    }
    if (t2072->mM.mX[303UL] != 0) {
        zc_int693 = 0.48078834915151664;
    } else {
        zc_int693 = t2072->mX.mX[1113UL] * zc_int694;
    }
    if (t2072->mM.mX[304UL] != 0) {
        zc_int694 = 0.4929111029868416;
    } else {
        zc_int694 = t2072->mX.mX[1117UL] * BatteryPack_v2_ModuleAssembly2_Module05_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[306UL] != 0) {
        BatteryPack_v2_ModuleAssembly2_Module05_Cell_1_electricalModel4 = 0.49823752905094143;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module05_Cell_1_electricalModel4 = t2072->mX.mX[1121UL] * zc_int696;
    }
    if (t2072->mM.mX[307UL] != 0) {
        zc_int696 = 0.48708570492901532;
    } else {
        zc_int696 = t2072->mX.mX[1125UL] * zc_int697;
    }
    if (t2072->mM.mX[308UL] != 0) {
        zc_int697 = 0.493439983000653;
    } else {
        zc_int697 = t2072->mX.mX[1129UL] * BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[309UL] != 0) {
        BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel4 = 0.49600081783587263;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel4 = t2072->mX.mX[1133UL] * zc_int699;
    }
    if (t2072->mM.mX[310UL] != 0) {
        zc_int699 = 0.48252294996333511;
    } else {
        zc_int699 = t2072->mX.mX[1137UL] * BatteryPack_v2_ModuleAssembly2_Module10_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[311UL] != 0) {
        BatteryPack_v2_ModuleAssembly2_Module10_Cell_1_electricalModel4 = 0.48003746073247106;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module10_Cell_1_electricalModel4 = t2072->mX.mX[1141UL] * zc_int701;
    }
    if (t2072->mM.mX[312UL] != 0) {
        zc_int701 = 0.48215790259561714;
    } else {
        zc_int701 = t2072->mX.mX[1145UL] * BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[313UL] != 0) {
        BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel4 = 0.47887551755551255;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel4 = t2072->mX.mX[1149UL] * BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[314UL] != 0) {
        BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel4 = 0.48875423582391192;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel4 = t2072->mX.mX[1153UL] * zc_int704;
    }
    if (t2072->mM.mX[315UL] != 0) {
        zc_int704 = 0.50336659836010289;
    } else {
        zc_int704 = t2072->mX.mX[1157UL] * BatteryPack_v2_ModuleAssembly2_Module15_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[317UL] != 0) {
        BatteryPack_v2_ModuleAssembly2_Module15_Cell_1_electricalModel4 = 0.48571046325976985;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module15_Cell_1_electricalModel4 = t2072->mX.mX[1161UL] * zc_int706;
    }
    if (t2072->mM.mX[318UL] != 0) {
        zc_int706 = 0.48549741178192857;
    } else {
        zc_int706 = t2072->mX.mX[1165UL] * zc_int707;
    }
    if (t2072->mM.mX[319UL] != 0) {
        zc_int707 = 0.47987392263058781;
    } else {
        zc_int707 = t2072->mX.mX[1169UL] * zc_int708;
    }
    if (t2072->mM.mX[320UL] != 0) {
        zc_int708 = 0.49836098580163463;
    } else {
        zc_int708 = t2072->mX.mX[1173UL] * zc_int709;
    }
    if (t2072->mM.mX[321UL] != 0) {
        zc_int709 = 0.48786906298418287;
    } else {
        zc_int709 = t2072->mX.mX[1177UL] * zc_int710;
    }
    if (t2072->mM.mX[322UL] != 0) {
        zc_int710 = 0.48577602832458605;
    } else {
        zc_int710 = t2072->mX.mX[1181UL] * zc_int711;
    }
    if (t2072->mM.mX[323UL] != 0) {
        zc_int711 = 0.49432651125298638;
    } else {
        zc_int711 = t2072->mX.mX[1185UL] * BatteryPack_v2_ModuleAssembly2_Module22_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[324UL] != 0) {
        BatteryPack_v2_ModuleAssembly2_Module22_Cell_1_electricalModel4 = 0.48105363628921971;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module22_Cell_1_electricalModel4 = t2072->mX.mX[1189UL] * zc_int713;
    }
    if (t2072->mM.mX[325UL] != 0) {
        zc_int713 = 0.48350955709700882;
    } else {
        zc_int713 = t2072->mX.mX[1193UL] * BatteryPack_v2_ModuleAssembly2_Module_1_1_Cell_1_electricalMod4;
    }
    if (t2072->mM.mX[326UL] != 0) {
        BatteryPack_v2_ModuleAssembly2_Module_1_1_Cell_1_electricalMod4 = 0.48949752953548914;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module_1_1_Cell_1_electricalMod4 = t2072->mX.mX[1197UL] * zc_int715;
    }
    if (t2072->mM.mX[329UL] != 0) {
        zc_int715 = 0.49773455021651847;
    } else {
        zc_int715 = t2072->mX.mX[1201UL] * zc_int716;
    }
    if (t2072->mM.mX[330UL] != 0) {
        zc_int716 = 0.48372787049295074;
    } else {
        zc_int716 = t2072->mX.mX[1205UL] * zc_int717;
    }
    if (t2072->mM.mX[331UL] != 0) {
        zc_int717 = 0.49050126239518566;
    } else {
        zc_int717 = t2072->mX.mX[1209UL] * BatteryPack_v2_ModuleAssembly3_Module05_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[332UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module05_Cell_1_electricalModel4 = 0.47907354827555149;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module05_Cell_1_electricalModel4 = t2072->mX.mX[1213UL] * zc_int719;
    }
    if (t2072->mM.mX[333UL] != 0) {
        zc_int719 = 0.50354192615235527;
    } else {
        zc_int719 = t2072->mX.mX[1217UL] * BatteryPack_v2_ModuleAssembly3_Module07_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[334UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module07_Cell_1_electricalModel4 = 0.4905397332893553;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module07_Cell_1_electricalModel4 = t2072->mX.mX[1221UL] * BatteryPack_v2_ModuleAssembly3_Module08_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[335UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module08_Cell_1_electricalModel4 = 0.48822637182277157;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module08_Cell_1_electricalModel4 = t2072->mX.mX[1225UL] * zc_int722;
    }
    if (t2072->mM.mX[336UL] != 0) {
        zc_int722 = 0.49941004488756113;
    } else {
        zc_int722 = t2072->mX.mX[1229UL] * BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[337UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel4 = 0.48846562417584083;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel4 = t2072->mX.mX[1233UL] * BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[338UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel4 = 0.4936521469305003;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel4 = t2072->mX.mX[1237UL] * zc_int725;
    }
    if (t2072->mM.mX[340UL] != 0) {
        zc_int725 = 0.48694855410347487;
    } else {
        zc_int725 = t2072->mX.mX[1241UL] * BatteryPack_v2_ModuleAssembly3_Module13_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[341UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module13_Cell_1_electricalModel4 = 0.49551517853733484;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module13_Cell_1_electricalModel4 = t2072->mX.mX[1245UL] * BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[342UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel4 = 0.49655321727904378;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel4 = t2072->mX.mX[1249UL] * BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[343UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel4 = 0.49362784346213018;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel4 = t2072->mX.mX[1253UL] * zc_int729;
    }
    if (t2072->mM.mX[344UL] != 0) {
        zc_int729 = 0.48929496400859868;
    } else {
        zc_int729 = t2072->mX.mX[1257UL] * zc_int730;
    }
    if (t2072->mM.mX[345UL] != 0) {
        zc_int730 = 0.49110213801704644;
    } else {
        zc_int730 = t2072->mX.mX[1261UL] * zc_int731;
    }
    if (t2072->mM.mX[346UL] != 0) {
        zc_int731 = 0.478896865995319;
    } else {
        zc_int731 = t2072->mX.mX[1265UL] * zc_int732;
    }
    if (t2072->mM.mX[347UL] != 0) {
        zc_int732 = 0.495269491215231;
    } else {
        zc_int732 = t2072->mX.mX[1269UL] * BatteryPack_v2_ModuleAssembly3_Module20_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[348UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module20_Cell_1_electricalModel4 = 0.49358163231667551;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module20_Cell_1_electricalModel4 = t2072->mX.mX[1273UL] * zc_int734;
    }
    if (t2072->mM.mX[349UL] != 0) {
        zc_int734 = 0.49621535224211627;
    } else {
        zc_int734 = t2072->mX.mX[1277UL] * BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[351UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel4 = 0.48651655210233019;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel4 = t2072->mX.mX[1281UL] * BatteryPack_v2_ModuleAssembly3_Module23_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[352UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module23_Cell_1_electricalModel4 = 0.48075723365553391;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module23_Cell_1_electricalModel4 = t2072->mX.mX[1285UL] * zc_int737;
    }
    if (t2072->mM.mX[353UL] != 0) {
        zc_int737 = 0.49446970934633455;
    } else {
        zc_int737 = t2072->mX.mX[1289UL] * zc_int738;
    }
    if (t2072->mM.mX[354UL] != 0) {
        zc_int738 = 0.49834821781925431;
    } else {
        zc_int738 = t2072->mX.mX[1293UL] * zc_int739;
    }
    if (t2072->mM.mX[355UL] != 0) {
        zc_int739 = 0.49196719661728316;
    } else {
        zc_int739 = t2072->mX.mX[1297UL] * zc_int740;
    }
    if (t2072->mM.mX[356UL] != 0) {
        zc_int740 = 0.49953648138664253;
    } else {
        zc_int740 = t2072->mX.mX[1301UL] * BatteryPack_v2_ModuleAssembly4_Module05_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[357UL] != 0) {
        BatteryPack_v2_ModuleAssembly4_Module05_Cell_1_electricalModel4 = 0.48045114751741969;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module05_Cell_1_electricalModel4 = t2072->mX.mX[1305UL] * BatteryPack_v2_ModuleAssembly4_Module06_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[358UL] != 0) {
        BatteryPack_v2_ModuleAssembly4_Module06_Cell_1_electricalModel4 = 0.50150279888295413;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module06_Cell_1_electricalModel4 = t2072->mX.mX[1309UL] * zc_int743;
    }
    if (t2072->mM.mX[359UL] != 0) {
        zc_int743 = 0.48142353234042728;
    } else {
        zc_int743 = t2072->mX.mX[1313UL] * zc_int744;
    }
    if (t2072->mM.mX[360UL] != 0) {
        zc_int744 = 0.48995616207372;
    } else {
        zc_int744 = t2072->mX.mX[1317UL] * zc_int745;
    }
    if (t2072->mM.mX[362UL] != 0) {
        zc_int745 = 0.49948964152127878;
    } else {
        zc_int745 = t2072->mX.mX[1321UL] * zc_int746;
    }
    if (t2072->mM.mX[363UL] != 0) {
        zc_int746 = 0.49114415650191573;
    } else {
        zc_int746 = t2072->mX.mX[1325UL] * BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[364UL] != 0) {
        BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel4 = 0.5014413460019298;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel4 = t2072->mX.mX[1329UL] * BatteryPack_v2_ModuleAssembly4_Module12_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[365UL] != 0) {
        BatteryPack_v2_ModuleAssembly4_Module12_Cell_1_electricalModel4 = 0.49136767058727904;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module12_Cell_1_electricalModel4 = t2072->mX.mX[1333UL] * BatteryPack_v2_ModuleAssembly4_Module13_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[366UL] != 0) {
        BatteryPack_v2_ModuleAssembly4_Module13_Cell_1_electricalModel4 = 0.4835476149589179;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module13_Cell_1_electricalModel4 = t2072->mX.mX[1337UL] * zc_int750;
    }
    if (t2072->mM.mX[367UL] != 0) {
        zc_int750 = 0.50053382581187;
    } else {
        zc_int750 = t2072->mX.mX[1341UL] * BatteryPack_v2_ModuleAssembly4_Module15_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[368UL] != 0) {
        BatteryPack_v2_ModuleAssembly4_Module15_Cell_1_electricalModel4 = 0.48087915542311388;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module15_Cell_1_electricalModel4 = t2072->mX.mX[1345UL] * zc_int752;
    }
    if (t2072->mM.mX[369UL] != 0) {
        zc_int752 = 0.4953491451659181;
    } else {
        zc_int752 = t2072->mX.mX[1349UL] * BatteryPack_v2_ModuleAssembly4_Module17_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[370UL] != 0) {
        BatteryPack_v2_ModuleAssembly4_Module17_Cell_1_electricalModel4 = 0.48558924889005622;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module17_Cell_1_electricalModel4 = t2072->mX.mX[1353UL] * BatteryPack_v2_ModuleAssembly4_Module18_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[371UL] != 0) {
        BatteryPack_v2_ModuleAssembly4_Module18_Cell_1_electricalModel4 = 0.49396328784888693;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module18_Cell_1_electricalModel4 = t2072->mX.mX[1357UL] * zc_int755;
    }
    if (t2072->mM.mX[373UL] != 0) {
        zc_int755 = 0.49587399798647114;
    } else {
        zc_int755 = t2072->mX.mX[1361UL] * zc_int756;
    }
    if (t2072->mM.mX[374UL] != 0) {
        zc_int756 = 0.49015742496793885;
    } else {
        zc_int756 = t2072->mX.mX[1365UL] * BatteryPack_v2_ModuleAssembly4_Module21_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[375UL] != 0) {
        BatteryPack_v2_ModuleAssembly4_Module21_Cell_1_electricalModel4 = 0.49491195841074453;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module21_Cell_1_electricalModel4 = t2072->mX.mX[1369UL] * zc_int758;
    }
    if (t2072->mM.mX[376UL] != 0) {
        zc_int758 = 0.49159290336949957;
    } else {
        zc_int758 = t2072->mX.mX[1373UL] * zc_int759;
    }
    if (t2072->mM.mX[377UL] != 0) {
        zc_int759 = 0.49574057499556617;
    } else {
        zc_int759 = t2072->mX.mX[1377UL] * BatteryPack_v2_ModuleAssembly4_Module_1_1_Cell_1_electricalMod4;
    }
    if (t2072->mM.mX[378UL] != 0) {
        BatteryPack_v2_ModuleAssembly4_Module_1_1_Cell_1_electricalMod4 = 0.47995480369923554;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module_1_1_Cell_1_electricalMod4 = t2072->mX.mX[1381UL] * zc_int761;
    }
    if (t2072->mM.mX[379UL] != 0) {
        zc_int761 = 0.48730112337596226;
    } else {
        zc_int761 = t2072->mX.mX[1385UL] * BatteryPack_v2_ModuleAssembly5_Module03_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[380UL] != 0) {
        BatteryPack_v2_ModuleAssembly5_Module03_Cell_1_electricalModel4 = 0.48607956051025586;
    } else {
        BatteryPack_v2_ModuleAssembly5_Module03_Cell_1_electricalModel4 = t2072->mX.mX[1389UL] * zc_int763;
    }
    if (t2072->mM.mX[381UL] != 0) {
        zc_int763 = 0.48735696324892241;
    } else {
        zc_int763 = t2072->mX.mX[1393UL] * BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[382UL] != 0) {
        BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel4 = 0.49262621737503531;
    } else {
        BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel4 = t2072->mX.mX[1397UL] * zc_int765;
    }
    if (t2072->mM.mX[384UL] != 0) {
        zc_int765 = 0.48242420624144156;
    } else {
        zc_int765 = t2072->mX.mX[1401UL] * BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[385UL] != 0) {
        BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel4 = 0.50052837510850823;
    } else {
        BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel4 = t2072->mX.mX[1405UL] * zc_int767;
    }
    if (t2072->mM.mX[386UL] != 0) {
        zc_int767 = 0.48917712348818476;
    } else {
        zc_int767 = t2072->mX.mX[1409UL] * zc_int768;
    }
    if (t2072->mM.mX[387UL] != 0) {
        zc_int768 = 0.49130472419844096;
    } else {
        zc_int768 = t2072->mX.mX[1413UL] * zc_int769;
    }
    if (t2072->mM.mX[388UL] != 0) {
        zc_int769 = 0.49510082631393837;
    } else {
        zc_int769 = t2072->mX.mX[1417UL] * BatteryPack_v2_ModuleAssembly5_Module11_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[389UL] != 0) {
        BatteryPack_v2_ModuleAssembly5_Module11_Cell_1_electricalModel4 = 0.50293409549255352;
    } else {
        BatteryPack_v2_ModuleAssembly5_Module11_Cell_1_electricalModel4 = t2072->mX.mX[1421UL] * zc_int771;
    }
    if (t2072->mM.mX[390UL] != 0) {
        zc_int771 = 0.48718856843899006;
    } else {
        zc_int771 = t2072->mX.mX[1425UL] * BatteryPack_v2_ModuleAssembly5_Module13_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[391UL] != 0) {
        BatteryPack_v2_ModuleAssembly5_Module13_Cell_1_electricalModel4 = 0.49490224436029456;
    } else {
        BatteryPack_v2_ModuleAssembly5_Module13_Cell_1_electricalModel4 = t2072->mX.mX[1429UL] * zc_int773;
    }
    if (t2072->mM.mX[392UL] != 0) {
        zc_int773 = 0.50351471156916372;
    } else {
        zc_int773 = t2072->mX.mX[1433UL] * BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[393UL] != 0) {
        BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel4 = 0.48758599178313317;
    } else {
        BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel4 = t2072->mX.mX[1437UL] * BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[395UL] != 0) {
        BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel4 = 0.50092508294004634;
    } else {
        BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel4 = t2072->mX.mX[1441UL] * zc_int776;
    }
    if (t2072->mM.mX[396UL] != 0) {
        zc_int776 = 0.49564203598368572;
    } else {
        zc_int776 = t2072->mX.mX[1445UL] * BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[397UL] != 0) {
        BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel4 = 0.5009342069514453;
    } else {
        BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel4 = t2072->mX.mX[1449UL] * zc_int778;
    }
    if (t2072->mM.mX[398UL] != 0) {
        zc_int778 = 0.48056297622209138;
    } else {
        zc_int778 = t2072->mX.mX[1453UL] * zc_int779;
    }
    if (t2072->mM.mX[399UL] != 0) {
        zc_int779 = 0.49537218772034936;
    } else {
        zc_int779 = t2072->mX.mX[1457UL] * BatteryPack_v2_ModuleAssembly5_Module21_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[400UL] != 0) {
        BatteryPack_v2_ModuleAssembly5_Module21_Cell_1_electricalModel4 = 0.49026837136423429;
    } else {
        BatteryPack_v2_ModuleAssembly5_Module21_Cell_1_electricalModel4 = t2072->mX.mX[1461UL] * zc_int781;
    }
    if (t2072->mM.mX[401UL] != 0) {
        zc_int781 = 0.50261924689402282;
    } else {
        zc_int781 = t2072->mX.mX[1465UL] * zc_int782;
    }
    if (t2072->mM.mX[402UL] != 0) {
        zc_int782 = 0.49907398555642835;
    } else {
        zc_int782 = t2072->mX.mX[1469UL] * zc_int783;
    }
    if (t2072->mM.mX[403UL] != 0) {
        zc_int783 = 0.48187946340698151;
    } else {
        zc_int783 = t2072->mX.mX[1473UL] * zc_int784;
    }
    if (t2072->mM.mX[404UL] != 0) {
        zc_int784 = 0.48074683683123492;
    } else {
        zc_int784 = t2072->mX.mX[1477UL] * zc_int785;
    }
    if (t2072->mM.mX[406UL] != 0) {
        zc_int785 = 0.49029968653239764;
    } else {
        zc_int785 = t2072->mX.mX[1481UL] * zc_int786;
    }
    if (t2072->mM.mX[407UL] != 0) {
        zc_int786 = 0.48285796614728405;
    } else {
        zc_int786 = t2072->mX.mX[1485UL] * BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[408UL] != 0) {
        BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel4 = 0.48987002204167723;
    } else {
        BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel4 = t2072->mX.mX[1489UL] * zc_int788;
    }
    if (t2072->mM.mX[409UL] != 0) {
        zc_int788 = 0.4913020281087957;
    } else {
        zc_int788 = t2072->mX.mX[1493UL] * zc_int789;
    }
    if (t2072->mM.mX[410UL] != 0) {
        zc_int789 = 0.50050413917083081;
    } else {
        zc_int789 = t2072->mX.mX[1497UL] * zc_int790;
    }
    if (t2072->mM.mX[411UL] != 0) {
        zc_int790 = 0.48413954160435668;
    } else {
        zc_int790 = t2072->mX.mX[1501UL] * zc_int791;
    }
    if (t2072->mM.mX[412UL] != 0) {
        zc_int791 = 0.500635702736535;
    } else {
        zc_int791 = t2072->mX.mX[1505UL] * BatteryPack_v2_ModuleAssembly6_Module10_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[413UL] != 0) {
        BatteryPack_v2_ModuleAssembly6_Module10_Cell_1_electricalModel4 = 0.49641936074464893;
    } else {
        BatteryPack_v2_ModuleAssembly6_Module10_Cell_1_electricalModel4 = t2072->mX.mX[1509UL] * BatteryPack_v2_ModuleAssembly6_Module11_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[414UL] != 0) {
        BatteryPack_v2_ModuleAssembly6_Module11_Cell_1_electricalModel4 = 0.49677716619986467;
    } else {
        BatteryPack_v2_ModuleAssembly6_Module11_Cell_1_electricalModel4 = t2072->mX.mX[1513UL] * BatteryPack_v2_ModuleAssembly6_Module12_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[415UL] != 0) {
        BatteryPack_v2_ModuleAssembly6_Module12_Cell_1_electricalModel4 = 0.48894233026419071;
    } else {
        BatteryPack_v2_ModuleAssembly6_Module12_Cell_1_electricalModel4 = t2072->mX.mX[1517UL] * zc_int795;
    }
    if (t2072->mM.mX[417UL] != 0) {
        zc_int795 = 0.49016121619701847;
    } else {
        zc_int795 = t2072->mX.mX[1521UL] * BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[418UL] != 0) {
        BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel4 = 0.50334839172870494;
    } else {
        BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel4 = t2072->mX.mX[1525UL] * BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[419UL] != 0) {
        BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel4 = 0.4908656855926552;
    } else {
        BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel4 = t2072->mX.mX[1529UL] * BatteryPack_v2_ModuleAssembly6_Module16_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[420UL] != 0) {
        BatteryPack_v2_ModuleAssembly6_Module16_Cell_1_electricalModel4 = 0.48309577282193189;
    } else {
        BatteryPack_v2_ModuleAssembly6_Module16_Cell_1_electricalModel4 = t2072->mX.mX[1533UL] * BatteryPack_v2_ModuleAssembly6_Module17_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[421UL] != 0) {
        BatteryPack_v2_ModuleAssembly6_Module17_Cell_1_electricalModel4 = 0.48905174870449408;
    } else {
        BatteryPack_v2_ModuleAssembly6_Module17_Cell_1_electricalModel4 = t2072->mX.mX[1537UL] * zc_int800;
    }
    if (t2072->mM.mX[422UL] != 0) {
        zc_int800 = 0.48715470028609342;
    } else {
        zc_int800 = t2072->mX.mX[1541UL] * zc_int801;
    }
    if (t2072->mM.mX[423UL] != 0) {
        zc_int801 = 0.50218430090923971;
    } else {
        zc_int801 = t2072->mX.mX[1545UL] * BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[424UL] != 0) {
        BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel4 = 0.48047011337944262;
    } else {
        BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel4 = t2072->mX.mX[1549UL] * BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[425UL] != 0) {
        BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel4 = 0.48492991990634915;
    } else {
        BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel4 = t2072->mX.mX[1553UL] * BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel4;
    }
    if (t2072->mM.mX[426UL] != 0) {
        BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel4 = 0.47910303752898309;
    } else {
        BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel4 = t2072->mX.mX[1557UL] * zc_int805;
    }
    if (t2072->mM.mX[428UL] != 0) {
        zc_int805 = 0.49254050593341442;
    } else {
        zc_int805 = t2072->mX.mX[1561UL] * zc_int806;
    }
    if (t2072->mM.mX[429UL] != 0) {
        zc_int806 = 0.48175249233930711;
    } else {
        zc_int806 = t2072->mX.mX[1565UL] * BatteryPack_v2_ModuleAssembly_23_Module02_Cell_1_electricalMod4;
    }
    if (t2072->mM.mX[430UL] != 0) {
        BatteryPack_v2_ModuleAssembly_23_Module02_Cell_1_electricalMod4 = 0.48890852381079564;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module02_Cell_1_electricalMod4 = t2072->mX.mX[1569UL] * zc_int808;
    }
    if (t2072->mM.mX[431UL] != 0) {
        zc_int808 = 0.49265008176756675;
    } else {
        zc_int808 = t2072->mX.mX[1573UL] * BatteryPack_v2_ModuleAssembly_23_Module04_Cell_1_electricalMod4;
    }
    if (t2072->mM.mX[432UL] != 0) {
        BatteryPack_v2_ModuleAssembly_23_Module04_Cell_1_electricalMod4 = 0.48478284440779473;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module04_Cell_1_electricalMod4 = t2072->mX.mX[1577UL] * BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod4;
    }
    if (t2072->mM.mX[433UL] != 0) {
        BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod4 = 0.48703470514140323;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod4 = t2072->mX.mX[1581UL] * zc_int811;
    }
    if (t2072->mM.mX[434UL] != 0) {
        zc_int811 = 0.49373557573896837;
    } else {
        zc_int811 = t2072->mX.mX[1585UL] * BatteryPack_v2_ModuleAssembly_23_Module07_Cell_1_electricalMod4;
    }
    if (t2072->mM.mX[435UL] != 0) {
        BatteryPack_v2_ModuleAssembly_23_Module07_Cell_1_electricalMod4 = 0.49685871358295086;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module07_Cell_1_electricalMod4 = t2072->mX.mX[1589UL] * BatteryPack_v2_ModuleAssembly_23_Module08_Cell_1_electricalMod4;
    }
    if (t2072->mM.mX[436UL] != 0) {
        BatteryPack_v2_ModuleAssembly_23_Module08_Cell_1_electricalMod4 = 0.49417133187708734;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module08_Cell_1_electricalMod4 = t2072->mX.mX[1593UL] * BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod4;
    }
    if (t2072->mM.mX[437UL] != 0) {
        BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod4 = 0.48297390117228167;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod4 = t2072->mX.mX[1597UL] * BatteryPack_v2_ModuleAssembly_23_Module10_Cell_1_electricalMod4;
    }
    if (t2072->mM.mX[440UL] != 0) {
        BatteryPack_v2_ModuleAssembly_23_Module10_Cell_1_electricalMod4 = 0.49578373729274566;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module10_Cell_1_electricalMod4 = t2072->mX.mX[1601UL] * zc_int816;
    }
    if (t2072->mM.mX[441UL] != 0) {
        zc_int816 = 0.481712992859045;
    } else {
        zc_int816 = t2072->mX.mX[1605UL] * zc_int817;
    }
    if (t2072->mM.mX[442UL] != 0) {
        zc_int817 = 0.48699563302836729;
    } else {
        zc_int817 = t2072->mX.mX[1609UL] * BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod4;
    }
    if (t2072->mM.mX[443UL] != 0) {
        BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod4 = 0.50105067214845744;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod4 = t2072->mX.mX[1613UL] * BatteryPack_v2_ModuleAssembly_23_Module14_Cell_1_electricalMod4;
    }
    if (t2072->mM.mX[444UL] != 0) {
        BatteryPack_v2_ModuleAssembly_23_Module14_Cell_1_electricalMod4 = 0.49779505152128706;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module14_Cell_1_electricalMod4 = t2072->mX.mX[1617UL] * BatteryPack_v2_ModuleAssembly_23_Module15_Cell_1_electricalMod4;
    }
    if (t2072->mM.mX[445UL] != 0) {
        BatteryPack_v2_ModuleAssembly_23_Module15_Cell_1_electricalMod4 = 0.49022684441430947;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module15_Cell_1_electricalMod4 = t2072->mX.mX[1621UL] * BatteryPack_v2_ModuleAssembly_23_Module16_Cell_1_electricalMod4;
    }
    if (t2072->mM.mX[446UL] != 0) {
        BatteryPack_v2_ModuleAssembly_23_Module16_Cell_1_electricalMod4 = 0.49396710183581038;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module16_Cell_1_electricalMod4 = t2072->mX.mX[1625UL] * zc_int822;
    }
    if (t2072->mM.mX[447UL] != 0) {
        zc_int822 = 0.48003693700372313;
    } else {
        zc_int822 = t2072->mX.mX[1629UL] * BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod4;
    }
    if (t2072->mM.mX[448UL] != 0) {
        BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod4 = 0.48303684224888882;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod4 = t2072->mX.mX[1633UL] * zc_int824;
    }
    if (t2072->mM.mX[449UL] != 0) {
        zc_int824 = 0.50187697428167066;
    } else {
        zc_int824 = t2072->mX.mX[1637UL] * BatteryPack_v2_ModuleAssembly_23_Module20_Cell_1_electricalMod4;
    }
    if (t2072->mM.mX[451UL] != 0) {
        BatteryPack_v2_ModuleAssembly_23_Module20_Cell_1_electricalMod4 = 0.49639648521444291;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module20_Cell_1_electricalMod4 = t2072->mX.mX[1641UL] * zc_int826;
    }
    if (t2072->mM.mX[452UL] != 0) {
        zc_int826 = 0.50159660814577889;
    } else {
        zc_int826 = t2072->mX.mX[1645UL] * zc_int827;
    }
    if (t2072->mM.mX[453UL] != 0) {
        zc_int827 = 0.48234512563199461;
    } else {
        zc_int827 = t2066[0UL] * t2072->mX.mX[1649UL];
    }
    if (t2072->mM.mX[454UL] != 0) {
        BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod4 = 0.47887937459271129;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod4 = t1354[0UL] * t2072->mX.mX[1653UL];
    }
    intermediate_der82807 = t2072->mU.mX[0UL] * intermediate_der82811 * 0.002;
    intermediate_der82811 = t2072->mU.mX[0UL] * zc_int1 * 0.002;
    zc_int1 = t2072->mU.mX[0UL] * intrm_sf_mf_13 * 0.002;
    intrm_sf_mf_13 = t2072->mU.mX[0UL] * zc_int7 * 0.002;
    zc_int7 = t2072->mU.mX[0UL] * intermediate_der82828 * 0.002;
    intermediate_der82828 = t2072->mU.mX[0UL] * intrm_sf_mf_43 * 0.002;
    intrm_sf_mf_43 = t2072->mU.mX[0UL] * intrm_sf_mf_53 * 0.002;
    intrm_sf_mf_53 = t2072->mU.mX[0UL] * intermediate_der82840 * 0.002;
    intermediate_der82840 = t2072->mU.mX[0UL] * intrm_sf_mf_73 * 0.002;
    intrm_sf_mf_73 = t2072->mU.mX[0UL] * zc_int25 * 0.002;
    zc_int25 = t2072->mU.mX[0UL] * intermediate_der82852 * 0.002;
    intermediate_der82852 = t2072->mU.mX[0UL] * intrm_sf_mf_103 * 0.002;
    intrm_sf_mf_103 = t2072->mU.mX[0UL] * intrm_sf_mf_113 * 0.002;
    intrm_sf_mf_113 = t2072->mU.mX[0UL] * zc_int37 * 0.002;
    zc_int37 = t2072->mU.mX[0UL] * zc_int40 * 0.002;
    zc_int40 = t2072->mU.mX[0UL] * intermediate_der82870 * 0.002;
    intermediate_der82870 = t2072->mU.mX[0UL] * zc_int46 * 0.002;
    zc_int46 = t2072->mU.mX[0UL] * zc_int49 * 0.002;
    zc_int49 = t2072->mU.mX[0UL] * intrm_sf_mf_19 * 0.002;
    intrm_sf_mf_19 = t2072->mU.mX[0UL] * intrm_sf_mf_20 * 0.002;
    intrm_sf_mf_20 = t2072->mU.mX[0UL] * zc_int58 * 0.002;
    zc_int58 = t2072->mU.mX[0UL] * intrm_sf_mf_45 * 0.002;
    intrm_sf_mf_45 = t2072->mU.mX[0UL] * intermediate_der82900 * 0.002;
    intermediate_der82900 = t2072->mU.mX[0UL] * intermediate_der82904 * 0.002;
    intermediate_der82904 = t2072->mU.mX[0UL] * zc_int70 * 0.002;
    zc_int70 = t2072->mU.mX[0UL] * intermediate_der82912 * 0.002;
    intermediate_der82912 = t2072->mU.mX[0UL] * zc_int76 * 0.002;
    zc_int76 = t2072->mU.mX[0UL] * intrm_sf_mf_28 * 0.002;
    intrm_sf_mf_28 = t2072->mU.mX[0UL] * zc_int82 * 0.002;
    zc_int82 = t2072->mU.mX[0UL] * intermediate_der82927 * 0.002;
    intermediate_der82927 = t2072->mU.mX[0UL] * zc_int88 * 0.002;
    zc_int88 = t2072->mU.mX[0UL] * zc_int91 * 0.002;
    zc_int91 = t2072->mU.mX[0UL] * intrm_sf_mf_33 * 0.002;
    intrm_sf_mf_33 = t2072->mU.mX[0UL] * intrm_sf_mf_14 * 0.002;
    intrm_sf_mf_14 = t2072->mU.mX[0UL] * intrm_sf_mf_4 * 0.002;
    intrm_sf_mf_4 = t2072->mU.mX[0UL] * intermediate_der82951 * 0.002;
    intermediate_der82951 = t2072->mU.mX[0UL] * intermediate_der82956 * 0.002;
    intermediate_der82956 = t2072->mU.mX[0UL] * intermediate_der82959 * 0.002;
    intermediate_der82959 = t2072->mU.mX[0UL] * intermediate_der82964 * 0.002;
    intermediate_der82964 = t2072->mU.mX[0UL] * zc_int115 * 0.002;
    zc_int115 = t2072->mU.mX[0UL] * intrm_sf_mf_39 * 0.002;
    intrm_sf_mf_39 = t2072->mU.mX[0UL] * intermediate_der82976 * 0.002;
    intermediate_der82976 = t2072->mU.mX[0UL] * intermediate_der82979 * 0.002;
    intermediate_der82979 = t2072->mU.mX[0UL] * zc_int127 * 0.002;
    zc_int127 = t2072->mU.mX[0UL] * intrm_sf_mf_5 * 0.002;
    intrm_sf_mf_5 = t2072->mU.mX[0UL] * intrm_sf_mf_15 * 0.002;
    intrm_sf_mf_15 = t2072->mU.mX[0UL] * intermediate_der82995 * 0.002;
    intermediate_der82995 = t2072->mU.mX[0UL] * zc_int139 * 0.002;
    zc_int139 = t2072->mU.mX[0UL] * intrm_sf_mf_47 * 0.002;
    intrm_sf_mf_47 = t2072->mU.mX[0UL] * zc_int145 * 0.002;
    zc_int145 = t2072->mU.mX[0UL] * zc_int148 * 0.002;
    zc_int148 = t2072->mU.mX[0UL] * intermediate_der83016 * 0.002;
    intermediate_der83016 = t2072->mU.mX[0UL] * zc_int154 * 0.002;
    zc_int154 = t2072->mU.mX[0UL] * intrm_sf_mf_52 * 0.002;
    intrm_sf_mf_52 = t2072->mU.mX[0UL] * intrm_sf_mf_6 * 0.002;
    intrm_sf_mf_6 = t2072->mU.mX[0UL] * zc_int163 * 0.002;
    zc_int163 = t2072->mU.mX[0UL] * intrm_sf_mf_55 * 0.002;
    intrm_sf_mf_55 = t2072->mU.mX[0UL] * zc_int169 * 0.002;
    zc_int169 = t2072->mU.mX[0UL] * intrm_sf_mf_57 * 0.002;
    intrm_sf_mf_57 = t2072->mU.mX[0UL] * intermediate_der83046 * 0.002;
    intermediate_der83046 = t2072->mU.mX[0UL] * zc_int178 * 0.002;
    zc_int178 = t2072->mU.mX[0UL] * zc_int181 * 0.002;
    zc_int181 = t2072->mU.mX[0UL] * intrm_sf_mf_61 * 0.002;
    intrm_sf_mf_61 = t2072->mU.mX[0UL] * zc_int187 * 0.002;
    zc_int187 = t2072->mU.mX[0UL] * intrm_sf_mf_7 * 0.002;
    intrm_sf_mf_7 = t2072->mU.mX[0UL] * intrm_sf_mf_64 * 0.002;
    intrm_sf_mf_64 = t2072->mU.mX[0UL] * intermediate_der83074 * 0.002;
    intermediate_der83074 = t2072->mU.mX[0UL] * intermediate_der83079 * 0.002;
    intermediate_der83079 = t2072->mU.mX[0UL] * zc_int133 * 0.002;
    zc_int133 = t2072->mU.mX[0UL] * intermediate_der83089 * 0.002;
    intermediate_der83089 = t2072->mU.mX[0UL] * zc_int208 * 0.002;
    zc_int208 = t2072->mU.mX[0UL] * intermediate_der83095 * 0.002;
    intermediate_der83095 = t2072->mU.mX[0UL] * intrm_sf_mf_71 * 0.002;
    intrm_sf_mf_71 = t2072->mU.mX[0UL] * zc_int217 * 0.002;
    zc_int217 = t2072->mU.mX[0UL] * intermediate_der83108 * 0.002;
    intermediate_der83108 = t2072->mU.mX[0UL] * zc_int223 * 0.002;
    zc_int223 = t2072->mU.mX[0UL] * intermediate_der83116 * 0.002;
    intermediate_der83116 = t2072->mU.mX[0UL] * intermediate_der83119 * 0.002;
    intermediate_der83119 = t2072->mU.mX[0UL] * intermediate_der83125 * 0.002;
    intermediate_der83125 = t2072->mU.mX[0UL] * intrm_sf_mf_78 * 0.002;
    intrm_sf_mf_78 = t2072->mU.mX[0UL] * intrm_sf_mf_79 * 0.002;
    intrm_sf_mf_79 = t2072->mU.mX[0UL] * intermediate_der83136 * 0.002;
    intermediate_der83136 = t2072->mU.mX[0UL] * zc_int244 * 0.002;
    zc_int244 = t2072->mU.mX[0UL] * zc_int247 * 0.002;
    zc_int247 = t2072->mU.mX[0UL] * zc_int250 * 0.002;
    zc_int250 = t2072->mU.mX[0UL] * intrm_sf_mf_84 * 0.002;
    intrm_sf_mf_84 = t2072->mU.mX[0UL] * intermediate_der83156 * 0.002;
    intermediate_der83156 = t2072->mU.mX[0UL] * intrm_sf_mf_86 * 0.002;
    intrm_sf_mf_86 = t2072->mU.mX[0UL] * intermediate_der83163 * 0.002;
    intermediate_der83163 = t2072->mU.mX[0UL] * intermediate_der83168 * 0.002;
    intermediate_der83168 = t2072->mU.mX[0UL] * intrm_sf_mf_89 * 0.002;
    intrm_sf_mf_89 = t2072->mU.mX[0UL] * intrm_sf_mf_67 * 0.002;
    intrm_sf_mf_67 = t2072->mU.mX[0UL] * intermediate_der83179 * 0.002;
    intermediate_der83179 = t2072->mU.mX[0UL] * intrm_sf_mf_92 * 0.002;
    intrm_sf_mf_92 = t2072->mU.mX[0UL] * intrm_sf_mf_10 * 0.002;
    intrm_sf_mf_10 = t2072->mU.mX[0UL] * zc_int283 * 0.002;
    zc_int283 = t2072->mU.mX[0UL] * intrm_sf_mf_95 * 0.002;
    intrm_sf_mf_95 = t2072->mU.mX[0UL] * intermediate_der83199 * 0.002;
    intermediate_der83199 = t2072->mU.mX[0UL] * zc_int292 * 0.002;
    zc_int292 = t2072->mU.mX[0UL] * intrm_sf_mf_98 * 0.002;
    intrm_sf_mf_98 = t2072->mU.mX[0UL] * intermediate_der83212 * 0.002;
    intermediate_der83212 = t2072->mU.mX[0UL] * intermediate_der83215 * 0.002;
    intermediate_der83215 = t2072->mU.mX[0UL] * intermediate_der83221 * 0.002;
    intermediate_der83221 = t2072->mU.mX[0UL] * zc_int307 * 0.002;
    zc_int307 = t2072->mU.mX[0UL] * intermediate_der83227 * 0.002;
    intermediate_der83227 = t2072->mU.mX[0UL] * intermediate_der83231 * 0.002;
    intermediate_der83231 = t2072->mU.mX[0UL] * intermediate_der83236 * 0.002;
    intermediate_der83236 = t2072->mU.mX[0UL] * intermediate_der83240 * 0.002;
    intermediate_der83240 = t2072->mU.mX[0UL] * intrm_sf_mf_107 * 0.002;
    intrm_sf_mf_107 = t2072->mU.mX[0UL] * intrm_sf_mf_108 * 0.002;
    intrm_sf_mf_108 = t2072->mU.mX[0UL] * intermediate_der83251 * 0.002;
    intermediate_der83251 = t2072->mU.mX[0UL] * intrm_sf_mf_110 * 0.002;
    intrm_sf_mf_110 = t2072->mU.mX[0UL] * zc_int334 * 0.002;
    zc_int334 = t2072->mU.mX[0UL] * intermediate_der83264 * 0.002;
    intermediate_der83264 = t2072->mU.mX[0UL] * intermediate_der83267 * 0.002;
    intermediate_der83267 = t2072->mU.mX[0UL] * zc_int660 * 0.002;
    zc_int660 = t2072->mU.mX[0UL] * zc_int576 * 0.002;
    zc_int576 = t2072->mU.mX[0UL] * zc_int579 * 0.002;
    zc_int579 = t2072->mU.mX[0UL] * zc_int582 * 0.002;
    zc_int582 = t2072->mU.mX[0UL] * zc_int585 * 0.002;
    zc_int585 = t2072->mU.mX[0UL] * intermediate_der83292 * 0.002;
    intermediate_der83292 = t2072->mU.mX[0UL] * zc_int591 * 0.002;
    zc_int591 = t2072->mU.mX[0UL] * intrm_sf_mf_121 * 0.002;
    intrm_sf_mf_121 = t2072->mU.mX[0UL] * zc_int597 * 0.002;
    zc_int597 = t2072->mU.mX[0UL] * intermediate_der83307 * 0.002;
    intermediate_der83307 = t2072->mU.mX[0UL] * intermediate_der83311 * 0.002;
    intermediate_der83311 = t2072->mU.mX[0UL] * zc_int606 * 0.002;
    zc_int606 = t2072->mU.mX[0UL] * intrm_sf_mf_126 * 0.002;
    intrm_sf_mf_126 = t2072->mU.mX[0UL] * zc_int612 * 0.002;
    zc_int612 = t2072->mU.mX[0UL] * zc_int615 * 0.002;
    zc_int615 = t2072->mU.mX[0UL] * zc_int618 * 0.002;
    zc_int618 = t2072->mU.mX[0UL] * intermediate_der83335 * 0.002;
    intermediate_der83335 = t2072->mU.mX[0UL] * intermediate_der83339 * 0.002;
    intermediate_der83339 = t2072->mU.mX[0UL] * zc_int627 * 0.002;
    zc_int627 = t2072->mU.mX[0UL] * intrm_sf_mf_133 * 0.002;
    intrm_sf_mf_133 = t2072->mU.mX[0UL] * zc_int633 * 0.002;
    zc_int633 = t2072->mU.mX[0UL] * intermediate_der83355 * 0.002;
    intermediate_der83355 = t2072->mU.mX[0UL] * t2071 * 0.002;
    t2071 = -(real_T)(t2072->mU.mX[0UL] < 0.0);
    out->mDUF.mX[0UL] = t2071 / (intrm_sf_mf_137 == 0.0 ? 1.0E-16 : intrm_sf_mf_137);
    out->mDUF.mX[1UL] = t2071 / (BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel6 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel6);
    out->mDUF.mX[2UL] = t2071 / (zc_int693 == 0.0 ? 1.0E-16 : zc_int693);
    out->mDUF.mX[3UL] = t2071 / (zc_int694 == 0.0 ? 1.0E-16 : zc_int694);
    out->mDUF.mX[4UL] = t2071 / (BatteryPack_v2_ModuleAssembly2_Module05_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly2_Module05_Cell_1_electricalModel4);
    out->mDUF.mX[5UL] = t2071 / (zc_int696 == 0.0 ? 1.0E-16 : zc_int696);
    out->mDUF.mX[6UL] = t2071 / (zc_int697 == 0.0 ? 1.0E-16 : zc_int697);
    out->mDUF.mX[7UL] = t2071 / (BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel4);
    out->mDUF.mX[8UL] = t2071 / (zc_int699 == 0.0 ? 1.0E-16 : zc_int699);
    out->mDUF.mX[9UL] = t2071 / (BatteryPack_v2_ModuleAssembly2_Module10_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly2_Module10_Cell_1_electricalModel4);
    out->mDUF.mX[10UL] = t2071 / (zc_int701 == 0.0 ? 1.0E-16 : zc_int701);
    out->mDUF.mX[11UL] = t2071 / (BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel4);
    out->mDUF.mX[12UL] = t2071 / (BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel4);
    out->mDUF.mX[13UL] = t2071 / (zc_int704 == 0.0 ? 1.0E-16 : zc_int704);
    out->mDUF.mX[14UL] = t2071 / (BatteryPack_v2_ModuleAssembly2_Module15_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly2_Module15_Cell_1_electricalModel4);
    out->mDUF.mX[15UL] = t2071 / (zc_int706 == 0.0 ? 1.0E-16 : zc_int706);
    out->mDUF.mX[16UL] = t2071 / (zc_int707 == 0.0 ? 1.0E-16 : zc_int707);
    out->mDUF.mX[17UL] = t2071 / (zc_int708 == 0.0 ? 1.0E-16 : zc_int708);
    out->mDUF.mX[18UL] = t2071 / (zc_int709 == 0.0 ? 1.0E-16 : zc_int709);
    out->mDUF.mX[19UL] = t2071 / (zc_int710 == 0.0 ? 1.0E-16 : zc_int710);
    out->mDUF.mX[20UL] = t2071 / (zc_int711 == 0.0 ? 1.0E-16 : zc_int711);
    out->mDUF.mX[21UL] = t2071 / (BatteryPack_v2_ModuleAssembly2_Module22_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly2_Module22_Cell_1_electricalModel4);
    out->mDUF.mX[22UL] = t2071 / (zc_int713 == 0.0 ? 1.0E-16 : zc_int713);
    out->mDUF.mX[23UL] = t2071 / (BatteryPack_v2_ModuleAssembly2_Module_1_1_Cell_1_electricalMod4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly2_Module_1_1_Cell_1_electricalMod4);
    out->mDUF.mX[24UL] = t2071 / (zc_int715 == 0.0 ? 1.0E-16 : zc_int715);
    out->mDUF.mX[25UL] = t2071 / (zc_int716 == 0.0 ? 1.0E-16 : zc_int716);
    out->mDUF.mX[26UL] = t2071 / (zc_int717 == 0.0 ? 1.0E-16 : zc_int717);
    out->mDUF.mX[27UL] = t2071 / (BatteryPack_v2_ModuleAssembly3_Module05_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly3_Module05_Cell_1_electricalModel4);
    out->mDUF.mX[28UL] = t2071 / (zc_int719 == 0.0 ? 1.0E-16 : zc_int719);
    out->mDUF.mX[29UL] = t2071 / (BatteryPack_v2_ModuleAssembly3_Module07_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly3_Module07_Cell_1_electricalModel4);
    out->mDUF.mX[30UL] = t2071 / (BatteryPack_v2_ModuleAssembly3_Module08_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly3_Module08_Cell_1_electricalModel4);
    out->mDUF.mX[31UL] = t2071 / (zc_int722 == 0.0 ? 1.0E-16 : zc_int722);
    out->mDUF.mX[32UL] = t2071 / (BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel4);
    out->mDUF.mX[33UL] = t2071 / (BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel4);
    out->mDUF.mX[34UL] = t2071 / (zc_int725 == 0.0 ? 1.0E-16 : zc_int725);
    out->mDUF.mX[35UL] = t2071 / (BatteryPack_v2_ModuleAssembly3_Module13_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly3_Module13_Cell_1_electricalModel4);
    out->mDUF.mX[36UL] = t2071 / (BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel4);
    out->mDUF.mX[37UL] = t2071 / (BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel4);
    out->mDUF.mX[38UL] = t2071 / (zc_int729 == 0.0 ? 1.0E-16 : zc_int729);
    out->mDUF.mX[39UL] = t2071 / (zc_int730 == 0.0 ? 1.0E-16 : zc_int730);
    out->mDUF.mX[40UL] = t2071 / (zc_int731 == 0.0 ? 1.0E-16 : zc_int731);
    out->mDUF.mX[41UL] = t2071 / (zc_int732 == 0.0 ? 1.0E-16 : zc_int732);
    out->mDUF.mX[42UL] = t2071 / (BatteryPack_v2_ModuleAssembly3_Module20_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly3_Module20_Cell_1_electricalModel4);
    out->mDUF.mX[43UL] = t2071 / (zc_int734 == 0.0 ? 1.0E-16 : zc_int734);
    out->mDUF.mX[44UL] = t2071 / (BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel4);
    out->mDUF.mX[45UL] = t2071 / (BatteryPack_v2_ModuleAssembly3_Module23_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly3_Module23_Cell_1_electricalModel4);
    out->mDUF.mX[46UL] = t2071 / (zc_int737 == 0.0 ? 1.0E-16 : zc_int737);
    out->mDUF.mX[47UL] = t2071 / (zc_int738 == 0.0 ? 1.0E-16 : zc_int738);
    out->mDUF.mX[48UL] = t2071 / (zc_int739 == 0.0 ? 1.0E-16 : zc_int739);
    out->mDUF.mX[49UL] = t2071 / (zc_int740 == 0.0 ? 1.0E-16 : zc_int740);
    out->mDUF.mX[50UL] = t2071 / (BatteryPack_v2_ModuleAssembly4_Module05_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly4_Module05_Cell_1_electricalModel4);
    out->mDUF.mX[51UL] = t2071 / (BatteryPack_v2_ModuleAssembly4_Module06_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly4_Module06_Cell_1_electricalModel4);
    out->mDUF.mX[52UL] = t2071 / (zc_int743 == 0.0 ? 1.0E-16 : zc_int743);
    out->mDUF.mX[53UL] = t2071 / (zc_int744 == 0.0 ? 1.0E-16 : zc_int744);
    out->mDUF.mX[54UL] = t2071 / (zc_int745 == 0.0 ? 1.0E-16 : zc_int745);
    out->mDUF.mX[55UL] = t2071 / (zc_int746 == 0.0 ? 1.0E-16 : zc_int746);
    out->mDUF.mX[56UL] = t2071 / (BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel4);
    out->mDUF.mX[57UL] = t2071 / (BatteryPack_v2_ModuleAssembly4_Module12_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly4_Module12_Cell_1_electricalModel4);
    out->mDUF.mX[58UL] = t2071 / (BatteryPack_v2_ModuleAssembly4_Module13_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly4_Module13_Cell_1_electricalModel4);
    out->mDUF.mX[59UL] = t2071 / (zc_int750 == 0.0 ? 1.0E-16 : zc_int750);
    out->mDUF.mX[60UL] = t2071 / (BatteryPack_v2_ModuleAssembly4_Module15_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly4_Module15_Cell_1_electricalModel4);
    out->mDUF.mX[61UL] = t2071 / (zc_int752 == 0.0 ? 1.0E-16 : zc_int752);
    out->mDUF.mX[62UL] = t2071 / (BatteryPack_v2_ModuleAssembly4_Module17_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly4_Module17_Cell_1_electricalModel4);
    out->mDUF.mX[63UL] = t2071 / (BatteryPack_v2_ModuleAssembly4_Module18_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly4_Module18_Cell_1_electricalModel4);
    out->mDUF.mX[64UL] = t2071 / (zc_int755 == 0.0 ? 1.0E-16 : zc_int755);
    out->mDUF.mX[65UL] = t2071 / (zc_int756 == 0.0 ? 1.0E-16 : zc_int756);
    out->mDUF.mX[66UL] = t2071 / (BatteryPack_v2_ModuleAssembly4_Module21_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly4_Module21_Cell_1_electricalModel4);
    out->mDUF.mX[67UL] = t2071 / (zc_int758 == 0.0 ? 1.0E-16 : zc_int758);
    out->mDUF.mX[68UL] = t2071 / (zc_int759 == 0.0 ? 1.0E-16 : zc_int759);
    out->mDUF.mX[69UL] = t2071 / (BatteryPack_v2_ModuleAssembly4_Module_1_1_Cell_1_electricalMod4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly4_Module_1_1_Cell_1_electricalMod4);
    out->mDUF.mX[70UL] = t2071 / (zc_int761 == 0.0 ? 1.0E-16 : zc_int761);
    out->mDUF.mX[71UL] = t2071 / (BatteryPack_v2_ModuleAssembly5_Module03_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly5_Module03_Cell_1_electricalModel4);
    out->mDUF.mX[72UL] = t2071 / (zc_int763 == 0.0 ? 1.0E-16 : zc_int763);
    out->mDUF.mX[73UL] = t2071 / (BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel4);
    out->mDUF.mX[74UL] = t2071 / (zc_int765 == 0.0 ? 1.0E-16 : zc_int765);
    out->mDUF.mX[75UL] = t2071 / (BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel4);
    out->mDUF.mX[76UL] = t2071 / (zc_int767 == 0.0 ? 1.0E-16 : zc_int767);
    out->mDUF.mX[77UL] = t2071 / (zc_int768 == 0.0 ? 1.0E-16 : zc_int768);
    out->mDUF.mX[78UL] = t2071 / (zc_int769 == 0.0 ? 1.0E-16 : zc_int769);
    out->mDUF.mX[79UL] = t2071 / (BatteryPack_v2_ModuleAssembly5_Module11_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly5_Module11_Cell_1_electricalModel4);
    out->mDUF.mX[80UL] = t2071 / (zc_int771 == 0.0 ? 1.0E-16 : zc_int771);
    out->mDUF.mX[81UL] = t2071 / (BatteryPack_v2_ModuleAssembly5_Module13_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly5_Module13_Cell_1_electricalModel4);
    out->mDUF.mX[82UL] = t2071 / (zc_int773 == 0.0 ? 1.0E-16 : zc_int773);
    out->mDUF.mX[83UL] = t2071 / (BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel4);
    out->mDUF.mX[84UL] = t2071 / (BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel4);
    out->mDUF.mX[85UL] = t2071 / (zc_int776 == 0.0 ? 1.0E-16 : zc_int776);
    out->mDUF.mX[86UL] = t2071 / (BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel4);
    out->mDUF.mX[87UL] = t2071 / (zc_int778 == 0.0 ? 1.0E-16 : zc_int778);
    out->mDUF.mX[88UL] = t2071 / (zc_int779 == 0.0 ? 1.0E-16 : zc_int779);
    out->mDUF.mX[89UL] = t2071 / (BatteryPack_v2_ModuleAssembly5_Module21_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly5_Module21_Cell_1_electricalModel4);
    out->mDUF.mX[90UL] = t2071 / (zc_int781 == 0.0 ? 1.0E-16 : zc_int781);
    out->mDUF.mX[91UL] = t2071 / (zc_int782 == 0.0 ? 1.0E-16 : zc_int782);
    out->mDUF.mX[92UL] = t2071 / (zc_int783 == 0.0 ? 1.0E-16 : zc_int783);
    out->mDUF.mX[93UL] = t2071 / (zc_int784 == 0.0 ? 1.0E-16 : zc_int784);
    out->mDUF.mX[94UL] = t2071 / (zc_int785 == 0.0 ? 1.0E-16 : zc_int785);
    out->mDUF.mX[95UL] = t2071 / (zc_int786 == 0.0 ? 1.0E-16 : zc_int786);
    out->mDUF.mX[96UL] = t2071 / (BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel4);
    out->mDUF.mX[97UL] = t2071 / (zc_int788 == 0.0 ? 1.0E-16 : zc_int788);
    out->mDUF.mX[98UL] = t2071 / (zc_int789 == 0.0 ? 1.0E-16 : zc_int789);
    out->mDUF.mX[99UL] = t2071 / (zc_int790 == 0.0 ? 1.0E-16 : zc_int790);
    out->mDUF.mX[100UL] = t2071 / (zc_int791 == 0.0 ? 1.0E-16 : zc_int791);
    out->mDUF.mX[101UL] = t2071 / (BatteryPack_v2_ModuleAssembly6_Module10_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly6_Module10_Cell_1_electricalModel4);
    out->mDUF.mX[102UL] = t2071 / (BatteryPack_v2_ModuleAssembly6_Module11_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly6_Module11_Cell_1_electricalModel4);
    out->mDUF.mX[103UL] = t2071 / (BatteryPack_v2_ModuleAssembly6_Module12_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly6_Module12_Cell_1_electricalModel4);
    out->mDUF.mX[104UL] = t2071 / (zc_int795 == 0.0 ? 1.0E-16 : zc_int795);
    out->mDUF.mX[105UL] = t2071 / (BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel4);
    out->mDUF.mX[106UL] = t2071 / (BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel4);
    out->mDUF.mX[107UL] = t2071 / (BatteryPack_v2_ModuleAssembly6_Module16_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly6_Module16_Cell_1_electricalModel4);
    out->mDUF.mX[108UL] = t2071 / (BatteryPack_v2_ModuleAssembly6_Module17_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly6_Module17_Cell_1_electricalModel4);
    out->mDUF.mX[109UL] = t2071 / (zc_int800 == 0.0 ? 1.0E-16 : zc_int800);
    out->mDUF.mX[110UL] = t2071 / (zc_int801 == 0.0 ? 1.0E-16 : zc_int801);
    out->mDUF.mX[111UL] = t2071 / (BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel4);
    out->mDUF.mX[112UL] = t2071 / (BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel4);
    out->mDUF.mX[113UL] = t2071 / (BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel4);
    out->mDUF.mX[114UL] = t2071 / (zc_int805 == 0.0 ? 1.0E-16 : zc_int805);
    out->mDUF.mX[115UL] = t2071 / (zc_int806 == 0.0 ? 1.0E-16 : zc_int806);
    out->mDUF.mX[116UL] = t2071 / (BatteryPack_v2_ModuleAssembly_23_Module02_Cell_1_electricalMod4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly_23_Module02_Cell_1_electricalMod4);
    out->mDUF.mX[117UL] = t2071 / (zc_int808 == 0.0 ? 1.0E-16 : zc_int808);
    out->mDUF.mX[118UL] = t2071 / (BatteryPack_v2_ModuleAssembly_23_Module04_Cell_1_electricalMod4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly_23_Module04_Cell_1_electricalMod4);
    out->mDUF.mX[119UL] = t2071 / (BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod4);
    out->mDUF.mX[120UL] = t2071 / (zc_int811 == 0.0 ? 1.0E-16 : zc_int811);
    out->mDUF.mX[121UL] = t2071 / (BatteryPack_v2_ModuleAssembly_23_Module07_Cell_1_electricalMod4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly_23_Module07_Cell_1_electricalMod4);
    out->mDUF.mX[122UL] = t2071 / (BatteryPack_v2_ModuleAssembly_23_Module08_Cell_1_electricalMod4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly_23_Module08_Cell_1_electricalMod4);
    out->mDUF.mX[123UL] = t2071 / (BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod4);
    out->mDUF.mX[124UL] = t2071 / (BatteryPack_v2_ModuleAssembly_23_Module10_Cell_1_electricalMod4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly_23_Module10_Cell_1_electricalMod4);
    out->mDUF.mX[125UL] = t2071 / (zc_int816 == 0.0 ? 1.0E-16 : zc_int816);
    out->mDUF.mX[126UL] = t2071 / (zc_int817 == 0.0 ? 1.0E-16 : zc_int817);
    out->mDUF.mX[127UL] = t2071 / (BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod4);
    out->mDUF.mX[128UL] = t2071 / (BatteryPack_v2_ModuleAssembly_23_Module14_Cell_1_electricalMod4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly_23_Module14_Cell_1_electricalMod4);
    out->mDUF.mX[129UL] = t2071 / (BatteryPack_v2_ModuleAssembly_23_Module15_Cell_1_electricalMod4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly_23_Module15_Cell_1_electricalMod4);
    out->mDUF.mX[130UL] = t2071 / (BatteryPack_v2_ModuleAssembly_23_Module16_Cell_1_electricalMod4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly_23_Module16_Cell_1_electricalMod4);
    out->mDUF.mX[131UL] = t2071 / (zc_int822 == 0.0 ? 1.0E-16 : zc_int822);
    out->mDUF.mX[132UL] = t2071 / (BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod4);
    out->mDUF.mX[133UL] = t2071 / (zc_int824 == 0.0 ? 1.0E-16 : zc_int824);
    out->mDUF.mX[134UL] = t2071 / (BatteryPack_v2_ModuleAssembly_23_Module20_Cell_1_electricalMod4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly_23_Module20_Cell_1_electricalMod4);
    out->mDUF.mX[135UL] = t2071 / (zc_int826 == 0.0 ? 1.0E-16 : zc_int826);
    out->mDUF.mX[136UL] = t2071 / (zc_int827 == 0.0 ? 1.0E-16 : zc_int827);
    out->mDUF.mX[137UL] = t2071 / (BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod4 == 0.0 ? 1.0E-16 : BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod4);
    out->mDUF.mX[138UL] = -intermediate_der82807;
    out->mDUF.mX[139UL] = -intermediate_der82811;
    out->mDUF.mX[140UL] = -zc_int1;
    out->mDUF.mX[141UL] = -intrm_sf_mf_13;
    out->mDUF.mX[142UL] = -zc_int7;
    out->mDUF.mX[143UL] = -intermediate_der82828;
    out->mDUF.mX[144UL] = -intrm_sf_mf_43;
    out->mDUF.mX[145UL] = -intrm_sf_mf_53;
    out->mDUF.mX[146UL] = -intermediate_der82840;
    out->mDUF.mX[147UL] = -intrm_sf_mf_73;
    out->mDUF.mX[148UL] = -zc_int25;
    out->mDUF.mX[149UL] = -intermediate_der82852;
    out->mDUF.mX[150UL] = -intrm_sf_mf_103;
    out->mDUF.mX[151UL] = -intrm_sf_mf_113;
    out->mDUF.mX[152UL] = -zc_int37;
    out->mDUF.mX[153UL] = -zc_int40;
    out->mDUF.mX[154UL] = -intermediate_der82870;
    out->mDUF.mX[155UL] = -zc_int46;
    out->mDUF.mX[156UL] = -zc_int49;
    out->mDUF.mX[157UL] = -intrm_sf_mf_19;
    out->mDUF.mX[158UL] = -intrm_sf_mf_20;
    out->mDUF.mX[159UL] = -zc_int58;
    out->mDUF.mX[160UL] = -intrm_sf_mf_45;
    out->mDUF.mX[161UL] = -intermediate_der82900;
    out->mDUF.mX[162UL] = -intermediate_der82904;
    out->mDUF.mX[163UL] = -zc_int70;
    out->mDUF.mX[164UL] = -intermediate_der82912;
    out->mDUF.mX[165UL] = -zc_int76;
    out->mDUF.mX[166UL] = -intrm_sf_mf_28;
    out->mDUF.mX[167UL] = -zc_int82;
    out->mDUF.mX[168UL] = -intermediate_der82927;
    out->mDUF.mX[169UL] = -zc_int88;
    out->mDUF.mX[170UL] = -zc_int91;
    out->mDUF.mX[171UL] = -intrm_sf_mf_33;
    out->mDUF.mX[172UL] = -intrm_sf_mf_14;
    out->mDUF.mX[173UL] = -intrm_sf_mf_4;
    out->mDUF.mX[174UL] = -intermediate_der82951;
    out->mDUF.mX[175UL] = -intermediate_der82956;
    out->mDUF.mX[176UL] = -intermediate_der82959;
    out->mDUF.mX[177UL] = -intermediate_der82964;
    out->mDUF.mX[178UL] = -zc_int115;
    out->mDUF.mX[179UL] = -intrm_sf_mf_39;
    out->mDUF.mX[180UL] = -intermediate_der82976;
    out->mDUF.mX[181UL] = -intermediate_der82979;
    out->mDUF.mX[182UL] = -zc_int127;
    out->mDUF.mX[183UL] = -intrm_sf_mf_5;
    out->mDUF.mX[184UL] = -intrm_sf_mf_15;
    out->mDUF.mX[185UL] = -intermediate_der82995;
    out->mDUF.mX[186UL] = -zc_int139;
    out->mDUF.mX[187UL] = -intrm_sf_mf_47;
    out->mDUF.mX[188UL] = -zc_int145;
    out->mDUF.mX[189UL] = -zc_int148;
    out->mDUF.mX[190UL] = -intermediate_der83016;
    out->mDUF.mX[191UL] = -zc_int154;
    out->mDUF.mX[192UL] = -intrm_sf_mf_52;
    out->mDUF.mX[193UL] = -intrm_sf_mf_6;
    out->mDUF.mX[194UL] = -zc_int163;
    out->mDUF.mX[195UL] = -intrm_sf_mf_55;
    out->mDUF.mX[196UL] = -zc_int169;
    out->mDUF.mX[197UL] = -intrm_sf_mf_57;
    out->mDUF.mX[198UL] = -intermediate_der83046;
    out->mDUF.mX[199UL] = -zc_int178;
    out->mDUF.mX[200UL] = -zc_int181;
    out->mDUF.mX[201UL] = -intrm_sf_mf_61;
    out->mDUF.mX[202UL] = -zc_int187;
    out->mDUF.mX[203UL] = -intrm_sf_mf_7;
    out->mDUF.mX[204UL] = -intrm_sf_mf_64;
    out->mDUF.mX[205UL] = -intermediate_der83074;
    out->mDUF.mX[206UL] = -intermediate_der83079;
    out->mDUF.mX[207UL] = -zc_int133;
    out->mDUF.mX[208UL] = -intermediate_der83089;
    out->mDUF.mX[209UL] = -zc_int208;
    out->mDUF.mX[210UL] = -intermediate_der83095;
    out->mDUF.mX[211UL] = -intrm_sf_mf_71;
    out->mDUF.mX[212UL] = -zc_int217;
    out->mDUF.mX[213UL] = -intermediate_der83108;
    out->mDUF.mX[214UL] = -zc_int223;
    out->mDUF.mX[215UL] = -intermediate_der83116;
    out->mDUF.mX[216UL] = -intermediate_der83119;
    out->mDUF.mX[217UL] = -intermediate_der83125;
    out->mDUF.mX[218UL] = -intrm_sf_mf_78;
    out->mDUF.mX[219UL] = -intrm_sf_mf_79;
    out->mDUF.mX[220UL] = -intermediate_der83136;
    out->mDUF.mX[221UL] = -zc_int244;
    out->mDUF.mX[222UL] = -zc_int247;
    out->mDUF.mX[223UL] = -zc_int250;
    out->mDUF.mX[224UL] = -intrm_sf_mf_84;
    out->mDUF.mX[225UL] = -intermediate_der83156;
    out->mDUF.mX[226UL] = -intrm_sf_mf_86;
    out->mDUF.mX[227UL] = -intermediate_der83163;
    out->mDUF.mX[228UL] = -intermediate_der83168;
    out->mDUF.mX[229UL] = -intrm_sf_mf_89;
    out->mDUF.mX[230UL] = -intrm_sf_mf_67;
    out->mDUF.mX[231UL] = -intermediate_der83179;
    out->mDUF.mX[232UL] = -intrm_sf_mf_92;
    out->mDUF.mX[233UL] = -intrm_sf_mf_10;
    out->mDUF.mX[234UL] = -zc_int283;
    out->mDUF.mX[235UL] = -intrm_sf_mf_95;
    out->mDUF.mX[236UL] = -intermediate_der83199;
    out->mDUF.mX[237UL] = -zc_int292;
    out->mDUF.mX[238UL] = -intrm_sf_mf_98;
    out->mDUF.mX[239UL] = -intermediate_der83212;
    out->mDUF.mX[240UL] = -intermediate_der83215;
    out->mDUF.mX[241UL] = -intermediate_der83221;
    out->mDUF.mX[242UL] = -zc_int307;
    out->mDUF.mX[243UL] = -intermediate_der83227;
    out->mDUF.mX[244UL] = -intermediate_der83231;
    out->mDUF.mX[245UL] = -intermediate_der83236;
    out->mDUF.mX[246UL] = -intermediate_der83240;
    out->mDUF.mX[247UL] = -intrm_sf_mf_107;
    out->mDUF.mX[248UL] = -intrm_sf_mf_108;
    out->mDUF.mX[249UL] = -intermediate_der83251;
    out->mDUF.mX[250UL] = -intrm_sf_mf_110;
    out->mDUF.mX[251UL] = -zc_int334;
    out->mDUF.mX[252UL] = -intermediate_der83264;
    out->mDUF.mX[253UL] = -intermediate_der83267;
    out->mDUF.mX[254UL] = -zc_int660;
    out->mDUF.mX[255UL] = -zc_int576;
    out->mDUF.mX[256UL] = -zc_int579;
    out->mDUF.mX[257UL] = -zc_int582;
    out->mDUF.mX[258UL] = -zc_int585;
    out->mDUF.mX[259UL] = -intermediate_der83292;
    out->mDUF.mX[260UL] = -zc_int591;
    out->mDUF.mX[261UL] = -intrm_sf_mf_121;
    out->mDUF.mX[262UL] = -zc_int597;
    out->mDUF.mX[263UL] = -intermediate_der83307;
    out->mDUF.mX[264UL] = -intermediate_der83311;
    out->mDUF.mX[265UL] = -zc_int606;
    out->mDUF.mX[266UL] = -intrm_sf_mf_126;
    out->mDUF.mX[267UL] = -zc_int612;
    out->mDUF.mX[268UL] = -zc_int615;
    out->mDUF.mX[269UL] = -zc_int618;
    out->mDUF.mX[270UL] = -intermediate_der83335;
    out->mDUF.mX[271UL] = -intermediate_der83339;
    out->mDUF.mX[272UL] = -zc_int627;
    out->mDUF.mX[273UL] = -intrm_sf_mf_133;
    out->mDUF.mX[274UL] = -zc_int633;
    out->mDUF.mX[275UL] = -intermediate_der83355;
(void)LC;
    (void)out;
    return 0;}
