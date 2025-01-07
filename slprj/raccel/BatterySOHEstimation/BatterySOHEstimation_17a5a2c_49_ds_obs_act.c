#include "ne_ds.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_sys_struct.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_obs_act.h"
#include "BatterySOHEstimation_17a5a2c_49_ds.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_externals.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T BatterySOHEstimation_17a5a2c_49_ds_obs_act(const NeDynamicSystem *LC, const NeDynamicSystemInput *t3626, NeDsMethodOutput *out)
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
    real_T BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[5];
    real_T nonscalar2[3];
    real_T t1488[1];
    real_T t2179[1];
    real_T BatteryPack_v2_ModuleAssembly2_Module02_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module03_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module04_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module04_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module05_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module05_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module06_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module06_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module07_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module07_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module08_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module09_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module10_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module10_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module11_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module11_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module12_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module13_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module14_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module15_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module15_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module16_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module17_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module18_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module18_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module19_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module19_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module20_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module20_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module21_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module21_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module22_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module22_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module23_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module_1_1_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module_1_1_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module02_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module02_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module03_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module04_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module05_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module05_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module06_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module06_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module07_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module07_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module08_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module08_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module09_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module09_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module10_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module11_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module12_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module12_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module13_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module13_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module14_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module15_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module16_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module16_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module17_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module17_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module18_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module18_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module19_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module19_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module20_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module20_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module21_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module21_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module22_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module23_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module23_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module_1_1_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module_1_1_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module02_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module02_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module03_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module03_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module04_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module04_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module05_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module05_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module06_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module06_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module07_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module07_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module08_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module08_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module09_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module09_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module10_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module11_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module12_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module12_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module13_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module13_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module14_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module14_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module15_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module15_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module16_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module17_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module17_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module18_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module18_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module19_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module19_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module20_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module20_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module21_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module21_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module22_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module22_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module23_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module_1_1_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module_1_1_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module02_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module02_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module03_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module03_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module04_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module05_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module06_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module07_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module08_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module08_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module09_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module10_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module10_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module11_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module11_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module12_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module12_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module13_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module13_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module14_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module14_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module15_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module16_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module17_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module17_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module18_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module19_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module20_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module20_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module21_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module21_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module22_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module23_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module_1_1_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module_1_1_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module02_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module02_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module03_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module03_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module04_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module05_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module06_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module06_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module07_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module07_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module08_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module08_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module09_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module10_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module10_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module11_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module11_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module12_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module12_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module13_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module14_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module15_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module16_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module16_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module17_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module17_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module18_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module19_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module19_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module20_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module21_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module22_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module23_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module_1_1_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module_1_1_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module02_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module02_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module03_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module03_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module04_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module04_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module05_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3;
    real_T BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module06_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module06_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module07_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module07_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module08_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module08_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module09_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3;
    real_T BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module10_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module10_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module11_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module11_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module12_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module12_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module13_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3;
    real_T BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module14_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module14_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module15_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module15_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module16_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module16_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module17_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    real_T BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module18_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    real_T BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module19_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    real_T BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module20_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module20_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module21_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module21_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module22_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module22_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module23_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    real_T BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module_1_1_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3;
    real_T BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_thermalModel;
    real_T intrm_sf_mf_100;
    real_T intrm_sf_mf_102;
    real_T intrm_sf_mf_103;
    real_T intrm_sf_mf_104;
    real_T intrm_sf_mf_105;
    real_T intrm_sf_mf_107;
    real_T intrm_sf_mf_108;
    real_T intrm_sf_mf_109;
    real_T intrm_sf_mf_11;
    real_T intrm_sf_mf_110;
    real_T intrm_sf_mf_112;
    real_T intrm_sf_mf_113;
    real_T intrm_sf_mf_115;
    real_T intrm_sf_mf_126;
    real_T intrm_sf_mf_127;
    real_T intrm_sf_mf_13;
    real_T intrm_sf_mf_135;
    real_T intrm_sf_mf_136;
    real_T intrm_sf_mf_14;
    real_T intrm_sf_mf_18;
    real_T intrm_sf_mf_19;
    real_T intrm_sf_mf_20;
    real_T intrm_sf_mf_25;
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
    real_T intrm_sf_mf_75;
    real_T intrm_sf_mf_79;
    real_T intrm_sf_mf_80;
    real_T intrm_sf_mf_81;
    real_T intrm_sf_mf_83;
    real_T intrm_sf_mf_84;
    real_T intrm_sf_mf_85;
    real_T intrm_sf_mf_89;
    real_T intrm_sf_mf_92;
    real_T intrm_sf_mf_95;
    real_T intrm_sf_mf_96;
    real_T intrm_sf_mf_98;
    real_T intrm_sf_mf_99;
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
    real_T zc_int340;
    real_T zc_int348;
    real_T zc_int349;
    real_T zc_int35;
    real_T zc_int350;
    real_T zc_int353;
    real_T zc_int354;
    real_T zc_int355;
    real_T zc_int356;
    real_T zc_int357;
    real_T zc_int358;
    real_T zc_int360;
    real_T zc_int362;
    real_T zc_int365;
    real_T zc_int368;
    real_T zc_int373;
    real_T zc_int374;
    real_T zc_int375;
    real_T zc_int376;
    real_T zc_int377;
    real_T zc_int38;
    real_T zc_int382;
    real_T zc_int383;
    real_T zc_int384;
    real_T zc_int385;
    real_T zc_int387;
    real_T zc_int388;
    real_T zc_int393;
    real_T zc_int395;
    real_T zc_int396;
    real_T zc_int397;
    real_T zc_int40;
    real_T zc_int401;
    real_T zc_int403;
    real_T zc_int404;
    real_T zc_int405;
    real_T zc_int410;
    real_T zc_int414;
    real_T zc_int415;
    real_T zc_int416;
    real_T zc_int421;
    real_T zc_int422;
    real_T zc_int424;
    real_T zc_int425;
    real_T zc_int426;
    real_T zc_int428;
    real_T zc_int429;
    real_T zc_int431;
    real_T zc_int435;
    real_T zc_int436;
    real_T zc_int439;
    real_T zc_int44;
    real_T zc_int444;
    real_T zc_int452;
    real_T zc_int454;
    real_T zc_int455;
    real_T zc_int457;
    real_T zc_int46;
    real_T zc_int480;
    real_T zc_int481;
    real_T zc_int49;
    real_T zc_int51;
    real_T zc_int53;
    real_T zc_int55;
    real_T zc_int576;
    real_T zc_int579;
    real_T zc_int58;
    real_T zc_int580;
    real_T zc_int586;
    real_T zc_int588;
    real_T zc_int595;
    real_T zc_int598;
    real_T zc_int6;
    real_T zc_int600;
    real_T zc_int601;
    real_T zc_int606;
    real_T zc_int607;
    real_T zc_int612;
    real_T zc_int615;
    real_T zc_int618;
    real_T zc_int625;
    real_T zc_int628;
    real_T zc_int63;
    real_T zc_int631;
    real_T zc_int634;
    real_T zc_int639;
    real_T zc_int64;
    real_T zc_int641;
    real_T zc_int642;
    real_T zc_int643;
    real_T zc_int644;
    real_T zc_int646;
    real_T zc_int648;
    real_T zc_int650;
    real_T zc_int651;
    real_T zc_int652;
    real_T zc_int653;
    real_T zc_int654;
    real_T zc_int655;
    real_T zc_int661;
    real_T zc_int68;
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
    size_t t2773;
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
    BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[0] = 0.0;
    BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[1] = 0.0;
    BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[2] = 0.0;
    BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[3] = 0.0;
    BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[4] = 0.0;
    BatteryPack_v2_ModuleAssembly2_Module02_AmbientResistor_Q = t3626->mX.mX[0UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1107UL];
    t2245[0] = 7UL;
    t278[0] = 1UL;
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[0UL];
    t280[0] = 3UL;
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int454 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int455 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_thermalModel_Q = t3626->mX.mX[0UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module03_AmbientResistor_Q = t3626->mX.mX[8UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1111UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[8UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int10 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_thermalModel_Q = t3626->mX.mX[8UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module04_AmbientResistor_Q = t3626->mX.mX[16UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1115UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[16UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int30 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int40 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module04_Cell_1_thermalModel_Q = t3626->mX.mX[16UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module05_AmbientResistor_Q = t3626->mX.mX[24UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1119UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[24UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int8 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_3 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module05_Cell_1_thermalModel_Q = t3626->mX.mX[24UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module06_AmbientResistor_Q = t3626->mX.mX[32UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1123UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[32UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int110 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_4 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module06_Cell_1_thermalModel_Q = t3626->mX.mX[32UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module07_AmbientResistor_Q = t3626->mX.mX[40UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1127UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[40UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int120 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_5 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module07_Cell_1_thermalModel_Q = t3626->mX.mX[40UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module08_AmbientResistor_Q = t3626->mX.mX[48UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1131UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[48UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int161 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_thermalModel_Q = t3626->mX.mX[48UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module09_AmbientResistor_Q = t3626->mX.mX[56UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1135UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[56UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t222.mField0[0UL], &t222.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t222.mField0[0UL], &t222.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_7 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_thermalModel_Q = t3626->mX.mX[56UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module10_AmbientResistor_Q = t3626->mX.mX[64UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1139UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[64UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int212 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int221 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module10_Cell_1_thermalModel_Q = t3626->mX.mX[64UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module11_AmbientResistor_Q = t3626->mX.mX[72UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1143UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[72UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int242 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int250 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module11_Cell_1_thermalModel_Q = t3626->mX.mX[72UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module12_AmbientResistor_Q = t3626->mX.mX[80UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1147UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[80UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int281 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_thermalModel_Q = t3626->mX.mX[80UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module13_AmbientResistor_Q = t3626->mX.mX[88UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1151UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[88UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_11 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_thermalModel_Q = t3626->mX.mX[88UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module14_AmbientResistor_Q = t3626->mX.mX[96UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1155UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[96UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int340 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_thermalModel_Q = t3626->mX.mX[96UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module15_AmbientResistor_Q = t3626->mX.mX[104UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1159UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[104UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int360 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_13 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module15_Cell_1_thermalModel_Q = t3626->mX.mX[104UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module16_AmbientResistor_Q = t3626->mX.mX[112UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1163UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[112UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t96.mField0[0UL], &t96.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t96.mField0[0UL], &t96.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_14 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_thermalModel_Q = t3626->mX.mX[112UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module17_AmbientResistor_Q = t3626->mX.mX[120UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1167UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[120UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t222.mField0[0UL], &t222.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t222.mField0[0UL], &t222.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int63 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_thermalModel_Q = t3626->mX.mX[120UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module18_AmbientResistor_Q = t3626->mX.mX[128UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1171UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[128UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int46 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int436 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module18_Cell_1_thermalModel_Q = t3626->mX.mX[128UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module19_AmbientResistor_Q = t3626->mX.mX[136UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1175UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[136UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int49 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int435 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module19_Cell_1_thermalModel_Q = t3626->mX.mX[136UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module20_AmbientResistor_Q = t3626->mX.mX[144UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1179UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[144UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int53 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_18 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module20_Cell_1_thermalModel_Q = t3626->mX.mX[144UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module21_AmbientResistor_Q = t3626->mX.mX[152UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1183UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[152UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int55 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_19 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module21_Cell_1_thermalModel_Q = t3626->mX.mX[152UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module22_AmbientResistor_Q = t3626->mX.mX[160UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1187UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[160UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int58 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_20 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module22_Cell_1_thermalModel_Q = t3626->mX.mX[160UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module23_AmbientResistor_Q = t3626->mX.mX[168UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1191UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[168UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int431 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_thermalModel_Q = t3626->mX.mX[168UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module_1_1_AmbientResistor_Q = t3626->mX.mX[176UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1195UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[176UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t96.mField0[0UL], &t96.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int480 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t96.mField0[0UL], &t96.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int481 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly2_Module_1_1_Cell_1_thermalModel_Q = t3626->mX.mX[176UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module02_AmbientResistor_Q = t3626->mX.mX[184UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1199UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[184UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int68 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int429 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module02_Cell_1_thermalModel_Q = t3626->mX.mX[184UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module03_AmbientResistor_Q = t3626->mX.mX[192UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1203UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[192UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int428 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_thermalModel_Q = t3626->mX.mX[192UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module04_AmbientResistor_Q = t3626->mX.mX[200UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1207UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[200UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_25 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_thermalModel_Q = t3626->mX.mX[200UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module05_AmbientResistor_Q = t3626->mX.mX[208UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1211UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[208UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int77 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int426 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module05_Cell_1_thermalModel_Q = t3626->mX.mX[208UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module06_AmbientResistor_Q = t3626->mX.mX[216UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1215UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[216UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int80 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int425 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module06_Cell_1_thermalModel_Q = t3626->mX.mX[216UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module07_AmbientResistor_Q = t3626->mX.mX[224UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1219UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[224UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int83 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int424 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module07_Cell_1_thermalModel_Q = t3626->mX.mX[224UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module08_AmbientResistor_Q = t3626->mX.mX[232UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1223UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[232UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int86 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_29 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module08_Cell_1_thermalModel_Q = t3626->mX.mX[232UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module09_AmbientResistor_Q = t3626->mX.mX[240UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1227UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[240UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int89 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int422 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module09_Cell_1_thermalModel_Q = t3626->mX.mX[240UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module10_AmbientResistor_Q = t3626->mX.mX[248UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1231UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[248UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int421 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_thermalModel_Q = t3626->mX.mX[248UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module11_AmbientResistor_Q = t3626->mX.mX[256UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1235UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[256UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int44 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_thermalModel_Q = t3626->mX.mX[256UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module12_AmbientResistor_Q = t3626->mX.mX[264UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1239UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[264UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t222.mField0[0UL], &t222.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int97 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t222.mField0[0UL], &t222.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_33 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module12_Cell_1_thermalModel_Q = t3626->mX.mX[264UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module13_AmbientResistor_Q = t3626->mX.mX[272UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1243UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[272UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int102 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int99 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module13_Cell_1_thermalModel_Q = t3626->mX.mX[272UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module14_AmbientResistor_Q = t3626->mX.mX[280UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1247UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[280UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int114 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_thermalModel_Q = t3626->mX.mX[280UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module15_AmbientResistor_Q = t3626->mX.mX[288UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1251UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[288UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int118 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_thermalModel_Q = t3626->mX.mX[288UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module16_AmbientResistor_Q = t3626->mX.mX[296UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1255UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[296UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int121 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int128 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module16_Cell_1_thermalModel_Q = t3626->mX.mX[296UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module17_AmbientResistor_Q = t3626->mX.mX[304UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1259UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[304UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int134 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int13 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module17_Cell_1_thermalModel_Q = t3626->mX.mX[304UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module18_AmbientResistor_Q = t3626->mX.mX[312UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1263UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[312UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int133 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_39 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module18_Cell_1_thermalModel_Q = t3626->mX.mX[312UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module19_AmbientResistor_Q = t3626->mX.mX[320UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1267UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[320UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int146 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int147 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module19_Cell_1_thermalModel_Q = t3626->mX.mX[320UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module20_AmbientResistor_Q = t3626->mX.mX[328UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1271UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[328UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int148 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int155 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module20_Cell_1_thermalModel_Q = t3626->mX.mX[328UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module21_AmbientResistor_Q = t3626->mX.mX[336UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1275UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[336UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int154 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int164 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module21_Cell_1_thermalModel_Q = t3626->mX.mX[336UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module22_AmbientResistor_Q = t3626->mX.mX[344UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1279UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[344UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_43 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_thermalModel_Q = t3626->mX.mX[344UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module23_AmbientResistor_Q = t3626->mX.mX[352UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1283UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[352UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int171 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_44 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module23_Cell_1_thermalModel_Q = t3626->mX.mX[352UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module_1_1_AmbientResistor_Q = t3626->mX.mX[360UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1287UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[360UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int64 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int51 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly3_Module_1_1_Cell_1_thermalModel_Q = t3626->mX.mX[360UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module02_AmbientResistor_Q = t3626->mX.mX[368UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1291UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[368UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t270.mField0[0UL], &t270.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int177 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t270.mField0[0UL], &t270.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int178 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module02_Cell_1_thermalModel_Q = t3626->mX.mX[368UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module03_AmbientResistor_Q = t3626->mX.mX[376UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1295UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[376UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int183 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_47 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module03_Cell_1_thermalModel_Q = t3626->mX.mX[376UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module04_AmbientResistor_Q = t3626->mX.mX[384UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1299UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[384UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int192 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int200 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module04_Cell_1_thermalModel_Q = t3626->mX.mX[384UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module05_AmbientResistor_Q = t3626->mX.mX[392UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1303UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[392UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int195 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int203 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module05_Cell_1_thermalModel_Q = t3626->mX.mX[392UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module06_AmbientResistor_Q = t3626->mX.mX[400UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1307UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[400UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int202 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int207 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module06_Cell_1_thermalModel_Q = t3626->mX.mX[400UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module07_AmbientResistor_Q = t3626->mX.mX[408UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1311UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[408UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int208 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int211 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module07_Cell_1_thermalModel_Q = t3626->mX.mX[408UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module08_AmbientResistor_Q = t3626->mX.mX[416UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1315UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[416UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int218 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_52 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module08_Cell_1_thermalModel_Q = t3626->mX.mX[416UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module09_AmbientResistor_Q = t3626->mX.mX[424UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1319UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[424UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int22 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int225 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module09_Cell_1_thermalModel_Q = t3626->mX.mX[424UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module10_AmbientResistor_Q = t3626->mX.mX[432UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1323UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[432UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int236 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_thermalModel_Q = t3626->mX.mX[432UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module11_AmbientResistor_Q = t3626->mX.mX[440UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1327UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[440UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int24 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_thermalModel_Q = t3626->mX.mX[440UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module12_AmbientResistor_Q = t3626->mX.mX[448UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1331UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[448UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int243 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int248 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module12_Cell_1_thermalModel_Q = t3626->mX.mX[448UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module13_AmbientResistor_Q = t3626->mX.mX[456UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1335UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[456UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int247 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_57 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module13_Cell_1_thermalModel_Q = t3626->mX.mX[456UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module14_AmbientResistor_Q = t3626->mX.mX[464UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1339UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[464UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int253 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int258 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module14_Cell_1_thermalModel_Q = t3626->mX.mX[464UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module15_AmbientResistor_Q = t3626->mX.mX[472UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1343UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[472UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int262 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int265 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module15_Cell_1_thermalModel_Q = t3626->mX.mX[472UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module16_AmbientResistor_Q = t3626->mX.mX[480UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1347UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[480UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t270.mField0[0UL], &t270.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t270.mField0[0UL], &t270.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int273 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_thermalModel_Q = t3626->mX.mX[480UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module17_AmbientResistor_Q = t3626->mX.mX[488UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1351UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[488UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int276 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int279 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module17_Cell_1_thermalModel_Q = t3626->mX.mX[488UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module18_AmbientResistor_Q = t3626->mX.mX[496UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1355UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[496UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int290 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int283 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module18_Cell_1_thermalModel_Q = t3626->mX.mX[496UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module19_AmbientResistor_Q = t3626->mX.mX[504UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1359UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[504UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int293 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int289 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module19_Cell_1_thermalModel_Q = t3626->mX.mX[504UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module20_AmbientResistor_Q = t3626->mX.mX[512UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1363UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[512UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int299 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int3 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module20_Cell_1_thermalModel_Q = t3626->mX.mX[512UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module21_AmbientResistor_Q = t3626->mX.mX[520UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1367UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[520UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int301 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int304 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module21_Cell_1_thermalModel_Q = t3626->mX.mX[520UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module22_AmbientResistor_Q = t3626->mX.mX[528UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1371UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[528UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int314 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int320 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module22_Cell_1_thermalModel_Q = t3626->mX.mX[528UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module23_AmbientResistor_Q = t3626->mX.mX[536UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1375UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[536UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t231.mField0[0UL], &t231.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t231.mField0[0UL], &t231.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_67 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_thermalModel_Q = t3626->mX.mX[536UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module_1_1_AmbientResistor_Q = t3626->mX.mX[544UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1379UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[544UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int324 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int325 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly4_Module_1_1_Cell_1_thermalModel_Q = t3626->mX.mX[544UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module02_AmbientResistor_Q = t3626->mX.mX[552UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1383UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[552UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int35 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_69 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module02_Cell_1_thermalModel_Q = t3626->mX.mX[552UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module03_AmbientResistor_Q = t3626->mX.mX[560UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1387UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[560UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t231.mField0[0UL], &t231.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int334 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t231.mField0[0UL], &t231.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int350 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module03_Cell_1_thermalModel_Q = t3626->mX.mX[560UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module04_AmbientResistor_Q = t3626->mX.mX[568UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1391UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[568UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_71 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_thermalModel_Q = t3626->mX.mX[568UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module05_AmbientResistor_Q = t3626->mX.mX[576UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1395UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[576UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_72 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_thermalModel_Q = t3626->mX.mX[576UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module06_AmbientResistor_Q = t3626->mX.mX[584UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1399UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[584UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_73 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_thermalModel_Q = t3626->mX.mX[584UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module07_AmbientResistor_Q = t3626->mX.mX[592UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1403UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[592UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int348 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_thermalModel_Q = t3626->mX.mX[592UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module08_AmbientResistor_Q = t3626->mX.mX[600UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1407UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[600UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int349 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_75 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module08_Cell_1_thermalModel_Q = t3626->mX.mX[600UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module09_AmbientResistor_Q = t3626->mX.mX[608UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1411UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[608UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int353 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_thermalModel_Q = t3626->mX.mX[608UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module10_AmbientResistor_Q = t3626->mX.mX[616UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1415UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[616UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int354 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int355 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module10_Cell_1_thermalModel_Q = t3626->mX.mX[616UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module11_AmbientResistor_Q = t3626->mX.mX[624UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1419UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[624UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int356 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int357 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module11_Cell_1_thermalModel_Q = t3626->mX.mX[624UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module12_AmbientResistor_Q = t3626->mX.mX[632UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1423UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[632UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int358 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_79 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module12_Cell_1_thermalModel_Q = t3626->mX.mX[632UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module13_AmbientResistor_Q = t3626->mX.mX[640UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1427UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[640UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int38 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_80 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module13_Cell_1_thermalModel_Q = t3626->mX.mX[640UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module14_AmbientResistor_Q = t3626->mX.mX[648UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1431UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[648UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int362 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_81 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module14_Cell_1_thermalModel_Q = t3626->mX.mX[648UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module15_AmbientResistor_Q = t3626->mX.mX[656UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1435UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[656UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int365 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_thermalModel_Q = t3626->mX.mX[656UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module16_AmbientResistor_Q = t3626->mX.mX[664UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1439UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[664UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_83 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_thermalModel_Q = t3626->mX.mX[664UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module17_AmbientResistor_Q = t3626->mX.mX[672UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1443UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[672UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int368 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_84 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module17_Cell_1_thermalModel_Q = t3626->mX.mX[672UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module18_AmbientResistor_Q = t3626->mX.mX[680UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1447UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[680UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_85 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_thermalModel_Q = t3626->mX.mX[680UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module19_AmbientResistor_Q = t3626->mX.mX[688UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1451UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[688UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int373 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_thermalModel_Q = t3626->mX.mX[688UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module20_AmbientResistor_Q = t3626->mX.mX[696UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1455UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[696UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int374 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int375 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module20_Cell_1_thermalModel_Q = t3626->mX.mX[696UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module21_AmbientResistor_Q = t3626->mX.mX[704UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1459UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[704UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int376 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int377 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module21_Cell_1_thermalModel_Q = t3626->mX.mX[704UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module22_AmbientResistor_Q = t3626->mX.mX[712UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1463UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[712UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_89 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_thermalModel_Q = t3626->mX.mX[712UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module23_AmbientResistor_Q = t3626->mX.mX[720UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1467UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[720UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int382 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_thermalModel_Q = t3626->mX.mX[720UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module_1_1_AmbientResistor_Q = t3626->mX.mX[728UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1471UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[728UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int383 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int384 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly5_Module_1_1_Cell_1_thermalModel_Q = t3626->mX.mX[728UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module02_AmbientResistor_Q = t3626->mX.mX[736UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1475UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[736UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int385 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_92 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module02_Cell_1_thermalModel_Q = t3626->mX.mX[736UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module03_AmbientResistor_Q = t3626->mX.mX[744UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1479UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[744UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int387 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int388 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module03_Cell_1_thermalModel_Q = t3626->mX.mX[744UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module04_AmbientResistor_Q = t3626->mX.mX[752UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1483UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[752UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t270.mField0[0UL], &t270.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t270.mField0[0UL], &t270.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int410 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_thermalModel_Q = t3626->mX.mX[752UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module05_AmbientResistor_Q = t3626->mX.mX[760UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1487UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[760UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_95 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_thermalModel_Q = t3626->mX.mX[760UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module06_AmbientResistor_Q = t3626->mX.mX[768UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1491UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[768UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int393 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_96 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module06_Cell_1_thermalModel_Q = t3626->mX.mX[768UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module07_AmbientResistor_Q = t3626->mX.mX[776UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1495UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[776UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int395 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int396 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module07_Cell_1_thermalModel_Q = t3626->mX.mX[776UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module08_AmbientResistor_Q = t3626->mX.mX[784UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1499UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[784UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int397 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_98 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module08_Cell_1_thermalModel_Q = t3626->mX.mX[784UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module09_AmbientResistor_Q = t3626->mX.mX[792UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1503UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[792UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_99 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_thermalModel_Q = t3626->mX.mX[792UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module10_AmbientResistor_Q = t3626->mX.mX[800UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1507UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[800UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int401 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_100 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module10_Cell_1_thermalModel_Q = t3626->mX.mX[800UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module11_AmbientResistor_Q = t3626->mX.mX[808UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1511UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[808UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int403 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int404 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module11_Cell_1_thermalModel_Q = t3626->mX.mX[808UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module12_AmbientResistor_Q = t3626->mX.mX[816UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1515UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[816UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int405 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_102 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module12_Cell_1_thermalModel_Q = t3626->mX.mX[816UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module13_AmbientResistor_Q = t3626->mX.mX[824UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1519UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[824UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_103 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_thermalModel_Q = t3626->mX.mX[824UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module14_AmbientResistor_Q = t3626->mX.mX[832UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1523UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[832UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_104 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_thermalModel_Q = t3626->mX.mX[832UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module15_AmbientResistor_Q = t3626->mX.mX[840UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1527UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[840UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_105 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_thermalModel_Q = t3626->mX.mX[840UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module16_AmbientResistor_Q = t3626->mX.mX[848UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1531UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[848UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int414 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int415 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module16_Cell_1_thermalModel_Q = t3626->mX.mX[848UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module17_AmbientResistor_Q = t3626->mX.mX[856UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1535UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[856UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int416 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_107 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module17_Cell_1_thermalModel_Q = t3626->mX.mX[856UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module18_AmbientResistor_Q = t3626->mX.mX[864UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1539UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[864UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_108 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_thermalModel_Q = t3626->mX.mX[864UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module19_AmbientResistor_Q = t3626->mX.mX[872UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1543UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[872UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int439 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_109 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module19_Cell_1_thermalModel_Q = t3626->mX.mX[872UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module20_AmbientResistor_Q = t3626->mX.mX[880UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1547UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[880UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_110 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_thermalModel_Q = t3626->mX.mX[880UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module21_AmbientResistor_Q = t3626->mX.mX[888UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1551UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[888UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int444 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_thermalModel_Q = t3626->mX.mX[888UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module22_AmbientResistor_Q = t3626->mX.mX[896UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1555UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[896UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_112 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_thermalModel_Q = t3626->mX.mX[896UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module23_AmbientResistor_Q = t3626->mX.mX[904UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1559UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[904UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_113 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_thermalModel_Q = t3626->mX.mX[904UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module_1_1_AmbientResistor_Q = t3626->mX.mX[912UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1563UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[912UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int6 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int452 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly6_Module_1_1_Cell_1_thermalModel_Q = t3626->mX.mX[912UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module02_AmbientResistor_Q = t3626->mX.mX[920UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1567UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[920UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int661 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_115 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module02_Cell_1_thermalModel_Q = t3626->mX.mX[920UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module03_AmbientResistor_Q = t3626->mX.mX[928UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1571UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[928UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int576 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int580 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module03_Cell_1_thermalModel_Q = t3626->mX.mX[928UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module04_AmbientResistor_Q = t3626->mX.mX[936UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1575UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[936UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int579 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int586 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module04_Cell_1_thermalModel_Q = t3626->mX.mX[936UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module05_AmbientResistor_Q = t3626->mX.mX[944UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1579UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[944UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int588 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_thermalModel_Q = t3626->mX.mX[944UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module06_AmbientResistor_Q = t3626->mX.mX[952UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1583UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[952UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int595 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int598 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module06_Cell_1_thermalModel_Q = t3626->mX.mX[952UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module07_AmbientResistor_Q = t3626->mX.mX[960UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1587UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[960UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int601 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int600 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module07_Cell_1_thermalModel_Q = t3626->mX.mX[960UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module08_AmbientResistor_Q = t3626->mX.mX[968UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1591UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[968UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int607 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int606 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module08_Cell_1_thermalModel_Q = t3626->mX.mX[968UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module09_AmbientResistor_Q = t3626->mX.mX[976UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1595UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[976UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int612 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_thermalModel_Q = t3626->mX.mX[976UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module10_AmbientResistor_Q = t3626->mX.mX[984UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1599UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[984UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int615 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int618 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module10_Cell_1_thermalModel_Q = t3626->mX.mX[984UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module11_AmbientResistor_Q = t3626->mX.mX[992UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1603UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[992UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int625 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int628 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module11_Cell_1_thermalModel_Q = t3626->mX.mX[992UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module12_AmbientResistor_Q = t3626->mX.mX[1000UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1607UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[1000UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int631 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int634 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module12_Cell_1_thermalModel_Q = t3626->mX.mX[1000UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module13_AmbientResistor_Q = t3626->mX.mX[1008UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1611UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[1008UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_126 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_thermalModel_Q = t3626->mX.mX[1008UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module14_AmbientResistor_Q = t3626->mX.mX[1016UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1615UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[1016UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int639 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_127 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module14_Cell_1_thermalModel_Q = t3626->mX.mX[1016UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module15_AmbientResistor_Q = t3626->mX.mX[1024UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1619UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[1024UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int641 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int642 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module15_Cell_1_thermalModel_Q = t3626->mX.mX[1024UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module16_AmbientResistor_Q = t3626->mX.mX[1032UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1623UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[1032UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int643 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int644 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module16_Cell_1_thermalModel_Q = t3626->mX.mX[1032UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module17_AmbientResistor_Q = t3626->mX.mX[1040UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1627UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[1040UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int646 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_thermalModel_Q = t3626->mX.mX[1040UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module18_AmbientResistor_Q = t3626->mX.mX[1048UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1631UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[1048UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int648 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_thermalModel_Q = t3626->mX.mX[1048UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module19_AmbientResistor_Q = t3626->mX.mX[1056UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1635UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[1056UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int650 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_thermalModel_Q = t3626->mX.mX[1056UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module20_AmbientResistor_Q = t3626->mX.mX[1064UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1639UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[1064UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int651 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int652 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module20_Cell_1_thermalModel_Q = t3626->mX.mX[1064UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module21_AmbientResistor_Q = t3626->mX.mX[1072UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1643UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[1072UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int653 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int654 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module21_Cell_1_thermalModel_Q = t3626->mX.mX[1072UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module22_AmbientResistor_Q = t3626->mX.mX[1080UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1647UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[1080UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    zc_int655 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_135 = t2179[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module22_Cell_1_thermalModel_Q = t3626->mX.mX[1080UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module23_AmbientResistor_Q = t3626->mX.mX[1088UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1651UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[1088UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3 = t2179[0UL];
    tlu2_2d_linear_nearest_value(&t2179[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_thermalModel_Q = t3626->mX.mX[1088UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module_1_1_AmbientResistor_Q = t3626->mX.mX[1096UL] * 4.0E-5 + t3626->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t3626->mX.mX[1655UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2245[0UL], &t278[0UL]);
    t1488[0UL] = t3626->mX.mX[1096UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t1488[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3 = t1488[0UL];
    tlu2_2d_linear_nearest_value(&t1488[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2245[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_thermalModel = t3626->mX.mX[1096UL] * -4.0E-5 + t3626->mX.mX[1104UL] * 4.0E-5;
    if (t3626->mM.mX[0UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int457 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int457 = BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[1UL] != 0) {
        BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3 = t3626->mX.mX[1110UL] * zc_int10;
    }
    if (t3626->mM.mX[771UL] != 0) {
        zc_int10 = 8.200000000000002E-8;
    } else {
        zc_int10 = t3626->mX.mX[1122UL] * intrm_sf_mf_4;
    }
    if (t3626->mM.mX[738UL] != 0) {
        intrm_sf_mf_4 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_4 = t3626->mX.mX[1242UL] * zc_int99;
    }
    if (t3626->mM.mX[727UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int99 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int99 = zc_int102;
    }
    intrm_sf_mf_4 = (((((t3626->mU.mX[0UL] * intrm_sf_mf_4 + t3626->mX.mX[275UL]) + t3626->mX.mX[276UL]) + t3626->mX.mX[277UL]) + t3626->mX.mX[278UL]) + t3626->mX.mX[279UL]) + zc_int99;
    if (t3626->mM.mX[749UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int102 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int102 = BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[760UL] != 0) {
        zc_int99 = 8.200000000000002E-8;
    } else {
        zc_int99 = t3626->mX.mX[1246UL] * zc_int114;
    }
    zc_int102 += ((((t3626->mU.mX[0UL] * zc_int99 + t3626->mX.mX[283UL]) + t3626->mX.mX[284UL]) + t3626->mX.mX[285UL]) + t3626->mX.mX[286UL]) + t3626->mX.mX[287UL];
    if (t3626->mM.mX[772UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int99 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int99 = BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[783UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 = t3626->mX.mX[1250UL] * zc_int118;
    }
    zc_int99 += ((((t3626->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 + t3626->mX.mX[291UL]) + t3626->mX.mX[292UL]) + t3626->mX.mX[293UL]) + t3626->mX.mX[294UL]) + t3626->mX.mX[295UL];
    if (t3626->mM.mX[794UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 = zc_int121;
    }
    if (t3626->mM.mX[805UL] != 0) {
        zc_int114 = 8.200000000000002E-8;
    } else {
        zc_int114 = t3626->mX.mX[1254UL] * zc_int128;
    }
    if (t3626->mM.mX[660UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 = zc_int110;
    }
    zc_int10 = (((((t3626->mU.mX[0UL] * zc_int10 + t3626->mX.mX[35UL]) + t3626->mX.mX[36UL]) + t3626->mX.mX[37UL]) + t3626->mX.mX[38UL]) + t3626->mX.mX[39UL]) + BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3;
    zc_int110 = (((((t3626->mU.mX[0UL] * zc_int114 + t3626->mX.mX[299UL]) + t3626->mX.mX[300UL]) + t3626->mX.mX[301UL]) + t3626->mX.mX[302UL]) + t3626->mX.mX[303UL]) + BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3;
    if (t3626->mM.mX[816UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 = zc_int134;
    }
    if (t3626->mM.mX[827UL] != 0) {
        zc_int114 = 8.200000000000002E-8;
    } else {
        zc_int114 = t3626->mX.mX[1258UL] * zc_int13;
    }
    BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 += ((((t3626->mU.mX[0UL] * zc_int114 + t3626->mX.mX[307UL]) + t3626->mX.mX[308UL]) + t3626->mX.mX[309UL]) + t3626->mX.mX[310UL]) + t3626->mX.mX[311UL];
    if (t3626->mM.mX[838UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int114 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int114 = zc_int133;
    }
    if (t3626->mM.mX[849UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 = t3626->mX.mX[1262UL] * intrm_sf_mf_39;
    }
    zc_int114 += ((((t3626->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 + t3626->mX.mX[315UL]) + t3626->mX.mX[316UL]) + t3626->mX.mX[317UL]) + t3626->mX.mX[318UL]) + t3626->mX.mX[319UL];
    if (t3626->mM.mX[860UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 = zc_int146;
    }
    if (t3626->mM.mX[871UL] != 0) {
        zc_int118 = 8.200000000000002E-8;
    } else {
        zc_int118 = t3626->mX.mX[1266UL] * zc_int147;
    }
    BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 += ((((t3626->mU.mX[0UL] * zc_int118 + t3626->mX.mX[323UL]) + t3626->mX.mX[324UL]) + t3626->mX.mX[325UL]) + t3626->mX.mX[326UL]) + t3626->mX.mX[327UL];
    if (t3626->mM.mX[882UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int118 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int118 = zc_int120;
    }
    if (t3626->mM.mX[883UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int120 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int120 = zc_int148;
    }
    if (t3626->mM.mX[894UL] != 0) {
        zc_int121 = 8.200000000000002E-8;
    } else {
        zc_int121 = t3626->mX.mX[1270UL] * zc_int155;
    }
    zc_int120 += ((((t3626->mU.mX[0UL] * zc_int121 + t3626->mX.mX[331UL]) + t3626->mX.mX[332UL]) + t3626->mX.mX[333UL]) + t3626->mX.mX[334UL]) + t3626->mX.mX[335UL];
    if (t3626->mM.mX[905UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int121 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int121 = zc_int154;
    }
    if (t3626->mM.mX[916UL] != 0) {
        zc_int128 = 8.200000000000002E-8;
    } else {
        zc_int128 = t3626->mX.mX[1274UL] * zc_int164;
    }
    zc_int121 += ((((t3626->mU.mX[0UL] * zc_int128 + t3626->mX.mX[339UL]) + t3626->mX.mX[340UL]) + t3626->mX.mX[341UL]) + t3626->mX.mX[342UL]) + t3626->mX.mX[343UL];
    if (t3626->mM.mX[927UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int128 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int128 = BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[938UL] != 0) {
        zc_int134 = 8.200000000000002E-8;
    } else {
        zc_int134 = t3626->mX.mX[1278UL] * intrm_sf_mf_43;
    }
    zc_int128 += ((((t3626->mU.mX[0UL] * zc_int134 + t3626->mX.mX[347UL]) + t3626->mX.mX[348UL]) + t3626->mX.mX[349UL]) + t3626->mX.mX[350UL]) + t3626->mX.mX[351UL];
    if (t3626->mM.mX[949UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int134 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int134 = zc_int171;
    }
    if (t3626->mM.mX[993UL] != 0) {
        zc_int13 = 8.200000000000002E-8;
    } else {
        zc_int13 = t3626->mX.mX[1126UL] * intrm_sf_mf_5;
    }
    if (t3626->mM.mX[960UL] != 0) {
        intrm_sf_mf_5 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_5 = t3626->mX.mX[1282UL] * intrm_sf_mf_44;
    }
    intrm_sf_mf_5 = (((((t3626->mU.mX[0UL] * intrm_sf_mf_5 + t3626->mX.mX[355UL]) + t3626->mX.mX[356UL]) + t3626->mX.mX[357UL]) + t3626->mX.mX[358UL]) + t3626->mX.mX[359UL]) + zc_int134;
    if (t3626->mM.mX[971UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int134 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int134 = zc_int324;
    }
    if (t3626->mM.mX[982UL] != 0) {
        zc_int133 = 8.200000000000002E-8;
    } else {
        zc_int133 = t3626->mX.mX[1378UL] * zc_int325;
    }
    zc_int134 += ((((t3626->mU.mX[0UL] * zc_int133 + t3626->mX.mX[547UL]) + t3626->mX.mX[548UL]) + t3626->mX.mX[549UL]) + t3626->mX.mX[550UL]) + t3626->mX.mX[551UL];
    if (t3626->mM.mX[994UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int133 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int133 = zc_int177;
    }
    if (t3626->mM.mX[1005UL] != 0) {
        intrm_sf_mf_39 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_39 = t3626->mX.mX[1290UL] * zc_int178;
    }
    zc_int133 += ((((t3626->mU.mX[0UL] * intrm_sf_mf_39 + t3626->mX.mX[371UL]) + t3626->mX.mX[372UL]) + t3626->mX.mX[373UL]) + t3626->mX.mX[374UL]) + t3626->mX.mX[375UL];
    if (t3626->mM.mX[1016UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        intrm_sf_mf_39 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_39 = zc_int183;
    }
    if (t3626->mM.mX[1027UL] != 0) {
        zc_int146 = 8.200000000000002E-8;
    } else {
        zc_int146 = t3626->mX.mX[1294UL] * intrm_sf_mf_47;
    }
    zc_int118 += ((((t3626->mU.mX[0UL] * zc_int13 + t3626->mX.mX[43UL]) + t3626->mX.mX[44UL]) + t3626->mX.mX[45UL]) + t3626->mX.mX[46UL]) + t3626->mX.mX[47UL];
    zc_int13 = (((((t3626->mU.mX[0UL] * zc_int146 + t3626->mX.mX[379UL]) + t3626->mX.mX[380UL]) + t3626->mX.mX[381UL]) + t3626->mX.mX[382UL]) + t3626->mX.mX[383UL]) + intrm_sf_mf_39;
    if (t3626->mM.mX[1038UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        intrm_sf_mf_39 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_39 = zc_int192;
    }
    if (t3626->mM.mX[1049UL] != 0) {
        zc_int146 = 8.200000000000002E-8;
    } else {
        zc_int146 = t3626->mX.mX[1298UL] * zc_int200;
    }
    intrm_sf_mf_39 += ((((t3626->mU.mX[0UL] * zc_int146 + t3626->mX.mX[387UL]) + t3626->mX.mX[388UL]) + t3626->mX.mX[389UL]) + t3626->mX.mX[390UL]) + t3626->mX.mX[391UL];
    if (t3626->mM.mX[1060UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int146 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int146 = zc_int195;
    }
    if (t3626->mM.mX[1071UL] != 0) {
        zc_int147 = 8.200000000000002E-8;
    } else {
        zc_int147 = t3626->mX.mX[1302UL] * zc_int203;
    }
    zc_int146 += ((((t3626->mU.mX[0UL] * zc_int147 + t3626->mX.mX[395UL]) + t3626->mX.mX[396UL]) + t3626->mX.mX[397UL]) + t3626->mX.mX[398UL]) + t3626->mX.mX[399UL];
    if (t3626->mM.mX[1082UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int147 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int147 = zc_int202;
    }
    if (t3626->mM.mX[1093UL] != 0) {
        zc_int148 = 8.200000000000002E-8;
    } else {
        zc_int148 = t3626->mX.mX[1306UL] * zc_int207;
    }
    zc_int147 += ((((t3626->mU.mX[0UL] * zc_int148 + t3626->mX.mX[403UL]) + t3626->mX.mX[404UL]) + t3626->mX.mX[405UL]) + t3626->mX.mX[406UL]) + t3626->mX.mX[407UL];
    if (t3626->mM.mX[2UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int148 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int148 = BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[3UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3 = zc_int208;
    }
    if (t3626->mM.mX[14UL] != 0) {
        zc_int155 = 8.200000000000002E-8;
    } else {
        zc_int155 = t3626->mX.mX[1310UL] * zc_int211;
    }
    BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3 += ((((t3626->mU.mX[0UL] * zc_int155 + t3626->mX.mX[411UL]) + t3626->mX.mX[412UL]) + t3626->mX.mX[413UL]) + t3626->mX.mX[414UL]) + t3626->mX.mX[415UL];
    if (t3626->mM.mX[25UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int155 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int155 = zc_int218;
    }
    if (t3626->mM.mX[36UL] != 0) {
        zc_int154 = 8.200000000000002E-8;
    } else {
        zc_int154 = t3626->mX.mX[1314UL] * intrm_sf_mf_52;
    }
    zc_int155 += ((((t3626->mU.mX[0UL] * zc_int154 + t3626->mX.mX[419UL]) + t3626->mX.mX[420UL]) + t3626->mX.mX[421UL]) + t3626->mX.mX[422UL]) + t3626->mX.mX[423UL];
    if (t3626->mM.mX[47UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int154 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int154 = zc_int22;
    }
    if (t3626->mM.mX[58UL] != 0) {
        zc_int164 = 8.200000000000002E-8;
    } else {
        zc_int164 = t3626->mX.mX[1318UL] * zc_int225;
    }
    zc_int154 += ((((t3626->mU.mX[0UL] * zc_int164 + t3626->mX.mX[427UL]) + t3626->mX.mX[428UL]) + t3626->mX.mX[429UL]) + t3626->mX.mX[430UL]) + t3626->mX.mX[431UL];
    if (t3626->mM.mX[69UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int164 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int164 = BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[113UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3 = t3626->mX.mX[1130UL] * zc_int161;
    }
    if (t3626->mM.mX[80UL] != 0) {
        zc_int161 = 8.200000000000002E-8;
    } else {
        zc_int161 = t3626->mX.mX[1322UL] * zc_int236;
    }
    zc_int161 = (((((t3626->mU.mX[0UL] * zc_int161 + t3626->mX.mX[435UL]) + t3626->mX.mX[436UL]) + t3626->mX.mX[437UL]) + t3626->mX.mX[438UL]) + t3626->mX.mX[439UL]) + zc_int164;
    if (t3626->mM.mX[91UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int164 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int164 = BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[102UL] != 0) {
        intrm_sf_mf_43 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_43 = t3626->mX.mX[1326UL] * zc_int24;
    }
    zc_int164 += ((((t3626->mU.mX[0UL] * intrm_sf_mf_43 + t3626->mX.mX[443UL]) + t3626->mX.mX[444UL]) + t3626->mX.mX[445UL]) + t3626->mX.mX[446UL]) + t3626->mX.mX[447UL];
    if (t3626->mM.mX[114UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        intrm_sf_mf_43 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_43 = zc_int243;
    }
    if (t3626->mM.mX[119UL] != 0) {
        zc_int171 = 8.200000000000002E-8;
    } else {
        zc_int171 = t3626->mX.mX[1330UL] * zc_int248;
    }
    intrm_sf_mf_43 += ((((t3626->mU.mX[0UL] * zc_int171 + t3626->mX.mX[451UL]) + t3626->mX.mX[452UL]) + t3626->mX.mX[453UL]) + t3626->mX.mX[454UL]) + t3626->mX.mX[455UL];
    if (t3626->mM.mX[120UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int171 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int171 = zc_int247;
    }
    if (t3626->mM.mX[121UL] != 0) {
        intrm_sf_mf_44 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_44 = t3626->mX.mX[1334UL] * intrm_sf_mf_57;
    }
    zc_int148 += ((((t3626->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3 + t3626->mX.mX[51UL]) + t3626->mX.mX[52UL]) + t3626->mX.mX[53UL]) + t3626->mX.mX[54UL]) + t3626->mX.mX[55UL];
    BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3 = (((((t3626->mU.mX[0UL] * intrm_sf_mf_44 + t3626->mX.mX[459UL]) + t3626->mX.mX[460UL]) + t3626->mX.mX[461UL]) + t3626->mX.mX[462UL]) + t3626->mX.mX[463UL]) + zc_int171;
    if (t3626->mM.mX[122UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int171 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int171 = zc_int253;
    }
    if (t3626->mM.mX[123UL] != 0) {
        intrm_sf_mf_44 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_44 = t3626->mX.mX[1338UL] * zc_int258;
    }
    zc_int171 += ((((t3626->mU.mX[0UL] * intrm_sf_mf_44 + t3626->mX.mX[467UL]) + t3626->mX.mX[468UL]) + t3626->mX.mX[469UL]) + t3626->mX.mX[470UL]) + t3626->mX.mX[471UL];
    if (t3626->mM.mX[124UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        intrm_sf_mf_44 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_44 = zc_int262;
    }
    if (t3626->mM.mX[125UL] != 0) {
        zc_int177 = 8.200000000000002E-8;
    } else {
        zc_int177 = t3626->mX.mX[1342UL] * zc_int265;
    }
    intrm_sf_mf_44 += ((((t3626->mU.mX[0UL] * zc_int177 + t3626->mX.mX[475UL]) + t3626->mX.mX[476UL]) + t3626->mX.mX[477UL]) + t3626->mX.mX[478UL]) + t3626->mX.mX[479UL];
    if (t3626->mM.mX[126UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int177 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int177 = BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[127UL] != 0) {
        zc_int178 = 8.200000000000002E-8;
    } else {
        zc_int178 = t3626->mX.mX[1346UL] * zc_int273;
    }
    zc_int177 += ((((t3626->mU.mX[0UL] * zc_int178 + t3626->mX.mX[483UL]) + t3626->mX.mX[484UL]) + t3626->mX.mX[485UL]) + t3626->mX.mX[486UL]) + t3626->mX.mX[487UL];
    if (t3626->mM.mX[128UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int178 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int178 = BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[129UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3 = zc_int276;
    }
    if (t3626->mM.mX[130UL] != 0) {
        zc_int183 = 8.200000000000002E-8;
    } else {
        zc_int183 = t3626->mX.mX[1350UL] * zc_int279;
    }
    BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3 += ((((t3626->mU.mX[0UL] * zc_int183 + t3626->mX.mX[491UL]) + t3626->mX.mX[492UL]) + t3626->mX.mX[493UL]) + t3626->mX.mX[494UL]) + t3626->mX.mX[495UL];
    if (t3626->mM.mX[131UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int183 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int183 = zc_int290;
    }
    if (t3626->mM.mX[132UL] != 0) {
        intrm_sf_mf_47 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_47 = t3626->mX.mX[1354UL] * zc_int283;
    }
    zc_int183 += ((((t3626->mU.mX[0UL] * intrm_sf_mf_47 + t3626->mX.mX[499UL]) + t3626->mX.mX[500UL]) + t3626->mX.mX[501UL]) + t3626->mX.mX[502UL]) + t3626->mX.mX[503UL];
    if (t3626->mM.mX[133UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        intrm_sf_mf_47 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_47 = zc_int293;
    }
    if (t3626->mM.mX[134UL] != 0) {
        zc_int192 = 8.200000000000002E-8;
    } else {
        zc_int192 = t3626->mX.mX[1358UL] * zc_int289;
    }
    intrm_sf_mf_47 += ((((t3626->mU.mX[0UL] * zc_int192 + t3626->mX.mX[507UL]) + t3626->mX.mX[508UL]) + t3626->mX.mX[509UL]) + t3626->mX.mX[510UL]) + t3626->mX.mX[511UL];
    if (t3626->mM.mX[135UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int192 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int192 = zc_int299;
    }
    if (t3626->mM.mX[139UL] != 0) {
        zc_int200 = 8.200000000000002E-8;
    } else {
        zc_int200 = t3626->mX.mX[1134UL] * intrm_sf_mf_7;
    }
    if (t3626->mM.mX[136UL] != 0) {
        intrm_sf_mf_7 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_7 = t3626->mX.mX[1362UL] * zc_int3;
    }
    intrm_sf_mf_7 = (((((t3626->mU.mX[0UL] * intrm_sf_mf_7 + t3626->mX.mX[515UL]) + t3626->mX.mX[516UL]) + t3626->mX.mX[517UL]) + t3626->mX.mX[518UL]) + t3626->mX.mX[519UL]) + zc_int192;
    if (t3626->mM.mX[137UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int192 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int192 = zc_int301;
    }
    if (t3626->mM.mX[138UL] != 0) {
        zc_int195 = 8.200000000000002E-8;
    } else {
        zc_int195 = t3626->mX.mX[1366UL] * zc_int304;
    }
    zc_int192 += ((((t3626->mU.mX[0UL] * zc_int195 + t3626->mX.mX[523UL]) + t3626->mX.mX[524UL]) + t3626->mX.mX[525UL]) + t3626->mX.mX[526UL]) + t3626->mX.mX[527UL];
    if (t3626->mM.mX[140UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int195 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int195 = zc_int314;
    }
    if (t3626->mM.mX[141UL] != 0) {
        zc_int203 = 8.200000000000002E-8;
    } else {
        zc_int203 = t3626->mX.mX[1370UL] * zc_int320;
    }
    zc_int195 += ((((t3626->mU.mX[0UL] * zc_int203 + t3626->mX.mX[531UL]) + t3626->mX.mX[532UL]) + t3626->mX.mX[533UL]) + t3626->mX.mX[534UL]) + t3626->mX.mX[535UL];
    if (t3626->mM.mX[142UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int203 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int203 = BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[143UL] != 0) {
        zc_int202 = 8.200000000000002E-8;
    } else {
        zc_int202 = t3626->mX.mX[1374UL] * intrm_sf_mf_67;
    }
    BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3 = (((((t3626->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3 + t3626->mX.mX[11UL]) + t3626->mX.mX[12UL]) + t3626->mX.mX[13UL]) + t3626->mX.mX[14UL]) + t3626->mX.mX[15UL]) + zc_int457;
    zc_int178 += ((((t3626->mU.mX[0UL] * zc_int200 + t3626->mX.mX[59UL]) + t3626->mX.mX[60UL]) + t3626->mX.mX[61UL]) + t3626->mX.mX[62UL]) + t3626->mX.mX[63UL];
    zc_int200 = (((((t3626->mU.mX[0UL] * zc_int202 + t3626->mX.mX[539UL]) + t3626->mX.mX[540UL]) + t3626->mX.mX[541UL]) + t3626->mX.mX[542UL]) + t3626->mX.mX[543UL]) + zc_int203;
    if (t3626->mM.mX[144UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int203 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int203 = zc_int383;
    }
    if (t3626->mM.mX[145UL] != 0) {
        zc_int202 = 8.200000000000002E-8;
    } else {
        zc_int202 = t3626->mX.mX[1470UL] * zc_int384;
    }
    zc_int203 += ((((t3626->mU.mX[0UL] * zc_int202 + t3626->mX.mX[731UL]) + t3626->mX.mX[732UL]) + t3626->mX.mX[733UL]) + t3626->mX.mX[734UL]) + t3626->mX.mX[735UL];
    if (t3626->mM.mX[146UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int202 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int202 = zc_int35;
    }
    if (t3626->mM.mX[147UL] != 0) {
        zc_int207 = 8.200000000000002E-8;
    } else {
        zc_int207 = t3626->mX.mX[1382UL] * intrm_sf_mf_69;
    }
    zc_int202 += ((((t3626->mU.mX[0UL] * zc_int207 + t3626->mX.mX[555UL]) + t3626->mX.mX[556UL]) + t3626->mX.mX[557UL]) + t3626->mX.mX[558UL]) + t3626->mX.mX[559UL];
    if (t3626->mM.mX[148UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int207 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int207 = zc_int334;
    }
    if (t3626->mM.mX[149UL] != 0) {
        zc_int208 = 8.200000000000002E-8;
    } else {
        zc_int208 = t3626->mX.mX[1386UL] * zc_int350;
    }
    zc_int207 += ((((t3626->mU.mX[0UL] * zc_int208 + t3626->mX.mX[563UL]) + t3626->mX.mX[564UL]) + t3626->mX.mX[565UL]) + t3626->mX.mX[566UL]) + t3626->mX.mX[567UL];
    if (t3626->mM.mX[150UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int208 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int208 = zc_int212;
    }
    if (t3626->mM.mX[151UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int212 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int212 = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[152UL] != 0) {
        zc_int211 = 8.200000000000002E-8;
    } else {
        zc_int211 = t3626->mX.mX[1390UL] * intrm_sf_mf_71;
    }
    zc_int212 += ((((t3626->mU.mX[0UL] * zc_int211 + t3626->mX.mX[571UL]) + t3626->mX.mX[572UL]) + t3626->mX.mX[573UL]) + t3626->mX.mX[574UL]) + t3626->mX.mX[575UL];
    if (t3626->mM.mX[153UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int211 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int211 = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[154UL] != 0) {
        zc_int218 = 8.200000000000002E-8;
    } else {
        zc_int218 = t3626->mX.mX[1394UL] * intrm_sf_mf_72;
    }
    zc_int211 += ((((t3626->mU.mX[0UL] * zc_int218 + t3626->mX.mX[579UL]) + t3626->mX.mX[580UL]) + t3626->mX.mX[581UL]) + t3626->mX.mX[582UL]) + t3626->mX.mX[583UL];
    if (t3626->mM.mX[155UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int218 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int218 = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[156UL] != 0) {
        intrm_sf_mf_52 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_52 = t3626->mX.mX[1398UL] * intrm_sf_mf_73;
    }
    zc_int218 += ((((t3626->mU.mX[0UL] * intrm_sf_mf_52 + t3626->mX.mX[587UL]) + t3626->mX.mX[588UL]) + t3626->mX.mX[589UL]) + t3626->mX.mX[590UL]) + t3626->mX.mX[591UL];
    if (t3626->mM.mX[157UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        intrm_sf_mf_52 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_52 = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[161UL] != 0) {
        zc_int22 = 8.200000000000002E-8;
    } else {
        zc_int22 = t3626->mX.mX[1138UL] * zc_int221;
    }
    if (t3626->mM.mX[158UL] != 0) {
        zc_int221 = 8.200000000000002E-8;
    } else {
        zc_int221 = t3626->mX.mX[1402UL] * zc_int348;
    }
    zc_int221 = (((((t3626->mU.mX[0UL] * zc_int221 + t3626->mX.mX[595UL]) + t3626->mX.mX[596UL]) + t3626->mX.mX[597UL]) + t3626->mX.mX[598UL]) + t3626->mX.mX[599UL]) + intrm_sf_mf_52;
    if (t3626->mM.mX[159UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        intrm_sf_mf_52 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_52 = zc_int349;
    }
    if (t3626->mM.mX[160UL] != 0) {
        zc_int225 = 8.200000000000002E-8;
    } else {
        zc_int225 = t3626->mX.mX[1406UL] * intrm_sf_mf_75;
    }
    intrm_sf_mf_52 += ((((t3626->mU.mX[0UL] * zc_int225 + t3626->mX.mX[603UL]) + t3626->mX.mX[604UL]) + t3626->mX.mX[605UL]) + t3626->mX.mX[606UL]) + t3626->mX.mX[607UL];
    if (t3626->mM.mX[162UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int225 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int225 = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[163UL] != 0) {
        BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 = t3626->mX.mX[1410UL] * zc_int353;
    }
    zc_int225 += ((((t3626->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 + t3626->mX.mX[611UL]) + t3626->mX.mX[612UL]) + t3626->mX.mX[613UL]) + t3626->mX.mX[614UL]) + t3626->mX.mX[615UL];
    if (t3626->mM.mX[164UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 = zc_int354;
    }
    if (t3626->mM.mX[165UL] != 0) {
        zc_int236 = 8.200000000000002E-8;
    } else {
        zc_int236 = t3626->mX.mX[1414UL] * zc_int355;
    }
    zc_int208 += ((((t3626->mU.mX[0UL] * zc_int22 + t3626->mX.mX[67UL]) + t3626->mX.mX[68UL]) + t3626->mX.mX[69UL]) + t3626->mX.mX[70UL]) + t3626->mX.mX[71UL];
    zc_int22 = (((((t3626->mU.mX[0UL] * zc_int236 + t3626->mX.mX[619UL]) + t3626->mX.mX[620UL]) + t3626->mX.mX[621UL]) + t3626->mX.mX[622UL]) + t3626->mX.mX[623UL]) + BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3;
    if (t3626->mM.mX[166UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 = zc_int356;
    }
    if (t3626->mM.mX[167UL] != 0) {
        zc_int236 = 8.200000000000002E-8;
    } else {
        zc_int236 = t3626->mX.mX[1418UL] * zc_int357;
    }
    BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 += ((((t3626->mU.mX[0UL] * zc_int236 + t3626->mX.mX[627UL]) + t3626->mX.mX[628UL]) + t3626->mX.mX[629UL]) + t3626->mX.mX[630UL]) + t3626->mX.mX[631UL];
    if (t3626->mM.mX[168UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int236 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int236 = zc_int358;
    }
    if (t3626->mM.mX[169UL] != 0) {
        BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 = t3626->mX.mX[1422UL] * intrm_sf_mf_79;
    }
    zc_int236 += ((((t3626->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 + t3626->mX.mX[635UL]) + t3626->mX.mX[636UL]) + t3626->mX.mX[637UL]) + t3626->mX.mX[638UL]) + t3626->mX.mX[639UL];
    if (t3626->mM.mX[170UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 = zc_int38;
    }
    if (t3626->mM.mX[171UL] != 0) {
        zc_int24 = 8.200000000000002E-8;
    } else {
        zc_int24 = t3626->mX.mX[1426UL] * intrm_sf_mf_80;
    }
    BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 += ((((t3626->mU.mX[0UL] * zc_int24 + t3626->mX.mX[643UL]) + t3626->mX.mX[644UL]) + t3626->mX.mX[645UL]) + t3626->mX.mX[646UL]) + t3626->mX.mX[647UL];
    if (t3626->mM.mX[172UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int24 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int24 = zc_int242;
    }
    if (t3626->mM.mX[173UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int242 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int242 = zc_int362;
    }
    if (t3626->mM.mX[174UL] != 0) {
        zc_int243 = 8.200000000000002E-8;
    } else {
        zc_int243 = t3626->mX.mX[1430UL] * intrm_sf_mf_81;
    }
    zc_int242 += ((((t3626->mU.mX[0UL] * zc_int243 + t3626->mX.mX[651UL]) + t3626->mX.mX[652UL]) + t3626->mX.mX[653UL]) + t3626->mX.mX[654UL]) + t3626->mX.mX[655UL];
    if (t3626->mM.mX[175UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int243 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int243 = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[176UL] != 0) {
        zc_int248 = 8.200000000000002E-8;
    } else {
        zc_int248 = t3626->mX.mX[1434UL] * zc_int365;
    }
    zc_int243 += ((((t3626->mU.mX[0UL] * zc_int248 + t3626->mX.mX[659UL]) + t3626->mX.mX[660UL]) + t3626->mX.mX[661UL]) + t3626->mX.mX[662UL]) + t3626->mX.mX[663UL];
    if (t3626->mM.mX[177UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int248 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int248 = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[178UL] != 0) {
        zc_int247 = 8.200000000000002E-8;
    } else {
        zc_int247 = t3626->mX.mX[1438UL] * intrm_sf_mf_83;
    }
    zc_int248 += ((((t3626->mU.mX[0UL] * zc_int247 + t3626->mX.mX[667UL]) + t3626->mX.mX[668UL]) + t3626->mX.mX[669UL]) + t3626->mX.mX[670UL]) + t3626->mX.mX[671UL];
    if (t3626->mM.mX[179UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int247 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int247 = zc_int368;
    }
    if (t3626->mM.mX[183UL] != 0) {
        intrm_sf_mf_57 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_57 = t3626->mX.mX[1142UL] * zc_int250;
    }
    if (t3626->mM.mX[180UL] != 0) {
        zc_int250 = 8.200000000000002E-8;
    } else {
        zc_int250 = t3626->mX.mX[1442UL] * intrm_sf_mf_84;
    }
    zc_int250 = (((((t3626->mU.mX[0UL] * zc_int250 + t3626->mX.mX[675UL]) + t3626->mX.mX[676UL]) + t3626->mX.mX[677UL]) + t3626->mX.mX[678UL]) + t3626->mX.mX[679UL]) + zc_int247;
    if (t3626->mM.mX[181UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int247 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int247 = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[182UL] != 0) {
        zc_int253 = 8.200000000000002E-8;
    } else {
        zc_int253 = t3626->mX.mX[1446UL] * intrm_sf_mf_85;
    }
    zc_int247 += ((((t3626->mU.mX[0UL] * zc_int253 + t3626->mX.mX[683UL]) + t3626->mX.mX[684UL]) + t3626->mX.mX[685UL]) + t3626->mX.mX[686UL]) + t3626->mX.mX[687UL];
    if (t3626->mM.mX[184UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int253 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int253 = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[185UL] != 0) {
        zc_int258 = 8.200000000000002E-8;
    } else {
        zc_int258 = t3626->mX.mX[1450UL] * zc_int373;
    }
    zc_int253 += ((((t3626->mU.mX[0UL] * zc_int258 + t3626->mX.mX[691UL]) + t3626->mX.mX[692UL]) + t3626->mX.mX[693UL]) + t3626->mX.mX[694UL]) + t3626->mX.mX[695UL];
    if (t3626->mM.mX[186UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int258 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int258 = zc_int374;
    }
    if (t3626->mM.mX[187UL] != 0) {
        zc_int262 = 8.200000000000002E-8;
    } else {
        zc_int262 = t3626->mX.mX[1454UL] * zc_int375;
    }
    zc_int24 += ((((t3626->mU.mX[0UL] * intrm_sf_mf_57 + t3626->mX.mX[75UL]) + t3626->mX.mX[76UL]) + t3626->mX.mX[77UL]) + t3626->mX.mX[78UL]) + t3626->mX.mX[79UL];
    intrm_sf_mf_57 = (((((t3626->mU.mX[0UL] * zc_int262 + t3626->mX.mX[699UL]) + t3626->mX.mX[700UL]) + t3626->mX.mX[701UL]) + t3626->mX.mX[702UL]) + t3626->mX.mX[703UL]) + zc_int258;
    if (t3626->mM.mX[188UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int258 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int258 = zc_int376;
    }
    if (t3626->mM.mX[189UL] != 0) {
        zc_int262 = 8.200000000000002E-8;
    } else {
        zc_int262 = t3626->mX.mX[1458UL] * zc_int377;
    }
    zc_int258 += ((((t3626->mU.mX[0UL] * zc_int262 + t3626->mX.mX[707UL]) + t3626->mX.mX[708UL]) + t3626->mX.mX[709UL]) + t3626->mX.mX[710UL]) + t3626->mX.mX[711UL];
    if (t3626->mM.mX[190UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int262 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int262 = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[191UL] != 0) {
        zc_int265 = 8.200000000000002E-8;
    } else {
        zc_int265 = t3626->mX.mX[1462UL] * intrm_sf_mf_89;
    }
    zc_int262 += ((((t3626->mU.mX[0UL] * zc_int265 + t3626->mX.mX[715UL]) + t3626->mX.mX[716UL]) + t3626->mX.mX[717UL]) + t3626->mX.mX[718UL]) + t3626->mX.mX[719UL];
    if (t3626->mM.mX[192UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int265 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int265 = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[193UL] != 0) {
        BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 = t3626->mX.mX[1466UL] * zc_int382;
    }
    zc_int265 += ((((t3626->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 + t3626->mX.mX[723UL]) + t3626->mX.mX[724UL]) + t3626->mX.mX[725UL]) + t3626->mX.mX[726UL]) + t3626->mX.mX[727UL];
    if (t3626->mM.mX[194UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 = BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[195UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3 = zc_int6;
    }
    if (t3626->mM.mX[196UL] != 0) {
        zc_int273 = 8.200000000000002E-8;
    } else {
        zc_int273 = t3626->mX.mX[1562UL] * zc_int452;
    }
    BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3 += ((((t3626->mU.mX[0UL] * zc_int273 + t3626->mX.mX[915UL]) + t3626->mX.mX[916UL]) + t3626->mX.mX[917UL]) + t3626->mX.mX[918UL]) + t3626->mX.mX[919UL];
    if (t3626->mM.mX[197UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int273 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int273 = zc_int385;
    }
    if (t3626->mM.mX[198UL] != 0) {
        zc_int276 = 8.200000000000002E-8;
    } else {
        zc_int276 = t3626->mX.mX[1474UL] * intrm_sf_mf_92;
    }
    zc_int273 += ((((t3626->mU.mX[0UL] * zc_int276 + t3626->mX.mX[739UL]) + t3626->mX.mX[740UL]) + t3626->mX.mX[741UL]) + t3626->mX.mX[742UL]) + t3626->mX.mX[743UL];
    if (t3626->mM.mX[199UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int276 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int276 = zc_int387;
    }
    if (t3626->mM.mX[200UL] != 0) {
        zc_int279 = 8.200000000000002E-8;
    } else {
        zc_int279 = t3626->mX.mX[1478UL] * zc_int388;
    }
    zc_int276 += ((((t3626->mU.mX[0UL] * zc_int279 + t3626->mX.mX[747UL]) + t3626->mX.mX[748UL]) + t3626->mX.mX[749UL]) + t3626->mX.mX[750UL]) + t3626->mX.mX[751UL];
    if (t3626->mM.mX[201UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int279 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int279 = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[205UL] != 0) {
        zc_int290 = 8.200000000000002E-8;
    } else {
        zc_int290 = t3626->mX.mX[1146UL] * zc_int281;
    }
    if (t3626->mM.mX[202UL] != 0) {
        zc_int281 = 8.200000000000002E-8;
    } else {
        zc_int281 = t3626->mX.mX[1482UL] * zc_int410;
    }
    zc_int281 = (((((t3626->mU.mX[0UL] * zc_int281 + t3626->mX.mX[755UL]) + t3626->mX.mX[756UL]) + t3626->mX.mX[757UL]) + t3626->mX.mX[758UL]) + t3626->mX.mX[759UL]) + zc_int279;
    if (t3626->mM.mX[203UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int279 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int279 = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[204UL] != 0) {
        zc_int283 = 8.200000000000002E-8;
    } else {
        zc_int283 = t3626->mX.mX[1486UL] * intrm_sf_mf_95;
    }
    zc_int279 += ((((t3626->mU.mX[0UL] * zc_int283 + t3626->mX.mX[763UL]) + t3626->mX.mX[764UL]) + t3626->mX.mX[765UL]) + t3626->mX.mX[766UL]) + t3626->mX.mX[767UL];
    if (t3626->mM.mX[206UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int283 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int283 = zc_int393;
    }
    if (t3626->mM.mX[207UL] != 0) {
        zc_int293 = 8.200000000000002E-8;
    } else {
        zc_int293 = t3626->mX.mX[1490UL] * intrm_sf_mf_96;
    }
    zc_int283 += ((((t3626->mU.mX[0UL] * zc_int293 + t3626->mX.mX[771UL]) + t3626->mX.mX[772UL]) + t3626->mX.mX[773UL]) + t3626->mX.mX[774UL]) + t3626->mX.mX[775UL];
    if (t3626->mM.mX[208UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int293 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int293 = zc_int395;
    }
    if (t3626->mM.mX[209UL] != 0) {
        zc_int289 = 8.200000000000002E-8;
    } else {
        zc_int289 = t3626->mX.mX[1494UL] * zc_int396;
    }
    BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 += ((((t3626->mU.mX[0UL] * zc_int290 + t3626->mX.mX[83UL]) + t3626->mX.mX[84UL]) + t3626->mX.mX[85UL]) + t3626->mX.mX[86UL]) + t3626->mX.mX[87UL];
    zc_int290 = (((((t3626->mU.mX[0UL] * zc_int289 + t3626->mX.mX[779UL]) + t3626->mX.mX[780UL]) + t3626->mX.mX[781UL]) + t3626->mX.mX[782UL]) + t3626->mX.mX[783UL]) + zc_int293;
    if (t3626->mM.mX[210UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int293 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int293 = zc_int397;
    }
    if (t3626->mM.mX[211UL] != 0) {
        zc_int289 = 8.200000000000002E-8;
    } else {
        zc_int289 = t3626->mX.mX[1498UL] * intrm_sf_mf_98;
    }
    zc_int293 += ((((t3626->mU.mX[0UL] * zc_int289 + t3626->mX.mX[787UL]) + t3626->mX.mX[788UL]) + t3626->mX.mX[789UL]) + t3626->mX.mX[790UL]) + t3626->mX.mX[791UL];
    if (t3626->mM.mX[212UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int289 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int289 = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[213UL] != 0) {
        zc_int299 = 8.200000000000002E-8;
    } else {
        zc_int299 = t3626->mX.mX[1502UL] * intrm_sf_mf_99;
    }
    zc_int289 += ((((t3626->mU.mX[0UL] * zc_int299 + t3626->mX.mX[795UL]) + t3626->mX.mX[796UL]) + t3626->mX.mX[797UL]) + t3626->mX.mX[798UL]) + t3626->mX.mX[799UL];
    if (t3626->mM.mX[214UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int299 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int299 = zc_int401;
    }
    if (t3626->mM.mX[215UL] != 0) {
        zc_int3 = 8.200000000000002E-8;
    } else {
        zc_int3 = t3626->mX.mX[1506UL] * intrm_sf_mf_100;
    }
    zc_int299 += ((((t3626->mU.mX[0UL] * zc_int3 + t3626->mX.mX[803UL]) + t3626->mX.mX[804UL]) + t3626->mX.mX[805UL]) + t3626->mX.mX[806UL]) + t3626->mX.mX[807UL];
    if (t3626->mM.mX[216UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int3 = zc_int30;
    }
    if (t3626->mM.mX[217UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int30 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int30 = BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[218UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3 = zc_int403;
    }
    if (t3626->mM.mX[219UL] != 0) {
        zc_int301 = 8.200000000000002E-8;
    } else {
        zc_int301 = t3626->mX.mX[1510UL] * zc_int404;
    }
    BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3 += ((((t3626->mU.mX[0UL] * zc_int301 + t3626->mX.mX[811UL]) + t3626->mX.mX[812UL]) + t3626->mX.mX[813UL]) + t3626->mX.mX[814UL]) + t3626->mX.mX[815UL];
    if (t3626->mM.mX[220UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int301 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int301 = zc_int405;
    }
    if (t3626->mM.mX[221UL] != 0) {
        zc_int304 = 8.200000000000002E-8;
    } else {
        zc_int304 = t3626->mX.mX[1514UL] * intrm_sf_mf_102;
    }
    zc_int301 += ((((t3626->mU.mX[0UL] * zc_int304 + t3626->mX.mX[819UL]) + t3626->mX.mX[820UL]) + t3626->mX.mX[821UL]) + t3626->mX.mX[822UL]) + t3626->mX.mX[823UL];
    if (t3626->mM.mX[222UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int304 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int304 = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[223UL] != 0) {
        zc_int314 = 8.200000000000002E-8;
    } else {
        zc_int314 = t3626->mX.mX[1518UL] * intrm_sf_mf_103;
    }
    zc_int304 += ((((t3626->mU.mX[0UL] * zc_int314 + t3626->mX.mX[827UL]) + t3626->mX.mX[828UL]) + t3626->mX.mX[829UL]) + t3626->mX.mX[830UL]) + t3626->mX.mX[831UL];
    if (t3626->mM.mX[224UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int314 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int314 = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[228UL] != 0) {
        zc_int320 = 8.200000000000002E-8;
    } else {
        zc_int320 = t3626->mX.mX[1150UL] * intrm_sf_mf_11;
    }
    if (t3626->mM.mX[225UL] != 0) {
        intrm_sf_mf_11 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_11 = t3626->mX.mX[1522UL] * intrm_sf_mf_104;
    }
    intrm_sf_mf_11 = (((((t3626->mU.mX[0UL] * intrm_sf_mf_11 + t3626->mX.mX[835UL]) + t3626->mX.mX[836UL]) + t3626->mX.mX[837UL]) + t3626->mX.mX[838UL]) + t3626->mX.mX[839UL]) + zc_int314;
    if (t3626->mM.mX[226UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int314 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int314 = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[227UL] != 0) {
        BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 = t3626->mX.mX[1526UL] * intrm_sf_mf_105;
    }
    zc_int314 += ((((t3626->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 + t3626->mX.mX[843UL]) + t3626->mX.mX[844UL]) + t3626->mX.mX[845UL]) + t3626->mX.mX[846UL]) + t3626->mX.mX[847UL];
    if (t3626->mM.mX[229UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 = zc_int414;
    }
    if (t3626->mM.mX[230UL] != 0) {
        intrm_sf_mf_67 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_67 = t3626->mX.mX[1530UL] * zc_int415;
    }
    BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 += ((((t3626->mU.mX[0UL] * intrm_sf_mf_67 + t3626->mX.mX[851UL]) + t3626->mX.mX[852UL]) + t3626->mX.mX[853UL]) + t3626->mX.mX[854UL]) + t3626->mX.mX[855UL];
    if (t3626->mM.mX[231UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        intrm_sf_mf_67 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_67 = zc_int416;
    }
    if (t3626->mM.mX[232UL] != 0) {
        zc_int324 = 8.200000000000002E-8;
    } else {
        zc_int324 = t3626->mX.mX[1534UL] * intrm_sf_mf_107;
    }
    zc_int30 += ((((t3626->mU.mX[0UL] * zc_int320 + t3626->mX.mX[91UL]) + t3626->mX.mX[92UL]) + t3626->mX.mX[93UL]) + t3626->mX.mX[94UL]) + t3626->mX.mX[95UL];
    zc_int320 = (((((t3626->mU.mX[0UL] * zc_int324 + t3626->mX.mX[859UL]) + t3626->mX.mX[860UL]) + t3626->mX.mX[861UL]) + t3626->mX.mX[862UL]) + t3626->mX.mX[863UL]) + intrm_sf_mf_67;
    if (t3626->mM.mX[233UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        intrm_sf_mf_67 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_67 = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[234UL] != 0) {
        zc_int324 = 8.200000000000002E-8;
    } else {
        zc_int324 = t3626->mX.mX[1538UL] * intrm_sf_mf_108;
    }
    intrm_sf_mf_67 += ((((t3626->mU.mX[0UL] * zc_int324 + t3626->mX.mX[867UL]) + t3626->mX.mX[868UL]) + t3626->mX.mX[869UL]) + t3626->mX.mX[870UL]) + t3626->mX.mX[871UL];
    if (t3626->mM.mX[235UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int324 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int324 = zc_int439;
    }
    if (t3626->mM.mX[236UL] != 0) {
        zc_int325 = 8.200000000000002E-8;
    } else {
        zc_int325 = t3626->mX.mX[1542UL] * intrm_sf_mf_109;
    }
    zc_int324 += ((((t3626->mU.mX[0UL] * zc_int325 + t3626->mX.mX[875UL]) + t3626->mX.mX[876UL]) + t3626->mX.mX[877UL]) + t3626->mX.mX[878UL]) + t3626->mX.mX[879UL];
    if (t3626->mM.mX[237UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int325 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int325 = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[238UL] != 0) {
        zc_int35 = 8.200000000000002E-8;
    } else {
        zc_int35 = t3626->mX.mX[1546UL] * intrm_sf_mf_110;
    }
    zc_int325 += ((((t3626->mU.mX[0UL] * zc_int35 + t3626->mX.mX[883UL]) + t3626->mX.mX[884UL]) + t3626->mX.mX[885UL]) + t3626->mX.mX[886UL]) + t3626->mX.mX[887UL];
    if (t3626->mM.mX[239UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int35 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int35 = BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[240UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3 = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[241UL] != 0) {
        intrm_sf_mf_69 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_69 = t3626->mX.mX[1550UL] * zc_int444;
    }
    BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3 += ((((t3626->mU.mX[0UL] * intrm_sf_mf_69 + t3626->mX.mX[891UL]) + t3626->mX.mX[892UL]) + t3626->mX.mX[893UL]) + t3626->mX.mX[894UL]) + t3626->mX.mX[895UL];
    if (t3626->mM.mX[242UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        intrm_sf_mf_69 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_69 = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[243UL] != 0) {
        zc_int334 = 8.200000000000002E-8;
    } else {
        zc_int334 = t3626->mX.mX[1554UL] * intrm_sf_mf_112;
    }
    intrm_sf_mf_69 += ((((t3626->mU.mX[0UL] * zc_int334 + t3626->mX.mX[899UL]) + t3626->mX.mX[900UL]) + t3626->mX.mX[901UL]) + t3626->mX.mX[902UL]) + t3626->mX.mX[903UL];
    if (t3626->mM.mX[244UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int334 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int334 = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[245UL] != 0) {
        zc_int350 = 8.200000000000002E-8;
    } else {
        zc_int350 = t3626->mX.mX[1558UL] * intrm_sf_mf_113;
    }
    zc_int334 += ((((t3626->mU.mX[0UL] * zc_int350 + t3626->mX.mX[907UL]) + t3626->mX.mX[908UL]) + t3626->mX.mX[909UL]) + t3626->mX.mX[910UL]) + t3626->mX.mX[911UL];
    if (t3626->mM.mX[250UL] != 0) {
        zc_int350 = 8.200000000000002E-8;
    } else {
        zc_int350 = t3626->mX.mX[1154UL] * zc_int340;
    }
    zc_int340 = intrm_sf_mf_69 - (-zc_int334);
    BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3 = BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3 - (-zc_int340);
    intrm_sf_mf_71 = zc_int325 - (-BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3);
    BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3 = zc_int324 - (-intrm_sf_mf_71);
    intrm_sf_mf_72 = intrm_sf_mf_67 - (-BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3);
    BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3 = zc_int320 - (-intrm_sf_mf_72);
    intrm_sf_mf_73 = BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 - (-BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3);
    BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3 = zc_int314 - (-intrm_sf_mf_73);
    zc_int348 = intrm_sf_mf_11 - (-BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3);
    zc_int349 = zc_int304 - (-zc_int348);
    zc_int35 += ((((t3626->mU.mX[0UL] * zc_int350 + t3626->mX.mX[99UL]) + t3626->mX.mX[100UL]) + t3626->mX.mX[101UL]) + t3626->mX.mX[102UL]) + t3626->mX.mX[103UL];
    zc_int350 = zc_int301 - (-zc_int349);
    intrm_sf_mf_75 = BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3 - (-zc_int350);
    BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3 = zc_int299 - (-intrm_sf_mf_75);
    zc_int353 = zc_int289 - (-BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3);
    zc_int354 = zc_int293 - (-zc_int353);
    zc_int355 = zc_int290 - (-zc_int354);
    zc_int356 = zc_int283 - (-zc_int355);
    zc_int357 = zc_int279 - (-zc_int356);
    zc_int358 = zc_int281 - (-zc_int357);
    intrm_sf_mf_79 = zc_int276 - (-zc_int358);
    if (t3626->mM.mX[261UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
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
    if (t3626->mM.mX[272UL] != 0) {
        BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3 = t3626->mX.mX[1158UL] * intrm_sf_mf_13;
    }
    intrm_sf_mf_13 = zc_int243 - (-intrm_sf_mf_84);
    intrm_sf_mf_85 = zc_int242 - (-intrm_sf_mf_13);
    BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3 = BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 - (-intrm_sf_mf_85);
    zc_int373 = zc_int236 - (-BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3);
    zc_int374 = BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 - (-zc_int373);
    zc_int375 = zc_int22 - (-zc_int374);
    zc_int376 = zc_int225 - (-zc_int375);
    zc_int377 = intrm_sf_mf_52 - (-zc_int376);
    BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3 = zc_int221 - (-zc_int377);
    intrm_sf_mf_89 = zc_int218 - (-BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3);
    zc_int38 += ((((t3626->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3 + t3626->mX.mX[107UL]) + t3626->mX.mX[108UL]) + t3626->mX.mX[109UL]) + t3626->mX.mX[110UL]) + t3626->mX.mX[111UL];
    BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3 = zc_int211 - (-intrm_sf_mf_89);
    BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3 = zc_int212 - (-BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3);
    zc_int382 = zc_int207 - (-BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3);
    zc_int383 = zc_int202 - (-zc_int382);
    zc_int384 = zc_int203 - (-zc_int383);
    zc_int385 = zc_int200 - (-zc_int384);
    intrm_sf_mf_92 = zc_int195 - (-zc_int385);
    zc_int387 = zc_int192 - (-intrm_sf_mf_92);
    zc_int388 = intrm_sf_mf_7 - (-zc_int387);
    BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3 = intrm_sf_mf_47 - (-zc_int388);
    if (t3626->mM.mX[283UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int410 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int410 = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    }
    BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3 = zc_int183 - (-BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3);
    BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3 = BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3 - (-BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3);
    intrm_sf_mf_95 = zc_int177 - (-BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3);
    zc_int393 = intrm_sf_mf_44 - (-intrm_sf_mf_95);
    intrm_sf_mf_96 = zc_int171 - (-zc_int393);
    zc_int395 = BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3 - (-intrm_sf_mf_96);
    zc_int396 = intrm_sf_mf_43 - (-zc_int395);
    zc_int397 = zc_int164 - (-zc_int396);
    intrm_sf_mf_98 = zc_int161 - (-zc_int397);
    BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3 = zc_int154 - (-intrm_sf_mf_98);
    if (t3626->mM.mX[327UL] != 0) {
        intrm_sf_mf_99 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_99 = t3626->mX.mX[1114UL] * zc_int40;
    }
    if (t3626->mM.mX[294UL] != 0) {
        zc_int40 = 8.200000000000002E-8;
    } else {
        zc_int40 = t3626->mX.mX[1162UL] * intrm_sf_mf_14;
    }
    intrm_sf_mf_14 = zc_int155 - (-BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3);
    zc_int401 = BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3 - (-intrm_sf_mf_14);
    intrm_sf_mf_100 = zc_int147 - (-zc_int401);
    zc_int403 = zc_int146 - (-intrm_sf_mf_100);
    zc_int404 = intrm_sf_mf_39 - (-zc_int403);
    zc_int405 = zc_int13 - (-zc_int404);
    intrm_sf_mf_102 = zc_int133 - (-zc_int405);
    BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3 = zc_int134 - (-intrm_sf_mf_102);
    intrm_sf_mf_103 = intrm_sf_mf_5 - (-BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3);
    BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3 = zc_int128 - (-intrm_sf_mf_103);
    zc_int40 = (((((t3626->mU.mX[0UL] * zc_int40 + t3626->mX.mX[115UL]) + t3626->mX.mX[116UL]) + t3626->mX.mX[117UL]) + t3626->mX.mX[118UL]) + t3626->mX.mX[119UL]) + zc_int410;
    zc_int410 = zc_int121 - (-BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3);
    intrm_sf_mf_104 = zc_int120 - (-zc_int410);
    BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3 = BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 - (-intrm_sf_mf_104);
    intrm_sf_mf_105 = zc_int114 - (-BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3);
    zc_int414 = BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 - (-intrm_sf_mf_105);
    zc_int415 = zc_int110 - (-zc_int414);
    zc_int416 = zc_int99 - (-zc_int415);
    intrm_sf_mf_107 = zc_int102 - (-zc_int416);
    BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3 = intrm_sf_mf_4 - (-intrm_sf_mf_107);
    if (t3626->mM.mX[705UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        intrm_sf_mf_108 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_108 = zc_int97;
    }
    if (t3626->mM.mX[716UL] != 0) {
        zc_int97 = 8.200000000000002E-8;
    } else {
        zc_int97 = t3626->mX.mX[1238UL] * intrm_sf_mf_33;
    }
    zc_int97 = (((((t3626->mU.mX[0UL] * zc_int97 + t3626->mX.mX[267UL]) + t3626->mX.mX[268UL]) + t3626->mX.mX[269UL]) + t3626->mX.mX[270UL]) + t3626->mX.mX[271UL]) + intrm_sf_mf_108;
    intrm_sf_mf_33 = zc_int97 - (-BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3);
    if (t3626->mM.mX[305UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        intrm_sf_mf_108 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_108 = BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[683UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3 = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[694UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3 = t3626->mX.mX[1234UL] * zc_int44;
    }
    BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3 += ((((t3626->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3 + t3626->mX.mX[259UL]) + t3626->mX.mX[260UL]) + t3626->mX.mX[261UL]) + t3626->mX.mX[262UL]) + t3626->mX.mX[263UL];
    BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3 = BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3 - (-intrm_sf_mf_33);
    if (t3626->mM.mX[661UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int44 = BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[672UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3 = t3626->mX.mX[1230UL] * zc_int421;
    }
    BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3 = (((((t3626->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3 + t3626->mX.mX[251UL]) + t3626->mX.mX[252UL]) + t3626->mX.mX[253UL]) + t3626->mX.mX[254UL]) + t3626->mX.mX[255UL]) + zc_int44;
    zc_int421 = BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3 - (-BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3);
    if (t3626->mM.mX[638UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int44 = zc_int89;
    }
    if (t3626->mM.mX[649UL] != 0) {
        zc_int89 = 8.200000000000002E-8;
    } else {
        zc_int89 = t3626->mX.mX[1226UL] * zc_int422;
    }
    zc_int89 = (((((t3626->mU.mX[0UL] * zc_int89 + t3626->mX.mX[243UL]) + t3626->mX.mX[244UL]) + t3626->mX.mX[245UL]) + t3626->mX.mX[246UL]) + t3626->mX.mX[247UL]) + zc_int44;
    zc_int422 = zc_int89 - (-zc_int421);
    if (t3626->mM.mX[616UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int44 = zc_int86;
    }
    if (t3626->mM.mX[627UL] != 0) {
        zc_int86 = 8.200000000000002E-8;
    } else {
        zc_int86 = t3626->mX.mX[1222UL] * intrm_sf_mf_29;
    }
    zc_int86 = (((((t3626->mU.mX[0UL] * zc_int86 + t3626->mX.mX[235UL]) + t3626->mX.mX[236UL]) + t3626->mX.mX[237UL]) + t3626->mX.mX[238UL]) + t3626->mX.mX[239UL]) + zc_int44;
    intrm_sf_mf_29 = zc_int86 - (-zc_int422);
    if (t3626->mM.mX[594UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int44 = zc_int83;
    }
    if (t3626->mM.mX[605UL] != 0) {
        zc_int83 = 8.200000000000002E-8;
    } else {
        zc_int83 = t3626->mX.mX[1218UL] * zc_int424;
    }
    zc_int83 = (((((t3626->mU.mX[0UL] * zc_int83 + t3626->mX.mX[227UL]) + t3626->mX.mX[228UL]) + t3626->mX.mX[229UL]) + t3626->mX.mX[230UL]) + t3626->mX.mX[231UL]) + zc_int44;
    zc_int424 = zc_int83 - (-intrm_sf_mf_29);
    if (t3626->mM.mX[572UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int44 = zc_int80;
    }
    if (t3626->mM.mX[583UL] != 0) {
        zc_int80 = 8.200000000000002E-8;
    } else {
        zc_int80 = t3626->mX.mX[1214UL] * zc_int425;
    }
    zc_int80 = (((((t3626->mU.mX[0UL] * zc_int80 + t3626->mX.mX[219UL]) + t3626->mX.mX[220UL]) + t3626->mX.mX[221UL]) + t3626->mX.mX[222UL]) + t3626->mX.mX[223UL]) + zc_int44;
    zc_int425 = zc_int80 - (-zc_int424);
    if (t3626->mM.mX[550UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int44 = zc_int77;
    }
    if (t3626->mM.mX[561UL] != 0) {
        zc_int77 = 8.200000000000002E-8;
    } else {
        zc_int77 = t3626->mX.mX[1210UL] * zc_int426;
    }
    zc_int77 = (((((t3626->mU.mX[0UL] * zc_int77 + t3626->mX.mX[211UL]) + t3626->mX.mX[212UL]) + t3626->mX.mX[213UL]) + t3626->mX.mX[214UL]) + t3626->mX.mX[215UL]) + zc_int44;
    zc_int426 = zc_int77 - (-zc_int425);
    if (t3626->mM.mX[527UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int44 = BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[538UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3 = t3626->mX.mX[1206UL] * intrm_sf_mf_25;
    }
    BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3 = (((((t3626->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3 + t3626->mX.mX[203UL]) + t3626->mX.mX[204UL]) + t3626->mX.mX[205UL]) + t3626->mX.mX[206UL]) + t3626->mX.mX[207UL]) + zc_int44;
    intrm_sf_mf_25 = BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3 - (-zc_int426);
    if (t3626->mM.mX[505UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int44 = BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[516UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3 = t3626->mX.mX[1202UL] * zc_int428;
    }
    BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3 = (((((t3626->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3 + t3626->mX.mX[195UL]) + t3626->mX.mX[196UL]) + t3626->mX.mX[197UL]) + t3626->mX.mX[198UL]) + t3626->mX.mX[199UL]) + zc_int44;
    zc_int428 = BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3 - (-intrm_sf_mf_25);
    if (t3626->mM.mX[483UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int44 = zc_int68;
    }
    if (t3626->mM.mX[494UL] != 0) {
        zc_int68 = 8.200000000000002E-8;
    } else {
        zc_int68 = t3626->mX.mX[1198UL] * zc_int429;
    }
    zc_int68 = (((((t3626->mU.mX[0UL] * zc_int68 + t3626->mX.mX[187UL]) + t3626->mX.mX[188UL]) + t3626->mX.mX[189UL]) + t3626->mX.mX[190UL]) + t3626->mX.mX[191UL]) + zc_int44;
    zc_int429 = zc_int68 - (-zc_int428);
    if (t3626->mM.mX[316UL] != 0) {
        zc_int44 = 8.200000000000002E-8;
    } else {
        zc_int44 = t3626->mX.mX[1166UL] * zc_int63;
    }
    if (t3626->mM.mX[461UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int63 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int63 = zc_int64;
    }
    if (t3626->mM.mX[472UL] != 0) {
        zc_int64 = 8.200000000000002E-8;
    } else {
        zc_int64 = t3626->mX.mX[1286UL] * zc_int51;
    }
    zc_int63 += ((((t3626->mU.mX[0UL] * zc_int64 + t3626->mX.mX[363UL]) + t3626->mX.mX[364UL]) + t3626->mX.mX[365UL]) + t3626->mX.mX[366UL]) + t3626->mX.mX[367UL];
    zc_int64 = zc_int63 - (-zc_int429);
    if (t3626->mM.mX[439UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int51 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int51 = BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3;
    }
    if (t3626->mM.mX[450UL] != 0) {
        BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3 = t3626->mX.mX[1190UL] * zc_int431;
    }
    BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3 = (((((t3626->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3 + t3626->mX.mX[171UL]) + t3626->mX.mX[172UL]) + t3626->mX.mX[173UL]) + t3626->mX.mX[174UL]) + t3626->mX.mX[175UL]) + zc_int51;
    zc_int431 = BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3 - (-zc_int64);
    if (t3626->mM.mX[416UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int51 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int51 = zc_int58;
    }
    if (t3626->mM.mX[427UL] != 0) {
        zc_int58 = 8.200000000000002E-8;
    } else {
        zc_int58 = t3626->mX.mX[1186UL] * intrm_sf_mf_20;
    }
    zc_int58 = (((((t3626->mU.mX[0UL] * zc_int58 + t3626->mX.mX[163UL]) + t3626->mX.mX[164UL]) + t3626->mX.mX[165UL]) + t3626->mX.mX[166UL]) + t3626->mX.mX[167UL]) + zc_int51;
    intrm_sf_mf_20 = zc_int58 - (-zc_int431);
    if (t3626->mM.mX[394UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int51 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int51 = zc_int55;
    }
    if (t3626->mM.mX[405UL] != 0) {
        zc_int55 = 8.200000000000002E-8;
    } else {
        zc_int55 = t3626->mX.mX[1182UL] * intrm_sf_mf_19;
    }
    zc_int55 = (((((t3626->mU.mX[0UL] * zc_int55 + t3626->mX.mX[155UL]) + t3626->mX.mX[156UL]) + t3626->mX.mX[157UL]) + t3626->mX.mX[158UL]) + t3626->mX.mX[159UL]) + zc_int51;
    intrm_sf_mf_19 = zc_int55 - (-intrm_sf_mf_20);
    if (t3626->mM.mX[372UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int51 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int51 = zc_int53;
    }
    if (t3626->mM.mX[383UL] != 0) {
        zc_int53 = 8.200000000000002E-8;
    } else {
        zc_int53 = t3626->mX.mX[1178UL] * intrm_sf_mf_18;
    }
    zc_int53 = (((((t3626->mU.mX[0UL] * zc_int53 + t3626->mX.mX[147UL]) + t3626->mX.mX[148UL]) + t3626->mX.mX[149UL]) + t3626->mX.mX[150UL]) + t3626->mX.mX[151UL]) + zc_int51;
    intrm_sf_mf_18 = zc_int53 - (-intrm_sf_mf_19);
    if (t3626->mM.mX[350UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int51 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int51 = zc_int49;
    }
    if (t3626->mM.mX[361UL] != 0) {
        zc_int49 = 8.200000000000002E-8;
    } else {
        zc_int49 = t3626->mX.mX[1174UL] * zc_int435;
    }
    zc_int49 = (((((t3626->mU.mX[0UL] * zc_int49 + t3626->mX.mX[139UL]) + t3626->mX.mX[140UL]) + t3626->mX.mX[141UL]) + t3626->mX.mX[142UL]) + t3626->mX.mX[143UL]) + zc_int51;
    zc_int435 = zc_int49 - (-intrm_sf_mf_18);
    if (t3626->mM.mX[328UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int51 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int51 = zc_int46;
    }
    if (t3626->mM.mX[339UL] != 0) {
        zc_int46 = 8.200000000000002E-8;
    } else {
        zc_int46 = t3626->mX.mX[1170UL] * zc_int436;
    }
    zc_int46 = (((((t3626->mU.mX[0UL] * zc_int46 + t3626->mX.mX[131UL]) + t3626->mX.mX[132UL]) + t3626->mX.mX[133UL]) + t3626->mX.mX[134UL]) + t3626->mX.mX[135UL]) + zc_int51;
    zc_int436 = zc_int46 - (-zc_int435);
    zc_int44 = (((((t3626->mU.mX[0UL] * zc_int44 + t3626->mX.mX[123UL]) + t3626->mX.mX[124UL]) + t3626->mX.mX[125UL]) + t3626->mX.mX[126UL]) + t3626->mX.mX[127UL]) + intrm_sf_mf_108;
    zc_int51 = zc_int44 - (-zc_int436);
    intrm_sf_mf_108 = zc_int40 - (-zc_int51);
    zc_int439 = zc_int38 - (-intrm_sf_mf_108);
    intrm_sf_mf_109 = zc_int35 - (-zc_int439);
    BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3 = zc_int30 - (-intrm_sf_mf_109);
    intrm_sf_mf_110 = BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 - (-BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3);
    BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3 = zc_int24 - (-intrm_sf_mf_110);
    zc_int444 = zc_int208 - (-BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3);
    BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3 = zc_int178 - (-zc_int444);
    intrm_sf_mf_112 = zc_int148 - (-BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3);
    BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3 = zc_int118 - (-intrm_sf_mf_112);
    intrm_sf_mf_113 = zc_int10 - (-BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3);
    if (t3626->mM.mX[438UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int6 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int6 = zc_int8;
    }
    if (t3626->mM.mX[549UL] != 0) {
        zc_int8 = 8.200000000000002E-8;
    } else {
        zc_int8 = t3626->mX.mX[1118UL] * intrm_sf_mf_3;
    }
    zc_int8 = (((((t3626->mU.mX[0UL] * zc_int8 + t3626->mX.mX[27UL]) + t3626->mX.mX[28UL]) + t3626->mX.mX[29UL]) + t3626->mX.mX[30UL]) + t3626->mX.mX[31UL]) + zc_int6;
    intrm_sf_mf_3 = zc_int8 - (-intrm_sf_mf_113);
    zc_int3 += ((((t3626->mU.mX[0UL] * intrm_sf_mf_99 + t3626->mX.mX[19UL]) + t3626->mX.mX[20UL]) + t3626->mX.mX[21UL]) + t3626->mX.mX[22UL]) + t3626->mX.mX[23UL];
    intrm_sf_mf_99 = zc_int3 - (-intrm_sf_mf_3);
    zc_int6 = BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3 - (-intrm_sf_mf_99);
    if (t3626->mM.mX[246UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int452 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int452 = zc_int454;
    }
    if (t3626->mM.mX[247UL] != 0) {
        zc_int454 = 8.200000000000002E-8;
    } else {
        zc_int454 = t3626->mX.mX[1106UL] * zc_int455;
    }
    zc_int454 = (((((t3626->mU.mX[0UL] * zc_int454 + t3626->mX.mX[3UL]) + t3626->mX.mX[4UL]) + t3626->mX.mX[5UL]) + t3626->mX.mX[6UL]) + t3626->mX.mX[7UL]) + zc_int452;
    zc_int455 = zc_int454 - (-zc_int6);
    if (t3626->mM.mX[248UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int452 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int452 = zc_int480;
    }
    if (t3626->mM.mX[249UL] != 0) {
        zc_int480 = 8.200000000000002E-8;
    } else {
        zc_int480 = t3626->mX.mX[1194UL] * zc_int481;
    }
    zc_int480 = (((((t3626->mU.mX[0UL] * zc_int480 + t3626->mX.mX[179UL]) + t3626->mX.mX[180UL]) + t3626->mX.mX[181UL]) + t3626->mX.mX[182UL]) + t3626->mX.mX[183UL]) + zc_int452;
    zc_int481 = zc_int480 - (-zc_int455);
    if (t3626->mM.mX[251UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int452 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int452 = zc_int576;
    }
    if (t3626->mM.mX[252UL] != 0) {
        zc_int576 = 8.200000000000002E-8;
    } else {
        zc_int576 = t3626->mX.mX[1570UL] * zc_int580;
    }
    zc_int576 = (((((t3626->mU.mX[0UL] * zc_int576 + t3626->mX.mX[931UL]) + t3626->mX.mX[932UL]) + t3626->mX.mX[933UL]) + t3626->mX.mX[934UL]) + t3626->mX.mX[935UL]) + zc_int452;
    if (t3626->mM.mX[253UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int580 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int580 = zc_int579;
    }
    if (t3626->mM.mX[254UL] != 0) {
        zc_int579 = 8.200000000000002E-8;
    } else {
        zc_int579 = t3626->mX.mX[1574UL] * zc_int586;
    }
    zc_int580 += ((((t3626->mU.mX[0UL] * zc_int579 + t3626->mX.mX[939UL]) + t3626->mX.mX[940UL]) + t3626->mX.mX[941UL]) + t3626->mX.mX[942UL]) + t3626->mX.mX[943UL];
    if (t3626->mM.mX[255UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int579 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int579 = BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3;
    }
    if (t3626->mM.mX[256UL] != 0) {
        zc_int586 = 8.200000000000002E-8;
    } else {
        zc_int586 = t3626->mX.mX[1578UL] * zc_int588;
    }
    zc_int579 += ((((t3626->mU.mX[0UL] * zc_int586 + t3626->mX.mX[947UL]) + t3626->mX.mX[948UL]) + t3626->mX.mX[949UL]) + t3626->mX.mX[950UL]) + t3626->mX.mX[951UL];
    if (t3626->mM.mX[257UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int586 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int586 = zc_int595;
    }
    if (t3626->mM.mX[258UL] != 0) {
        BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3 = t3626->mX.mX[1582UL] * zc_int598;
    }
    zc_int586 += ((((t3626->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3 + t3626->mX.mX[955UL]) + t3626->mX.mX[956UL]) + t3626->mX.mX[957UL]) + t3626->mX.mX[958UL]) + t3626->mX.mX[959UL];
    if (t3626->mM.mX[259UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3 = zc_int601;
    }
    if (t3626->mM.mX[260UL] != 0) {
        zc_int588 = 8.200000000000002E-8;
    } else {
        zc_int588 = t3626->mX.mX[1586UL] * zc_int600;
    }
    BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3 += ((((t3626->mU.mX[0UL] * zc_int588 + t3626->mX.mX[963UL]) + t3626->mX.mX[964UL]) + t3626->mX.mX[965UL]) + t3626->mX.mX[966UL]) + t3626->mX.mX[967UL];
    if (t3626->mM.mX[262UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int588 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int588 = zc_int607;
    }
    if (t3626->mM.mX[263UL] != 0) {
        zc_int595 = 8.200000000000002E-8;
    } else {
        zc_int595 = t3626->mX.mX[1590UL] * zc_int606;
    }
    zc_int588 += ((((t3626->mU.mX[0UL] * zc_int595 + t3626->mX.mX[971UL]) + t3626->mX.mX[972UL]) + t3626->mX.mX[973UL]) + t3626->mX.mX[974UL]) + t3626->mX.mX[975UL];
    if (t3626->mM.mX[264UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int595 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int595 = BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3;
    }
    if (t3626->mM.mX[265UL] != 0) {
        zc_int598 = 8.200000000000002E-8;
    } else {
        zc_int598 = t3626->mX.mX[1594UL] * zc_int612;
    }
    zc_int595 += ((((t3626->mU.mX[0UL] * zc_int598 + t3626->mX.mX[979UL]) + t3626->mX.mX[980UL]) + t3626->mX.mX[981UL]) + t3626->mX.mX[982UL]) + t3626->mX.mX[983UL];
    if (t3626->mM.mX[266UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int598 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int598 = zc_int615;
    }
    if (t3626->mM.mX[267UL] != 0) {
        zc_int601 = 8.200000000000002E-8;
    } else {
        zc_int601 = t3626->mX.mX[1598UL] * zc_int618;
    }
    zc_int598 += ((((t3626->mU.mX[0UL] * zc_int601 + t3626->mX.mX[987UL]) + t3626->mX.mX[988UL]) + t3626->mX.mX[989UL]) + t3626->mX.mX[990UL]) + t3626->mX.mX[991UL];
    if (t3626->mM.mX[268UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int601 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int601 = zc_int625;
    }
    if (t3626->mM.mX[269UL] != 0) {
        zc_int600 = 8.200000000000002E-8;
    } else {
        zc_int600 = t3626->mX.mX[1602UL] * zc_int628;
    }
    zc_int601 += ((((t3626->mU.mX[0UL] * zc_int600 + t3626->mX.mX[995UL]) + t3626->mX.mX[996UL]) + t3626->mX.mX[997UL]) + t3626->mX.mX[998UL]) + t3626->mX.mX[999UL];
    if (t3626->mM.mX[270UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int600 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int600 = zc_int631;
    }
    if (t3626->mM.mX[271UL] != 0) {
        zc_int607 = 8.200000000000002E-8;
    } else {
        zc_int607 = t3626->mX.mX[1606UL] * zc_int634;
    }
    zc_int600 += ((((t3626->mU.mX[0UL] * zc_int607 + t3626->mX.mX[1003UL]) + t3626->mX.mX[1004UL]) + t3626->mX.mX[1005UL]) + t3626->mX.mX[1006UL]) + t3626->mX.mX[1007UL];
    if (t3626->mM.mX[273UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int607 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int607 = BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3;
    }
    if (t3626->mM.mX[274UL] != 0) {
        zc_int606 = 8.200000000000002E-8;
    } else {
        zc_int606 = t3626->mX.mX[1610UL] * intrm_sf_mf_126;
    }
    zc_int607 += ((((t3626->mU.mX[0UL] * zc_int606 + t3626->mX.mX[1011UL]) + t3626->mX.mX[1012UL]) + t3626->mX.mX[1013UL]) + t3626->mX.mX[1014UL]) + t3626->mX.mX[1015UL];
    if (t3626->mM.mX[275UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int606 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int606 = zc_int639;
    }
    if (t3626->mM.mX[276UL] != 0) {
        BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 = t3626->mX.mX[1614UL] * intrm_sf_mf_127;
    }
    zc_int606 += ((((t3626->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 + t3626->mX.mX[1019UL]) + t3626->mX.mX[1020UL]) + t3626->mX.mX[1021UL]) + t3626->mX.mX[1022UL]) + t3626->mX.mX[1023UL];
    if (t3626->mM.mX[277UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 = zc_int641;
    }
    if (t3626->mM.mX[278UL] != 0) {
        zc_int612 = 8.200000000000002E-8;
    } else {
        zc_int612 = t3626->mX.mX[1618UL] * zc_int642;
    }
    BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 += ((((t3626->mU.mX[0UL] * zc_int612 + t3626->mX.mX[1027UL]) + t3626->mX.mX[1028UL]) + t3626->mX.mX[1029UL]) + t3626->mX.mX[1030UL]) + t3626->mX.mX[1031UL];
    if (t3626->mM.mX[279UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int612 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int612 = zc_int643;
    }
    if (t3626->mM.mX[280UL] != 0) {
        zc_int615 = 8.200000000000002E-8;
    } else {
        zc_int615 = t3626->mX.mX[1622UL] * zc_int644;
    }
    zc_int612 += ((((t3626->mU.mX[0UL] * zc_int615 + t3626->mX.mX[1035UL]) + t3626->mX.mX[1036UL]) + t3626->mX.mX[1037UL]) + t3626->mX.mX[1038UL]) + t3626->mX.mX[1039UL];
    if (t3626->mM.mX[281UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int615 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int615 = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    }
    if (t3626->mM.mX[282UL] != 0) {
        zc_int618 = 8.200000000000002E-8;
    } else {
        zc_int618 = t3626->mX.mX[1626UL] * zc_int646;
    }
    zc_int615 += ((((t3626->mU.mX[0UL] * zc_int618 + t3626->mX.mX[1043UL]) + t3626->mX.mX[1044UL]) + t3626->mX.mX[1045UL]) + t3626->mX.mX[1046UL]) + t3626->mX.mX[1047UL];
    if (t3626->mM.mX[284UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int618 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int618 = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    }
    if (t3626->mM.mX[285UL] != 0) {
        zc_int625 = 8.200000000000002E-8;
    } else {
        zc_int625 = t3626->mX.mX[1630UL] * zc_int648;
    }
    zc_int618 += ((((t3626->mU.mX[0UL] * zc_int625 + t3626->mX.mX[1051UL]) + t3626->mX.mX[1052UL]) + t3626->mX.mX[1053UL]) + t3626->mX.mX[1054UL]) + t3626->mX.mX[1055UL];
    if (t3626->mM.mX[286UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int625 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int625 = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    }
    if (t3626->mM.mX[287UL] != 0) {
        zc_int628 = 8.200000000000002E-8;
    } else {
        zc_int628 = t3626->mX.mX[1634UL] * zc_int650;
    }
    zc_int625 += ((((t3626->mU.mX[0UL] * zc_int628 + t3626->mX.mX[1059UL]) + t3626->mX.mX[1060UL]) + t3626->mX.mX[1061UL]) + t3626->mX.mX[1062UL]) + t3626->mX.mX[1063UL];
    if (t3626->mM.mX[288UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int628 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int628 = zc_int651;
    }
    if (t3626->mM.mX[289UL] != 0) {
        zc_int631 = 8.200000000000002E-8;
    } else {
        zc_int631 = t3626->mX.mX[1638UL] * zc_int652;
    }
    zc_int628 += ((((t3626->mU.mX[0UL] * zc_int631 + t3626->mX.mX[1067UL]) + t3626->mX.mX[1068UL]) + t3626->mX.mX[1069UL]) + t3626->mX.mX[1070UL]) + t3626->mX.mX[1071UL];
    if (t3626->mM.mX[290UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int631 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int631 = zc_int653;
    }
    if (t3626->mM.mX[291UL] != 0) {
        zc_int634 = 8.200000000000002E-8;
    } else {
        zc_int634 = t3626->mX.mX[1642UL] * zc_int654;
    }
    zc_int631 += ((((t3626->mU.mX[0UL] * zc_int634 + t3626->mX.mX[1075UL]) + t3626->mX.mX[1076UL]) + t3626->mX.mX[1077UL]) + t3626->mX.mX[1078UL]) + t3626->mX.mX[1079UL];
    if (t3626->mM.mX[292UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int634 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int634 = zc_int655;
    }
    if (t3626->mM.mX[293UL] != 0) {
        BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3 = t3626->mX.mX[1646UL] * intrm_sf_mf_135;
    }
    zc_int634 += ((((t3626->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3 + t3626->mX.mX[1083UL]) + t3626->mX.mX[1084UL]) + t3626->mX.mX[1085UL]) + t3626->mX.mX[1086UL]) + t3626->mX.mX[1087UL];
    if (t3626->mM.mX[295UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3 = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    }
    if (t3626->mM.mX[296UL] != 0) {
        intrm_sf_mf_126 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_126 = t2179[0UL] * t3626->mX.mX[1650UL];
    }
    BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3 += ((((t3626->mU.mX[0UL] * intrm_sf_mf_126 + t3626->mX.mX[1091UL]) + t3626->mX.mX[1092UL]) + t3626->mX.mX[1093UL]) + t3626->mX.mX[1094UL]) + t3626->mX.mX[1095UL];
    intrm_sf_mf_126 = BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3 - (-zc_int481);
    zc_int639 = zc_int634 - (-intrm_sf_mf_126);
    intrm_sf_mf_127 = zc_int631 - (-zc_int639);
    zc_int641 = zc_int628 - (-intrm_sf_mf_127);
    zc_int642 = zc_int625 - (-zc_int641);
    zc_int643 = zc_int618 - (-zc_int642);
    zc_int644 = zc_int615 - (-zc_int643);
    BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3 = zc_int612 - (-zc_int644);
    zc_int646 = BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 - (-BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3);
    BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3 = zc_int606 - (-zc_int646);
    zc_int648 = zc_int607 - (-BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3);
    BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3 = zc_int600 - (-zc_int648);
    zc_int650 = zc_int601 - (-BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3);
    zc_int651 = zc_int598 - (-zc_int650);
    zc_int652 = zc_int595 - (-zc_int651);
    zc_int653 = zc_int588 - (-zc_int652);
    zc_int654 = BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3 - (-zc_int653);
    zc_int655 = zc_int586 - (-zc_int654);
    intrm_sf_mf_135 = zc_int579 - (-zc_int655);
    BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3 = zc_int580 - (-intrm_sf_mf_135);
    intrm_sf_mf_136 = zc_int576 - (-BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3);
    if (t3626->mM.mX[297UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int452 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int452 = zc_int661;
    }
    if (t3626->mM.mX[298UL] != 0) {
        zc_int661 = 8.200000000000002E-8;
    } else {
        zc_int661 = t3626->mX.mX[1566UL] * intrm_sf_mf_115;
    }
    zc_int661 = (((((t3626->mU.mX[0UL] * zc_int661 + t3626->mX.mX[923UL]) + t3626->mX.mX[924UL]) + t3626->mX.mX[925UL]) + t3626->mX.mX[926UL]) + t3626->mX.mX[927UL]) + zc_int452;
    intrm_sf_mf_115 = zc_int661 - (-intrm_sf_mf_136);
    if (t3626->mM.mX[299UL] != 0) {
        t2245[0UL] = 0UL;
        for (t2773 = 0UL; t2773 < 21UL; t2773++) {
            t2585 = t2773 / 21UL;
            t2667 = (t2773 - t2773 % 21UL) + t2245[t2585 > 0UL ? 0UL : t2585];
            if (((_NeDynamicSystem*)(LC))->mField0[t2773] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2667 > 20UL ? 20UL : t2667] * 1.0E-5) {
                t2245[t2585 > 0UL ? 0UL : t2585] = t2773 % 21UL;
            }
        }
        zc_int452 = ((_NeDynamicSystem*)(LC))->mField0[t2245[0UL] > 20UL ? 20UL : t2245[0UL]] * 1.0E-5;
    } else {
        zc_int452 = BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3;
    }
    if (t3626->mM.mX[300UL] != 0) {
        BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3 = t1488[0UL] * t3626->mX.mX[1654UL];
    }
    BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3 = (((((t3626->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3 + t3626->mX.mX[1099UL]) + t3626->mX.mX[1100UL]) + t3626->mX.mX[1101UL]) + t3626->mX.mX[1102UL]) + t3626->mX.mX[1103UL]) + zc_int452;
    zc_int452 = BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3 - (-intrm_sf_mf_115);
    zc_int457 = t3626->mX.mX[1104UL] * 0.00050950000000000008;
    out->mOBS_ACT.mX[0UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3UL] = t3626->mX.mX[0UL];
    out->mOBS_ACT.mX[4UL] = t3626->mX.mX[0UL];
    out->mOBS_ACT.mX[5UL] = t3626->mX.mX[0UL];
    out->mOBS_ACT.mX[6UL] = t3626->mX.mX[0UL];
    out->mOBS_ACT.mX[7UL] = t3626->mX.mX[1UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[8UL] = t3626->mX.mX[0UL];
    out->mOBS_ACT.mX[9UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10UL] = zc_int6;
    out->mOBS_ACT.mX[11UL] = t3626->mX.mX[2UL];
    out->mOBS_ACT.mX[12UL] = t3626->mX.mX[2UL];
    out->mOBS_ACT.mX[13UL] = t3626->mX.mX[1107UL];
    out->mOBS_ACT.mX[14UL] = 1.0;
    out->mOBS_ACT.mX[15UL] = zc_int455;
    for (t2773 = 3UL; t2773 - 3UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 13UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 21UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[26UL] = 0.0;
    out->mOBS_ACT.mX[27UL] = t3626->mX.mX[1106UL];
    out->mOBS_ACT.mX[28UL] = t3626->mX.mX[1108UL] * 1000.0;
    out->mOBS_ACT.mX[29UL] = t3626->mX.mX[1107UL];
    out->mOBS_ACT.mX[30UL] = zc_int454;
    out->mOBS_ACT.mX[31UL] = 1.0;
    out->mOBS_ACT.mX[32UL] = t3626->mX.mX[1105UL];
    out->mOBS_ACT.mX[33UL] = 1.0;
    out->mOBS_ACT.mX[34UL] = t3626->mX.mX[0UL];
    out->mOBS_ACT.mX[35UL] = t3626->mX.mX[2UL];
    out->mOBS_ACT.mX[36UL] = 1.0;
    out->mOBS_ACT.mX[37UL] = t3626->mX.mX[1105UL];
    out->mOBS_ACT.mX[38UL] = t3626->mX.mX[1106UL];
    out->mOBS_ACT.mX[39UL] = 1.0;
    out->mOBS_ACT.mX[40UL] = 1.0;
    out->mOBS_ACT.mX[41UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[42UL] = zc_int6;
    out->mOBS_ACT.mX[43UL] = t3626->mX.mX[2UL];
    out->mOBS_ACT.mX[44UL] = zc_int455;
    out->mOBS_ACT.mX[45UL] = t3626->mX.mX[1107UL];
    out->mOBS_ACT.mX[46UL] = t3626->mX.mX[1107UL];
    out->mOBS_ACT.mX[47UL] = t3626->mX.mX[0UL];
    out->mOBS_ACT.mX[48UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[49UL] = t3626->mX.mX[0UL];
    out->mOBS_ACT.mX[50UL] = t3626->mX.mX[0UL];
    out->mOBS_ACT.mX[51UL] = t3626->mX.mX[1108UL] * 1000.0;
    out->mOBS_ACT.mX[52UL] = zc_int454;
    out->mOBS_ACT.mX[53UL] = t3626->mX.mX[0UL];
    out->mOBS_ACT.mX[54UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[55UL] = BatteryPack_v2_ModuleAssembly2_Module02_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[56UL] = BatteryPack_v2_ModuleAssembly2_Module02_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[57UL] = zc_int6;
    out->mOBS_ACT.mX[58UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[59UL] = 0.0;
    out->mOBS_ACT.mX[60UL] = zc_int6;
    out->mOBS_ACT.mX[61UL] = zc_int455;
    out->mOBS_ACT.mX[62UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[63UL] = 0.0;
    out->mOBS_ACT.mX[64UL] = zc_int455;
    out->mOBS_ACT.mX[65UL] = t3626->mX.mX[0UL];
    out->mOBS_ACT.mX[66UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[67UL] = 0.0;
    out->mOBS_ACT.mX[68UL] = t3626->mX.mX[0UL];
    out->mOBS_ACT.mX[69UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[70UL] = zc_int6;
    out->mOBS_ACT.mX[71UL] = t3626->mX.mX[2UL];
    out->mOBS_ACT.mX[72UL] = zc_int455;
    out->mOBS_ACT.mX[73UL] = t3626->mX.mX[1107UL];
    out->mOBS_ACT.mX[74UL] = t3626->mX.mX[1107UL];
    out->mOBS_ACT.mX[75UL] = t3626->mX.mX[0UL];
    out->mOBS_ACT.mX[76UL] = zc_int454;
    out->mOBS_ACT.mX[77UL] = zc_int455 - zc_int6;
    out->mOBS_ACT.mX[78UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[79UL] = t3626->mX.mX[8UL];
    out->mOBS_ACT.mX[80UL] = t3626->mX.mX[8UL];
    out->mOBS_ACT.mX[81UL] = t3626->mX.mX[8UL];
    out->mOBS_ACT.mX[82UL] = t3626->mX.mX[8UL];
    out->mOBS_ACT.mX[83UL] = t3626->mX.mX[9UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[84UL] = t3626->mX.mX[8UL];
    out->mOBS_ACT.mX[85UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[86UL] = intrm_sf_mf_99;
    out->mOBS_ACT.mX[87UL] = t3626->mX.mX[10UL];
    out->mOBS_ACT.mX[88UL] = t3626->mX.mX[10UL];
    out->mOBS_ACT.mX[89UL] = t3626->mX.mX[1111UL];
    out->mOBS_ACT.mX[90UL] = 1.0;
    out->mOBS_ACT.mX[91UL] = zc_int6;
    for (t2773 = 11UL; t2773 - 11UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 81UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 97UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[102UL] = 0.0;
    out->mOBS_ACT.mX[103UL] = t3626->mX.mX[1110UL];
    out->mOBS_ACT.mX[104UL] = t3626->mX.mX[1112UL] * 1000.0;
    out->mOBS_ACT.mX[105UL] = t3626->mX.mX[1111UL];
    out->mOBS_ACT.mX[106UL] = BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[107UL] = 1.0;
    out->mOBS_ACT.mX[108UL] = t3626->mX.mX[1109UL];
    out->mOBS_ACT.mX[109UL] = 1.0;
    out->mOBS_ACT.mX[110UL] = t3626->mX.mX[8UL];
    out->mOBS_ACT.mX[111UL] = t3626->mX.mX[10UL];
    out->mOBS_ACT.mX[112UL] = 1.0;
    out->mOBS_ACT.mX[113UL] = t3626->mX.mX[1109UL];
    out->mOBS_ACT.mX[114UL] = t3626->mX.mX[1110UL];
    out->mOBS_ACT.mX[115UL] = 1.0;
    out->mOBS_ACT.mX[116UL] = 1.0;
    out->mOBS_ACT.mX[117UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[118UL] = intrm_sf_mf_99;
    out->mOBS_ACT.mX[119UL] = t3626->mX.mX[10UL];
    out->mOBS_ACT.mX[120UL] = zc_int6;
    out->mOBS_ACT.mX[121UL] = t3626->mX.mX[1111UL];
    out->mOBS_ACT.mX[122UL] = t3626->mX.mX[1111UL];
    out->mOBS_ACT.mX[123UL] = t3626->mX.mX[8UL];
    out->mOBS_ACT.mX[124UL] = BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[125UL] = t3626->mX.mX[8UL];
    out->mOBS_ACT.mX[126UL] = t3626->mX.mX[8UL];
    out->mOBS_ACT.mX[127UL] = t3626->mX.mX[1112UL] * 1000.0;
    out->mOBS_ACT.mX[128UL] = BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[129UL] = t3626->mX.mX[8UL];
    out->mOBS_ACT.mX[130UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[131UL] = BatteryPack_v2_ModuleAssembly2_Module03_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[132UL] = BatteryPack_v2_ModuleAssembly2_Module03_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[133UL] = intrm_sf_mf_99;
    out->mOBS_ACT.mX[134UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[135UL] = 0.0;
    out->mOBS_ACT.mX[136UL] = intrm_sf_mf_99;
    out->mOBS_ACT.mX[137UL] = zc_int6;
    out->mOBS_ACT.mX[138UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[139UL] = 0.0;
    out->mOBS_ACT.mX[140UL] = zc_int6;
    out->mOBS_ACT.mX[141UL] = t3626->mX.mX[8UL];
    out->mOBS_ACT.mX[142UL] = BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[143UL] = 0.0;
    out->mOBS_ACT.mX[144UL] = t3626->mX.mX[8UL];
    out->mOBS_ACT.mX[145UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[146UL] = intrm_sf_mf_99;
    out->mOBS_ACT.mX[147UL] = t3626->mX.mX[10UL];
    out->mOBS_ACT.mX[148UL] = zc_int6;
    out->mOBS_ACT.mX[149UL] = t3626->mX.mX[1111UL];
    out->mOBS_ACT.mX[150UL] = t3626->mX.mX[1111UL];
    out->mOBS_ACT.mX[151UL] = t3626->mX.mX[8UL];
    out->mOBS_ACT.mX[152UL] = BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[153UL] = zc_int6 - intrm_sf_mf_99;
    out->mOBS_ACT.mX[154UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[155UL] = t3626->mX.mX[16UL];
    out->mOBS_ACT.mX[156UL] = t3626->mX.mX[16UL];
    out->mOBS_ACT.mX[157UL] = t3626->mX.mX[16UL];
    out->mOBS_ACT.mX[158UL] = t3626->mX.mX[16UL];
    out->mOBS_ACT.mX[159UL] = t3626->mX.mX[17UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[160UL] = t3626->mX.mX[16UL];
    out->mOBS_ACT.mX[161UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[162UL] = intrm_sf_mf_3;
    out->mOBS_ACT.mX[163UL] = t3626->mX.mX[18UL];
    out->mOBS_ACT.mX[164UL] = t3626->mX.mX[18UL];
    out->mOBS_ACT.mX[165UL] = t3626->mX.mX[1115UL];
    out->mOBS_ACT.mX[166UL] = 1.0;
    out->mOBS_ACT.mX[167UL] = intrm_sf_mf_99;
    for (t2773 = 19UL; t2773 - 19UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 149UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 173UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[178UL] = 0.0;
    out->mOBS_ACT.mX[179UL] = t3626->mX.mX[1114UL];
    out->mOBS_ACT.mX[180UL] = t3626->mX.mX[1116UL] * 1000.0;
    out->mOBS_ACT.mX[181UL] = t3626->mX.mX[1115UL];
    out->mOBS_ACT.mX[182UL] = zc_int3;
    out->mOBS_ACT.mX[183UL] = 1.0;
    out->mOBS_ACT.mX[184UL] = t3626->mX.mX[1113UL];
    out->mOBS_ACT.mX[185UL] = 1.0;
    out->mOBS_ACT.mX[186UL] = t3626->mX.mX[16UL];
    out->mOBS_ACT.mX[187UL] = t3626->mX.mX[18UL];
    out->mOBS_ACT.mX[188UL] = 1.0;
    out->mOBS_ACT.mX[189UL] = t3626->mX.mX[1113UL];
    out->mOBS_ACT.mX[190UL] = t3626->mX.mX[1114UL];
    out->mOBS_ACT.mX[191UL] = 1.0;
    out->mOBS_ACT.mX[192UL] = 1.0;
    out->mOBS_ACT.mX[193UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[194UL] = intrm_sf_mf_3;
    out->mOBS_ACT.mX[195UL] = t3626->mX.mX[18UL];
    out->mOBS_ACT.mX[196UL] = intrm_sf_mf_99;
    out->mOBS_ACT.mX[197UL] = t3626->mX.mX[1115UL];
    out->mOBS_ACT.mX[198UL] = t3626->mX.mX[1115UL];
    out->mOBS_ACT.mX[199UL] = t3626->mX.mX[16UL];
    out->mOBS_ACT.mX[200UL] = BatteryPack_v2_ModuleAssembly2_Module04_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[201UL] = t3626->mX.mX[16UL];
    out->mOBS_ACT.mX[202UL] = t3626->mX.mX[16UL];
    out->mOBS_ACT.mX[203UL] = t3626->mX.mX[1116UL] * 1000.0;
    out->mOBS_ACT.mX[204UL] = zc_int3;
    out->mOBS_ACT.mX[205UL] = t3626->mX.mX[16UL];
    out->mOBS_ACT.mX[206UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[207UL] = BatteryPack_v2_ModuleAssembly2_Module04_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[208UL] = BatteryPack_v2_ModuleAssembly2_Module04_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[209UL] = intrm_sf_mf_3;
    out->mOBS_ACT.mX[210UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[211UL] = 0.0;
    out->mOBS_ACT.mX[212UL] = intrm_sf_mf_3;
    out->mOBS_ACT.mX[213UL] = intrm_sf_mf_99;
    out->mOBS_ACT.mX[214UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[215UL] = 0.0;
    out->mOBS_ACT.mX[216UL] = intrm_sf_mf_99;
    out->mOBS_ACT.mX[217UL] = t3626->mX.mX[16UL];
    out->mOBS_ACT.mX[218UL] = BatteryPack_v2_ModuleAssembly2_Module04_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[219UL] = 0.0;
    out->mOBS_ACT.mX[220UL] = t3626->mX.mX[16UL];
    out->mOBS_ACT.mX[221UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[222UL] = intrm_sf_mf_3;
    out->mOBS_ACT.mX[223UL] = t3626->mX.mX[18UL];
    out->mOBS_ACT.mX[224UL] = intrm_sf_mf_99;
    out->mOBS_ACT.mX[225UL] = t3626->mX.mX[1115UL];
    out->mOBS_ACT.mX[226UL] = t3626->mX.mX[1115UL];
    out->mOBS_ACT.mX[227UL] = t3626->mX.mX[16UL];
    out->mOBS_ACT.mX[228UL] = zc_int3;
    out->mOBS_ACT.mX[229UL] = intrm_sf_mf_99 - intrm_sf_mf_3;
    out->mOBS_ACT.mX[230UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[231UL] = t3626->mX.mX[24UL];
    out->mOBS_ACT.mX[232UL] = t3626->mX.mX[24UL];
    out->mOBS_ACT.mX[233UL] = t3626->mX.mX[24UL];
    out->mOBS_ACT.mX[234UL] = t3626->mX.mX[24UL];
    out->mOBS_ACT.mX[235UL] = t3626->mX.mX[25UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[236UL] = t3626->mX.mX[24UL];
    out->mOBS_ACT.mX[237UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[238UL] = intrm_sf_mf_113;
    out->mOBS_ACT.mX[239UL] = t3626->mX.mX[26UL];
    out->mOBS_ACT.mX[240UL] = t3626->mX.mX[26UL];
    out->mOBS_ACT.mX[241UL] = t3626->mX.mX[1119UL];
    out->mOBS_ACT.mX[242UL] = 1.0;
    out->mOBS_ACT.mX[243UL] = intrm_sf_mf_3;
    for (t2773 = 27UL; t2773 - 27UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 217UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 249UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[254UL] = 0.0;
    out->mOBS_ACT.mX[255UL] = t3626->mX.mX[1118UL];
    out->mOBS_ACT.mX[256UL] = t3626->mX.mX[1120UL] * 1000.0;
    out->mOBS_ACT.mX[257UL] = t3626->mX.mX[1119UL];
    out->mOBS_ACT.mX[258UL] = zc_int8;
    out->mOBS_ACT.mX[259UL] = 1.0;
    out->mOBS_ACT.mX[260UL] = t3626->mX.mX[1117UL];
    out->mOBS_ACT.mX[261UL] = 1.0;
    out->mOBS_ACT.mX[262UL] = t3626->mX.mX[24UL];
    out->mOBS_ACT.mX[263UL] = t3626->mX.mX[26UL];
    out->mOBS_ACT.mX[264UL] = 1.0;
    out->mOBS_ACT.mX[265UL] = t3626->mX.mX[1117UL];
    out->mOBS_ACT.mX[266UL] = t3626->mX.mX[1118UL];
    out->mOBS_ACT.mX[267UL] = 1.0;
    out->mOBS_ACT.mX[268UL] = 1.0;
    out->mOBS_ACT.mX[269UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[270UL] = intrm_sf_mf_113;
    out->mOBS_ACT.mX[271UL] = t3626->mX.mX[26UL];
    out->mOBS_ACT.mX[272UL] = intrm_sf_mf_3;
    out->mOBS_ACT.mX[273UL] = t3626->mX.mX[1119UL];
    out->mOBS_ACT.mX[274UL] = t3626->mX.mX[1119UL];
    out->mOBS_ACT.mX[275UL] = t3626->mX.mX[24UL];
    out->mOBS_ACT.mX[276UL] = BatteryPack_v2_ModuleAssembly2_Module05_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[277UL] = t3626->mX.mX[24UL];
    out->mOBS_ACT.mX[278UL] = t3626->mX.mX[24UL];
    out->mOBS_ACT.mX[279UL] = t3626->mX.mX[1120UL] * 1000.0;
    out->mOBS_ACT.mX[280UL] = zc_int8;
    out->mOBS_ACT.mX[281UL] = t3626->mX.mX[24UL];
    out->mOBS_ACT.mX[282UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[283UL] = BatteryPack_v2_ModuleAssembly2_Module05_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[284UL] = BatteryPack_v2_ModuleAssembly2_Module05_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[285UL] = intrm_sf_mf_113;
    out->mOBS_ACT.mX[286UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[287UL] = 0.0;
    out->mOBS_ACT.mX[288UL] = intrm_sf_mf_113;
    out->mOBS_ACT.mX[289UL] = intrm_sf_mf_3;
    out->mOBS_ACT.mX[290UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[291UL] = 0.0;
    out->mOBS_ACT.mX[292UL] = intrm_sf_mf_3;
    out->mOBS_ACT.mX[293UL] = t3626->mX.mX[24UL];
    out->mOBS_ACT.mX[294UL] = BatteryPack_v2_ModuleAssembly2_Module05_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[295UL] = 0.0;
    out->mOBS_ACT.mX[296UL] = t3626->mX.mX[24UL];
    out->mOBS_ACT.mX[297UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[298UL] = intrm_sf_mf_113;
    out->mOBS_ACT.mX[299UL] = t3626->mX.mX[26UL];
    out->mOBS_ACT.mX[300UL] = intrm_sf_mf_3;
    out->mOBS_ACT.mX[301UL] = t3626->mX.mX[1119UL];
    out->mOBS_ACT.mX[302UL] = t3626->mX.mX[1119UL];
    out->mOBS_ACT.mX[303UL] = t3626->mX.mX[24UL];
    out->mOBS_ACT.mX[304UL] = zc_int8;
    out->mOBS_ACT.mX[305UL] = intrm_sf_mf_3 - intrm_sf_mf_113;
    out->mOBS_ACT.mX[306UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[307UL] = t3626->mX.mX[32UL];
    out->mOBS_ACT.mX[308UL] = t3626->mX.mX[32UL];
    out->mOBS_ACT.mX[309UL] = t3626->mX.mX[32UL];
    out->mOBS_ACT.mX[310UL] = t3626->mX.mX[32UL];
    out->mOBS_ACT.mX[311UL] = t3626->mX.mX[33UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[312UL] = t3626->mX.mX[32UL];
    out->mOBS_ACT.mX[313UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[314UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[315UL] = t3626->mX.mX[34UL];
    out->mOBS_ACT.mX[316UL] = t3626->mX.mX[34UL];
    out->mOBS_ACT.mX[317UL] = t3626->mX.mX[1123UL];
    out->mOBS_ACT.mX[318UL] = 1.0;
    out->mOBS_ACT.mX[319UL] = intrm_sf_mf_113;
    for (t2773 = 35UL; t2773 - 35UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 285UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 325UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[330UL] = 0.0;
    out->mOBS_ACT.mX[331UL] = t3626->mX.mX[1122UL];
    out->mOBS_ACT.mX[332UL] = t3626->mX.mX[1124UL] * 1000.0;
    out->mOBS_ACT.mX[333UL] = t3626->mX.mX[1123UL];
    out->mOBS_ACT.mX[334UL] = zc_int10;
    out->mOBS_ACT.mX[335UL] = 1.0;
    out->mOBS_ACT.mX[336UL] = t3626->mX.mX[1121UL];
    out->mOBS_ACT.mX[337UL] = 1.0;
    out->mOBS_ACT.mX[338UL] = t3626->mX.mX[32UL];
    out->mOBS_ACT.mX[339UL] = t3626->mX.mX[34UL];
    out->mOBS_ACT.mX[340UL] = 1.0;
    out->mOBS_ACT.mX[341UL] = t3626->mX.mX[1121UL];
    out->mOBS_ACT.mX[342UL] = t3626->mX.mX[1122UL];
    out->mOBS_ACT.mX[343UL] = 1.0;
    out->mOBS_ACT.mX[344UL] = 1.0;
    out->mOBS_ACT.mX[345UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[346UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[347UL] = t3626->mX.mX[34UL];
    out->mOBS_ACT.mX[348UL] = intrm_sf_mf_113;
    out->mOBS_ACT.mX[349UL] = t3626->mX.mX[1123UL];
    out->mOBS_ACT.mX[350UL] = t3626->mX.mX[1123UL];
    out->mOBS_ACT.mX[351UL] = t3626->mX.mX[32UL];
    out->mOBS_ACT.mX[352UL] = BatteryPack_v2_ModuleAssembly2_Module06_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[353UL] = t3626->mX.mX[32UL];
    out->mOBS_ACT.mX[354UL] = t3626->mX.mX[32UL];
    out->mOBS_ACT.mX[355UL] = t3626->mX.mX[1124UL] * 1000.0;
    out->mOBS_ACT.mX[356UL] = zc_int10;
    out->mOBS_ACT.mX[357UL] = t3626->mX.mX[32UL];
    out->mOBS_ACT.mX[358UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[359UL] = BatteryPack_v2_ModuleAssembly2_Module06_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[360UL] = BatteryPack_v2_ModuleAssembly2_Module06_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[361UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[362UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[363UL] = 0.0;
    out->mOBS_ACT.mX[364UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[365UL] = intrm_sf_mf_113;
    out->mOBS_ACT.mX[366UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[367UL] = 0.0;
    out->mOBS_ACT.mX[368UL] = intrm_sf_mf_113;
    out->mOBS_ACT.mX[369UL] = t3626->mX.mX[32UL];
    out->mOBS_ACT.mX[370UL] = BatteryPack_v2_ModuleAssembly2_Module06_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[371UL] = 0.0;
    out->mOBS_ACT.mX[372UL] = t3626->mX.mX[32UL];
    out->mOBS_ACT.mX[373UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[374UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[375UL] = t3626->mX.mX[34UL];
    out->mOBS_ACT.mX[376UL] = intrm_sf_mf_113;
    out->mOBS_ACT.mX[377UL] = t3626->mX.mX[1123UL];
    out->mOBS_ACT.mX[378UL] = t3626->mX.mX[1123UL];
    out->mOBS_ACT.mX[379UL] = t3626->mX.mX[32UL];
    out->mOBS_ACT.mX[380UL] = zc_int10;
    out->mOBS_ACT.mX[381UL] = intrm_sf_mf_113 - BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[382UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[383UL] = t3626->mX.mX[40UL];
    out->mOBS_ACT.mX[384UL] = t3626->mX.mX[40UL];
    out->mOBS_ACT.mX[385UL] = t3626->mX.mX[40UL];
    out->mOBS_ACT.mX[386UL] = t3626->mX.mX[40UL];
    out->mOBS_ACT.mX[387UL] = t3626->mX.mX[41UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[388UL] = t3626->mX.mX[40UL];
    out->mOBS_ACT.mX[389UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[390UL] = intrm_sf_mf_112;
    out->mOBS_ACT.mX[391UL] = t3626->mX.mX[42UL];
    out->mOBS_ACT.mX[392UL] = t3626->mX.mX[42UL];
    out->mOBS_ACT.mX[393UL] = t3626->mX.mX[1127UL];
    out->mOBS_ACT.mX[394UL] = 1.0;
    out->mOBS_ACT.mX[395UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    for (t2773 = 43UL; t2773 - 43UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 353UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 401UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[406UL] = 0.0;
    out->mOBS_ACT.mX[407UL] = t3626->mX.mX[1126UL];
    out->mOBS_ACT.mX[408UL] = t3626->mX.mX[1128UL] * 1000.0;
    out->mOBS_ACT.mX[409UL] = t3626->mX.mX[1127UL];
    out->mOBS_ACT.mX[410UL] = zc_int118;
    out->mOBS_ACT.mX[411UL] = 1.0;
    out->mOBS_ACT.mX[412UL] = t3626->mX.mX[1125UL];
    out->mOBS_ACT.mX[413UL] = 1.0;
    out->mOBS_ACT.mX[414UL] = t3626->mX.mX[40UL];
    out->mOBS_ACT.mX[415UL] = t3626->mX.mX[42UL];
    out->mOBS_ACT.mX[416UL] = 1.0;
    out->mOBS_ACT.mX[417UL] = t3626->mX.mX[1125UL];
    out->mOBS_ACT.mX[418UL] = t3626->mX.mX[1126UL];
    out->mOBS_ACT.mX[419UL] = 1.0;
    out->mOBS_ACT.mX[420UL] = 1.0;
    out->mOBS_ACT.mX[421UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[422UL] = intrm_sf_mf_112;
    out->mOBS_ACT.mX[423UL] = t3626->mX.mX[42UL];
    out->mOBS_ACT.mX[424UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[425UL] = t3626->mX.mX[1127UL];
    out->mOBS_ACT.mX[426UL] = t3626->mX.mX[1127UL];
    out->mOBS_ACT.mX[427UL] = t3626->mX.mX[40UL];
    out->mOBS_ACT.mX[428UL] = BatteryPack_v2_ModuleAssembly2_Module07_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[429UL] = t3626->mX.mX[40UL];
    out->mOBS_ACT.mX[430UL] = t3626->mX.mX[40UL];
    out->mOBS_ACT.mX[431UL] = t3626->mX.mX[1128UL] * 1000.0;
    out->mOBS_ACT.mX[432UL] = zc_int118;
    out->mOBS_ACT.mX[433UL] = t3626->mX.mX[40UL];
    out->mOBS_ACT.mX[434UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[435UL] = BatteryPack_v2_ModuleAssembly2_Module07_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[436UL] = BatteryPack_v2_ModuleAssembly2_Module07_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[437UL] = intrm_sf_mf_112;
    out->mOBS_ACT.mX[438UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[439UL] = 0.0;
    out->mOBS_ACT.mX[440UL] = intrm_sf_mf_112;
    out->mOBS_ACT.mX[441UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[442UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[443UL] = 0.0;
    out->mOBS_ACT.mX[444UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[445UL] = t3626->mX.mX[40UL];
    out->mOBS_ACT.mX[446UL] = BatteryPack_v2_ModuleAssembly2_Module07_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[447UL] = 0.0;
    out->mOBS_ACT.mX[448UL] = t3626->mX.mX[40UL];
    out->mOBS_ACT.mX[449UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[450UL] = intrm_sf_mf_112;
    out->mOBS_ACT.mX[451UL] = t3626->mX.mX[42UL];
    out->mOBS_ACT.mX[452UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[453UL] = t3626->mX.mX[1127UL];
    out->mOBS_ACT.mX[454UL] = t3626->mX.mX[1127UL];
    out->mOBS_ACT.mX[455UL] = t3626->mX.mX[40UL];
    out->mOBS_ACT.mX[456UL] = zc_int118;
    out->mOBS_ACT.mX[457UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3 - intrm_sf_mf_112;
    out->mOBS_ACT.mX[458UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[459UL] = t3626->mX.mX[48UL];
    out->mOBS_ACT.mX[460UL] = t3626->mX.mX[48UL];
    out->mOBS_ACT.mX[461UL] = t3626->mX.mX[48UL];
    out->mOBS_ACT.mX[462UL] = t3626->mX.mX[48UL];
    out->mOBS_ACT.mX[463UL] = t3626->mX.mX[49UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[464UL] = t3626->mX.mX[48UL];
    out->mOBS_ACT.mX[465UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[466UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[467UL] = t3626->mX.mX[50UL];
    out->mOBS_ACT.mX[468UL] = t3626->mX.mX[50UL];
    out->mOBS_ACT.mX[469UL] = t3626->mX.mX[1131UL];
    out->mOBS_ACT.mX[470UL] = 1.0;
    out->mOBS_ACT.mX[471UL] = intrm_sf_mf_112;
    for (t2773 = 51UL; t2773 - 51UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 421UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 477UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[482UL] = 0.0;
    out->mOBS_ACT.mX[483UL] = t3626->mX.mX[1130UL];
    out->mOBS_ACT.mX[484UL] = t3626->mX.mX[1132UL] * 1000.0;
    out->mOBS_ACT.mX[485UL] = t3626->mX.mX[1131UL];
    out->mOBS_ACT.mX[486UL] = zc_int148;
    out->mOBS_ACT.mX[487UL] = 1.0;
    out->mOBS_ACT.mX[488UL] = t3626->mX.mX[1129UL];
    out->mOBS_ACT.mX[489UL] = 1.0;
    out->mOBS_ACT.mX[490UL] = t3626->mX.mX[48UL];
    out->mOBS_ACT.mX[491UL] = t3626->mX.mX[50UL];
    out->mOBS_ACT.mX[492UL] = 1.0;
    out->mOBS_ACT.mX[493UL] = t3626->mX.mX[1129UL];
    out->mOBS_ACT.mX[494UL] = t3626->mX.mX[1130UL];
    out->mOBS_ACT.mX[495UL] = 1.0;
    out->mOBS_ACT.mX[496UL] = 1.0;
    out->mOBS_ACT.mX[497UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[498UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[499UL] = t3626->mX.mX[50UL];
    out->mOBS_ACT.mX[500UL] = intrm_sf_mf_112;
    out->mOBS_ACT.mX[501UL] = t3626->mX.mX[1131UL];
    out->mOBS_ACT.mX[502UL] = t3626->mX.mX[1131UL];
    out->mOBS_ACT.mX[503UL] = t3626->mX.mX[48UL];
    out->mOBS_ACT.mX[504UL] = BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[505UL] = t3626->mX.mX[48UL];
    out->mOBS_ACT.mX[506UL] = t3626->mX.mX[48UL];
    out->mOBS_ACT.mX[507UL] = t3626->mX.mX[1132UL] * 1000.0;
    out->mOBS_ACT.mX[508UL] = zc_int148;
    out->mOBS_ACT.mX[509UL] = t3626->mX.mX[48UL];
    out->mOBS_ACT.mX[510UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[511UL] = BatteryPack_v2_ModuleAssembly2_Module08_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[512UL] = BatteryPack_v2_ModuleAssembly2_Module08_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[513UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[514UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[515UL] = 0.0;
    out->mOBS_ACT.mX[516UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[517UL] = intrm_sf_mf_112;
    out->mOBS_ACT.mX[518UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[519UL] = 0.0;
    out->mOBS_ACT.mX[520UL] = intrm_sf_mf_112;
    out->mOBS_ACT.mX[521UL] = t3626->mX.mX[48UL];
    out->mOBS_ACT.mX[522UL] = BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[523UL] = 0.0;
    out->mOBS_ACT.mX[524UL] = t3626->mX.mX[48UL];
    out->mOBS_ACT.mX[525UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[526UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[527UL] = t3626->mX.mX[50UL];
    out->mOBS_ACT.mX[528UL] = intrm_sf_mf_112;
    out->mOBS_ACT.mX[529UL] = t3626->mX.mX[1131UL];
    out->mOBS_ACT.mX[530UL] = t3626->mX.mX[1131UL];
    out->mOBS_ACT.mX[531UL] = t3626->mX.mX[48UL];
    out->mOBS_ACT.mX[532UL] = zc_int148;
    out->mOBS_ACT.mX[533UL] = intrm_sf_mf_112 - BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[534UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[535UL] = t3626->mX.mX[56UL];
    out->mOBS_ACT.mX[536UL] = t3626->mX.mX[56UL];
    out->mOBS_ACT.mX[537UL] = t3626->mX.mX[56UL];
    out->mOBS_ACT.mX[538UL] = t3626->mX.mX[56UL];
    out->mOBS_ACT.mX[539UL] = t3626->mX.mX[57UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[540UL] = t3626->mX.mX[56UL];
    out->mOBS_ACT.mX[541UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[542UL] = zc_int444;
    out->mOBS_ACT.mX[543UL] = t3626->mX.mX[58UL];
    out->mOBS_ACT.mX[544UL] = t3626->mX.mX[58UL];
    out->mOBS_ACT.mX[545UL] = t3626->mX.mX[1135UL];
    out->mOBS_ACT.mX[546UL] = 1.0;
    out->mOBS_ACT.mX[547UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    for (t2773 = 59UL; t2773 - 59UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 489UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 553UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[558UL] = 0.0;
    out->mOBS_ACT.mX[559UL] = t3626->mX.mX[1134UL];
    out->mOBS_ACT.mX[560UL] = t3626->mX.mX[1136UL] * 1000.0;
    out->mOBS_ACT.mX[561UL] = t3626->mX.mX[1135UL];
    out->mOBS_ACT.mX[562UL] = zc_int178;
    out->mOBS_ACT.mX[563UL] = 1.0;
    out->mOBS_ACT.mX[564UL] = t3626->mX.mX[1133UL];
    out->mOBS_ACT.mX[565UL] = 1.0;
    out->mOBS_ACT.mX[566UL] = t3626->mX.mX[56UL];
    out->mOBS_ACT.mX[567UL] = t3626->mX.mX[58UL];
    out->mOBS_ACT.mX[568UL] = 1.0;
    out->mOBS_ACT.mX[569UL] = t3626->mX.mX[1133UL];
    out->mOBS_ACT.mX[570UL] = t3626->mX.mX[1134UL];
    out->mOBS_ACT.mX[571UL] = 1.0;
    out->mOBS_ACT.mX[572UL] = 1.0;
    out->mOBS_ACT.mX[573UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[574UL] = zc_int444;
    out->mOBS_ACT.mX[575UL] = t3626->mX.mX[58UL];
    out->mOBS_ACT.mX[576UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[577UL] = t3626->mX.mX[1135UL];
    out->mOBS_ACT.mX[578UL] = t3626->mX.mX[1135UL];
    out->mOBS_ACT.mX[579UL] = t3626->mX.mX[56UL];
    out->mOBS_ACT.mX[580UL] = BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[581UL] = t3626->mX.mX[56UL];
    out->mOBS_ACT.mX[582UL] = t3626->mX.mX[56UL];
    out->mOBS_ACT.mX[583UL] = t3626->mX.mX[1136UL] * 1000.0;
    out->mOBS_ACT.mX[584UL] = zc_int178;
    out->mOBS_ACT.mX[585UL] = t3626->mX.mX[56UL];
    out->mOBS_ACT.mX[586UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[587UL] = BatteryPack_v2_ModuleAssembly2_Module09_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[588UL] = BatteryPack_v2_ModuleAssembly2_Module09_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[589UL] = zc_int444;
    out->mOBS_ACT.mX[590UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[591UL] = 0.0;
    out->mOBS_ACT.mX[592UL] = zc_int444;
    out->mOBS_ACT.mX[593UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[594UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[595UL] = 0.0;
    out->mOBS_ACT.mX[596UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[597UL] = t3626->mX.mX[56UL];
    out->mOBS_ACT.mX[598UL] = BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[599UL] = 0.0;
    out->mOBS_ACT.mX[600UL] = t3626->mX.mX[56UL];
    out->mOBS_ACT.mX[601UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[602UL] = zc_int444;
    out->mOBS_ACT.mX[603UL] = t3626->mX.mX[58UL];
    out->mOBS_ACT.mX[604UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[605UL] = t3626->mX.mX[1135UL];
    out->mOBS_ACT.mX[606UL] = t3626->mX.mX[1135UL];
    out->mOBS_ACT.mX[607UL] = t3626->mX.mX[56UL];
    out->mOBS_ACT.mX[608UL] = zc_int178;
    out->mOBS_ACT.mX[609UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3 - zc_int444;
    out->mOBS_ACT.mX[610UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[611UL] = t3626->mX.mX[64UL];
    out->mOBS_ACT.mX[612UL] = t3626->mX.mX[64UL];
    out->mOBS_ACT.mX[613UL] = t3626->mX.mX[64UL];
    out->mOBS_ACT.mX[614UL] = t3626->mX.mX[64UL];
    out->mOBS_ACT.mX[615UL] = t3626->mX.mX[65UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[616UL] = t3626->mX.mX[64UL];
    out->mOBS_ACT.mX[617UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[618UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[619UL] = t3626->mX.mX[66UL];
    out->mOBS_ACT.mX[620UL] = t3626->mX.mX[66UL];
    out->mOBS_ACT.mX[621UL] = t3626->mX.mX[1139UL];
    out->mOBS_ACT.mX[622UL] = 1.0;
    out->mOBS_ACT.mX[623UL] = zc_int444;
    for (t2773 = 67UL; t2773 - 67UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 557UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 629UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[634UL] = 0.0;
    out->mOBS_ACT.mX[635UL] = t3626->mX.mX[1138UL];
    out->mOBS_ACT.mX[636UL] = t3626->mX.mX[1140UL] * 1000.0;
    out->mOBS_ACT.mX[637UL] = t3626->mX.mX[1139UL];
    out->mOBS_ACT.mX[638UL] = zc_int208;
    out->mOBS_ACT.mX[639UL] = 1.0;
    out->mOBS_ACT.mX[640UL] = t3626->mX.mX[1137UL];
    out->mOBS_ACT.mX[641UL] = 1.0;
    out->mOBS_ACT.mX[642UL] = t3626->mX.mX[64UL];
    out->mOBS_ACT.mX[643UL] = t3626->mX.mX[66UL];
    out->mOBS_ACT.mX[644UL] = 1.0;
    out->mOBS_ACT.mX[645UL] = t3626->mX.mX[1137UL];
    out->mOBS_ACT.mX[646UL] = t3626->mX.mX[1138UL];
    out->mOBS_ACT.mX[647UL] = 1.0;
    out->mOBS_ACT.mX[648UL] = 1.0;
    out->mOBS_ACT.mX[649UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[650UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[651UL] = t3626->mX.mX[66UL];
    out->mOBS_ACT.mX[652UL] = zc_int444;
    out->mOBS_ACT.mX[653UL] = t3626->mX.mX[1139UL];
    out->mOBS_ACT.mX[654UL] = t3626->mX.mX[1139UL];
    out->mOBS_ACT.mX[655UL] = t3626->mX.mX[64UL];
    out->mOBS_ACT.mX[656UL] = BatteryPack_v2_ModuleAssembly2_Module10_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[657UL] = t3626->mX.mX[64UL];
    out->mOBS_ACT.mX[658UL] = t3626->mX.mX[64UL];
    out->mOBS_ACT.mX[659UL] = t3626->mX.mX[1140UL] * 1000.0;
    out->mOBS_ACT.mX[660UL] = zc_int208;
    out->mOBS_ACT.mX[661UL] = t3626->mX.mX[64UL];
    out->mOBS_ACT.mX[662UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[663UL] = BatteryPack_v2_ModuleAssembly2_Module10_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[664UL] = BatteryPack_v2_ModuleAssembly2_Module10_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[665UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[666UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[667UL] = 0.0;
    out->mOBS_ACT.mX[668UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[669UL] = zc_int444;
    out->mOBS_ACT.mX[670UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[671UL] = 0.0;
    out->mOBS_ACT.mX[672UL] = zc_int444;
    out->mOBS_ACT.mX[673UL] = t3626->mX.mX[64UL];
    out->mOBS_ACT.mX[674UL] = BatteryPack_v2_ModuleAssembly2_Module10_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[675UL] = 0.0;
    out->mOBS_ACT.mX[676UL] = t3626->mX.mX[64UL];
    out->mOBS_ACT.mX[677UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[678UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[679UL] = t3626->mX.mX[66UL];
    out->mOBS_ACT.mX[680UL] = zc_int444;
    out->mOBS_ACT.mX[681UL] = t3626->mX.mX[1139UL];
    out->mOBS_ACT.mX[682UL] = t3626->mX.mX[1139UL];
    out->mOBS_ACT.mX[683UL] = t3626->mX.mX[64UL];
    out->mOBS_ACT.mX[684UL] = zc_int208;
    out->mOBS_ACT.mX[685UL] = zc_int444 - BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[686UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[687UL] = t3626->mX.mX[72UL];
    out->mOBS_ACT.mX[688UL] = t3626->mX.mX[72UL];
    out->mOBS_ACT.mX[689UL] = t3626->mX.mX[72UL];
    out->mOBS_ACT.mX[690UL] = t3626->mX.mX[72UL];
    out->mOBS_ACT.mX[691UL] = t3626->mX.mX[73UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[692UL] = t3626->mX.mX[72UL];
    out->mOBS_ACT.mX[693UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[694UL] = intrm_sf_mf_110;
    out->mOBS_ACT.mX[695UL] = t3626->mX.mX[74UL];
    out->mOBS_ACT.mX[696UL] = t3626->mX.mX[74UL];
    out->mOBS_ACT.mX[697UL] = t3626->mX.mX[1143UL];
    out->mOBS_ACT.mX[698UL] = 1.0;
    out->mOBS_ACT.mX[699UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    for (t2773 = 75UL; t2773 - 75UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 625UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 705UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[710UL] = 0.0;
    out->mOBS_ACT.mX[711UL] = t3626->mX.mX[1142UL];
    out->mOBS_ACT.mX[712UL] = t3626->mX.mX[1144UL] * 1000.0;
    out->mOBS_ACT.mX[713UL] = t3626->mX.mX[1143UL];
    out->mOBS_ACT.mX[714UL] = zc_int24;
    out->mOBS_ACT.mX[715UL] = 1.0;
    out->mOBS_ACT.mX[716UL] = t3626->mX.mX[1141UL];
    out->mOBS_ACT.mX[717UL] = 1.0;
    out->mOBS_ACT.mX[718UL] = t3626->mX.mX[72UL];
    out->mOBS_ACT.mX[719UL] = t3626->mX.mX[74UL];
    out->mOBS_ACT.mX[720UL] = 1.0;
    out->mOBS_ACT.mX[721UL] = t3626->mX.mX[1141UL];
    out->mOBS_ACT.mX[722UL] = t3626->mX.mX[1142UL];
    out->mOBS_ACT.mX[723UL] = 1.0;
    out->mOBS_ACT.mX[724UL] = 1.0;
    out->mOBS_ACT.mX[725UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[726UL] = intrm_sf_mf_110;
    out->mOBS_ACT.mX[727UL] = t3626->mX.mX[74UL];
    out->mOBS_ACT.mX[728UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[729UL] = t3626->mX.mX[1143UL];
    out->mOBS_ACT.mX[730UL] = t3626->mX.mX[1143UL];
    out->mOBS_ACT.mX[731UL] = t3626->mX.mX[72UL];
    out->mOBS_ACT.mX[732UL] = BatteryPack_v2_ModuleAssembly2_Module11_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[733UL] = t3626->mX.mX[72UL];
    out->mOBS_ACT.mX[734UL] = t3626->mX.mX[72UL];
    out->mOBS_ACT.mX[735UL] = t3626->mX.mX[1144UL] * 1000.0;
    out->mOBS_ACT.mX[736UL] = zc_int24;
    out->mOBS_ACT.mX[737UL] = t3626->mX.mX[72UL];
    out->mOBS_ACT.mX[738UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[739UL] = BatteryPack_v2_ModuleAssembly2_Module11_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[740UL] = BatteryPack_v2_ModuleAssembly2_Module11_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[741UL] = intrm_sf_mf_110;
    out->mOBS_ACT.mX[742UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[743UL] = 0.0;
    out->mOBS_ACT.mX[744UL] = intrm_sf_mf_110;
    out->mOBS_ACT.mX[745UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[746UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[747UL] = 0.0;
    out->mOBS_ACT.mX[748UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[749UL] = t3626->mX.mX[72UL];
    out->mOBS_ACT.mX[750UL] = BatteryPack_v2_ModuleAssembly2_Module11_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[751UL] = 0.0;
    out->mOBS_ACT.mX[752UL] = t3626->mX.mX[72UL];
    out->mOBS_ACT.mX[753UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[754UL] = intrm_sf_mf_110;
    out->mOBS_ACT.mX[755UL] = t3626->mX.mX[74UL];
    out->mOBS_ACT.mX[756UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[757UL] = t3626->mX.mX[1143UL];
    out->mOBS_ACT.mX[758UL] = t3626->mX.mX[1143UL];
    out->mOBS_ACT.mX[759UL] = t3626->mX.mX[72UL];
    out->mOBS_ACT.mX[760UL] = zc_int24;
    out->mOBS_ACT.mX[761UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3 - intrm_sf_mf_110;
    out->mOBS_ACT.mX[762UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[763UL] = t3626->mX.mX[80UL];
    out->mOBS_ACT.mX[764UL] = t3626->mX.mX[80UL];
    out->mOBS_ACT.mX[765UL] = t3626->mX.mX[80UL];
    out->mOBS_ACT.mX[766UL] = t3626->mX.mX[80UL];
    out->mOBS_ACT.mX[767UL] = t3626->mX.mX[81UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[768UL] = t3626->mX.mX[80UL];
    out->mOBS_ACT.mX[769UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[770UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[771UL] = t3626->mX.mX[82UL];
    out->mOBS_ACT.mX[772UL] = t3626->mX.mX[82UL];
    out->mOBS_ACT.mX[773UL] = t3626->mX.mX[1147UL];
    out->mOBS_ACT.mX[774UL] = 1.0;
    out->mOBS_ACT.mX[775UL] = intrm_sf_mf_110;
    for (t2773 = 83UL; t2773 - 83UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 693UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 781UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[786UL] = 0.0;
    out->mOBS_ACT.mX[787UL] = t3626->mX.mX[1146UL];
    out->mOBS_ACT.mX[788UL] = t3626->mX.mX[1148UL] * 1000.0;
    out->mOBS_ACT.mX[789UL] = t3626->mX.mX[1147UL];
    out->mOBS_ACT.mX[790UL] = BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[791UL] = 1.0;
    out->mOBS_ACT.mX[792UL] = t3626->mX.mX[1145UL];
    out->mOBS_ACT.mX[793UL] = 1.0;
    out->mOBS_ACT.mX[794UL] = t3626->mX.mX[80UL];
    out->mOBS_ACT.mX[795UL] = t3626->mX.mX[82UL];
    out->mOBS_ACT.mX[796UL] = 1.0;
    out->mOBS_ACT.mX[797UL] = t3626->mX.mX[1145UL];
    out->mOBS_ACT.mX[798UL] = t3626->mX.mX[1146UL];
    out->mOBS_ACT.mX[799UL] = 1.0;
    out->mOBS_ACT.mX[800UL] = 1.0;
    out->mOBS_ACT.mX[801UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[802UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[803UL] = t3626->mX.mX[82UL];
    out->mOBS_ACT.mX[804UL] = intrm_sf_mf_110;
    out->mOBS_ACT.mX[805UL] = t3626->mX.mX[1147UL];
    out->mOBS_ACT.mX[806UL] = t3626->mX.mX[1147UL];
    out->mOBS_ACT.mX[807UL] = t3626->mX.mX[80UL];
    out->mOBS_ACT.mX[808UL] = BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[809UL] = t3626->mX.mX[80UL];
    out->mOBS_ACT.mX[810UL] = t3626->mX.mX[80UL];
    out->mOBS_ACT.mX[811UL] = t3626->mX.mX[1148UL] * 1000.0;
    out->mOBS_ACT.mX[812UL] = BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[813UL] = t3626->mX.mX[80UL];
    out->mOBS_ACT.mX[814UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[815UL] = BatteryPack_v2_ModuleAssembly2_Module12_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[816UL] = BatteryPack_v2_ModuleAssembly2_Module12_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[817UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[818UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[819UL] = 0.0;
    out->mOBS_ACT.mX[820UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[821UL] = intrm_sf_mf_110;
    out->mOBS_ACT.mX[822UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[823UL] = 0.0;
    out->mOBS_ACT.mX[824UL] = intrm_sf_mf_110;
    out->mOBS_ACT.mX[825UL] = t3626->mX.mX[80UL];
    out->mOBS_ACT.mX[826UL] = BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[827UL] = 0.0;
    out->mOBS_ACT.mX[828UL] = t3626->mX.mX[80UL];
    out->mOBS_ACT.mX[829UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[830UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[831UL] = t3626->mX.mX[82UL];
    out->mOBS_ACT.mX[832UL] = intrm_sf_mf_110;
    out->mOBS_ACT.mX[833UL] = t3626->mX.mX[1147UL];
    out->mOBS_ACT.mX[834UL] = t3626->mX.mX[1147UL];
    out->mOBS_ACT.mX[835UL] = t3626->mX.mX[80UL];
    out->mOBS_ACT.mX[836UL] = BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[837UL] = intrm_sf_mf_110 - BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[838UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[839UL] = t3626->mX.mX[88UL];
    out->mOBS_ACT.mX[840UL] = t3626->mX.mX[88UL];
    out->mOBS_ACT.mX[841UL] = t3626->mX.mX[88UL];
    out->mOBS_ACT.mX[842UL] = t3626->mX.mX[88UL];
    out->mOBS_ACT.mX[843UL] = t3626->mX.mX[89UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[844UL] = t3626->mX.mX[88UL];
    out->mOBS_ACT.mX[845UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[846UL] = intrm_sf_mf_109;
    out->mOBS_ACT.mX[847UL] = t3626->mX.mX[90UL];
    out->mOBS_ACT.mX[848UL] = t3626->mX.mX[90UL];
    out->mOBS_ACT.mX[849UL] = t3626->mX.mX[1151UL];
    out->mOBS_ACT.mX[850UL] = 1.0;
    out->mOBS_ACT.mX[851UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    for (t2773 = 91UL; t2773 - 91UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 761UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 857UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[862UL] = 0.0;
    out->mOBS_ACT.mX[863UL] = t3626->mX.mX[1150UL];
    out->mOBS_ACT.mX[864UL] = t3626->mX.mX[1152UL] * 1000.0;
    out->mOBS_ACT.mX[865UL] = t3626->mX.mX[1151UL];
    out->mOBS_ACT.mX[866UL] = zc_int30;
    out->mOBS_ACT.mX[867UL] = 1.0;
    out->mOBS_ACT.mX[868UL] = t3626->mX.mX[1149UL];
    out->mOBS_ACT.mX[869UL] = 1.0;
    out->mOBS_ACT.mX[870UL] = t3626->mX.mX[88UL];
    out->mOBS_ACT.mX[871UL] = t3626->mX.mX[90UL];
    out->mOBS_ACT.mX[872UL] = 1.0;
    out->mOBS_ACT.mX[873UL] = t3626->mX.mX[1149UL];
    out->mOBS_ACT.mX[874UL] = t3626->mX.mX[1150UL];
    out->mOBS_ACT.mX[875UL] = 1.0;
    out->mOBS_ACT.mX[876UL] = 1.0;
    out->mOBS_ACT.mX[877UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[878UL] = intrm_sf_mf_109;
    out->mOBS_ACT.mX[879UL] = t3626->mX.mX[90UL];
    out->mOBS_ACT.mX[880UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[881UL] = t3626->mX.mX[1151UL];
    out->mOBS_ACT.mX[882UL] = t3626->mX.mX[1151UL];
    out->mOBS_ACT.mX[883UL] = t3626->mX.mX[88UL];
    out->mOBS_ACT.mX[884UL] = BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[885UL] = t3626->mX.mX[88UL];
    out->mOBS_ACT.mX[886UL] = t3626->mX.mX[88UL];
    out->mOBS_ACT.mX[887UL] = t3626->mX.mX[1152UL] * 1000.0;
    out->mOBS_ACT.mX[888UL] = zc_int30;
    out->mOBS_ACT.mX[889UL] = t3626->mX.mX[88UL];
    out->mOBS_ACT.mX[890UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[891UL] = BatteryPack_v2_ModuleAssembly2_Module13_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[892UL] = BatteryPack_v2_ModuleAssembly2_Module13_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[893UL] = intrm_sf_mf_109;
    out->mOBS_ACT.mX[894UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[895UL] = 0.0;
    out->mOBS_ACT.mX[896UL] = intrm_sf_mf_109;
    out->mOBS_ACT.mX[897UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[898UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[899UL] = 0.0;
    out->mOBS_ACT.mX[900UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[901UL] = t3626->mX.mX[88UL];
    out->mOBS_ACT.mX[902UL] = BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[903UL] = 0.0;
    out->mOBS_ACT.mX[904UL] = t3626->mX.mX[88UL];
    out->mOBS_ACT.mX[905UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[906UL] = intrm_sf_mf_109;
    out->mOBS_ACT.mX[907UL] = t3626->mX.mX[90UL];
    out->mOBS_ACT.mX[908UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[909UL] = t3626->mX.mX[1151UL];
    out->mOBS_ACT.mX[910UL] = t3626->mX.mX[1151UL];
    out->mOBS_ACT.mX[911UL] = t3626->mX.mX[88UL];
    out->mOBS_ACT.mX[912UL] = zc_int30;
    out->mOBS_ACT.mX[913UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3 - intrm_sf_mf_109;
    out->mOBS_ACT.mX[914UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[915UL] = t3626->mX.mX[96UL];
    out->mOBS_ACT.mX[916UL] = t3626->mX.mX[96UL];
    out->mOBS_ACT.mX[917UL] = t3626->mX.mX[96UL];
    out->mOBS_ACT.mX[918UL] = t3626->mX.mX[96UL];
    out->mOBS_ACT.mX[919UL] = t3626->mX.mX[97UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[920UL] = t3626->mX.mX[96UL];
    out->mOBS_ACT.mX[921UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[922UL] = zc_int439;
    out->mOBS_ACT.mX[923UL] = t3626->mX.mX[98UL];
    out->mOBS_ACT.mX[924UL] = t3626->mX.mX[98UL];
    out->mOBS_ACT.mX[925UL] = t3626->mX.mX[1155UL];
    out->mOBS_ACT.mX[926UL] = 1.0;
    out->mOBS_ACT.mX[927UL] = intrm_sf_mf_109;
    for (t2773 = 99UL; t2773 - 99UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 829UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 933UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[938UL] = 0.0;
    out->mOBS_ACT.mX[939UL] = t3626->mX.mX[1154UL];
    out->mOBS_ACT.mX[940UL] = t3626->mX.mX[1156UL] * 1000.0;
    out->mOBS_ACT.mX[941UL] = t3626->mX.mX[1155UL];
    out->mOBS_ACT.mX[942UL] = zc_int35;
    out->mOBS_ACT.mX[943UL] = 1.0;
    out->mOBS_ACT.mX[944UL] = t3626->mX.mX[1153UL];
    out->mOBS_ACT.mX[945UL] = 1.0;
    out->mOBS_ACT.mX[946UL] = t3626->mX.mX[96UL];
    out->mOBS_ACT.mX[947UL] = t3626->mX.mX[98UL];
    out->mOBS_ACT.mX[948UL] = 1.0;
    out->mOBS_ACT.mX[949UL] = t3626->mX.mX[1153UL];
    out->mOBS_ACT.mX[950UL] = t3626->mX.mX[1154UL];
    out->mOBS_ACT.mX[951UL] = 1.0;
    out->mOBS_ACT.mX[952UL] = 1.0;
    out->mOBS_ACT.mX[953UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[954UL] = zc_int439;
    out->mOBS_ACT.mX[955UL] = t3626->mX.mX[98UL];
    out->mOBS_ACT.mX[956UL] = intrm_sf_mf_109;
    out->mOBS_ACT.mX[957UL] = t3626->mX.mX[1155UL];
    out->mOBS_ACT.mX[958UL] = t3626->mX.mX[1155UL];
    out->mOBS_ACT.mX[959UL] = t3626->mX.mX[96UL];
    out->mOBS_ACT.mX[960UL] = BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[961UL] = t3626->mX.mX[96UL];
    out->mOBS_ACT.mX[962UL] = t3626->mX.mX[96UL];
    out->mOBS_ACT.mX[963UL] = t3626->mX.mX[1156UL] * 1000.0;
    out->mOBS_ACT.mX[964UL] = zc_int35;
    out->mOBS_ACT.mX[965UL] = t3626->mX.mX[96UL];
    out->mOBS_ACT.mX[966UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[967UL] = BatteryPack_v2_ModuleAssembly2_Module14_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[968UL] = BatteryPack_v2_ModuleAssembly2_Module14_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[969UL] = zc_int439;
    out->mOBS_ACT.mX[970UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[971UL] = 0.0;
    out->mOBS_ACT.mX[972UL] = zc_int439;
    out->mOBS_ACT.mX[973UL] = intrm_sf_mf_109;
    out->mOBS_ACT.mX[974UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[975UL] = 0.0;
    out->mOBS_ACT.mX[976UL] = intrm_sf_mf_109;
    out->mOBS_ACT.mX[977UL] = t3626->mX.mX[96UL];
    out->mOBS_ACT.mX[978UL] = BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[979UL] = 0.0;
    out->mOBS_ACT.mX[980UL] = t3626->mX.mX[96UL];
    out->mOBS_ACT.mX[981UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[982UL] = zc_int439;
    out->mOBS_ACT.mX[983UL] = t3626->mX.mX[98UL];
    out->mOBS_ACT.mX[984UL] = intrm_sf_mf_109;
    out->mOBS_ACT.mX[985UL] = t3626->mX.mX[1155UL];
    out->mOBS_ACT.mX[986UL] = t3626->mX.mX[1155UL];
    out->mOBS_ACT.mX[987UL] = t3626->mX.mX[96UL];
    out->mOBS_ACT.mX[988UL] = zc_int35;
    out->mOBS_ACT.mX[989UL] = intrm_sf_mf_109 - zc_int439;
    out->mOBS_ACT.mX[990UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[991UL] = t3626->mX.mX[104UL];
    out->mOBS_ACT.mX[992UL] = t3626->mX.mX[104UL];
    out->mOBS_ACT.mX[993UL] = t3626->mX.mX[104UL];
    out->mOBS_ACT.mX[994UL] = t3626->mX.mX[104UL];
    out->mOBS_ACT.mX[995UL] = t3626->mX.mX[105UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[996UL] = t3626->mX.mX[104UL];
    out->mOBS_ACT.mX[997UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[998UL] = intrm_sf_mf_108;
    out->mOBS_ACT.mX[999UL] = t3626->mX.mX[106UL];
    out->mOBS_ACT.mX[1000UL] = t3626->mX.mX[106UL];
    out->mOBS_ACT.mX[1001UL] = t3626->mX.mX[1159UL];
    out->mOBS_ACT.mX[1002UL] = 1.0;
    out->mOBS_ACT.mX[1003UL] = zc_int439;
    for (t2773 = 107UL; t2773 - 107UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 897UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1009UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[1014UL] = 0.0;
    out->mOBS_ACT.mX[1015UL] = t3626->mX.mX[1158UL];
    out->mOBS_ACT.mX[1016UL] = t3626->mX.mX[1160UL] * 1000.0;
    out->mOBS_ACT.mX[1017UL] = t3626->mX.mX[1159UL];
    out->mOBS_ACT.mX[1018UL] = zc_int38;
    out->mOBS_ACT.mX[1019UL] = 1.0;
    out->mOBS_ACT.mX[1020UL] = t3626->mX.mX[1157UL];
    out->mOBS_ACT.mX[1021UL] = 1.0;
    out->mOBS_ACT.mX[1022UL] = t3626->mX.mX[104UL];
    out->mOBS_ACT.mX[1023UL] = t3626->mX.mX[106UL];
    out->mOBS_ACT.mX[1024UL] = 1.0;
    out->mOBS_ACT.mX[1025UL] = t3626->mX.mX[1157UL];
    out->mOBS_ACT.mX[1026UL] = t3626->mX.mX[1158UL];
    out->mOBS_ACT.mX[1027UL] = 1.0;
    out->mOBS_ACT.mX[1028UL] = 1.0;
    out->mOBS_ACT.mX[1029UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1030UL] = intrm_sf_mf_108;
    out->mOBS_ACT.mX[1031UL] = t3626->mX.mX[106UL];
    out->mOBS_ACT.mX[1032UL] = zc_int439;
    out->mOBS_ACT.mX[1033UL] = t3626->mX.mX[1159UL];
    out->mOBS_ACT.mX[1034UL] = t3626->mX.mX[1159UL];
    out->mOBS_ACT.mX[1035UL] = t3626->mX.mX[104UL];
    out->mOBS_ACT.mX[1036UL] = BatteryPack_v2_ModuleAssembly2_Module15_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[1037UL] = t3626->mX.mX[104UL];
    out->mOBS_ACT.mX[1038UL] = t3626->mX.mX[104UL];
    out->mOBS_ACT.mX[1039UL] = t3626->mX.mX[1160UL] * 1000.0;
    out->mOBS_ACT.mX[1040UL] = zc_int38;
    out->mOBS_ACT.mX[1041UL] = t3626->mX.mX[104UL];
    out->mOBS_ACT.mX[1042UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1043UL] = BatteryPack_v2_ModuleAssembly2_Module15_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[1044UL] = BatteryPack_v2_ModuleAssembly2_Module15_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[1045UL] = intrm_sf_mf_108;
    out->mOBS_ACT.mX[1046UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1047UL] = 0.0;
    out->mOBS_ACT.mX[1048UL] = intrm_sf_mf_108;
    out->mOBS_ACT.mX[1049UL] = zc_int439;
    out->mOBS_ACT.mX[1050UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1051UL] = 0.0;
    out->mOBS_ACT.mX[1052UL] = zc_int439;
    out->mOBS_ACT.mX[1053UL] = t3626->mX.mX[104UL];
    out->mOBS_ACT.mX[1054UL] = BatteryPack_v2_ModuleAssembly2_Module15_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[1055UL] = 0.0;
    out->mOBS_ACT.mX[1056UL] = t3626->mX.mX[104UL];
    out->mOBS_ACT.mX[1057UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1058UL] = intrm_sf_mf_108;
    out->mOBS_ACT.mX[1059UL] = t3626->mX.mX[106UL];
    out->mOBS_ACT.mX[1060UL] = zc_int439;
    out->mOBS_ACT.mX[1061UL] = t3626->mX.mX[1159UL];
    out->mOBS_ACT.mX[1062UL] = t3626->mX.mX[1159UL];
    out->mOBS_ACT.mX[1063UL] = t3626->mX.mX[104UL];
    out->mOBS_ACT.mX[1064UL] = zc_int38;
    out->mOBS_ACT.mX[1065UL] = zc_int439 - intrm_sf_mf_108;
    out->mOBS_ACT.mX[1066UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1067UL] = t3626->mX.mX[112UL];
    out->mOBS_ACT.mX[1068UL] = t3626->mX.mX[112UL];
    out->mOBS_ACT.mX[1069UL] = t3626->mX.mX[112UL];
    out->mOBS_ACT.mX[1070UL] = t3626->mX.mX[112UL];
    out->mOBS_ACT.mX[1071UL] = t3626->mX.mX[113UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[1072UL] = t3626->mX.mX[112UL];
    out->mOBS_ACT.mX[1073UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1074UL] = zc_int51;
    out->mOBS_ACT.mX[1075UL] = t3626->mX.mX[114UL];
    out->mOBS_ACT.mX[1076UL] = t3626->mX.mX[114UL];
    out->mOBS_ACT.mX[1077UL] = t3626->mX.mX[1163UL];
    out->mOBS_ACT.mX[1078UL] = 1.0;
    out->mOBS_ACT.mX[1079UL] = intrm_sf_mf_108;
    for (t2773 = 115UL; t2773 - 115UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 965UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1085UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[1090UL] = 0.0;
    out->mOBS_ACT.mX[1091UL] = t3626->mX.mX[1162UL];
    out->mOBS_ACT.mX[1092UL] = t3626->mX.mX[1164UL] * 1000.0;
    out->mOBS_ACT.mX[1093UL] = t3626->mX.mX[1163UL];
    out->mOBS_ACT.mX[1094UL] = zc_int40;
    out->mOBS_ACT.mX[1095UL] = 1.0;
    out->mOBS_ACT.mX[1096UL] = t3626->mX.mX[1161UL];
    out->mOBS_ACT.mX[1097UL] = 1.0;
    out->mOBS_ACT.mX[1098UL] = t3626->mX.mX[112UL];
    out->mOBS_ACT.mX[1099UL] = t3626->mX.mX[114UL];
    out->mOBS_ACT.mX[1100UL] = 1.0;
    out->mOBS_ACT.mX[1101UL] = t3626->mX.mX[1161UL];
    out->mOBS_ACT.mX[1102UL] = t3626->mX.mX[1162UL];
    out->mOBS_ACT.mX[1103UL] = 1.0;
    out->mOBS_ACT.mX[1104UL] = 1.0;
    out->mOBS_ACT.mX[1105UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1106UL] = zc_int51;
    out->mOBS_ACT.mX[1107UL] = t3626->mX.mX[114UL];
    out->mOBS_ACT.mX[1108UL] = intrm_sf_mf_108;
    out->mOBS_ACT.mX[1109UL] = t3626->mX.mX[1163UL];
    out->mOBS_ACT.mX[1110UL] = t3626->mX.mX[1163UL];
    out->mOBS_ACT.mX[1111UL] = t3626->mX.mX[112UL];
    out->mOBS_ACT.mX[1112UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[1113UL] = t3626->mX.mX[112UL];
    out->mOBS_ACT.mX[1114UL] = t3626->mX.mX[112UL];
    out->mOBS_ACT.mX[1115UL] = t3626->mX.mX[1164UL] * 1000.0;
    out->mOBS_ACT.mX[1116UL] = zc_int40;
    out->mOBS_ACT.mX[1117UL] = t3626->mX.mX[112UL];
    out->mOBS_ACT.mX[1118UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1119UL] = BatteryPack_v2_ModuleAssembly2_Module16_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[1120UL] = BatteryPack_v2_ModuleAssembly2_Module16_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[1121UL] = zc_int51;
    out->mOBS_ACT.mX[1122UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1123UL] = 0.0;
    out->mOBS_ACT.mX[1124UL] = zc_int51;
    out->mOBS_ACT.mX[1125UL] = intrm_sf_mf_108;
    out->mOBS_ACT.mX[1126UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1127UL] = 0.0;
    out->mOBS_ACT.mX[1128UL] = intrm_sf_mf_108;
    out->mOBS_ACT.mX[1129UL] = t3626->mX.mX[112UL];
    out->mOBS_ACT.mX[1130UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[1131UL] = 0.0;
    out->mOBS_ACT.mX[1132UL] = t3626->mX.mX[112UL];
    out->mOBS_ACT.mX[1133UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1134UL] = zc_int51;
    out->mOBS_ACT.mX[1135UL] = t3626->mX.mX[114UL];
    out->mOBS_ACT.mX[1136UL] = intrm_sf_mf_108;
    out->mOBS_ACT.mX[1137UL] = t3626->mX.mX[1163UL];
    out->mOBS_ACT.mX[1138UL] = t3626->mX.mX[1163UL];
    out->mOBS_ACT.mX[1139UL] = t3626->mX.mX[112UL];
    out->mOBS_ACT.mX[1140UL] = zc_int40;
    out->mOBS_ACT.mX[1141UL] = intrm_sf_mf_108 - zc_int51;
    out->mOBS_ACT.mX[1142UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1143UL] = t3626->mX.mX[120UL];
    out->mOBS_ACT.mX[1144UL] = t3626->mX.mX[120UL];
    out->mOBS_ACT.mX[1145UL] = t3626->mX.mX[120UL];
    out->mOBS_ACT.mX[1146UL] = t3626->mX.mX[120UL];
    out->mOBS_ACT.mX[1147UL] = t3626->mX.mX[121UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[1148UL] = t3626->mX.mX[120UL];
    out->mOBS_ACT.mX[1149UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1150UL] = zc_int436;
    out->mOBS_ACT.mX[1151UL] = t3626->mX.mX[122UL];
    out->mOBS_ACT.mX[1152UL] = t3626->mX.mX[122UL];
    out->mOBS_ACT.mX[1153UL] = t3626->mX.mX[1167UL];
    out->mOBS_ACT.mX[1154UL] = 1.0;
    out->mOBS_ACT.mX[1155UL] = zc_int51;
    for (t2773 = 123UL; t2773 - 123UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1033UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1161UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[1166UL] = 0.0;
    out->mOBS_ACT.mX[1167UL] = t3626->mX.mX[1166UL];
    out->mOBS_ACT.mX[1168UL] = t3626->mX.mX[1168UL] * 1000.0;
    out->mOBS_ACT.mX[1169UL] = t3626->mX.mX[1167UL];
    out->mOBS_ACT.mX[1170UL] = zc_int44;
    out->mOBS_ACT.mX[1171UL] = 1.0;
    out->mOBS_ACT.mX[1172UL] = t3626->mX.mX[1165UL];
    out->mOBS_ACT.mX[1173UL] = 1.0;
    out->mOBS_ACT.mX[1174UL] = t3626->mX.mX[120UL];
    out->mOBS_ACT.mX[1175UL] = t3626->mX.mX[122UL];
    out->mOBS_ACT.mX[1176UL] = 1.0;
    out->mOBS_ACT.mX[1177UL] = t3626->mX.mX[1165UL];
    out->mOBS_ACT.mX[1178UL] = t3626->mX.mX[1166UL];
    out->mOBS_ACT.mX[1179UL] = 1.0;
    out->mOBS_ACT.mX[1180UL] = 1.0;
    out->mOBS_ACT.mX[1181UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1182UL] = zc_int436;
    out->mOBS_ACT.mX[1183UL] = t3626->mX.mX[122UL];
    out->mOBS_ACT.mX[1184UL] = zc_int51;
    out->mOBS_ACT.mX[1185UL] = t3626->mX.mX[1167UL];
    out->mOBS_ACT.mX[1186UL] = t3626->mX.mX[1167UL];
    out->mOBS_ACT.mX[1187UL] = t3626->mX.mX[120UL];
    out->mOBS_ACT.mX[1188UL] = BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[1189UL] = t3626->mX.mX[120UL];
    out->mOBS_ACT.mX[1190UL] = t3626->mX.mX[120UL];
    out->mOBS_ACT.mX[1191UL] = t3626->mX.mX[1168UL] * 1000.0;
    out->mOBS_ACT.mX[1192UL] = zc_int44;
    out->mOBS_ACT.mX[1193UL] = t3626->mX.mX[120UL];
    out->mOBS_ACT.mX[1194UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1195UL] = BatteryPack_v2_ModuleAssembly2_Module17_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[1196UL] = BatteryPack_v2_ModuleAssembly2_Module17_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[1197UL] = zc_int436;
    out->mOBS_ACT.mX[1198UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1199UL] = 0.0;
    out->mOBS_ACT.mX[1200UL] = zc_int436;
    out->mOBS_ACT.mX[1201UL] = zc_int51;
    out->mOBS_ACT.mX[1202UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1203UL] = 0.0;
    out->mOBS_ACT.mX[1204UL] = zc_int51;
    out->mOBS_ACT.mX[1205UL] = t3626->mX.mX[120UL];
    out->mOBS_ACT.mX[1206UL] = BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[1207UL] = 0.0;
    out->mOBS_ACT.mX[1208UL] = t3626->mX.mX[120UL];
    out->mOBS_ACT.mX[1209UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1210UL] = zc_int436;
    out->mOBS_ACT.mX[1211UL] = t3626->mX.mX[122UL];
    out->mOBS_ACT.mX[1212UL] = zc_int51;
    out->mOBS_ACT.mX[1213UL] = t3626->mX.mX[1167UL];
    out->mOBS_ACT.mX[1214UL] = t3626->mX.mX[1167UL];
    out->mOBS_ACT.mX[1215UL] = t3626->mX.mX[120UL];
    out->mOBS_ACT.mX[1216UL] = zc_int44;
    out->mOBS_ACT.mX[1217UL] = zc_int51 - zc_int436;
    out->mOBS_ACT.mX[1218UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1219UL] = t3626->mX.mX[128UL];
    out->mOBS_ACT.mX[1220UL] = t3626->mX.mX[128UL];
    out->mOBS_ACT.mX[1221UL] = t3626->mX.mX[128UL];
    out->mOBS_ACT.mX[1222UL] = t3626->mX.mX[128UL];
    out->mOBS_ACT.mX[1223UL] = t3626->mX.mX[129UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[1224UL] = t3626->mX.mX[128UL];
    out->mOBS_ACT.mX[1225UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1226UL] = zc_int435;
    out->mOBS_ACT.mX[1227UL] = t3626->mX.mX[130UL];
    out->mOBS_ACT.mX[1228UL] = t3626->mX.mX[130UL];
    out->mOBS_ACT.mX[1229UL] = t3626->mX.mX[1171UL];
    out->mOBS_ACT.mX[1230UL] = 1.0;
    out->mOBS_ACT.mX[1231UL] = zc_int436;
    for (t2773 = 131UL; t2773 - 131UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1101UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1237UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[1242UL] = 0.0;
    out->mOBS_ACT.mX[1243UL] = t3626->mX.mX[1170UL];
    out->mOBS_ACT.mX[1244UL] = t3626->mX.mX[1172UL] * 1000.0;
    out->mOBS_ACT.mX[1245UL] = t3626->mX.mX[1171UL];
    out->mOBS_ACT.mX[1246UL] = zc_int46;
    out->mOBS_ACT.mX[1247UL] = 1.0;
    out->mOBS_ACT.mX[1248UL] = t3626->mX.mX[1169UL];
    out->mOBS_ACT.mX[1249UL] = 1.0;
    out->mOBS_ACT.mX[1250UL] = t3626->mX.mX[128UL];
    out->mOBS_ACT.mX[1251UL] = t3626->mX.mX[130UL];
    out->mOBS_ACT.mX[1252UL] = 1.0;
    out->mOBS_ACT.mX[1253UL] = t3626->mX.mX[1169UL];
    out->mOBS_ACT.mX[1254UL] = t3626->mX.mX[1170UL];
    out->mOBS_ACT.mX[1255UL] = 1.0;
    out->mOBS_ACT.mX[1256UL] = 1.0;
    out->mOBS_ACT.mX[1257UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1258UL] = zc_int435;
    out->mOBS_ACT.mX[1259UL] = t3626->mX.mX[130UL];
    out->mOBS_ACT.mX[1260UL] = zc_int436;
    out->mOBS_ACT.mX[1261UL] = t3626->mX.mX[1171UL];
    out->mOBS_ACT.mX[1262UL] = t3626->mX.mX[1171UL];
    out->mOBS_ACT.mX[1263UL] = t3626->mX.mX[128UL];
    out->mOBS_ACT.mX[1264UL] = BatteryPack_v2_ModuleAssembly2_Module18_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[1265UL] = t3626->mX.mX[128UL];
    out->mOBS_ACT.mX[1266UL] = t3626->mX.mX[128UL];
    out->mOBS_ACT.mX[1267UL] = t3626->mX.mX[1172UL] * 1000.0;
    out->mOBS_ACT.mX[1268UL] = zc_int46;
    out->mOBS_ACT.mX[1269UL] = t3626->mX.mX[128UL];
    out->mOBS_ACT.mX[1270UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1271UL] = BatteryPack_v2_ModuleAssembly2_Module18_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[1272UL] = BatteryPack_v2_ModuleAssembly2_Module18_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[1273UL] = zc_int435;
    out->mOBS_ACT.mX[1274UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1275UL] = 0.0;
    out->mOBS_ACT.mX[1276UL] = zc_int435;
    out->mOBS_ACT.mX[1277UL] = zc_int436;
    out->mOBS_ACT.mX[1278UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1279UL] = 0.0;
    out->mOBS_ACT.mX[1280UL] = zc_int436;
    out->mOBS_ACT.mX[1281UL] = t3626->mX.mX[128UL];
    out->mOBS_ACT.mX[1282UL] = BatteryPack_v2_ModuleAssembly2_Module18_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[1283UL] = 0.0;
    out->mOBS_ACT.mX[1284UL] = t3626->mX.mX[128UL];
    out->mOBS_ACT.mX[1285UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1286UL] = zc_int435;
    out->mOBS_ACT.mX[1287UL] = t3626->mX.mX[130UL];
    out->mOBS_ACT.mX[1288UL] = zc_int436;
    out->mOBS_ACT.mX[1289UL] = t3626->mX.mX[1171UL];
    out->mOBS_ACT.mX[1290UL] = t3626->mX.mX[1171UL];
    out->mOBS_ACT.mX[1291UL] = t3626->mX.mX[128UL];
    out->mOBS_ACT.mX[1292UL] = zc_int46;
    out->mOBS_ACT.mX[1293UL] = zc_int436 - zc_int435;
    out->mOBS_ACT.mX[1294UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1295UL] = t3626->mX.mX[136UL];
    out->mOBS_ACT.mX[1296UL] = t3626->mX.mX[136UL];
    out->mOBS_ACT.mX[1297UL] = t3626->mX.mX[136UL];
    out->mOBS_ACT.mX[1298UL] = t3626->mX.mX[136UL];
    out->mOBS_ACT.mX[1299UL] = t3626->mX.mX[137UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[1300UL] = t3626->mX.mX[136UL];
    out->mOBS_ACT.mX[1301UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1302UL] = intrm_sf_mf_18;
    out->mOBS_ACT.mX[1303UL] = t3626->mX.mX[138UL];
    out->mOBS_ACT.mX[1304UL] = t3626->mX.mX[138UL];
    out->mOBS_ACT.mX[1305UL] = t3626->mX.mX[1175UL];
    out->mOBS_ACT.mX[1306UL] = 1.0;
    out->mOBS_ACT.mX[1307UL] = zc_int435;
    for (t2773 = 139UL; t2773 - 139UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1169UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1313UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[1318UL] = 0.0;
    out->mOBS_ACT.mX[1319UL] = t3626->mX.mX[1174UL];
    out->mOBS_ACT.mX[1320UL] = t3626->mX.mX[1176UL] * 1000.0;
    out->mOBS_ACT.mX[1321UL] = t3626->mX.mX[1175UL];
    out->mOBS_ACT.mX[1322UL] = zc_int49;
    out->mOBS_ACT.mX[1323UL] = 1.0;
    out->mOBS_ACT.mX[1324UL] = t3626->mX.mX[1173UL];
    out->mOBS_ACT.mX[1325UL] = 1.0;
    out->mOBS_ACT.mX[1326UL] = t3626->mX.mX[136UL];
    out->mOBS_ACT.mX[1327UL] = t3626->mX.mX[138UL];
    out->mOBS_ACT.mX[1328UL] = 1.0;
    out->mOBS_ACT.mX[1329UL] = t3626->mX.mX[1173UL];
    out->mOBS_ACT.mX[1330UL] = t3626->mX.mX[1174UL];
    out->mOBS_ACT.mX[1331UL] = 1.0;
    out->mOBS_ACT.mX[1332UL] = 1.0;
    out->mOBS_ACT.mX[1333UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1334UL] = intrm_sf_mf_18;
    out->mOBS_ACT.mX[1335UL] = t3626->mX.mX[138UL];
    out->mOBS_ACT.mX[1336UL] = zc_int435;
    out->mOBS_ACT.mX[1337UL] = t3626->mX.mX[1175UL];
    out->mOBS_ACT.mX[1338UL] = t3626->mX.mX[1175UL];
    out->mOBS_ACT.mX[1339UL] = t3626->mX.mX[136UL];
    out->mOBS_ACT.mX[1340UL] = BatteryPack_v2_ModuleAssembly2_Module19_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[1341UL] = t3626->mX.mX[136UL];
    out->mOBS_ACT.mX[1342UL] = t3626->mX.mX[136UL];
    out->mOBS_ACT.mX[1343UL] = t3626->mX.mX[1176UL] * 1000.0;
    out->mOBS_ACT.mX[1344UL] = zc_int49;
    out->mOBS_ACT.mX[1345UL] = t3626->mX.mX[136UL];
    out->mOBS_ACT.mX[1346UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1347UL] = BatteryPack_v2_ModuleAssembly2_Module19_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[1348UL] = BatteryPack_v2_ModuleAssembly2_Module19_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[1349UL] = intrm_sf_mf_18;
    out->mOBS_ACT.mX[1350UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1351UL] = 0.0;
    out->mOBS_ACT.mX[1352UL] = intrm_sf_mf_18;
    out->mOBS_ACT.mX[1353UL] = zc_int435;
    out->mOBS_ACT.mX[1354UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1355UL] = 0.0;
    out->mOBS_ACT.mX[1356UL] = zc_int435;
    out->mOBS_ACT.mX[1357UL] = t3626->mX.mX[136UL];
    out->mOBS_ACT.mX[1358UL] = BatteryPack_v2_ModuleAssembly2_Module19_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[1359UL] = 0.0;
    out->mOBS_ACT.mX[1360UL] = t3626->mX.mX[136UL];
    out->mOBS_ACT.mX[1361UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1362UL] = intrm_sf_mf_18;
    out->mOBS_ACT.mX[1363UL] = t3626->mX.mX[138UL];
    out->mOBS_ACT.mX[1364UL] = zc_int435;
    out->mOBS_ACT.mX[1365UL] = t3626->mX.mX[1175UL];
    out->mOBS_ACT.mX[1366UL] = t3626->mX.mX[1175UL];
    out->mOBS_ACT.mX[1367UL] = t3626->mX.mX[136UL];
    out->mOBS_ACT.mX[1368UL] = zc_int49;
    out->mOBS_ACT.mX[1369UL] = zc_int435 - intrm_sf_mf_18;
    out->mOBS_ACT.mX[1370UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1371UL] = t3626->mX.mX[144UL];
    out->mOBS_ACT.mX[1372UL] = t3626->mX.mX[144UL];
    out->mOBS_ACT.mX[1373UL] = t3626->mX.mX[144UL];
    out->mOBS_ACT.mX[1374UL] = t3626->mX.mX[144UL];
    out->mOBS_ACT.mX[1375UL] = t3626->mX.mX[145UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[1376UL] = t3626->mX.mX[144UL];
    out->mOBS_ACT.mX[1377UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1378UL] = intrm_sf_mf_19;
    out->mOBS_ACT.mX[1379UL] = t3626->mX.mX[146UL];
    out->mOBS_ACT.mX[1380UL] = t3626->mX.mX[146UL];
    out->mOBS_ACT.mX[1381UL] = t3626->mX.mX[1179UL];
    out->mOBS_ACT.mX[1382UL] = 1.0;
    out->mOBS_ACT.mX[1383UL] = intrm_sf_mf_18;
    for (t2773 = 147UL; t2773 - 147UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1237UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1389UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[1394UL] = 0.0;
    out->mOBS_ACT.mX[1395UL] = t3626->mX.mX[1178UL];
    out->mOBS_ACT.mX[1396UL] = t3626->mX.mX[1180UL] * 1000.0;
    out->mOBS_ACT.mX[1397UL] = t3626->mX.mX[1179UL];
    out->mOBS_ACT.mX[1398UL] = zc_int53;
    out->mOBS_ACT.mX[1399UL] = 1.0;
    out->mOBS_ACT.mX[1400UL] = t3626->mX.mX[1177UL];
    out->mOBS_ACT.mX[1401UL] = 1.0;
    out->mOBS_ACT.mX[1402UL] = t3626->mX.mX[144UL];
    out->mOBS_ACT.mX[1403UL] = t3626->mX.mX[146UL];
    out->mOBS_ACT.mX[1404UL] = 1.0;
    out->mOBS_ACT.mX[1405UL] = t3626->mX.mX[1177UL];
    out->mOBS_ACT.mX[1406UL] = t3626->mX.mX[1178UL];
    out->mOBS_ACT.mX[1407UL] = 1.0;
    out->mOBS_ACT.mX[1408UL] = 1.0;
    out->mOBS_ACT.mX[1409UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1410UL] = intrm_sf_mf_19;
    out->mOBS_ACT.mX[1411UL] = t3626->mX.mX[146UL];
    out->mOBS_ACT.mX[1412UL] = intrm_sf_mf_18;
    out->mOBS_ACT.mX[1413UL] = t3626->mX.mX[1179UL];
    out->mOBS_ACT.mX[1414UL] = t3626->mX.mX[1179UL];
    out->mOBS_ACT.mX[1415UL] = t3626->mX.mX[144UL];
    out->mOBS_ACT.mX[1416UL] = BatteryPack_v2_ModuleAssembly2_Module20_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[1417UL] = t3626->mX.mX[144UL];
    out->mOBS_ACT.mX[1418UL] = t3626->mX.mX[144UL];
    out->mOBS_ACT.mX[1419UL] = t3626->mX.mX[1180UL] * 1000.0;
    out->mOBS_ACT.mX[1420UL] = zc_int53;
    out->mOBS_ACT.mX[1421UL] = t3626->mX.mX[144UL];
    out->mOBS_ACT.mX[1422UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1423UL] = BatteryPack_v2_ModuleAssembly2_Module20_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[1424UL] = BatteryPack_v2_ModuleAssembly2_Module20_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[1425UL] = intrm_sf_mf_19;
    out->mOBS_ACT.mX[1426UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1427UL] = 0.0;
    out->mOBS_ACT.mX[1428UL] = intrm_sf_mf_19;
    out->mOBS_ACT.mX[1429UL] = intrm_sf_mf_18;
    out->mOBS_ACT.mX[1430UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1431UL] = 0.0;
    out->mOBS_ACT.mX[1432UL] = intrm_sf_mf_18;
    out->mOBS_ACT.mX[1433UL] = t3626->mX.mX[144UL];
    out->mOBS_ACT.mX[1434UL] = BatteryPack_v2_ModuleAssembly2_Module20_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[1435UL] = 0.0;
    out->mOBS_ACT.mX[1436UL] = t3626->mX.mX[144UL];
    out->mOBS_ACT.mX[1437UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1438UL] = intrm_sf_mf_19;
    out->mOBS_ACT.mX[1439UL] = t3626->mX.mX[146UL];
    out->mOBS_ACT.mX[1440UL] = intrm_sf_mf_18;
    out->mOBS_ACT.mX[1441UL] = t3626->mX.mX[1179UL];
    out->mOBS_ACT.mX[1442UL] = t3626->mX.mX[1179UL];
    out->mOBS_ACT.mX[1443UL] = t3626->mX.mX[144UL];
    out->mOBS_ACT.mX[1444UL] = zc_int53;
    out->mOBS_ACT.mX[1445UL] = intrm_sf_mf_18 - intrm_sf_mf_19;
    out->mOBS_ACT.mX[1446UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1447UL] = t3626->mX.mX[152UL];
    out->mOBS_ACT.mX[1448UL] = t3626->mX.mX[152UL];
    out->mOBS_ACT.mX[1449UL] = t3626->mX.mX[152UL];
    out->mOBS_ACT.mX[1450UL] = t3626->mX.mX[152UL];
    out->mOBS_ACT.mX[1451UL] = t3626->mX.mX[153UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[1452UL] = t3626->mX.mX[152UL];
    out->mOBS_ACT.mX[1453UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1454UL] = intrm_sf_mf_20;
    out->mOBS_ACT.mX[1455UL] = t3626->mX.mX[154UL];
    out->mOBS_ACT.mX[1456UL] = t3626->mX.mX[154UL];
    out->mOBS_ACT.mX[1457UL] = t3626->mX.mX[1183UL];
    out->mOBS_ACT.mX[1458UL] = 1.0;
    out->mOBS_ACT.mX[1459UL] = intrm_sf_mf_19;
    for (t2773 = 155UL; t2773 - 155UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1305UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1465UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[1470UL] = 0.0;
    out->mOBS_ACT.mX[1471UL] = t3626->mX.mX[1182UL];
    out->mOBS_ACT.mX[1472UL] = t3626->mX.mX[1184UL] * 1000.0;
    out->mOBS_ACT.mX[1473UL] = t3626->mX.mX[1183UL];
    out->mOBS_ACT.mX[1474UL] = zc_int55;
    out->mOBS_ACT.mX[1475UL] = 1.0;
    out->mOBS_ACT.mX[1476UL] = t3626->mX.mX[1181UL];
    out->mOBS_ACT.mX[1477UL] = 1.0;
    out->mOBS_ACT.mX[1478UL] = t3626->mX.mX[152UL];
    out->mOBS_ACT.mX[1479UL] = t3626->mX.mX[154UL];
    out->mOBS_ACT.mX[1480UL] = 1.0;
    out->mOBS_ACT.mX[1481UL] = t3626->mX.mX[1181UL];
    out->mOBS_ACT.mX[1482UL] = t3626->mX.mX[1182UL];
    out->mOBS_ACT.mX[1483UL] = 1.0;
    out->mOBS_ACT.mX[1484UL] = 1.0;
    out->mOBS_ACT.mX[1485UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1486UL] = intrm_sf_mf_20;
    out->mOBS_ACT.mX[1487UL] = t3626->mX.mX[154UL];
    out->mOBS_ACT.mX[1488UL] = intrm_sf_mf_19;
    out->mOBS_ACT.mX[1489UL] = t3626->mX.mX[1183UL];
    out->mOBS_ACT.mX[1490UL] = t3626->mX.mX[1183UL];
    out->mOBS_ACT.mX[1491UL] = t3626->mX.mX[152UL];
    out->mOBS_ACT.mX[1492UL] = BatteryPack_v2_ModuleAssembly2_Module21_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[1493UL] = t3626->mX.mX[152UL];
    out->mOBS_ACT.mX[1494UL] = t3626->mX.mX[152UL];
    out->mOBS_ACT.mX[1495UL] = t3626->mX.mX[1184UL] * 1000.0;
    out->mOBS_ACT.mX[1496UL] = zc_int55;
    out->mOBS_ACT.mX[1497UL] = t3626->mX.mX[152UL];
    out->mOBS_ACT.mX[1498UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1499UL] = BatteryPack_v2_ModuleAssembly2_Module21_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[1500UL] = BatteryPack_v2_ModuleAssembly2_Module21_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[1501UL] = intrm_sf_mf_20;
    out->mOBS_ACT.mX[1502UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1503UL] = 0.0;
    out->mOBS_ACT.mX[1504UL] = intrm_sf_mf_20;
    out->mOBS_ACT.mX[1505UL] = intrm_sf_mf_19;
    out->mOBS_ACT.mX[1506UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1507UL] = 0.0;
    out->mOBS_ACT.mX[1508UL] = intrm_sf_mf_19;
    out->mOBS_ACT.mX[1509UL] = t3626->mX.mX[152UL];
    out->mOBS_ACT.mX[1510UL] = BatteryPack_v2_ModuleAssembly2_Module21_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[1511UL] = 0.0;
    out->mOBS_ACT.mX[1512UL] = t3626->mX.mX[152UL];
    out->mOBS_ACT.mX[1513UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1514UL] = intrm_sf_mf_20;
    out->mOBS_ACT.mX[1515UL] = t3626->mX.mX[154UL];
    out->mOBS_ACT.mX[1516UL] = intrm_sf_mf_19;
    out->mOBS_ACT.mX[1517UL] = t3626->mX.mX[1183UL];
    out->mOBS_ACT.mX[1518UL] = t3626->mX.mX[1183UL];
    out->mOBS_ACT.mX[1519UL] = t3626->mX.mX[152UL];
    out->mOBS_ACT.mX[1520UL] = zc_int55;
    out->mOBS_ACT.mX[1521UL] = intrm_sf_mf_19 - intrm_sf_mf_20;
    out->mOBS_ACT.mX[1522UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1523UL] = t3626->mX.mX[160UL];
    out->mOBS_ACT.mX[1524UL] = t3626->mX.mX[160UL];
    out->mOBS_ACT.mX[1525UL] = t3626->mX.mX[160UL];
    out->mOBS_ACT.mX[1526UL] = t3626->mX.mX[160UL];
    out->mOBS_ACT.mX[1527UL] = t3626->mX.mX[161UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[1528UL] = t3626->mX.mX[160UL];
    out->mOBS_ACT.mX[1529UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1530UL] = zc_int431;
    out->mOBS_ACT.mX[1531UL] = t3626->mX.mX[162UL];
    out->mOBS_ACT.mX[1532UL] = t3626->mX.mX[162UL];
    out->mOBS_ACT.mX[1533UL] = t3626->mX.mX[1187UL];
    out->mOBS_ACT.mX[1534UL] = 1.0;
    out->mOBS_ACT.mX[1535UL] = intrm_sf_mf_20;
    for (t2773 = 163UL; t2773 - 163UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1373UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1541UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[1546UL] = 0.0;
    out->mOBS_ACT.mX[1547UL] = t3626->mX.mX[1186UL];
    out->mOBS_ACT.mX[1548UL] = t3626->mX.mX[1188UL] * 1000.0;
    out->mOBS_ACT.mX[1549UL] = t3626->mX.mX[1187UL];
    out->mOBS_ACT.mX[1550UL] = zc_int58;
    out->mOBS_ACT.mX[1551UL] = 1.0;
    out->mOBS_ACT.mX[1552UL] = t3626->mX.mX[1185UL];
    out->mOBS_ACT.mX[1553UL] = 1.0;
    out->mOBS_ACT.mX[1554UL] = t3626->mX.mX[160UL];
    out->mOBS_ACT.mX[1555UL] = t3626->mX.mX[162UL];
    out->mOBS_ACT.mX[1556UL] = 1.0;
    out->mOBS_ACT.mX[1557UL] = t3626->mX.mX[1185UL];
    out->mOBS_ACT.mX[1558UL] = t3626->mX.mX[1186UL];
    out->mOBS_ACT.mX[1559UL] = 1.0;
    out->mOBS_ACT.mX[1560UL] = 1.0;
    out->mOBS_ACT.mX[1561UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1562UL] = zc_int431;
    out->mOBS_ACT.mX[1563UL] = t3626->mX.mX[162UL];
    out->mOBS_ACT.mX[1564UL] = intrm_sf_mf_20;
    out->mOBS_ACT.mX[1565UL] = t3626->mX.mX[1187UL];
    out->mOBS_ACT.mX[1566UL] = t3626->mX.mX[1187UL];
    out->mOBS_ACT.mX[1567UL] = t3626->mX.mX[160UL];
    out->mOBS_ACT.mX[1568UL] = BatteryPack_v2_ModuleAssembly2_Module22_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[1569UL] = t3626->mX.mX[160UL];
    out->mOBS_ACT.mX[1570UL] = t3626->mX.mX[160UL];
    out->mOBS_ACT.mX[1571UL] = t3626->mX.mX[1188UL] * 1000.0;
    out->mOBS_ACT.mX[1572UL] = zc_int58;
    out->mOBS_ACT.mX[1573UL] = t3626->mX.mX[160UL];
    out->mOBS_ACT.mX[1574UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1575UL] = BatteryPack_v2_ModuleAssembly2_Module22_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[1576UL] = BatteryPack_v2_ModuleAssembly2_Module22_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[1577UL] = zc_int431;
    out->mOBS_ACT.mX[1578UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1579UL] = 0.0;
    out->mOBS_ACT.mX[1580UL] = zc_int431;
    out->mOBS_ACT.mX[1581UL] = intrm_sf_mf_20;
    out->mOBS_ACT.mX[1582UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1583UL] = 0.0;
    out->mOBS_ACT.mX[1584UL] = intrm_sf_mf_20;
    out->mOBS_ACT.mX[1585UL] = t3626->mX.mX[160UL];
    out->mOBS_ACT.mX[1586UL] = BatteryPack_v2_ModuleAssembly2_Module22_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[1587UL] = 0.0;
    out->mOBS_ACT.mX[1588UL] = t3626->mX.mX[160UL];
    out->mOBS_ACT.mX[1589UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1590UL] = zc_int431;
    out->mOBS_ACT.mX[1591UL] = t3626->mX.mX[162UL];
    out->mOBS_ACT.mX[1592UL] = intrm_sf_mf_20;
    out->mOBS_ACT.mX[1593UL] = t3626->mX.mX[1187UL];
    out->mOBS_ACT.mX[1594UL] = t3626->mX.mX[1187UL];
    out->mOBS_ACT.mX[1595UL] = t3626->mX.mX[160UL];
    out->mOBS_ACT.mX[1596UL] = zc_int58;
    out->mOBS_ACT.mX[1597UL] = intrm_sf_mf_20 - zc_int431;
    out->mOBS_ACT.mX[1598UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1599UL] = t3626->mX.mX[168UL];
    out->mOBS_ACT.mX[1600UL] = t3626->mX.mX[168UL];
    out->mOBS_ACT.mX[1601UL] = t3626->mX.mX[168UL];
    out->mOBS_ACT.mX[1602UL] = t3626->mX.mX[168UL];
    out->mOBS_ACT.mX[1603UL] = t3626->mX.mX[169UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[1604UL] = t3626->mX.mX[168UL];
    out->mOBS_ACT.mX[1605UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1606UL] = zc_int64;
    out->mOBS_ACT.mX[1607UL] = t3626->mX.mX[170UL];
    out->mOBS_ACT.mX[1608UL] = t3626->mX.mX[170UL];
    out->mOBS_ACT.mX[1609UL] = t3626->mX.mX[1191UL];
    out->mOBS_ACT.mX[1610UL] = 1.0;
    out->mOBS_ACT.mX[1611UL] = zc_int431;
    for (t2773 = 171UL; t2773 - 171UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1441UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1617UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[1622UL] = 0.0;
    out->mOBS_ACT.mX[1623UL] = t3626->mX.mX[1190UL];
    out->mOBS_ACT.mX[1624UL] = t3626->mX.mX[1192UL] * 1000.0;
    out->mOBS_ACT.mX[1625UL] = t3626->mX.mX[1191UL];
    out->mOBS_ACT.mX[1626UL] = BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[1627UL] = 1.0;
    out->mOBS_ACT.mX[1628UL] = t3626->mX.mX[1189UL];
    out->mOBS_ACT.mX[1629UL] = 1.0;
    out->mOBS_ACT.mX[1630UL] = t3626->mX.mX[168UL];
    out->mOBS_ACT.mX[1631UL] = t3626->mX.mX[170UL];
    out->mOBS_ACT.mX[1632UL] = 1.0;
    out->mOBS_ACT.mX[1633UL] = t3626->mX.mX[1189UL];
    out->mOBS_ACT.mX[1634UL] = t3626->mX.mX[1190UL];
    out->mOBS_ACT.mX[1635UL] = 1.0;
    out->mOBS_ACT.mX[1636UL] = 1.0;
    out->mOBS_ACT.mX[1637UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1638UL] = zc_int64;
    out->mOBS_ACT.mX[1639UL] = t3626->mX.mX[170UL];
    out->mOBS_ACT.mX[1640UL] = zc_int431;
    out->mOBS_ACT.mX[1641UL] = t3626->mX.mX[1191UL];
    out->mOBS_ACT.mX[1642UL] = t3626->mX.mX[1191UL];
    out->mOBS_ACT.mX[1643UL] = t3626->mX.mX[168UL];
    out->mOBS_ACT.mX[1644UL] = BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[1645UL] = t3626->mX.mX[168UL];
    out->mOBS_ACT.mX[1646UL] = t3626->mX.mX[168UL];
    out->mOBS_ACT.mX[1647UL] = t3626->mX.mX[1192UL] * 1000.0;
    out->mOBS_ACT.mX[1648UL] = BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[1649UL] = t3626->mX.mX[168UL];
    out->mOBS_ACT.mX[1650UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1651UL] = BatteryPack_v2_ModuleAssembly2_Module23_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[1652UL] = BatteryPack_v2_ModuleAssembly2_Module23_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[1653UL] = zc_int64;
    out->mOBS_ACT.mX[1654UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1655UL] = 0.0;
    out->mOBS_ACT.mX[1656UL] = zc_int64;
    out->mOBS_ACT.mX[1657UL] = zc_int431;
    out->mOBS_ACT.mX[1658UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1659UL] = 0.0;
    out->mOBS_ACT.mX[1660UL] = zc_int431;
    out->mOBS_ACT.mX[1661UL] = t3626->mX.mX[168UL];
    out->mOBS_ACT.mX[1662UL] = BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[1663UL] = 0.0;
    out->mOBS_ACT.mX[1664UL] = t3626->mX.mX[168UL];
    out->mOBS_ACT.mX[1665UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1666UL] = zc_int64;
    out->mOBS_ACT.mX[1667UL] = t3626->mX.mX[170UL];
    out->mOBS_ACT.mX[1668UL] = zc_int431;
    out->mOBS_ACT.mX[1669UL] = t3626->mX.mX[1191UL];
    out->mOBS_ACT.mX[1670UL] = t3626->mX.mX[1191UL];
    out->mOBS_ACT.mX[1671UL] = t3626->mX.mX[168UL];
    out->mOBS_ACT.mX[1672UL] = BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[1673UL] = zc_int431 - zc_int64;
    out->mOBS_ACT.mX[1674UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1675UL] = t3626->mX.mX[176UL];
    out->mOBS_ACT.mX[1676UL] = t3626->mX.mX[176UL];
    out->mOBS_ACT.mX[1677UL] = t3626->mX.mX[176UL];
    out->mOBS_ACT.mX[1678UL] = t3626->mX.mX[176UL];
    out->mOBS_ACT.mX[1679UL] = t3626->mX.mX[177UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[1680UL] = t3626->mX.mX[176UL];
    out->mOBS_ACT.mX[1681UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1682UL] = zc_int455;
    out->mOBS_ACT.mX[1683UL] = t3626->mX.mX[178UL];
    out->mOBS_ACT.mX[1684UL] = t3626->mX.mX[178UL];
    out->mOBS_ACT.mX[1685UL] = t3626->mX.mX[1195UL];
    out->mOBS_ACT.mX[1686UL] = 1.0;
    out->mOBS_ACT.mX[1687UL] = zc_int481;
    for (t2773 = 179UL; t2773 - 179UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1509UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1693UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[1698UL] = 0.0;
    out->mOBS_ACT.mX[1699UL] = t3626->mX.mX[1194UL];
    out->mOBS_ACT.mX[1700UL] = t3626->mX.mX[1196UL] * 1000.0;
    out->mOBS_ACT.mX[1701UL] = t3626->mX.mX[1195UL];
    out->mOBS_ACT.mX[1702UL] = zc_int480;
    out->mOBS_ACT.mX[1703UL] = 1.0;
    out->mOBS_ACT.mX[1704UL] = t3626->mX.mX[1193UL];
    out->mOBS_ACT.mX[1705UL] = 1.0;
    out->mOBS_ACT.mX[1706UL] = t3626->mX.mX[176UL];
    out->mOBS_ACT.mX[1707UL] = t3626->mX.mX[178UL];
    out->mOBS_ACT.mX[1708UL] = 1.0;
    out->mOBS_ACT.mX[1709UL] = t3626->mX.mX[1193UL];
    out->mOBS_ACT.mX[1710UL] = t3626->mX.mX[1194UL];
    out->mOBS_ACT.mX[1711UL] = 1.0;
    out->mOBS_ACT.mX[1712UL] = 1.0;
    out->mOBS_ACT.mX[1713UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1714UL] = zc_int455;
    out->mOBS_ACT.mX[1715UL] = t3626->mX.mX[178UL];
    out->mOBS_ACT.mX[1716UL] = zc_int481;
    out->mOBS_ACT.mX[1717UL] = t3626->mX.mX[1195UL];
    out->mOBS_ACT.mX[1718UL] = t3626->mX.mX[1195UL];
    out->mOBS_ACT.mX[1719UL] = t3626->mX.mX[176UL];
    out->mOBS_ACT.mX[1720UL] = BatteryPack_v2_ModuleAssembly2_Module_1_1_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[1721UL] = t3626->mX.mX[176UL];
    out->mOBS_ACT.mX[1722UL] = t3626->mX.mX[176UL];
    out->mOBS_ACT.mX[1723UL] = t3626->mX.mX[1196UL] * 1000.0;
    out->mOBS_ACT.mX[1724UL] = zc_int480;
    out->mOBS_ACT.mX[1725UL] = t3626->mX.mX[176UL];
    out->mOBS_ACT.mX[1726UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1727UL] = BatteryPack_v2_ModuleAssembly2_Module_1_1_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[1728UL] = BatteryPack_v2_ModuleAssembly2_Module_1_1_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[1729UL] = zc_int455;
    out->mOBS_ACT.mX[1730UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1731UL] = 0.0;
    out->mOBS_ACT.mX[1732UL] = zc_int455;
    out->mOBS_ACT.mX[1733UL] = zc_int481;
    out->mOBS_ACT.mX[1734UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1735UL] = 0.0;
    out->mOBS_ACT.mX[1736UL] = zc_int481;
    out->mOBS_ACT.mX[1737UL] = t3626->mX.mX[176UL];
    out->mOBS_ACT.mX[1738UL] = BatteryPack_v2_ModuleAssembly2_Module_1_1_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[1739UL] = 0.0;
    out->mOBS_ACT.mX[1740UL] = t3626->mX.mX[176UL];
    out->mOBS_ACT.mX[1741UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1742UL] = zc_int455;
    out->mOBS_ACT.mX[1743UL] = t3626->mX.mX[178UL];
    out->mOBS_ACT.mX[1744UL] = zc_int481;
    out->mOBS_ACT.mX[1745UL] = t3626->mX.mX[1195UL];
    out->mOBS_ACT.mX[1746UL] = t3626->mX.mX[1195UL];
    out->mOBS_ACT.mX[1747UL] = t3626->mX.mX[176UL];
    out->mOBS_ACT.mX[1748UL] = zc_int480;
    out->mOBS_ACT.mX[1749UL] = zc_int481 - zc_int455;
    out->mOBS_ACT.mX[1750UL] = zc_int481;
    out->mOBS_ACT.mX[1751UL] = zc_int64;
    out->mOBS_ACT.mX[1752UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1753UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1754UL] = t3626->mX.mX[184UL];
    out->mOBS_ACT.mX[1755UL] = t3626->mX.mX[184UL];
    out->mOBS_ACT.mX[1756UL] = t3626->mX.mX[184UL];
    out->mOBS_ACT.mX[1757UL] = t3626->mX.mX[184UL];
    out->mOBS_ACT.mX[1758UL] = t3626->mX.mX[185UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[1759UL] = t3626->mX.mX[184UL];
    out->mOBS_ACT.mX[1760UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1761UL] = zc_int428;
    out->mOBS_ACT.mX[1762UL] = t3626->mX.mX[186UL];
    out->mOBS_ACT.mX[1763UL] = t3626->mX.mX[186UL];
    out->mOBS_ACT.mX[1764UL] = t3626->mX.mX[1199UL];
    out->mOBS_ACT.mX[1765UL] = 1.0;
    out->mOBS_ACT.mX[1766UL] = zc_int429;
    for (t2773 = 187UL; t2773 - 187UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1580UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1772UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[1777UL] = 0.0;
    out->mOBS_ACT.mX[1778UL] = t3626->mX.mX[1198UL];
    out->mOBS_ACT.mX[1779UL] = t3626->mX.mX[1200UL] * 1000.0;
    out->mOBS_ACT.mX[1780UL] = t3626->mX.mX[1199UL];
    out->mOBS_ACT.mX[1781UL] = zc_int68;
    out->mOBS_ACT.mX[1782UL] = 1.0;
    out->mOBS_ACT.mX[1783UL] = t3626->mX.mX[1197UL];
    out->mOBS_ACT.mX[1784UL] = 1.0;
    out->mOBS_ACT.mX[1785UL] = t3626->mX.mX[184UL];
    out->mOBS_ACT.mX[1786UL] = t3626->mX.mX[186UL];
    out->mOBS_ACT.mX[1787UL] = 1.0;
    out->mOBS_ACT.mX[1788UL] = t3626->mX.mX[1197UL];
    out->mOBS_ACT.mX[1789UL] = t3626->mX.mX[1198UL];
    out->mOBS_ACT.mX[1790UL] = 1.0;
    out->mOBS_ACT.mX[1791UL] = 1.0;
    out->mOBS_ACT.mX[1792UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1793UL] = zc_int428;
    out->mOBS_ACT.mX[1794UL] = t3626->mX.mX[186UL];
    out->mOBS_ACT.mX[1795UL] = zc_int429;
    out->mOBS_ACT.mX[1796UL] = t3626->mX.mX[1199UL];
    out->mOBS_ACT.mX[1797UL] = t3626->mX.mX[1199UL];
    out->mOBS_ACT.mX[1798UL] = t3626->mX.mX[184UL];
    out->mOBS_ACT.mX[1799UL] = BatteryPack_v2_ModuleAssembly3_Module02_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[1800UL] = t3626->mX.mX[184UL];
    out->mOBS_ACT.mX[1801UL] = t3626->mX.mX[184UL];
    out->mOBS_ACT.mX[1802UL] = t3626->mX.mX[1200UL] * 1000.0;
    out->mOBS_ACT.mX[1803UL] = zc_int68;
    out->mOBS_ACT.mX[1804UL] = t3626->mX.mX[184UL];
    out->mOBS_ACT.mX[1805UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1806UL] = BatteryPack_v2_ModuleAssembly3_Module02_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[1807UL] = BatteryPack_v2_ModuleAssembly3_Module02_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[1808UL] = zc_int428;
    out->mOBS_ACT.mX[1809UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1810UL] = 0.0;
    out->mOBS_ACT.mX[1811UL] = zc_int428;
    out->mOBS_ACT.mX[1812UL] = zc_int429;
    out->mOBS_ACT.mX[1813UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1814UL] = 0.0;
    out->mOBS_ACT.mX[1815UL] = zc_int429;
    out->mOBS_ACT.mX[1816UL] = t3626->mX.mX[184UL];
    out->mOBS_ACT.mX[1817UL] = BatteryPack_v2_ModuleAssembly3_Module02_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[1818UL] = 0.0;
    out->mOBS_ACT.mX[1819UL] = t3626->mX.mX[184UL];
    out->mOBS_ACT.mX[1820UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1821UL] = zc_int428;
    out->mOBS_ACT.mX[1822UL] = t3626->mX.mX[186UL];
    out->mOBS_ACT.mX[1823UL] = zc_int429;
    out->mOBS_ACT.mX[1824UL] = t3626->mX.mX[1199UL];
    out->mOBS_ACT.mX[1825UL] = t3626->mX.mX[1199UL];
    out->mOBS_ACT.mX[1826UL] = t3626->mX.mX[184UL];
    out->mOBS_ACT.mX[1827UL] = zc_int68;
    out->mOBS_ACT.mX[1828UL] = zc_int429 - zc_int428;
    out->mOBS_ACT.mX[1829UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1830UL] = t3626->mX.mX[192UL];
    out->mOBS_ACT.mX[1831UL] = t3626->mX.mX[192UL];
    out->mOBS_ACT.mX[1832UL] = t3626->mX.mX[192UL];
    out->mOBS_ACT.mX[1833UL] = t3626->mX.mX[192UL];
    out->mOBS_ACT.mX[1834UL] = t3626->mX.mX[193UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[1835UL] = t3626->mX.mX[192UL];
    out->mOBS_ACT.mX[1836UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1837UL] = intrm_sf_mf_25;
    out->mOBS_ACT.mX[1838UL] = t3626->mX.mX[194UL];
    out->mOBS_ACT.mX[1839UL] = t3626->mX.mX[194UL];
    out->mOBS_ACT.mX[1840UL] = t3626->mX.mX[1203UL];
    out->mOBS_ACT.mX[1841UL] = 1.0;
    out->mOBS_ACT.mX[1842UL] = zc_int428;
    for (t2773 = 195UL; t2773 - 195UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1648UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1848UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[1853UL] = 0.0;
    out->mOBS_ACT.mX[1854UL] = t3626->mX.mX[1202UL];
    out->mOBS_ACT.mX[1855UL] = t3626->mX.mX[1204UL] * 1000.0;
    out->mOBS_ACT.mX[1856UL] = t3626->mX.mX[1203UL];
    out->mOBS_ACT.mX[1857UL] = BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[1858UL] = 1.0;
    out->mOBS_ACT.mX[1859UL] = t3626->mX.mX[1201UL];
    out->mOBS_ACT.mX[1860UL] = 1.0;
    out->mOBS_ACT.mX[1861UL] = t3626->mX.mX[192UL];
    out->mOBS_ACT.mX[1862UL] = t3626->mX.mX[194UL];
    out->mOBS_ACT.mX[1863UL] = 1.0;
    out->mOBS_ACT.mX[1864UL] = t3626->mX.mX[1201UL];
    out->mOBS_ACT.mX[1865UL] = t3626->mX.mX[1202UL];
    out->mOBS_ACT.mX[1866UL] = 1.0;
    out->mOBS_ACT.mX[1867UL] = 1.0;
    out->mOBS_ACT.mX[1868UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1869UL] = intrm_sf_mf_25;
    out->mOBS_ACT.mX[1870UL] = t3626->mX.mX[194UL];
    out->mOBS_ACT.mX[1871UL] = zc_int428;
    out->mOBS_ACT.mX[1872UL] = t3626->mX.mX[1203UL];
    out->mOBS_ACT.mX[1873UL] = t3626->mX.mX[1203UL];
    out->mOBS_ACT.mX[1874UL] = t3626->mX.mX[192UL];
    out->mOBS_ACT.mX[1875UL] = BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[1876UL] = t3626->mX.mX[192UL];
    out->mOBS_ACT.mX[1877UL] = t3626->mX.mX[192UL];
    out->mOBS_ACT.mX[1878UL] = t3626->mX.mX[1204UL] * 1000.0;
    out->mOBS_ACT.mX[1879UL] = BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[1880UL] = t3626->mX.mX[192UL];
    out->mOBS_ACT.mX[1881UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1882UL] = BatteryPack_v2_ModuleAssembly3_Module03_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[1883UL] = BatteryPack_v2_ModuleAssembly3_Module03_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[1884UL] = intrm_sf_mf_25;
    out->mOBS_ACT.mX[1885UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1886UL] = 0.0;
    out->mOBS_ACT.mX[1887UL] = intrm_sf_mf_25;
    out->mOBS_ACT.mX[1888UL] = zc_int428;
    out->mOBS_ACT.mX[1889UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1890UL] = 0.0;
    out->mOBS_ACT.mX[1891UL] = zc_int428;
    out->mOBS_ACT.mX[1892UL] = t3626->mX.mX[192UL];
    out->mOBS_ACT.mX[1893UL] = BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[1894UL] = 0.0;
    out->mOBS_ACT.mX[1895UL] = t3626->mX.mX[192UL];
    out->mOBS_ACT.mX[1896UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1897UL] = intrm_sf_mf_25;
    out->mOBS_ACT.mX[1898UL] = t3626->mX.mX[194UL];
    out->mOBS_ACT.mX[1899UL] = zc_int428;
    out->mOBS_ACT.mX[1900UL] = t3626->mX.mX[1203UL];
    out->mOBS_ACT.mX[1901UL] = t3626->mX.mX[1203UL];
    out->mOBS_ACT.mX[1902UL] = t3626->mX.mX[192UL];
    out->mOBS_ACT.mX[1903UL] = BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[1904UL] = zc_int428 - intrm_sf_mf_25;
    out->mOBS_ACT.mX[1905UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1906UL] = t3626->mX.mX[200UL];
    out->mOBS_ACT.mX[1907UL] = t3626->mX.mX[200UL];
    out->mOBS_ACT.mX[1908UL] = t3626->mX.mX[200UL];
    out->mOBS_ACT.mX[1909UL] = t3626->mX.mX[200UL];
    out->mOBS_ACT.mX[1910UL] = t3626->mX.mX[201UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[1911UL] = t3626->mX.mX[200UL];
    out->mOBS_ACT.mX[1912UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1913UL] = zc_int426;
    out->mOBS_ACT.mX[1914UL] = t3626->mX.mX[202UL];
    out->mOBS_ACT.mX[1915UL] = t3626->mX.mX[202UL];
    out->mOBS_ACT.mX[1916UL] = t3626->mX.mX[1207UL];
    out->mOBS_ACT.mX[1917UL] = 1.0;
    out->mOBS_ACT.mX[1918UL] = intrm_sf_mf_25;
    for (t2773 = 203UL; t2773 - 203UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1716UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1924UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[1929UL] = 0.0;
    out->mOBS_ACT.mX[1930UL] = t3626->mX.mX[1206UL];
    out->mOBS_ACT.mX[1931UL] = t3626->mX.mX[1208UL] * 1000.0;
    out->mOBS_ACT.mX[1932UL] = t3626->mX.mX[1207UL];
    out->mOBS_ACT.mX[1933UL] = BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[1934UL] = 1.0;
    out->mOBS_ACT.mX[1935UL] = t3626->mX.mX[1205UL];
    out->mOBS_ACT.mX[1936UL] = 1.0;
    out->mOBS_ACT.mX[1937UL] = t3626->mX.mX[200UL];
    out->mOBS_ACT.mX[1938UL] = t3626->mX.mX[202UL];
    out->mOBS_ACT.mX[1939UL] = 1.0;
    out->mOBS_ACT.mX[1940UL] = t3626->mX.mX[1205UL];
    out->mOBS_ACT.mX[1941UL] = t3626->mX.mX[1206UL];
    out->mOBS_ACT.mX[1942UL] = 1.0;
    out->mOBS_ACT.mX[1943UL] = 1.0;
    out->mOBS_ACT.mX[1944UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1945UL] = zc_int426;
    out->mOBS_ACT.mX[1946UL] = t3626->mX.mX[202UL];
    out->mOBS_ACT.mX[1947UL] = intrm_sf_mf_25;
    out->mOBS_ACT.mX[1948UL] = t3626->mX.mX[1207UL];
    out->mOBS_ACT.mX[1949UL] = t3626->mX.mX[1207UL];
    out->mOBS_ACT.mX[1950UL] = t3626->mX.mX[200UL];
    out->mOBS_ACT.mX[1951UL] = BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[1952UL] = t3626->mX.mX[200UL];
    out->mOBS_ACT.mX[1953UL] = t3626->mX.mX[200UL];
    out->mOBS_ACT.mX[1954UL] = t3626->mX.mX[1208UL] * 1000.0;
    out->mOBS_ACT.mX[1955UL] = BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[1956UL] = t3626->mX.mX[200UL];
    out->mOBS_ACT.mX[1957UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1958UL] = BatteryPack_v2_ModuleAssembly3_Module04_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[1959UL] = BatteryPack_v2_ModuleAssembly3_Module04_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[1960UL] = zc_int426;
    out->mOBS_ACT.mX[1961UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1962UL] = 0.0;
    out->mOBS_ACT.mX[1963UL] = zc_int426;
    out->mOBS_ACT.mX[1964UL] = intrm_sf_mf_25;
    out->mOBS_ACT.mX[1965UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1966UL] = 0.0;
    out->mOBS_ACT.mX[1967UL] = intrm_sf_mf_25;
    out->mOBS_ACT.mX[1968UL] = t3626->mX.mX[200UL];
    out->mOBS_ACT.mX[1969UL] = BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[1970UL] = 0.0;
    out->mOBS_ACT.mX[1971UL] = t3626->mX.mX[200UL];
    out->mOBS_ACT.mX[1972UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1973UL] = zc_int426;
    out->mOBS_ACT.mX[1974UL] = t3626->mX.mX[202UL];
    out->mOBS_ACT.mX[1975UL] = intrm_sf_mf_25;
    out->mOBS_ACT.mX[1976UL] = t3626->mX.mX[1207UL];
    out->mOBS_ACT.mX[1977UL] = t3626->mX.mX[1207UL];
    out->mOBS_ACT.mX[1978UL] = t3626->mX.mX[200UL];
    out->mOBS_ACT.mX[1979UL] = BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[1980UL] = intrm_sf_mf_25 - zc_int426;
    out->mOBS_ACT.mX[1981UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[1982UL] = t3626->mX.mX[208UL];
    out->mOBS_ACT.mX[1983UL] = t3626->mX.mX[208UL];
    out->mOBS_ACT.mX[1984UL] = t3626->mX.mX[208UL];
    out->mOBS_ACT.mX[1985UL] = t3626->mX.mX[208UL];
    out->mOBS_ACT.mX[1986UL] = t3626->mX.mX[209UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[1987UL] = t3626->mX.mX[208UL];
    out->mOBS_ACT.mX[1988UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[1989UL] = zc_int425;
    out->mOBS_ACT.mX[1990UL] = t3626->mX.mX[210UL];
    out->mOBS_ACT.mX[1991UL] = t3626->mX.mX[210UL];
    out->mOBS_ACT.mX[1992UL] = t3626->mX.mX[1211UL];
    out->mOBS_ACT.mX[1993UL] = 1.0;
    out->mOBS_ACT.mX[1994UL] = zc_int426;
    for (t2773 = 211UL; t2773 - 211UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1784UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2000UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[2005UL] = 0.0;
    out->mOBS_ACT.mX[2006UL] = t3626->mX.mX[1210UL];
    out->mOBS_ACT.mX[2007UL] = t3626->mX.mX[1212UL] * 1000.0;
    out->mOBS_ACT.mX[2008UL] = t3626->mX.mX[1211UL];
    out->mOBS_ACT.mX[2009UL] = zc_int77;
    out->mOBS_ACT.mX[2010UL] = 1.0;
    out->mOBS_ACT.mX[2011UL] = t3626->mX.mX[1209UL];
    out->mOBS_ACT.mX[2012UL] = 1.0;
    out->mOBS_ACT.mX[2013UL] = t3626->mX.mX[208UL];
    out->mOBS_ACT.mX[2014UL] = t3626->mX.mX[210UL];
    out->mOBS_ACT.mX[2015UL] = 1.0;
    out->mOBS_ACT.mX[2016UL] = t3626->mX.mX[1209UL];
    out->mOBS_ACT.mX[2017UL] = t3626->mX.mX[1210UL];
    out->mOBS_ACT.mX[2018UL] = 1.0;
    out->mOBS_ACT.mX[2019UL] = 1.0;
    out->mOBS_ACT.mX[2020UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2021UL] = zc_int425;
    out->mOBS_ACT.mX[2022UL] = t3626->mX.mX[210UL];
    out->mOBS_ACT.mX[2023UL] = zc_int426;
    out->mOBS_ACT.mX[2024UL] = t3626->mX.mX[1211UL];
    out->mOBS_ACT.mX[2025UL] = t3626->mX.mX[1211UL];
    out->mOBS_ACT.mX[2026UL] = t3626->mX.mX[208UL];
    out->mOBS_ACT.mX[2027UL] = BatteryPack_v2_ModuleAssembly3_Module05_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[2028UL] = t3626->mX.mX[208UL];
    out->mOBS_ACT.mX[2029UL] = t3626->mX.mX[208UL];
    out->mOBS_ACT.mX[2030UL] = t3626->mX.mX[1212UL] * 1000.0;
    out->mOBS_ACT.mX[2031UL] = zc_int77;
    out->mOBS_ACT.mX[2032UL] = t3626->mX.mX[208UL];
    out->mOBS_ACT.mX[2033UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2034UL] = BatteryPack_v2_ModuleAssembly3_Module05_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[2035UL] = BatteryPack_v2_ModuleAssembly3_Module05_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[2036UL] = zc_int425;
    out->mOBS_ACT.mX[2037UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2038UL] = 0.0;
    out->mOBS_ACT.mX[2039UL] = zc_int425;
    out->mOBS_ACT.mX[2040UL] = zc_int426;
    out->mOBS_ACT.mX[2041UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2042UL] = 0.0;
    out->mOBS_ACT.mX[2043UL] = zc_int426;
    out->mOBS_ACT.mX[2044UL] = t3626->mX.mX[208UL];
    out->mOBS_ACT.mX[2045UL] = BatteryPack_v2_ModuleAssembly3_Module05_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[2046UL] = 0.0;
    out->mOBS_ACT.mX[2047UL] = t3626->mX.mX[208UL];
    out->mOBS_ACT.mX[2048UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2049UL] = zc_int425;
    out->mOBS_ACT.mX[2050UL] = t3626->mX.mX[210UL];
    out->mOBS_ACT.mX[2051UL] = zc_int426;
    out->mOBS_ACT.mX[2052UL] = t3626->mX.mX[1211UL];
    out->mOBS_ACT.mX[2053UL] = t3626->mX.mX[1211UL];
    out->mOBS_ACT.mX[2054UL] = t3626->mX.mX[208UL];
    out->mOBS_ACT.mX[2055UL] = zc_int77;
    out->mOBS_ACT.mX[2056UL] = zc_int426 - zc_int425;
    out->mOBS_ACT.mX[2057UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2058UL] = t3626->mX.mX[216UL];
    out->mOBS_ACT.mX[2059UL] = t3626->mX.mX[216UL];
    out->mOBS_ACT.mX[2060UL] = t3626->mX.mX[216UL];
    out->mOBS_ACT.mX[2061UL] = t3626->mX.mX[216UL];
    out->mOBS_ACT.mX[2062UL] = t3626->mX.mX[217UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[2063UL] = t3626->mX.mX[216UL];
    out->mOBS_ACT.mX[2064UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2065UL] = zc_int424;
    out->mOBS_ACT.mX[2066UL] = t3626->mX.mX[218UL];
    out->mOBS_ACT.mX[2067UL] = t3626->mX.mX[218UL];
    out->mOBS_ACT.mX[2068UL] = t3626->mX.mX[1215UL];
    out->mOBS_ACT.mX[2069UL] = 1.0;
    out->mOBS_ACT.mX[2070UL] = zc_int425;
    for (t2773 = 219UL; t2773 - 219UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1852UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2076UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[2081UL] = 0.0;
    out->mOBS_ACT.mX[2082UL] = t3626->mX.mX[1214UL];
    out->mOBS_ACT.mX[2083UL] = t3626->mX.mX[1216UL] * 1000.0;
    out->mOBS_ACT.mX[2084UL] = t3626->mX.mX[1215UL];
    out->mOBS_ACT.mX[2085UL] = zc_int80;
    out->mOBS_ACT.mX[2086UL] = 1.0;
    out->mOBS_ACT.mX[2087UL] = t3626->mX.mX[1213UL];
    out->mOBS_ACT.mX[2088UL] = 1.0;
    out->mOBS_ACT.mX[2089UL] = t3626->mX.mX[216UL];
    out->mOBS_ACT.mX[2090UL] = t3626->mX.mX[218UL];
    out->mOBS_ACT.mX[2091UL] = 1.0;
    out->mOBS_ACT.mX[2092UL] = t3626->mX.mX[1213UL];
    out->mOBS_ACT.mX[2093UL] = t3626->mX.mX[1214UL];
    out->mOBS_ACT.mX[2094UL] = 1.0;
    out->mOBS_ACT.mX[2095UL] = 1.0;
    out->mOBS_ACT.mX[2096UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2097UL] = zc_int424;
    out->mOBS_ACT.mX[2098UL] = t3626->mX.mX[218UL];
    out->mOBS_ACT.mX[2099UL] = zc_int425;
    out->mOBS_ACT.mX[2100UL] = t3626->mX.mX[1215UL];
    out->mOBS_ACT.mX[2101UL] = t3626->mX.mX[1215UL];
    out->mOBS_ACT.mX[2102UL] = t3626->mX.mX[216UL];
    out->mOBS_ACT.mX[2103UL] = BatteryPack_v2_ModuleAssembly3_Module06_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[2104UL] = t3626->mX.mX[216UL];
    out->mOBS_ACT.mX[2105UL] = t3626->mX.mX[216UL];
    out->mOBS_ACT.mX[2106UL] = t3626->mX.mX[1216UL] * 1000.0;
    out->mOBS_ACT.mX[2107UL] = zc_int80;
    out->mOBS_ACT.mX[2108UL] = t3626->mX.mX[216UL];
    out->mOBS_ACT.mX[2109UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2110UL] = BatteryPack_v2_ModuleAssembly3_Module06_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[2111UL] = BatteryPack_v2_ModuleAssembly3_Module06_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[2112UL] = zc_int424;
    out->mOBS_ACT.mX[2113UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2114UL] = 0.0;
    out->mOBS_ACT.mX[2115UL] = zc_int424;
    out->mOBS_ACT.mX[2116UL] = zc_int425;
    out->mOBS_ACT.mX[2117UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2118UL] = 0.0;
    out->mOBS_ACT.mX[2119UL] = zc_int425;
    out->mOBS_ACT.mX[2120UL] = t3626->mX.mX[216UL];
    out->mOBS_ACT.mX[2121UL] = BatteryPack_v2_ModuleAssembly3_Module06_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[2122UL] = 0.0;
    out->mOBS_ACT.mX[2123UL] = t3626->mX.mX[216UL];
    out->mOBS_ACT.mX[2124UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2125UL] = zc_int424;
    out->mOBS_ACT.mX[2126UL] = t3626->mX.mX[218UL];
    out->mOBS_ACT.mX[2127UL] = zc_int425;
    out->mOBS_ACT.mX[2128UL] = t3626->mX.mX[1215UL];
    out->mOBS_ACT.mX[2129UL] = t3626->mX.mX[1215UL];
    out->mOBS_ACT.mX[2130UL] = t3626->mX.mX[216UL];
    out->mOBS_ACT.mX[2131UL] = zc_int80;
    out->mOBS_ACT.mX[2132UL] = zc_int425 - zc_int424;
    out->mOBS_ACT.mX[2133UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2134UL] = t3626->mX.mX[224UL];
    out->mOBS_ACT.mX[2135UL] = t3626->mX.mX[224UL];
    out->mOBS_ACT.mX[2136UL] = t3626->mX.mX[224UL];
    out->mOBS_ACT.mX[2137UL] = t3626->mX.mX[224UL];
    out->mOBS_ACT.mX[2138UL] = t3626->mX.mX[225UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[2139UL] = t3626->mX.mX[224UL];
    out->mOBS_ACT.mX[2140UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2141UL] = intrm_sf_mf_29;
    out->mOBS_ACT.mX[2142UL] = t3626->mX.mX[226UL];
    out->mOBS_ACT.mX[2143UL] = t3626->mX.mX[226UL];
    out->mOBS_ACT.mX[2144UL] = t3626->mX.mX[1219UL];
    out->mOBS_ACT.mX[2145UL] = 1.0;
    out->mOBS_ACT.mX[2146UL] = zc_int424;
    for (t2773 = 227UL; t2773 - 227UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1920UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2152UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[2157UL] = 0.0;
    out->mOBS_ACT.mX[2158UL] = t3626->mX.mX[1218UL];
    out->mOBS_ACT.mX[2159UL] = t3626->mX.mX[1220UL] * 1000.0;
    out->mOBS_ACT.mX[2160UL] = t3626->mX.mX[1219UL];
    out->mOBS_ACT.mX[2161UL] = zc_int83;
    out->mOBS_ACT.mX[2162UL] = 1.0;
    out->mOBS_ACT.mX[2163UL] = t3626->mX.mX[1217UL];
    out->mOBS_ACT.mX[2164UL] = 1.0;
    out->mOBS_ACT.mX[2165UL] = t3626->mX.mX[224UL];
    out->mOBS_ACT.mX[2166UL] = t3626->mX.mX[226UL];
    out->mOBS_ACT.mX[2167UL] = 1.0;
    out->mOBS_ACT.mX[2168UL] = t3626->mX.mX[1217UL];
    out->mOBS_ACT.mX[2169UL] = t3626->mX.mX[1218UL];
    out->mOBS_ACT.mX[2170UL] = 1.0;
    out->mOBS_ACT.mX[2171UL] = 1.0;
    out->mOBS_ACT.mX[2172UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2173UL] = intrm_sf_mf_29;
    out->mOBS_ACT.mX[2174UL] = t3626->mX.mX[226UL];
    out->mOBS_ACT.mX[2175UL] = zc_int424;
    out->mOBS_ACT.mX[2176UL] = t3626->mX.mX[1219UL];
    out->mOBS_ACT.mX[2177UL] = t3626->mX.mX[1219UL];
    out->mOBS_ACT.mX[2178UL] = t3626->mX.mX[224UL];
    out->mOBS_ACT.mX[2179UL] = BatteryPack_v2_ModuleAssembly3_Module07_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[2180UL] = t3626->mX.mX[224UL];
    out->mOBS_ACT.mX[2181UL] = t3626->mX.mX[224UL];
    out->mOBS_ACT.mX[2182UL] = t3626->mX.mX[1220UL] * 1000.0;
    out->mOBS_ACT.mX[2183UL] = zc_int83;
    out->mOBS_ACT.mX[2184UL] = t3626->mX.mX[224UL];
    out->mOBS_ACT.mX[2185UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2186UL] = BatteryPack_v2_ModuleAssembly3_Module07_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[2187UL] = BatteryPack_v2_ModuleAssembly3_Module07_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[2188UL] = intrm_sf_mf_29;
    out->mOBS_ACT.mX[2189UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2190UL] = 0.0;
    out->mOBS_ACT.mX[2191UL] = intrm_sf_mf_29;
    out->mOBS_ACT.mX[2192UL] = zc_int424;
    out->mOBS_ACT.mX[2193UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2194UL] = 0.0;
    out->mOBS_ACT.mX[2195UL] = zc_int424;
    out->mOBS_ACT.mX[2196UL] = t3626->mX.mX[224UL];
    out->mOBS_ACT.mX[2197UL] = BatteryPack_v2_ModuleAssembly3_Module07_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[2198UL] = 0.0;
    out->mOBS_ACT.mX[2199UL] = t3626->mX.mX[224UL];
    out->mOBS_ACT.mX[2200UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2201UL] = intrm_sf_mf_29;
    out->mOBS_ACT.mX[2202UL] = t3626->mX.mX[226UL];
    out->mOBS_ACT.mX[2203UL] = zc_int424;
    out->mOBS_ACT.mX[2204UL] = t3626->mX.mX[1219UL];
    out->mOBS_ACT.mX[2205UL] = t3626->mX.mX[1219UL];
    out->mOBS_ACT.mX[2206UL] = t3626->mX.mX[224UL];
    out->mOBS_ACT.mX[2207UL] = zc_int83;
    out->mOBS_ACT.mX[2208UL] = zc_int424 - intrm_sf_mf_29;
    out->mOBS_ACT.mX[2209UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2210UL] = t3626->mX.mX[232UL];
    out->mOBS_ACT.mX[2211UL] = t3626->mX.mX[232UL];
    out->mOBS_ACT.mX[2212UL] = t3626->mX.mX[232UL];
    out->mOBS_ACT.mX[2213UL] = t3626->mX.mX[232UL];
    out->mOBS_ACT.mX[2214UL] = t3626->mX.mX[233UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[2215UL] = t3626->mX.mX[232UL];
    out->mOBS_ACT.mX[2216UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2217UL] = zc_int422;
    out->mOBS_ACT.mX[2218UL] = t3626->mX.mX[234UL];
    out->mOBS_ACT.mX[2219UL] = t3626->mX.mX[234UL];
    out->mOBS_ACT.mX[2220UL] = t3626->mX.mX[1223UL];
    out->mOBS_ACT.mX[2221UL] = 1.0;
    out->mOBS_ACT.mX[2222UL] = intrm_sf_mf_29;
    for (t2773 = 235UL; t2773 - 235UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 1988UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2228UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[2233UL] = 0.0;
    out->mOBS_ACT.mX[2234UL] = t3626->mX.mX[1222UL];
    out->mOBS_ACT.mX[2235UL] = t3626->mX.mX[1224UL] * 1000.0;
    out->mOBS_ACT.mX[2236UL] = t3626->mX.mX[1223UL];
    out->mOBS_ACT.mX[2237UL] = zc_int86;
    out->mOBS_ACT.mX[2238UL] = 1.0;
    out->mOBS_ACT.mX[2239UL] = t3626->mX.mX[1221UL];
    out->mOBS_ACT.mX[2240UL] = 1.0;
    out->mOBS_ACT.mX[2241UL] = t3626->mX.mX[232UL];
    out->mOBS_ACT.mX[2242UL] = t3626->mX.mX[234UL];
    out->mOBS_ACT.mX[2243UL] = 1.0;
    out->mOBS_ACT.mX[2244UL] = t3626->mX.mX[1221UL];
    out->mOBS_ACT.mX[2245UL] = t3626->mX.mX[1222UL];
    out->mOBS_ACT.mX[2246UL] = 1.0;
    out->mOBS_ACT.mX[2247UL] = 1.0;
    out->mOBS_ACT.mX[2248UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2249UL] = zc_int422;
    out->mOBS_ACT.mX[2250UL] = t3626->mX.mX[234UL];
    out->mOBS_ACT.mX[2251UL] = intrm_sf_mf_29;
    out->mOBS_ACT.mX[2252UL] = t3626->mX.mX[1223UL];
    out->mOBS_ACT.mX[2253UL] = t3626->mX.mX[1223UL];
    out->mOBS_ACT.mX[2254UL] = t3626->mX.mX[232UL];
    out->mOBS_ACT.mX[2255UL] = BatteryPack_v2_ModuleAssembly3_Module08_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[2256UL] = t3626->mX.mX[232UL];
    out->mOBS_ACT.mX[2257UL] = t3626->mX.mX[232UL];
    out->mOBS_ACT.mX[2258UL] = t3626->mX.mX[1224UL] * 1000.0;
    out->mOBS_ACT.mX[2259UL] = zc_int86;
    out->mOBS_ACT.mX[2260UL] = t3626->mX.mX[232UL];
    out->mOBS_ACT.mX[2261UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2262UL] = BatteryPack_v2_ModuleAssembly3_Module08_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[2263UL] = BatteryPack_v2_ModuleAssembly3_Module08_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[2264UL] = zc_int422;
    out->mOBS_ACT.mX[2265UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2266UL] = 0.0;
    out->mOBS_ACT.mX[2267UL] = zc_int422;
    out->mOBS_ACT.mX[2268UL] = intrm_sf_mf_29;
    out->mOBS_ACT.mX[2269UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2270UL] = 0.0;
    out->mOBS_ACT.mX[2271UL] = intrm_sf_mf_29;
    out->mOBS_ACT.mX[2272UL] = t3626->mX.mX[232UL];
    out->mOBS_ACT.mX[2273UL] = BatteryPack_v2_ModuleAssembly3_Module08_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[2274UL] = 0.0;
    out->mOBS_ACT.mX[2275UL] = t3626->mX.mX[232UL];
    out->mOBS_ACT.mX[2276UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2277UL] = zc_int422;
    out->mOBS_ACT.mX[2278UL] = t3626->mX.mX[234UL];
    out->mOBS_ACT.mX[2279UL] = intrm_sf_mf_29;
    out->mOBS_ACT.mX[2280UL] = t3626->mX.mX[1223UL];
    out->mOBS_ACT.mX[2281UL] = t3626->mX.mX[1223UL];
    out->mOBS_ACT.mX[2282UL] = t3626->mX.mX[232UL];
    out->mOBS_ACT.mX[2283UL] = zc_int86;
    out->mOBS_ACT.mX[2284UL] = intrm_sf_mf_29 - zc_int422;
    out->mOBS_ACT.mX[2285UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2286UL] = t3626->mX.mX[240UL];
    out->mOBS_ACT.mX[2287UL] = t3626->mX.mX[240UL];
    out->mOBS_ACT.mX[2288UL] = t3626->mX.mX[240UL];
    out->mOBS_ACT.mX[2289UL] = t3626->mX.mX[240UL];
    out->mOBS_ACT.mX[2290UL] = t3626->mX.mX[241UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[2291UL] = t3626->mX.mX[240UL];
    out->mOBS_ACT.mX[2292UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2293UL] = zc_int421;
    out->mOBS_ACT.mX[2294UL] = t3626->mX.mX[242UL];
    out->mOBS_ACT.mX[2295UL] = t3626->mX.mX[242UL];
    out->mOBS_ACT.mX[2296UL] = t3626->mX.mX[1227UL];
    out->mOBS_ACT.mX[2297UL] = 1.0;
    out->mOBS_ACT.mX[2298UL] = zc_int422;
    for (t2773 = 243UL; t2773 - 243UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2056UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2304UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[2309UL] = 0.0;
    out->mOBS_ACT.mX[2310UL] = t3626->mX.mX[1226UL];
    out->mOBS_ACT.mX[2311UL] = t3626->mX.mX[1228UL] * 1000.0;
    out->mOBS_ACT.mX[2312UL] = t3626->mX.mX[1227UL];
    out->mOBS_ACT.mX[2313UL] = zc_int89;
    out->mOBS_ACT.mX[2314UL] = 1.0;
    out->mOBS_ACT.mX[2315UL] = t3626->mX.mX[1225UL];
    out->mOBS_ACT.mX[2316UL] = 1.0;
    out->mOBS_ACT.mX[2317UL] = t3626->mX.mX[240UL];
    out->mOBS_ACT.mX[2318UL] = t3626->mX.mX[242UL];
    out->mOBS_ACT.mX[2319UL] = 1.0;
    out->mOBS_ACT.mX[2320UL] = t3626->mX.mX[1225UL];
    out->mOBS_ACT.mX[2321UL] = t3626->mX.mX[1226UL];
    out->mOBS_ACT.mX[2322UL] = 1.0;
    out->mOBS_ACT.mX[2323UL] = 1.0;
    out->mOBS_ACT.mX[2324UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2325UL] = zc_int421;
    out->mOBS_ACT.mX[2326UL] = t3626->mX.mX[242UL];
    out->mOBS_ACT.mX[2327UL] = zc_int422;
    out->mOBS_ACT.mX[2328UL] = t3626->mX.mX[1227UL];
    out->mOBS_ACT.mX[2329UL] = t3626->mX.mX[1227UL];
    out->mOBS_ACT.mX[2330UL] = t3626->mX.mX[240UL];
    out->mOBS_ACT.mX[2331UL] = BatteryPack_v2_ModuleAssembly3_Module09_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[2332UL] = t3626->mX.mX[240UL];
    out->mOBS_ACT.mX[2333UL] = t3626->mX.mX[240UL];
    out->mOBS_ACT.mX[2334UL] = t3626->mX.mX[1228UL] * 1000.0;
    out->mOBS_ACT.mX[2335UL] = zc_int89;
    out->mOBS_ACT.mX[2336UL] = t3626->mX.mX[240UL];
    out->mOBS_ACT.mX[2337UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2338UL] = BatteryPack_v2_ModuleAssembly3_Module09_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[2339UL] = BatteryPack_v2_ModuleAssembly3_Module09_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[2340UL] = zc_int421;
    out->mOBS_ACT.mX[2341UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2342UL] = 0.0;
    out->mOBS_ACT.mX[2343UL] = zc_int421;
    out->mOBS_ACT.mX[2344UL] = zc_int422;
    out->mOBS_ACT.mX[2345UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2346UL] = 0.0;
    out->mOBS_ACT.mX[2347UL] = zc_int422;
    out->mOBS_ACT.mX[2348UL] = t3626->mX.mX[240UL];
    out->mOBS_ACT.mX[2349UL] = BatteryPack_v2_ModuleAssembly3_Module09_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[2350UL] = 0.0;
    out->mOBS_ACT.mX[2351UL] = t3626->mX.mX[240UL];
    out->mOBS_ACT.mX[2352UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2353UL] = zc_int421;
    out->mOBS_ACT.mX[2354UL] = t3626->mX.mX[242UL];
    out->mOBS_ACT.mX[2355UL] = zc_int422;
    out->mOBS_ACT.mX[2356UL] = t3626->mX.mX[1227UL];
    out->mOBS_ACT.mX[2357UL] = t3626->mX.mX[1227UL];
    out->mOBS_ACT.mX[2358UL] = t3626->mX.mX[240UL];
    out->mOBS_ACT.mX[2359UL] = zc_int89;
    out->mOBS_ACT.mX[2360UL] = zc_int422 - zc_int421;
    out->mOBS_ACT.mX[2361UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2362UL] = t3626->mX.mX[248UL];
    out->mOBS_ACT.mX[2363UL] = t3626->mX.mX[248UL];
    out->mOBS_ACT.mX[2364UL] = t3626->mX.mX[248UL];
    out->mOBS_ACT.mX[2365UL] = t3626->mX.mX[248UL];
    out->mOBS_ACT.mX[2366UL] = t3626->mX.mX[249UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[2367UL] = t3626->mX.mX[248UL];
    out->mOBS_ACT.mX[2368UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2369UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2370UL] = t3626->mX.mX[250UL];
    out->mOBS_ACT.mX[2371UL] = t3626->mX.mX[250UL];
    out->mOBS_ACT.mX[2372UL] = t3626->mX.mX[1231UL];
    out->mOBS_ACT.mX[2373UL] = 1.0;
    out->mOBS_ACT.mX[2374UL] = zc_int421;
    for (t2773 = 251UL; t2773 - 251UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2124UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2380UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[2385UL] = 0.0;
    out->mOBS_ACT.mX[2386UL] = t3626->mX.mX[1230UL];
    out->mOBS_ACT.mX[2387UL] = t3626->mX.mX[1232UL] * 1000.0;
    out->mOBS_ACT.mX[2388UL] = t3626->mX.mX[1231UL];
    out->mOBS_ACT.mX[2389UL] = BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2390UL] = 1.0;
    out->mOBS_ACT.mX[2391UL] = t3626->mX.mX[1229UL];
    out->mOBS_ACT.mX[2392UL] = 1.0;
    out->mOBS_ACT.mX[2393UL] = t3626->mX.mX[248UL];
    out->mOBS_ACT.mX[2394UL] = t3626->mX.mX[250UL];
    out->mOBS_ACT.mX[2395UL] = 1.0;
    out->mOBS_ACT.mX[2396UL] = t3626->mX.mX[1229UL];
    out->mOBS_ACT.mX[2397UL] = t3626->mX.mX[1230UL];
    out->mOBS_ACT.mX[2398UL] = 1.0;
    out->mOBS_ACT.mX[2399UL] = 1.0;
    out->mOBS_ACT.mX[2400UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2401UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2402UL] = t3626->mX.mX[250UL];
    out->mOBS_ACT.mX[2403UL] = zc_int421;
    out->mOBS_ACT.mX[2404UL] = t3626->mX.mX[1231UL];
    out->mOBS_ACT.mX[2405UL] = t3626->mX.mX[1231UL];
    out->mOBS_ACT.mX[2406UL] = t3626->mX.mX[248UL];
    out->mOBS_ACT.mX[2407UL] = BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[2408UL] = t3626->mX.mX[248UL];
    out->mOBS_ACT.mX[2409UL] = t3626->mX.mX[248UL];
    out->mOBS_ACT.mX[2410UL] = t3626->mX.mX[1232UL] * 1000.0;
    out->mOBS_ACT.mX[2411UL] = BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2412UL] = t3626->mX.mX[248UL];
    out->mOBS_ACT.mX[2413UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2414UL] = BatteryPack_v2_ModuleAssembly3_Module10_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[2415UL] = BatteryPack_v2_ModuleAssembly3_Module10_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[2416UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2417UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2418UL] = 0.0;
    out->mOBS_ACT.mX[2419UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2420UL] = zc_int421;
    out->mOBS_ACT.mX[2421UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2422UL] = 0.0;
    out->mOBS_ACT.mX[2423UL] = zc_int421;
    out->mOBS_ACT.mX[2424UL] = t3626->mX.mX[248UL];
    out->mOBS_ACT.mX[2425UL] = BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[2426UL] = 0.0;
    out->mOBS_ACT.mX[2427UL] = t3626->mX.mX[248UL];
    out->mOBS_ACT.mX[2428UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2429UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2430UL] = t3626->mX.mX[250UL];
    out->mOBS_ACT.mX[2431UL] = zc_int421;
    out->mOBS_ACT.mX[2432UL] = t3626->mX.mX[1231UL];
    out->mOBS_ACT.mX[2433UL] = t3626->mX.mX[1231UL];
    out->mOBS_ACT.mX[2434UL] = t3626->mX.mX[248UL];
    out->mOBS_ACT.mX[2435UL] = BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2436UL] = zc_int421 - BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2437UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2438UL] = t3626->mX.mX[256UL];
    out->mOBS_ACT.mX[2439UL] = t3626->mX.mX[256UL];
    out->mOBS_ACT.mX[2440UL] = t3626->mX.mX[256UL];
    out->mOBS_ACT.mX[2441UL] = t3626->mX.mX[256UL];
    out->mOBS_ACT.mX[2442UL] = t3626->mX.mX[257UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[2443UL] = t3626->mX.mX[256UL];
    out->mOBS_ACT.mX[2444UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2445UL] = intrm_sf_mf_33;
    out->mOBS_ACT.mX[2446UL] = t3626->mX.mX[258UL];
    out->mOBS_ACT.mX[2447UL] = t3626->mX.mX[258UL];
    out->mOBS_ACT.mX[2448UL] = t3626->mX.mX[1235UL];
    out->mOBS_ACT.mX[2449UL] = 1.0;
    out->mOBS_ACT.mX[2450UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    for (t2773 = 259UL; t2773 - 259UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2192UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2456UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[2461UL] = 0.0;
    out->mOBS_ACT.mX[2462UL] = t3626->mX.mX[1234UL];
    out->mOBS_ACT.mX[2463UL] = t3626->mX.mX[1236UL] * 1000.0;
    out->mOBS_ACT.mX[2464UL] = t3626->mX.mX[1235UL];
    out->mOBS_ACT.mX[2465UL] = BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2466UL] = 1.0;
    out->mOBS_ACT.mX[2467UL] = t3626->mX.mX[1233UL];
    out->mOBS_ACT.mX[2468UL] = 1.0;
    out->mOBS_ACT.mX[2469UL] = t3626->mX.mX[256UL];
    out->mOBS_ACT.mX[2470UL] = t3626->mX.mX[258UL];
    out->mOBS_ACT.mX[2471UL] = 1.0;
    out->mOBS_ACT.mX[2472UL] = t3626->mX.mX[1233UL];
    out->mOBS_ACT.mX[2473UL] = t3626->mX.mX[1234UL];
    out->mOBS_ACT.mX[2474UL] = 1.0;
    out->mOBS_ACT.mX[2475UL] = 1.0;
    out->mOBS_ACT.mX[2476UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2477UL] = intrm_sf_mf_33;
    out->mOBS_ACT.mX[2478UL] = t3626->mX.mX[258UL];
    out->mOBS_ACT.mX[2479UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2480UL] = t3626->mX.mX[1235UL];
    out->mOBS_ACT.mX[2481UL] = t3626->mX.mX[1235UL];
    out->mOBS_ACT.mX[2482UL] = t3626->mX.mX[256UL];
    out->mOBS_ACT.mX[2483UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[2484UL] = t3626->mX.mX[256UL];
    out->mOBS_ACT.mX[2485UL] = t3626->mX.mX[256UL];
    out->mOBS_ACT.mX[2486UL] = t3626->mX.mX[1236UL] * 1000.0;
    out->mOBS_ACT.mX[2487UL] = BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2488UL] = t3626->mX.mX[256UL];
    out->mOBS_ACT.mX[2489UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2490UL] = BatteryPack_v2_ModuleAssembly3_Module11_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[2491UL] = BatteryPack_v2_ModuleAssembly3_Module11_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[2492UL] = intrm_sf_mf_33;
    out->mOBS_ACT.mX[2493UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2494UL] = 0.0;
    out->mOBS_ACT.mX[2495UL] = intrm_sf_mf_33;
    out->mOBS_ACT.mX[2496UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2497UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2498UL] = 0.0;
    out->mOBS_ACT.mX[2499UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2500UL] = t3626->mX.mX[256UL];
    out->mOBS_ACT.mX[2501UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[2502UL] = 0.0;
    out->mOBS_ACT.mX[2503UL] = t3626->mX.mX[256UL];
    out->mOBS_ACT.mX[2504UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2505UL] = intrm_sf_mf_33;
    out->mOBS_ACT.mX[2506UL] = t3626->mX.mX[258UL];
    out->mOBS_ACT.mX[2507UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2508UL] = t3626->mX.mX[1235UL];
    out->mOBS_ACT.mX[2509UL] = t3626->mX.mX[1235UL];
    out->mOBS_ACT.mX[2510UL] = t3626->mX.mX[256UL];
    out->mOBS_ACT.mX[2511UL] = BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2512UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3 - intrm_sf_mf_33;
    out->mOBS_ACT.mX[2513UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2514UL] = t3626->mX.mX[264UL];
    out->mOBS_ACT.mX[2515UL] = t3626->mX.mX[264UL];
    out->mOBS_ACT.mX[2516UL] = t3626->mX.mX[264UL];
    out->mOBS_ACT.mX[2517UL] = t3626->mX.mX[264UL];
    out->mOBS_ACT.mX[2518UL] = t3626->mX.mX[265UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[2519UL] = t3626->mX.mX[264UL];
    out->mOBS_ACT.mX[2520UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2521UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2522UL] = t3626->mX.mX[266UL];
    out->mOBS_ACT.mX[2523UL] = t3626->mX.mX[266UL];
    out->mOBS_ACT.mX[2524UL] = t3626->mX.mX[1239UL];
    out->mOBS_ACT.mX[2525UL] = 1.0;
    out->mOBS_ACT.mX[2526UL] = intrm_sf_mf_33;
    for (t2773 = 267UL; t2773 - 267UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2260UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2532UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[2537UL] = 0.0;
    out->mOBS_ACT.mX[2538UL] = t3626->mX.mX[1238UL];
    out->mOBS_ACT.mX[2539UL] = t3626->mX.mX[1240UL] * 1000.0;
    out->mOBS_ACT.mX[2540UL] = t3626->mX.mX[1239UL];
    out->mOBS_ACT.mX[2541UL] = zc_int97;
    out->mOBS_ACT.mX[2542UL] = 1.0;
    out->mOBS_ACT.mX[2543UL] = t3626->mX.mX[1237UL];
    out->mOBS_ACT.mX[2544UL] = 1.0;
    out->mOBS_ACT.mX[2545UL] = t3626->mX.mX[264UL];
    out->mOBS_ACT.mX[2546UL] = t3626->mX.mX[266UL];
    out->mOBS_ACT.mX[2547UL] = 1.0;
    out->mOBS_ACT.mX[2548UL] = t3626->mX.mX[1237UL];
    out->mOBS_ACT.mX[2549UL] = t3626->mX.mX[1238UL];
    out->mOBS_ACT.mX[2550UL] = 1.0;
    out->mOBS_ACT.mX[2551UL] = 1.0;
    out->mOBS_ACT.mX[2552UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2553UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2554UL] = t3626->mX.mX[266UL];
    out->mOBS_ACT.mX[2555UL] = intrm_sf_mf_33;
    out->mOBS_ACT.mX[2556UL] = t3626->mX.mX[1239UL];
    out->mOBS_ACT.mX[2557UL] = t3626->mX.mX[1239UL];
    out->mOBS_ACT.mX[2558UL] = t3626->mX.mX[264UL];
    out->mOBS_ACT.mX[2559UL] = BatteryPack_v2_ModuleAssembly3_Module12_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[2560UL] = t3626->mX.mX[264UL];
    out->mOBS_ACT.mX[2561UL] = t3626->mX.mX[264UL];
    out->mOBS_ACT.mX[2562UL] = t3626->mX.mX[1240UL] * 1000.0;
    out->mOBS_ACT.mX[2563UL] = zc_int97;
    out->mOBS_ACT.mX[2564UL] = t3626->mX.mX[264UL];
    out->mOBS_ACT.mX[2565UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2566UL] = BatteryPack_v2_ModuleAssembly3_Module12_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[2567UL] = BatteryPack_v2_ModuleAssembly3_Module12_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[2568UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2569UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2570UL] = 0.0;
    out->mOBS_ACT.mX[2571UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2572UL] = intrm_sf_mf_33;
    out->mOBS_ACT.mX[2573UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2574UL] = 0.0;
    out->mOBS_ACT.mX[2575UL] = intrm_sf_mf_33;
    out->mOBS_ACT.mX[2576UL] = t3626->mX.mX[264UL];
    out->mOBS_ACT.mX[2577UL] = BatteryPack_v2_ModuleAssembly3_Module12_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[2578UL] = 0.0;
    out->mOBS_ACT.mX[2579UL] = t3626->mX.mX[264UL];
    out->mOBS_ACT.mX[2580UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2581UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2582UL] = t3626->mX.mX[266UL];
    out->mOBS_ACT.mX[2583UL] = intrm_sf_mf_33;
    out->mOBS_ACT.mX[2584UL] = t3626->mX.mX[1239UL];
    out->mOBS_ACT.mX[2585UL] = t3626->mX.mX[1239UL];
    out->mOBS_ACT.mX[2586UL] = t3626->mX.mX[264UL];
    out->mOBS_ACT.mX[2587UL] = zc_int97;
    out->mOBS_ACT.mX[2588UL] = intrm_sf_mf_33 - BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2589UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2590UL] = t3626->mX.mX[272UL];
    out->mOBS_ACT.mX[2591UL] = t3626->mX.mX[272UL];
    out->mOBS_ACT.mX[2592UL] = t3626->mX.mX[272UL];
    out->mOBS_ACT.mX[2593UL] = t3626->mX.mX[272UL];
    out->mOBS_ACT.mX[2594UL] = t3626->mX.mX[273UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[2595UL] = t3626->mX.mX[272UL];
    out->mOBS_ACT.mX[2596UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2597UL] = intrm_sf_mf_107;
    out->mOBS_ACT.mX[2598UL] = t3626->mX.mX[274UL];
    out->mOBS_ACT.mX[2599UL] = t3626->mX.mX[274UL];
    out->mOBS_ACT.mX[2600UL] = t3626->mX.mX[1243UL];
    out->mOBS_ACT.mX[2601UL] = 1.0;
    out->mOBS_ACT.mX[2602UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    for (t2773 = 275UL; t2773 - 275UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2328UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2608UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[2613UL] = 0.0;
    out->mOBS_ACT.mX[2614UL] = t3626->mX.mX[1242UL];
    out->mOBS_ACT.mX[2615UL] = t3626->mX.mX[1244UL] * 1000.0;
    out->mOBS_ACT.mX[2616UL] = t3626->mX.mX[1243UL];
    out->mOBS_ACT.mX[2617UL] = intrm_sf_mf_4;
    out->mOBS_ACT.mX[2618UL] = 1.0;
    out->mOBS_ACT.mX[2619UL] = t3626->mX.mX[1241UL];
    out->mOBS_ACT.mX[2620UL] = 1.0;
    out->mOBS_ACT.mX[2621UL] = t3626->mX.mX[272UL];
    out->mOBS_ACT.mX[2622UL] = t3626->mX.mX[274UL];
    out->mOBS_ACT.mX[2623UL] = 1.0;
    out->mOBS_ACT.mX[2624UL] = t3626->mX.mX[1241UL];
    out->mOBS_ACT.mX[2625UL] = t3626->mX.mX[1242UL];
    out->mOBS_ACT.mX[2626UL] = 1.0;
    out->mOBS_ACT.mX[2627UL] = 1.0;
    out->mOBS_ACT.mX[2628UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2629UL] = intrm_sf_mf_107;
    out->mOBS_ACT.mX[2630UL] = t3626->mX.mX[274UL];
    out->mOBS_ACT.mX[2631UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2632UL] = t3626->mX.mX[1243UL];
    out->mOBS_ACT.mX[2633UL] = t3626->mX.mX[1243UL];
    out->mOBS_ACT.mX[2634UL] = t3626->mX.mX[272UL];
    out->mOBS_ACT.mX[2635UL] = BatteryPack_v2_ModuleAssembly3_Module13_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[2636UL] = t3626->mX.mX[272UL];
    out->mOBS_ACT.mX[2637UL] = t3626->mX.mX[272UL];
    out->mOBS_ACT.mX[2638UL] = t3626->mX.mX[1244UL] * 1000.0;
    out->mOBS_ACT.mX[2639UL] = intrm_sf_mf_4;
    out->mOBS_ACT.mX[2640UL] = t3626->mX.mX[272UL];
    out->mOBS_ACT.mX[2641UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2642UL] = BatteryPack_v2_ModuleAssembly3_Module13_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[2643UL] = BatteryPack_v2_ModuleAssembly3_Module13_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[2644UL] = intrm_sf_mf_107;
    out->mOBS_ACT.mX[2645UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2646UL] = 0.0;
    out->mOBS_ACT.mX[2647UL] = intrm_sf_mf_107;
    out->mOBS_ACT.mX[2648UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2649UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2650UL] = 0.0;
    out->mOBS_ACT.mX[2651UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2652UL] = t3626->mX.mX[272UL];
    out->mOBS_ACT.mX[2653UL] = BatteryPack_v2_ModuleAssembly3_Module13_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[2654UL] = 0.0;
    out->mOBS_ACT.mX[2655UL] = t3626->mX.mX[272UL];
    out->mOBS_ACT.mX[2656UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2657UL] = intrm_sf_mf_107;
    out->mOBS_ACT.mX[2658UL] = t3626->mX.mX[274UL];
    out->mOBS_ACT.mX[2659UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2660UL] = t3626->mX.mX[1243UL];
    out->mOBS_ACT.mX[2661UL] = t3626->mX.mX[1243UL];
    out->mOBS_ACT.mX[2662UL] = t3626->mX.mX[272UL];
    out->mOBS_ACT.mX[2663UL] = intrm_sf_mf_4;
    out->mOBS_ACT.mX[2664UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3 - intrm_sf_mf_107;
    out->mOBS_ACT.mX[2665UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2666UL] = t3626->mX.mX[280UL];
    out->mOBS_ACT.mX[2667UL] = t3626->mX.mX[280UL];
    out->mOBS_ACT.mX[2668UL] = t3626->mX.mX[280UL];
    out->mOBS_ACT.mX[2669UL] = t3626->mX.mX[280UL];
    out->mOBS_ACT.mX[2670UL] = t3626->mX.mX[281UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[2671UL] = t3626->mX.mX[280UL];
    out->mOBS_ACT.mX[2672UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2673UL] = zc_int416;
    out->mOBS_ACT.mX[2674UL] = t3626->mX.mX[282UL];
    out->mOBS_ACT.mX[2675UL] = t3626->mX.mX[282UL];
    out->mOBS_ACT.mX[2676UL] = t3626->mX.mX[1247UL];
    out->mOBS_ACT.mX[2677UL] = 1.0;
    out->mOBS_ACT.mX[2678UL] = intrm_sf_mf_107;
    for (t2773 = 283UL; t2773 - 283UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2396UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2684UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[2689UL] = 0.0;
    out->mOBS_ACT.mX[2690UL] = t3626->mX.mX[1246UL];
    out->mOBS_ACT.mX[2691UL] = t3626->mX.mX[1248UL] * 1000.0;
    out->mOBS_ACT.mX[2692UL] = t3626->mX.mX[1247UL];
    out->mOBS_ACT.mX[2693UL] = zc_int102;
    out->mOBS_ACT.mX[2694UL] = 1.0;
    out->mOBS_ACT.mX[2695UL] = t3626->mX.mX[1245UL];
    out->mOBS_ACT.mX[2696UL] = 1.0;
    out->mOBS_ACT.mX[2697UL] = t3626->mX.mX[280UL];
    out->mOBS_ACT.mX[2698UL] = t3626->mX.mX[282UL];
    out->mOBS_ACT.mX[2699UL] = 1.0;
    out->mOBS_ACT.mX[2700UL] = t3626->mX.mX[1245UL];
    out->mOBS_ACT.mX[2701UL] = t3626->mX.mX[1246UL];
    out->mOBS_ACT.mX[2702UL] = 1.0;
    out->mOBS_ACT.mX[2703UL] = 1.0;
    out->mOBS_ACT.mX[2704UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2705UL] = zc_int416;
    out->mOBS_ACT.mX[2706UL] = t3626->mX.mX[282UL];
    out->mOBS_ACT.mX[2707UL] = intrm_sf_mf_107;
    out->mOBS_ACT.mX[2708UL] = t3626->mX.mX[1247UL];
    out->mOBS_ACT.mX[2709UL] = t3626->mX.mX[1247UL];
    out->mOBS_ACT.mX[2710UL] = t3626->mX.mX[280UL];
    out->mOBS_ACT.mX[2711UL] = BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[2712UL] = t3626->mX.mX[280UL];
    out->mOBS_ACT.mX[2713UL] = t3626->mX.mX[280UL];
    out->mOBS_ACT.mX[2714UL] = t3626->mX.mX[1248UL] * 1000.0;
    out->mOBS_ACT.mX[2715UL] = zc_int102;
    out->mOBS_ACT.mX[2716UL] = t3626->mX.mX[280UL];
    out->mOBS_ACT.mX[2717UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2718UL] = BatteryPack_v2_ModuleAssembly3_Module14_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[2719UL] = BatteryPack_v2_ModuleAssembly3_Module14_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[2720UL] = zc_int416;
    out->mOBS_ACT.mX[2721UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2722UL] = 0.0;
    out->mOBS_ACT.mX[2723UL] = zc_int416;
    out->mOBS_ACT.mX[2724UL] = intrm_sf_mf_107;
    out->mOBS_ACT.mX[2725UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2726UL] = 0.0;
    out->mOBS_ACT.mX[2727UL] = intrm_sf_mf_107;
    out->mOBS_ACT.mX[2728UL] = t3626->mX.mX[280UL];
    out->mOBS_ACT.mX[2729UL] = BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[2730UL] = 0.0;
    out->mOBS_ACT.mX[2731UL] = t3626->mX.mX[280UL];
    out->mOBS_ACT.mX[2732UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2733UL] = zc_int416;
    out->mOBS_ACT.mX[2734UL] = t3626->mX.mX[282UL];
    out->mOBS_ACT.mX[2735UL] = intrm_sf_mf_107;
    out->mOBS_ACT.mX[2736UL] = t3626->mX.mX[1247UL];
    out->mOBS_ACT.mX[2737UL] = t3626->mX.mX[1247UL];
    out->mOBS_ACT.mX[2738UL] = t3626->mX.mX[280UL];
    out->mOBS_ACT.mX[2739UL] = zc_int102;
    out->mOBS_ACT.mX[2740UL] = intrm_sf_mf_107 - zc_int416;
    out->mOBS_ACT.mX[2741UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2742UL] = t3626->mX.mX[288UL];
    out->mOBS_ACT.mX[2743UL] = t3626->mX.mX[288UL];
    out->mOBS_ACT.mX[2744UL] = t3626->mX.mX[288UL];
    out->mOBS_ACT.mX[2745UL] = t3626->mX.mX[288UL];
    out->mOBS_ACT.mX[2746UL] = t3626->mX.mX[289UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[2747UL] = t3626->mX.mX[288UL];
    out->mOBS_ACT.mX[2748UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2749UL] = zc_int415;
    out->mOBS_ACT.mX[2750UL] = t3626->mX.mX[290UL];
    out->mOBS_ACT.mX[2751UL] = t3626->mX.mX[290UL];
    out->mOBS_ACT.mX[2752UL] = t3626->mX.mX[1251UL];
    out->mOBS_ACT.mX[2753UL] = 1.0;
    out->mOBS_ACT.mX[2754UL] = zc_int416;
    for (t2773 = 291UL; t2773 - 291UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2464UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2760UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[2765UL] = 0.0;
    out->mOBS_ACT.mX[2766UL] = t3626->mX.mX[1250UL];
    out->mOBS_ACT.mX[2767UL] = t3626->mX.mX[1252UL] * 1000.0;
    out->mOBS_ACT.mX[2768UL] = t3626->mX.mX[1251UL];
    out->mOBS_ACT.mX[2769UL] = zc_int99;
    out->mOBS_ACT.mX[2770UL] = 1.0;
    out->mOBS_ACT.mX[2771UL] = t3626->mX.mX[1249UL];
    out->mOBS_ACT.mX[2772UL] = 1.0;
    out->mOBS_ACT.mX[2773UL] = t3626->mX.mX[288UL];
    out->mOBS_ACT.mX[2774UL] = t3626->mX.mX[290UL];
    out->mOBS_ACT.mX[2775UL] = 1.0;
    out->mOBS_ACT.mX[2776UL] = t3626->mX.mX[1249UL];
    out->mOBS_ACT.mX[2777UL] = t3626->mX.mX[1250UL];
    out->mOBS_ACT.mX[2778UL] = 1.0;
    out->mOBS_ACT.mX[2779UL] = 1.0;
    out->mOBS_ACT.mX[2780UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2781UL] = zc_int415;
    out->mOBS_ACT.mX[2782UL] = t3626->mX.mX[290UL];
    out->mOBS_ACT.mX[2783UL] = zc_int416;
    out->mOBS_ACT.mX[2784UL] = t3626->mX.mX[1251UL];
    out->mOBS_ACT.mX[2785UL] = t3626->mX.mX[1251UL];
    out->mOBS_ACT.mX[2786UL] = t3626->mX.mX[288UL];
    out->mOBS_ACT.mX[2787UL] = BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[2788UL] = t3626->mX.mX[288UL];
    out->mOBS_ACT.mX[2789UL] = t3626->mX.mX[288UL];
    out->mOBS_ACT.mX[2790UL] = t3626->mX.mX[1252UL] * 1000.0;
    out->mOBS_ACT.mX[2791UL] = zc_int99;
    out->mOBS_ACT.mX[2792UL] = t3626->mX.mX[288UL];
    out->mOBS_ACT.mX[2793UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2794UL] = BatteryPack_v2_ModuleAssembly3_Module15_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[2795UL] = BatteryPack_v2_ModuleAssembly3_Module15_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[2796UL] = zc_int415;
    out->mOBS_ACT.mX[2797UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2798UL] = 0.0;
    out->mOBS_ACT.mX[2799UL] = zc_int415;
    out->mOBS_ACT.mX[2800UL] = zc_int416;
    out->mOBS_ACT.mX[2801UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2802UL] = 0.0;
    out->mOBS_ACT.mX[2803UL] = zc_int416;
    out->mOBS_ACT.mX[2804UL] = t3626->mX.mX[288UL];
    out->mOBS_ACT.mX[2805UL] = BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[2806UL] = 0.0;
    out->mOBS_ACT.mX[2807UL] = t3626->mX.mX[288UL];
    out->mOBS_ACT.mX[2808UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2809UL] = zc_int415;
    out->mOBS_ACT.mX[2810UL] = t3626->mX.mX[290UL];
    out->mOBS_ACT.mX[2811UL] = zc_int416;
    out->mOBS_ACT.mX[2812UL] = t3626->mX.mX[1251UL];
    out->mOBS_ACT.mX[2813UL] = t3626->mX.mX[1251UL];
    out->mOBS_ACT.mX[2814UL] = t3626->mX.mX[288UL];
    out->mOBS_ACT.mX[2815UL] = zc_int99;
    out->mOBS_ACT.mX[2816UL] = zc_int416 - zc_int415;
    out->mOBS_ACT.mX[2817UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2818UL] = t3626->mX.mX[296UL];
    out->mOBS_ACT.mX[2819UL] = t3626->mX.mX[296UL];
    out->mOBS_ACT.mX[2820UL] = t3626->mX.mX[296UL];
    out->mOBS_ACT.mX[2821UL] = t3626->mX.mX[296UL];
    out->mOBS_ACT.mX[2822UL] = t3626->mX.mX[297UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[2823UL] = t3626->mX.mX[296UL];
    out->mOBS_ACT.mX[2824UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2825UL] = zc_int414;
    out->mOBS_ACT.mX[2826UL] = t3626->mX.mX[298UL];
    out->mOBS_ACT.mX[2827UL] = t3626->mX.mX[298UL];
    out->mOBS_ACT.mX[2828UL] = t3626->mX.mX[1255UL];
    out->mOBS_ACT.mX[2829UL] = 1.0;
    out->mOBS_ACT.mX[2830UL] = zc_int415;
    for (t2773 = 299UL; t2773 - 299UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2532UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2836UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[2841UL] = 0.0;
    out->mOBS_ACT.mX[2842UL] = t3626->mX.mX[1254UL];
    out->mOBS_ACT.mX[2843UL] = t3626->mX.mX[1256UL] * 1000.0;
    out->mOBS_ACT.mX[2844UL] = t3626->mX.mX[1255UL];
    out->mOBS_ACT.mX[2845UL] = zc_int110;
    out->mOBS_ACT.mX[2846UL] = 1.0;
    out->mOBS_ACT.mX[2847UL] = t3626->mX.mX[1253UL];
    out->mOBS_ACT.mX[2848UL] = 1.0;
    out->mOBS_ACT.mX[2849UL] = t3626->mX.mX[296UL];
    out->mOBS_ACT.mX[2850UL] = t3626->mX.mX[298UL];
    out->mOBS_ACT.mX[2851UL] = 1.0;
    out->mOBS_ACT.mX[2852UL] = t3626->mX.mX[1253UL];
    out->mOBS_ACT.mX[2853UL] = t3626->mX.mX[1254UL];
    out->mOBS_ACT.mX[2854UL] = 1.0;
    out->mOBS_ACT.mX[2855UL] = 1.0;
    out->mOBS_ACT.mX[2856UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2857UL] = zc_int414;
    out->mOBS_ACT.mX[2858UL] = t3626->mX.mX[298UL];
    out->mOBS_ACT.mX[2859UL] = zc_int415;
    out->mOBS_ACT.mX[2860UL] = t3626->mX.mX[1255UL];
    out->mOBS_ACT.mX[2861UL] = t3626->mX.mX[1255UL];
    out->mOBS_ACT.mX[2862UL] = t3626->mX.mX[296UL];
    out->mOBS_ACT.mX[2863UL] = BatteryPack_v2_ModuleAssembly3_Module16_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[2864UL] = t3626->mX.mX[296UL];
    out->mOBS_ACT.mX[2865UL] = t3626->mX.mX[296UL];
    out->mOBS_ACT.mX[2866UL] = t3626->mX.mX[1256UL] * 1000.0;
    out->mOBS_ACT.mX[2867UL] = zc_int110;
    out->mOBS_ACT.mX[2868UL] = t3626->mX.mX[296UL];
    out->mOBS_ACT.mX[2869UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2870UL] = BatteryPack_v2_ModuleAssembly3_Module16_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[2871UL] = BatteryPack_v2_ModuleAssembly3_Module16_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[2872UL] = zc_int414;
    out->mOBS_ACT.mX[2873UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2874UL] = 0.0;
    out->mOBS_ACT.mX[2875UL] = zc_int414;
    out->mOBS_ACT.mX[2876UL] = zc_int415;
    out->mOBS_ACT.mX[2877UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2878UL] = 0.0;
    out->mOBS_ACT.mX[2879UL] = zc_int415;
    out->mOBS_ACT.mX[2880UL] = t3626->mX.mX[296UL];
    out->mOBS_ACT.mX[2881UL] = BatteryPack_v2_ModuleAssembly3_Module16_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[2882UL] = 0.0;
    out->mOBS_ACT.mX[2883UL] = t3626->mX.mX[296UL];
    out->mOBS_ACT.mX[2884UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2885UL] = zc_int414;
    out->mOBS_ACT.mX[2886UL] = t3626->mX.mX[298UL];
    out->mOBS_ACT.mX[2887UL] = zc_int415;
    out->mOBS_ACT.mX[2888UL] = t3626->mX.mX[1255UL];
    out->mOBS_ACT.mX[2889UL] = t3626->mX.mX[1255UL];
    out->mOBS_ACT.mX[2890UL] = t3626->mX.mX[296UL];
    out->mOBS_ACT.mX[2891UL] = zc_int110;
    out->mOBS_ACT.mX[2892UL] = zc_int415 - zc_int414;
    out->mOBS_ACT.mX[2893UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2894UL] = t3626->mX.mX[304UL];
    out->mOBS_ACT.mX[2895UL] = t3626->mX.mX[304UL];
    out->mOBS_ACT.mX[2896UL] = t3626->mX.mX[304UL];
    out->mOBS_ACT.mX[2897UL] = t3626->mX.mX[304UL];
    out->mOBS_ACT.mX[2898UL] = t3626->mX.mX[305UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[2899UL] = t3626->mX.mX[304UL];
    out->mOBS_ACT.mX[2900UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2901UL] = intrm_sf_mf_105;
    out->mOBS_ACT.mX[2902UL] = t3626->mX.mX[306UL];
    out->mOBS_ACT.mX[2903UL] = t3626->mX.mX[306UL];
    out->mOBS_ACT.mX[2904UL] = t3626->mX.mX[1259UL];
    out->mOBS_ACT.mX[2905UL] = 1.0;
    out->mOBS_ACT.mX[2906UL] = zc_int414;
    for (t2773 = 307UL; t2773 - 307UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2600UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2912UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[2917UL] = 0.0;
    out->mOBS_ACT.mX[2918UL] = t3626->mX.mX[1258UL];
    out->mOBS_ACT.mX[2919UL] = t3626->mX.mX[1260UL] * 1000.0;
    out->mOBS_ACT.mX[2920UL] = t3626->mX.mX[1259UL];
    out->mOBS_ACT.mX[2921UL] = BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2922UL] = 1.0;
    out->mOBS_ACT.mX[2923UL] = t3626->mX.mX[1257UL];
    out->mOBS_ACT.mX[2924UL] = 1.0;
    out->mOBS_ACT.mX[2925UL] = t3626->mX.mX[304UL];
    out->mOBS_ACT.mX[2926UL] = t3626->mX.mX[306UL];
    out->mOBS_ACT.mX[2927UL] = 1.0;
    out->mOBS_ACT.mX[2928UL] = t3626->mX.mX[1257UL];
    out->mOBS_ACT.mX[2929UL] = t3626->mX.mX[1258UL];
    out->mOBS_ACT.mX[2930UL] = 1.0;
    out->mOBS_ACT.mX[2931UL] = 1.0;
    out->mOBS_ACT.mX[2932UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2933UL] = intrm_sf_mf_105;
    out->mOBS_ACT.mX[2934UL] = t3626->mX.mX[306UL];
    out->mOBS_ACT.mX[2935UL] = zc_int414;
    out->mOBS_ACT.mX[2936UL] = t3626->mX.mX[1259UL];
    out->mOBS_ACT.mX[2937UL] = t3626->mX.mX[1259UL];
    out->mOBS_ACT.mX[2938UL] = t3626->mX.mX[304UL];
    out->mOBS_ACT.mX[2939UL] = BatteryPack_v2_ModuleAssembly3_Module17_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[2940UL] = t3626->mX.mX[304UL];
    out->mOBS_ACT.mX[2941UL] = t3626->mX.mX[304UL];
    out->mOBS_ACT.mX[2942UL] = t3626->mX.mX[1260UL] * 1000.0;
    out->mOBS_ACT.mX[2943UL] = BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2944UL] = t3626->mX.mX[304UL];
    out->mOBS_ACT.mX[2945UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2946UL] = BatteryPack_v2_ModuleAssembly3_Module17_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[2947UL] = BatteryPack_v2_ModuleAssembly3_Module17_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[2948UL] = intrm_sf_mf_105;
    out->mOBS_ACT.mX[2949UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2950UL] = 0.0;
    out->mOBS_ACT.mX[2951UL] = intrm_sf_mf_105;
    out->mOBS_ACT.mX[2952UL] = zc_int414;
    out->mOBS_ACT.mX[2953UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2954UL] = 0.0;
    out->mOBS_ACT.mX[2955UL] = zc_int414;
    out->mOBS_ACT.mX[2956UL] = t3626->mX.mX[304UL];
    out->mOBS_ACT.mX[2957UL] = BatteryPack_v2_ModuleAssembly3_Module17_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[2958UL] = 0.0;
    out->mOBS_ACT.mX[2959UL] = t3626->mX.mX[304UL];
    out->mOBS_ACT.mX[2960UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2961UL] = intrm_sf_mf_105;
    out->mOBS_ACT.mX[2962UL] = t3626->mX.mX[306UL];
    out->mOBS_ACT.mX[2963UL] = zc_int414;
    out->mOBS_ACT.mX[2964UL] = t3626->mX.mX[1259UL];
    out->mOBS_ACT.mX[2965UL] = t3626->mX.mX[1259UL];
    out->mOBS_ACT.mX[2966UL] = t3626->mX.mX[304UL];
    out->mOBS_ACT.mX[2967UL] = BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2968UL] = zc_int414 - intrm_sf_mf_105;
    out->mOBS_ACT.mX[2969UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[2970UL] = t3626->mX.mX[312UL];
    out->mOBS_ACT.mX[2971UL] = t3626->mX.mX[312UL];
    out->mOBS_ACT.mX[2972UL] = t3626->mX.mX[312UL];
    out->mOBS_ACT.mX[2973UL] = t3626->mX.mX[312UL];
    out->mOBS_ACT.mX[2974UL] = t3626->mX.mX[313UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[2975UL] = t3626->mX.mX[312UL];
    out->mOBS_ACT.mX[2976UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[2977UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[2978UL] = t3626->mX.mX[314UL];
    out->mOBS_ACT.mX[2979UL] = t3626->mX.mX[314UL];
    out->mOBS_ACT.mX[2980UL] = t3626->mX.mX[1263UL];
    out->mOBS_ACT.mX[2981UL] = 1.0;
    out->mOBS_ACT.mX[2982UL] = intrm_sf_mf_105;
    for (t2773 = 315UL; t2773 - 315UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2668UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2988UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[2993UL] = 0.0;
    out->mOBS_ACT.mX[2994UL] = t3626->mX.mX[1262UL];
    out->mOBS_ACT.mX[2995UL] = t3626->mX.mX[1264UL] * 1000.0;
    out->mOBS_ACT.mX[2996UL] = t3626->mX.mX[1263UL];
    out->mOBS_ACT.mX[2997UL] = zc_int114;
    out->mOBS_ACT.mX[2998UL] = 1.0;
    out->mOBS_ACT.mX[2999UL] = t3626->mX.mX[1261UL];
    out->mOBS_ACT.mX[3000UL] = 1.0;
    out->mOBS_ACT.mX[3001UL] = t3626->mX.mX[312UL];
    out->mOBS_ACT.mX[3002UL] = t3626->mX.mX[314UL];
    out->mOBS_ACT.mX[3003UL] = 1.0;
    out->mOBS_ACT.mX[3004UL] = t3626->mX.mX[1261UL];
    out->mOBS_ACT.mX[3005UL] = t3626->mX.mX[1262UL];
    out->mOBS_ACT.mX[3006UL] = 1.0;
    out->mOBS_ACT.mX[3007UL] = 1.0;
    out->mOBS_ACT.mX[3008UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3009UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3010UL] = t3626->mX.mX[314UL];
    out->mOBS_ACT.mX[3011UL] = intrm_sf_mf_105;
    out->mOBS_ACT.mX[3012UL] = t3626->mX.mX[1263UL];
    out->mOBS_ACT.mX[3013UL] = t3626->mX.mX[1263UL];
    out->mOBS_ACT.mX[3014UL] = t3626->mX.mX[312UL];
    out->mOBS_ACT.mX[3015UL] = BatteryPack_v2_ModuleAssembly3_Module18_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[3016UL] = t3626->mX.mX[312UL];
    out->mOBS_ACT.mX[3017UL] = t3626->mX.mX[312UL];
    out->mOBS_ACT.mX[3018UL] = t3626->mX.mX[1264UL] * 1000.0;
    out->mOBS_ACT.mX[3019UL] = zc_int114;
    out->mOBS_ACT.mX[3020UL] = t3626->mX.mX[312UL];
    out->mOBS_ACT.mX[3021UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3022UL] = BatteryPack_v2_ModuleAssembly3_Module18_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[3023UL] = BatteryPack_v2_ModuleAssembly3_Module18_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[3024UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3025UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3026UL] = 0.0;
    out->mOBS_ACT.mX[3027UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3028UL] = intrm_sf_mf_105;
    out->mOBS_ACT.mX[3029UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3030UL] = 0.0;
    out->mOBS_ACT.mX[3031UL] = intrm_sf_mf_105;
    out->mOBS_ACT.mX[3032UL] = t3626->mX.mX[312UL];
    out->mOBS_ACT.mX[3033UL] = BatteryPack_v2_ModuleAssembly3_Module18_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[3034UL] = 0.0;
    out->mOBS_ACT.mX[3035UL] = t3626->mX.mX[312UL];
    out->mOBS_ACT.mX[3036UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3037UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3038UL] = t3626->mX.mX[314UL];
    out->mOBS_ACT.mX[3039UL] = intrm_sf_mf_105;
    out->mOBS_ACT.mX[3040UL] = t3626->mX.mX[1263UL];
    out->mOBS_ACT.mX[3041UL] = t3626->mX.mX[1263UL];
    out->mOBS_ACT.mX[3042UL] = t3626->mX.mX[312UL];
    out->mOBS_ACT.mX[3043UL] = zc_int114;
    out->mOBS_ACT.mX[3044UL] = intrm_sf_mf_105 - BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3045UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3046UL] = t3626->mX.mX[320UL];
    out->mOBS_ACT.mX[3047UL] = t3626->mX.mX[320UL];
    out->mOBS_ACT.mX[3048UL] = t3626->mX.mX[320UL];
    out->mOBS_ACT.mX[3049UL] = t3626->mX.mX[320UL];
    out->mOBS_ACT.mX[3050UL] = t3626->mX.mX[321UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[3051UL] = t3626->mX.mX[320UL];
    out->mOBS_ACT.mX[3052UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3053UL] = intrm_sf_mf_104;
    out->mOBS_ACT.mX[3054UL] = t3626->mX.mX[322UL];
    out->mOBS_ACT.mX[3055UL] = t3626->mX.mX[322UL];
    out->mOBS_ACT.mX[3056UL] = t3626->mX.mX[1267UL];
    out->mOBS_ACT.mX[3057UL] = 1.0;
    out->mOBS_ACT.mX[3058UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    for (t2773 = 323UL; t2773 - 323UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2736UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3064UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[3069UL] = 0.0;
    out->mOBS_ACT.mX[3070UL] = t3626->mX.mX[1266UL];
    out->mOBS_ACT.mX[3071UL] = t3626->mX.mX[1268UL] * 1000.0;
    out->mOBS_ACT.mX[3072UL] = t3626->mX.mX[1267UL];
    out->mOBS_ACT.mX[3073UL] = BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3074UL] = 1.0;
    out->mOBS_ACT.mX[3075UL] = t3626->mX.mX[1265UL];
    out->mOBS_ACT.mX[3076UL] = 1.0;
    out->mOBS_ACT.mX[3077UL] = t3626->mX.mX[320UL];
    out->mOBS_ACT.mX[3078UL] = t3626->mX.mX[322UL];
    out->mOBS_ACT.mX[3079UL] = 1.0;
    out->mOBS_ACT.mX[3080UL] = t3626->mX.mX[1265UL];
    out->mOBS_ACT.mX[3081UL] = t3626->mX.mX[1266UL];
    out->mOBS_ACT.mX[3082UL] = 1.0;
    out->mOBS_ACT.mX[3083UL] = 1.0;
    out->mOBS_ACT.mX[3084UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3085UL] = intrm_sf_mf_104;
    out->mOBS_ACT.mX[3086UL] = t3626->mX.mX[322UL];
    out->mOBS_ACT.mX[3087UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3088UL] = t3626->mX.mX[1267UL];
    out->mOBS_ACT.mX[3089UL] = t3626->mX.mX[1267UL];
    out->mOBS_ACT.mX[3090UL] = t3626->mX.mX[320UL];
    out->mOBS_ACT.mX[3091UL] = BatteryPack_v2_ModuleAssembly3_Module19_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[3092UL] = t3626->mX.mX[320UL];
    out->mOBS_ACT.mX[3093UL] = t3626->mX.mX[320UL];
    out->mOBS_ACT.mX[3094UL] = t3626->mX.mX[1268UL] * 1000.0;
    out->mOBS_ACT.mX[3095UL] = BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3096UL] = t3626->mX.mX[320UL];
    out->mOBS_ACT.mX[3097UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3098UL] = BatteryPack_v2_ModuleAssembly3_Module19_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[3099UL] = BatteryPack_v2_ModuleAssembly3_Module19_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[3100UL] = intrm_sf_mf_104;
    out->mOBS_ACT.mX[3101UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3102UL] = 0.0;
    out->mOBS_ACT.mX[3103UL] = intrm_sf_mf_104;
    out->mOBS_ACT.mX[3104UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3105UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3106UL] = 0.0;
    out->mOBS_ACT.mX[3107UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3108UL] = t3626->mX.mX[320UL];
    out->mOBS_ACT.mX[3109UL] = BatteryPack_v2_ModuleAssembly3_Module19_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[3110UL] = 0.0;
    out->mOBS_ACT.mX[3111UL] = t3626->mX.mX[320UL];
    out->mOBS_ACT.mX[3112UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3113UL] = intrm_sf_mf_104;
    out->mOBS_ACT.mX[3114UL] = t3626->mX.mX[322UL];
    out->mOBS_ACT.mX[3115UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3116UL] = t3626->mX.mX[1267UL];
    out->mOBS_ACT.mX[3117UL] = t3626->mX.mX[1267UL];
    out->mOBS_ACT.mX[3118UL] = t3626->mX.mX[320UL];
    out->mOBS_ACT.mX[3119UL] = BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3120UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3 - intrm_sf_mf_104;
    out->mOBS_ACT.mX[3121UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3122UL] = t3626->mX.mX[328UL];
    out->mOBS_ACT.mX[3123UL] = t3626->mX.mX[328UL];
    out->mOBS_ACT.mX[3124UL] = t3626->mX.mX[328UL];
    out->mOBS_ACT.mX[3125UL] = t3626->mX.mX[328UL];
    out->mOBS_ACT.mX[3126UL] = t3626->mX.mX[329UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[3127UL] = t3626->mX.mX[328UL];
    out->mOBS_ACT.mX[3128UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3129UL] = zc_int410;
    out->mOBS_ACT.mX[3130UL] = t3626->mX.mX[330UL];
    out->mOBS_ACT.mX[3131UL] = t3626->mX.mX[330UL];
    out->mOBS_ACT.mX[3132UL] = t3626->mX.mX[1271UL];
    out->mOBS_ACT.mX[3133UL] = 1.0;
    out->mOBS_ACT.mX[3134UL] = intrm_sf_mf_104;
    for (t2773 = 331UL; t2773 - 331UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2804UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3140UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[3145UL] = 0.0;
    out->mOBS_ACT.mX[3146UL] = t3626->mX.mX[1270UL];
    out->mOBS_ACT.mX[3147UL] = t3626->mX.mX[1272UL] * 1000.0;
    out->mOBS_ACT.mX[3148UL] = t3626->mX.mX[1271UL];
    out->mOBS_ACT.mX[3149UL] = zc_int120;
    out->mOBS_ACT.mX[3150UL] = 1.0;
    out->mOBS_ACT.mX[3151UL] = t3626->mX.mX[1269UL];
    out->mOBS_ACT.mX[3152UL] = 1.0;
    out->mOBS_ACT.mX[3153UL] = t3626->mX.mX[328UL];
    out->mOBS_ACT.mX[3154UL] = t3626->mX.mX[330UL];
    out->mOBS_ACT.mX[3155UL] = 1.0;
    out->mOBS_ACT.mX[3156UL] = t3626->mX.mX[1269UL];
    out->mOBS_ACT.mX[3157UL] = t3626->mX.mX[1270UL];
    out->mOBS_ACT.mX[3158UL] = 1.0;
    out->mOBS_ACT.mX[3159UL] = 1.0;
    out->mOBS_ACT.mX[3160UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3161UL] = zc_int410;
    out->mOBS_ACT.mX[3162UL] = t3626->mX.mX[330UL];
    out->mOBS_ACT.mX[3163UL] = intrm_sf_mf_104;
    out->mOBS_ACT.mX[3164UL] = t3626->mX.mX[1271UL];
    out->mOBS_ACT.mX[3165UL] = t3626->mX.mX[1271UL];
    out->mOBS_ACT.mX[3166UL] = t3626->mX.mX[328UL];
    out->mOBS_ACT.mX[3167UL] = BatteryPack_v2_ModuleAssembly3_Module20_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[3168UL] = t3626->mX.mX[328UL];
    out->mOBS_ACT.mX[3169UL] = t3626->mX.mX[328UL];
    out->mOBS_ACT.mX[3170UL] = t3626->mX.mX[1272UL] * 1000.0;
    out->mOBS_ACT.mX[3171UL] = zc_int120;
    out->mOBS_ACT.mX[3172UL] = t3626->mX.mX[328UL];
    out->mOBS_ACT.mX[3173UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3174UL] = BatteryPack_v2_ModuleAssembly3_Module20_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[3175UL] = BatteryPack_v2_ModuleAssembly3_Module20_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[3176UL] = zc_int410;
    out->mOBS_ACT.mX[3177UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3178UL] = 0.0;
    out->mOBS_ACT.mX[3179UL] = zc_int410;
    out->mOBS_ACT.mX[3180UL] = intrm_sf_mf_104;
    out->mOBS_ACT.mX[3181UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3182UL] = 0.0;
    out->mOBS_ACT.mX[3183UL] = intrm_sf_mf_104;
    out->mOBS_ACT.mX[3184UL] = t3626->mX.mX[328UL];
    out->mOBS_ACT.mX[3185UL] = BatteryPack_v2_ModuleAssembly3_Module20_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[3186UL] = 0.0;
    out->mOBS_ACT.mX[3187UL] = t3626->mX.mX[328UL];
    out->mOBS_ACT.mX[3188UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3189UL] = zc_int410;
    out->mOBS_ACT.mX[3190UL] = t3626->mX.mX[330UL];
    out->mOBS_ACT.mX[3191UL] = intrm_sf_mf_104;
    out->mOBS_ACT.mX[3192UL] = t3626->mX.mX[1271UL];
    out->mOBS_ACT.mX[3193UL] = t3626->mX.mX[1271UL];
    out->mOBS_ACT.mX[3194UL] = t3626->mX.mX[328UL];
    out->mOBS_ACT.mX[3195UL] = zc_int120;
    out->mOBS_ACT.mX[3196UL] = intrm_sf_mf_104 - zc_int410;
    out->mOBS_ACT.mX[3197UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3198UL] = t3626->mX.mX[336UL];
    out->mOBS_ACT.mX[3199UL] = t3626->mX.mX[336UL];
    out->mOBS_ACT.mX[3200UL] = t3626->mX.mX[336UL];
    out->mOBS_ACT.mX[3201UL] = t3626->mX.mX[336UL];
    out->mOBS_ACT.mX[3202UL] = t3626->mX.mX[337UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[3203UL] = t3626->mX.mX[336UL];
    out->mOBS_ACT.mX[3204UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3205UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3206UL] = t3626->mX.mX[338UL];
    out->mOBS_ACT.mX[3207UL] = t3626->mX.mX[338UL];
    out->mOBS_ACT.mX[3208UL] = t3626->mX.mX[1275UL];
    out->mOBS_ACT.mX[3209UL] = 1.0;
    out->mOBS_ACT.mX[3210UL] = zc_int410;
    for (t2773 = 339UL; t2773 - 339UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2872UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3216UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[3221UL] = 0.0;
    out->mOBS_ACT.mX[3222UL] = t3626->mX.mX[1274UL];
    out->mOBS_ACT.mX[3223UL] = t3626->mX.mX[1276UL] * 1000.0;
    out->mOBS_ACT.mX[3224UL] = t3626->mX.mX[1275UL];
    out->mOBS_ACT.mX[3225UL] = zc_int121;
    out->mOBS_ACT.mX[3226UL] = 1.0;
    out->mOBS_ACT.mX[3227UL] = t3626->mX.mX[1273UL];
    out->mOBS_ACT.mX[3228UL] = 1.0;
    out->mOBS_ACT.mX[3229UL] = t3626->mX.mX[336UL];
    out->mOBS_ACT.mX[3230UL] = t3626->mX.mX[338UL];
    out->mOBS_ACT.mX[3231UL] = 1.0;
    out->mOBS_ACT.mX[3232UL] = t3626->mX.mX[1273UL];
    out->mOBS_ACT.mX[3233UL] = t3626->mX.mX[1274UL];
    out->mOBS_ACT.mX[3234UL] = 1.0;
    out->mOBS_ACT.mX[3235UL] = 1.0;
    out->mOBS_ACT.mX[3236UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3237UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3238UL] = t3626->mX.mX[338UL];
    out->mOBS_ACT.mX[3239UL] = zc_int410;
    out->mOBS_ACT.mX[3240UL] = t3626->mX.mX[1275UL];
    out->mOBS_ACT.mX[3241UL] = t3626->mX.mX[1275UL];
    out->mOBS_ACT.mX[3242UL] = t3626->mX.mX[336UL];
    out->mOBS_ACT.mX[3243UL] = BatteryPack_v2_ModuleAssembly3_Module21_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[3244UL] = t3626->mX.mX[336UL];
    out->mOBS_ACT.mX[3245UL] = t3626->mX.mX[336UL];
    out->mOBS_ACT.mX[3246UL] = t3626->mX.mX[1276UL] * 1000.0;
    out->mOBS_ACT.mX[3247UL] = zc_int121;
    out->mOBS_ACT.mX[3248UL] = t3626->mX.mX[336UL];
    out->mOBS_ACT.mX[3249UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3250UL] = BatteryPack_v2_ModuleAssembly3_Module21_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[3251UL] = BatteryPack_v2_ModuleAssembly3_Module21_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[3252UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3253UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3254UL] = 0.0;
    out->mOBS_ACT.mX[3255UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3256UL] = zc_int410;
    out->mOBS_ACT.mX[3257UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3258UL] = 0.0;
    out->mOBS_ACT.mX[3259UL] = zc_int410;
    out->mOBS_ACT.mX[3260UL] = t3626->mX.mX[336UL];
    out->mOBS_ACT.mX[3261UL] = BatteryPack_v2_ModuleAssembly3_Module21_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[3262UL] = 0.0;
    out->mOBS_ACT.mX[3263UL] = t3626->mX.mX[336UL];
    out->mOBS_ACT.mX[3264UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3265UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3266UL] = t3626->mX.mX[338UL];
    out->mOBS_ACT.mX[3267UL] = zc_int410;
    out->mOBS_ACT.mX[3268UL] = t3626->mX.mX[1275UL];
    out->mOBS_ACT.mX[3269UL] = t3626->mX.mX[1275UL];
    out->mOBS_ACT.mX[3270UL] = t3626->mX.mX[336UL];
    out->mOBS_ACT.mX[3271UL] = zc_int121;
    out->mOBS_ACT.mX[3272UL] = zc_int410 - BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3273UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3274UL] = t3626->mX.mX[344UL];
    out->mOBS_ACT.mX[3275UL] = t3626->mX.mX[344UL];
    out->mOBS_ACT.mX[3276UL] = t3626->mX.mX[344UL];
    out->mOBS_ACT.mX[3277UL] = t3626->mX.mX[344UL];
    out->mOBS_ACT.mX[3278UL] = t3626->mX.mX[345UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[3279UL] = t3626->mX.mX[344UL];
    out->mOBS_ACT.mX[3280UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3281UL] = intrm_sf_mf_103;
    out->mOBS_ACT.mX[3282UL] = t3626->mX.mX[346UL];
    out->mOBS_ACT.mX[3283UL] = t3626->mX.mX[346UL];
    out->mOBS_ACT.mX[3284UL] = t3626->mX.mX[1279UL];
    out->mOBS_ACT.mX[3285UL] = 1.0;
    out->mOBS_ACT.mX[3286UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    for (t2773 = 347UL; t2773 - 347UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 2940UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3292UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[3297UL] = 0.0;
    out->mOBS_ACT.mX[3298UL] = t3626->mX.mX[1278UL];
    out->mOBS_ACT.mX[3299UL] = t3626->mX.mX[1280UL] * 1000.0;
    out->mOBS_ACT.mX[3300UL] = t3626->mX.mX[1279UL];
    out->mOBS_ACT.mX[3301UL] = zc_int128;
    out->mOBS_ACT.mX[3302UL] = 1.0;
    out->mOBS_ACT.mX[3303UL] = t3626->mX.mX[1277UL];
    out->mOBS_ACT.mX[3304UL] = 1.0;
    out->mOBS_ACT.mX[3305UL] = t3626->mX.mX[344UL];
    out->mOBS_ACT.mX[3306UL] = t3626->mX.mX[346UL];
    out->mOBS_ACT.mX[3307UL] = 1.0;
    out->mOBS_ACT.mX[3308UL] = t3626->mX.mX[1277UL];
    out->mOBS_ACT.mX[3309UL] = t3626->mX.mX[1278UL];
    out->mOBS_ACT.mX[3310UL] = 1.0;
    out->mOBS_ACT.mX[3311UL] = 1.0;
    out->mOBS_ACT.mX[3312UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3313UL] = intrm_sf_mf_103;
    out->mOBS_ACT.mX[3314UL] = t3626->mX.mX[346UL];
    out->mOBS_ACT.mX[3315UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3316UL] = t3626->mX.mX[1279UL];
    out->mOBS_ACT.mX[3317UL] = t3626->mX.mX[1279UL];
    out->mOBS_ACT.mX[3318UL] = t3626->mX.mX[344UL];
    out->mOBS_ACT.mX[3319UL] = BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[3320UL] = t3626->mX.mX[344UL];
    out->mOBS_ACT.mX[3321UL] = t3626->mX.mX[344UL];
    out->mOBS_ACT.mX[3322UL] = t3626->mX.mX[1280UL] * 1000.0;
    out->mOBS_ACT.mX[3323UL] = zc_int128;
    out->mOBS_ACT.mX[3324UL] = t3626->mX.mX[344UL];
    out->mOBS_ACT.mX[3325UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3326UL] = BatteryPack_v2_ModuleAssembly3_Module22_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[3327UL] = BatteryPack_v2_ModuleAssembly3_Module22_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[3328UL] = intrm_sf_mf_103;
    out->mOBS_ACT.mX[3329UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3330UL] = 0.0;
    out->mOBS_ACT.mX[3331UL] = intrm_sf_mf_103;
    out->mOBS_ACT.mX[3332UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3333UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3334UL] = 0.0;
    out->mOBS_ACT.mX[3335UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3336UL] = t3626->mX.mX[344UL];
    out->mOBS_ACT.mX[3337UL] = BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[3338UL] = 0.0;
    out->mOBS_ACT.mX[3339UL] = t3626->mX.mX[344UL];
    out->mOBS_ACT.mX[3340UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3341UL] = intrm_sf_mf_103;
    out->mOBS_ACT.mX[3342UL] = t3626->mX.mX[346UL];
    out->mOBS_ACT.mX[3343UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3344UL] = t3626->mX.mX[1279UL];
    out->mOBS_ACT.mX[3345UL] = t3626->mX.mX[1279UL];
    out->mOBS_ACT.mX[3346UL] = t3626->mX.mX[344UL];
    out->mOBS_ACT.mX[3347UL] = zc_int128;
    out->mOBS_ACT.mX[3348UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3 - intrm_sf_mf_103;
    out->mOBS_ACT.mX[3349UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3350UL] = t3626->mX.mX[352UL];
    out->mOBS_ACT.mX[3351UL] = t3626->mX.mX[352UL];
    out->mOBS_ACT.mX[3352UL] = t3626->mX.mX[352UL];
    out->mOBS_ACT.mX[3353UL] = t3626->mX.mX[352UL];
    out->mOBS_ACT.mX[3354UL] = t3626->mX.mX[353UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[3355UL] = t3626->mX.mX[352UL];
    out->mOBS_ACT.mX[3356UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3357UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3358UL] = t3626->mX.mX[354UL];
    out->mOBS_ACT.mX[3359UL] = t3626->mX.mX[354UL];
    out->mOBS_ACT.mX[3360UL] = t3626->mX.mX[1283UL];
    out->mOBS_ACT.mX[3361UL] = 1.0;
    out->mOBS_ACT.mX[3362UL] = intrm_sf_mf_103;
    for (t2773 = 355UL; t2773 - 355UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3008UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3368UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[3373UL] = 0.0;
    out->mOBS_ACT.mX[3374UL] = t3626->mX.mX[1282UL];
    out->mOBS_ACT.mX[3375UL] = t3626->mX.mX[1284UL] * 1000.0;
    out->mOBS_ACT.mX[3376UL] = t3626->mX.mX[1283UL];
    out->mOBS_ACT.mX[3377UL] = intrm_sf_mf_5;
    out->mOBS_ACT.mX[3378UL] = 1.0;
    out->mOBS_ACT.mX[3379UL] = t3626->mX.mX[1281UL];
    out->mOBS_ACT.mX[3380UL] = 1.0;
    out->mOBS_ACT.mX[3381UL] = t3626->mX.mX[352UL];
    out->mOBS_ACT.mX[3382UL] = t3626->mX.mX[354UL];
    out->mOBS_ACT.mX[3383UL] = 1.0;
    out->mOBS_ACT.mX[3384UL] = t3626->mX.mX[1281UL];
    out->mOBS_ACT.mX[3385UL] = t3626->mX.mX[1282UL];
    out->mOBS_ACT.mX[3386UL] = 1.0;
    out->mOBS_ACT.mX[3387UL] = 1.0;
    out->mOBS_ACT.mX[3388UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3389UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3390UL] = t3626->mX.mX[354UL];
    out->mOBS_ACT.mX[3391UL] = intrm_sf_mf_103;
    out->mOBS_ACT.mX[3392UL] = t3626->mX.mX[1283UL];
    out->mOBS_ACT.mX[3393UL] = t3626->mX.mX[1283UL];
    out->mOBS_ACT.mX[3394UL] = t3626->mX.mX[352UL];
    out->mOBS_ACT.mX[3395UL] = BatteryPack_v2_ModuleAssembly3_Module23_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[3396UL] = t3626->mX.mX[352UL];
    out->mOBS_ACT.mX[3397UL] = t3626->mX.mX[352UL];
    out->mOBS_ACT.mX[3398UL] = t3626->mX.mX[1284UL] * 1000.0;
    out->mOBS_ACT.mX[3399UL] = intrm_sf_mf_5;
    out->mOBS_ACT.mX[3400UL] = t3626->mX.mX[352UL];
    out->mOBS_ACT.mX[3401UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3402UL] = BatteryPack_v2_ModuleAssembly3_Module23_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[3403UL] = BatteryPack_v2_ModuleAssembly3_Module23_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[3404UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3405UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3406UL] = 0.0;
    out->mOBS_ACT.mX[3407UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3408UL] = intrm_sf_mf_103;
    out->mOBS_ACT.mX[3409UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3410UL] = 0.0;
    out->mOBS_ACT.mX[3411UL] = intrm_sf_mf_103;
    out->mOBS_ACT.mX[3412UL] = t3626->mX.mX[352UL];
    out->mOBS_ACT.mX[3413UL] = BatteryPack_v2_ModuleAssembly3_Module23_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[3414UL] = 0.0;
    out->mOBS_ACT.mX[3415UL] = t3626->mX.mX[352UL];
    out->mOBS_ACT.mX[3416UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3417UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3418UL] = t3626->mX.mX[354UL];
    out->mOBS_ACT.mX[3419UL] = intrm_sf_mf_103;
    out->mOBS_ACT.mX[3420UL] = t3626->mX.mX[1283UL];
    out->mOBS_ACT.mX[3421UL] = t3626->mX.mX[1283UL];
    out->mOBS_ACT.mX[3422UL] = t3626->mX.mX[352UL];
    out->mOBS_ACT.mX[3423UL] = intrm_sf_mf_5;
    out->mOBS_ACT.mX[3424UL] = intrm_sf_mf_103 - BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3425UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3426UL] = t3626->mX.mX[360UL];
    out->mOBS_ACT.mX[3427UL] = t3626->mX.mX[360UL];
    out->mOBS_ACT.mX[3428UL] = t3626->mX.mX[360UL];
    out->mOBS_ACT.mX[3429UL] = t3626->mX.mX[360UL];
    out->mOBS_ACT.mX[3430UL] = t3626->mX.mX[361UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[3431UL] = t3626->mX.mX[360UL];
    out->mOBS_ACT.mX[3432UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3433UL] = zc_int429;
    out->mOBS_ACT.mX[3434UL] = t3626->mX.mX[362UL];
    out->mOBS_ACT.mX[3435UL] = t3626->mX.mX[362UL];
    out->mOBS_ACT.mX[3436UL] = t3626->mX.mX[1287UL];
    out->mOBS_ACT.mX[3437UL] = 1.0;
    out->mOBS_ACT.mX[3438UL] = zc_int64;
    for (t2773 = 363UL; t2773 - 363UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3076UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3444UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[3449UL] = 0.0;
    out->mOBS_ACT.mX[3450UL] = t3626->mX.mX[1286UL];
    out->mOBS_ACT.mX[3451UL] = t3626->mX.mX[1288UL] * 1000.0;
    out->mOBS_ACT.mX[3452UL] = t3626->mX.mX[1287UL];
    out->mOBS_ACT.mX[3453UL] = zc_int63;
    out->mOBS_ACT.mX[3454UL] = 1.0;
    out->mOBS_ACT.mX[3455UL] = t3626->mX.mX[1285UL];
    out->mOBS_ACT.mX[3456UL] = 1.0;
    out->mOBS_ACT.mX[3457UL] = t3626->mX.mX[360UL];
    out->mOBS_ACT.mX[3458UL] = t3626->mX.mX[362UL];
    out->mOBS_ACT.mX[3459UL] = 1.0;
    out->mOBS_ACT.mX[3460UL] = t3626->mX.mX[1285UL];
    out->mOBS_ACT.mX[3461UL] = t3626->mX.mX[1286UL];
    out->mOBS_ACT.mX[3462UL] = 1.0;
    out->mOBS_ACT.mX[3463UL] = 1.0;
    out->mOBS_ACT.mX[3464UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3465UL] = zc_int429;
    out->mOBS_ACT.mX[3466UL] = t3626->mX.mX[362UL];
    out->mOBS_ACT.mX[3467UL] = zc_int64;
    out->mOBS_ACT.mX[3468UL] = t3626->mX.mX[1287UL];
    out->mOBS_ACT.mX[3469UL] = t3626->mX.mX[1287UL];
    out->mOBS_ACT.mX[3470UL] = t3626->mX.mX[360UL];
    out->mOBS_ACT.mX[3471UL] = BatteryPack_v2_ModuleAssembly3_Module_1_1_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[3472UL] = t3626->mX.mX[360UL];
    out->mOBS_ACT.mX[3473UL] = t3626->mX.mX[360UL];
    out->mOBS_ACT.mX[3474UL] = t3626->mX.mX[1288UL] * 1000.0;
    out->mOBS_ACT.mX[3475UL] = zc_int63;
    out->mOBS_ACT.mX[3476UL] = t3626->mX.mX[360UL];
    out->mOBS_ACT.mX[3477UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3478UL] = BatteryPack_v2_ModuleAssembly3_Module_1_1_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[3479UL] = BatteryPack_v2_ModuleAssembly3_Module_1_1_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[3480UL] = zc_int429;
    out->mOBS_ACT.mX[3481UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3482UL] = 0.0;
    out->mOBS_ACT.mX[3483UL] = zc_int429;
    out->mOBS_ACT.mX[3484UL] = zc_int64;
    out->mOBS_ACT.mX[3485UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3486UL] = 0.0;
    out->mOBS_ACT.mX[3487UL] = zc_int64;
    out->mOBS_ACT.mX[3488UL] = t3626->mX.mX[360UL];
    out->mOBS_ACT.mX[3489UL] = BatteryPack_v2_ModuleAssembly3_Module_1_1_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[3490UL] = 0.0;
    out->mOBS_ACT.mX[3491UL] = t3626->mX.mX[360UL];
    out->mOBS_ACT.mX[3492UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3493UL] = zc_int429;
    out->mOBS_ACT.mX[3494UL] = t3626->mX.mX[362UL];
    out->mOBS_ACT.mX[3495UL] = zc_int64;
    out->mOBS_ACT.mX[3496UL] = t3626->mX.mX[1287UL];
    out->mOBS_ACT.mX[3497UL] = t3626->mX.mX[1287UL];
    out->mOBS_ACT.mX[3498UL] = t3626->mX.mX[360UL];
    out->mOBS_ACT.mX[3499UL] = zc_int63;
    out->mOBS_ACT.mX[3500UL] = zc_int64 - zc_int429;
    out->mOBS_ACT.mX[3501UL] = zc_int64;
    out->mOBS_ACT.mX[3502UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3503UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3504UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3505UL] = t3626->mX.mX[368UL];
    out->mOBS_ACT.mX[3506UL] = t3626->mX.mX[368UL];
    out->mOBS_ACT.mX[3507UL] = t3626->mX.mX[368UL];
    out->mOBS_ACT.mX[3508UL] = t3626->mX.mX[368UL];
    out->mOBS_ACT.mX[3509UL] = t3626->mX.mX[369UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[3510UL] = t3626->mX.mX[368UL];
    out->mOBS_ACT.mX[3511UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3512UL] = zc_int405;
    out->mOBS_ACT.mX[3513UL] = t3626->mX.mX[370UL];
    out->mOBS_ACT.mX[3514UL] = t3626->mX.mX[370UL];
    out->mOBS_ACT.mX[3515UL] = t3626->mX.mX[1291UL];
    out->mOBS_ACT.mX[3516UL] = 1.0;
    out->mOBS_ACT.mX[3517UL] = intrm_sf_mf_102;
    for (t2773 = 371UL; t2773 - 371UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3147UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3523UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[3528UL] = 0.0;
    out->mOBS_ACT.mX[3529UL] = t3626->mX.mX[1290UL];
    out->mOBS_ACT.mX[3530UL] = t3626->mX.mX[1292UL] * 1000.0;
    out->mOBS_ACT.mX[3531UL] = t3626->mX.mX[1291UL];
    out->mOBS_ACT.mX[3532UL] = zc_int133;
    out->mOBS_ACT.mX[3533UL] = 1.0;
    out->mOBS_ACT.mX[3534UL] = t3626->mX.mX[1289UL];
    out->mOBS_ACT.mX[3535UL] = 1.0;
    out->mOBS_ACT.mX[3536UL] = t3626->mX.mX[368UL];
    out->mOBS_ACT.mX[3537UL] = t3626->mX.mX[370UL];
    out->mOBS_ACT.mX[3538UL] = 1.0;
    out->mOBS_ACT.mX[3539UL] = t3626->mX.mX[1289UL];
    out->mOBS_ACT.mX[3540UL] = t3626->mX.mX[1290UL];
    out->mOBS_ACT.mX[3541UL] = 1.0;
    out->mOBS_ACT.mX[3542UL] = 1.0;
    out->mOBS_ACT.mX[3543UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3544UL] = zc_int405;
    out->mOBS_ACT.mX[3545UL] = t3626->mX.mX[370UL];
    out->mOBS_ACT.mX[3546UL] = intrm_sf_mf_102;
    out->mOBS_ACT.mX[3547UL] = t3626->mX.mX[1291UL];
    out->mOBS_ACT.mX[3548UL] = t3626->mX.mX[1291UL];
    out->mOBS_ACT.mX[3549UL] = t3626->mX.mX[368UL];
    out->mOBS_ACT.mX[3550UL] = BatteryPack_v2_ModuleAssembly4_Module02_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[3551UL] = t3626->mX.mX[368UL];
    out->mOBS_ACT.mX[3552UL] = t3626->mX.mX[368UL];
    out->mOBS_ACT.mX[3553UL] = t3626->mX.mX[1292UL] * 1000.0;
    out->mOBS_ACT.mX[3554UL] = zc_int133;
    out->mOBS_ACT.mX[3555UL] = t3626->mX.mX[368UL];
    out->mOBS_ACT.mX[3556UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3557UL] = BatteryPack_v2_ModuleAssembly4_Module02_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[3558UL] = BatteryPack_v2_ModuleAssembly4_Module02_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[3559UL] = zc_int405;
    out->mOBS_ACT.mX[3560UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3561UL] = 0.0;
    out->mOBS_ACT.mX[3562UL] = zc_int405;
    out->mOBS_ACT.mX[3563UL] = intrm_sf_mf_102;
    out->mOBS_ACT.mX[3564UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3565UL] = 0.0;
    out->mOBS_ACT.mX[3566UL] = intrm_sf_mf_102;
    out->mOBS_ACT.mX[3567UL] = t3626->mX.mX[368UL];
    out->mOBS_ACT.mX[3568UL] = BatteryPack_v2_ModuleAssembly4_Module02_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[3569UL] = 0.0;
    out->mOBS_ACT.mX[3570UL] = t3626->mX.mX[368UL];
    out->mOBS_ACT.mX[3571UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3572UL] = zc_int405;
    out->mOBS_ACT.mX[3573UL] = t3626->mX.mX[370UL];
    out->mOBS_ACT.mX[3574UL] = intrm_sf_mf_102;
    out->mOBS_ACT.mX[3575UL] = t3626->mX.mX[1291UL];
    out->mOBS_ACT.mX[3576UL] = t3626->mX.mX[1291UL];
    out->mOBS_ACT.mX[3577UL] = t3626->mX.mX[368UL];
    out->mOBS_ACT.mX[3578UL] = zc_int133;
    out->mOBS_ACT.mX[3579UL] = intrm_sf_mf_102 - zc_int405;
    out->mOBS_ACT.mX[3580UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3581UL] = t3626->mX.mX[376UL];
    out->mOBS_ACT.mX[3582UL] = t3626->mX.mX[376UL];
    out->mOBS_ACT.mX[3583UL] = t3626->mX.mX[376UL];
    out->mOBS_ACT.mX[3584UL] = t3626->mX.mX[376UL];
    out->mOBS_ACT.mX[3585UL] = t3626->mX.mX[377UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[3586UL] = t3626->mX.mX[376UL];
    out->mOBS_ACT.mX[3587UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3588UL] = zc_int404;
    out->mOBS_ACT.mX[3589UL] = t3626->mX.mX[378UL];
    out->mOBS_ACT.mX[3590UL] = t3626->mX.mX[378UL];
    out->mOBS_ACT.mX[3591UL] = t3626->mX.mX[1295UL];
    out->mOBS_ACT.mX[3592UL] = 1.0;
    out->mOBS_ACT.mX[3593UL] = zc_int405;
    for (t2773 = 379UL; t2773 - 379UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3215UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3599UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[3604UL] = 0.0;
    out->mOBS_ACT.mX[3605UL] = t3626->mX.mX[1294UL];
    out->mOBS_ACT.mX[3606UL] = t3626->mX.mX[1296UL] * 1000.0;
    out->mOBS_ACT.mX[3607UL] = t3626->mX.mX[1295UL];
    out->mOBS_ACT.mX[3608UL] = zc_int13;
    out->mOBS_ACT.mX[3609UL] = 1.0;
    out->mOBS_ACT.mX[3610UL] = t3626->mX.mX[1293UL];
    out->mOBS_ACT.mX[3611UL] = 1.0;
    out->mOBS_ACT.mX[3612UL] = t3626->mX.mX[376UL];
    out->mOBS_ACT.mX[3613UL] = t3626->mX.mX[378UL];
    out->mOBS_ACT.mX[3614UL] = 1.0;
    out->mOBS_ACT.mX[3615UL] = t3626->mX.mX[1293UL];
    out->mOBS_ACT.mX[3616UL] = t3626->mX.mX[1294UL];
    out->mOBS_ACT.mX[3617UL] = 1.0;
    out->mOBS_ACT.mX[3618UL] = 1.0;
    out->mOBS_ACT.mX[3619UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3620UL] = zc_int404;
    out->mOBS_ACT.mX[3621UL] = t3626->mX.mX[378UL];
    out->mOBS_ACT.mX[3622UL] = zc_int405;
    out->mOBS_ACT.mX[3623UL] = t3626->mX.mX[1295UL];
    out->mOBS_ACT.mX[3624UL] = t3626->mX.mX[1295UL];
    out->mOBS_ACT.mX[3625UL] = t3626->mX.mX[376UL];
    out->mOBS_ACT.mX[3626UL] = BatteryPack_v2_ModuleAssembly4_Module03_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[3627UL] = t3626->mX.mX[376UL];
    out->mOBS_ACT.mX[3628UL] = t3626->mX.mX[376UL];
    out->mOBS_ACT.mX[3629UL] = t3626->mX.mX[1296UL] * 1000.0;
    out->mOBS_ACT.mX[3630UL] = zc_int13;
    out->mOBS_ACT.mX[3631UL] = t3626->mX.mX[376UL];
    out->mOBS_ACT.mX[3632UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3633UL] = BatteryPack_v2_ModuleAssembly4_Module03_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[3634UL] = BatteryPack_v2_ModuleAssembly4_Module03_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[3635UL] = zc_int404;
    out->mOBS_ACT.mX[3636UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3637UL] = 0.0;
    out->mOBS_ACT.mX[3638UL] = zc_int404;
    out->mOBS_ACT.mX[3639UL] = zc_int405;
    out->mOBS_ACT.mX[3640UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3641UL] = 0.0;
    out->mOBS_ACT.mX[3642UL] = zc_int405;
    out->mOBS_ACT.mX[3643UL] = t3626->mX.mX[376UL];
    out->mOBS_ACT.mX[3644UL] = BatteryPack_v2_ModuleAssembly4_Module03_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[3645UL] = 0.0;
    out->mOBS_ACT.mX[3646UL] = t3626->mX.mX[376UL];
    out->mOBS_ACT.mX[3647UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3648UL] = zc_int404;
    out->mOBS_ACT.mX[3649UL] = t3626->mX.mX[378UL];
    out->mOBS_ACT.mX[3650UL] = zc_int405;
    out->mOBS_ACT.mX[3651UL] = t3626->mX.mX[1295UL];
    out->mOBS_ACT.mX[3652UL] = t3626->mX.mX[1295UL];
    out->mOBS_ACT.mX[3653UL] = t3626->mX.mX[376UL];
    out->mOBS_ACT.mX[3654UL] = zc_int13;
    out->mOBS_ACT.mX[3655UL] = zc_int405 - zc_int404;
    out->mOBS_ACT.mX[3656UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3657UL] = t3626->mX.mX[384UL];
    out->mOBS_ACT.mX[3658UL] = t3626->mX.mX[384UL];
    out->mOBS_ACT.mX[3659UL] = t3626->mX.mX[384UL];
    out->mOBS_ACT.mX[3660UL] = t3626->mX.mX[384UL];
    out->mOBS_ACT.mX[3661UL] = t3626->mX.mX[385UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[3662UL] = t3626->mX.mX[384UL];
    out->mOBS_ACT.mX[3663UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3664UL] = zc_int403;
    out->mOBS_ACT.mX[3665UL] = t3626->mX.mX[386UL];
    out->mOBS_ACT.mX[3666UL] = t3626->mX.mX[386UL];
    out->mOBS_ACT.mX[3667UL] = t3626->mX.mX[1299UL];
    out->mOBS_ACT.mX[3668UL] = 1.0;
    out->mOBS_ACT.mX[3669UL] = zc_int404;
    for (t2773 = 387UL; t2773 - 387UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3283UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3675UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[3680UL] = 0.0;
    out->mOBS_ACT.mX[3681UL] = t3626->mX.mX[1298UL];
    out->mOBS_ACT.mX[3682UL] = t3626->mX.mX[1300UL] * 1000.0;
    out->mOBS_ACT.mX[3683UL] = t3626->mX.mX[1299UL];
    out->mOBS_ACT.mX[3684UL] = intrm_sf_mf_39;
    out->mOBS_ACT.mX[3685UL] = 1.0;
    out->mOBS_ACT.mX[3686UL] = t3626->mX.mX[1297UL];
    out->mOBS_ACT.mX[3687UL] = 1.0;
    out->mOBS_ACT.mX[3688UL] = t3626->mX.mX[384UL];
    out->mOBS_ACT.mX[3689UL] = t3626->mX.mX[386UL];
    out->mOBS_ACT.mX[3690UL] = 1.0;
    out->mOBS_ACT.mX[3691UL] = t3626->mX.mX[1297UL];
    out->mOBS_ACT.mX[3692UL] = t3626->mX.mX[1298UL];
    out->mOBS_ACT.mX[3693UL] = 1.0;
    out->mOBS_ACT.mX[3694UL] = 1.0;
    out->mOBS_ACT.mX[3695UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3696UL] = zc_int403;
    out->mOBS_ACT.mX[3697UL] = t3626->mX.mX[386UL];
    out->mOBS_ACT.mX[3698UL] = zc_int404;
    out->mOBS_ACT.mX[3699UL] = t3626->mX.mX[1299UL];
    out->mOBS_ACT.mX[3700UL] = t3626->mX.mX[1299UL];
    out->mOBS_ACT.mX[3701UL] = t3626->mX.mX[384UL];
    out->mOBS_ACT.mX[3702UL] = BatteryPack_v2_ModuleAssembly4_Module04_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[3703UL] = t3626->mX.mX[384UL];
    out->mOBS_ACT.mX[3704UL] = t3626->mX.mX[384UL];
    out->mOBS_ACT.mX[3705UL] = t3626->mX.mX[1300UL] * 1000.0;
    out->mOBS_ACT.mX[3706UL] = intrm_sf_mf_39;
    out->mOBS_ACT.mX[3707UL] = t3626->mX.mX[384UL];
    out->mOBS_ACT.mX[3708UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3709UL] = BatteryPack_v2_ModuleAssembly4_Module04_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[3710UL] = BatteryPack_v2_ModuleAssembly4_Module04_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[3711UL] = zc_int403;
    out->mOBS_ACT.mX[3712UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3713UL] = 0.0;
    out->mOBS_ACT.mX[3714UL] = zc_int403;
    out->mOBS_ACT.mX[3715UL] = zc_int404;
    out->mOBS_ACT.mX[3716UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3717UL] = 0.0;
    out->mOBS_ACT.mX[3718UL] = zc_int404;
    out->mOBS_ACT.mX[3719UL] = t3626->mX.mX[384UL];
    out->mOBS_ACT.mX[3720UL] = BatteryPack_v2_ModuleAssembly4_Module04_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[3721UL] = 0.0;
    out->mOBS_ACT.mX[3722UL] = t3626->mX.mX[384UL];
    out->mOBS_ACT.mX[3723UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3724UL] = zc_int403;
    out->mOBS_ACT.mX[3725UL] = t3626->mX.mX[386UL];
    out->mOBS_ACT.mX[3726UL] = zc_int404;
    out->mOBS_ACT.mX[3727UL] = t3626->mX.mX[1299UL];
    out->mOBS_ACT.mX[3728UL] = t3626->mX.mX[1299UL];
    out->mOBS_ACT.mX[3729UL] = t3626->mX.mX[384UL];
    out->mOBS_ACT.mX[3730UL] = intrm_sf_mf_39;
    out->mOBS_ACT.mX[3731UL] = zc_int404 - zc_int403;
    out->mOBS_ACT.mX[3732UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3733UL] = t3626->mX.mX[392UL];
    out->mOBS_ACT.mX[3734UL] = t3626->mX.mX[392UL];
    out->mOBS_ACT.mX[3735UL] = t3626->mX.mX[392UL];
    out->mOBS_ACT.mX[3736UL] = t3626->mX.mX[392UL];
    out->mOBS_ACT.mX[3737UL] = t3626->mX.mX[393UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[3738UL] = t3626->mX.mX[392UL];
    out->mOBS_ACT.mX[3739UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3740UL] = intrm_sf_mf_100;
    out->mOBS_ACT.mX[3741UL] = t3626->mX.mX[394UL];
    out->mOBS_ACT.mX[3742UL] = t3626->mX.mX[394UL];
    out->mOBS_ACT.mX[3743UL] = t3626->mX.mX[1303UL];
    out->mOBS_ACT.mX[3744UL] = 1.0;
    out->mOBS_ACT.mX[3745UL] = zc_int403;
    for (t2773 = 395UL; t2773 - 395UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3351UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3751UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[3756UL] = 0.0;
    out->mOBS_ACT.mX[3757UL] = t3626->mX.mX[1302UL];
    out->mOBS_ACT.mX[3758UL] = t3626->mX.mX[1304UL] * 1000.0;
    out->mOBS_ACT.mX[3759UL] = t3626->mX.mX[1303UL];
    out->mOBS_ACT.mX[3760UL] = zc_int146;
    out->mOBS_ACT.mX[3761UL] = 1.0;
    out->mOBS_ACT.mX[3762UL] = t3626->mX.mX[1301UL];
    out->mOBS_ACT.mX[3763UL] = 1.0;
    out->mOBS_ACT.mX[3764UL] = t3626->mX.mX[392UL];
    out->mOBS_ACT.mX[3765UL] = t3626->mX.mX[394UL];
    out->mOBS_ACT.mX[3766UL] = 1.0;
    out->mOBS_ACT.mX[3767UL] = t3626->mX.mX[1301UL];
    out->mOBS_ACT.mX[3768UL] = t3626->mX.mX[1302UL];
    out->mOBS_ACT.mX[3769UL] = 1.0;
    out->mOBS_ACT.mX[3770UL] = 1.0;
    out->mOBS_ACT.mX[3771UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3772UL] = intrm_sf_mf_100;
    out->mOBS_ACT.mX[3773UL] = t3626->mX.mX[394UL];
    out->mOBS_ACT.mX[3774UL] = zc_int403;
    out->mOBS_ACT.mX[3775UL] = t3626->mX.mX[1303UL];
    out->mOBS_ACT.mX[3776UL] = t3626->mX.mX[1303UL];
    out->mOBS_ACT.mX[3777UL] = t3626->mX.mX[392UL];
    out->mOBS_ACT.mX[3778UL] = BatteryPack_v2_ModuleAssembly4_Module05_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[3779UL] = t3626->mX.mX[392UL];
    out->mOBS_ACT.mX[3780UL] = t3626->mX.mX[392UL];
    out->mOBS_ACT.mX[3781UL] = t3626->mX.mX[1304UL] * 1000.0;
    out->mOBS_ACT.mX[3782UL] = zc_int146;
    out->mOBS_ACT.mX[3783UL] = t3626->mX.mX[392UL];
    out->mOBS_ACT.mX[3784UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3785UL] = BatteryPack_v2_ModuleAssembly4_Module05_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[3786UL] = BatteryPack_v2_ModuleAssembly4_Module05_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[3787UL] = intrm_sf_mf_100;
    out->mOBS_ACT.mX[3788UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3789UL] = 0.0;
    out->mOBS_ACT.mX[3790UL] = intrm_sf_mf_100;
    out->mOBS_ACT.mX[3791UL] = zc_int403;
    out->mOBS_ACT.mX[3792UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3793UL] = 0.0;
    out->mOBS_ACT.mX[3794UL] = zc_int403;
    out->mOBS_ACT.mX[3795UL] = t3626->mX.mX[392UL];
    out->mOBS_ACT.mX[3796UL] = BatteryPack_v2_ModuleAssembly4_Module05_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[3797UL] = 0.0;
    out->mOBS_ACT.mX[3798UL] = t3626->mX.mX[392UL];
    out->mOBS_ACT.mX[3799UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3800UL] = intrm_sf_mf_100;
    out->mOBS_ACT.mX[3801UL] = t3626->mX.mX[394UL];
    out->mOBS_ACT.mX[3802UL] = zc_int403;
    out->mOBS_ACT.mX[3803UL] = t3626->mX.mX[1303UL];
    out->mOBS_ACT.mX[3804UL] = t3626->mX.mX[1303UL];
    out->mOBS_ACT.mX[3805UL] = t3626->mX.mX[392UL];
    out->mOBS_ACT.mX[3806UL] = zc_int146;
    out->mOBS_ACT.mX[3807UL] = zc_int403 - intrm_sf_mf_100;
    out->mOBS_ACT.mX[3808UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3809UL] = t3626->mX.mX[400UL];
    out->mOBS_ACT.mX[3810UL] = t3626->mX.mX[400UL];
    out->mOBS_ACT.mX[3811UL] = t3626->mX.mX[400UL];
    out->mOBS_ACT.mX[3812UL] = t3626->mX.mX[400UL];
    out->mOBS_ACT.mX[3813UL] = t3626->mX.mX[401UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[3814UL] = t3626->mX.mX[400UL];
    out->mOBS_ACT.mX[3815UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3816UL] = zc_int401;
    out->mOBS_ACT.mX[3817UL] = t3626->mX.mX[402UL];
    out->mOBS_ACT.mX[3818UL] = t3626->mX.mX[402UL];
    out->mOBS_ACT.mX[3819UL] = t3626->mX.mX[1307UL];
    out->mOBS_ACT.mX[3820UL] = 1.0;
    out->mOBS_ACT.mX[3821UL] = intrm_sf_mf_100;
    for (t2773 = 403UL; t2773 - 403UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3419UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3827UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[3832UL] = 0.0;
    out->mOBS_ACT.mX[3833UL] = t3626->mX.mX[1306UL];
    out->mOBS_ACT.mX[3834UL] = t3626->mX.mX[1308UL] * 1000.0;
    out->mOBS_ACT.mX[3835UL] = t3626->mX.mX[1307UL];
    out->mOBS_ACT.mX[3836UL] = zc_int147;
    out->mOBS_ACT.mX[3837UL] = 1.0;
    out->mOBS_ACT.mX[3838UL] = t3626->mX.mX[1305UL];
    out->mOBS_ACT.mX[3839UL] = 1.0;
    out->mOBS_ACT.mX[3840UL] = t3626->mX.mX[400UL];
    out->mOBS_ACT.mX[3841UL] = t3626->mX.mX[402UL];
    out->mOBS_ACT.mX[3842UL] = 1.0;
    out->mOBS_ACT.mX[3843UL] = t3626->mX.mX[1305UL];
    out->mOBS_ACT.mX[3844UL] = t3626->mX.mX[1306UL];
    out->mOBS_ACT.mX[3845UL] = 1.0;
    out->mOBS_ACT.mX[3846UL] = 1.0;
    out->mOBS_ACT.mX[3847UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3848UL] = zc_int401;
    out->mOBS_ACT.mX[3849UL] = t3626->mX.mX[402UL];
    out->mOBS_ACT.mX[3850UL] = intrm_sf_mf_100;
    out->mOBS_ACT.mX[3851UL] = t3626->mX.mX[1307UL];
    out->mOBS_ACT.mX[3852UL] = t3626->mX.mX[1307UL];
    out->mOBS_ACT.mX[3853UL] = t3626->mX.mX[400UL];
    out->mOBS_ACT.mX[3854UL] = BatteryPack_v2_ModuleAssembly4_Module06_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[3855UL] = t3626->mX.mX[400UL];
    out->mOBS_ACT.mX[3856UL] = t3626->mX.mX[400UL];
    out->mOBS_ACT.mX[3857UL] = t3626->mX.mX[1308UL] * 1000.0;
    out->mOBS_ACT.mX[3858UL] = zc_int147;
    out->mOBS_ACT.mX[3859UL] = t3626->mX.mX[400UL];
    out->mOBS_ACT.mX[3860UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3861UL] = BatteryPack_v2_ModuleAssembly4_Module06_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[3862UL] = BatteryPack_v2_ModuleAssembly4_Module06_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[3863UL] = zc_int401;
    out->mOBS_ACT.mX[3864UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3865UL] = 0.0;
    out->mOBS_ACT.mX[3866UL] = zc_int401;
    out->mOBS_ACT.mX[3867UL] = intrm_sf_mf_100;
    out->mOBS_ACT.mX[3868UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3869UL] = 0.0;
    out->mOBS_ACT.mX[3870UL] = intrm_sf_mf_100;
    out->mOBS_ACT.mX[3871UL] = t3626->mX.mX[400UL];
    out->mOBS_ACT.mX[3872UL] = BatteryPack_v2_ModuleAssembly4_Module06_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[3873UL] = 0.0;
    out->mOBS_ACT.mX[3874UL] = t3626->mX.mX[400UL];
    out->mOBS_ACT.mX[3875UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3876UL] = zc_int401;
    out->mOBS_ACT.mX[3877UL] = t3626->mX.mX[402UL];
    out->mOBS_ACT.mX[3878UL] = intrm_sf_mf_100;
    out->mOBS_ACT.mX[3879UL] = t3626->mX.mX[1307UL];
    out->mOBS_ACT.mX[3880UL] = t3626->mX.mX[1307UL];
    out->mOBS_ACT.mX[3881UL] = t3626->mX.mX[400UL];
    out->mOBS_ACT.mX[3882UL] = zc_int147;
    out->mOBS_ACT.mX[3883UL] = intrm_sf_mf_100 - zc_int401;
    out->mOBS_ACT.mX[3884UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3885UL] = t3626->mX.mX[408UL];
    out->mOBS_ACT.mX[3886UL] = t3626->mX.mX[408UL];
    out->mOBS_ACT.mX[3887UL] = t3626->mX.mX[408UL];
    out->mOBS_ACT.mX[3888UL] = t3626->mX.mX[408UL];
    out->mOBS_ACT.mX[3889UL] = t3626->mX.mX[409UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[3890UL] = t3626->mX.mX[408UL];
    out->mOBS_ACT.mX[3891UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3892UL] = intrm_sf_mf_14;
    out->mOBS_ACT.mX[3893UL] = t3626->mX.mX[410UL];
    out->mOBS_ACT.mX[3894UL] = t3626->mX.mX[410UL];
    out->mOBS_ACT.mX[3895UL] = t3626->mX.mX[1311UL];
    out->mOBS_ACT.mX[3896UL] = 1.0;
    out->mOBS_ACT.mX[3897UL] = zc_int401;
    for (t2773 = 411UL; t2773 - 411UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3487UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3903UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[3908UL] = 0.0;
    out->mOBS_ACT.mX[3909UL] = t3626->mX.mX[1310UL];
    out->mOBS_ACT.mX[3910UL] = t3626->mX.mX[1312UL] * 1000.0;
    out->mOBS_ACT.mX[3911UL] = t3626->mX.mX[1311UL];
    out->mOBS_ACT.mX[3912UL] = BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3913UL] = 1.0;
    out->mOBS_ACT.mX[3914UL] = t3626->mX.mX[1309UL];
    out->mOBS_ACT.mX[3915UL] = 1.0;
    out->mOBS_ACT.mX[3916UL] = t3626->mX.mX[408UL];
    out->mOBS_ACT.mX[3917UL] = t3626->mX.mX[410UL];
    out->mOBS_ACT.mX[3918UL] = 1.0;
    out->mOBS_ACT.mX[3919UL] = t3626->mX.mX[1309UL];
    out->mOBS_ACT.mX[3920UL] = t3626->mX.mX[1310UL];
    out->mOBS_ACT.mX[3921UL] = 1.0;
    out->mOBS_ACT.mX[3922UL] = 1.0;
    out->mOBS_ACT.mX[3923UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3924UL] = intrm_sf_mf_14;
    out->mOBS_ACT.mX[3925UL] = t3626->mX.mX[410UL];
    out->mOBS_ACT.mX[3926UL] = zc_int401;
    out->mOBS_ACT.mX[3927UL] = t3626->mX.mX[1311UL];
    out->mOBS_ACT.mX[3928UL] = t3626->mX.mX[1311UL];
    out->mOBS_ACT.mX[3929UL] = t3626->mX.mX[408UL];
    out->mOBS_ACT.mX[3930UL] = BatteryPack_v2_ModuleAssembly4_Module07_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[3931UL] = t3626->mX.mX[408UL];
    out->mOBS_ACT.mX[3932UL] = t3626->mX.mX[408UL];
    out->mOBS_ACT.mX[3933UL] = t3626->mX.mX[1312UL] * 1000.0;
    out->mOBS_ACT.mX[3934UL] = BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3935UL] = t3626->mX.mX[408UL];
    out->mOBS_ACT.mX[3936UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3937UL] = BatteryPack_v2_ModuleAssembly4_Module07_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[3938UL] = BatteryPack_v2_ModuleAssembly4_Module07_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[3939UL] = intrm_sf_mf_14;
    out->mOBS_ACT.mX[3940UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3941UL] = 0.0;
    out->mOBS_ACT.mX[3942UL] = intrm_sf_mf_14;
    out->mOBS_ACT.mX[3943UL] = zc_int401;
    out->mOBS_ACT.mX[3944UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3945UL] = 0.0;
    out->mOBS_ACT.mX[3946UL] = zc_int401;
    out->mOBS_ACT.mX[3947UL] = t3626->mX.mX[408UL];
    out->mOBS_ACT.mX[3948UL] = BatteryPack_v2_ModuleAssembly4_Module07_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[3949UL] = 0.0;
    out->mOBS_ACT.mX[3950UL] = t3626->mX.mX[408UL];
    out->mOBS_ACT.mX[3951UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3952UL] = intrm_sf_mf_14;
    out->mOBS_ACT.mX[3953UL] = t3626->mX.mX[410UL];
    out->mOBS_ACT.mX[3954UL] = zc_int401;
    out->mOBS_ACT.mX[3955UL] = t3626->mX.mX[1311UL];
    out->mOBS_ACT.mX[3956UL] = t3626->mX.mX[1311UL];
    out->mOBS_ACT.mX[3957UL] = t3626->mX.mX[408UL];
    out->mOBS_ACT.mX[3958UL] = BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3959UL] = zc_int401 - intrm_sf_mf_14;
    out->mOBS_ACT.mX[3960UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[3961UL] = t3626->mX.mX[416UL];
    out->mOBS_ACT.mX[3962UL] = t3626->mX.mX[416UL];
    out->mOBS_ACT.mX[3963UL] = t3626->mX.mX[416UL];
    out->mOBS_ACT.mX[3964UL] = t3626->mX.mX[416UL];
    out->mOBS_ACT.mX[3965UL] = t3626->mX.mX[417UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[3966UL] = t3626->mX.mX[416UL];
    out->mOBS_ACT.mX[3967UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[3968UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[3969UL] = t3626->mX.mX[418UL];
    out->mOBS_ACT.mX[3970UL] = t3626->mX.mX[418UL];
    out->mOBS_ACT.mX[3971UL] = t3626->mX.mX[1315UL];
    out->mOBS_ACT.mX[3972UL] = 1.0;
    out->mOBS_ACT.mX[3973UL] = intrm_sf_mf_14;
    for (t2773 = 419UL; t2773 - 419UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3555UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3979UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[3984UL] = 0.0;
    out->mOBS_ACT.mX[3985UL] = t3626->mX.mX[1314UL];
    out->mOBS_ACT.mX[3986UL] = t3626->mX.mX[1316UL] * 1000.0;
    out->mOBS_ACT.mX[3987UL] = t3626->mX.mX[1315UL];
    out->mOBS_ACT.mX[3988UL] = zc_int155;
    out->mOBS_ACT.mX[3989UL] = 1.0;
    out->mOBS_ACT.mX[3990UL] = t3626->mX.mX[1313UL];
    out->mOBS_ACT.mX[3991UL] = 1.0;
    out->mOBS_ACT.mX[3992UL] = t3626->mX.mX[416UL];
    out->mOBS_ACT.mX[3993UL] = t3626->mX.mX[418UL];
    out->mOBS_ACT.mX[3994UL] = 1.0;
    out->mOBS_ACT.mX[3995UL] = t3626->mX.mX[1313UL];
    out->mOBS_ACT.mX[3996UL] = t3626->mX.mX[1314UL];
    out->mOBS_ACT.mX[3997UL] = 1.0;
    out->mOBS_ACT.mX[3998UL] = 1.0;
    out->mOBS_ACT.mX[3999UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4000UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4001UL] = t3626->mX.mX[418UL];
    out->mOBS_ACT.mX[4002UL] = intrm_sf_mf_14;
    out->mOBS_ACT.mX[4003UL] = t3626->mX.mX[1315UL];
    out->mOBS_ACT.mX[4004UL] = t3626->mX.mX[1315UL];
    out->mOBS_ACT.mX[4005UL] = t3626->mX.mX[416UL];
    out->mOBS_ACT.mX[4006UL] = BatteryPack_v2_ModuleAssembly4_Module08_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[4007UL] = t3626->mX.mX[416UL];
    out->mOBS_ACT.mX[4008UL] = t3626->mX.mX[416UL];
    out->mOBS_ACT.mX[4009UL] = t3626->mX.mX[1316UL] * 1000.0;
    out->mOBS_ACT.mX[4010UL] = zc_int155;
    out->mOBS_ACT.mX[4011UL] = t3626->mX.mX[416UL];
    out->mOBS_ACT.mX[4012UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4013UL] = BatteryPack_v2_ModuleAssembly4_Module08_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[4014UL] = BatteryPack_v2_ModuleAssembly4_Module08_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[4015UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4016UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4017UL] = 0.0;
    out->mOBS_ACT.mX[4018UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4019UL] = intrm_sf_mf_14;
    out->mOBS_ACT.mX[4020UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4021UL] = 0.0;
    out->mOBS_ACT.mX[4022UL] = intrm_sf_mf_14;
    out->mOBS_ACT.mX[4023UL] = t3626->mX.mX[416UL];
    out->mOBS_ACT.mX[4024UL] = BatteryPack_v2_ModuleAssembly4_Module08_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[4025UL] = 0.0;
    out->mOBS_ACT.mX[4026UL] = t3626->mX.mX[416UL];
    out->mOBS_ACT.mX[4027UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4028UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4029UL] = t3626->mX.mX[418UL];
    out->mOBS_ACT.mX[4030UL] = intrm_sf_mf_14;
    out->mOBS_ACT.mX[4031UL] = t3626->mX.mX[1315UL];
    out->mOBS_ACT.mX[4032UL] = t3626->mX.mX[1315UL];
    out->mOBS_ACT.mX[4033UL] = t3626->mX.mX[416UL];
    out->mOBS_ACT.mX[4034UL] = zc_int155;
    out->mOBS_ACT.mX[4035UL] = intrm_sf_mf_14 - BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4036UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4037UL] = t3626->mX.mX[424UL];
    out->mOBS_ACT.mX[4038UL] = t3626->mX.mX[424UL];
    out->mOBS_ACT.mX[4039UL] = t3626->mX.mX[424UL];
    out->mOBS_ACT.mX[4040UL] = t3626->mX.mX[424UL];
    out->mOBS_ACT.mX[4041UL] = t3626->mX.mX[425UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[4042UL] = t3626->mX.mX[424UL];
    out->mOBS_ACT.mX[4043UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4044UL] = intrm_sf_mf_98;
    out->mOBS_ACT.mX[4045UL] = t3626->mX.mX[426UL];
    out->mOBS_ACT.mX[4046UL] = t3626->mX.mX[426UL];
    out->mOBS_ACT.mX[4047UL] = t3626->mX.mX[1319UL];
    out->mOBS_ACT.mX[4048UL] = 1.0;
    out->mOBS_ACT.mX[4049UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    for (t2773 = 427UL; t2773 - 427UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3623UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4055UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[4060UL] = 0.0;
    out->mOBS_ACT.mX[4061UL] = t3626->mX.mX[1318UL];
    out->mOBS_ACT.mX[4062UL] = t3626->mX.mX[1320UL] * 1000.0;
    out->mOBS_ACT.mX[4063UL] = t3626->mX.mX[1319UL];
    out->mOBS_ACT.mX[4064UL] = zc_int154;
    out->mOBS_ACT.mX[4065UL] = 1.0;
    out->mOBS_ACT.mX[4066UL] = t3626->mX.mX[1317UL];
    out->mOBS_ACT.mX[4067UL] = 1.0;
    out->mOBS_ACT.mX[4068UL] = t3626->mX.mX[424UL];
    out->mOBS_ACT.mX[4069UL] = t3626->mX.mX[426UL];
    out->mOBS_ACT.mX[4070UL] = 1.0;
    out->mOBS_ACT.mX[4071UL] = t3626->mX.mX[1317UL];
    out->mOBS_ACT.mX[4072UL] = t3626->mX.mX[1318UL];
    out->mOBS_ACT.mX[4073UL] = 1.0;
    out->mOBS_ACT.mX[4074UL] = 1.0;
    out->mOBS_ACT.mX[4075UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4076UL] = intrm_sf_mf_98;
    out->mOBS_ACT.mX[4077UL] = t3626->mX.mX[426UL];
    out->mOBS_ACT.mX[4078UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4079UL] = t3626->mX.mX[1319UL];
    out->mOBS_ACT.mX[4080UL] = t3626->mX.mX[1319UL];
    out->mOBS_ACT.mX[4081UL] = t3626->mX.mX[424UL];
    out->mOBS_ACT.mX[4082UL] = BatteryPack_v2_ModuleAssembly4_Module09_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[4083UL] = t3626->mX.mX[424UL];
    out->mOBS_ACT.mX[4084UL] = t3626->mX.mX[424UL];
    out->mOBS_ACT.mX[4085UL] = t3626->mX.mX[1320UL] * 1000.0;
    out->mOBS_ACT.mX[4086UL] = zc_int154;
    out->mOBS_ACT.mX[4087UL] = t3626->mX.mX[424UL];
    out->mOBS_ACT.mX[4088UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4089UL] = BatteryPack_v2_ModuleAssembly4_Module09_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[4090UL] = BatteryPack_v2_ModuleAssembly4_Module09_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[4091UL] = intrm_sf_mf_98;
    out->mOBS_ACT.mX[4092UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4093UL] = 0.0;
    out->mOBS_ACT.mX[4094UL] = intrm_sf_mf_98;
    out->mOBS_ACT.mX[4095UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4096UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4097UL] = 0.0;
    out->mOBS_ACT.mX[4098UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4099UL] = t3626->mX.mX[424UL];
    out->mOBS_ACT.mX[4100UL] = BatteryPack_v2_ModuleAssembly4_Module09_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[4101UL] = 0.0;
    out->mOBS_ACT.mX[4102UL] = t3626->mX.mX[424UL];
    out->mOBS_ACT.mX[4103UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4104UL] = intrm_sf_mf_98;
    out->mOBS_ACT.mX[4105UL] = t3626->mX.mX[426UL];
    out->mOBS_ACT.mX[4106UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4107UL] = t3626->mX.mX[1319UL];
    out->mOBS_ACT.mX[4108UL] = t3626->mX.mX[1319UL];
    out->mOBS_ACT.mX[4109UL] = t3626->mX.mX[424UL];
    out->mOBS_ACT.mX[4110UL] = zc_int154;
    out->mOBS_ACT.mX[4111UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3 - intrm_sf_mf_98;
    out->mOBS_ACT.mX[4112UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4113UL] = t3626->mX.mX[432UL];
    out->mOBS_ACT.mX[4114UL] = t3626->mX.mX[432UL];
    out->mOBS_ACT.mX[4115UL] = t3626->mX.mX[432UL];
    out->mOBS_ACT.mX[4116UL] = t3626->mX.mX[432UL];
    out->mOBS_ACT.mX[4117UL] = t3626->mX.mX[433UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[4118UL] = t3626->mX.mX[432UL];
    out->mOBS_ACT.mX[4119UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4120UL] = zc_int397;
    out->mOBS_ACT.mX[4121UL] = t3626->mX.mX[434UL];
    out->mOBS_ACT.mX[4122UL] = t3626->mX.mX[434UL];
    out->mOBS_ACT.mX[4123UL] = t3626->mX.mX[1323UL];
    out->mOBS_ACT.mX[4124UL] = 1.0;
    out->mOBS_ACT.mX[4125UL] = intrm_sf_mf_98;
    for (t2773 = 435UL; t2773 - 435UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3691UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4131UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[4136UL] = 0.0;
    out->mOBS_ACT.mX[4137UL] = t3626->mX.mX[1322UL];
    out->mOBS_ACT.mX[4138UL] = t3626->mX.mX[1324UL] * 1000.0;
    out->mOBS_ACT.mX[4139UL] = t3626->mX.mX[1323UL];
    out->mOBS_ACT.mX[4140UL] = zc_int161;
    out->mOBS_ACT.mX[4141UL] = 1.0;
    out->mOBS_ACT.mX[4142UL] = t3626->mX.mX[1321UL];
    out->mOBS_ACT.mX[4143UL] = 1.0;
    out->mOBS_ACT.mX[4144UL] = t3626->mX.mX[432UL];
    out->mOBS_ACT.mX[4145UL] = t3626->mX.mX[434UL];
    out->mOBS_ACT.mX[4146UL] = 1.0;
    out->mOBS_ACT.mX[4147UL] = t3626->mX.mX[1321UL];
    out->mOBS_ACT.mX[4148UL] = t3626->mX.mX[1322UL];
    out->mOBS_ACT.mX[4149UL] = 1.0;
    out->mOBS_ACT.mX[4150UL] = 1.0;
    out->mOBS_ACT.mX[4151UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4152UL] = zc_int397;
    out->mOBS_ACT.mX[4153UL] = t3626->mX.mX[434UL];
    out->mOBS_ACT.mX[4154UL] = intrm_sf_mf_98;
    out->mOBS_ACT.mX[4155UL] = t3626->mX.mX[1323UL];
    out->mOBS_ACT.mX[4156UL] = t3626->mX.mX[1323UL];
    out->mOBS_ACT.mX[4157UL] = t3626->mX.mX[432UL];
    out->mOBS_ACT.mX[4158UL] = BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[4159UL] = t3626->mX.mX[432UL];
    out->mOBS_ACT.mX[4160UL] = t3626->mX.mX[432UL];
    out->mOBS_ACT.mX[4161UL] = t3626->mX.mX[1324UL] * 1000.0;
    out->mOBS_ACT.mX[4162UL] = zc_int161;
    out->mOBS_ACT.mX[4163UL] = t3626->mX.mX[432UL];
    out->mOBS_ACT.mX[4164UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4165UL] = BatteryPack_v2_ModuleAssembly4_Module10_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[4166UL] = BatteryPack_v2_ModuleAssembly4_Module10_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[4167UL] = zc_int397;
    out->mOBS_ACT.mX[4168UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4169UL] = 0.0;
    out->mOBS_ACT.mX[4170UL] = zc_int397;
    out->mOBS_ACT.mX[4171UL] = intrm_sf_mf_98;
    out->mOBS_ACT.mX[4172UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4173UL] = 0.0;
    out->mOBS_ACT.mX[4174UL] = intrm_sf_mf_98;
    out->mOBS_ACT.mX[4175UL] = t3626->mX.mX[432UL];
    out->mOBS_ACT.mX[4176UL] = BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[4177UL] = 0.0;
    out->mOBS_ACT.mX[4178UL] = t3626->mX.mX[432UL];
    out->mOBS_ACT.mX[4179UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4180UL] = zc_int397;
    out->mOBS_ACT.mX[4181UL] = t3626->mX.mX[434UL];
    out->mOBS_ACT.mX[4182UL] = intrm_sf_mf_98;
    out->mOBS_ACT.mX[4183UL] = t3626->mX.mX[1323UL];
    out->mOBS_ACT.mX[4184UL] = t3626->mX.mX[1323UL];
    out->mOBS_ACT.mX[4185UL] = t3626->mX.mX[432UL];
    out->mOBS_ACT.mX[4186UL] = zc_int161;
    out->mOBS_ACT.mX[4187UL] = intrm_sf_mf_98 - zc_int397;
    out->mOBS_ACT.mX[4188UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4189UL] = t3626->mX.mX[440UL];
    out->mOBS_ACT.mX[4190UL] = t3626->mX.mX[440UL];
    out->mOBS_ACT.mX[4191UL] = t3626->mX.mX[440UL];
    out->mOBS_ACT.mX[4192UL] = t3626->mX.mX[440UL];
    out->mOBS_ACT.mX[4193UL] = t3626->mX.mX[441UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[4194UL] = t3626->mX.mX[440UL];
    out->mOBS_ACT.mX[4195UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4196UL] = zc_int396;
    out->mOBS_ACT.mX[4197UL] = t3626->mX.mX[442UL];
    out->mOBS_ACT.mX[4198UL] = t3626->mX.mX[442UL];
    out->mOBS_ACT.mX[4199UL] = t3626->mX.mX[1327UL];
    out->mOBS_ACT.mX[4200UL] = 1.0;
    out->mOBS_ACT.mX[4201UL] = zc_int397;
    for (t2773 = 443UL; t2773 - 443UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3759UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4207UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[4212UL] = 0.0;
    out->mOBS_ACT.mX[4213UL] = t3626->mX.mX[1326UL];
    out->mOBS_ACT.mX[4214UL] = t3626->mX.mX[1328UL] * 1000.0;
    out->mOBS_ACT.mX[4215UL] = t3626->mX.mX[1327UL];
    out->mOBS_ACT.mX[4216UL] = zc_int164;
    out->mOBS_ACT.mX[4217UL] = 1.0;
    out->mOBS_ACT.mX[4218UL] = t3626->mX.mX[1325UL];
    out->mOBS_ACT.mX[4219UL] = 1.0;
    out->mOBS_ACT.mX[4220UL] = t3626->mX.mX[440UL];
    out->mOBS_ACT.mX[4221UL] = t3626->mX.mX[442UL];
    out->mOBS_ACT.mX[4222UL] = 1.0;
    out->mOBS_ACT.mX[4223UL] = t3626->mX.mX[1325UL];
    out->mOBS_ACT.mX[4224UL] = t3626->mX.mX[1326UL];
    out->mOBS_ACT.mX[4225UL] = 1.0;
    out->mOBS_ACT.mX[4226UL] = 1.0;
    out->mOBS_ACT.mX[4227UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4228UL] = zc_int396;
    out->mOBS_ACT.mX[4229UL] = t3626->mX.mX[442UL];
    out->mOBS_ACT.mX[4230UL] = zc_int397;
    out->mOBS_ACT.mX[4231UL] = t3626->mX.mX[1327UL];
    out->mOBS_ACT.mX[4232UL] = t3626->mX.mX[1327UL];
    out->mOBS_ACT.mX[4233UL] = t3626->mX.mX[440UL];
    out->mOBS_ACT.mX[4234UL] = BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[4235UL] = t3626->mX.mX[440UL];
    out->mOBS_ACT.mX[4236UL] = t3626->mX.mX[440UL];
    out->mOBS_ACT.mX[4237UL] = t3626->mX.mX[1328UL] * 1000.0;
    out->mOBS_ACT.mX[4238UL] = zc_int164;
    out->mOBS_ACT.mX[4239UL] = t3626->mX.mX[440UL];
    out->mOBS_ACT.mX[4240UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4241UL] = BatteryPack_v2_ModuleAssembly4_Module11_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[4242UL] = BatteryPack_v2_ModuleAssembly4_Module11_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[4243UL] = zc_int396;
    out->mOBS_ACT.mX[4244UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4245UL] = 0.0;
    out->mOBS_ACT.mX[4246UL] = zc_int396;
    out->mOBS_ACT.mX[4247UL] = zc_int397;
    out->mOBS_ACT.mX[4248UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4249UL] = 0.0;
    out->mOBS_ACT.mX[4250UL] = zc_int397;
    out->mOBS_ACT.mX[4251UL] = t3626->mX.mX[440UL];
    out->mOBS_ACT.mX[4252UL] = BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[4253UL] = 0.0;
    out->mOBS_ACT.mX[4254UL] = t3626->mX.mX[440UL];
    out->mOBS_ACT.mX[4255UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4256UL] = zc_int396;
    out->mOBS_ACT.mX[4257UL] = t3626->mX.mX[442UL];
    out->mOBS_ACT.mX[4258UL] = zc_int397;
    out->mOBS_ACT.mX[4259UL] = t3626->mX.mX[1327UL];
    out->mOBS_ACT.mX[4260UL] = t3626->mX.mX[1327UL];
    out->mOBS_ACT.mX[4261UL] = t3626->mX.mX[440UL];
    out->mOBS_ACT.mX[4262UL] = zc_int164;
    out->mOBS_ACT.mX[4263UL] = zc_int397 - zc_int396;
    out->mOBS_ACT.mX[4264UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4265UL] = t3626->mX.mX[448UL];
    out->mOBS_ACT.mX[4266UL] = t3626->mX.mX[448UL];
    out->mOBS_ACT.mX[4267UL] = t3626->mX.mX[448UL];
    out->mOBS_ACT.mX[4268UL] = t3626->mX.mX[448UL];
    out->mOBS_ACT.mX[4269UL] = t3626->mX.mX[449UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[4270UL] = t3626->mX.mX[448UL];
    out->mOBS_ACT.mX[4271UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4272UL] = zc_int395;
    out->mOBS_ACT.mX[4273UL] = t3626->mX.mX[450UL];
    out->mOBS_ACT.mX[4274UL] = t3626->mX.mX[450UL];
    out->mOBS_ACT.mX[4275UL] = t3626->mX.mX[1331UL];
    out->mOBS_ACT.mX[4276UL] = 1.0;
    out->mOBS_ACT.mX[4277UL] = zc_int396;
    for (t2773 = 451UL; t2773 - 451UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3827UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4283UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[4288UL] = 0.0;
    out->mOBS_ACT.mX[4289UL] = t3626->mX.mX[1330UL];
    out->mOBS_ACT.mX[4290UL] = t3626->mX.mX[1332UL] * 1000.0;
    out->mOBS_ACT.mX[4291UL] = t3626->mX.mX[1331UL];
    out->mOBS_ACT.mX[4292UL] = intrm_sf_mf_43;
    out->mOBS_ACT.mX[4293UL] = 1.0;
    out->mOBS_ACT.mX[4294UL] = t3626->mX.mX[1329UL];
    out->mOBS_ACT.mX[4295UL] = 1.0;
    out->mOBS_ACT.mX[4296UL] = t3626->mX.mX[448UL];
    out->mOBS_ACT.mX[4297UL] = t3626->mX.mX[450UL];
    out->mOBS_ACT.mX[4298UL] = 1.0;
    out->mOBS_ACT.mX[4299UL] = t3626->mX.mX[1329UL];
    out->mOBS_ACT.mX[4300UL] = t3626->mX.mX[1330UL];
    out->mOBS_ACT.mX[4301UL] = 1.0;
    out->mOBS_ACT.mX[4302UL] = 1.0;
    out->mOBS_ACT.mX[4303UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4304UL] = zc_int395;
    out->mOBS_ACT.mX[4305UL] = t3626->mX.mX[450UL];
    out->mOBS_ACT.mX[4306UL] = zc_int396;
    out->mOBS_ACT.mX[4307UL] = t3626->mX.mX[1331UL];
    out->mOBS_ACT.mX[4308UL] = t3626->mX.mX[1331UL];
    out->mOBS_ACT.mX[4309UL] = t3626->mX.mX[448UL];
    out->mOBS_ACT.mX[4310UL] = BatteryPack_v2_ModuleAssembly4_Module12_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[4311UL] = t3626->mX.mX[448UL];
    out->mOBS_ACT.mX[4312UL] = t3626->mX.mX[448UL];
    out->mOBS_ACT.mX[4313UL] = t3626->mX.mX[1332UL] * 1000.0;
    out->mOBS_ACT.mX[4314UL] = intrm_sf_mf_43;
    out->mOBS_ACT.mX[4315UL] = t3626->mX.mX[448UL];
    out->mOBS_ACT.mX[4316UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4317UL] = BatteryPack_v2_ModuleAssembly4_Module12_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[4318UL] = BatteryPack_v2_ModuleAssembly4_Module12_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[4319UL] = zc_int395;
    out->mOBS_ACT.mX[4320UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4321UL] = 0.0;
    out->mOBS_ACT.mX[4322UL] = zc_int395;
    out->mOBS_ACT.mX[4323UL] = zc_int396;
    out->mOBS_ACT.mX[4324UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4325UL] = 0.0;
    out->mOBS_ACT.mX[4326UL] = zc_int396;
    out->mOBS_ACT.mX[4327UL] = t3626->mX.mX[448UL];
    out->mOBS_ACT.mX[4328UL] = BatteryPack_v2_ModuleAssembly4_Module12_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[4329UL] = 0.0;
    out->mOBS_ACT.mX[4330UL] = t3626->mX.mX[448UL];
    out->mOBS_ACT.mX[4331UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4332UL] = zc_int395;
    out->mOBS_ACT.mX[4333UL] = t3626->mX.mX[450UL];
    out->mOBS_ACT.mX[4334UL] = zc_int396;
    out->mOBS_ACT.mX[4335UL] = t3626->mX.mX[1331UL];
    out->mOBS_ACT.mX[4336UL] = t3626->mX.mX[1331UL];
    out->mOBS_ACT.mX[4337UL] = t3626->mX.mX[448UL];
    out->mOBS_ACT.mX[4338UL] = intrm_sf_mf_43;
    out->mOBS_ACT.mX[4339UL] = zc_int396 - zc_int395;
    out->mOBS_ACT.mX[4340UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4341UL] = t3626->mX.mX[456UL];
    out->mOBS_ACT.mX[4342UL] = t3626->mX.mX[456UL];
    out->mOBS_ACT.mX[4343UL] = t3626->mX.mX[456UL];
    out->mOBS_ACT.mX[4344UL] = t3626->mX.mX[456UL];
    out->mOBS_ACT.mX[4345UL] = t3626->mX.mX[457UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[4346UL] = t3626->mX.mX[456UL];
    out->mOBS_ACT.mX[4347UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4348UL] = intrm_sf_mf_96;
    out->mOBS_ACT.mX[4349UL] = t3626->mX.mX[458UL];
    out->mOBS_ACT.mX[4350UL] = t3626->mX.mX[458UL];
    out->mOBS_ACT.mX[4351UL] = t3626->mX.mX[1335UL];
    out->mOBS_ACT.mX[4352UL] = 1.0;
    out->mOBS_ACT.mX[4353UL] = zc_int395;
    for (t2773 = 459UL; t2773 - 459UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3895UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4359UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[4364UL] = 0.0;
    out->mOBS_ACT.mX[4365UL] = t3626->mX.mX[1334UL];
    out->mOBS_ACT.mX[4366UL] = t3626->mX.mX[1336UL] * 1000.0;
    out->mOBS_ACT.mX[4367UL] = t3626->mX.mX[1335UL];
    out->mOBS_ACT.mX[4368UL] = BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4369UL] = 1.0;
    out->mOBS_ACT.mX[4370UL] = t3626->mX.mX[1333UL];
    out->mOBS_ACT.mX[4371UL] = 1.0;
    out->mOBS_ACT.mX[4372UL] = t3626->mX.mX[456UL];
    out->mOBS_ACT.mX[4373UL] = t3626->mX.mX[458UL];
    out->mOBS_ACT.mX[4374UL] = 1.0;
    out->mOBS_ACT.mX[4375UL] = t3626->mX.mX[1333UL];
    out->mOBS_ACT.mX[4376UL] = t3626->mX.mX[1334UL];
    out->mOBS_ACT.mX[4377UL] = 1.0;
    out->mOBS_ACT.mX[4378UL] = 1.0;
    out->mOBS_ACT.mX[4379UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4380UL] = intrm_sf_mf_96;
    out->mOBS_ACT.mX[4381UL] = t3626->mX.mX[458UL];
    out->mOBS_ACT.mX[4382UL] = zc_int395;
    out->mOBS_ACT.mX[4383UL] = t3626->mX.mX[1335UL];
    out->mOBS_ACT.mX[4384UL] = t3626->mX.mX[1335UL];
    out->mOBS_ACT.mX[4385UL] = t3626->mX.mX[456UL];
    out->mOBS_ACT.mX[4386UL] = BatteryPack_v2_ModuleAssembly4_Module13_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[4387UL] = t3626->mX.mX[456UL];
    out->mOBS_ACT.mX[4388UL] = t3626->mX.mX[456UL];
    out->mOBS_ACT.mX[4389UL] = t3626->mX.mX[1336UL] * 1000.0;
    out->mOBS_ACT.mX[4390UL] = BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4391UL] = t3626->mX.mX[456UL];
    out->mOBS_ACT.mX[4392UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4393UL] = BatteryPack_v2_ModuleAssembly4_Module13_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[4394UL] = BatteryPack_v2_ModuleAssembly4_Module13_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[4395UL] = intrm_sf_mf_96;
    out->mOBS_ACT.mX[4396UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4397UL] = 0.0;
    out->mOBS_ACT.mX[4398UL] = intrm_sf_mf_96;
    out->mOBS_ACT.mX[4399UL] = zc_int395;
    out->mOBS_ACT.mX[4400UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4401UL] = 0.0;
    out->mOBS_ACT.mX[4402UL] = zc_int395;
    out->mOBS_ACT.mX[4403UL] = t3626->mX.mX[456UL];
    out->mOBS_ACT.mX[4404UL] = BatteryPack_v2_ModuleAssembly4_Module13_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[4405UL] = 0.0;
    out->mOBS_ACT.mX[4406UL] = t3626->mX.mX[456UL];
    out->mOBS_ACT.mX[4407UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4408UL] = intrm_sf_mf_96;
    out->mOBS_ACT.mX[4409UL] = t3626->mX.mX[458UL];
    out->mOBS_ACT.mX[4410UL] = zc_int395;
    out->mOBS_ACT.mX[4411UL] = t3626->mX.mX[1335UL];
    out->mOBS_ACT.mX[4412UL] = t3626->mX.mX[1335UL];
    out->mOBS_ACT.mX[4413UL] = t3626->mX.mX[456UL];
    out->mOBS_ACT.mX[4414UL] = BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4415UL] = zc_int395 - intrm_sf_mf_96;
    out->mOBS_ACT.mX[4416UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4417UL] = t3626->mX.mX[464UL];
    out->mOBS_ACT.mX[4418UL] = t3626->mX.mX[464UL];
    out->mOBS_ACT.mX[4419UL] = t3626->mX.mX[464UL];
    out->mOBS_ACT.mX[4420UL] = t3626->mX.mX[464UL];
    out->mOBS_ACT.mX[4421UL] = t3626->mX.mX[465UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[4422UL] = t3626->mX.mX[464UL];
    out->mOBS_ACT.mX[4423UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4424UL] = zc_int393;
    out->mOBS_ACT.mX[4425UL] = t3626->mX.mX[466UL];
    out->mOBS_ACT.mX[4426UL] = t3626->mX.mX[466UL];
    out->mOBS_ACT.mX[4427UL] = t3626->mX.mX[1339UL];
    out->mOBS_ACT.mX[4428UL] = 1.0;
    out->mOBS_ACT.mX[4429UL] = intrm_sf_mf_96;
    for (t2773 = 467UL; t2773 - 467UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 3963UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4435UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[4440UL] = 0.0;
    out->mOBS_ACT.mX[4441UL] = t3626->mX.mX[1338UL];
    out->mOBS_ACT.mX[4442UL] = t3626->mX.mX[1340UL] * 1000.0;
    out->mOBS_ACT.mX[4443UL] = t3626->mX.mX[1339UL];
    out->mOBS_ACT.mX[4444UL] = zc_int171;
    out->mOBS_ACT.mX[4445UL] = 1.0;
    out->mOBS_ACT.mX[4446UL] = t3626->mX.mX[1337UL];
    out->mOBS_ACT.mX[4447UL] = 1.0;
    out->mOBS_ACT.mX[4448UL] = t3626->mX.mX[464UL];
    out->mOBS_ACT.mX[4449UL] = t3626->mX.mX[466UL];
    out->mOBS_ACT.mX[4450UL] = 1.0;
    out->mOBS_ACT.mX[4451UL] = t3626->mX.mX[1337UL];
    out->mOBS_ACT.mX[4452UL] = t3626->mX.mX[1338UL];
    out->mOBS_ACT.mX[4453UL] = 1.0;
    out->mOBS_ACT.mX[4454UL] = 1.0;
    out->mOBS_ACT.mX[4455UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4456UL] = zc_int393;
    out->mOBS_ACT.mX[4457UL] = t3626->mX.mX[466UL];
    out->mOBS_ACT.mX[4458UL] = intrm_sf_mf_96;
    out->mOBS_ACT.mX[4459UL] = t3626->mX.mX[1339UL];
    out->mOBS_ACT.mX[4460UL] = t3626->mX.mX[1339UL];
    out->mOBS_ACT.mX[4461UL] = t3626->mX.mX[464UL];
    out->mOBS_ACT.mX[4462UL] = BatteryPack_v2_ModuleAssembly4_Module14_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[4463UL] = t3626->mX.mX[464UL];
    out->mOBS_ACT.mX[4464UL] = t3626->mX.mX[464UL];
    out->mOBS_ACT.mX[4465UL] = t3626->mX.mX[1340UL] * 1000.0;
    out->mOBS_ACT.mX[4466UL] = zc_int171;
    out->mOBS_ACT.mX[4467UL] = t3626->mX.mX[464UL];
    out->mOBS_ACT.mX[4468UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4469UL] = BatteryPack_v2_ModuleAssembly4_Module14_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[4470UL] = BatteryPack_v2_ModuleAssembly4_Module14_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[4471UL] = zc_int393;
    out->mOBS_ACT.mX[4472UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4473UL] = 0.0;
    out->mOBS_ACT.mX[4474UL] = zc_int393;
    out->mOBS_ACT.mX[4475UL] = intrm_sf_mf_96;
    out->mOBS_ACT.mX[4476UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4477UL] = 0.0;
    out->mOBS_ACT.mX[4478UL] = intrm_sf_mf_96;
    out->mOBS_ACT.mX[4479UL] = t3626->mX.mX[464UL];
    out->mOBS_ACT.mX[4480UL] = BatteryPack_v2_ModuleAssembly4_Module14_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[4481UL] = 0.0;
    out->mOBS_ACT.mX[4482UL] = t3626->mX.mX[464UL];
    out->mOBS_ACT.mX[4483UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4484UL] = zc_int393;
    out->mOBS_ACT.mX[4485UL] = t3626->mX.mX[466UL];
    out->mOBS_ACT.mX[4486UL] = intrm_sf_mf_96;
    out->mOBS_ACT.mX[4487UL] = t3626->mX.mX[1339UL];
    out->mOBS_ACT.mX[4488UL] = t3626->mX.mX[1339UL];
    out->mOBS_ACT.mX[4489UL] = t3626->mX.mX[464UL];
    out->mOBS_ACT.mX[4490UL] = zc_int171;
    out->mOBS_ACT.mX[4491UL] = intrm_sf_mf_96 - zc_int393;
    out->mOBS_ACT.mX[4492UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4493UL] = t3626->mX.mX[472UL];
    out->mOBS_ACT.mX[4494UL] = t3626->mX.mX[472UL];
    out->mOBS_ACT.mX[4495UL] = t3626->mX.mX[472UL];
    out->mOBS_ACT.mX[4496UL] = t3626->mX.mX[472UL];
    out->mOBS_ACT.mX[4497UL] = t3626->mX.mX[473UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[4498UL] = t3626->mX.mX[472UL];
    out->mOBS_ACT.mX[4499UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4500UL] = intrm_sf_mf_95;
    out->mOBS_ACT.mX[4501UL] = t3626->mX.mX[474UL];
    out->mOBS_ACT.mX[4502UL] = t3626->mX.mX[474UL];
    out->mOBS_ACT.mX[4503UL] = t3626->mX.mX[1343UL];
    out->mOBS_ACT.mX[4504UL] = 1.0;
    out->mOBS_ACT.mX[4505UL] = zc_int393;
    for (t2773 = 475UL; t2773 - 475UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4031UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4511UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[4516UL] = 0.0;
    out->mOBS_ACT.mX[4517UL] = t3626->mX.mX[1342UL];
    out->mOBS_ACT.mX[4518UL] = t3626->mX.mX[1344UL] * 1000.0;
    out->mOBS_ACT.mX[4519UL] = t3626->mX.mX[1343UL];
    out->mOBS_ACT.mX[4520UL] = intrm_sf_mf_44;
    out->mOBS_ACT.mX[4521UL] = 1.0;
    out->mOBS_ACT.mX[4522UL] = t3626->mX.mX[1341UL];
    out->mOBS_ACT.mX[4523UL] = 1.0;
    out->mOBS_ACT.mX[4524UL] = t3626->mX.mX[472UL];
    out->mOBS_ACT.mX[4525UL] = t3626->mX.mX[474UL];
    out->mOBS_ACT.mX[4526UL] = 1.0;
    out->mOBS_ACT.mX[4527UL] = t3626->mX.mX[1341UL];
    out->mOBS_ACT.mX[4528UL] = t3626->mX.mX[1342UL];
    out->mOBS_ACT.mX[4529UL] = 1.0;
    out->mOBS_ACT.mX[4530UL] = 1.0;
    out->mOBS_ACT.mX[4531UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4532UL] = intrm_sf_mf_95;
    out->mOBS_ACT.mX[4533UL] = t3626->mX.mX[474UL];
    out->mOBS_ACT.mX[4534UL] = zc_int393;
    out->mOBS_ACT.mX[4535UL] = t3626->mX.mX[1343UL];
    out->mOBS_ACT.mX[4536UL] = t3626->mX.mX[1343UL];
    out->mOBS_ACT.mX[4537UL] = t3626->mX.mX[472UL];
    out->mOBS_ACT.mX[4538UL] = BatteryPack_v2_ModuleAssembly4_Module15_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[4539UL] = t3626->mX.mX[472UL];
    out->mOBS_ACT.mX[4540UL] = t3626->mX.mX[472UL];
    out->mOBS_ACT.mX[4541UL] = t3626->mX.mX[1344UL] * 1000.0;
    out->mOBS_ACT.mX[4542UL] = intrm_sf_mf_44;
    out->mOBS_ACT.mX[4543UL] = t3626->mX.mX[472UL];
    out->mOBS_ACT.mX[4544UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4545UL] = BatteryPack_v2_ModuleAssembly4_Module15_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[4546UL] = BatteryPack_v2_ModuleAssembly4_Module15_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[4547UL] = intrm_sf_mf_95;
    out->mOBS_ACT.mX[4548UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4549UL] = 0.0;
    out->mOBS_ACT.mX[4550UL] = intrm_sf_mf_95;
    out->mOBS_ACT.mX[4551UL] = zc_int393;
    out->mOBS_ACT.mX[4552UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4553UL] = 0.0;
    out->mOBS_ACT.mX[4554UL] = zc_int393;
    out->mOBS_ACT.mX[4555UL] = t3626->mX.mX[472UL];
    out->mOBS_ACT.mX[4556UL] = BatteryPack_v2_ModuleAssembly4_Module15_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[4557UL] = 0.0;
    out->mOBS_ACT.mX[4558UL] = t3626->mX.mX[472UL];
    out->mOBS_ACT.mX[4559UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4560UL] = intrm_sf_mf_95;
    out->mOBS_ACT.mX[4561UL] = t3626->mX.mX[474UL];
    out->mOBS_ACT.mX[4562UL] = zc_int393;
    out->mOBS_ACT.mX[4563UL] = t3626->mX.mX[1343UL];
    out->mOBS_ACT.mX[4564UL] = t3626->mX.mX[1343UL];
    out->mOBS_ACT.mX[4565UL] = t3626->mX.mX[472UL];
    out->mOBS_ACT.mX[4566UL] = intrm_sf_mf_44;
    out->mOBS_ACT.mX[4567UL] = zc_int393 - intrm_sf_mf_95;
    out->mOBS_ACT.mX[4568UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4569UL] = t3626->mX.mX[480UL];
    out->mOBS_ACT.mX[4570UL] = t3626->mX.mX[480UL];
    out->mOBS_ACT.mX[4571UL] = t3626->mX.mX[480UL];
    out->mOBS_ACT.mX[4572UL] = t3626->mX.mX[480UL];
    out->mOBS_ACT.mX[4573UL] = t3626->mX.mX[481UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[4574UL] = t3626->mX.mX[480UL];
    out->mOBS_ACT.mX[4575UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4576UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4577UL] = t3626->mX.mX[482UL];
    out->mOBS_ACT.mX[4578UL] = t3626->mX.mX[482UL];
    out->mOBS_ACT.mX[4579UL] = t3626->mX.mX[1347UL];
    out->mOBS_ACT.mX[4580UL] = 1.0;
    out->mOBS_ACT.mX[4581UL] = intrm_sf_mf_95;
    for (t2773 = 483UL; t2773 - 483UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4099UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4587UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[4592UL] = 0.0;
    out->mOBS_ACT.mX[4593UL] = t3626->mX.mX[1346UL];
    out->mOBS_ACT.mX[4594UL] = t3626->mX.mX[1348UL] * 1000.0;
    out->mOBS_ACT.mX[4595UL] = t3626->mX.mX[1347UL];
    out->mOBS_ACT.mX[4596UL] = zc_int177;
    out->mOBS_ACT.mX[4597UL] = 1.0;
    out->mOBS_ACT.mX[4598UL] = t3626->mX.mX[1345UL];
    out->mOBS_ACT.mX[4599UL] = 1.0;
    out->mOBS_ACT.mX[4600UL] = t3626->mX.mX[480UL];
    out->mOBS_ACT.mX[4601UL] = t3626->mX.mX[482UL];
    out->mOBS_ACT.mX[4602UL] = 1.0;
    out->mOBS_ACT.mX[4603UL] = t3626->mX.mX[1345UL];
    out->mOBS_ACT.mX[4604UL] = t3626->mX.mX[1346UL];
    out->mOBS_ACT.mX[4605UL] = 1.0;
    out->mOBS_ACT.mX[4606UL] = 1.0;
    out->mOBS_ACT.mX[4607UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4608UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4609UL] = t3626->mX.mX[482UL];
    out->mOBS_ACT.mX[4610UL] = intrm_sf_mf_95;
    out->mOBS_ACT.mX[4611UL] = t3626->mX.mX[1347UL];
    out->mOBS_ACT.mX[4612UL] = t3626->mX.mX[1347UL];
    out->mOBS_ACT.mX[4613UL] = t3626->mX.mX[480UL];
    out->mOBS_ACT.mX[4614UL] = BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[4615UL] = t3626->mX.mX[480UL];
    out->mOBS_ACT.mX[4616UL] = t3626->mX.mX[480UL];
    out->mOBS_ACT.mX[4617UL] = t3626->mX.mX[1348UL] * 1000.0;
    out->mOBS_ACT.mX[4618UL] = zc_int177;
    out->mOBS_ACT.mX[4619UL] = t3626->mX.mX[480UL];
    out->mOBS_ACT.mX[4620UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4621UL] = BatteryPack_v2_ModuleAssembly4_Module16_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[4622UL] = BatteryPack_v2_ModuleAssembly4_Module16_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[4623UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4624UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4625UL] = 0.0;
    out->mOBS_ACT.mX[4626UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4627UL] = intrm_sf_mf_95;
    out->mOBS_ACT.mX[4628UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4629UL] = 0.0;
    out->mOBS_ACT.mX[4630UL] = intrm_sf_mf_95;
    out->mOBS_ACT.mX[4631UL] = t3626->mX.mX[480UL];
    out->mOBS_ACT.mX[4632UL] = BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[4633UL] = 0.0;
    out->mOBS_ACT.mX[4634UL] = t3626->mX.mX[480UL];
    out->mOBS_ACT.mX[4635UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4636UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4637UL] = t3626->mX.mX[482UL];
    out->mOBS_ACT.mX[4638UL] = intrm_sf_mf_95;
    out->mOBS_ACT.mX[4639UL] = t3626->mX.mX[1347UL];
    out->mOBS_ACT.mX[4640UL] = t3626->mX.mX[1347UL];
    out->mOBS_ACT.mX[4641UL] = t3626->mX.mX[480UL];
    out->mOBS_ACT.mX[4642UL] = zc_int177;
    out->mOBS_ACT.mX[4643UL] = intrm_sf_mf_95 - BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4644UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4645UL] = t3626->mX.mX[488UL];
    out->mOBS_ACT.mX[4646UL] = t3626->mX.mX[488UL];
    out->mOBS_ACT.mX[4647UL] = t3626->mX.mX[488UL];
    out->mOBS_ACT.mX[4648UL] = t3626->mX.mX[488UL];
    out->mOBS_ACT.mX[4649UL] = t3626->mX.mX[489UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[4650UL] = t3626->mX.mX[488UL];
    out->mOBS_ACT.mX[4651UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4652UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4653UL] = t3626->mX.mX[490UL];
    out->mOBS_ACT.mX[4654UL] = t3626->mX.mX[490UL];
    out->mOBS_ACT.mX[4655UL] = t3626->mX.mX[1351UL];
    out->mOBS_ACT.mX[4656UL] = 1.0;
    out->mOBS_ACT.mX[4657UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    for (t2773 = 491UL; t2773 - 491UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4167UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4663UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[4668UL] = 0.0;
    out->mOBS_ACT.mX[4669UL] = t3626->mX.mX[1350UL];
    out->mOBS_ACT.mX[4670UL] = t3626->mX.mX[1352UL] * 1000.0;
    out->mOBS_ACT.mX[4671UL] = t3626->mX.mX[1351UL];
    out->mOBS_ACT.mX[4672UL] = BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4673UL] = 1.0;
    out->mOBS_ACT.mX[4674UL] = t3626->mX.mX[1349UL];
    out->mOBS_ACT.mX[4675UL] = 1.0;
    out->mOBS_ACT.mX[4676UL] = t3626->mX.mX[488UL];
    out->mOBS_ACT.mX[4677UL] = t3626->mX.mX[490UL];
    out->mOBS_ACT.mX[4678UL] = 1.0;
    out->mOBS_ACT.mX[4679UL] = t3626->mX.mX[1349UL];
    out->mOBS_ACT.mX[4680UL] = t3626->mX.mX[1350UL];
    out->mOBS_ACT.mX[4681UL] = 1.0;
    out->mOBS_ACT.mX[4682UL] = 1.0;
    out->mOBS_ACT.mX[4683UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4684UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4685UL] = t3626->mX.mX[490UL];
    out->mOBS_ACT.mX[4686UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4687UL] = t3626->mX.mX[1351UL];
    out->mOBS_ACT.mX[4688UL] = t3626->mX.mX[1351UL];
    out->mOBS_ACT.mX[4689UL] = t3626->mX.mX[488UL];
    out->mOBS_ACT.mX[4690UL] = BatteryPack_v2_ModuleAssembly4_Module17_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[4691UL] = t3626->mX.mX[488UL];
    out->mOBS_ACT.mX[4692UL] = t3626->mX.mX[488UL];
    out->mOBS_ACT.mX[4693UL] = t3626->mX.mX[1352UL] * 1000.0;
    out->mOBS_ACT.mX[4694UL] = BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4695UL] = t3626->mX.mX[488UL];
    out->mOBS_ACT.mX[4696UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4697UL] = BatteryPack_v2_ModuleAssembly4_Module17_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[4698UL] = BatteryPack_v2_ModuleAssembly4_Module17_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[4699UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4700UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4701UL] = 0.0;
    out->mOBS_ACT.mX[4702UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4703UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4704UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4705UL] = 0.0;
    out->mOBS_ACT.mX[4706UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4707UL] = t3626->mX.mX[488UL];
    out->mOBS_ACT.mX[4708UL] = BatteryPack_v2_ModuleAssembly4_Module17_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[4709UL] = 0.0;
    out->mOBS_ACT.mX[4710UL] = t3626->mX.mX[488UL];
    out->mOBS_ACT.mX[4711UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4712UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4713UL] = t3626->mX.mX[490UL];
    out->mOBS_ACT.mX[4714UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4715UL] = t3626->mX.mX[1351UL];
    out->mOBS_ACT.mX[4716UL] = t3626->mX.mX[1351UL];
    out->mOBS_ACT.mX[4717UL] = t3626->mX.mX[488UL];
    out->mOBS_ACT.mX[4718UL] = BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4719UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3 - BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4720UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4721UL] = t3626->mX.mX[496UL];
    out->mOBS_ACT.mX[4722UL] = t3626->mX.mX[496UL];
    out->mOBS_ACT.mX[4723UL] = t3626->mX.mX[496UL];
    out->mOBS_ACT.mX[4724UL] = t3626->mX.mX[496UL];
    out->mOBS_ACT.mX[4725UL] = t3626->mX.mX[497UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[4726UL] = t3626->mX.mX[496UL];
    out->mOBS_ACT.mX[4727UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4728UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4729UL] = t3626->mX.mX[498UL];
    out->mOBS_ACT.mX[4730UL] = t3626->mX.mX[498UL];
    out->mOBS_ACT.mX[4731UL] = t3626->mX.mX[1355UL];
    out->mOBS_ACT.mX[4732UL] = 1.0;
    out->mOBS_ACT.mX[4733UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    for (t2773 = 499UL; t2773 - 499UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4235UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4739UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[4744UL] = 0.0;
    out->mOBS_ACT.mX[4745UL] = t3626->mX.mX[1354UL];
    out->mOBS_ACT.mX[4746UL] = t3626->mX.mX[1356UL] * 1000.0;
    out->mOBS_ACT.mX[4747UL] = t3626->mX.mX[1355UL];
    out->mOBS_ACT.mX[4748UL] = zc_int183;
    out->mOBS_ACT.mX[4749UL] = 1.0;
    out->mOBS_ACT.mX[4750UL] = t3626->mX.mX[1353UL];
    out->mOBS_ACT.mX[4751UL] = 1.0;
    out->mOBS_ACT.mX[4752UL] = t3626->mX.mX[496UL];
    out->mOBS_ACT.mX[4753UL] = t3626->mX.mX[498UL];
    out->mOBS_ACT.mX[4754UL] = 1.0;
    out->mOBS_ACT.mX[4755UL] = t3626->mX.mX[1353UL];
    out->mOBS_ACT.mX[4756UL] = t3626->mX.mX[1354UL];
    out->mOBS_ACT.mX[4757UL] = 1.0;
    out->mOBS_ACT.mX[4758UL] = 1.0;
    out->mOBS_ACT.mX[4759UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4760UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4761UL] = t3626->mX.mX[498UL];
    out->mOBS_ACT.mX[4762UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4763UL] = t3626->mX.mX[1355UL];
    out->mOBS_ACT.mX[4764UL] = t3626->mX.mX[1355UL];
    out->mOBS_ACT.mX[4765UL] = t3626->mX.mX[496UL];
    out->mOBS_ACT.mX[4766UL] = BatteryPack_v2_ModuleAssembly4_Module18_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[4767UL] = t3626->mX.mX[496UL];
    out->mOBS_ACT.mX[4768UL] = t3626->mX.mX[496UL];
    out->mOBS_ACT.mX[4769UL] = t3626->mX.mX[1356UL] * 1000.0;
    out->mOBS_ACT.mX[4770UL] = zc_int183;
    out->mOBS_ACT.mX[4771UL] = t3626->mX.mX[496UL];
    out->mOBS_ACT.mX[4772UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4773UL] = BatteryPack_v2_ModuleAssembly4_Module18_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[4774UL] = BatteryPack_v2_ModuleAssembly4_Module18_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[4775UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4776UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4777UL] = 0.0;
    out->mOBS_ACT.mX[4778UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4779UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4780UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4781UL] = 0.0;
    out->mOBS_ACT.mX[4782UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4783UL] = t3626->mX.mX[496UL];
    out->mOBS_ACT.mX[4784UL] = BatteryPack_v2_ModuleAssembly4_Module18_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[4785UL] = 0.0;
    out->mOBS_ACT.mX[4786UL] = t3626->mX.mX[496UL];
    out->mOBS_ACT.mX[4787UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4788UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4789UL] = t3626->mX.mX[498UL];
    out->mOBS_ACT.mX[4790UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4791UL] = t3626->mX.mX[1355UL];
    out->mOBS_ACT.mX[4792UL] = t3626->mX.mX[1355UL];
    out->mOBS_ACT.mX[4793UL] = t3626->mX.mX[496UL];
    out->mOBS_ACT.mX[4794UL] = zc_int183;
    out->mOBS_ACT.mX[4795UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3 - BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4796UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4797UL] = t3626->mX.mX[504UL];
    out->mOBS_ACT.mX[4798UL] = t3626->mX.mX[504UL];
    out->mOBS_ACT.mX[4799UL] = t3626->mX.mX[504UL];
    out->mOBS_ACT.mX[4800UL] = t3626->mX.mX[504UL];
    out->mOBS_ACT.mX[4801UL] = t3626->mX.mX[505UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[4802UL] = t3626->mX.mX[504UL];
    out->mOBS_ACT.mX[4803UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4804UL] = zc_int388;
    out->mOBS_ACT.mX[4805UL] = t3626->mX.mX[506UL];
    out->mOBS_ACT.mX[4806UL] = t3626->mX.mX[506UL];
    out->mOBS_ACT.mX[4807UL] = t3626->mX.mX[1359UL];
    out->mOBS_ACT.mX[4808UL] = 1.0;
    out->mOBS_ACT.mX[4809UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    for (t2773 = 507UL; t2773 - 507UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4303UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4815UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[4820UL] = 0.0;
    out->mOBS_ACT.mX[4821UL] = t3626->mX.mX[1358UL];
    out->mOBS_ACT.mX[4822UL] = t3626->mX.mX[1360UL] * 1000.0;
    out->mOBS_ACT.mX[4823UL] = t3626->mX.mX[1359UL];
    out->mOBS_ACT.mX[4824UL] = intrm_sf_mf_47;
    out->mOBS_ACT.mX[4825UL] = 1.0;
    out->mOBS_ACT.mX[4826UL] = t3626->mX.mX[1357UL];
    out->mOBS_ACT.mX[4827UL] = 1.0;
    out->mOBS_ACT.mX[4828UL] = t3626->mX.mX[504UL];
    out->mOBS_ACT.mX[4829UL] = t3626->mX.mX[506UL];
    out->mOBS_ACT.mX[4830UL] = 1.0;
    out->mOBS_ACT.mX[4831UL] = t3626->mX.mX[1357UL];
    out->mOBS_ACT.mX[4832UL] = t3626->mX.mX[1358UL];
    out->mOBS_ACT.mX[4833UL] = 1.0;
    out->mOBS_ACT.mX[4834UL] = 1.0;
    out->mOBS_ACT.mX[4835UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4836UL] = zc_int388;
    out->mOBS_ACT.mX[4837UL] = t3626->mX.mX[506UL];
    out->mOBS_ACT.mX[4838UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4839UL] = t3626->mX.mX[1359UL];
    out->mOBS_ACT.mX[4840UL] = t3626->mX.mX[1359UL];
    out->mOBS_ACT.mX[4841UL] = t3626->mX.mX[504UL];
    out->mOBS_ACT.mX[4842UL] = BatteryPack_v2_ModuleAssembly4_Module19_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[4843UL] = t3626->mX.mX[504UL];
    out->mOBS_ACT.mX[4844UL] = t3626->mX.mX[504UL];
    out->mOBS_ACT.mX[4845UL] = t3626->mX.mX[1360UL] * 1000.0;
    out->mOBS_ACT.mX[4846UL] = intrm_sf_mf_47;
    out->mOBS_ACT.mX[4847UL] = t3626->mX.mX[504UL];
    out->mOBS_ACT.mX[4848UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4849UL] = BatteryPack_v2_ModuleAssembly4_Module19_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[4850UL] = BatteryPack_v2_ModuleAssembly4_Module19_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[4851UL] = zc_int388;
    out->mOBS_ACT.mX[4852UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4853UL] = 0.0;
    out->mOBS_ACT.mX[4854UL] = zc_int388;
    out->mOBS_ACT.mX[4855UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4856UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4857UL] = 0.0;
    out->mOBS_ACT.mX[4858UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4859UL] = t3626->mX.mX[504UL];
    out->mOBS_ACT.mX[4860UL] = BatteryPack_v2_ModuleAssembly4_Module19_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[4861UL] = 0.0;
    out->mOBS_ACT.mX[4862UL] = t3626->mX.mX[504UL];
    out->mOBS_ACT.mX[4863UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4864UL] = zc_int388;
    out->mOBS_ACT.mX[4865UL] = t3626->mX.mX[506UL];
    out->mOBS_ACT.mX[4866UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[4867UL] = t3626->mX.mX[1359UL];
    out->mOBS_ACT.mX[4868UL] = t3626->mX.mX[1359UL];
    out->mOBS_ACT.mX[4869UL] = t3626->mX.mX[504UL];
    out->mOBS_ACT.mX[4870UL] = intrm_sf_mf_47;
    out->mOBS_ACT.mX[4871UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3 - zc_int388;
    out->mOBS_ACT.mX[4872UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4873UL] = t3626->mX.mX[512UL];
    out->mOBS_ACT.mX[4874UL] = t3626->mX.mX[512UL];
    out->mOBS_ACT.mX[4875UL] = t3626->mX.mX[512UL];
    out->mOBS_ACT.mX[4876UL] = t3626->mX.mX[512UL];
    out->mOBS_ACT.mX[4877UL] = t3626->mX.mX[513UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[4878UL] = t3626->mX.mX[512UL];
    out->mOBS_ACT.mX[4879UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4880UL] = zc_int387;
    out->mOBS_ACT.mX[4881UL] = t3626->mX.mX[514UL];
    out->mOBS_ACT.mX[4882UL] = t3626->mX.mX[514UL];
    out->mOBS_ACT.mX[4883UL] = t3626->mX.mX[1363UL];
    out->mOBS_ACT.mX[4884UL] = 1.0;
    out->mOBS_ACT.mX[4885UL] = zc_int388;
    for (t2773 = 515UL; t2773 - 515UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4371UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4891UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[4896UL] = 0.0;
    out->mOBS_ACT.mX[4897UL] = t3626->mX.mX[1362UL];
    out->mOBS_ACT.mX[4898UL] = t3626->mX.mX[1364UL] * 1000.0;
    out->mOBS_ACT.mX[4899UL] = t3626->mX.mX[1363UL];
    out->mOBS_ACT.mX[4900UL] = intrm_sf_mf_7;
    out->mOBS_ACT.mX[4901UL] = 1.0;
    out->mOBS_ACT.mX[4902UL] = t3626->mX.mX[1361UL];
    out->mOBS_ACT.mX[4903UL] = 1.0;
    out->mOBS_ACT.mX[4904UL] = t3626->mX.mX[512UL];
    out->mOBS_ACT.mX[4905UL] = t3626->mX.mX[514UL];
    out->mOBS_ACT.mX[4906UL] = 1.0;
    out->mOBS_ACT.mX[4907UL] = t3626->mX.mX[1361UL];
    out->mOBS_ACT.mX[4908UL] = t3626->mX.mX[1362UL];
    out->mOBS_ACT.mX[4909UL] = 1.0;
    out->mOBS_ACT.mX[4910UL] = 1.0;
    out->mOBS_ACT.mX[4911UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4912UL] = zc_int387;
    out->mOBS_ACT.mX[4913UL] = t3626->mX.mX[514UL];
    out->mOBS_ACT.mX[4914UL] = zc_int388;
    out->mOBS_ACT.mX[4915UL] = t3626->mX.mX[1363UL];
    out->mOBS_ACT.mX[4916UL] = t3626->mX.mX[1363UL];
    out->mOBS_ACT.mX[4917UL] = t3626->mX.mX[512UL];
    out->mOBS_ACT.mX[4918UL] = BatteryPack_v2_ModuleAssembly4_Module20_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[4919UL] = t3626->mX.mX[512UL];
    out->mOBS_ACT.mX[4920UL] = t3626->mX.mX[512UL];
    out->mOBS_ACT.mX[4921UL] = t3626->mX.mX[1364UL] * 1000.0;
    out->mOBS_ACT.mX[4922UL] = intrm_sf_mf_7;
    out->mOBS_ACT.mX[4923UL] = t3626->mX.mX[512UL];
    out->mOBS_ACT.mX[4924UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4925UL] = BatteryPack_v2_ModuleAssembly4_Module20_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[4926UL] = BatteryPack_v2_ModuleAssembly4_Module20_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[4927UL] = zc_int387;
    out->mOBS_ACT.mX[4928UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4929UL] = 0.0;
    out->mOBS_ACT.mX[4930UL] = zc_int387;
    out->mOBS_ACT.mX[4931UL] = zc_int388;
    out->mOBS_ACT.mX[4932UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4933UL] = 0.0;
    out->mOBS_ACT.mX[4934UL] = zc_int388;
    out->mOBS_ACT.mX[4935UL] = t3626->mX.mX[512UL];
    out->mOBS_ACT.mX[4936UL] = BatteryPack_v2_ModuleAssembly4_Module20_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[4937UL] = 0.0;
    out->mOBS_ACT.mX[4938UL] = t3626->mX.mX[512UL];
    out->mOBS_ACT.mX[4939UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4940UL] = zc_int387;
    out->mOBS_ACT.mX[4941UL] = t3626->mX.mX[514UL];
    out->mOBS_ACT.mX[4942UL] = zc_int388;
    out->mOBS_ACT.mX[4943UL] = t3626->mX.mX[1363UL];
    out->mOBS_ACT.mX[4944UL] = t3626->mX.mX[1363UL];
    out->mOBS_ACT.mX[4945UL] = t3626->mX.mX[512UL];
    out->mOBS_ACT.mX[4946UL] = intrm_sf_mf_7;
    out->mOBS_ACT.mX[4947UL] = zc_int388 - zc_int387;
    out->mOBS_ACT.mX[4948UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[4949UL] = t3626->mX.mX[520UL];
    out->mOBS_ACT.mX[4950UL] = t3626->mX.mX[520UL];
    out->mOBS_ACT.mX[4951UL] = t3626->mX.mX[520UL];
    out->mOBS_ACT.mX[4952UL] = t3626->mX.mX[520UL];
    out->mOBS_ACT.mX[4953UL] = t3626->mX.mX[521UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[4954UL] = t3626->mX.mX[520UL];
    out->mOBS_ACT.mX[4955UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4956UL] = intrm_sf_mf_92;
    out->mOBS_ACT.mX[4957UL] = t3626->mX.mX[522UL];
    out->mOBS_ACT.mX[4958UL] = t3626->mX.mX[522UL];
    out->mOBS_ACT.mX[4959UL] = t3626->mX.mX[1367UL];
    out->mOBS_ACT.mX[4960UL] = 1.0;
    out->mOBS_ACT.mX[4961UL] = zc_int387;
    for (t2773 = 523UL; t2773 - 523UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4439UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4967UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[4972UL] = 0.0;
    out->mOBS_ACT.mX[4973UL] = t3626->mX.mX[1366UL];
    out->mOBS_ACT.mX[4974UL] = t3626->mX.mX[1368UL] * 1000.0;
    out->mOBS_ACT.mX[4975UL] = t3626->mX.mX[1367UL];
    out->mOBS_ACT.mX[4976UL] = zc_int192;
    out->mOBS_ACT.mX[4977UL] = 1.0;
    out->mOBS_ACT.mX[4978UL] = t3626->mX.mX[1365UL];
    out->mOBS_ACT.mX[4979UL] = 1.0;
    out->mOBS_ACT.mX[4980UL] = t3626->mX.mX[520UL];
    out->mOBS_ACT.mX[4981UL] = t3626->mX.mX[522UL];
    out->mOBS_ACT.mX[4982UL] = 1.0;
    out->mOBS_ACT.mX[4983UL] = t3626->mX.mX[1365UL];
    out->mOBS_ACT.mX[4984UL] = t3626->mX.mX[1366UL];
    out->mOBS_ACT.mX[4985UL] = 1.0;
    out->mOBS_ACT.mX[4986UL] = 1.0;
    out->mOBS_ACT.mX[4987UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[4988UL] = intrm_sf_mf_92;
    out->mOBS_ACT.mX[4989UL] = t3626->mX.mX[522UL];
    out->mOBS_ACT.mX[4990UL] = zc_int387;
    out->mOBS_ACT.mX[4991UL] = t3626->mX.mX[1367UL];
    out->mOBS_ACT.mX[4992UL] = t3626->mX.mX[1367UL];
    out->mOBS_ACT.mX[4993UL] = t3626->mX.mX[520UL];
    out->mOBS_ACT.mX[4994UL] = BatteryPack_v2_ModuleAssembly4_Module21_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[4995UL] = t3626->mX.mX[520UL];
    out->mOBS_ACT.mX[4996UL] = t3626->mX.mX[520UL];
    out->mOBS_ACT.mX[4997UL] = t3626->mX.mX[1368UL] * 1000.0;
    out->mOBS_ACT.mX[4998UL] = zc_int192;
    out->mOBS_ACT.mX[4999UL] = t3626->mX.mX[520UL];
    out->mOBS_ACT.mX[5000UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5001UL] = BatteryPack_v2_ModuleAssembly4_Module21_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[5002UL] = BatteryPack_v2_ModuleAssembly4_Module21_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[5003UL] = intrm_sf_mf_92;
    out->mOBS_ACT.mX[5004UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5005UL] = 0.0;
    out->mOBS_ACT.mX[5006UL] = intrm_sf_mf_92;
    out->mOBS_ACT.mX[5007UL] = zc_int387;
    out->mOBS_ACT.mX[5008UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5009UL] = 0.0;
    out->mOBS_ACT.mX[5010UL] = zc_int387;
    out->mOBS_ACT.mX[5011UL] = t3626->mX.mX[520UL];
    out->mOBS_ACT.mX[5012UL] = BatteryPack_v2_ModuleAssembly4_Module21_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[5013UL] = 0.0;
    out->mOBS_ACT.mX[5014UL] = t3626->mX.mX[520UL];
    out->mOBS_ACT.mX[5015UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5016UL] = intrm_sf_mf_92;
    out->mOBS_ACT.mX[5017UL] = t3626->mX.mX[522UL];
    out->mOBS_ACT.mX[5018UL] = zc_int387;
    out->mOBS_ACT.mX[5019UL] = t3626->mX.mX[1367UL];
    out->mOBS_ACT.mX[5020UL] = t3626->mX.mX[1367UL];
    out->mOBS_ACT.mX[5021UL] = t3626->mX.mX[520UL];
    out->mOBS_ACT.mX[5022UL] = zc_int192;
    out->mOBS_ACT.mX[5023UL] = zc_int387 - intrm_sf_mf_92;
    out->mOBS_ACT.mX[5024UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5025UL] = t3626->mX.mX[528UL];
    out->mOBS_ACT.mX[5026UL] = t3626->mX.mX[528UL];
    out->mOBS_ACT.mX[5027UL] = t3626->mX.mX[528UL];
    out->mOBS_ACT.mX[5028UL] = t3626->mX.mX[528UL];
    out->mOBS_ACT.mX[5029UL] = t3626->mX.mX[529UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[5030UL] = t3626->mX.mX[528UL];
    out->mOBS_ACT.mX[5031UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5032UL] = zc_int385;
    out->mOBS_ACT.mX[5033UL] = t3626->mX.mX[530UL];
    out->mOBS_ACT.mX[5034UL] = t3626->mX.mX[530UL];
    out->mOBS_ACT.mX[5035UL] = t3626->mX.mX[1371UL];
    out->mOBS_ACT.mX[5036UL] = 1.0;
    out->mOBS_ACT.mX[5037UL] = intrm_sf_mf_92;
    for (t2773 = 531UL; t2773 - 531UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4507UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5043UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[5048UL] = 0.0;
    out->mOBS_ACT.mX[5049UL] = t3626->mX.mX[1370UL];
    out->mOBS_ACT.mX[5050UL] = t3626->mX.mX[1372UL] * 1000.0;
    out->mOBS_ACT.mX[5051UL] = t3626->mX.mX[1371UL];
    out->mOBS_ACT.mX[5052UL] = zc_int195;
    out->mOBS_ACT.mX[5053UL] = 1.0;
    out->mOBS_ACT.mX[5054UL] = t3626->mX.mX[1369UL];
    out->mOBS_ACT.mX[5055UL] = 1.0;
    out->mOBS_ACT.mX[5056UL] = t3626->mX.mX[528UL];
    out->mOBS_ACT.mX[5057UL] = t3626->mX.mX[530UL];
    out->mOBS_ACT.mX[5058UL] = 1.0;
    out->mOBS_ACT.mX[5059UL] = t3626->mX.mX[1369UL];
    out->mOBS_ACT.mX[5060UL] = t3626->mX.mX[1370UL];
    out->mOBS_ACT.mX[5061UL] = 1.0;
    out->mOBS_ACT.mX[5062UL] = 1.0;
    out->mOBS_ACT.mX[5063UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5064UL] = zc_int385;
    out->mOBS_ACT.mX[5065UL] = t3626->mX.mX[530UL];
    out->mOBS_ACT.mX[5066UL] = intrm_sf_mf_92;
    out->mOBS_ACT.mX[5067UL] = t3626->mX.mX[1371UL];
    out->mOBS_ACT.mX[5068UL] = t3626->mX.mX[1371UL];
    out->mOBS_ACT.mX[5069UL] = t3626->mX.mX[528UL];
    out->mOBS_ACT.mX[5070UL] = BatteryPack_v2_ModuleAssembly4_Module22_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[5071UL] = t3626->mX.mX[528UL];
    out->mOBS_ACT.mX[5072UL] = t3626->mX.mX[528UL];
    out->mOBS_ACT.mX[5073UL] = t3626->mX.mX[1372UL] * 1000.0;
    out->mOBS_ACT.mX[5074UL] = zc_int195;
    out->mOBS_ACT.mX[5075UL] = t3626->mX.mX[528UL];
    out->mOBS_ACT.mX[5076UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5077UL] = BatteryPack_v2_ModuleAssembly4_Module22_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[5078UL] = BatteryPack_v2_ModuleAssembly4_Module22_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[5079UL] = zc_int385;
    out->mOBS_ACT.mX[5080UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5081UL] = 0.0;
    out->mOBS_ACT.mX[5082UL] = zc_int385;
    out->mOBS_ACT.mX[5083UL] = intrm_sf_mf_92;
    out->mOBS_ACT.mX[5084UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5085UL] = 0.0;
    out->mOBS_ACT.mX[5086UL] = intrm_sf_mf_92;
    out->mOBS_ACT.mX[5087UL] = t3626->mX.mX[528UL];
    out->mOBS_ACT.mX[5088UL] = BatteryPack_v2_ModuleAssembly4_Module22_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[5089UL] = 0.0;
    out->mOBS_ACT.mX[5090UL] = t3626->mX.mX[528UL];
    out->mOBS_ACT.mX[5091UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5092UL] = zc_int385;
    out->mOBS_ACT.mX[5093UL] = t3626->mX.mX[530UL];
    out->mOBS_ACT.mX[5094UL] = intrm_sf_mf_92;
    out->mOBS_ACT.mX[5095UL] = t3626->mX.mX[1371UL];
    out->mOBS_ACT.mX[5096UL] = t3626->mX.mX[1371UL];
    out->mOBS_ACT.mX[5097UL] = t3626->mX.mX[528UL];
    out->mOBS_ACT.mX[5098UL] = zc_int195;
    out->mOBS_ACT.mX[5099UL] = intrm_sf_mf_92 - zc_int385;
    out->mOBS_ACT.mX[5100UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5101UL] = t3626->mX.mX[536UL];
    out->mOBS_ACT.mX[5102UL] = t3626->mX.mX[536UL];
    out->mOBS_ACT.mX[5103UL] = t3626->mX.mX[536UL];
    out->mOBS_ACT.mX[5104UL] = t3626->mX.mX[536UL];
    out->mOBS_ACT.mX[5105UL] = t3626->mX.mX[537UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[5106UL] = t3626->mX.mX[536UL];
    out->mOBS_ACT.mX[5107UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5108UL] = zc_int384;
    out->mOBS_ACT.mX[5109UL] = t3626->mX.mX[538UL];
    out->mOBS_ACT.mX[5110UL] = t3626->mX.mX[538UL];
    out->mOBS_ACT.mX[5111UL] = t3626->mX.mX[1375UL];
    out->mOBS_ACT.mX[5112UL] = 1.0;
    out->mOBS_ACT.mX[5113UL] = zc_int385;
    for (t2773 = 539UL; t2773 - 539UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4575UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5119UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[5124UL] = 0.0;
    out->mOBS_ACT.mX[5125UL] = t3626->mX.mX[1374UL];
    out->mOBS_ACT.mX[5126UL] = t3626->mX.mX[1376UL] * 1000.0;
    out->mOBS_ACT.mX[5127UL] = t3626->mX.mX[1375UL];
    out->mOBS_ACT.mX[5128UL] = zc_int200;
    out->mOBS_ACT.mX[5129UL] = 1.0;
    out->mOBS_ACT.mX[5130UL] = t3626->mX.mX[1373UL];
    out->mOBS_ACT.mX[5131UL] = 1.0;
    out->mOBS_ACT.mX[5132UL] = t3626->mX.mX[536UL];
    out->mOBS_ACT.mX[5133UL] = t3626->mX.mX[538UL];
    out->mOBS_ACT.mX[5134UL] = 1.0;
    out->mOBS_ACT.mX[5135UL] = t3626->mX.mX[1373UL];
    out->mOBS_ACT.mX[5136UL] = t3626->mX.mX[1374UL];
    out->mOBS_ACT.mX[5137UL] = 1.0;
    out->mOBS_ACT.mX[5138UL] = 1.0;
    out->mOBS_ACT.mX[5139UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5140UL] = zc_int384;
    out->mOBS_ACT.mX[5141UL] = t3626->mX.mX[538UL];
    out->mOBS_ACT.mX[5142UL] = zc_int385;
    out->mOBS_ACT.mX[5143UL] = t3626->mX.mX[1375UL];
    out->mOBS_ACT.mX[5144UL] = t3626->mX.mX[1375UL];
    out->mOBS_ACT.mX[5145UL] = t3626->mX.mX[536UL];
    out->mOBS_ACT.mX[5146UL] = BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[5147UL] = t3626->mX.mX[536UL];
    out->mOBS_ACT.mX[5148UL] = t3626->mX.mX[536UL];
    out->mOBS_ACT.mX[5149UL] = t3626->mX.mX[1376UL] * 1000.0;
    out->mOBS_ACT.mX[5150UL] = zc_int200;
    out->mOBS_ACT.mX[5151UL] = t3626->mX.mX[536UL];
    out->mOBS_ACT.mX[5152UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5153UL] = BatteryPack_v2_ModuleAssembly4_Module23_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[5154UL] = BatteryPack_v2_ModuleAssembly4_Module23_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[5155UL] = zc_int384;
    out->mOBS_ACT.mX[5156UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5157UL] = 0.0;
    out->mOBS_ACT.mX[5158UL] = zc_int384;
    out->mOBS_ACT.mX[5159UL] = zc_int385;
    out->mOBS_ACT.mX[5160UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5161UL] = 0.0;
    out->mOBS_ACT.mX[5162UL] = zc_int385;
    out->mOBS_ACT.mX[5163UL] = t3626->mX.mX[536UL];
    out->mOBS_ACT.mX[5164UL] = BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[5165UL] = 0.0;
    out->mOBS_ACT.mX[5166UL] = t3626->mX.mX[536UL];
    out->mOBS_ACT.mX[5167UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5168UL] = zc_int384;
    out->mOBS_ACT.mX[5169UL] = t3626->mX.mX[538UL];
    out->mOBS_ACT.mX[5170UL] = zc_int385;
    out->mOBS_ACT.mX[5171UL] = t3626->mX.mX[1375UL];
    out->mOBS_ACT.mX[5172UL] = t3626->mX.mX[1375UL];
    out->mOBS_ACT.mX[5173UL] = t3626->mX.mX[536UL];
    out->mOBS_ACT.mX[5174UL] = zc_int200;
    out->mOBS_ACT.mX[5175UL] = zc_int385 - zc_int384;
    out->mOBS_ACT.mX[5176UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5177UL] = t3626->mX.mX[544UL];
    out->mOBS_ACT.mX[5178UL] = t3626->mX.mX[544UL];
    out->mOBS_ACT.mX[5179UL] = t3626->mX.mX[544UL];
    out->mOBS_ACT.mX[5180UL] = t3626->mX.mX[544UL];
    out->mOBS_ACT.mX[5181UL] = t3626->mX.mX[545UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[5182UL] = t3626->mX.mX[544UL];
    out->mOBS_ACT.mX[5183UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5184UL] = intrm_sf_mf_102;
    out->mOBS_ACT.mX[5185UL] = t3626->mX.mX[546UL];
    out->mOBS_ACT.mX[5186UL] = t3626->mX.mX[546UL];
    out->mOBS_ACT.mX[5187UL] = t3626->mX.mX[1379UL];
    out->mOBS_ACT.mX[5188UL] = 1.0;
    out->mOBS_ACT.mX[5189UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    for (t2773 = 547UL; t2773 - 547UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4643UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5195UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[5200UL] = 0.0;
    out->mOBS_ACT.mX[5201UL] = t3626->mX.mX[1378UL];
    out->mOBS_ACT.mX[5202UL] = t3626->mX.mX[1380UL] * 1000.0;
    out->mOBS_ACT.mX[5203UL] = t3626->mX.mX[1379UL];
    out->mOBS_ACT.mX[5204UL] = zc_int134;
    out->mOBS_ACT.mX[5205UL] = 1.0;
    out->mOBS_ACT.mX[5206UL] = t3626->mX.mX[1377UL];
    out->mOBS_ACT.mX[5207UL] = 1.0;
    out->mOBS_ACT.mX[5208UL] = t3626->mX.mX[544UL];
    out->mOBS_ACT.mX[5209UL] = t3626->mX.mX[546UL];
    out->mOBS_ACT.mX[5210UL] = 1.0;
    out->mOBS_ACT.mX[5211UL] = t3626->mX.mX[1377UL];
    out->mOBS_ACT.mX[5212UL] = t3626->mX.mX[1378UL];
    out->mOBS_ACT.mX[5213UL] = 1.0;
    out->mOBS_ACT.mX[5214UL] = 1.0;
    out->mOBS_ACT.mX[5215UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5216UL] = intrm_sf_mf_102;
    out->mOBS_ACT.mX[5217UL] = t3626->mX.mX[546UL];
    out->mOBS_ACT.mX[5218UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5219UL] = t3626->mX.mX[1379UL];
    out->mOBS_ACT.mX[5220UL] = t3626->mX.mX[1379UL];
    out->mOBS_ACT.mX[5221UL] = t3626->mX.mX[544UL];
    out->mOBS_ACT.mX[5222UL] = BatteryPack_v2_ModuleAssembly4_Module_1_1_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[5223UL] = t3626->mX.mX[544UL];
    out->mOBS_ACT.mX[5224UL] = t3626->mX.mX[544UL];
    out->mOBS_ACT.mX[5225UL] = t3626->mX.mX[1380UL] * 1000.0;
    out->mOBS_ACT.mX[5226UL] = zc_int134;
    out->mOBS_ACT.mX[5227UL] = t3626->mX.mX[544UL];
    out->mOBS_ACT.mX[5228UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5229UL] = BatteryPack_v2_ModuleAssembly4_Module_1_1_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[5230UL] = BatteryPack_v2_ModuleAssembly4_Module_1_1_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[5231UL] = intrm_sf_mf_102;
    out->mOBS_ACT.mX[5232UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5233UL] = 0.0;
    out->mOBS_ACT.mX[5234UL] = intrm_sf_mf_102;
    out->mOBS_ACT.mX[5235UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5236UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5237UL] = 0.0;
    out->mOBS_ACT.mX[5238UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5239UL] = t3626->mX.mX[544UL];
    out->mOBS_ACT.mX[5240UL] = BatteryPack_v2_ModuleAssembly4_Module_1_1_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[5241UL] = 0.0;
    out->mOBS_ACT.mX[5242UL] = t3626->mX.mX[544UL];
    out->mOBS_ACT.mX[5243UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5244UL] = intrm_sf_mf_102;
    out->mOBS_ACT.mX[5245UL] = t3626->mX.mX[546UL];
    out->mOBS_ACT.mX[5246UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5247UL] = t3626->mX.mX[1379UL];
    out->mOBS_ACT.mX[5248UL] = t3626->mX.mX[1379UL];
    out->mOBS_ACT.mX[5249UL] = t3626->mX.mX[544UL];
    out->mOBS_ACT.mX[5250UL] = zc_int134;
    out->mOBS_ACT.mX[5251UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3 - intrm_sf_mf_102;
    out->mOBS_ACT.mX[5252UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5253UL] = zc_int384;
    out->mOBS_ACT.mX[5254UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5255UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5256UL] = t3626->mX.mX[552UL];
    out->mOBS_ACT.mX[5257UL] = t3626->mX.mX[552UL];
    out->mOBS_ACT.mX[5258UL] = t3626->mX.mX[552UL];
    out->mOBS_ACT.mX[5259UL] = t3626->mX.mX[552UL];
    out->mOBS_ACT.mX[5260UL] = t3626->mX.mX[553UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[5261UL] = t3626->mX.mX[552UL];
    out->mOBS_ACT.mX[5262UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5263UL] = zc_int382;
    out->mOBS_ACT.mX[5264UL] = t3626->mX.mX[554UL];
    out->mOBS_ACT.mX[5265UL] = t3626->mX.mX[554UL];
    out->mOBS_ACT.mX[5266UL] = t3626->mX.mX[1383UL];
    out->mOBS_ACT.mX[5267UL] = 1.0;
    out->mOBS_ACT.mX[5268UL] = zc_int383;
    for (t2773 = 555UL; t2773 - 555UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4714UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5274UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[5279UL] = 0.0;
    out->mOBS_ACT.mX[5280UL] = t3626->mX.mX[1382UL];
    out->mOBS_ACT.mX[5281UL] = t3626->mX.mX[1384UL] * 1000.0;
    out->mOBS_ACT.mX[5282UL] = t3626->mX.mX[1383UL];
    out->mOBS_ACT.mX[5283UL] = zc_int202;
    out->mOBS_ACT.mX[5284UL] = 1.0;
    out->mOBS_ACT.mX[5285UL] = t3626->mX.mX[1381UL];
    out->mOBS_ACT.mX[5286UL] = 1.0;
    out->mOBS_ACT.mX[5287UL] = t3626->mX.mX[552UL];
    out->mOBS_ACT.mX[5288UL] = t3626->mX.mX[554UL];
    out->mOBS_ACT.mX[5289UL] = 1.0;
    out->mOBS_ACT.mX[5290UL] = t3626->mX.mX[1381UL];
    out->mOBS_ACT.mX[5291UL] = t3626->mX.mX[1382UL];
    out->mOBS_ACT.mX[5292UL] = 1.0;
    out->mOBS_ACT.mX[5293UL] = 1.0;
    out->mOBS_ACT.mX[5294UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5295UL] = zc_int382;
    out->mOBS_ACT.mX[5296UL] = t3626->mX.mX[554UL];
    out->mOBS_ACT.mX[5297UL] = zc_int383;
    out->mOBS_ACT.mX[5298UL] = t3626->mX.mX[1383UL];
    out->mOBS_ACT.mX[5299UL] = t3626->mX.mX[1383UL];
    out->mOBS_ACT.mX[5300UL] = t3626->mX.mX[552UL];
    out->mOBS_ACT.mX[5301UL] = BatteryPack_v2_ModuleAssembly5_Module02_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[5302UL] = t3626->mX.mX[552UL];
    out->mOBS_ACT.mX[5303UL] = t3626->mX.mX[552UL];
    out->mOBS_ACT.mX[5304UL] = t3626->mX.mX[1384UL] * 1000.0;
    out->mOBS_ACT.mX[5305UL] = zc_int202;
    out->mOBS_ACT.mX[5306UL] = t3626->mX.mX[552UL];
    out->mOBS_ACT.mX[5307UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5308UL] = BatteryPack_v2_ModuleAssembly5_Module02_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[5309UL] = BatteryPack_v2_ModuleAssembly5_Module02_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[5310UL] = zc_int382;
    out->mOBS_ACT.mX[5311UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5312UL] = 0.0;
    out->mOBS_ACT.mX[5313UL] = zc_int382;
    out->mOBS_ACT.mX[5314UL] = zc_int383;
    out->mOBS_ACT.mX[5315UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5316UL] = 0.0;
    out->mOBS_ACT.mX[5317UL] = zc_int383;
    out->mOBS_ACT.mX[5318UL] = t3626->mX.mX[552UL];
    out->mOBS_ACT.mX[5319UL] = BatteryPack_v2_ModuleAssembly5_Module02_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[5320UL] = 0.0;
    out->mOBS_ACT.mX[5321UL] = t3626->mX.mX[552UL];
    out->mOBS_ACT.mX[5322UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5323UL] = zc_int382;
    out->mOBS_ACT.mX[5324UL] = t3626->mX.mX[554UL];
    out->mOBS_ACT.mX[5325UL] = zc_int383;
    out->mOBS_ACT.mX[5326UL] = t3626->mX.mX[1383UL];
    out->mOBS_ACT.mX[5327UL] = t3626->mX.mX[1383UL];
    out->mOBS_ACT.mX[5328UL] = t3626->mX.mX[552UL];
    out->mOBS_ACT.mX[5329UL] = zc_int202;
    out->mOBS_ACT.mX[5330UL] = zc_int383 - zc_int382;
    out->mOBS_ACT.mX[5331UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5332UL] = t3626->mX.mX[560UL];
    out->mOBS_ACT.mX[5333UL] = t3626->mX.mX[560UL];
    out->mOBS_ACT.mX[5334UL] = t3626->mX.mX[560UL];
    out->mOBS_ACT.mX[5335UL] = t3626->mX.mX[560UL];
    out->mOBS_ACT.mX[5336UL] = t3626->mX.mX[561UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[5337UL] = t3626->mX.mX[560UL];
    out->mOBS_ACT.mX[5338UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5339UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5340UL] = t3626->mX.mX[562UL];
    out->mOBS_ACT.mX[5341UL] = t3626->mX.mX[562UL];
    out->mOBS_ACT.mX[5342UL] = t3626->mX.mX[1387UL];
    out->mOBS_ACT.mX[5343UL] = 1.0;
    out->mOBS_ACT.mX[5344UL] = zc_int382;
    for (t2773 = 563UL; t2773 - 563UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4782UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5350UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[5355UL] = 0.0;
    out->mOBS_ACT.mX[5356UL] = t3626->mX.mX[1386UL];
    out->mOBS_ACT.mX[5357UL] = t3626->mX.mX[1388UL] * 1000.0;
    out->mOBS_ACT.mX[5358UL] = t3626->mX.mX[1387UL];
    out->mOBS_ACT.mX[5359UL] = zc_int207;
    out->mOBS_ACT.mX[5360UL] = 1.0;
    out->mOBS_ACT.mX[5361UL] = t3626->mX.mX[1385UL];
    out->mOBS_ACT.mX[5362UL] = 1.0;
    out->mOBS_ACT.mX[5363UL] = t3626->mX.mX[560UL];
    out->mOBS_ACT.mX[5364UL] = t3626->mX.mX[562UL];
    out->mOBS_ACT.mX[5365UL] = 1.0;
    out->mOBS_ACT.mX[5366UL] = t3626->mX.mX[1385UL];
    out->mOBS_ACT.mX[5367UL] = t3626->mX.mX[1386UL];
    out->mOBS_ACT.mX[5368UL] = 1.0;
    out->mOBS_ACT.mX[5369UL] = 1.0;
    out->mOBS_ACT.mX[5370UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5371UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5372UL] = t3626->mX.mX[562UL];
    out->mOBS_ACT.mX[5373UL] = zc_int382;
    out->mOBS_ACT.mX[5374UL] = t3626->mX.mX[1387UL];
    out->mOBS_ACT.mX[5375UL] = t3626->mX.mX[1387UL];
    out->mOBS_ACT.mX[5376UL] = t3626->mX.mX[560UL];
    out->mOBS_ACT.mX[5377UL] = BatteryPack_v2_ModuleAssembly5_Module03_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[5378UL] = t3626->mX.mX[560UL];
    out->mOBS_ACT.mX[5379UL] = t3626->mX.mX[560UL];
    out->mOBS_ACT.mX[5380UL] = t3626->mX.mX[1388UL] * 1000.0;
    out->mOBS_ACT.mX[5381UL] = zc_int207;
    out->mOBS_ACT.mX[5382UL] = t3626->mX.mX[560UL];
    out->mOBS_ACT.mX[5383UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5384UL] = BatteryPack_v2_ModuleAssembly5_Module03_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[5385UL] = BatteryPack_v2_ModuleAssembly5_Module03_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[5386UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5387UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5388UL] = 0.0;
    out->mOBS_ACT.mX[5389UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5390UL] = zc_int382;
    out->mOBS_ACT.mX[5391UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5392UL] = 0.0;
    out->mOBS_ACT.mX[5393UL] = zc_int382;
    out->mOBS_ACT.mX[5394UL] = t3626->mX.mX[560UL];
    out->mOBS_ACT.mX[5395UL] = BatteryPack_v2_ModuleAssembly5_Module03_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[5396UL] = 0.0;
    out->mOBS_ACT.mX[5397UL] = t3626->mX.mX[560UL];
    out->mOBS_ACT.mX[5398UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5399UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5400UL] = t3626->mX.mX[562UL];
    out->mOBS_ACT.mX[5401UL] = zc_int382;
    out->mOBS_ACT.mX[5402UL] = t3626->mX.mX[1387UL];
    out->mOBS_ACT.mX[5403UL] = t3626->mX.mX[1387UL];
    out->mOBS_ACT.mX[5404UL] = t3626->mX.mX[560UL];
    out->mOBS_ACT.mX[5405UL] = zc_int207;
    out->mOBS_ACT.mX[5406UL] = zc_int382 - BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5407UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5408UL] = t3626->mX.mX[568UL];
    out->mOBS_ACT.mX[5409UL] = t3626->mX.mX[568UL];
    out->mOBS_ACT.mX[5410UL] = t3626->mX.mX[568UL];
    out->mOBS_ACT.mX[5411UL] = t3626->mX.mX[568UL];
    out->mOBS_ACT.mX[5412UL] = t3626->mX.mX[569UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[5413UL] = t3626->mX.mX[568UL];
    out->mOBS_ACT.mX[5414UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5415UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5416UL] = t3626->mX.mX[570UL];
    out->mOBS_ACT.mX[5417UL] = t3626->mX.mX[570UL];
    out->mOBS_ACT.mX[5418UL] = t3626->mX.mX[1391UL];
    out->mOBS_ACT.mX[5419UL] = 1.0;
    out->mOBS_ACT.mX[5420UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    for (t2773 = 571UL; t2773 - 571UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4850UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5426UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[5431UL] = 0.0;
    out->mOBS_ACT.mX[5432UL] = t3626->mX.mX[1390UL];
    out->mOBS_ACT.mX[5433UL] = t3626->mX.mX[1392UL] * 1000.0;
    out->mOBS_ACT.mX[5434UL] = t3626->mX.mX[1391UL];
    out->mOBS_ACT.mX[5435UL] = zc_int212;
    out->mOBS_ACT.mX[5436UL] = 1.0;
    out->mOBS_ACT.mX[5437UL] = t3626->mX.mX[1389UL];
    out->mOBS_ACT.mX[5438UL] = 1.0;
    out->mOBS_ACT.mX[5439UL] = t3626->mX.mX[568UL];
    out->mOBS_ACT.mX[5440UL] = t3626->mX.mX[570UL];
    out->mOBS_ACT.mX[5441UL] = 1.0;
    out->mOBS_ACT.mX[5442UL] = t3626->mX.mX[1389UL];
    out->mOBS_ACT.mX[5443UL] = t3626->mX.mX[1390UL];
    out->mOBS_ACT.mX[5444UL] = 1.0;
    out->mOBS_ACT.mX[5445UL] = 1.0;
    out->mOBS_ACT.mX[5446UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5447UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5448UL] = t3626->mX.mX[570UL];
    out->mOBS_ACT.mX[5449UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5450UL] = t3626->mX.mX[1391UL];
    out->mOBS_ACT.mX[5451UL] = t3626->mX.mX[1391UL];
    out->mOBS_ACT.mX[5452UL] = t3626->mX.mX[568UL];
    out->mOBS_ACT.mX[5453UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[5454UL] = t3626->mX.mX[568UL];
    out->mOBS_ACT.mX[5455UL] = t3626->mX.mX[568UL];
    out->mOBS_ACT.mX[5456UL] = t3626->mX.mX[1392UL] * 1000.0;
    out->mOBS_ACT.mX[5457UL] = zc_int212;
    out->mOBS_ACT.mX[5458UL] = t3626->mX.mX[568UL];
    out->mOBS_ACT.mX[5459UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5460UL] = BatteryPack_v2_ModuleAssembly5_Module04_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[5461UL] = BatteryPack_v2_ModuleAssembly5_Module04_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[5462UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5463UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5464UL] = 0.0;
    out->mOBS_ACT.mX[5465UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5466UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5467UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5468UL] = 0.0;
    out->mOBS_ACT.mX[5469UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5470UL] = t3626->mX.mX[568UL];
    out->mOBS_ACT.mX[5471UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[5472UL] = 0.0;
    out->mOBS_ACT.mX[5473UL] = t3626->mX.mX[568UL];
    out->mOBS_ACT.mX[5474UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5475UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5476UL] = t3626->mX.mX[570UL];
    out->mOBS_ACT.mX[5477UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5478UL] = t3626->mX.mX[1391UL];
    out->mOBS_ACT.mX[5479UL] = t3626->mX.mX[1391UL];
    out->mOBS_ACT.mX[5480UL] = t3626->mX.mX[568UL];
    out->mOBS_ACT.mX[5481UL] = zc_int212;
    out->mOBS_ACT.mX[5482UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3 - BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5483UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5484UL] = t3626->mX.mX[576UL];
    out->mOBS_ACT.mX[5485UL] = t3626->mX.mX[576UL];
    out->mOBS_ACT.mX[5486UL] = t3626->mX.mX[576UL];
    out->mOBS_ACT.mX[5487UL] = t3626->mX.mX[576UL];
    out->mOBS_ACT.mX[5488UL] = t3626->mX.mX[577UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[5489UL] = t3626->mX.mX[576UL];
    out->mOBS_ACT.mX[5490UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5491UL] = intrm_sf_mf_89;
    out->mOBS_ACT.mX[5492UL] = t3626->mX.mX[578UL];
    out->mOBS_ACT.mX[5493UL] = t3626->mX.mX[578UL];
    out->mOBS_ACT.mX[5494UL] = t3626->mX.mX[1395UL];
    out->mOBS_ACT.mX[5495UL] = 1.0;
    out->mOBS_ACT.mX[5496UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    for (t2773 = 579UL; t2773 - 579UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4918UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5502UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[5507UL] = 0.0;
    out->mOBS_ACT.mX[5508UL] = t3626->mX.mX[1394UL];
    out->mOBS_ACT.mX[5509UL] = t3626->mX.mX[1396UL] * 1000.0;
    out->mOBS_ACT.mX[5510UL] = t3626->mX.mX[1395UL];
    out->mOBS_ACT.mX[5511UL] = zc_int211;
    out->mOBS_ACT.mX[5512UL] = 1.0;
    out->mOBS_ACT.mX[5513UL] = t3626->mX.mX[1393UL];
    out->mOBS_ACT.mX[5514UL] = 1.0;
    out->mOBS_ACT.mX[5515UL] = t3626->mX.mX[576UL];
    out->mOBS_ACT.mX[5516UL] = t3626->mX.mX[578UL];
    out->mOBS_ACT.mX[5517UL] = 1.0;
    out->mOBS_ACT.mX[5518UL] = t3626->mX.mX[1393UL];
    out->mOBS_ACT.mX[5519UL] = t3626->mX.mX[1394UL];
    out->mOBS_ACT.mX[5520UL] = 1.0;
    out->mOBS_ACT.mX[5521UL] = 1.0;
    out->mOBS_ACT.mX[5522UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5523UL] = intrm_sf_mf_89;
    out->mOBS_ACT.mX[5524UL] = t3626->mX.mX[578UL];
    out->mOBS_ACT.mX[5525UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5526UL] = t3626->mX.mX[1395UL];
    out->mOBS_ACT.mX[5527UL] = t3626->mX.mX[1395UL];
    out->mOBS_ACT.mX[5528UL] = t3626->mX.mX[576UL];
    out->mOBS_ACT.mX[5529UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[5530UL] = t3626->mX.mX[576UL];
    out->mOBS_ACT.mX[5531UL] = t3626->mX.mX[576UL];
    out->mOBS_ACT.mX[5532UL] = t3626->mX.mX[1396UL] * 1000.0;
    out->mOBS_ACT.mX[5533UL] = zc_int211;
    out->mOBS_ACT.mX[5534UL] = t3626->mX.mX[576UL];
    out->mOBS_ACT.mX[5535UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5536UL] = BatteryPack_v2_ModuleAssembly5_Module05_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[5537UL] = BatteryPack_v2_ModuleAssembly5_Module05_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[5538UL] = intrm_sf_mf_89;
    out->mOBS_ACT.mX[5539UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5540UL] = 0.0;
    out->mOBS_ACT.mX[5541UL] = intrm_sf_mf_89;
    out->mOBS_ACT.mX[5542UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5543UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5544UL] = 0.0;
    out->mOBS_ACT.mX[5545UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5546UL] = t3626->mX.mX[576UL];
    out->mOBS_ACT.mX[5547UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[5548UL] = 0.0;
    out->mOBS_ACT.mX[5549UL] = t3626->mX.mX[576UL];
    out->mOBS_ACT.mX[5550UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5551UL] = intrm_sf_mf_89;
    out->mOBS_ACT.mX[5552UL] = t3626->mX.mX[578UL];
    out->mOBS_ACT.mX[5553UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5554UL] = t3626->mX.mX[1395UL];
    out->mOBS_ACT.mX[5555UL] = t3626->mX.mX[1395UL];
    out->mOBS_ACT.mX[5556UL] = t3626->mX.mX[576UL];
    out->mOBS_ACT.mX[5557UL] = zc_int211;
    out->mOBS_ACT.mX[5558UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3 - intrm_sf_mf_89;
    out->mOBS_ACT.mX[5559UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5560UL] = t3626->mX.mX[584UL];
    out->mOBS_ACT.mX[5561UL] = t3626->mX.mX[584UL];
    out->mOBS_ACT.mX[5562UL] = t3626->mX.mX[584UL];
    out->mOBS_ACT.mX[5563UL] = t3626->mX.mX[584UL];
    out->mOBS_ACT.mX[5564UL] = t3626->mX.mX[585UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[5565UL] = t3626->mX.mX[584UL];
    out->mOBS_ACT.mX[5566UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5567UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5568UL] = t3626->mX.mX[586UL];
    out->mOBS_ACT.mX[5569UL] = t3626->mX.mX[586UL];
    out->mOBS_ACT.mX[5570UL] = t3626->mX.mX[1399UL];
    out->mOBS_ACT.mX[5571UL] = 1.0;
    out->mOBS_ACT.mX[5572UL] = intrm_sf_mf_89;
    for (t2773 = 587UL; t2773 - 587UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 4986UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5578UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[5583UL] = 0.0;
    out->mOBS_ACT.mX[5584UL] = t3626->mX.mX[1398UL];
    out->mOBS_ACT.mX[5585UL] = t3626->mX.mX[1400UL] * 1000.0;
    out->mOBS_ACT.mX[5586UL] = t3626->mX.mX[1399UL];
    out->mOBS_ACT.mX[5587UL] = zc_int218;
    out->mOBS_ACT.mX[5588UL] = 1.0;
    out->mOBS_ACT.mX[5589UL] = t3626->mX.mX[1397UL];
    out->mOBS_ACT.mX[5590UL] = 1.0;
    out->mOBS_ACT.mX[5591UL] = t3626->mX.mX[584UL];
    out->mOBS_ACT.mX[5592UL] = t3626->mX.mX[586UL];
    out->mOBS_ACT.mX[5593UL] = 1.0;
    out->mOBS_ACT.mX[5594UL] = t3626->mX.mX[1397UL];
    out->mOBS_ACT.mX[5595UL] = t3626->mX.mX[1398UL];
    out->mOBS_ACT.mX[5596UL] = 1.0;
    out->mOBS_ACT.mX[5597UL] = 1.0;
    out->mOBS_ACT.mX[5598UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5599UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5600UL] = t3626->mX.mX[586UL];
    out->mOBS_ACT.mX[5601UL] = intrm_sf_mf_89;
    out->mOBS_ACT.mX[5602UL] = t3626->mX.mX[1399UL];
    out->mOBS_ACT.mX[5603UL] = t3626->mX.mX[1399UL];
    out->mOBS_ACT.mX[5604UL] = t3626->mX.mX[584UL];
    out->mOBS_ACT.mX[5605UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[5606UL] = t3626->mX.mX[584UL];
    out->mOBS_ACT.mX[5607UL] = t3626->mX.mX[584UL];
    out->mOBS_ACT.mX[5608UL] = t3626->mX.mX[1400UL] * 1000.0;
    out->mOBS_ACT.mX[5609UL] = zc_int218;
    out->mOBS_ACT.mX[5610UL] = t3626->mX.mX[584UL];
    out->mOBS_ACT.mX[5611UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5612UL] = BatteryPack_v2_ModuleAssembly5_Module06_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[5613UL] = BatteryPack_v2_ModuleAssembly5_Module06_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[5614UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5615UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5616UL] = 0.0;
    out->mOBS_ACT.mX[5617UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5618UL] = intrm_sf_mf_89;
    out->mOBS_ACT.mX[5619UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5620UL] = 0.0;
    out->mOBS_ACT.mX[5621UL] = intrm_sf_mf_89;
    out->mOBS_ACT.mX[5622UL] = t3626->mX.mX[584UL];
    out->mOBS_ACT.mX[5623UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[5624UL] = 0.0;
    out->mOBS_ACT.mX[5625UL] = t3626->mX.mX[584UL];
    out->mOBS_ACT.mX[5626UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5627UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5628UL] = t3626->mX.mX[586UL];
    out->mOBS_ACT.mX[5629UL] = intrm_sf_mf_89;
    out->mOBS_ACT.mX[5630UL] = t3626->mX.mX[1399UL];
    out->mOBS_ACT.mX[5631UL] = t3626->mX.mX[1399UL];
    out->mOBS_ACT.mX[5632UL] = t3626->mX.mX[584UL];
    out->mOBS_ACT.mX[5633UL] = zc_int218;
    out->mOBS_ACT.mX[5634UL] = intrm_sf_mf_89 - BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5635UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5636UL] = t3626->mX.mX[592UL];
    out->mOBS_ACT.mX[5637UL] = t3626->mX.mX[592UL];
    out->mOBS_ACT.mX[5638UL] = t3626->mX.mX[592UL];
    out->mOBS_ACT.mX[5639UL] = t3626->mX.mX[592UL];
    out->mOBS_ACT.mX[5640UL] = t3626->mX.mX[593UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[5641UL] = t3626->mX.mX[592UL];
    out->mOBS_ACT.mX[5642UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5643UL] = zc_int377;
    out->mOBS_ACT.mX[5644UL] = t3626->mX.mX[594UL];
    out->mOBS_ACT.mX[5645UL] = t3626->mX.mX[594UL];
    out->mOBS_ACT.mX[5646UL] = t3626->mX.mX[1403UL];
    out->mOBS_ACT.mX[5647UL] = 1.0;
    out->mOBS_ACT.mX[5648UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    for (t2773 = 595UL; t2773 - 595UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5054UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5654UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[5659UL] = 0.0;
    out->mOBS_ACT.mX[5660UL] = t3626->mX.mX[1402UL];
    out->mOBS_ACT.mX[5661UL] = t3626->mX.mX[1404UL] * 1000.0;
    out->mOBS_ACT.mX[5662UL] = t3626->mX.mX[1403UL];
    out->mOBS_ACT.mX[5663UL] = zc_int221;
    out->mOBS_ACT.mX[5664UL] = 1.0;
    out->mOBS_ACT.mX[5665UL] = t3626->mX.mX[1401UL];
    out->mOBS_ACT.mX[5666UL] = 1.0;
    out->mOBS_ACT.mX[5667UL] = t3626->mX.mX[592UL];
    out->mOBS_ACT.mX[5668UL] = t3626->mX.mX[594UL];
    out->mOBS_ACT.mX[5669UL] = 1.0;
    out->mOBS_ACT.mX[5670UL] = t3626->mX.mX[1401UL];
    out->mOBS_ACT.mX[5671UL] = t3626->mX.mX[1402UL];
    out->mOBS_ACT.mX[5672UL] = 1.0;
    out->mOBS_ACT.mX[5673UL] = 1.0;
    out->mOBS_ACT.mX[5674UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5675UL] = zc_int377;
    out->mOBS_ACT.mX[5676UL] = t3626->mX.mX[594UL];
    out->mOBS_ACT.mX[5677UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5678UL] = t3626->mX.mX[1403UL];
    out->mOBS_ACT.mX[5679UL] = t3626->mX.mX[1403UL];
    out->mOBS_ACT.mX[5680UL] = t3626->mX.mX[592UL];
    out->mOBS_ACT.mX[5681UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[5682UL] = t3626->mX.mX[592UL];
    out->mOBS_ACT.mX[5683UL] = t3626->mX.mX[592UL];
    out->mOBS_ACT.mX[5684UL] = t3626->mX.mX[1404UL] * 1000.0;
    out->mOBS_ACT.mX[5685UL] = zc_int221;
    out->mOBS_ACT.mX[5686UL] = t3626->mX.mX[592UL];
    out->mOBS_ACT.mX[5687UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5688UL] = BatteryPack_v2_ModuleAssembly5_Module07_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[5689UL] = BatteryPack_v2_ModuleAssembly5_Module07_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[5690UL] = zc_int377;
    out->mOBS_ACT.mX[5691UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5692UL] = 0.0;
    out->mOBS_ACT.mX[5693UL] = zc_int377;
    out->mOBS_ACT.mX[5694UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5695UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5696UL] = 0.0;
    out->mOBS_ACT.mX[5697UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5698UL] = t3626->mX.mX[592UL];
    out->mOBS_ACT.mX[5699UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[5700UL] = 0.0;
    out->mOBS_ACT.mX[5701UL] = t3626->mX.mX[592UL];
    out->mOBS_ACT.mX[5702UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5703UL] = zc_int377;
    out->mOBS_ACT.mX[5704UL] = t3626->mX.mX[594UL];
    out->mOBS_ACT.mX[5705UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5706UL] = t3626->mX.mX[1403UL];
    out->mOBS_ACT.mX[5707UL] = t3626->mX.mX[1403UL];
    out->mOBS_ACT.mX[5708UL] = t3626->mX.mX[592UL];
    out->mOBS_ACT.mX[5709UL] = zc_int221;
    out->mOBS_ACT.mX[5710UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3 - zc_int377;
    out->mOBS_ACT.mX[5711UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5712UL] = t3626->mX.mX[600UL];
    out->mOBS_ACT.mX[5713UL] = t3626->mX.mX[600UL];
    out->mOBS_ACT.mX[5714UL] = t3626->mX.mX[600UL];
    out->mOBS_ACT.mX[5715UL] = t3626->mX.mX[600UL];
    out->mOBS_ACT.mX[5716UL] = t3626->mX.mX[601UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[5717UL] = t3626->mX.mX[600UL];
    out->mOBS_ACT.mX[5718UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5719UL] = zc_int376;
    out->mOBS_ACT.mX[5720UL] = t3626->mX.mX[602UL];
    out->mOBS_ACT.mX[5721UL] = t3626->mX.mX[602UL];
    out->mOBS_ACT.mX[5722UL] = t3626->mX.mX[1407UL];
    out->mOBS_ACT.mX[5723UL] = 1.0;
    out->mOBS_ACT.mX[5724UL] = zc_int377;
    for (t2773 = 603UL; t2773 - 603UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5122UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5730UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[5735UL] = 0.0;
    out->mOBS_ACT.mX[5736UL] = t3626->mX.mX[1406UL];
    out->mOBS_ACT.mX[5737UL] = t3626->mX.mX[1408UL] * 1000.0;
    out->mOBS_ACT.mX[5738UL] = t3626->mX.mX[1407UL];
    out->mOBS_ACT.mX[5739UL] = intrm_sf_mf_52;
    out->mOBS_ACT.mX[5740UL] = 1.0;
    out->mOBS_ACT.mX[5741UL] = t3626->mX.mX[1405UL];
    out->mOBS_ACT.mX[5742UL] = 1.0;
    out->mOBS_ACT.mX[5743UL] = t3626->mX.mX[600UL];
    out->mOBS_ACT.mX[5744UL] = t3626->mX.mX[602UL];
    out->mOBS_ACT.mX[5745UL] = 1.0;
    out->mOBS_ACT.mX[5746UL] = t3626->mX.mX[1405UL];
    out->mOBS_ACT.mX[5747UL] = t3626->mX.mX[1406UL];
    out->mOBS_ACT.mX[5748UL] = 1.0;
    out->mOBS_ACT.mX[5749UL] = 1.0;
    out->mOBS_ACT.mX[5750UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5751UL] = zc_int376;
    out->mOBS_ACT.mX[5752UL] = t3626->mX.mX[602UL];
    out->mOBS_ACT.mX[5753UL] = zc_int377;
    out->mOBS_ACT.mX[5754UL] = t3626->mX.mX[1407UL];
    out->mOBS_ACT.mX[5755UL] = t3626->mX.mX[1407UL];
    out->mOBS_ACT.mX[5756UL] = t3626->mX.mX[600UL];
    out->mOBS_ACT.mX[5757UL] = BatteryPack_v2_ModuleAssembly5_Module08_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[5758UL] = t3626->mX.mX[600UL];
    out->mOBS_ACT.mX[5759UL] = t3626->mX.mX[600UL];
    out->mOBS_ACT.mX[5760UL] = t3626->mX.mX[1408UL] * 1000.0;
    out->mOBS_ACT.mX[5761UL] = intrm_sf_mf_52;
    out->mOBS_ACT.mX[5762UL] = t3626->mX.mX[600UL];
    out->mOBS_ACT.mX[5763UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5764UL] = BatteryPack_v2_ModuleAssembly5_Module08_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[5765UL] = BatteryPack_v2_ModuleAssembly5_Module08_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[5766UL] = zc_int376;
    out->mOBS_ACT.mX[5767UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5768UL] = 0.0;
    out->mOBS_ACT.mX[5769UL] = zc_int376;
    out->mOBS_ACT.mX[5770UL] = zc_int377;
    out->mOBS_ACT.mX[5771UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5772UL] = 0.0;
    out->mOBS_ACT.mX[5773UL] = zc_int377;
    out->mOBS_ACT.mX[5774UL] = t3626->mX.mX[600UL];
    out->mOBS_ACT.mX[5775UL] = BatteryPack_v2_ModuleAssembly5_Module08_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[5776UL] = 0.0;
    out->mOBS_ACT.mX[5777UL] = t3626->mX.mX[600UL];
    out->mOBS_ACT.mX[5778UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5779UL] = zc_int376;
    out->mOBS_ACT.mX[5780UL] = t3626->mX.mX[602UL];
    out->mOBS_ACT.mX[5781UL] = zc_int377;
    out->mOBS_ACT.mX[5782UL] = t3626->mX.mX[1407UL];
    out->mOBS_ACT.mX[5783UL] = t3626->mX.mX[1407UL];
    out->mOBS_ACT.mX[5784UL] = t3626->mX.mX[600UL];
    out->mOBS_ACT.mX[5785UL] = intrm_sf_mf_52;
    out->mOBS_ACT.mX[5786UL] = zc_int377 - zc_int376;
    out->mOBS_ACT.mX[5787UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5788UL] = t3626->mX.mX[608UL];
    out->mOBS_ACT.mX[5789UL] = t3626->mX.mX[608UL];
    out->mOBS_ACT.mX[5790UL] = t3626->mX.mX[608UL];
    out->mOBS_ACT.mX[5791UL] = t3626->mX.mX[608UL];
    out->mOBS_ACT.mX[5792UL] = t3626->mX.mX[609UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[5793UL] = t3626->mX.mX[608UL];
    out->mOBS_ACT.mX[5794UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5795UL] = zc_int375;
    out->mOBS_ACT.mX[5796UL] = t3626->mX.mX[610UL];
    out->mOBS_ACT.mX[5797UL] = t3626->mX.mX[610UL];
    out->mOBS_ACT.mX[5798UL] = t3626->mX.mX[1411UL];
    out->mOBS_ACT.mX[5799UL] = 1.0;
    out->mOBS_ACT.mX[5800UL] = zc_int376;
    for (t2773 = 611UL; t2773 - 611UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5190UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5806UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[5811UL] = 0.0;
    out->mOBS_ACT.mX[5812UL] = t3626->mX.mX[1410UL];
    out->mOBS_ACT.mX[5813UL] = t3626->mX.mX[1412UL] * 1000.0;
    out->mOBS_ACT.mX[5814UL] = t3626->mX.mX[1411UL];
    out->mOBS_ACT.mX[5815UL] = zc_int225;
    out->mOBS_ACT.mX[5816UL] = 1.0;
    out->mOBS_ACT.mX[5817UL] = t3626->mX.mX[1409UL];
    out->mOBS_ACT.mX[5818UL] = 1.0;
    out->mOBS_ACT.mX[5819UL] = t3626->mX.mX[608UL];
    out->mOBS_ACT.mX[5820UL] = t3626->mX.mX[610UL];
    out->mOBS_ACT.mX[5821UL] = 1.0;
    out->mOBS_ACT.mX[5822UL] = t3626->mX.mX[1409UL];
    out->mOBS_ACT.mX[5823UL] = t3626->mX.mX[1410UL];
    out->mOBS_ACT.mX[5824UL] = 1.0;
    out->mOBS_ACT.mX[5825UL] = 1.0;
    out->mOBS_ACT.mX[5826UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5827UL] = zc_int375;
    out->mOBS_ACT.mX[5828UL] = t3626->mX.mX[610UL];
    out->mOBS_ACT.mX[5829UL] = zc_int376;
    out->mOBS_ACT.mX[5830UL] = t3626->mX.mX[1411UL];
    out->mOBS_ACT.mX[5831UL] = t3626->mX.mX[1411UL];
    out->mOBS_ACT.mX[5832UL] = t3626->mX.mX[608UL];
    out->mOBS_ACT.mX[5833UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[5834UL] = t3626->mX.mX[608UL];
    out->mOBS_ACT.mX[5835UL] = t3626->mX.mX[608UL];
    out->mOBS_ACT.mX[5836UL] = t3626->mX.mX[1412UL] * 1000.0;
    out->mOBS_ACT.mX[5837UL] = zc_int225;
    out->mOBS_ACT.mX[5838UL] = t3626->mX.mX[608UL];
    out->mOBS_ACT.mX[5839UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5840UL] = BatteryPack_v2_ModuleAssembly5_Module09_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[5841UL] = BatteryPack_v2_ModuleAssembly5_Module09_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[5842UL] = zc_int375;
    out->mOBS_ACT.mX[5843UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5844UL] = 0.0;
    out->mOBS_ACT.mX[5845UL] = zc_int375;
    out->mOBS_ACT.mX[5846UL] = zc_int376;
    out->mOBS_ACT.mX[5847UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5848UL] = 0.0;
    out->mOBS_ACT.mX[5849UL] = zc_int376;
    out->mOBS_ACT.mX[5850UL] = t3626->mX.mX[608UL];
    out->mOBS_ACT.mX[5851UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[5852UL] = 0.0;
    out->mOBS_ACT.mX[5853UL] = t3626->mX.mX[608UL];
    out->mOBS_ACT.mX[5854UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5855UL] = zc_int375;
    out->mOBS_ACT.mX[5856UL] = t3626->mX.mX[610UL];
    out->mOBS_ACT.mX[5857UL] = zc_int376;
    out->mOBS_ACT.mX[5858UL] = t3626->mX.mX[1411UL];
    out->mOBS_ACT.mX[5859UL] = t3626->mX.mX[1411UL];
    out->mOBS_ACT.mX[5860UL] = t3626->mX.mX[608UL];
    out->mOBS_ACT.mX[5861UL] = zc_int225;
    out->mOBS_ACT.mX[5862UL] = zc_int376 - zc_int375;
    out->mOBS_ACT.mX[5863UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5864UL] = t3626->mX.mX[616UL];
    out->mOBS_ACT.mX[5865UL] = t3626->mX.mX[616UL];
    out->mOBS_ACT.mX[5866UL] = t3626->mX.mX[616UL];
    out->mOBS_ACT.mX[5867UL] = t3626->mX.mX[616UL];
    out->mOBS_ACT.mX[5868UL] = t3626->mX.mX[617UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[5869UL] = t3626->mX.mX[616UL];
    out->mOBS_ACT.mX[5870UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5871UL] = zc_int374;
    out->mOBS_ACT.mX[5872UL] = t3626->mX.mX[618UL];
    out->mOBS_ACT.mX[5873UL] = t3626->mX.mX[618UL];
    out->mOBS_ACT.mX[5874UL] = t3626->mX.mX[1415UL];
    out->mOBS_ACT.mX[5875UL] = 1.0;
    out->mOBS_ACT.mX[5876UL] = zc_int375;
    for (t2773 = 619UL; t2773 - 619UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5258UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5882UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[5887UL] = 0.0;
    out->mOBS_ACT.mX[5888UL] = t3626->mX.mX[1414UL];
    out->mOBS_ACT.mX[5889UL] = t3626->mX.mX[1416UL] * 1000.0;
    out->mOBS_ACT.mX[5890UL] = t3626->mX.mX[1415UL];
    out->mOBS_ACT.mX[5891UL] = zc_int22;
    out->mOBS_ACT.mX[5892UL] = 1.0;
    out->mOBS_ACT.mX[5893UL] = t3626->mX.mX[1413UL];
    out->mOBS_ACT.mX[5894UL] = 1.0;
    out->mOBS_ACT.mX[5895UL] = t3626->mX.mX[616UL];
    out->mOBS_ACT.mX[5896UL] = t3626->mX.mX[618UL];
    out->mOBS_ACT.mX[5897UL] = 1.0;
    out->mOBS_ACT.mX[5898UL] = t3626->mX.mX[1413UL];
    out->mOBS_ACT.mX[5899UL] = t3626->mX.mX[1414UL];
    out->mOBS_ACT.mX[5900UL] = 1.0;
    out->mOBS_ACT.mX[5901UL] = 1.0;
    out->mOBS_ACT.mX[5902UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5903UL] = zc_int374;
    out->mOBS_ACT.mX[5904UL] = t3626->mX.mX[618UL];
    out->mOBS_ACT.mX[5905UL] = zc_int375;
    out->mOBS_ACT.mX[5906UL] = t3626->mX.mX[1415UL];
    out->mOBS_ACT.mX[5907UL] = t3626->mX.mX[1415UL];
    out->mOBS_ACT.mX[5908UL] = t3626->mX.mX[616UL];
    out->mOBS_ACT.mX[5909UL] = BatteryPack_v2_ModuleAssembly5_Module10_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[5910UL] = t3626->mX.mX[616UL];
    out->mOBS_ACT.mX[5911UL] = t3626->mX.mX[616UL];
    out->mOBS_ACT.mX[5912UL] = t3626->mX.mX[1416UL] * 1000.0;
    out->mOBS_ACT.mX[5913UL] = zc_int22;
    out->mOBS_ACT.mX[5914UL] = t3626->mX.mX[616UL];
    out->mOBS_ACT.mX[5915UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5916UL] = BatteryPack_v2_ModuleAssembly5_Module10_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[5917UL] = BatteryPack_v2_ModuleAssembly5_Module10_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[5918UL] = zc_int374;
    out->mOBS_ACT.mX[5919UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5920UL] = 0.0;
    out->mOBS_ACT.mX[5921UL] = zc_int374;
    out->mOBS_ACT.mX[5922UL] = zc_int375;
    out->mOBS_ACT.mX[5923UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5924UL] = 0.0;
    out->mOBS_ACT.mX[5925UL] = zc_int375;
    out->mOBS_ACT.mX[5926UL] = t3626->mX.mX[616UL];
    out->mOBS_ACT.mX[5927UL] = BatteryPack_v2_ModuleAssembly5_Module10_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[5928UL] = 0.0;
    out->mOBS_ACT.mX[5929UL] = t3626->mX.mX[616UL];
    out->mOBS_ACT.mX[5930UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5931UL] = zc_int374;
    out->mOBS_ACT.mX[5932UL] = t3626->mX.mX[618UL];
    out->mOBS_ACT.mX[5933UL] = zc_int375;
    out->mOBS_ACT.mX[5934UL] = t3626->mX.mX[1415UL];
    out->mOBS_ACT.mX[5935UL] = t3626->mX.mX[1415UL];
    out->mOBS_ACT.mX[5936UL] = t3626->mX.mX[616UL];
    out->mOBS_ACT.mX[5937UL] = zc_int22;
    out->mOBS_ACT.mX[5938UL] = zc_int375 - zc_int374;
    out->mOBS_ACT.mX[5939UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5940UL] = t3626->mX.mX[624UL];
    out->mOBS_ACT.mX[5941UL] = t3626->mX.mX[624UL];
    out->mOBS_ACT.mX[5942UL] = t3626->mX.mX[624UL];
    out->mOBS_ACT.mX[5943UL] = t3626->mX.mX[624UL];
    out->mOBS_ACT.mX[5944UL] = t3626->mX.mX[625UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[5945UL] = t3626->mX.mX[624UL];
    out->mOBS_ACT.mX[5946UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5947UL] = zc_int373;
    out->mOBS_ACT.mX[5948UL] = t3626->mX.mX[626UL];
    out->mOBS_ACT.mX[5949UL] = t3626->mX.mX[626UL];
    out->mOBS_ACT.mX[5950UL] = t3626->mX.mX[1419UL];
    out->mOBS_ACT.mX[5951UL] = 1.0;
    out->mOBS_ACT.mX[5952UL] = zc_int374;
    for (t2773 = 627UL; t2773 - 627UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5326UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5958UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[5963UL] = 0.0;
    out->mOBS_ACT.mX[5964UL] = t3626->mX.mX[1418UL];
    out->mOBS_ACT.mX[5965UL] = t3626->mX.mX[1420UL] * 1000.0;
    out->mOBS_ACT.mX[5966UL] = t3626->mX.mX[1419UL];
    out->mOBS_ACT.mX[5967UL] = BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5968UL] = 1.0;
    out->mOBS_ACT.mX[5969UL] = t3626->mX.mX[1417UL];
    out->mOBS_ACT.mX[5970UL] = 1.0;
    out->mOBS_ACT.mX[5971UL] = t3626->mX.mX[624UL];
    out->mOBS_ACT.mX[5972UL] = t3626->mX.mX[626UL];
    out->mOBS_ACT.mX[5973UL] = 1.0;
    out->mOBS_ACT.mX[5974UL] = t3626->mX.mX[1417UL];
    out->mOBS_ACT.mX[5975UL] = t3626->mX.mX[1418UL];
    out->mOBS_ACT.mX[5976UL] = 1.0;
    out->mOBS_ACT.mX[5977UL] = 1.0;
    out->mOBS_ACT.mX[5978UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5979UL] = zc_int373;
    out->mOBS_ACT.mX[5980UL] = t3626->mX.mX[626UL];
    out->mOBS_ACT.mX[5981UL] = zc_int374;
    out->mOBS_ACT.mX[5982UL] = t3626->mX.mX[1419UL];
    out->mOBS_ACT.mX[5983UL] = t3626->mX.mX[1419UL];
    out->mOBS_ACT.mX[5984UL] = t3626->mX.mX[624UL];
    out->mOBS_ACT.mX[5985UL] = BatteryPack_v2_ModuleAssembly5_Module11_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[5986UL] = t3626->mX.mX[624UL];
    out->mOBS_ACT.mX[5987UL] = t3626->mX.mX[624UL];
    out->mOBS_ACT.mX[5988UL] = t3626->mX.mX[1420UL] * 1000.0;
    out->mOBS_ACT.mX[5989UL] = BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[5990UL] = t3626->mX.mX[624UL];
    out->mOBS_ACT.mX[5991UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[5992UL] = BatteryPack_v2_ModuleAssembly5_Module11_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[5993UL] = BatteryPack_v2_ModuleAssembly5_Module11_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[5994UL] = zc_int373;
    out->mOBS_ACT.mX[5995UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[5996UL] = 0.0;
    out->mOBS_ACT.mX[5997UL] = zc_int373;
    out->mOBS_ACT.mX[5998UL] = zc_int374;
    out->mOBS_ACT.mX[5999UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6000UL] = 0.0;
    out->mOBS_ACT.mX[6001UL] = zc_int374;
    out->mOBS_ACT.mX[6002UL] = t3626->mX.mX[624UL];
    out->mOBS_ACT.mX[6003UL] = BatteryPack_v2_ModuleAssembly5_Module11_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[6004UL] = 0.0;
    out->mOBS_ACT.mX[6005UL] = t3626->mX.mX[624UL];
    out->mOBS_ACT.mX[6006UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6007UL] = zc_int373;
    out->mOBS_ACT.mX[6008UL] = t3626->mX.mX[626UL];
    out->mOBS_ACT.mX[6009UL] = zc_int374;
    out->mOBS_ACT.mX[6010UL] = t3626->mX.mX[1419UL];
    out->mOBS_ACT.mX[6011UL] = t3626->mX.mX[1419UL];
    out->mOBS_ACT.mX[6012UL] = t3626->mX.mX[624UL];
    out->mOBS_ACT.mX[6013UL] = BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6014UL] = zc_int374 - zc_int373;
    out->mOBS_ACT.mX[6015UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6016UL] = t3626->mX.mX[632UL];
    out->mOBS_ACT.mX[6017UL] = t3626->mX.mX[632UL];
    out->mOBS_ACT.mX[6018UL] = t3626->mX.mX[632UL];
    out->mOBS_ACT.mX[6019UL] = t3626->mX.mX[632UL];
    out->mOBS_ACT.mX[6020UL] = t3626->mX.mX[633UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[6021UL] = t3626->mX.mX[632UL];
    out->mOBS_ACT.mX[6022UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6023UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6024UL] = t3626->mX.mX[634UL];
    out->mOBS_ACT.mX[6025UL] = t3626->mX.mX[634UL];
    out->mOBS_ACT.mX[6026UL] = t3626->mX.mX[1423UL];
    out->mOBS_ACT.mX[6027UL] = 1.0;
    out->mOBS_ACT.mX[6028UL] = zc_int373;
    for (t2773 = 635UL; t2773 - 635UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5394UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6034UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[6039UL] = 0.0;
    out->mOBS_ACT.mX[6040UL] = t3626->mX.mX[1422UL];
    out->mOBS_ACT.mX[6041UL] = t3626->mX.mX[1424UL] * 1000.0;
    out->mOBS_ACT.mX[6042UL] = t3626->mX.mX[1423UL];
    out->mOBS_ACT.mX[6043UL] = zc_int236;
    out->mOBS_ACT.mX[6044UL] = 1.0;
    out->mOBS_ACT.mX[6045UL] = t3626->mX.mX[1421UL];
    out->mOBS_ACT.mX[6046UL] = 1.0;
    out->mOBS_ACT.mX[6047UL] = t3626->mX.mX[632UL];
    out->mOBS_ACT.mX[6048UL] = t3626->mX.mX[634UL];
    out->mOBS_ACT.mX[6049UL] = 1.0;
    out->mOBS_ACT.mX[6050UL] = t3626->mX.mX[1421UL];
    out->mOBS_ACT.mX[6051UL] = t3626->mX.mX[1422UL];
    out->mOBS_ACT.mX[6052UL] = 1.0;
    out->mOBS_ACT.mX[6053UL] = 1.0;
    out->mOBS_ACT.mX[6054UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6055UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6056UL] = t3626->mX.mX[634UL];
    out->mOBS_ACT.mX[6057UL] = zc_int373;
    out->mOBS_ACT.mX[6058UL] = t3626->mX.mX[1423UL];
    out->mOBS_ACT.mX[6059UL] = t3626->mX.mX[1423UL];
    out->mOBS_ACT.mX[6060UL] = t3626->mX.mX[632UL];
    out->mOBS_ACT.mX[6061UL] = BatteryPack_v2_ModuleAssembly5_Module12_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[6062UL] = t3626->mX.mX[632UL];
    out->mOBS_ACT.mX[6063UL] = t3626->mX.mX[632UL];
    out->mOBS_ACT.mX[6064UL] = t3626->mX.mX[1424UL] * 1000.0;
    out->mOBS_ACT.mX[6065UL] = zc_int236;
    out->mOBS_ACT.mX[6066UL] = t3626->mX.mX[632UL];
    out->mOBS_ACT.mX[6067UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6068UL] = BatteryPack_v2_ModuleAssembly5_Module12_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[6069UL] = BatteryPack_v2_ModuleAssembly5_Module12_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[6070UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6071UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6072UL] = 0.0;
    out->mOBS_ACT.mX[6073UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6074UL] = zc_int373;
    out->mOBS_ACT.mX[6075UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6076UL] = 0.0;
    out->mOBS_ACT.mX[6077UL] = zc_int373;
    out->mOBS_ACT.mX[6078UL] = t3626->mX.mX[632UL];
    out->mOBS_ACT.mX[6079UL] = BatteryPack_v2_ModuleAssembly5_Module12_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[6080UL] = 0.0;
    out->mOBS_ACT.mX[6081UL] = t3626->mX.mX[632UL];
    out->mOBS_ACT.mX[6082UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6083UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6084UL] = t3626->mX.mX[634UL];
    out->mOBS_ACT.mX[6085UL] = zc_int373;
    out->mOBS_ACT.mX[6086UL] = t3626->mX.mX[1423UL];
    out->mOBS_ACT.mX[6087UL] = t3626->mX.mX[1423UL];
    out->mOBS_ACT.mX[6088UL] = t3626->mX.mX[632UL];
    out->mOBS_ACT.mX[6089UL] = zc_int236;
    out->mOBS_ACT.mX[6090UL] = zc_int373 - BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6091UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6092UL] = t3626->mX.mX[640UL];
    out->mOBS_ACT.mX[6093UL] = t3626->mX.mX[640UL];
    out->mOBS_ACT.mX[6094UL] = t3626->mX.mX[640UL];
    out->mOBS_ACT.mX[6095UL] = t3626->mX.mX[640UL];
    out->mOBS_ACT.mX[6096UL] = t3626->mX.mX[641UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[6097UL] = t3626->mX.mX[640UL];
    out->mOBS_ACT.mX[6098UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6099UL] = intrm_sf_mf_85;
    out->mOBS_ACT.mX[6100UL] = t3626->mX.mX[642UL];
    out->mOBS_ACT.mX[6101UL] = t3626->mX.mX[642UL];
    out->mOBS_ACT.mX[6102UL] = t3626->mX.mX[1427UL];
    out->mOBS_ACT.mX[6103UL] = 1.0;
    out->mOBS_ACT.mX[6104UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    for (t2773 = 643UL; t2773 - 643UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5462UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6110UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[6115UL] = 0.0;
    out->mOBS_ACT.mX[6116UL] = t3626->mX.mX[1426UL];
    out->mOBS_ACT.mX[6117UL] = t3626->mX.mX[1428UL] * 1000.0;
    out->mOBS_ACT.mX[6118UL] = t3626->mX.mX[1427UL];
    out->mOBS_ACT.mX[6119UL] = BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6120UL] = 1.0;
    out->mOBS_ACT.mX[6121UL] = t3626->mX.mX[1425UL];
    out->mOBS_ACT.mX[6122UL] = 1.0;
    out->mOBS_ACT.mX[6123UL] = t3626->mX.mX[640UL];
    out->mOBS_ACT.mX[6124UL] = t3626->mX.mX[642UL];
    out->mOBS_ACT.mX[6125UL] = 1.0;
    out->mOBS_ACT.mX[6126UL] = t3626->mX.mX[1425UL];
    out->mOBS_ACT.mX[6127UL] = t3626->mX.mX[1426UL];
    out->mOBS_ACT.mX[6128UL] = 1.0;
    out->mOBS_ACT.mX[6129UL] = 1.0;
    out->mOBS_ACT.mX[6130UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6131UL] = intrm_sf_mf_85;
    out->mOBS_ACT.mX[6132UL] = t3626->mX.mX[642UL];
    out->mOBS_ACT.mX[6133UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6134UL] = t3626->mX.mX[1427UL];
    out->mOBS_ACT.mX[6135UL] = t3626->mX.mX[1427UL];
    out->mOBS_ACT.mX[6136UL] = t3626->mX.mX[640UL];
    out->mOBS_ACT.mX[6137UL] = BatteryPack_v2_ModuleAssembly5_Module13_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[6138UL] = t3626->mX.mX[640UL];
    out->mOBS_ACT.mX[6139UL] = t3626->mX.mX[640UL];
    out->mOBS_ACT.mX[6140UL] = t3626->mX.mX[1428UL] * 1000.0;
    out->mOBS_ACT.mX[6141UL] = BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6142UL] = t3626->mX.mX[640UL];
    out->mOBS_ACT.mX[6143UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6144UL] = BatteryPack_v2_ModuleAssembly5_Module13_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[6145UL] = BatteryPack_v2_ModuleAssembly5_Module13_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[6146UL] = intrm_sf_mf_85;
    out->mOBS_ACT.mX[6147UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6148UL] = 0.0;
    out->mOBS_ACT.mX[6149UL] = intrm_sf_mf_85;
    out->mOBS_ACT.mX[6150UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6151UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6152UL] = 0.0;
    out->mOBS_ACT.mX[6153UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6154UL] = t3626->mX.mX[640UL];
    out->mOBS_ACT.mX[6155UL] = BatteryPack_v2_ModuleAssembly5_Module13_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[6156UL] = 0.0;
    out->mOBS_ACT.mX[6157UL] = t3626->mX.mX[640UL];
    out->mOBS_ACT.mX[6158UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6159UL] = intrm_sf_mf_85;
    out->mOBS_ACT.mX[6160UL] = t3626->mX.mX[642UL];
    out->mOBS_ACT.mX[6161UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6162UL] = t3626->mX.mX[1427UL];
    out->mOBS_ACT.mX[6163UL] = t3626->mX.mX[1427UL];
    out->mOBS_ACT.mX[6164UL] = t3626->mX.mX[640UL];
    out->mOBS_ACT.mX[6165UL] = BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6166UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3 - intrm_sf_mf_85;
    out->mOBS_ACT.mX[6167UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6168UL] = t3626->mX.mX[648UL];
    out->mOBS_ACT.mX[6169UL] = t3626->mX.mX[648UL];
    out->mOBS_ACT.mX[6170UL] = t3626->mX.mX[648UL];
    out->mOBS_ACT.mX[6171UL] = t3626->mX.mX[648UL];
    out->mOBS_ACT.mX[6172UL] = t3626->mX.mX[649UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[6173UL] = t3626->mX.mX[648UL];
    out->mOBS_ACT.mX[6174UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6175UL] = intrm_sf_mf_13;
    out->mOBS_ACT.mX[6176UL] = t3626->mX.mX[650UL];
    out->mOBS_ACT.mX[6177UL] = t3626->mX.mX[650UL];
    out->mOBS_ACT.mX[6178UL] = t3626->mX.mX[1431UL];
    out->mOBS_ACT.mX[6179UL] = 1.0;
    out->mOBS_ACT.mX[6180UL] = intrm_sf_mf_85;
    for (t2773 = 651UL; t2773 - 651UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5530UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6186UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[6191UL] = 0.0;
    out->mOBS_ACT.mX[6192UL] = t3626->mX.mX[1430UL];
    out->mOBS_ACT.mX[6193UL] = t3626->mX.mX[1432UL] * 1000.0;
    out->mOBS_ACT.mX[6194UL] = t3626->mX.mX[1431UL];
    out->mOBS_ACT.mX[6195UL] = zc_int242;
    out->mOBS_ACT.mX[6196UL] = 1.0;
    out->mOBS_ACT.mX[6197UL] = t3626->mX.mX[1429UL];
    out->mOBS_ACT.mX[6198UL] = 1.0;
    out->mOBS_ACT.mX[6199UL] = t3626->mX.mX[648UL];
    out->mOBS_ACT.mX[6200UL] = t3626->mX.mX[650UL];
    out->mOBS_ACT.mX[6201UL] = 1.0;
    out->mOBS_ACT.mX[6202UL] = t3626->mX.mX[1429UL];
    out->mOBS_ACT.mX[6203UL] = t3626->mX.mX[1430UL];
    out->mOBS_ACT.mX[6204UL] = 1.0;
    out->mOBS_ACT.mX[6205UL] = 1.0;
    out->mOBS_ACT.mX[6206UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6207UL] = intrm_sf_mf_13;
    out->mOBS_ACT.mX[6208UL] = t3626->mX.mX[650UL];
    out->mOBS_ACT.mX[6209UL] = intrm_sf_mf_85;
    out->mOBS_ACT.mX[6210UL] = t3626->mX.mX[1431UL];
    out->mOBS_ACT.mX[6211UL] = t3626->mX.mX[1431UL];
    out->mOBS_ACT.mX[6212UL] = t3626->mX.mX[648UL];
    out->mOBS_ACT.mX[6213UL] = BatteryPack_v2_ModuleAssembly5_Module14_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[6214UL] = t3626->mX.mX[648UL];
    out->mOBS_ACT.mX[6215UL] = t3626->mX.mX[648UL];
    out->mOBS_ACT.mX[6216UL] = t3626->mX.mX[1432UL] * 1000.0;
    out->mOBS_ACT.mX[6217UL] = zc_int242;
    out->mOBS_ACT.mX[6218UL] = t3626->mX.mX[648UL];
    out->mOBS_ACT.mX[6219UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6220UL] = BatteryPack_v2_ModuleAssembly5_Module14_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[6221UL] = BatteryPack_v2_ModuleAssembly5_Module14_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[6222UL] = intrm_sf_mf_13;
    out->mOBS_ACT.mX[6223UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6224UL] = 0.0;
    out->mOBS_ACT.mX[6225UL] = intrm_sf_mf_13;
    out->mOBS_ACT.mX[6226UL] = intrm_sf_mf_85;
    out->mOBS_ACT.mX[6227UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6228UL] = 0.0;
    out->mOBS_ACT.mX[6229UL] = intrm_sf_mf_85;
    out->mOBS_ACT.mX[6230UL] = t3626->mX.mX[648UL];
    out->mOBS_ACT.mX[6231UL] = BatteryPack_v2_ModuleAssembly5_Module14_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[6232UL] = 0.0;
    out->mOBS_ACT.mX[6233UL] = t3626->mX.mX[648UL];
    out->mOBS_ACT.mX[6234UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6235UL] = intrm_sf_mf_13;
    out->mOBS_ACT.mX[6236UL] = t3626->mX.mX[650UL];
    out->mOBS_ACT.mX[6237UL] = intrm_sf_mf_85;
    out->mOBS_ACT.mX[6238UL] = t3626->mX.mX[1431UL];
    out->mOBS_ACT.mX[6239UL] = t3626->mX.mX[1431UL];
    out->mOBS_ACT.mX[6240UL] = t3626->mX.mX[648UL];
    out->mOBS_ACT.mX[6241UL] = zc_int242;
    out->mOBS_ACT.mX[6242UL] = intrm_sf_mf_85 - intrm_sf_mf_13;
    out->mOBS_ACT.mX[6243UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6244UL] = t3626->mX.mX[656UL];
    out->mOBS_ACT.mX[6245UL] = t3626->mX.mX[656UL];
    out->mOBS_ACT.mX[6246UL] = t3626->mX.mX[656UL];
    out->mOBS_ACT.mX[6247UL] = t3626->mX.mX[656UL];
    out->mOBS_ACT.mX[6248UL] = t3626->mX.mX[657UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[6249UL] = t3626->mX.mX[656UL];
    out->mOBS_ACT.mX[6250UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6251UL] = intrm_sf_mf_84;
    out->mOBS_ACT.mX[6252UL] = t3626->mX.mX[658UL];
    out->mOBS_ACT.mX[6253UL] = t3626->mX.mX[658UL];
    out->mOBS_ACT.mX[6254UL] = t3626->mX.mX[1435UL];
    out->mOBS_ACT.mX[6255UL] = 1.0;
    out->mOBS_ACT.mX[6256UL] = intrm_sf_mf_13;
    for (t2773 = 659UL; t2773 - 659UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5598UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6262UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[6267UL] = 0.0;
    out->mOBS_ACT.mX[6268UL] = t3626->mX.mX[1434UL];
    out->mOBS_ACT.mX[6269UL] = t3626->mX.mX[1436UL] * 1000.0;
    out->mOBS_ACT.mX[6270UL] = t3626->mX.mX[1435UL];
    out->mOBS_ACT.mX[6271UL] = zc_int243;
    out->mOBS_ACT.mX[6272UL] = 1.0;
    out->mOBS_ACT.mX[6273UL] = t3626->mX.mX[1433UL];
    out->mOBS_ACT.mX[6274UL] = 1.0;
    out->mOBS_ACT.mX[6275UL] = t3626->mX.mX[656UL];
    out->mOBS_ACT.mX[6276UL] = t3626->mX.mX[658UL];
    out->mOBS_ACT.mX[6277UL] = 1.0;
    out->mOBS_ACT.mX[6278UL] = t3626->mX.mX[1433UL];
    out->mOBS_ACT.mX[6279UL] = t3626->mX.mX[1434UL];
    out->mOBS_ACT.mX[6280UL] = 1.0;
    out->mOBS_ACT.mX[6281UL] = 1.0;
    out->mOBS_ACT.mX[6282UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6283UL] = intrm_sf_mf_84;
    out->mOBS_ACT.mX[6284UL] = t3626->mX.mX[658UL];
    out->mOBS_ACT.mX[6285UL] = intrm_sf_mf_13;
    out->mOBS_ACT.mX[6286UL] = t3626->mX.mX[1435UL];
    out->mOBS_ACT.mX[6287UL] = t3626->mX.mX[1435UL];
    out->mOBS_ACT.mX[6288UL] = t3626->mX.mX[656UL];
    out->mOBS_ACT.mX[6289UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[6290UL] = t3626->mX.mX[656UL];
    out->mOBS_ACT.mX[6291UL] = t3626->mX.mX[656UL];
    out->mOBS_ACT.mX[6292UL] = t3626->mX.mX[1436UL] * 1000.0;
    out->mOBS_ACT.mX[6293UL] = zc_int243;
    out->mOBS_ACT.mX[6294UL] = t3626->mX.mX[656UL];
    out->mOBS_ACT.mX[6295UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6296UL] = BatteryPack_v2_ModuleAssembly5_Module15_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[6297UL] = BatteryPack_v2_ModuleAssembly5_Module15_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[6298UL] = intrm_sf_mf_84;
    out->mOBS_ACT.mX[6299UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6300UL] = 0.0;
    out->mOBS_ACT.mX[6301UL] = intrm_sf_mf_84;
    out->mOBS_ACT.mX[6302UL] = intrm_sf_mf_13;
    out->mOBS_ACT.mX[6303UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6304UL] = 0.0;
    out->mOBS_ACT.mX[6305UL] = intrm_sf_mf_13;
    out->mOBS_ACT.mX[6306UL] = t3626->mX.mX[656UL];
    out->mOBS_ACT.mX[6307UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[6308UL] = 0.0;
    out->mOBS_ACT.mX[6309UL] = t3626->mX.mX[656UL];
    out->mOBS_ACT.mX[6310UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6311UL] = intrm_sf_mf_84;
    out->mOBS_ACT.mX[6312UL] = t3626->mX.mX[658UL];
    out->mOBS_ACT.mX[6313UL] = intrm_sf_mf_13;
    out->mOBS_ACT.mX[6314UL] = t3626->mX.mX[1435UL];
    out->mOBS_ACT.mX[6315UL] = t3626->mX.mX[1435UL];
    out->mOBS_ACT.mX[6316UL] = t3626->mX.mX[656UL];
    out->mOBS_ACT.mX[6317UL] = zc_int243;
    out->mOBS_ACT.mX[6318UL] = intrm_sf_mf_13 - intrm_sf_mf_84;
    out->mOBS_ACT.mX[6319UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6320UL] = t3626->mX.mX[664UL];
    out->mOBS_ACT.mX[6321UL] = t3626->mX.mX[664UL];
    out->mOBS_ACT.mX[6322UL] = t3626->mX.mX[664UL];
    out->mOBS_ACT.mX[6323UL] = t3626->mX.mX[664UL];
    out->mOBS_ACT.mX[6324UL] = t3626->mX.mX[665UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[6325UL] = t3626->mX.mX[664UL];
    out->mOBS_ACT.mX[6326UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6327UL] = zc_int368;
    out->mOBS_ACT.mX[6328UL] = t3626->mX.mX[666UL];
    out->mOBS_ACT.mX[6329UL] = t3626->mX.mX[666UL];
    out->mOBS_ACT.mX[6330UL] = t3626->mX.mX[1439UL];
    out->mOBS_ACT.mX[6331UL] = 1.0;
    out->mOBS_ACT.mX[6332UL] = intrm_sf_mf_84;
    for (t2773 = 667UL; t2773 - 667UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5666UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6338UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[6343UL] = 0.0;
    out->mOBS_ACT.mX[6344UL] = t3626->mX.mX[1438UL];
    out->mOBS_ACT.mX[6345UL] = t3626->mX.mX[1440UL] * 1000.0;
    out->mOBS_ACT.mX[6346UL] = t3626->mX.mX[1439UL];
    out->mOBS_ACT.mX[6347UL] = zc_int248;
    out->mOBS_ACT.mX[6348UL] = 1.0;
    out->mOBS_ACT.mX[6349UL] = t3626->mX.mX[1437UL];
    out->mOBS_ACT.mX[6350UL] = 1.0;
    out->mOBS_ACT.mX[6351UL] = t3626->mX.mX[664UL];
    out->mOBS_ACT.mX[6352UL] = t3626->mX.mX[666UL];
    out->mOBS_ACT.mX[6353UL] = 1.0;
    out->mOBS_ACT.mX[6354UL] = t3626->mX.mX[1437UL];
    out->mOBS_ACT.mX[6355UL] = t3626->mX.mX[1438UL];
    out->mOBS_ACT.mX[6356UL] = 1.0;
    out->mOBS_ACT.mX[6357UL] = 1.0;
    out->mOBS_ACT.mX[6358UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6359UL] = zc_int368;
    out->mOBS_ACT.mX[6360UL] = t3626->mX.mX[666UL];
    out->mOBS_ACT.mX[6361UL] = intrm_sf_mf_84;
    out->mOBS_ACT.mX[6362UL] = t3626->mX.mX[1439UL];
    out->mOBS_ACT.mX[6363UL] = t3626->mX.mX[1439UL];
    out->mOBS_ACT.mX[6364UL] = t3626->mX.mX[664UL];
    out->mOBS_ACT.mX[6365UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[6366UL] = t3626->mX.mX[664UL];
    out->mOBS_ACT.mX[6367UL] = t3626->mX.mX[664UL];
    out->mOBS_ACT.mX[6368UL] = t3626->mX.mX[1440UL] * 1000.0;
    out->mOBS_ACT.mX[6369UL] = zc_int248;
    out->mOBS_ACT.mX[6370UL] = t3626->mX.mX[664UL];
    out->mOBS_ACT.mX[6371UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6372UL] = BatteryPack_v2_ModuleAssembly5_Module16_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[6373UL] = BatteryPack_v2_ModuleAssembly5_Module16_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[6374UL] = zc_int368;
    out->mOBS_ACT.mX[6375UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6376UL] = 0.0;
    out->mOBS_ACT.mX[6377UL] = zc_int368;
    out->mOBS_ACT.mX[6378UL] = intrm_sf_mf_84;
    out->mOBS_ACT.mX[6379UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6380UL] = 0.0;
    out->mOBS_ACT.mX[6381UL] = intrm_sf_mf_84;
    out->mOBS_ACT.mX[6382UL] = t3626->mX.mX[664UL];
    out->mOBS_ACT.mX[6383UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[6384UL] = 0.0;
    out->mOBS_ACT.mX[6385UL] = t3626->mX.mX[664UL];
    out->mOBS_ACT.mX[6386UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6387UL] = zc_int368;
    out->mOBS_ACT.mX[6388UL] = t3626->mX.mX[666UL];
    out->mOBS_ACT.mX[6389UL] = intrm_sf_mf_84;
    out->mOBS_ACT.mX[6390UL] = t3626->mX.mX[1439UL];
    out->mOBS_ACT.mX[6391UL] = t3626->mX.mX[1439UL];
    out->mOBS_ACT.mX[6392UL] = t3626->mX.mX[664UL];
    out->mOBS_ACT.mX[6393UL] = zc_int248;
    out->mOBS_ACT.mX[6394UL] = intrm_sf_mf_84 - zc_int368;
    out->mOBS_ACT.mX[6395UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6396UL] = t3626->mX.mX[672UL];
    out->mOBS_ACT.mX[6397UL] = t3626->mX.mX[672UL];
    out->mOBS_ACT.mX[6398UL] = t3626->mX.mX[672UL];
    out->mOBS_ACT.mX[6399UL] = t3626->mX.mX[672UL];
    out->mOBS_ACT.mX[6400UL] = t3626->mX.mX[673UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[6401UL] = t3626->mX.mX[672UL];
    out->mOBS_ACT.mX[6402UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6403UL] = intrm_sf_mf_83;
    out->mOBS_ACT.mX[6404UL] = t3626->mX.mX[674UL];
    out->mOBS_ACT.mX[6405UL] = t3626->mX.mX[674UL];
    out->mOBS_ACT.mX[6406UL] = t3626->mX.mX[1443UL];
    out->mOBS_ACT.mX[6407UL] = 1.0;
    out->mOBS_ACT.mX[6408UL] = zc_int368;
    for (t2773 = 675UL; t2773 - 675UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5734UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6414UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[6419UL] = 0.0;
    out->mOBS_ACT.mX[6420UL] = t3626->mX.mX[1442UL];
    out->mOBS_ACT.mX[6421UL] = t3626->mX.mX[1444UL] * 1000.0;
    out->mOBS_ACT.mX[6422UL] = t3626->mX.mX[1443UL];
    out->mOBS_ACT.mX[6423UL] = zc_int250;
    out->mOBS_ACT.mX[6424UL] = 1.0;
    out->mOBS_ACT.mX[6425UL] = t3626->mX.mX[1441UL];
    out->mOBS_ACT.mX[6426UL] = 1.0;
    out->mOBS_ACT.mX[6427UL] = t3626->mX.mX[672UL];
    out->mOBS_ACT.mX[6428UL] = t3626->mX.mX[674UL];
    out->mOBS_ACT.mX[6429UL] = 1.0;
    out->mOBS_ACT.mX[6430UL] = t3626->mX.mX[1441UL];
    out->mOBS_ACT.mX[6431UL] = t3626->mX.mX[1442UL];
    out->mOBS_ACT.mX[6432UL] = 1.0;
    out->mOBS_ACT.mX[6433UL] = 1.0;
    out->mOBS_ACT.mX[6434UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6435UL] = intrm_sf_mf_83;
    out->mOBS_ACT.mX[6436UL] = t3626->mX.mX[674UL];
    out->mOBS_ACT.mX[6437UL] = zc_int368;
    out->mOBS_ACT.mX[6438UL] = t3626->mX.mX[1443UL];
    out->mOBS_ACT.mX[6439UL] = t3626->mX.mX[1443UL];
    out->mOBS_ACT.mX[6440UL] = t3626->mX.mX[672UL];
    out->mOBS_ACT.mX[6441UL] = BatteryPack_v2_ModuleAssembly5_Module17_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[6442UL] = t3626->mX.mX[672UL];
    out->mOBS_ACT.mX[6443UL] = t3626->mX.mX[672UL];
    out->mOBS_ACT.mX[6444UL] = t3626->mX.mX[1444UL] * 1000.0;
    out->mOBS_ACT.mX[6445UL] = zc_int250;
    out->mOBS_ACT.mX[6446UL] = t3626->mX.mX[672UL];
    out->mOBS_ACT.mX[6447UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6448UL] = BatteryPack_v2_ModuleAssembly5_Module17_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[6449UL] = BatteryPack_v2_ModuleAssembly5_Module17_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[6450UL] = intrm_sf_mf_83;
    out->mOBS_ACT.mX[6451UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6452UL] = 0.0;
    out->mOBS_ACT.mX[6453UL] = intrm_sf_mf_83;
    out->mOBS_ACT.mX[6454UL] = zc_int368;
    out->mOBS_ACT.mX[6455UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6456UL] = 0.0;
    out->mOBS_ACT.mX[6457UL] = zc_int368;
    out->mOBS_ACT.mX[6458UL] = t3626->mX.mX[672UL];
    out->mOBS_ACT.mX[6459UL] = BatteryPack_v2_ModuleAssembly5_Module17_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[6460UL] = 0.0;
    out->mOBS_ACT.mX[6461UL] = t3626->mX.mX[672UL];
    out->mOBS_ACT.mX[6462UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6463UL] = intrm_sf_mf_83;
    out->mOBS_ACT.mX[6464UL] = t3626->mX.mX[674UL];
    out->mOBS_ACT.mX[6465UL] = zc_int368;
    out->mOBS_ACT.mX[6466UL] = t3626->mX.mX[1443UL];
    out->mOBS_ACT.mX[6467UL] = t3626->mX.mX[1443UL];
    out->mOBS_ACT.mX[6468UL] = t3626->mX.mX[672UL];
    out->mOBS_ACT.mX[6469UL] = zc_int250;
    out->mOBS_ACT.mX[6470UL] = zc_int368 - intrm_sf_mf_83;
    out->mOBS_ACT.mX[6471UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6472UL] = t3626->mX.mX[680UL];
    out->mOBS_ACT.mX[6473UL] = t3626->mX.mX[680UL];
    out->mOBS_ACT.mX[6474UL] = t3626->mX.mX[680UL];
    out->mOBS_ACT.mX[6475UL] = t3626->mX.mX[680UL];
    out->mOBS_ACT.mX[6476UL] = t3626->mX.mX[681UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[6477UL] = t3626->mX.mX[680UL];
    out->mOBS_ACT.mX[6478UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6479UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6480UL] = t3626->mX.mX[682UL];
    out->mOBS_ACT.mX[6481UL] = t3626->mX.mX[682UL];
    out->mOBS_ACT.mX[6482UL] = t3626->mX.mX[1447UL];
    out->mOBS_ACT.mX[6483UL] = 1.0;
    out->mOBS_ACT.mX[6484UL] = intrm_sf_mf_83;
    for (t2773 = 683UL; t2773 - 683UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5802UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6490UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[6495UL] = 0.0;
    out->mOBS_ACT.mX[6496UL] = t3626->mX.mX[1446UL];
    out->mOBS_ACT.mX[6497UL] = t3626->mX.mX[1448UL] * 1000.0;
    out->mOBS_ACT.mX[6498UL] = t3626->mX.mX[1447UL];
    out->mOBS_ACT.mX[6499UL] = zc_int247;
    out->mOBS_ACT.mX[6500UL] = 1.0;
    out->mOBS_ACT.mX[6501UL] = t3626->mX.mX[1445UL];
    out->mOBS_ACT.mX[6502UL] = 1.0;
    out->mOBS_ACT.mX[6503UL] = t3626->mX.mX[680UL];
    out->mOBS_ACT.mX[6504UL] = t3626->mX.mX[682UL];
    out->mOBS_ACT.mX[6505UL] = 1.0;
    out->mOBS_ACT.mX[6506UL] = t3626->mX.mX[1445UL];
    out->mOBS_ACT.mX[6507UL] = t3626->mX.mX[1446UL];
    out->mOBS_ACT.mX[6508UL] = 1.0;
    out->mOBS_ACT.mX[6509UL] = 1.0;
    out->mOBS_ACT.mX[6510UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6511UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6512UL] = t3626->mX.mX[682UL];
    out->mOBS_ACT.mX[6513UL] = intrm_sf_mf_83;
    out->mOBS_ACT.mX[6514UL] = t3626->mX.mX[1447UL];
    out->mOBS_ACT.mX[6515UL] = t3626->mX.mX[1447UL];
    out->mOBS_ACT.mX[6516UL] = t3626->mX.mX[680UL];
    out->mOBS_ACT.mX[6517UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[6518UL] = t3626->mX.mX[680UL];
    out->mOBS_ACT.mX[6519UL] = t3626->mX.mX[680UL];
    out->mOBS_ACT.mX[6520UL] = t3626->mX.mX[1448UL] * 1000.0;
    out->mOBS_ACT.mX[6521UL] = zc_int247;
    out->mOBS_ACT.mX[6522UL] = t3626->mX.mX[680UL];
    out->mOBS_ACT.mX[6523UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6524UL] = BatteryPack_v2_ModuleAssembly5_Module18_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[6525UL] = BatteryPack_v2_ModuleAssembly5_Module18_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[6526UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6527UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6528UL] = 0.0;
    out->mOBS_ACT.mX[6529UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6530UL] = intrm_sf_mf_83;
    out->mOBS_ACT.mX[6531UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6532UL] = 0.0;
    out->mOBS_ACT.mX[6533UL] = intrm_sf_mf_83;
    out->mOBS_ACT.mX[6534UL] = t3626->mX.mX[680UL];
    out->mOBS_ACT.mX[6535UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[6536UL] = 0.0;
    out->mOBS_ACT.mX[6537UL] = t3626->mX.mX[680UL];
    out->mOBS_ACT.mX[6538UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6539UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6540UL] = t3626->mX.mX[682UL];
    out->mOBS_ACT.mX[6541UL] = intrm_sf_mf_83;
    out->mOBS_ACT.mX[6542UL] = t3626->mX.mX[1447UL];
    out->mOBS_ACT.mX[6543UL] = t3626->mX.mX[1447UL];
    out->mOBS_ACT.mX[6544UL] = t3626->mX.mX[680UL];
    out->mOBS_ACT.mX[6545UL] = zc_int247;
    out->mOBS_ACT.mX[6546UL] = intrm_sf_mf_83 - BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6547UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6548UL] = t3626->mX.mX[688UL];
    out->mOBS_ACT.mX[6549UL] = t3626->mX.mX[688UL];
    out->mOBS_ACT.mX[6550UL] = t3626->mX.mX[688UL];
    out->mOBS_ACT.mX[6551UL] = t3626->mX.mX[688UL];
    out->mOBS_ACT.mX[6552UL] = t3626->mX.mX[689UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[6553UL] = t3626->mX.mX[688UL];
    out->mOBS_ACT.mX[6554UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6555UL] = zc_int365;
    out->mOBS_ACT.mX[6556UL] = t3626->mX.mX[690UL];
    out->mOBS_ACT.mX[6557UL] = t3626->mX.mX[690UL];
    out->mOBS_ACT.mX[6558UL] = t3626->mX.mX[1451UL];
    out->mOBS_ACT.mX[6559UL] = 1.0;
    out->mOBS_ACT.mX[6560UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    for (t2773 = 691UL; t2773 - 691UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5870UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6566UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[6571UL] = 0.0;
    out->mOBS_ACT.mX[6572UL] = t3626->mX.mX[1450UL];
    out->mOBS_ACT.mX[6573UL] = t3626->mX.mX[1452UL] * 1000.0;
    out->mOBS_ACT.mX[6574UL] = t3626->mX.mX[1451UL];
    out->mOBS_ACT.mX[6575UL] = zc_int253;
    out->mOBS_ACT.mX[6576UL] = 1.0;
    out->mOBS_ACT.mX[6577UL] = t3626->mX.mX[1449UL];
    out->mOBS_ACT.mX[6578UL] = 1.0;
    out->mOBS_ACT.mX[6579UL] = t3626->mX.mX[688UL];
    out->mOBS_ACT.mX[6580UL] = t3626->mX.mX[690UL];
    out->mOBS_ACT.mX[6581UL] = 1.0;
    out->mOBS_ACT.mX[6582UL] = t3626->mX.mX[1449UL];
    out->mOBS_ACT.mX[6583UL] = t3626->mX.mX[1450UL];
    out->mOBS_ACT.mX[6584UL] = 1.0;
    out->mOBS_ACT.mX[6585UL] = 1.0;
    out->mOBS_ACT.mX[6586UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6587UL] = zc_int365;
    out->mOBS_ACT.mX[6588UL] = t3626->mX.mX[690UL];
    out->mOBS_ACT.mX[6589UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6590UL] = t3626->mX.mX[1451UL];
    out->mOBS_ACT.mX[6591UL] = t3626->mX.mX[1451UL];
    out->mOBS_ACT.mX[6592UL] = t3626->mX.mX[688UL];
    out->mOBS_ACT.mX[6593UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[6594UL] = t3626->mX.mX[688UL];
    out->mOBS_ACT.mX[6595UL] = t3626->mX.mX[688UL];
    out->mOBS_ACT.mX[6596UL] = t3626->mX.mX[1452UL] * 1000.0;
    out->mOBS_ACT.mX[6597UL] = zc_int253;
    out->mOBS_ACT.mX[6598UL] = t3626->mX.mX[688UL];
    out->mOBS_ACT.mX[6599UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6600UL] = BatteryPack_v2_ModuleAssembly5_Module19_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[6601UL] = BatteryPack_v2_ModuleAssembly5_Module19_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[6602UL] = zc_int365;
    out->mOBS_ACT.mX[6603UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6604UL] = 0.0;
    out->mOBS_ACT.mX[6605UL] = zc_int365;
    out->mOBS_ACT.mX[6606UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6607UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6608UL] = 0.0;
    out->mOBS_ACT.mX[6609UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6610UL] = t3626->mX.mX[688UL];
    out->mOBS_ACT.mX[6611UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[6612UL] = 0.0;
    out->mOBS_ACT.mX[6613UL] = t3626->mX.mX[688UL];
    out->mOBS_ACT.mX[6614UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6615UL] = zc_int365;
    out->mOBS_ACT.mX[6616UL] = t3626->mX.mX[690UL];
    out->mOBS_ACT.mX[6617UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6618UL] = t3626->mX.mX[1451UL];
    out->mOBS_ACT.mX[6619UL] = t3626->mX.mX[1451UL];
    out->mOBS_ACT.mX[6620UL] = t3626->mX.mX[688UL];
    out->mOBS_ACT.mX[6621UL] = zc_int253;
    out->mOBS_ACT.mX[6622UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3 - zc_int365;
    out->mOBS_ACT.mX[6623UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6624UL] = t3626->mX.mX[696UL];
    out->mOBS_ACT.mX[6625UL] = t3626->mX.mX[696UL];
    out->mOBS_ACT.mX[6626UL] = t3626->mX.mX[696UL];
    out->mOBS_ACT.mX[6627UL] = t3626->mX.mX[696UL];
    out->mOBS_ACT.mX[6628UL] = t3626->mX.mX[697UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[6629UL] = t3626->mX.mX[696UL];
    out->mOBS_ACT.mX[6630UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6631UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6632UL] = t3626->mX.mX[698UL];
    out->mOBS_ACT.mX[6633UL] = t3626->mX.mX[698UL];
    out->mOBS_ACT.mX[6634UL] = t3626->mX.mX[1455UL];
    out->mOBS_ACT.mX[6635UL] = 1.0;
    out->mOBS_ACT.mX[6636UL] = zc_int365;
    for (t2773 = 699UL; t2773 - 699UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 5938UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6642UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[6647UL] = 0.0;
    out->mOBS_ACT.mX[6648UL] = t3626->mX.mX[1454UL];
    out->mOBS_ACT.mX[6649UL] = t3626->mX.mX[1456UL] * 1000.0;
    out->mOBS_ACT.mX[6650UL] = t3626->mX.mX[1455UL];
    out->mOBS_ACT.mX[6651UL] = intrm_sf_mf_57;
    out->mOBS_ACT.mX[6652UL] = 1.0;
    out->mOBS_ACT.mX[6653UL] = t3626->mX.mX[1453UL];
    out->mOBS_ACT.mX[6654UL] = 1.0;
    out->mOBS_ACT.mX[6655UL] = t3626->mX.mX[696UL];
    out->mOBS_ACT.mX[6656UL] = t3626->mX.mX[698UL];
    out->mOBS_ACT.mX[6657UL] = 1.0;
    out->mOBS_ACT.mX[6658UL] = t3626->mX.mX[1453UL];
    out->mOBS_ACT.mX[6659UL] = t3626->mX.mX[1454UL];
    out->mOBS_ACT.mX[6660UL] = 1.0;
    out->mOBS_ACT.mX[6661UL] = 1.0;
    out->mOBS_ACT.mX[6662UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6663UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6664UL] = t3626->mX.mX[698UL];
    out->mOBS_ACT.mX[6665UL] = zc_int365;
    out->mOBS_ACT.mX[6666UL] = t3626->mX.mX[1455UL];
    out->mOBS_ACT.mX[6667UL] = t3626->mX.mX[1455UL];
    out->mOBS_ACT.mX[6668UL] = t3626->mX.mX[696UL];
    out->mOBS_ACT.mX[6669UL] = BatteryPack_v2_ModuleAssembly5_Module20_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[6670UL] = t3626->mX.mX[696UL];
    out->mOBS_ACT.mX[6671UL] = t3626->mX.mX[696UL];
    out->mOBS_ACT.mX[6672UL] = t3626->mX.mX[1456UL] * 1000.0;
    out->mOBS_ACT.mX[6673UL] = intrm_sf_mf_57;
    out->mOBS_ACT.mX[6674UL] = t3626->mX.mX[696UL];
    out->mOBS_ACT.mX[6675UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6676UL] = BatteryPack_v2_ModuleAssembly5_Module20_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[6677UL] = BatteryPack_v2_ModuleAssembly5_Module20_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[6678UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6679UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6680UL] = 0.0;
    out->mOBS_ACT.mX[6681UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6682UL] = zc_int365;
    out->mOBS_ACT.mX[6683UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6684UL] = 0.0;
    out->mOBS_ACT.mX[6685UL] = zc_int365;
    out->mOBS_ACT.mX[6686UL] = t3626->mX.mX[696UL];
    out->mOBS_ACT.mX[6687UL] = BatteryPack_v2_ModuleAssembly5_Module20_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[6688UL] = 0.0;
    out->mOBS_ACT.mX[6689UL] = t3626->mX.mX[696UL];
    out->mOBS_ACT.mX[6690UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6691UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6692UL] = t3626->mX.mX[698UL];
    out->mOBS_ACT.mX[6693UL] = zc_int365;
    out->mOBS_ACT.mX[6694UL] = t3626->mX.mX[1455UL];
    out->mOBS_ACT.mX[6695UL] = t3626->mX.mX[1455UL];
    out->mOBS_ACT.mX[6696UL] = t3626->mX.mX[696UL];
    out->mOBS_ACT.mX[6697UL] = intrm_sf_mf_57;
    out->mOBS_ACT.mX[6698UL] = zc_int365 - BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6699UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6700UL] = t3626->mX.mX[704UL];
    out->mOBS_ACT.mX[6701UL] = t3626->mX.mX[704UL];
    out->mOBS_ACT.mX[6702UL] = t3626->mX.mX[704UL];
    out->mOBS_ACT.mX[6703UL] = t3626->mX.mX[704UL];
    out->mOBS_ACT.mX[6704UL] = t3626->mX.mX[705UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[6705UL] = t3626->mX.mX[704UL];
    out->mOBS_ACT.mX[6706UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6707UL] = intrm_sf_mf_81;
    out->mOBS_ACT.mX[6708UL] = t3626->mX.mX[706UL];
    out->mOBS_ACT.mX[6709UL] = t3626->mX.mX[706UL];
    out->mOBS_ACT.mX[6710UL] = t3626->mX.mX[1459UL];
    out->mOBS_ACT.mX[6711UL] = 1.0;
    out->mOBS_ACT.mX[6712UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    for (t2773 = 707UL; t2773 - 707UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6006UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6718UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[6723UL] = 0.0;
    out->mOBS_ACT.mX[6724UL] = t3626->mX.mX[1458UL];
    out->mOBS_ACT.mX[6725UL] = t3626->mX.mX[1460UL] * 1000.0;
    out->mOBS_ACT.mX[6726UL] = t3626->mX.mX[1459UL];
    out->mOBS_ACT.mX[6727UL] = zc_int258;
    out->mOBS_ACT.mX[6728UL] = 1.0;
    out->mOBS_ACT.mX[6729UL] = t3626->mX.mX[1457UL];
    out->mOBS_ACT.mX[6730UL] = 1.0;
    out->mOBS_ACT.mX[6731UL] = t3626->mX.mX[704UL];
    out->mOBS_ACT.mX[6732UL] = t3626->mX.mX[706UL];
    out->mOBS_ACT.mX[6733UL] = 1.0;
    out->mOBS_ACT.mX[6734UL] = t3626->mX.mX[1457UL];
    out->mOBS_ACT.mX[6735UL] = t3626->mX.mX[1458UL];
    out->mOBS_ACT.mX[6736UL] = 1.0;
    out->mOBS_ACT.mX[6737UL] = 1.0;
    out->mOBS_ACT.mX[6738UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6739UL] = intrm_sf_mf_81;
    out->mOBS_ACT.mX[6740UL] = t3626->mX.mX[706UL];
    out->mOBS_ACT.mX[6741UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6742UL] = t3626->mX.mX[1459UL];
    out->mOBS_ACT.mX[6743UL] = t3626->mX.mX[1459UL];
    out->mOBS_ACT.mX[6744UL] = t3626->mX.mX[704UL];
    out->mOBS_ACT.mX[6745UL] = BatteryPack_v2_ModuleAssembly5_Module21_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[6746UL] = t3626->mX.mX[704UL];
    out->mOBS_ACT.mX[6747UL] = t3626->mX.mX[704UL];
    out->mOBS_ACT.mX[6748UL] = t3626->mX.mX[1460UL] * 1000.0;
    out->mOBS_ACT.mX[6749UL] = zc_int258;
    out->mOBS_ACT.mX[6750UL] = t3626->mX.mX[704UL];
    out->mOBS_ACT.mX[6751UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6752UL] = BatteryPack_v2_ModuleAssembly5_Module21_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[6753UL] = BatteryPack_v2_ModuleAssembly5_Module21_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[6754UL] = intrm_sf_mf_81;
    out->mOBS_ACT.mX[6755UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6756UL] = 0.0;
    out->mOBS_ACT.mX[6757UL] = intrm_sf_mf_81;
    out->mOBS_ACT.mX[6758UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6759UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6760UL] = 0.0;
    out->mOBS_ACT.mX[6761UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6762UL] = t3626->mX.mX[704UL];
    out->mOBS_ACT.mX[6763UL] = BatteryPack_v2_ModuleAssembly5_Module21_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[6764UL] = 0.0;
    out->mOBS_ACT.mX[6765UL] = t3626->mX.mX[704UL];
    out->mOBS_ACT.mX[6766UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6767UL] = intrm_sf_mf_81;
    out->mOBS_ACT.mX[6768UL] = t3626->mX.mX[706UL];
    out->mOBS_ACT.mX[6769UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[6770UL] = t3626->mX.mX[1459UL];
    out->mOBS_ACT.mX[6771UL] = t3626->mX.mX[1459UL];
    out->mOBS_ACT.mX[6772UL] = t3626->mX.mX[704UL];
    out->mOBS_ACT.mX[6773UL] = zc_int258;
    out->mOBS_ACT.mX[6774UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3 - intrm_sf_mf_81;
    out->mOBS_ACT.mX[6775UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6776UL] = t3626->mX.mX[712UL];
    out->mOBS_ACT.mX[6777UL] = t3626->mX.mX[712UL];
    out->mOBS_ACT.mX[6778UL] = t3626->mX.mX[712UL];
    out->mOBS_ACT.mX[6779UL] = t3626->mX.mX[712UL];
    out->mOBS_ACT.mX[6780UL] = t3626->mX.mX[713UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[6781UL] = t3626->mX.mX[712UL];
    out->mOBS_ACT.mX[6782UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6783UL] = zc_int362;
    out->mOBS_ACT.mX[6784UL] = t3626->mX.mX[714UL];
    out->mOBS_ACT.mX[6785UL] = t3626->mX.mX[714UL];
    out->mOBS_ACT.mX[6786UL] = t3626->mX.mX[1463UL];
    out->mOBS_ACT.mX[6787UL] = 1.0;
    out->mOBS_ACT.mX[6788UL] = intrm_sf_mf_81;
    for (t2773 = 715UL; t2773 - 715UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6074UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6794UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[6799UL] = 0.0;
    out->mOBS_ACT.mX[6800UL] = t3626->mX.mX[1462UL];
    out->mOBS_ACT.mX[6801UL] = t3626->mX.mX[1464UL] * 1000.0;
    out->mOBS_ACT.mX[6802UL] = t3626->mX.mX[1463UL];
    out->mOBS_ACT.mX[6803UL] = zc_int262;
    out->mOBS_ACT.mX[6804UL] = 1.0;
    out->mOBS_ACT.mX[6805UL] = t3626->mX.mX[1461UL];
    out->mOBS_ACT.mX[6806UL] = 1.0;
    out->mOBS_ACT.mX[6807UL] = t3626->mX.mX[712UL];
    out->mOBS_ACT.mX[6808UL] = t3626->mX.mX[714UL];
    out->mOBS_ACT.mX[6809UL] = 1.0;
    out->mOBS_ACT.mX[6810UL] = t3626->mX.mX[1461UL];
    out->mOBS_ACT.mX[6811UL] = t3626->mX.mX[1462UL];
    out->mOBS_ACT.mX[6812UL] = 1.0;
    out->mOBS_ACT.mX[6813UL] = 1.0;
    out->mOBS_ACT.mX[6814UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6815UL] = zc_int362;
    out->mOBS_ACT.mX[6816UL] = t3626->mX.mX[714UL];
    out->mOBS_ACT.mX[6817UL] = intrm_sf_mf_81;
    out->mOBS_ACT.mX[6818UL] = t3626->mX.mX[1463UL];
    out->mOBS_ACT.mX[6819UL] = t3626->mX.mX[1463UL];
    out->mOBS_ACT.mX[6820UL] = t3626->mX.mX[712UL];
    out->mOBS_ACT.mX[6821UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[6822UL] = t3626->mX.mX[712UL];
    out->mOBS_ACT.mX[6823UL] = t3626->mX.mX[712UL];
    out->mOBS_ACT.mX[6824UL] = t3626->mX.mX[1464UL] * 1000.0;
    out->mOBS_ACT.mX[6825UL] = zc_int262;
    out->mOBS_ACT.mX[6826UL] = t3626->mX.mX[712UL];
    out->mOBS_ACT.mX[6827UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6828UL] = BatteryPack_v2_ModuleAssembly5_Module22_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[6829UL] = BatteryPack_v2_ModuleAssembly5_Module22_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[6830UL] = zc_int362;
    out->mOBS_ACT.mX[6831UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6832UL] = 0.0;
    out->mOBS_ACT.mX[6833UL] = zc_int362;
    out->mOBS_ACT.mX[6834UL] = intrm_sf_mf_81;
    out->mOBS_ACT.mX[6835UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6836UL] = 0.0;
    out->mOBS_ACT.mX[6837UL] = intrm_sf_mf_81;
    out->mOBS_ACT.mX[6838UL] = t3626->mX.mX[712UL];
    out->mOBS_ACT.mX[6839UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[6840UL] = 0.0;
    out->mOBS_ACT.mX[6841UL] = t3626->mX.mX[712UL];
    out->mOBS_ACT.mX[6842UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6843UL] = zc_int362;
    out->mOBS_ACT.mX[6844UL] = t3626->mX.mX[714UL];
    out->mOBS_ACT.mX[6845UL] = intrm_sf_mf_81;
    out->mOBS_ACT.mX[6846UL] = t3626->mX.mX[1463UL];
    out->mOBS_ACT.mX[6847UL] = t3626->mX.mX[1463UL];
    out->mOBS_ACT.mX[6848UL] = t3626->mX.mX[712UL];
    out->mOBS_ACT.mX[6849UL] = zc_int262;
    out->mOBS_ACT.mX[6850UL] = intrm_sf_mf_81 - zc_int362;
    out->mOBS_ACT.mX[6851UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6852UL] = t3626->mX.mX[720UL];
    out->mOBS_ACT.mX[6853UL] = t3626->mX.mX[720UL];
    out->mOBS_ACT.mX[6854UL] = t3626->mX.mX[720UL];
    out->mOBS_ACT.mX[6855UL] = t3626->mX.mX[720UL];
    out->mOBS_ACT.mX[6856UL] = t3626->mX.mX[721UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[6857UL] = t3626->mX.mX[720UL];
    out->mOBS_ACT.mX[6858UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6859UL] = intrm_sf_mf_80;
    out->mOBS_ACT.mX[6860UL] = t3626->mX.mX[722UL];
    out->mOBS_ACT.mX[6861UL] = t3626->mX.mX[722UL];
    out->mOBS_ACT.mX[6862UL] = t3626->mX.mX[1467UL];
    out->mOBS_ACT.mX[6863UL] = 1.0;
    out->mOBS_ACT.mX[6864UL] = zc_int362;
    for (t2773 = 723UL; t2773 - 723UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6142UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6870UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[6875UL] = 0.0;
    out->mOBS_ACT.mX[6876UL] = t3626->mX.mX[1466UL];
    out->mOBS_ACT.mX[6877UL] = t3626->mX.mX[1468UL] * 1000.0;
    out->mOBS_ACT.mX[6878UL] = t3626->mX.mX[1467UL];
    out->mOBS_ACT.mX[6879UL] = zc_int265;
    out->mOBS_ACT.mX[6880UL] = 1.0;
    out->mOBS_ACT.mX[6881UL] = t3626->mX.mX[1465UL];
    out->mOBS_ACT.mX[6882UL] = 1.0;
    out->mOBS_ACT.mX[6883UL] = t3626->mX.mX[720UL];
    out->mOBS_ACT.mX[6884UL] = t3626->mX.mX[722UL];
    out->mOBS_ACT.mX[6885UL] = 1.0;
    out->mOBS_ACT.mX[6886UL] = t3626->mX.mX[1465UL];
    out->mOBS_ACT.mX[6887UL] = t3626->mX.mX[1466UL];
    out->mOBS_ACT.mX[6888UL] = 1.0;
    out->mOBS_ACT.mX[6889UL] = 1.0;
    out->mOBS_ACT.mX[6890UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6891UL] = intrm_sf_mf_80;
    out->mOBS_ACT.mX[6892UL] = t3626->mX.mX[722UL];
    out->mOBS_ACT.mX[6893UL] = zc_int362;
    out->mOBS_ACT.mX[6894UL] = t3626->mX.mX[1467UL];
    out->mOBS_ACT.mX[6895UL] = t3626->mX.mX[1467UL];
    out->mOBS_ACT.mX[6896UL] = t3626->mX.mX[720UL];
    out->mOBS_ACT.mX[6897UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[6898UL] = t3626->mX.mX[720UL];
    out->mOBS_ACT.mX[6899UL] = t3626->mX.mX[720UL];
    out->mOBS_ACT.mX[6900UL] = t3626->mX.mX[1468UL] * 1000.0;
    out->mOBS_ACT.mX[6901UL] = zc_int265;
    out->mOBS_ACT.mX[6902UL] = t3626->mX.mX[720UL];
    out->mOBS_ACT.mX[6903UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6904UL] = BatteryPack_v2_ModuleAssembly5_Module23_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[6905UL] = BatteryPack_v2_ModuleAssembly5_Module23_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[6906UL] = intrm_sf_mf_80;
    out->mOBS_ACT.mX[6907UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6908UL] = 0.0;
    out->mOBS_ACT.mX[6909UL] = intrm_sf_mf_80;
    out->mOBS_ACT.mX[6910UL] = zc_int362;
    out->mOBS_ACT.mX[6911UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6912UL] = 0.0;
    out->mOBS_ACT.mX[6913UL] = zc_int362;
    out->mOBS_ACT.mX[6914UL] = t3626->mX.mX[720UL];
    out->mOBS_ACT.mX[6915UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[6916UL] = 0.0;
    out->mOBS_ACT.mX[6917UL] = t3626->mX.mX[720UL];
    out->mOBS_ACT.mX[6918UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6919UL] = intrm_sf_mf_80;
    out->mOBS_ACT.mX[6920UL] = t3626->mX.mX[722UL];
    out->mOBS_ACT.mX[6921UL] = zc_int362;
    out->mOBS_ACT.mX[6922UL] = t3626->mX.mX[1467UL];
    out->mOBS_ACT.mX[6923UL] = t3626->mX.mX[1467UL];
    out->mOBS_ACT.mX[6924UL] = t3626->mX.mX[720UL];
    out->mOBS_ACT.mX[6925UL] = zc_int265;
    out->mOBS_ACT.mX[6926UL] = zc_int362 - intrm_sf_mf_80;
    out->mOBS_ACT.mX[6927UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6928UL] = t3626->mX.mX[728UL];
    out->mOBS_ACT.mX[6929UL] = t3626->mX.mX[728UL];
    out->mOBS_ACT.mX[6930UL] = t3626->mX.mX[728UL];
    out->mOBS_ACT.mX[6931UL] = t3626->mX.mX[728UL];
    out->mOBS_ACT.mX[6932UL] = t3626->mX.mX[729UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[6933UL] = t3626->mX.mX[728UL];
    out->mOBS_ACT.mX[6934UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6935UL] = zc_int383;
    out->mOBS_ACT.mX[6936UL] = t3626->mX.mX[730UL];
    out->mOBS_ACT.mX[6937UL] = t3626->mX.mX[730UL];
    out->mOBS_ACT.mX[6938UL] = t3626->mX.mX[1471UL];
    out->mOBS_ACT.mX[6939UL] = 1.0;
    out->mOBS_ACT.mX[6940UL] = zc_int384;
    for (t2773 = 731UL; t2773 - 731UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6210UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6946UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[6951UL] = 0.0;
    out->mOBS_ACT.mX[6952UL] = t3626->mX.mX[1470UL];
    out->mOBS_ACT.mX[6953UL] = t3626->mX.mX[1472UL] * 1000.0;
    out->mOBS_ACT.mX[6954UL] = t3626->mX.mX[1471UL];
    out->mOBS_ACT.mX[6955UL] = zc_int203;
    out->mOBS_ACT.mX[6956UL] = 1.0;
    out->mOBS_ACT.mX[6957UL] = t3626->mX.mX[1469UL];
    out->mOBS_ACT.mX[6958UL] = 1.0;
    out->mOBS_ACT.mX[6959UL] = t3626->mX.mX[728UL];
    out->mOBS_ACT.mX[6960UL] = t3626->mX.mX[730UL];
    out->mOBS_ACT.mX[6961UL] = 1.0;
    out->mOBS_ACT.mX[6962UL] = t3626->mX.mX[1469UL];
    out->mOBS_ACT.mX[6963UL] = t3626->mX.mX[1470UL];
    out->mOBS_ACT.mX[6964UL] = 1.0;
    out->mOBS_ACT.mX[6965UL] = 1.0;
    out->mOBS_ACT.mX[6966UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6967UL] = zc_int383;
    out->mOBS_ACT.mX[6968UL] = t3626->mX.mX[730UL];
    out->mOBS_ACT.mX[6969UL] = zc_int384;
    out->mOBS_ACT.mX[6970UL] = t3626->mX.mX[1471UL];
    out->mOBS_ACT.mX[6971UL] = t3626->mX.mX[1471UL];
    out->mOBS_ACT.mX[6972UL] = t3626->mX.mX[728UL];
    out->mOBS_ACT.mX[6973UL] = BatteryPack_v2_ModuleAssembly5_Module_1_1_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[6974UL] = t3626->mX.mX[728UL];
    out->mOBS_ACT.mX[6975UL] = t3626->mX.mX[728UL];
    out->mOBS_ACT.mX[6976UL] = t3626->mX.mX[1472UL] * 1000.0;
    out->mOBS_ACT.mX[6977UL] = zc_int203;
    out->mOBS_ACT.mX[6978UL] = t3626->mX.mX[728UL];
    out->mOBS_ACT.mX[6979UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[6980UL] = BatteryPack_v2_ModuleAssembly5_Module_1_1_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[6981UL] = BatteryPack_v2_ModuleAssembly5_Module_1_1_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[6982UL] = zc_int383;
    out->mOBS_ACT.mX[6983UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6984UL] = 0.0;
    out->mOBS_ACT.mX[6985UL] = zc_int383;
    out->mOBS_ACT.mX[6986UL] = zc_int384;
    out->mOBS_ACT.mX[6987UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6988UL] = 0.0;
    out->mOBS_ACT.mX[6989UL] = zc_int384;
    out->mOBS_ACT.mX[6990UL] = t3626->mX.mX[728UL];
    out->mOBS_ACT.mX[6991UL] = BatteryPack_v2_ModuleAssembly5_Module_1_1_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[6992UL] = 0.0;
    out->mOBS_ACT.mX[6993UL] = t3626->mX.mX[728UL];
    out->mOBS_ACT.mX[6994UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[6995UL] = zc_int383;
    out->mOBS_ACT.mX[6996UL] = t3626->mX.mX[730UL];
    out->mOBS_ACT.mX[6997UL] = zc_int384;
    out->mOBS_ACT.mX[6998UL] = t3626->mX.mX[1471UL];
    out->mOBS_ACT.mX[6999UL] = t3626->mX.mX[1471UL];
    out->mOBS_ACT.mX[7000UL] = t3626->mX.mX[728UL];
    out->mOBS_ACT.mX[7001UL] = zc_int203;
    out->mOBS_ACT.mX[7002UL] = zc_int384 - zc_int383;
    out->mOBS_ACT.mX[7003UL] = zc_int384;
    out->mOBS_ACT.mX[7004UL] = intrm_sf_mf_80;
    out->mOBS_ACT.mX[7005UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7006UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7007UL] = t3626->mX.mX[736UL];
    out->mOBS_ACT.mX[7008UL] = t3626->mX.mX[736UL];
    out->mOBS_ACT.mX[7009UL] = t3626->mX.mX[736UL];
    out->mOBS_ACT.mX[7010UL] = t3626->mX.mX[736UL];
    out->mOBS_ACT.mX[7011UL] = t3626->mX.mX[737UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[7012UL] = t3626->mX.mX[736UL];
    out->mOBS_ACT.mX[7013UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7014UL] = intrm_sf_mf_79;
    out->mOBS_ACT.mX[7015UL] = t3626->mX.mX[738UL];
    out->mOBS_ACT.mX[7016UL] = t3626->mX.mX[738UL];
    out->mOBS_ACT.mX[7017UL] = t3626->mX.mX[1475UL];
    out->mOBS_ACT.mX[7018UL] = 1.0;
    out->mOBS_ACT.mX[7019UL] = zc_int360;
    for (t2773 = 739UL; t2773 - 739UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6281UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7025UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[7030UL] = 0.0;
    out->mOBS_ACT.mX[7031UL] = t3626->mX.mX[1474UL];
    out->mOBS_ACT.mX[7032UL] = t3626->mX.mX[1476UL] * 1000.0;
    out->mOBS_ACT.mX[7033UL] = t3626->mX.mX[1475UL];
    out->mOBS_ACT.mX[7034UL] = zc_int273;
    out->mOBS_ACT.mX[7035UL] = 1.0;
    out->mOBS_ACT.mX[7036UL] = t3626->mX.mX[1473UL];
    out->mOBS_ACT.mX[7037UL] = 1.0;
    out->mOBS_ACT.mX[7038UL] = t3626->mX.mX[736UL];
    out->mOBS_ACT.mX[7039UL] = t3626->mX.mX[738UL];
    out->mOBS_ACT.mX[7040UL] = 1.0;
    out->mOBS_ACT.mX[7041UL] = t3626->mX.mX[1473UL];
    out->mOBS_ACT.mX[7042UL] = t3626->mX.mX[1474UL];
    out->mOBS_ACT.mX[7043UL] = 1.0;
    out->mOBS_ACT.mX[7044UL] = 1.0;
    out->mOBS_ACT.mX[7045UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7046UL] = intrm_sf_mf_79;
    out->mOBS_ACT.mX[7047UL] = t3626->mX.mX[738UL];
    out->mOBS_ACT.mX[7048UL] = zc_int360;
    out->mOBS_ACT.mX[7049UL] = t3626->mX.mX[1475UL];
    out->mOBS_ACT.mX[7050UL] = t3626->mX.mX[1475UL];
    out->mOBS_ACT.mX[7051UL] = t3626->mX.mX[736UL];
    out->mOBS_ACT.mX[7052UL] = BatteryPack_v2_ModuleAssembly6_Module02_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[7053UL] = t3626->mX.mX[736UL];
    out->mOBS_ACT.mX[7054UL] = t3626->mX.mX[736UL];
    out->mOBS_ACT.mX[7055UL] = t3626->mX.mX[1476UL] * 1000.0;
    out->mOBS_ACT.mX[7056UL] = zc_int273;
    out->mOBS_ACT.mX[7057UL] = t3626->mX.mX[736UL];
    out->mOBS_ACT.mX[7058UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7059UL] = BatteryPack_v2_ModuleAssembly6_Module02_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[7060UL] = BatteryPack_v2_ModuleAssembly6_Module02_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[7061UL] = intrm_sf_mf_79;
    out->mOBS_ACT.mX[7062UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7063UL] = 0.0;
    out->mOBS_ACT.mX[7064UL] = intrm_sf_mf_79;
    out->mOBS_ACT.mX[7065UL] = zc_int360;
    out->mOBS_ACT.mX[7066UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7067UL] = 0.0;
    out->mOBS_ACT.mX[7068UL] = zc_int360;
    out->mOBS_ACT.mX[7069UL] = t3626->mX.mX[736UL];
    out->mOBS_ACT.mX[7070UL] = BatteryPack_v2_ModuleAssembly6_Module02_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[7071UL] = 0.0;
    out->mOBS_ACT.mX[7072UL] = t3626->mX.mX[736UL];
    out->mOBS_ACT.mX[7073UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7074UL] = intrm_sf_mf_79;
    out->mOBS_ACT.mX[7075UL] = t3626->mX.mX[738UL];
    out->mOBS_ACT.mX[7076UL] = zc_int360;
    out->mOBS_ACT.mX[7077UL] = t3626->mX.mX[1475UL];
    out->mOBS_ACT.mX[7078UL] = t3626->mX.mX[1475UL];
    out->mOBS_ACT.mX[7079UL] = t3626->mX.mX[736UL];
    out->mOBS_ACT.mX[7080UL] = zc_int273;
    out->mOBS_ACT.mX[7081UL] = zc_int360 - intrm_sf_mf_79;
    out->mOBS_ACT.mX[7082UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7083UL] = t3626->mX.mX[744UL];
    out->mOBS_ACT.mX[7084UL] = t3626->mX.mX[744UL];
    out->mOBS_ACT.mX[7085UL] = t3626->mX.mX[744UL];
    out->mOBS_ACT.mX[7086UL] = t3626->mX.mX[744UL];
    out->mOBS_ACT.mX[7087UL] = t3626->mX.mX[745UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[7088UL] = t3626->mX.mX[744UL];
    out->mOBS_ACT.mX[7089UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7090UL] = zc_int358;
    out->mOBS_ACT.mX[7091UL] = t3626->mX.mX[746UL];
    out->mOBS_ACT.mX[7092UL] = t3626->mX.mX[746UL];
    out->mOBS_ACT.mX[7093UL] = t3626->mX.mX[1479UL];
    out->mOBS_ACT.mX[7094UL] = 1.0;
    out->mOBS_ACT.mX[7095UL] = intrm_sf_mf_79;
    for (t2773 = 747UL; t2773 - 747UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6349UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7101UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[7106UL] = 0.0;
    out->mOBS_ACT.mX[7107UL] = t3626->mX.mX[1478UL];
    out->mOBS_ACT.mX[7108UL] = t3626->mX.mX[1480UL] * 1000.0;
    out->mOBS_ACT.mX[7109UL] = t3626->mX.mX[1479UL];
    out->mOBS_ACT.mX[7110UL] = zc_int276;
    out->mOBS_ACT.mX[7111UL] = 1.0;
    out->mOBS_ACT.mX[7112UL] = t3626->mX.mX[1477UL];
    out->mOBS_ACT.mX[7113UL] = 1.0;
    out->mOBS_ACT.mX[7114UL] = t3626->mX.mX[744UL];
    out->mOBS_ACT.mX[7115UL] = t3626->mX.mX[746UL];
    out->mOBS_ACT.mX[7116UL] = 1.0;
    out->mOBS_ACT.mX[7117UL] = t3626->mX.mX[1477UL];
    out->mOBS_ACT.mX[7118UL] = t3626->mX.mX[1478UL];
    out->mOBS_ACT.mX[7119UL] = 1.0;
    out->mOBS_ACT.mX[7120UL] = 1.0;
    out->mOBS_ACT.mX[7121UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7122UL] = zc_int358;
    out->mOBS_ACT.mX[7123UL] = t3626->mX.mX[746UL];
    out->mOBS_ACT.mX[7124UL] = intrm_sf_mf_79;
    out->mOBS_ACT.mX[7125UL] = t3626->mX.mX[1479UL];
    out->mOBS_ACT.mX[7126UL] = t3626->mX.mX[1479UL];
    out->mOBS_ACT.mX[7127UL] = t3626->mX.mX[744UL];
    out->mOBS_ACT.mX[7128UL] = BatteryPack_v2_ModuleAssembly6_Module03_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[7129UL] = t3626->mX.mX[744UL];
    out->mOBS_ACT.mX[7130UL] = t3626->mX.mX[744UL];
    out->mOBS_ACT.mX[7131UL] = t3626->mX.mX[1480UL] * 1000.0;
    out->mOBS_ACT.mX[7132UL] = zc_int276;
    out->mOBS_ACT.mX[7133UL] = t3626->mX.mX[744UL];
    out->mOBS_ACT.mX[7134UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7135UL] = BatteryPack_v2_ModuleAssembly6_Module03_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[7136UL] = BatteryPack_v2_ModuleAssembly6_Module03_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[7137UL] = zc_int358;
    out->mOBS_ACT.mX[7138UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7139UL] = 0.0;
    out->mOBS_ACT.mX[7140UL] = zc_int358;
    out->mOBS_ACT.mX[7141UL] = intrm_sf_mf_79;
    out->mOBS_ACT.mX[7142UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7143UL] = 0.0;
    out->mOBS_ACT.mX[7144UL] = intrm_sf_mf_79;
    out->mOBS_ACT.mX[7145UL] = t3626->mX.mX[744UL];
    out->mOBS_ACT.mX[7146UL] = BatteryPack_v2_ModuleAssembly6_Module03_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[7147UL] = 0.0;
    out->mOBS_ACT.mX[7148UL] = t3626->mX.mX[744UL];
    out->mOBS_ACT.mX[7149UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7150UL] = zc_int358;
    out->mOBS_ACT.mX[7151UL] = t3626->mX.mX[746UL];
    out->mOBS_ACT.mX[7152UL] = intrm_sf_mf_79;
    out->mOBS_ACT.mX[7153UL] = t3626->mX.mX[1479UL];
    out->mOBS_ACT.mX[7154UL] = t3626->mX.mX[1479UL];
    out->mOBS_ACT.mX[7155UL] = t3626->mX.mX[744UL];
    out->mOBS_ACT.mX[7156UL] = zc_int276;
    out->mOBS_ACT.mX[7157UL] = intrm_sf_mf_79 - zc_int358;
    out->mOBS_ACT.mX[7158UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7159UL] = t3626->mX.mX[752UL];
    out->mOBS_ACT.mX[7160UL] = t3626->mX.mX[752UL];
    out->mOBS_ACT.mX[7161UL] = t3626->mX.mX[752UL];
    out->mOBS_ACT.mX[7162UL] = t3626->mX.mX[752UL];
    out->mOBS_ACT.mX[7163UL] = t3626->mX.mX[753UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[7164UL] = t3626->mX.mX[752UL];
    out->mOBS_ACT.mX[7165UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7166UL] = zc_int357;
    out->mOBS_ACT.mX[7167UL] = t3626->mX.mX[754UL];
    out->mOBS_ACT.mX[7168UL] = t3626->mX.mX[754UL];
    out->mOBS_ACT.mX[7169UL] = t3626->mX.mX[1483UL];
    out->mOBS_ACT.mX[7170UL] = 1.0;
    out->mOBS_ACT.mX[7171UL] = zc_int358;
    for (t2773 = 755UL; t2773 - 755UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6417UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7177UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[7182UL] = 0.0;
    out->mOBS_ACT.mX[7183UL] = t3626->mX.mX[1482UL];
    out->mOBS_ACT.mX[7184UL] = t3626->mX.mX[1484UL] * 1000.0;
    out->mOBS_ACT.mX[7185UL] = t3626->mX.mX[1483UL];
    out->mOBS_ACT.mX[7186UL] = zc_int281;
    out->mOBS_ACT.mX[7187UL] = 1.0;
    out->mOBS_ACT.mX[7188UL] = t3626->mX.mX[1481UL];
    out->mOBS_ACT.mX[7189UL] = 1.0;
    out->mOBS_ACT.mX[7190UL] = t3626->mX.mX[752UL];
    out->mOBS_ACT.mX[7191UL] = t3626->mX.mX[754UL];
    out->mOBS_ACT.mX[7192UL] = 1.0;
    out->mOBS_ACT.mX[7193UL] = t3626->mX.mX[1481UL];
    out->mOBS_ACT.mX[7194UL] = t3626->mX.mX[1482UL];
    out->mOBS_ACT.mX[7195UL] = 1.0;
    out->mOBS_ACT.mX[7196UL] = 1.0;
    out->mOBS_ACT.mX[7197UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7198UL] = zc_int357;
    out->mOBS_ACT.mX[7199UL] = t3626->mX.mX[754UL];
    out->mOBS_ACT.mX[7200UL] = zc_int358;
    out->mOBS_ACT.mX[7201UL] = t3626->mX.mX[1483UL];
    out->mOBS_ACT.mX[7202UL] = t3626->mX.mX[1483UL];
    out->mOBS_ACT.mX[7203UL] = t3626->mX.mX[752UL];
    out->mOBS_ACT.mX[7204UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[7205UL] = t3626->mX.mX[752UL];
    out->mOBS_ACT.mX[7206UL] = t3626->mX.mX[752UL];
    out->mOBS_ACT.mX[7207UL] = t3626->mX.mX[1484UL] * 1000.0;
    out->mOBS_ACT.mX[7208UL] = zc_int281;
    out->mOBS_ACT.mX[7209UL] = t3626->mX.mX[752UL];
    out->mOBS_ACT.mX[7210UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7211UL] = BatteryPack_v2_ModuleAssembly6_Module04_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[7212UL] = BatteryPack_v2_ModuleAssembly6_Module04_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[7213UL] = zc_int357;
    out->mOBS_ACT.mX[7214UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7215UL] = 0.0;
    out->mOBS_ACT.mX[7216UL] = zc_int357;
    out->mOBS_ACT.mX[7217UL] = zc_int358;
    out->mOBS_ACT.mX[7218UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7219UL] = 0.0;
    out->mOBS_ACT.mX[7220UL] = zc_int358;
    out->mOBS_ACT.mX[7221UL] = t3626->mX.mX[752UL];
    out->mOBS_ACT.mX[7222UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[7223UL] = 0.0;
    out->mOBS_ACT.mX[7224UL] = t3626->mX.mX[752UL];
    out->mOBS_ACT.mX[7225UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7226UL] = zc_int357;
    out->mOBS_ACT.mX[7227UL] = t3626->mX.mX[754UL];
    out->mOBS_ACT.mX[7228UL] = zc_int358;
    out->mOBS_ACT.mX[7229UL] = t3626->mX.mX[1483UL];
    out->mOBS_ACT.mX[7230UL] = t3626->mX.mX[1483UL];
    out->mOBS_ACT.mX[7231UL] = t3626->mX.mX[752UL];
    out->mOBS_ACT.mX[7232UL] = zc_int281;
    out->mOBS_ACT.mX[7233UL] = zc_int358 - zc_int357;
    out->mOBS_ACT.mX[7234UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7235UL] = t3626->mX.mX[760UL];
    out->mOBS_ACT.mX[7236UL] = t3626->mX.mX[760UL];
    out->mOBS_ACT.mX[7237UL] = t3626->mX.mX[760UL];
    out->mOBS_ACT.mX[7238UL] = t3626->mX.mX[760UL];
    out->mOBS_ACT.mX[7239UL] = t3626->mX.mX[761UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[7240UL] = t3626->mX.mX[760UL];
    out->mOBS_ACT.mX[7241UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7242UL] = zc_int356;
    out->mOBS_ACT.mX[7243UL] = t3626->mX.mX[762UL];
    out->mOBS_ACT.mX[7244UL] = t3626->mX.mX[762UL];
    out->mOBS_ACT.mX[7245UL] = t3626->mX.mX[1487UL];
    out->mOBS_ACT.mX[7246UL] = 1.0;
    out->mOBS_ACT.mX[7247UL] = zc_int357;
    for (t2773 = 763UL; t2773 - 763UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6485UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7253UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[7258UL] = 0.0;
    out->mOBS_ACT.mX[7259UL] = t3626->mX.mX[1486UL];
    out->mOBS_ACT.mX[7260UL] = t3626->mX.mX[1488UL] * 1000.0;
    out->mOBS_ACT.mX[7261UL] = t3626->mX.mX[1487UL];
    out->mOBS_ACT.mX[7262UL] = zc_int279;
    out->mOBS_ACT.mX[7263UL] = 1.0;
    out->mOBS_ACT.mX[7264UL] = t3626->mX.mX[1485UL];
    out->mOBS_ACT.mX[7265UL] = 1.0;
    out->mOBS_ACT.mX[7266UL] = t3626->mX.mX[760UL];
    out->mOBS_ACT.mX[7267UL] = t3626->mX.mX[762UL];
    out->mOBS_ACT.mX[7268UL] = 1.0;
    out->mOBS_ACT.mX[7269UL] = t3626->mX.mX[1485UL];
    out->mOBS_ACT.mX[7270UL] = t3626->mX.mX[1486UL];
    out->mOBS_ACT.mX[7271UL] = 1.0;
    out->mOBS_ACT.mX[7272UL] = 1.0;
    out->mOBS_ACT.mX[7273UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7274UL] = zc_int356;
    out->mOBS_ACT.mX[7275UL] = t3626->mX.mX[762UL];
    out->mOBS_ACT.mX[7276UL] = zc_int357;
    out->mOBS_ACT.mX[7277UL] = t3626->mX.mX[1487UL];
    out->mOBS_ACT.mX[7278UL] = t3626->mX.mX[1487UL];
    out->mOBS_ACT.mX[7279UL] = t3626->mX.mX[760UL];
    out->mOBS_ACT.mX[7280UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[7281UL] = t3626->mX.mX[760UL];
    out->mOBS_ACT.mX[7282UL] = t3626->mX.mX[760UL];
    out->mOBS_ACT.mX[7283UL] = t3626->mX.mX[1488UL] * 1000.0;
    out->mOBS_ACT.mX[7284UL] = zc_int279;
    out->mOBS_ACT.mX[7285UL] = t3626->mX.mX[760UL];
    out->mOBS_ACT.mX[7286UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7287UL] = BatteryPack_v2_ModuleAssembly6_Module05_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[7288UL] = BatteryPack_v2_ModuleAssembly6_Module05_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[7289UL] = zc_int356;
    out->mOBS_ACT.mX[7290UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7291UL] = 0.0;
    out->mOBS_ACT.mX[7292UL] = zc_int356;
    out->mOBS_ACT.mX[7293UL] = zc_int357;
    out->mOBS_ACT.mX[7294UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7295UL] = 0.0;
    out->mOBS_ACT.mX[7296UL] = zc_int357;
    out->mOBS_ACT.mX[7297UL] = t3626->mX.mX[760UL];
    out->mOBS_ACT.mX[7298UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[7299UL] = 0.0;
    out->mOBS_ACT.mX[7300UL] = t3626->mX.mX[760UL];
    out->mOBS_ACT.mX[7301UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7302UL] = zc_int356;
    out->mOBS_ACT.mX[7303UL] = t3626->mX.mX[762UL];
    out->mOBS_ACT.mX[7304UL] = zc_int357;
    out->mOBS_ACT.mX[7305UL] = t3626->mX.mX[1487UL];
    out->mOBS_ACT.mX[7306UL] = t3626->mX.mX[1487UL];
    out->mOBS_ACT.mX[7307UL] = t3626->mX.mX[760UL];
    out->mOBS_ACT.mX[7308UL] = zc_int279;
    out->mOBS_ACT.mX[7309UL] = zc_int357 - zc_int356;
    out->mOBS_ACT.mX[7310UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7311UL] = t3626->mX.mX[768UL];
    out->mOBS_ACT.mX[7312UL] = t3626->mX.mX[768UL];
    out->mOBS_ACT.mX[7313UL] = t3626->mX.mX[768UL];
    out->mOBS_ACT.mX[7314UL] = t3626->mX.mX[768UL];
    out->mOBS_ACT.mX[7315UL] = t3626->mX.mX[769UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[7316UL] = t3626->mX.mX[768UL];
    out->mOBS_ACT.mX[7317UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7318UL] = zc_int355;
    out->mOBS_ACT.mX[7319UL] = t3626->mX.mX[770UL];
    out->mOBS_ACT.mX[7320UL] = t3626->mX.mX[770UL];
    out->mOBS_ACT.mX[7321UL] = t3626->mX.mX[1491UL];
    out->mOBS_ACT.mX[7322UL] = 1.0;
    out->mOBS_ACT.mX[7323UL] = zc_int356;
    for (t2773 = 771UL; t2773 - 771UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6553UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7329UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[7334UL] = 0.0;
    out->mOBS_ACT.mX[7335UL] = t3626->mX.mX[1490UL];
    out->mOBS_ACT.mX[7336UL] = t3626->mX.mX[1492UL] * 1000.0;
    out->mOBS_ACT.mX[7337UL] = t3626->mX.mX[1491UL];
    out->mOBS_ACT.mX[7338UL] = zc_int283;
    out->mOBS_ACT.mX[7339UL] = 1.0;
    out->mOBS_ACT.mX[7340UL] = t3626->mX.mX[1489UL];
    out->mOBS_ACT.mX[7341UL] = 1.0;
    out->mOBS_ACT.mX[7342UL] = t3626->mX.mX[768UL];
    out->mOBS_ACT.mX[7343UL] = t3626->mX.mX[770UL];
    out->mOBS_ACT.mX[7344UL] = 1.0;
    out->mOBS_ACT.mX[7345UL] = t3626->mX.mX[1489UL];
    out->mOBS_ACT.mX[7346UL] = t3626->mX.mX[1490UL];
    out->mOBS_ACT.mX[7347UL] = 1.0;
    out->mOBS_ACT.mX[7348UL] = 1.0;
    out->mOBS_ACT.mX[7349UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7350UL] = zc_int355;
    out->mOBS_ACT.mX[7351UL] = t3626->mX.mX[770UL];
    out->mOBS_ACT.mX[7352UL] = zc_int356;
    out->mOBS_ACT.mX[7353UL] = t3626->mX.mX[1491UL];
    out->mOBS_ACT.mX[7354UL] = t3626->mX.mX[1491UL];
    out->mOBS_ACT.mX[7355UL] = t3626->mX.mX[768UL];
    out->mOBS_ACT.mX[7356UL] = BatteryPack_v2_ModuleAssembly6_Module06_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[7357UL] = t3626->mX.mX[768UL];
    out->mOBS_ACT.mX[7358UL] = t3626->mX.mX[768UL];
    out->mOBS_ACT.mX[7359UL] = t3626->mX.mX[1492UL] * 1000.0;
    out->mOBS_ACT.mX[7360UL] = zc_int283;
    out->mOBS_ACT.mX[7361UL] = t3626->mX.mX[768UL];
    out->mOBS_ACT.mX[7362UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7363UL] = BatteryPack_v2_ModuleAssembly6_Module06_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[7364UL] = BatteryPack_v2_ModuleAssembly6_Module06_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[7365UL] = zc_int355;
    out->mOBS_ACT.mX[7366UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7367UL] = 0.0;
    out->mOBS_ACT.mX[7368UL] = zc_int355;
    out->mOBS_ACT.mX[7369UL] = zc_int356;
    out->mOBS_ACT.mX[7370UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7371UL] = 0.0;
    out->mOBS_ACT.mX[7372UL] = zc_int356;
    out->mOBS_ACT.mX[7373UL] = t3626->mX.mX[768UL];
    out->mOBS_ACT.mX[7374UL] = BatteryPack_v2_ModuleAssembly6_Module06_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[7375UL] = 0.0;
    out->mOBS_ACT.mX[7376UL] = t3626->mX.mX[768UL];
    out->mOBS_ACT.mX[7377UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7378UL] = zc_int355;
    out->mOBS_ACT.mX[7379UL] = t3626->mX.mX[770UL];
    out->mOBS_ACT.mX[7380UL] = zc_int356;
    out->mOBS_ACT.mX[7381UL] = t3626->mX.mX[1491UL];
    out->mOBS_ACT.mX[7382UL] = t3626->mX.mX[1491UL];
    out->mOBS_ACT.mX[7383UL] = t3626->mX.mX[768UL];
    out->mOBS_ACT.mX[7384UL] = zc_int283;
    out->mOBS_ACT.mX[7385UL] = zc_int356 - zc_int355;
    out->mOBS_ACT.mX[7386UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7387UL] = t3626->mX.mX[776UL];
    out->mOBS_ACT.mX[7388UL] = t3626->mX.mX[776UL];
    out->mOBS_ACT.mX[7389UL] = t3626->mX.mX[776UL];
    out->mOBS_ACT.mX[7390UL] = t3626->mX.mX[776UL];
    out->mOBS_ACT.mX[7391UL] = t3626->mX.mX[777UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[7392UL] = t3626->mX.mX[776UL];
    out->mOBS_ACT.mX[7393UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7394UL] = zc_int354;
    out->mOBS_ACT.mX[7395UL] = t3626->mX.mX[778UL];
    out->mOBS_ACT.mX[7396UL] = t3626->mX.mX[778UL];
    out->mOBS_ACT.mX[7397UL] = t3626->mX.mX[1495UL];
    out->mOBS_ACT.mX[7398UL] = 1.0;
    out->mOBS_ACT.mX[7399UL] = zc_int355;
    for (t2773 = 779UL; t2773 - 779UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6621UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7405UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[7410UL] = 0.0;
    out->mOBS_ACT.mX[7411UL] = t3626->mX.mX[1494UL];
    out->mOBS_ACT.mX[7412UL] = t3626->mX.mX[1496UL] * 1000.0;
    out->mOBS_ACT.mX[7413UL] = t3626->mX.mX[1495UL];
    out->mOBS_ACT.mX[7414UL] = zc_int290;
    out->mOBS_ACT.mX[7415UL] = 1.0;
    out->mOBS_ACT.mX[7416UL] = t3626->mX.mX[1493UL];
    out->mOBS_ACT.mX[7417UL] = 1.0;
    out->mOBS_ACT.mX[7418UL] = t3626->mX.mX[776UL];
    out->mOBS_ACT.mX[7419UL] = t3626->mX.mX[778UL];
    out->mOBS_ACT.mX[7420UL] = 1.0;
    out->mOBS_ACT.mX[7421UL] = t3626->mX.mX[1493UL];
    out->mOBS_ACT.mX[7422UL] = t3626->mX.mX[1494UL];
    out->mOBS_ACT.mX[7423UL] = 1.0;
    out->mOBS_ACT.mX[7424UL] = 1.0;
    out->mOBS_ACT.mX[7425UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7426UL] = zc_int354;
    out->mOBS_ACT.mX[7427UL] = t3626->mX.mX[778UL];
    out->mOBS_ACT.mX[7428UL] = zc_int355;
    out->mOBS_ACT.mX[7429UL] = t3626->mX.mX[1495UL];
    out->mOBS_ACT.mX[7430UL] = t3626->mX.mX[1495UL];
    out->mOBS_ACT.mX[7431UL] = t3626->mX.mX[776UL];
    out->mOBS_ACT.mX[7432UL] = BatteryPack_v2_ModuleAssembly6_Module07_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[7433UL] = t3626->mX.mX[776UL];
    out->mOBS_ACT.mX[7434UL] = t3626->mX.mX[776UL];
    out->mOBS_ACT.mX[7435UL] = t3626->mX.mX[1496UL] * 1000.0;
    out->mOBS_ACT.mX[7436UL] = zc_int290;
    out->mOBS_ACT.mX[7437UL] = t3626->mX.mX[776UL];
    out->mOBS_ACT.mX[7438UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7439UL] = BatteryPack_v2_ModuleAssembly6_Module07_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[7440UL] = BatteryPack_v2_ModuleAssembly6_Module07_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[7441UL] = zc_int354;
    out->mOBS_ACT.mX[7442UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7443UL] = 0.0;
    out->mOBS_ACT.mX[7444UL] = zc_int354;
    out->mOBS_ACT.mX[7445UL] = zc_int355;
    out->mOBS_ACT.mX[7446UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7447UL] = 0.0;
    out->mOBS_ACT.mX[7448UL] = zc_int355;
    out->mOBS_ACT.mX[7449UL] = t3626->mX.mX[776UL];
    out->mOBS_ACT.mX[7450UL] = BatteryPack_v2_ModuleAssembly6_Module07_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[7451UL] = 0.0;
    out->mOBS_ACT.mX[7452UL] = t3626->mX.mX[776UL];
    out->mOBS_ACT.mX[7453UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7454UL] = zc_int354;
    out->mOBS_ACT.mX[7455UL] = t3626->mX.mX[778UL];
    out->mOBS_ACT.mX[7456UL] = zc_int355;
    out->mOBS_ACT.mX[7457UL] = t3626->mX.mX[1495UL];
    out->mOBS_ACT.mX[7458UL] = t3626->mX.mX[1495UL];
    out->mOBS_ACT.mX[7459UL] = t3626->mX.mX[776UL];
    out->mOBS_ACT.mX[7460UL] = zc_int290;
    out->mOBS_ACT.mX[7461UL] = zc_int355 - zc_int354;
    out->mOBS_ACT.mX[7462UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7463UL] = t3626->mX.mX[784UL];
    out->mOBS_ACT.mX[7464UL] = t3626->mX.mX[784UL];
    out->mOBS_ACT.mX[7465UL] = t3626->mX.mX[784UL];
    out->mOBS_ACT.mX[7466UL] = t3626->mX.mX[784UL];
    out->mOBS_ACT.mX[7467UL] = t3626->mX.mX[785UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[7468UL] = t3626->mX.mX[784UL];
    out->mOBS_ACT.mX[7469UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7470UL] = zc_int353;
    out->mOBS_ACT.mX[7471UL] = t3626->mX.mX[786UL];
    out->mOBS_ACT.mX[7472UL] = t3626->mX.mX[786UL];
    out->mOBS_ACT.mX[7473UL] = t3626->mX.mX[1499UL];
    out->mOBS_ACT.mX[7474UL] = 1.0;
    out->mOBS_ACT.mX[7475UL] = zc_int354;
    for (t2773 = 787UL; t2773 - 787UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6689UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7481UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[7486UL] = 0.0;
    out->mOBS_ACT.mX[7487UL] = t3626->mX.mX[1498UL];
    out->mOBS_ACT.mX[7488UL] = t3626->mX.mX[1500UL] * 1000.0;
    out->mOBS_ACT.mX[7489UL] = t3626->mX.mX[1499UL];
    out->mOBS_ACT.mX[7490UL] = zc_int293;
    out->mOBS_ACT.mX[7491UL] = 1.0;
    out->mOBS_ACT.mX[7492UL] = t3626->mX.mX[1497UL];
    out->mOBS_ACT.mX[7493UL] = 1.0;
    out->mOBS_ACT.mX[7494UL] = t3626->mX.mX[784UL];
    out->mOBS_ACT.mX[7495UL] = t3626->mX.mX[786UL];
    out->mOBS_ACT.mX[7496UL] = 1.0;
    out->mOBS_ACT.mX[7497UL] = t3626->mX.mX[1497UL];
    out->mOBS_ACT.mX[7498UL] = t3626->mX.mX[1498UL];
    out->mOBS_ACT.mX[7499UL] = 1.0;
    out->mOBS_ACT.mX[7500UL] = 1.0;
    out->mOBS_ACT.mX[7501UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7502UL] = zc_int353;
    out->mOBS_ACT.mX[7503UL] = t3626->mX.mX[786UL];
    out->mOBS_ACT.mX[7504UL] = zc_int354;
    out->mOBS_ACT.mX[7505UL] = t3626->mX.mX[1499UL];
    out->mOBS_ACT.mX[7506UL] = t3626->mX.mX[1499UL];
    out->mOBS_ACT.mX[7507UL] = t3626->mX.mX[784UL];
    out->mOBS_ACT.mX[7508UL] = BatteryPack_v2_ModuleAssembly6_Module08_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[7509UL] = t3626->mX.mX[784UL];
    out->mOBS_ACT.mX[7510UL] = t3626->mX.mX[784UL];
    out->mOBS_ACT.mX[7511UL] = t3626->mX.mX[1500UL] * 1000.0;
    out->mOBS_ACT.mX[7512UL] = zc_int293;
    out->mOBS_ACT.mX[7513UL] = t3626->mX.mX[784UL];
    out->mOBS_ACT.mX[7514UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7515UL] = BatteryPack_v2_ModuleAssembly6_Module08_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[7516UL] = BatteryPack_v2_ModuleAssembly6_Module08_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[7517UL] = zc_int353;
    out->mOBS_ACT.mX[7518UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7519UL] = 0.0;
    out->mOBS_ACT.mX[7520UL] = zc_int353;
    out->mOBS_ACT.mX[7521UL] = zc_int354;
    out->mOBS_ACT.mX[7522UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7523UL] = 0.0;
    out->mOBS_ACT.mX[7524UL] = zc_int354;
    out->mOBS_ACT.mX[7525UL] = t3626->mX.mX[784UL];
    out->mOBS_ACT.mX[7526UL] = BatteryPack_v2_ModuleAssembly6_Module08_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[7527UL] = 0.0;
    out->mOBS_ACT.mX[7528UL] = t3626->mX.mX[784UL];
    out->mOBS_ACT.mX[7529UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7530UL] = zc_int353;
    out->mOBS_ACT.mX[7531UL] = t3626->mX.mX[786UL];
    out->mOBS_ACT.mX[7532UL] = zc_int354;
    out->mOBS_ACT.mX[7533UL] = t3626->mX.mX[1499UL];
    out->mOBS_ACT.mX[7534UL] = t3626->mX.mX[1499UL];
    out->mOBS_ACT.mX[7535UL] = t3626->mX.mX[784UL];
    out->mOBS_ACT.mX[7536UL] = zc_int293;
    out->mOBS_ACT.mX[7537UL] = zc_int354 - zc_int353;
    out->mOBS_ACT.mX[7538UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7539UL] = t3626->mX.mX[792UL];
    out->mOBS_ACT.mX[7540UL] = t3626->mX.mX[792UL];
    out->mOBS_ACT.mX[7541UL] = t3626->mX.mX[792UL];
    out->mOBS_ACT.mX[7542UL] = t3626->mX.mX[792UL];
    out->mOBS_ACT.mX[7543UL] = t3626->mX.mX[793UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[7544UL] = t3626->mX.mX[792UL];
    out->mOBS_ACT.mX[7545UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7546UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[7547UL] = t3626->mX.mX[794UL];
    out->mOBS_ACT.mX[7548UL] = t3626->mX.mX[794UL];
    out->mOBS_ACT.mX[7549UL] = t3626->mX.mX[1503UL];
    out->mOBS_ACT.mX[7550UL] = 1.0;
    out->mOBS_ACT.mX[7551UL] = zc_int353;
    for (t2773 = 795UL; t2773 - 795UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6757UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7557UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[7562UL] = 0.0;
    out->mOBS_ACT.mX[7563UL] = t3626->mX.mX[1502UL];
    out->mOBS_ACT.mX[7564UL] = t3626->mX.mX[1504UL] * 1000.0;
    out->mOBS_ACT.mX[7565UL] = t3626->mX.mX[1503UL];
    out->mOBS_ACT.mX[7566UL] = zc_int289;
    out->mOBS_ACT.mX[7567UL] = 1.0;
    out->mOBS_ACT.mX[7568UL] = t3626->mX.mX[1501UL];
    out->mOBS_ACT.mX[7569UL] = 1.0;
    out->mOBS_ACT.mX[7570UL] = t3626->mX.mX[792UL];
    out->mOBS_ACT.mX[7571UL] = t3626->mX.mX[794UL];
    out->mOBS_ACT.mX[7572UL] = 1.0;
    out->mOBS_ACT.mX[7573UL] = t3626->mX.mX[1501UL];
    out->mOBS_ACT.mX[7574UL] = t3626->mX.mX[1502UL];
    out->mOBS_ACT.mX[7575UL] = 1.0;
    out->mOBS_ACT.mX[7576UL] = 1.0;
    out->mOBS_ACT.mX[7577UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7578UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[7579UL] = t3626->mX.mX[794UL];
    out->mOBS_ACT.mX[7580UL] = zc_int353;
    out->mOBS_ACT.mX[7581UL] = t3626->mX.mX[1503UL];
    out->mOBS_ACT.mX[7582UL] = t3626->mX.mX[1503UL];
    out->mOBS_ACT.mX[7583UL] = t3626->mX.mX[792UL];
    out->mOBS_ACT.mX[7584UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[7585UL] = t3626->mX.mX[792UL];
    out->mOBS_ACT.mX[7586UL] = t3626->mX.mX[792UL];
    out->mOBS_ACT.mX[7587UL] = t3626->mX.mX[1504UL] * 1000.0;
    out->mOBS_ACT.mX[7588UL] = zc_int289;
    out->mOBS_ACT.mX[7589UL] = t3626->mX.mX[792UL];
    out->mOBS_ACT.mX[7590UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7591UL] = BatteryPack_v2_ModuleAssembly6_Module09_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[7592UL] = BatteryPack_v2_ModuleAssembly6_Module09_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[7593UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[7594UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7595UL] = 0.0;
    out->mOBS_ACT.mX[7596UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[7597UL] = zc_int353;
    out->mOBS_ACT.mX[7598UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7599UL] = 0.0;
    out->mOBS_ACT.mX[7600UL] = zc_int353;
    out->mOBS_ACT.mX[7601UL] = t3626->mX.mX[792UL];
    out->mOBS_ACT.mX[7602UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[7603UL] = 0.0;
    out->mOBS_ACT.mX[7604UL] = t3626->mX.mX[792UL];
    out->mOBS_ACT.mX[7605UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7606UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[7607UL] = t3626->mX.mX[794UL];
    out->mOBS_ACT.mX[7608UL] = zc_int353;
    out->mOBS_ACT.mX[7609UL] = t3626->mX.mX[1503UL];
    out->mOBS_ACT.mX[7610UL] = t3626->mX.mX[1503UL];
    out->mOBS_ACT.mX[7611UL] = t3626->mX.mX[792UL];
    out->mOBS_ACT.mX[7612UL] = zc_int289;
    out->mOBS_ACT.mX[7613UL] = zc_int353 - BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[7614UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7615UL] = t3626->mX.mX[800UL];
    out->mOBS_ACT.mX[7616UL] = t3626->mX.mX[800UL];
    out->mOBS_ACT.mX[7617UL] = t3626->mX.mX[800UL];
    out->mOBS_ACT.mX[7618UL] = t3626->mX.mX[800UL];
    out->mOBS_ACT.mX[7619UL] = t3626->mX.mX[801UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[7620UL] = t3626->mX.mX[800UL];
    out->mOBS_ACT.mX[7621UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7622UL] = intrm_sf_mf_75;
    out->mOBS_ACT.mX[7623UL] = t3626->mX.mX[802UL];
    out->mOBS_ACT.mX[7624UL] = t3626->mX.mX[802UL];
    out->mOBS_ACT.mX[7625UL] = t3626->mX.mX[1507UL];
    out->mOBS_ACT.mX[7626UL] = 1.0;
    out->mOBS_ACT.mX[7627UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    for (t2773 = 803UL; t2773 - 803UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6825UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7633UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[7638UL] = 0.0;
    out->mOBS_ACT.mX[7639UL] = t3626->mX.mX[1506UL];
    out->mOBS_ACT.mX[7640UL] = t3626->mX.mX[1508UL] * 1000.0;
    out->mOBS_ACT.mX[7641UL] = t3626->mX.mX[1507UL];
    out->mOBS_ACT.mX[7642UL] = zc_int299;
    out->mOBS_ACT.mX[7643UL] = 1.0;
    out->mOBS_ACT.mX[7644UL] = t3626->mX.mX[1505UL];
    out->mOBS_ACT.mX[7645UL] = 1.0;
    out->mOBS_ACT.mX[7646UL] = t3626->mX.mX[800UL];
    out->mOBS_ACT.mX[7647UL] = t3626->mX.mX[802UL];
    out->mOBS_ACT.mX[7648UL] = 1.0;
    out->mOBS_ACT.mX[7649UL] = t3626->mX.mX[1505UL];
    out->mOBS_ACT.mX[7650UL] = t3626->mX.mX[1506UL];
    out->mOBS_ACT.mX[7651UL] = 1.0;
    out->mOBS_ACT.mX[7652UL] = 1.0;
    out->mOBS_ACT.mX[7653UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7654UL] = intrm_sf_mf_75;
    out->mOBS_ACT.mX[7655UL] = t3626->mX.mX[802UL];
    out->mOBS_ACT.mX[7656UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[7657UL] = t3626->mX.mX[1507UL];
    out->mOBS_ACT.mX[7658UL] = t3626->mX.mX[1507UL];
    out->mOBS_ACT.mX[7659UL] = t3626->mX.mX[800UL];
    out->mOBS_ACT.mX[7660UL] = BatteryPack_v2_ModuleAssembly6_Module10_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[7661UL] = t3626->mX.mX[800UL];
    out->mOBS_ACT.mX[7662UL] = t3626->mX.mX[800UL];
    out->mOBS_ACT.mX[7663UL] = t3626->mX.mX[1508UL] * 1000.0;
    out->mOBS_ACT.mX[7664UL] = zc_int299;
    out->mOBS_ACT.mX[7665UL] = t3626->mX.mX[800UL];
    out->mOBS_ACT.mX[7666UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7667UL] = BatteryPack_v2_ModuleAssembly6_Module10_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[7668UL] = BatteryPack_v2_ModuleAssembly6_Module10_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[7669UL] = intrm_sf_mf_75;
    out->mOBS_ACT.mX[7670UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7671UL] = 0.0;
    out->mOBS_ACT.mX[7672UL] = intrm_sf_mf_75;
    out->mOBS_ACT.mX[7673UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[7674UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7675UL] = 0.0;
    out->mOBS_ACT.mX[7676UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[7677UL] = t3626->mX.mX[800UL];
    out->mOBS_ACT.mX[7678UL] = BatteryPack_v2_ModuleAssembly6_Module10_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[7679UL] = 0.0;
    out->mOBS_ACT.mX[7680UL] = t3626->mX.mX[800UL];
    out->mOBS_ACT.mX[7681UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7682UL] = intrm_sf_mf_75;
    out->mOBS_ACT.mX[7683UL] = t3626->mX.mX[802UL];
    out->mOBS_ACT.mX[7684UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[7685UL] = t3626->mX.mX[1507UL];
    out->mOBS_ACT.mX[7686UL] = t3626->mX.mX[1507UL];
    out->mOBS_ACT.mX[7687UL] = t3626->mX.mX[800UL];
    out->mOBS_ACT.mX[7688UL] = zc_int299;
    out->mOBS_ACT.mX[7689UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3 - intrm_sf_mf_75;
    out->mOBS_ACT.mX[7690UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7691UL] = t3626->mX.mX[808UL];
    out->mOBS_ACT.mX[7692UL] = t3626->mX.mX[808UL];
    out->mOBS_ACT.mX[7693UL] = t3626->mX.mX[808UL];
    out->mOBS_ACT.mX[7694UL] = t3626->mX.mX[808UL];
    out->mOBS_ACT.mX[7695UL] = t3626->mX.mX[809UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[7696UL] = t3626->mX.mX[808UL];
    out->mOBS_ACT.mX[7697UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7698UL] = zc_int350;
    out->mOBS_ACT.mX[7699UL] = t3626->mX.mX[810UL];
    out->mOBS_ACT.mX[7700UL] = t3626->mX.mX[810UL];
    out->mOBS_ACT.mX[7701UL] = t3626->mX.mX[1511UL];
    out->mOBS_ACT.mX[7702UL] = 1.0;
    out->mOBS_ACT.mX[7703UL] = intrm_sf_mf_75;
    for (t2773 = 811UL; t2773 - 811UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6893UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7709UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[7714UL] = 0.0;
    out->mOBS_ACT.mX[7715UL] = t3626->mX.mX[1510UL];
    out->mOBS_ACT.mX[7716UL] = t3626->mX.mX[1512UL] * 1000.0;
    out->mOBS_ACT.mX[7717UL] = t3626->mX.mX[1511UL];
    out->mOBS_ACT.mX[7718UL] = BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[7719UL] = 1.0;
    out->mOBS_ACT.mX[7720UL] = t3626->mX.mX[1509UL];
    out->mOBS_ACT.mX[7721UL] = 1.0;
    out->mOBS_ACT.mX[7722UL] = t3626->mX.mX[808UL];
    out->mOBS_ACT.mX[7723UL] = t3626->mX.mX[810UL];
    out->mOBS_ACT.mX[7724UL] = 1.0;
    out->mOBS_ACT.mX[7725UL] = t3626->mX.mX[1509UL];
    out->mOBS_ACT.mX[7726UL] = t3626->mX.mX[1510UL];
    out->mOBS_ACT.mX[7727UL] = 1.0;
    out->mOBS_ACT.mX[7728UL] = 1.0;
    out->mOBS_ACT.mX[7729UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7730UL] = zc_int350;
    out->mOBS_ACT.mX[7731UL] = t3626->mX.mX[810UL];
    out->mOBS_ACT.mX[7732UL] = intrm_sf_mf_75;
    out->mOBS_ACT.mX[7733UL] = t3626->mX.mX[1511UL];
    out->mOBS_ACT.mX[7734UL] = t3626->mX.mX[1511UL];
    out->mOBS_ACT.mX[7735UL] = t3626->mX.mX[808UL];
    out->mOBS_ACT.mX[7736UL] = BatteryPack_v2_ModuleAssembly6_Module11_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[7737UL] = t3626->mX.mX[808UL];
    out->mOBS_ACT.mX[7738UL] = t3626->mX.mX[808UL];
    out->mOBS_ACT.mX[7739UL] = t3626->mX.mX[1512UL] * 1000.0;
    out->mOBS_ACT.mX[7740UL] = BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[7741UL] = t3626->mX.mX[808UL];
    out->mOBS_ACT.mX[7742UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7743UL] = BatteryPack_v2_ModuleAssembly6_Module11_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[7744UL] = BatteryPack_v2_ModuleAssembly6_Module11_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[7745UL] = zc_int350;
    out->mOBS_ACT.mX[7746UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7747UL] = 0.0;
    out->mOBS_ACT.mX[7748UL] = zc_int350;
    out->mOBS_ACT.mX[7749UL] = intrm_sf_mf_75;
    out->mOBS_ACT.mX[7750UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7751UL] = 0.0;
    out->mOBS_ACT.mX[7752UL] = intrm_sf_mf_75;
    out->mOBS_ACT.mX[7753UL] = t3626->mX.mX[808UL];
    out->mOBS_ACT.mX[7754UL] = BatteryPack_v2_ModuleAssembly6_Module11_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[7755UL] = 0.0;
    out->mOBS_ACT.mX[7756UL] = t3626->mX.mX[808UL];
    out->mOBS_ACT.mX[7757UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7758UL] = zc_int350;
    out->mOBS_ACT.mX[7759UL] = t3626->mX.mX[810UL];
    out->mOBS_ACT.mX[7760UL] = intrm_sf_mf_75;
    out->mOBS_ACT.mX[7761UL] = t3626->mX.mX[1511UL];
    out->mOBS_ACT.mX[7762UL] = t3626->mX.mX[1511UL];
    out->mOBS_ACT.mX[7763UL] = t3626->mX.mX[808UL];
    out->mOBS_ACT.mX[7764UL] = BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[7765UL] = intrm_sf_mf_75 - zc_int350;
    out->mOBS_ACT.mX[7766UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7767UL] = t3626->mX.mX[816UL];
    out->mOBS_ACT.mX[7768UL] = t3626->mX.mX[816UL];
    out->mOBS_ACT.mX[7769UL] = t3626->mX.mX[816UL];
    out->mOBS_ACT.mX[7770UL] = t3626->mX.mX[816UL];
    out->mOBS_ACT.mX[7771UL] = t3626->mX.mX[817UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[7772UL] = t3626->mX.mX[816UL];
    out->mOBS_ACT.mX[7773UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7774UL] = zc_int349;
    out->mOBS_ACT.mX[7775UL] = t3626->mX.mX[818UL];
    out->mOBS_ACT.mX[7776UL] = t3626->mX.mX[818UL];
    out->mOBS_ACT.mX[7777UL] = t3626->mX.mX[1515UL];
    out->mOBS_ACT.mX[7778UL] = 1.0;
    out->mOBS_ACT.mX[7779UL] = zc_int350;
    for (t2773 = 819UL; t2773 - 819UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 6961UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7785UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[7790UL] = 0.0;
    out->mOBS_ACT.mX[7791UL] = t3626->mX.mX[1514UL];
    out->mOBS_ACT.mX[7792UL] = t3626->mX.mX[1516UL] * 1000.0;
    out->mOBS_ACT.mX[7793UL] = t3626->mX.mX[1515UL];
    out->mOBS_ACT.mX[7794UL] = zc_int301;
    out->mOBS_ACT.mX[7795UL] = 1.0;
    out->mOBS_ACT.mX[7796UL] = t3626->mX.mX[1513UL];
    out->mOBS_ACT.mX[7797UL] = 1.0;
    out->mOBS_ACT.mX[7798UL] = t3626->mX.mX[816UL];
    out->mOBS_ACT.mX[7799UL] = t3626->mX.mX[818UL];
    out->mOBS_ACT.mX[7800UL] = 1.0;
    out->mOBS_ACT.mX[7801UL] = t3626->mX.mX[1513UL];
    out->mOBS_ACT.mX[7802UL] = t3626->mX.mX[1514UL];
    out->mOBS_ACT.mX[7803UL] = 1.0;
    out->mOBS_ACT.mX[7804UL] = 1.0;
    out->mOBS_ACT.mX[7805UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7806UL] = zc_int349;
    out->mOBS_ACT.mX[7807UL] = t3626->mX.mX[818UL];
    out->mOBS_ACT.mX[7808UL] = zc_int350;
    out->mOBS_ACT.mX[7809UL] = t3626->mX.mX[1515UL];
    out->mOBS_ACT.mX[7810UL] = t3626->mX.mX[1515UL];
    out->mOBS_ACT.mX[7811UL] = t3626->mX.mX[816UL];
    out->mOBS_ACT.mX[7812UL] = BatteryPack_v2_ModuleAssembly6_Module12_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[7813UL] = t3626->mX.mX[816UL];
    out->mOBS_ACT.mX[7814UL] = t3626->mX.mX[816UL];
    out->mOBS_ACT.mX[7815UL] = t3626->mX.mX[1516UL] * 1000.0;
    out->mOBS_ACT.mX[7816UL] = zc_int301;
    out->mOBS_ACT.mX[7817UL] = t3626->mX.mX[816UL];
    out->mOBS_ACT.mX[7818UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7819UL] = BatteryPack_v2_ModuleAssembly6_Module12_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[7820UL] = BatteryPack_v2_ModuleAssembly6_Module12_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[7821UL] = zc_int349;
    out->mOBS_ACT.mX[7822UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7823UL] = 0.0;
    out->mOBS_ACT.mX[7824UL] = zc_int349;
    out->mOBS_ACT.mX[7825UL] = zc_int350;
    out->mOBS_ACT.mX[7826UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7827UL] = 0.0;
    out->mOBS_ACT.mX[7828UL] = zc_int350;
    out->mOBS_ACT.mX[7829UL] = t3626->mX.mX[816UL];
    out->mOBS_ACT.mX[7830UL] = BatteryPack_v2_ModuleAssembly6_Module12_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[7831UL] = 0.0;
    out->mOBS_ACT.mX[7832UL] = t3626->mX.mX[816UL];
    out->mOBS_ACT.mX[7833UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7834UL] = zc_int349;
    out->mOBS_ACT.mX[7835UL] = t3626->mX.mX[818UL];
    out->mOBS_ACT.mX[7836UL] = zc_int350;
    out->mOBS_ACT.mX[7837UL] = t3626->mX.mX[1515UL];
    out->mOBS_ACT.mX[7838UL] = t3626->mX.mX[1515UL];
    out->mOBS_ACT.mX[7839UL] = t3626->mX.mX[816UL];
    out->mOBS_ACT.mX[7840UL] = zc_int301;
    out->mOBS_ACT.mX[7841UL] = zc_int350 - zc_int349;
    out->mOBS_ACT.mX[7842UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7843UL] = t3626->mX.mX[824UL];
    out->mOBS_ACT.mX[7844UL] = t3626->mX.mX[824UL];
    out->mOBS_ACT.mX[7845UL] = t3626->mX.mX[824UL];
    out->mOBS_ACT.mX[7846UL] = t3626->mX.mX[824UL];
    out->mOBS_ACT.mX[7847UL] = t3626->mX.mX[825UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[7848UL] = t3626->mX.mX[824UL];
    out->mOBS_ACT.mX[7849UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7850UL] = zc_int348;
    out->mOBS_ACT.mX[7851UL] = t3626->mX.mX[826UL];
    out->mOBS_ACT.mX[7852UL] = t3626->mX.mX[826UL];
    out->mOBS_ACT.mX[7853UL] = t3626->mX.mX[1519UL];
    out->mOBS_ACT.mX[7854UL] = 1.0;
    out->mOBS_ACT.mX[7855UL] = zc_int349;
    for (t2773 = 827UL; t2773 - 827UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7029UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7861UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[7866UL] = 0.0;
    out->mOBS_ACT.mX[7867UL] = t3626->mX.mX[1518UL];
    out->mOBS_ACT.mX[7868UL] = t3626->mX.mX[1520UL] * 1000.0;
    out->mOBS_ACT.mX[7869UL] = t3626->mX.mX[1519UL];
    out->mOBS_ACT.mX[7870UL] = zc_int304;
    out->mOBS_ACT.mX[7871UL] = 1.0;
    out->mOBS_ACT.mX[7872UL] = t3626->mX.mX[1517UL];
    out->mOBS_ACT.mX[7873UL] = 1.0;
    out->mOBS_ACT.mX[7874UL] = t3626->mX.mX[824UL];
    out->mOBS_ACT.mX[7875UL] = t3626->mX.mX[826UL];
    out->mOBS_ACT.mX[7876UL] = 1.0;
    out->mOBS_ACT.mX[7877UL] = t3626->mX.mX[1517UL];
    out->mOBS_ACT.mX[7878UL] = t3626->mX.mX[1518UL];
    out->mOBS_ACT.mX[7879UL] = 1.0;
    out->mOBS_ACT.mX[7880UL] = 1.0;
    out->mOBS_ACT.mX[7881UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7882UL] = zc_int348;
    out->mOBS_ACT.mX[7883UL] = t3626->mX.mX[826UL];
    out->mOBS_ACT.mX[7884UL] = zc_int349;
    out->mOBS_ACT.mX[7885UL] = t3626->mX.mX[1519UL];
    out->mOBS_ACT.mX[7886UL] = t3626->mX.mX[1519UL];
    out->mOBS_ACT.mX[7887UL] = t3626->mX.mX[824UL];
    out->mOBS_ACT.mX[7888UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[7889UL] = t3626->mX.mX[824UL];
    out->mOBS_ACT.mX[7890UL] = t3626->mX.mX[824UL];
    out->mOBS_ACT.mX[7891UL] = t3626->mX.mX[1520UL] * 1000.0;
    out->mOBS_ACT.mX[7892UL] = zc_int304;
    out->mOBS_ACT.mX[7893UL] = t3626->mX.mX[824UL];
    out->mOBS_ACT.mX[7894UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7895UL] = BatteryPack_v2_ModuleAssembly6_Module13_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[7896UL] = BatteryPack_v2_ModuleAssembly6_Module13_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[7897UL] = zc_int348;
    out->mOBS_ACT.mX[7898UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7899UL] = 0.0;
    out->mOBS_ACT.mX[7900UL] = zc_int348;
    out->mOBS_ACT.mX[7901UL] = zc_int349;
    out->mOBS_ACT.mX[7902UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7903UL] = 0.0;
    out->mOBS_ACT.mX[7904UL] = zc_int349;
    out->mOBS_ACT.mX[7905UL] = t3626->mX.mX[824UL];
    out->mOBS_ACT.mX[7906UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[7907UL] = 0.0;
    out->mOBS_ACT.mX[7908UL] = t3626->mX.mX[824UL];
    out->mOBS_ACT.mX[7909UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7910UL] = zc_int348;
    out->mOBS_ACT.mX[7911UL] = t3626->mX.mX[826UL];
    out->mOBS_ACT.mX[7912UL] = zc_int349;
    out->mOBS_ACT.mX[7913UL] = t3626->mX.mX[1519UL];
    out->mOBS_ACT.mX[7914UL] = t3626->mX.mX[1519UL];
    out->mOBS_ACT.mX[7915UL] = t3626->mX.mX[824UL];
    out->mOBS_ACT.mX[7916UL] = zc_int304;
    out->mOBS_ACT.mX[7917UL] = zc_int349 - zc_int348;
    out->mOBS_ACT.mX[7918UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7919UL] = t3626->mX.mX[832UL];
    out->mOBS_ACT.mX[7920UL] = t3626->mX.mX[832UL];
    out->mOBS_ACT.mX[7921UL] = t3626->mX.mX[832UL];
    out->mOBS_ACT.mX[7922UL] = t3626->mX.mX[832UL];
    out->mOBS_ACT.mX[7923UL] = t3626->mX.mX[833UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[7924UL] = t3626->mX.mX[832UL];
    out->mOBS_ACT.mX[7925UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7926UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[7927UL] = t3626->mX.mX[834UL];
    out->mOBS_ACT.mX[7928UL] = t3626->mX.mX[834UL];
    out->mOBS_ACT.mX[7929UL] = t3626->mX.mX[1523UL];
    out->mOBS_ACT.mX[7930UL] = 1.0;
    out->mOBS_ACT.mX[7931UL] = zc_int348;
    for (t2773 = 835UL; t2773 - 835UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7097UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7937UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[7942UL] = 0.0;
    out->mOBS_ACT.mX[7943UL] = t3626->mX.mX[1522UL];
    out->mOBS_ACT.mX[7944UL] = t3626->mX.mX[1524UL] * 1000.0;
    out->mOBS_ACT.mX[7945UL] = t3626->mX.mX[1523UL];
    out->mOBS_ACT.mX[7946UL] = intrm_sf_mf_11;
    out->mOBS_ACT.mX[7947UL] = 1.0;
    out->mOBS_ACT.mX[7948UL] = t3626->mX.mX[1521UL];
    out->mOBS_ACT.mX[7949UL] = 1.0;
    out->mOBS_ACT.mX[7950UL] = t3626->mX.mX[832UL];
    out->mOBS_ACT.mX[7951UL] = t3626->mX.mX[834UL];
    out->mOBS_ACT.mX[7952UL] = 1.0;
    out->mOBS_ACT.mX[7953UL] = t3626->mX.mX[1521UL];
    out->mOBS_ACT.mX[7954UL] = t3626->mX.mX[1522UL];
    out->mOBS_ACT.mX[7955UL] = 1.0;
    out->mOBS_ACT.mX[7956UL] = 1.0;
    out->mOBS_ACT.mX[7957UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7958UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[7959UL] = t3626->mX.mX[834UL];
    out->mOBS_ACT.mX[7960UL] = zc_int348;
    out->mOBS_ACT.mX[7961UL] = t3626->mX.mX[1523UL];
    out->mOBS_ACT.mX[7962UL] = t3626->mX.mX[1523UL];
    out->mOBS_ACT.mX[7963UL] = t3626->mX.mX[832UL];
    out->mOBS_ACT.mX[7964UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[7965UL] = t3626->mX.mX[832UL];
    out->mOBS_ACT.mX[7966UL] = t3626->mX.mX[832UL];
    out->mOBS_ACT.mX[7967UL] = t3626->mX.mX[1524UL] * 1000.0;
    out->mOBS_ACT.mX[7968UL] = intrm_sf_mf_11;
    out->mOBS_ACT.mX[7969UL] = t3626->mX.mX[832UL];
    out->mOBS_ACT.mX[7970UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7971UL] = BatteryPack_v2_ModuleAssembly6_Module14_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[7972UL] = BatteryPack_v2_ModuleAssembly6_Module14_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[7973UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[7974UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7975UL] = 0.0;
    out->mOBS_ACT.mX[7976UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[7977UL] = zc_int348;
    out->mOBS_ACT.mX[7978UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7979UL] = 0.0;
    out->mOBS_ACT.mX[7980UL] = zc_int348;
    out->mOBS_ACT.mX[7981UL] = t3626->mX.mX[832UL];
    out->mOBS_ACT.mX[7982UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[7983UL] = 0.0;
    out->mOBS_ACT.mX[7984UL] = t3626->mX.mX[832UL];
    out->mOBS_ACT.mX[7985UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[7986UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[7987UL] = t3626->mX.mX[834UL];
    out->mOBS_ACT.mX[7988UL] = zc_int348;
    out->mOBS_ACT.mX[7989UL] = t3626->mX.mX[1523UL];
    out->mOBS_ACT.mX[7990UL] = t3626->mX.mX[1523UL];
    out->mOBS_ACT.mX[7991UL] = t3626->mX.mX[832UL];
    out->mOBS_ACT.mX[7992UL] = intrm_sf_mf_11;
    out->mOBS_ACT.mX[7993UL] = zc_int348 - BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[7994UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[7995UL] = t3626->mX.mX[840UL];
    out->mOBS_ACT.mX[7996UL] = t3626->mX.mX[840UL];
    out->mOBS_ACT.mX[7997UL] = t3626->mX.mX[840UL];
    out->mOBS_ACT.mX[7998UL] = t3626->mX.mX[840UL];
    out->mOBS_ACT.mX[7999UL] = t3626->mX.mX[841UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[8000UL] = t3626->mX.mX[840UL];
    out->mOBS_ACT.mX[8001UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8002UL] = intrm_sf_mf_73;
    out->mOBS_ACT.mX[8003UL] = t3626->mX.mX[842UL];
    out->mOBS_ACT.mX[8004UL] = t3626->mX.mX[842UL];
    out->mOBS_ACT.mX[8005UL] = t3626->mX.mX[1527UL];
    out->mOBS_ACT.mX[8006UL] = 1.0;
    out->mOBS_ACT.mX[8007UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    for (t2773 = 843UL; t2773 - 843UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7165UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8013UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[8018UL] = 0.0;
    out->mOBS_ACT.mX[8019UL] = t3626->mX.mX[1526UL];
    out->mOBS_ACT.mX[8020UL] = t3626->mX.mX[1528UL] * 1000.0;
    out->mOBS_ACT.mX[8021UL] = t3626->mX.mX[1527UL];
    out->mOBS_ACT.mX[8022UL] = zc_int314;
    out->mOBS_ACT.mX[8023UL] = 1.0;
    out->mOBS_ACT.mX[8024UL] = t3626->mX.mX[1525UL];
    out->mOBS_ACT.mX[8025UL] = 1.0;
    out->mOBS_ACT.mX[8026UL] = t3626->mX.mX[840UL];
    out->mOBS_ACT.mX[8027UL] = t3626->mX.mX[842UL];
    out->mOBS_ACT.mX[8028UL] = 1.0;
    out->mOBS_ACT.mX[8029UL] = t3626->mX.mX[1525UL];
    out->mOBS_ACT.mX[8030UL] = t3626->mX.mX[1526UL];
    out->mOBS_ACT.mX[8031UL] = 1.0;
    out->mOBS_ACT.mX[8032UL] = 1.0;
    out->mOBS_ACT.mX[8033UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8034UL] = intrm_sf_mf_73;
    out->mOBS_ACT.mX[8035UL] = t3626->mX.mX[842UL];
    out->mOBS_ACT.mX[8036UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8037UL] = t3626->mX.mX[1527UL];
    out->mOBS_ACT.mX[8038UL] = t3626->mX.mX[1527UL];
    out->mOBS_ACT.mX[8039UL] = t3626->mX.mX[840UL];
    out->mOBS_ACT.mX[8040UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[8041UL] = t3626->mX.mX[840UL];
    out->mOBS_ACT.mX[8042UL] = t3626->mX.mX[840UL];
    out->mOBS_ACT.mX[8043UL] = t3626->mX.mX[1528UL] * 1000.0;
    out->mOBS_ACT.mX[8044UL] = zc_int314;
    out->mOBS_ACT.mX[8045UL] = t3626->mX.mX[840UL];
    out->mOBS_ACT.mX[8046UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8047UL] = BatteryPack_v2_ModuleAssembly6_Module15_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[8048UL] = BatteryPack_v2_ModuleAssembly6_Module15_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[8049UL] = intrm_sf_mf_73;
    out->mOBS_ACT.mX[8050UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8051UL] = 0.0;
    out->mOBS_ACT.mX[8052UL] = intrm_sf_mf_73;
    out->mOBS_ACT.mX[8053UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8054UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8055UL] = 0.0;
    out->mOBS_ACT.mX[8056UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8057UL] = t3626->mX.mX[840UL];
    out->mOBS_ACT.mX[8058UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[8059UL] = 0.0;
    out->mOBS_ACT.mX[8060UL] = t3626->mX.mX[840UL];
    out->mOBS_ACT.mX[8061UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8062UL] = intrm_sf_mf_73;
    out->mOBS_ACT.mX[8063UL] = t3626->mX.mX[842UL];
    out->mOBS_ACT.mX[8064UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8065UL] = t3626->mX.mX[1527UL];
    out->mOBS_ACT.mX[8066UL] = t3626->mX.mX[1527UL];
    out->mOBS_ACT.mX[8067UL] = t3626->mX.mX[840UL];
    out->mOBS_ACT.mX[8068UL] = zc_int314;
    out->mOBS_ACT.mX[8069UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3 - intrm_sf_mf_73;
    out->mOBS_ACT.mX[8070UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8071UL] = t3626->mX.mX[848UL];
    out->mOBS_ACT.mX[8072UL] = t3626->mX.mX[848UL];
    out->mOBS_ACT.mX[8073UL] = t3626->mX.mX[848UL];
    out->mOBS_ACT.mX[8074UL] = t3626->mX.mX[848UL];
    out->mOBS_ACT.mX[8075UL] = t3626->mX.mX[849UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[8076UL] = t3626->mX.mX[848UL];
    out->mOBS_ACT.mX[8077UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8078UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8079UL] = t3626->mX.mX[850UL];
    out->mOBS_ACT.mX[8080UL] = t3626->mX.mX[850UL];
    out->mOBS_ACT.mX[8081UL] = t3626->mX.mX[1531UL];
    out->mOBS_ACT.mX[8082UL] = 1.0;
    out->mOBS_ACT.mX[8083UL] = intrm_sf_mf_73;
    for (t2773 = 851UL; t2773 - 851UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7233UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8089UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[8094UL] = 0.0;
    out->mOBS_ACT.mX[8095UL] = t3626->mX.mX[1530UL];
    out->mOBS_ACT.mX[8096UL] = t3626->mX.mX[1532UL] * 1000.0;
    out->mOBS_ACT.mX[8097UL] = t3626->mX.mX[1531UL];
    out->mOBS_ACT.mX[8098UL] = BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8099UL] = 1.0;
    out->mOBS_ACT.mX[8100UL] = t3626->mX.mX[1529UL];
    out->mOBS_ACT.mX[8101UL] = 1.0;
    out->mOBS_ACT.mX[8102UL] = t3626->mX.mX[848UL];
    out->mOBS_ACT.mX[8103UL] = t3626->mX.mX[850UL];
    out->mOBS_ACT.mX[8104UL] = 1.0;
    out->mOBS_ACT.mX[8105UL] = t3626->mX.mX[1529UL];
    out->mOBS_ACT.mX[8106UL] = t3626->mX.mX[1530UL];
    out->mOBS_ACT.mX[8107UL] = 1.0;
    out->mOBS_ACT.mX[8108UL] = 1.0;
    out->mOBS_ACT.mX[8109UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8110UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8111UL] = t3626->mX.mX[850UL];
    out->mOBS_ACT.mX[8112UL] = intrm_sf_mf_73;
    out->mOBS_ACT.mX[8113UL] = t3626->mX.mX[1531UL];
    out->mOBS_ACT.mX[8114UL] = t3626->mX.mX[1531UL];
    out->mOBS_ACT.mX[8115UL] = t3626->mX.mX[848UL];
    out->mOBS_ACT.mX[8116UL] = BatteryPack_v2_ModuleAssembly6_Module16_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[8117UL] = t3626->mX.mX[848UL];
    out->mOBS_ACT.mX[8118UL] = t3626->mX.mX[848UL];
    out->mOBS_ACT.mX[8119UL] = t3626->mX.mX[1532UL] * 1000.0;
    out->mOBS_ACT.mX[8120UL] = BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8121UL] = t3626->mX.mX[848UL];
    out->mOBS_ACT.mX[8122UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8123UL] = BatteryPack_v2_ModuleAssembly6_Module16_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[8124UL] = BatteryPack_v2_ModuleAssembly6_Module16_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[8125UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8126UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8127UL] = 0.0;
    out->mOBS_ACT.mX[8128UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8129UL] = intrm_sf_mf_73;
    out->mOBS_ACT.mX[8130UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8131UL] = 0.0;
    out->mOBS_ACT.mX[8132UL] = intrm_sf_mf_73;
    out->mOBS_ACT.mX[8133UL] = t3626->mX.mX[848UL];
    out->mOBS_ACT.mX[8134UL] = BatteryPack_v2_ModuleAssembly6_Module16_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[8135UL] = 0.0;
    out->mOBS_ACT.mX[8136UL] = t3626->mX.mX[848UL];
    out->mOBS_ACT.mX[8137UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8138UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8139UL] = t3626->mX.mX[850UL];
    out->mOBS_ACT.mX[8140UL] = intrm_sf_mf_73;
    out->mOBS_ACT.mX[8141UL] = t3626->mX.mX[1531UL];
    out->mOBS_ACT.mX[8142UL] = t3626->mX.mX[1531UL];
    out->mOBS_ACT.mX[8143UL] = t3626->mX.mX[848UL];
    out->mOBS_ACT.mX[8144UL] = BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8145UL] = intrm_sf_mf_73 - BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8146UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8147UL] = t3626->mX.mX[856UL];
    out->mOBS_ACT.mX[8148UL] = t3626->mX.mX[856UL];
    out->mOBS_ACT.mX[8149UL] = t3626->mX.mX[856UL];
    out->mOBS_ACT.mX[8150UL] = t3626->mX.mX[856UL];
    out->mOBS_ACT.mX[8151UL] = t3626->mX.mX[857UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[8152UL] = t3626->mX.mX[856UL];
    out->mOBS_ACT.mX[8153UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8154UL] = intrm_sf_mf_72;
    out->mOBS_ACT.mX[8155UL] = t3626->mX.mX[858UL];
    out->mOBS_ACT.mX[8156UL] = t3626->mX.mX[858UL];
    out->mOBS_ACT.mX[8157UL] = t3626->mX.mX[1535UL];
    out->mOBS_ACT.mX[8158UL] = 1.0;
    out->mOBS_ACT.mX[8159UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    for (t2773 = 859UL; t2773 - 859UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7301UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8165UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[8170UL] = 0.0;
    out->mOBS_ACT.mX[8171UL] = t3626->mX.mX[1534UL];
    out->mOBS_ACT.mX[8172UL] = t3626->mX.mX[1536UL] * 1000.0;
    out->mOBS_ACT.mX[8173UL] = t3626->mX.mX[1535UL];
    out->mOBS_ACT.mX[8174UL] = zc_int320;
    out->mOBS_ACT.mX[8175UL] = 1.0;
    out->mOBS_ACT.mX[8176UL] = t3626->mX.mX[1533UL];
    out->mOBS_ACT.mX[8177UL] = 1.0;
    out->mOBS_ACT.mX[8178UL] = t3626->mX.mX[856UL];
    out->mOBS_ACT.mX[8179UL] = t3626->mX.mX[858UL];
    out->mOBS_ACT.mX[8180UL] = 1.0;
    out->mOBS_ACT.mX[8181UL] = t3626->mX.mX[1533UL];
    out->mOBS_ACT.mX[8182UL] = t3626->mX.mX[1534UL];
    out->mOBS_ACT.mX[8183UL] = 1.0;
    out->mOBS_ACT.mX[8184UL] = 1.0;
    out->mOBS_ACT.mX[8185UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8186UL] = intrm_sf_mf_72;
    out->mOBS_ACT.mX[8187UL] = t3626->mX.mX[858UL];
    out->mOBS_ACT.mX[8188UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8189UL] = t3626->mX.mX[1535UL];
    out->mOBS_ACT.mX[8190UL] = t3626->mX.mX[1535UL];
    out->mOBS_ACT.mX[8191UL] = t3626->mX.mX[856UL];
    out->mOBS_ACT.mX[8192UL] = BatteryPack_v2_ModuleAssembly6_Module17_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[8193UL] = t3626->mX.mX[856UL];
    out->mOBS_ACT.mX[8194UL] = t3626->mX.mX[856UL];
    out->mOBS_ACT.mX[8195UL] = t3626->mX.mX[1536UL] * 1000.0;
    out->mOBS_ACT.mX[8196UL] = zc_int320;
    out->mOBS_ACT.mX[8197UL] = t3626->mX.mX[856UL];
    out->mOBS_ACT.mX[8198UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8199UL] = BatteryPack_v2_ModuleAssembly6_Module17_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[8200UL] = BatteryPack_v2_ModuleAssembly6_Module17_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[8201UL] = intrm_sf_mf_72;
    out->mOBS_ACT.mX[8202UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8203UL] = 0.0;
    out->mOBS_ACT.mX[8204UL] = intrm_sf_mf_72;
    out->mOBS_ACT.mX[8205UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8206UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8207UL] = 0.0;
    out->mOBS_ACT.mX[8208UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8209UL] = t3626->mX.mX[856UL];
    out->mOBS_ACT.mX[8210UL] = BatteryPack_v2_ModuleAssembly6_Module17_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[8211UL] = 0.0;
    out->mOBS_ACT.mX[8212UL] = t3626->mX.mX[856UL];
    out->mOBS_ACT.mX[8213UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8214UL] = intrm_sf_mf_72;
    out->mOBS_ACT.mX[8215UL] = t3626->mX.mX[858UL];
    out->mOBS_ACT.mX[8216UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8217UL] = t3626->mX.mX[1535UL];
    out->mOBS_ACT.mX[8218UL] = t3626->mX.mX[1535UL];
    out->mOBS_ACT.mX[8219UL] = t3626->mX.mX[856UL];
    out->mOBS_ACT.mX[8220UL] = zc_int320;
    out->mOBS_ACT.mX[8221UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3 - intrm_sf_mf_72;
    out->mOBS_ACT.mX[8222UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8223UL] = t3626->mX.mX[864UL];
    out->mOBS_ACT.mX[8224UL] = t3626->mX.mX[864UL];
    out->mOBS_ACT.mX[8225UL] = t3626->mX.mX[864UL];
    out->mOBS_ACT.mX[8226UL] = t3626->mX.mX[864UL];
    out->mOBS_ACT.mX[8227UL] = t3626->mX.mX[865UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[8228UL] = t3626->mX.mX[864UL];
    out->mOBS_ACT.mX[8229UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8230UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8231UL] = t3626->mX.mX[866UL];
    out->mOBS_ACT.mX[8232UL] = t3626->mX.mX[866UL];
    out->mOBS_ACT.mX[8233UL] = t3626->mX.mX[1539UL];
    out->mOBS_ACT.mX[8234UL] = 1.0;
    out->mOBS_ACT.mX[8235UL] = intrm_sf_mf_72;
    for (t2773 = 867UL; t2773 - 867UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7369UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8241UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[8246UL] = 0.0;
    out->mOBS_ACT.mX[8247UL] = t3626->mX.mX[1538UL];
    out->mOBS_ACT.mX[8248UL] = t3626->mX.mX[1540UL] * 1000.0;
    out->mOBS_ACT.mX[8249UL] = t3626->mX.mX[1539UL];
    out->mOBS_ACT.mX[8250UL] = intrm_sf_mf_67;
    out->mOBS_ACT.mX[8251UL] = 1.0;
    out->mOBS_ACT.mX[8252UL] = t3626->mX.mX[1537UL];
    out->mOBS_ACT.mX[8253UL] = 1.0;
    out->mOBS_ACT.mX[8254UL] = t3626->mX.mX[864UL];
    out->mOBS_ACT.mX[8255UL] = t3626->mX.mX[866UL];
    out->mOBS_ACT.mX[8256UL] = 1.0;
    out->mOBS_ACT.mX[8257UL] = t3626->mX.mX[1537UL];
    out->mOBS_ACT.mX[8258UL] = t3626->mX.mX[1538UL];
    out->mOBS_ACT.mX[8259UL] = 1.0;
    out->mOBS_ACT.mX[8260UL] = 1.0;
    out->mOBS_ACT.mX[8261UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8262UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8263UL] = t3626->mX.mX[866UL];
    out->mOBS_ACT.mX[8264UL] = intrm_sf_mf_72;
    out->mOBS_ACT.mX[8265UL] = t3626->mX.mX[1539UL];
    out->mOBS_ACT.mX[8266UL] = t3626->mX.mX[1539UL];
    out->mOBS_ACT.mX[8267UL] = t3626->mX.mX[864UL];
    out->mOBS_ACT.mX[8268UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[8269UL] = t3626->mX.mX[864UL];
    out->mOBS_ACT.mX[8270UL] = t3626->mX.mX[864UL];
    out->mOBS_ACT.mX[8271UL] = t3626->mX.mX[1540UL] * 1000.0;
    out->mOBS_ACT.mX[8272UL] = intrm_sf_mf_67;
    out->mOBS_ACT.mX[8273UL] = t3626->mX.mX[864UL];
    out->mOBS_ACT.mX[8274UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8275UL] = BatteryPack_v2_ModuleAssembly6_Module18_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[8276UL] = BatteryPack_v2_ModuleAssembly6_Module18_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[8277UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8278UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8279UL] = 0.0;
    out->mOBS_ACT.mX[8280UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8281UL] = intrm_sf_mf_72;
    out->mOBS_ACT.mX[8282UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8283UL] = 0.0;
    out->mOBS_ACT.mX[8284UL] = intrm_sf_mf_72;
    out->mOBS_ACT.mX[8285UL] = t3626->mX.mX[864UL];
    out->mOBS_ACT.mX[8286UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[8287UL] = 0.0;
    out->mOBS_ACT.mX[8288UL] = t3626->mX.mX[864UL];
    out->mOBS_ACT.mX[8289UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8290UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8291UL] = t3626->mX.mX[866UL];
    out->mOBS_ACT.mX[8292UL] = intrm_sf_mf_72;
    out->mOBS_ACT.mX[8293UL] = t3626->mX.mX[1539UL];
    out->mOBS_ACT.mX[8294UL] = t3626->mX.mX[1539UL];
    out->mOBS_ACT.mX[8295UL] = t3626->mX.mX[864UL];
    out->mOBS_ACT.mX[8296UL] = intrm_sf_mf_67;
    out->mOBS_ACT.mX[8297UL] = intrm_sf_mf_72 - BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8298UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8299UL] = t3626->mX.mX[872UL];
    out->mOBS_ACT.mX[8300UL] = t3626->mX.mX[872UL];
    out->mOBS_ACT.mX[8301UL] = t3626->mX.mX[872UL];
    out->mOBS_ACT.mX[8302UL] = t3626->mX.mX[872UL];
    out->mOBS_ACT.mX[8303UL] = t3626->mX.mX[873UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[8304UL] = t3626->mX.mX[872UL];
    out->mOBS_ACT.mX[8305UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8306UL] = intrm_sf_mf_71;
    out->mOBS_ACT.mX[8307UL] = t3626->mX.mX[874UL];
    out->mOBS_ACT.mX[8308UL] = t3626->mX.mX[874UL];
    out->mOBS_ACT.mX[8309UL] = t3626->mX.mX[1543UL];
    out->mOBS_ACT.mX[8310UL] = 1.0;
    out->mOBS_ACT.mX[8311UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    for (t2773 = 875UL; t2773 - 875UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7437UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8317UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[8322UL] = 0.0;
    out->mOBS_ACT.mX[8323UL] = t3626->mX.mX[1542UL];
    out->mOBS_ACT.mX[8324UL] = t3626->mX.mX[1544UL] * 1000.0;
    out->mOBS_ACT.mX[8325UL] = t3626->mX.mX[1543UL];
    out->mOBS_ACT.mX[8326UL] = zc_int324;
    out->mOBS_ACT.mX[8327UL] = 1.0;
    out->mOBS_ACT.mX[8328UL] = t3626->mX.mX[1541UL];
    out->mOBS_ACT.mX[8329UL] = 1.0;
    out->mOBS_ACT.mX[8330UL] = t3626->mX.mX[872UL];
    out->mOBS_ACT.mX[8331UL] = t3626->mX.mX[874UL];
    out->mOBS_ACT.mX[8332UL] = 1.0;
    out->mOBS_ACT.mX[8333UL] = t3626->mX.mX[1541UL];
    out->mOBS_ACT.mX[8334UL] = t3626->mX.mX[1542UL];
    out->mOBS_ACT.mX[8335UL] = 1.0;
    out->mOBS_ACT.mX[8336UL] = 1.0;
    out->mOBS_ACT.mX[8337UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8338UL] = intrm_sf_mf_71;
    out->mOBS_ACT.mX[8339UL] = t3626->mX.mX[874UL];
    out->mOBS_ACT.mX[8340UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8341UL] = t3626->mX.mX[1543UL];
    out->mOBS_ACT.mX[8342UL] = t3626->mX.mX[1543UL];
    out->mOBS_ACT.mX[8343UL] = t3626->mX.mX[872UL];
    out->mOBS_ACT.mX[8344UL] = BatteryPack_v2_ModuleAssembly6_Module19_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[8345UL] = t3626->mX.mX[872UL];
    out->mOBS_ACT.mX[8346UL] = t3626->mX.mX[872UL];
    out->mOBS_ACT.mX[8347UL] = t3626->mX.mX[1544UL] * 1000.0;
    out->mOBS_ACT.mX[8348UL] = zc_int324;
    out->mOBS_ACT.mX[8349UL] = t3626->mX.mX[872UL];
    out->mOBS_ACT.mX[8350UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8351UL] = BatteryPack_v2_ModuleAssembly6_Module19_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[8352UL] = BatteryPack_v2_ModuleAssembly6_Module19_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[8353UL] = intrm_sf_mf_71;
    out->mOBS_ACT.mX[8354UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8355UL] = 0.0;
    out->mOBS_ACT.mX[8356UL] = intrm_sf_mf_71;
    out->mOBS_ACT.mX[8357UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8358UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8359UL] = 0.0;
    out->mOBS_ACT.mX[8360UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8361UL] = t3626->mX.mX[872UL];
    out->mOBS_ACT.mX[8362UL] = BatteryPack_v2_ModuleAssembly6_Module19_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[8363UL] = 0.0;
    out->mOBS_ACT.mX[8364UL] = t3626->mX.mX[872UL];
    out->mOBS_ACT.mX[8365UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8366UL] = intrm_sf_mf_71;
    out->mOBS_ACT.mX[8367UL] = t3626->mX.mX[874UL];
    out->mOBS_ACT.mX[8368UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8369UL] = t3626->mX.mX[1543UL];
    out->mOBS_ACT.mX[8370UL] = t3626->mX.mX[1543UL];
    out->mOBS_ACT.mX[8371UL] = t3626->mX.mX[872UL];
    out->mOBS_ACT.mX[8372UL] = zc_int324;
    out->mOBS_ACT.mX[8373UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3 - intrm_sf_mf_71;
    out->mOBS_ACT.mX[8374UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8375UL] = t3626->mX.mX[880UL];
    out->mOBS_ACT.mX[8376UL] = t3626->mX.mX[880UL];
    out->mOBS_ACT.mX[8377UL] = t3626->mX.mX[880UL];
    out->mOBS_ACT.mX[8378UL] = t3626->mX.mX[880UL];
    out->mOBS_ACT.mX[8379UL] = t3626->mX.mX[881UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[8380UL] = t3626->mX.mX[880UL];
    out->mOBS_ACT.mX[8381UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8382UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8383UL] = t3626->mX.mX[882UL];
    out->mOBS_ACT.mX[8384UL] = t3626->mX.mX[882UL];
    out->mOBS_ACT.mX[8385UL] = t3626->mX.mX[1547UL];
    out->mOBS_ACT.mX[8386UL] = 1.0;
    out->mOBS_ACT.mX[8387UL] = intrm_sf_mf_71;
    for (t2773 = 883UL; t2773 - 883UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7505UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8393UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[8398UL] = 0.0;
    out->mOBS_ACT.mX[8399UL] = t3626->mX.mX[1546UL];
    out->mOBS_ACT.mX[8400UL] = t3626->mX.mX[1548UL] * 1000.0;
    out->mOBS_ACT.mX[8401UL] = t3626->mX.mX[1547UL];
    out->mOBS_ACT.mX[8402UL] = zc_int325;
    out->mOBS_ACT.mX[8403UL] = 1.0;
    out->mOBS_ACT.mX[8404UL] = t3626->mX.mX[1545UL];
    out->mOBS_ACT.mX[8405UL] = 1.0;
    out->mOBS_ACT.mX[8406UL] = t3626->mX.mX[880UL];
    out->mOBS_ACT.mX[8407UL] = t3626->mX.mX[882UL];
    out->mOBS_ACT.mX[8408UL] = 1.0;
    out->mOBS_ACT.mX[8409UL] = t3626->mX.mX[1545UL];
    out->mOBS_ACT.mX[8410UL] = t3626->mX.mX[1546UL];
    out->mOBS_ACT.mX[8411UL] = 1.0;
    out->mOBS_ACT.mX[8412UL] = 1.0;
    out->mOBS_ACT.mX[8413UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8414UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8415UL] = t3626->mX.mX[882UL];
    out->mOBS_ACT.mX[8416UL] = intrm_sf_mf_71;
    out->mOBS_ACT.mX[8417UL] = t3626->mX.mX[1547UL];
    out->mOBS_ACT.mX[8418UL] = t3626->mX.mX[1547UL];
    out->mOBS_ACT.mX[8419UL] = t3626->mX.mX[880UL];
    out->mOBS_ACT.mX[8420UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[8421UL] = t3626->mX.mX[880UL];
    out->mOBS_ACT.mX[8422UL] = t3626->mX.mX[880UL];
    out->mOBS_ACT.mX[8423UL] = t3626->mX.mX[1548UL] * 1000.0;
    out->mOBS_ACT.mX[8424UL] = zc_int325;
    out->mOBS_ACT.mX[8425UL] = t3626->mX.mX[880UL];
    out->mOBS_ACT.mX[8426UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8427UL] = BatteryPack_v2_ModuleAssembly6_Module20_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[8428UL] = BatteryPack_v2_ModuleAssembly6_Module20_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[8429UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8430UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8431UL] = 0.0;
    out->mOBS_ACT.mX[8432UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8433UL] = intrm_sf_mf_71;
    out->mOBS_ACT.mX[8434UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8435UL] = 0.0;
    out->mOBS_ACT.mX[8436UL] = intrm_sf_mf_71;
    out->mOBS_ACT.mX[8437UL] = t3626->mX.mX[880UL];
    out->mOBS_ACT.mX[8438UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[8439UL] = 0.0;
    out->mOBS_ACT.mX[8440UL] = t3626->mX.mX[880UL];
    out->mOBS_ACT.mX[8441UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8442UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8443UL] = t3626->mX.mX[882UL];
    out->mOBS_ACT.mX[8444UL] = intrm_sf_mf_71;
    out->mOBS_ACT.mX[8445UL] = t3626->mX.mX[1547UL];
    out->mOBS_ACT.mX[8446UL] = t3626->mX.mX[1547UL];
    out->mOBS_ACT.mX[8447UL] = t3626->mX.mX[880UL];
    out->mOBS_ACT.mX[8448UL] = zc_int325;
    out->mOBS_ACT.mX[8449UL] = intrm_sf_mf_71 - BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8450UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8451UL] = t3626->mX.mX[888UL];
    out->mOBS_ACT.mX[8452UL] = t3626->mX.mX[888UL];
    out->mOBS_ACT.mX[8453UL] = t3626->mX.mX[888UL];
    out->mOBS_ACT.mX[8454UL] = t3626->mX.mX[888UL];
    out->mOBS_ACT.mX[8455UL] = t3626->mX.mX[889UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[8456UL] = t3626->mX.mX[888UL];
    out->mOBS_ACT.mX[8457UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8458UL] = zc_int340;
    out->mOBS_ACT.mX[8459UL] = t3626->mX.mX[890UL];
    out->mOBS_ACT.mX[8460UL] = t3626->mX.mX[890UL];
    out->mOBS_ACT.mX[8461UL] = t3626->mX.mX[1551UL];
    out->mOBS_ACT.mX[8462UL] = 1.0;
    out->mOBS_ACT.mX[8463UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    for (t2773 = 891UL; t2773 - 891UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7573UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8469UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[8474UL] = 0.0;
    out->mOBS_ACT.mX[8475UL] = t3626->mX.mX[1550UL];
    out->mOBS_ACT.mX[8476UL] = t3626->mX.mX[1552UL] * 1000.0;
    out->mOBS_ACT.mX[8477UL] = t3626->mX.mX[1551UL];
    out->mOBS_ACT.mX[8478UL] = BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8479UL] = 1.0;
    out->mOBS_ACT.mX[8480UL] = t3626->mX.mX[1549UL];
    out->mOBS_ACT.mX[8481UL] = 1.0;
    out->mOBS_ACT.mX[8482UL] = t3626->mX.mX[888UL];
    out->mOBS_ACT.mX[8483UL] = t3626->mX.mX[890UL];
    out->mOBS_ACT.mX[8484UL] = 1.0;
    out->mOBS_ACT.mX[8485UL] = t3626->mX.mX[1549UL];
    out->mOBS_ACT.mX[8486UL] = t3626->mX.mX[1550UL];
    out->mOBS_ACT.mX[8487UL] = 1.0;
    out->mOBS_ACT.mX[8488UL] = 1.0;
    out->mOBS_ACT.mX[8489UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8490UL] = zc_int340;
    out->mOBS_ACT.mX[8491UL] = t3626->mX.mX[890UL];
    out->mOBS_ACT.mX[8492UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8493UL] = t3626->mX.mX[1551UL];
    out->mOBS_ACT.mX[8494UL] = t3626->mX.mX[1551UL];
    out->mOBS_ACT.mX[8495UL] = t3626->mX.mX[888UL];
    out->mOBS_ACT.mX[8496UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[8497UL] = t3626->mX.mX[888UL];
    out->mOBS_ACT.mX[8498UL] = t3626->mX.mX[888UL];
    out->mOBS_ACT.mX[8499UL] = t3626->mX.mX[1552UL] * 1000.0;
    out->mOBS_ACT.mX[8500UL] = BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8501UL] = t3626->mX.mX[888UL];
    out->mOBS_ACT.mX[8502UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8503UL] = BatteryPack_v2_ModuleAssembly6_Module21_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[8504UL] = BatteryPack_v2_ModuleAssembly6_Module21_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[8505UL] = zc_int340;
    out->mOBS_ACT.mX[8506UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8507UL] = 0.0;
    out->mOBS_ACT.mX[8508UL] = zc_int340;
    out->mOBS_ACT.mX[8509UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8510UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8511UL] = 0.0;
    out->mOBS_ACT.mX[8512UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8513UL] = t3626->mX.mX[888UL];
    out->mOBS_ACT.mX[8514UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[8515UL] = 0.0;
    out->mOBS_ACT.mX[8516UL] = t3626->mX.mX[888UL];
    out->mOBS_ACT.mX[8517UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8518UL] = zc_int340;
    out->mOBS_ACT.mX[8519UL] = t3626->mX.mX[890UL];
    out->mOBS_ACT.mX[8520UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8521UL] = t3626->mX.mX[1551UL];
    out->mOBS_ACT.mX[8522UL] = t3626->mX.mX[1551UL];
    out->mOBS_ACT.mX[8523UL] = t3626->mX.mX[888UL];
    out->mOBS_ACT.mX[8524UL] = BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8525UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3 - zc_int340;
    out->mOBS_ACT.mX[8526UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8527UL] = t3626->mX.mX[896UL];
    out->mOBS_ACT.mX[8528UL] = t3626->mX.mX[896UL];
    out->mOBS_ACT.mX[8529UL] = t3626->mX.mX[896UL];
    out->mOBS_ACT.mX[8530UL] = t3626->mX.mX[896UL];
    out->mOBS_ACT.mX[8531UL] = t3626->mX.mX[897UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[8532UL] = t3626->mX.mX[896UL];
    out->mOBS_ACT.mX[8533UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8534UL] = zc_int334;
    out->mOBS_ACT.mX[8535UL] = t3626->mX.mX[898UL];
    out->mOBS_ACT.mX[8536UL] = t3626->mX.mX[898UL];
    out->mOBS_ACT.mX[8537UL] = t3626->mX.mX[1555UL];
    out->mOBS_ACT.mX[8538UL] = 1.0;
    out->mOBS_ACT.mX[8539UL] = zc_int340;
    for (t2773 = 899UL; t2773 - 899UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7641UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8545UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[8550UL] = 0.0;
    out->mOBS_ACT.mX[8551UL] = t3626->mX.mX[1554UL];
    out->mOBS_ACT.mX[8552UL] = t3626->mX.mX[1556UL] * 1000.0;
    out->mOBS_ACT.mX[8553UL] = t3626->mX.mX[1555UL];
    out->mOBS_ACT.mX[8554UL] = intrm_sf_mf_69;
    out->mOBS_ACT.mX[8555UL] = 1.0;
    out->mOBS_ACT.mX[8556UL] = t3626->mX.mX[1553UL];
    out->mOBS_ACT.mX[8557UL] = 1.0;
    out->mOBS_ACT.mX[8558UL] = t3626->mX.mX[896UL];
    out->mOBS_ACT.mX[8559UL] = t3626->mX.mX[898UL];
    out->mOBS_ACT.mX[8560UL] = 1.0;
    out->mOBS_ACT.mX[8561UL] = t3626->mX.mX[1553UL];
    out->mOBS_ACT.mX[8562UL] = t3626->mX.mX[1554UL];
    out->mOBS_ACT.mX[8563UL] = 1.0;
    out->mOBS_ACT.mX[8564UL] = 1.0;
    out->mOBS_ACT.mX[8565UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8566UL] = zc_int334;
    out->mOBS_ACT.mX[8567UL] = t3626->mX.mX[898UL];
    out->mOBS_ACT.mX[8568UL] = zc_int340;
    out->mOBS_ACT.mX[8569UL] = t3626->mX.mX[1555UL];
    out->mOBS_ACT.mX[8570UL] = t3626->mX.mX[1555UL];
    out->mOBS_ACT.mX[8571UL] = t3626->mX.mX[896UL];
    out->mOBS_ACT.mX[8572UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[8573UL] = t3626->mX.mX[896UL];
    out->mOBS_ACT.mX[8574UL] = t3626->mX.mX[896UL];
    out->mOBS_ACT.mX[8575UL] = t3626->mX.mX[1556UL] * 1000.0;
    out->mOBS_ACT.mX[8576UL] = intrm_sf_mf_69;
    out->mOBS_ACT.mX[8577UL] = t3626->mX.mX[896UL];
    out->mOBS_ACT.mX[8578UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8579UL] = BatteryPack_v2_ModuleAssembly6_Module22_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[8580UL] = BatteryPack_v2_ModuleAssembly6_Module22_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[8581UL] = zc_int334;
    out->mOBS_ACT.mX[8582UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8583UL] = 0.0;
    out->mOBS_ACT.mX[8584UL] = zc_int334;
    out->mOBS_ACT.mX[8585UL] = zc_int340;
    out->mOBS_ACT.mX[8586UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8587UL] = 0.0;
    out->mOBS_ACT.mX[8588UL] = zc_int340;
    out->mOBS_ACT.mX[8589UL] = t3626->mX.mX[896UL];
    out->mOBS_ACT.mX[8590UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[8591UL] = 0.0;
    out->mOBS_ACT.mX[8592UL] = t3626->mX.mX[896UL];
    out->mOBS_ACT.mX[8593UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8594UL] = zc_int334;
    out->mOBS_ACT.mX[8595UL] = t3626->mX.mX[898UL];
    out->mOBS_ACT.mX[8596UL] = zc_int340;
    out->mOBS_ACT.mX[8597UL] = t3626->mX.mX[1555UL];
    out->mOBS_ACT.mX[8598UL] = t3626->mX.mX[1555UL];
    out->mOBS_ACT.mX[8599UL] = t3626->mX.mX[896UL];
    out->mOBS_ACT.mX[8600UL] = intrm_sf_mf_69;
    out->mOBS_ACT.mX[8601UL] = zc_int340 - zc_int334;
    out->mOBS_ACT.mX[8602UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8603UL] = t3626->mX.mX[904UL];
    out->mOBS_ACT.mX[8604UL] = t3626->mX.mX[904UL];
    out->mOBS_ACT.mX[8605UL] = t3626->mX.mX[904UL];
    out->mOBS_ACT.mX[8606UL] = t3626->mX.mX[904UL];
    out->mOBS_ACT.mX[8607UL] = t3626->mX.mX[905UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[8608UL] = t3626->mX.mX[904UL];
    out->mOBS_ACT.mX[8609UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8610UL] = 0.0;
    out->mOBS_ACT.mX[8611UL] = t3626->mX.mX[906UL];
    out->mOBS_ACT.mX[8612UL] = t3626->mX.mX[906UL];
    out->mOBS_ACT.mX[8613UL] = t3626->mX.mX[1559UL];
    out->mOBS_ACT.mX[8614UL] = 1.0;
    out->mOBS_ACT.mX[8615UL] = zc_int334;
    for (t2773 = 907UL; t2773 - 907UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7709UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8621UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[8626UL] = 0.0;
    out->mOBS_ACT.mX[8627UL] = t3626->mX.mX[1558UL];
    out->mOBS_ACT.mX[8628UL] = t3626->mX.mX[1560UL] * 1000.0;
    out->mOBS_ACT.mX[8629UL] = t3626->mX.mX[1559UL];
    out->mOBS_ACT.mX[8630UL] = zc_int334;
    out->mOBS_ACT.mX[8631UL] = 1.0;
    out->mOBS_ACT.mX[8632UL] = t3626->mX.mX[1557UL];
    out->mOBS_ACT.mX[8633UL] = 1.0;
    out->mOBS_ACT.mX[8634UL] = t3626->mX.mX[904UL];
    out->mOBS_ACT.mX[8635UL] = t3626->mX.mX[906UL];
    out->mOBS_ACT.mX[8636UL] = 1.0;
    out->mOBS_ACT.mX[8637UL] = t3626->mX.mX[1557UL];
    out->mOBS_ACT.mX[8638UL] = t3626->mX.mX[1558UL];
    out->mOBS_ACT.mX[8639UL] = 1.0;
    out->mOBS_ACT.mX[8640UL] = 1.0;
    out->mOBS_ACT.mX[8641UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8642UL] = 0.0;
    out->mOBS_ACT.mX[8643UL] = t3626->mX.mX[906UL];
    out->mOBS_ACT.mX[8644UL] = zc_int334;
    out->mOBS_ACT.mX[8645UL] = t3626->mX.mX[1559UL];
    out->mOBS_ACT.mX[8646UL] = t3626->mX.mX[1559UL];
    out->mOBS_ACT.mX[8647UL] = t3626->mX.mX[904UL];
    out->mOBS_ACT.mX[8648UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[8649UL] = t3626->mX.mX[904UL];
    out->mOBS_ACT.mX[8650UL] = t3626->mX.mX[904UL];
    out->mOBS_ACT.mX[8651UL] = t3626->mX.mX[1560UL] * 1000.0;
    out->mOBS_ACT.mX[8652UL] = zc_int334;
    out->mOBS_ACT.mX[8653UL] = t3626->mX.mX[904UL];
    out->mOBS_ACT.mX[8654UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8655UL] = BatteryPack_v2_ModuleAssembly6_Module23_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[8656UL] = BatteryPack_v2_ModuleAssembly6_Module23_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[8657UL] = 0.0;
    out->mOBS_ACT.mX[8658UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8659UL] = 0.0;
    out->mOBS_ACT.mX[8660UL] = 0.0;
    out->mOBS_ACT.mX[8661UL] = zc_int334;
    out->mOBS_ACT.mX[8662UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8663UL] = 0.0;
    out->mOBS_ACT.mX[8664UL] = zc_int334;
    out->mOBS_ACT.mX[8665UL] = t3626->mX.mX[904UL];
    out->mOBS_ACT.mX[8666UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[8667UL] = 0.0;
    out->mOBS_ACT.mX[8668UL] = t3626->mX.mX[904UL];
    out->mOBS_ACT.mX[8669UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8670UL] = 0.0;
    out->mOBS_ACT.mX[8671UL] = t3626->mX.mX[906UL];
    out->mOBS_ACT.mX[8672UL] = zc_int334;
    out->mOBS_ACT.mX[8673UL] = t3626->mX.mX[1559UL];
    out->mOBS_ACT.mX[8674UL] = t3626->mX.mX[1559UL];
    out->mOBS_ACT.mX[8675UL] = t3626->mX.mX[904UL];
    out->mOBS_ACT.mX[8676UL] = zc_int334;
    out->mOBS_ACT.mX[8677UL] = zc_int334;
    out->mOBS_ACT.mX[8678UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8679UL] = t3626->mX.mX[912UL];
    out->mOBS_ACT.mX[8680UL] = t3626->mX.mX[912UL];
    out->mOBS_ACT.mX[8681UL] = t3626->mX.mX[912UL];
    out->mOBS_ACT.mX[8682UL] = t3626->mX.mX[912UL];
    out->mOBS_ACT.mX[8683UL] = t3626->mX.mX[913UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[8684UL] = t3626->mX.mX[912UL];
    out->mOBS_ACT.mX[8685UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8686UL] = zc_int360;
    out->mOBS_ACT.mX[8687UL] = t3626->mX.mX[914UL];
    out->mOBS_ACT.mX[8688UL] = t3626->mX.mX[914UL];
    out->mOBS_ACT.mX[8689UL] = t3626->mX.mX[1563UL];
    out->mOBS_ACT.mX[8690UL] = 1.0;
    out->mOBS_ACT.mX[8691UL] = intrm_sf_mf_80;
    for (t2773 = 915UL; t2773 - 915UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7777UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8697UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[8702UL] = 0.0;
    out->mOBS_ACT.mX[8703UL] = t3626->mX.mX[1562UL];
    out->mOBS_ACT.mX[8704UL] = t3626->mX.mX[1564UL] * 1000.0;
    out->mOBS_ACT.mX[8705UL] = t3626->mX.mX[1563UL];
    out->mOBS_ACT.mX[8706UL] = BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8707UL] = 1.0;
    out->mOBS_ACT.mX[8708UL] = t3626->mX.mX[1561UL];
    out->mOBS_ACT.mX[8709UL] = 1.0;
    out->mOBS_ACT.mX[8710UL] = t3626->mX.mX[912UL];
    out->mOBS_ACT.mX[8711UL] = t3626->mX.mX[914UL];
    out->mOBS_ACT.mX[8712UL] = 1.0;
    out->mOBS_ACT.mX[8713UL] = t3626->mX.mX[1561UL];
    out->mOBS_ACT.mX[8714UL] = t3626->mX.mX[1562UL];
    out->mOBS_ACT.mX[8715UL] = 1.0;
    out->mOBS_ACT.mX[8716UL] = 1.0;
    out->mOBS_ACT.mX[8717UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8718UL] = zc_int360;
    out->mOBS_ACT.mX[8719UL] = t3626->mX.mX[914UL];
    out->mOBS_ACT.mX[8720UL] = intrm_sf_mf_80;
    out->mOBS_ACT.mX[8721UL] = t3626->mX.mX[1563UL];
    out->mOBS_ACT.mX[8722UL] = t3626->mX.mX[1563UL];
    out->mOBS_ACT.mX[8723UL] = t3626->mX.mX[912UL];
    out->mOBS_ACT.mX[8724UL] = BatteryPack_v2_ModuleAssembly6_Module_1_1_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[8725UL] = t3626->mX.mX[912UL];
    out->mOBS_ACT.mX[8726UL] = t3626->mX.mX[912UL];
    out->mOBS_ACT.mX[8727UL] = t3626->mX.mX[1564UL] * 1000.0;
    out->mOBS_ACT.mX[8728UL] = BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8729UL] = t3626->mX.mX[912UL];
    out->mOBS_ACT.mX[8730UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8731UL] = BatteryPack_v2_ModuleAssembly6_Module_1_1_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[8732UL] = BatteryPack_v2_ModuleAssembly6_Module_1_1_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[8733UL] = zc_int360;
    out->mOBS_ACT.mX[8734UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8735UL] = 0.0;
    out->mOBS_ACT.mX[8736UL] = zc_int360;
    out->mOBS_ACT.mX[8737UL] = intrm_sf_mf_80;
    out->mOBS_ACT.mX[8738UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8739UL] = 0.0;
    out->mOBS_ACT.mX[8740UL] = intrm_sf_mf_80;
    out->mOBS_ACT.mX[8741UL] = t3626->mX.mX[912UL];
    out->mOBS_ACT.mX[8742UL] = BatteryPack_v2_ModuleAssembly6_Module_1_1_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[8743UL] = 0.0;
    out->mOBS_ACT.mX[8744UL] = t3626->mX.mX[912UL];
    out->mOBS_ACT.mX[8745UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8746UL] = zc_int360;
    out->mOBS_ACT.mX[8747UL] = t3626->mX.mX[914UL];
    out->mOBS_ACT.mX[8748UL] = intrm_sf_mf_80;
    out->mOBS_ACT.mX[8749UL] = t3626->mX.mX[1563UL];
    out->mOBS_ACT.mX[8750UL] = t3626->mX.mX[1563UL];
    out->mOBS_ACT.mX[8751UL] = t3626->mX.mX[912UL];
    out->mOBS_ACT.mX[8752UL] = BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3;
    out->mOBS_ACT.mX[8753UL] = intrm_sf_mf_80 - zc_int360;
    out->mOBS_ACT.mX[8754UL] = intrm_sf_mf_80;
    out->mOBS_ACT.mX[8755UL] = 0.0;
    out->mOBS_ACT.mX[8756UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8757UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8758UL] = t3626->mX.mX[920UL];
    out->mOBS_ACT.mX[8759UL] = t3626->mX.mX[920UL];
    out->mOBS_ACT.mX[8760UL] = t3626->mX.mX[920UL];
    out->mOBS_ACT.mX[8761UL] = t3626->mX.mX[920UL];
    out->mOBS_ACT.mX[8762UL] = t3626->mX.mX[921UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[8763UL] = t3626->mX.mX[920UL];
    out->mOBS_ACT.mX[8764UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8765UL] = intrm_sf_mf_136;
    out->mOBS_ACT.mX[8766UL] = t3626->mX.mX[922UL];
    out->mOBS_ACT.mX[8767UL] = t3626->mX.mX[922UL];
    out->mOBS_ACT.mX[8768UL] = t3626->mX.mX[1567UL];
    out->mOBS_ACT.mX[8769UL] = 1.0;
    out->mOBS_ACT.mX[8770UL] = intrm_sf_mf_115;
    for (t2773 = 923UL; t2773 - 923UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7848UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8776UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[8781UL] = 0.0;
    out->mOBS_ACT.mX[8782UL] = t3626->mX.mX[1566UL];
    out->mOBS_ACT.mX[8783UL] = t3626->mX.mX[1568UL] * 1000.0;
    out->mOBS_ACT.mX[8784UL] = t3626->mX.mX[1567UL];
    out->mOBS_ACT.mX[8785UL] = zc_int661;
    out->mOBS_ACT.mX[8786UL] = 1.0;
    out->mOBS_ACT.mX[8787UL] = t3626->mX.mX[1565UL];
    out->mOBS_ACT.mX[8788UL] = 1.0;
    out->mOBS_ACT.mX[8789UL] = t3626->mX.mX[920UL];
    out->mOBS_ACT.mX[8790UL] = t3626->mX.mX[922UL];
    out->mOBS_ACT.mX[8791UL] = 1.0;
    out->mOBS_ACT.mX[8792UL] = t3626->mX.mX[1565UL];
    out->mOBS_ACT.mX[8793UL] = t3626->mX.mX[1566UL];
    out->mOBS_ACT.mX[8794UL] = 1.0;
    out->mOBS_ACT.mX[8795UL] = 1.0;
    out->mOBS_ACT.mX[8796UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8797UL] = intrm_sf_mf_136;
    out->mOBS_ACT.mX[8798UL] = t3626->mX.mX[922UL];
    out->mOBS_ACT.mX[8799UL] = intrm_sf_mf_115;
    out->mOBS_ACT.mX[8800UL] = t3626->mX.mX[1567UL];
    out->mOBS_ACT.mX[8801UL] = t3626->mX.mX[1567UL];
    out->mOBS_ACT.mX[8802UL] = t3626->mX.mX[920UL];
    out->mOBS_ACT.mX[8803UL] = BatteryPack_v2_ModuleAssembly_23_Module02_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[8804UL] = t3626->mX.mX[920UL];
    out->mOBS_ACT.mX[8805UL] = t3626->mX.mX[920UL];
    out->mOBS_ACT.mX[8806UL] = t3626->mX.mX[1568UL] * 1000.0;
    out->mOBS_ACT.mX[8807UL] = zc_int661;
    out->mOBS_ACT.mX[8808UL] = t3626->mX.mX[920UL];
    out->mOBS_ACT.mX[8809UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8810UL] = BatteryPack_v2_ModuleAssembly_23_Module02_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[8811UL] = BatteryPack_v2_ModuleAssembly_23_Module02_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[8812UL] = intrm_sf_mf_136;
    out->mOBS_ACT.mX[8813UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8814UL] = 0.0;
    out->mOBS_ACT.mX[8815UL] = intrm_sf_mf_136;
    out->mOBS_ACT.mX[8816UL] = intrm_sf_mf_115;
    out->mOBS_ACT.mX[8817UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8818UL] = 0.0;
    out->mOBS_ACT.mX[8819UL] = intrm_sf_mf_115;
    out->mOBS_ACT.mX[8820UL] = t3626->mX.mX[920UL];
    out->mOBS_ACT.mX[8821UL] = BatteryPack_v2_ModuleAssembly_23_Module02_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[8822UL] = 0.0;
    out->mOBS_ACT.mX[8823UL] = t3626->mX.mX[920UL];
    out->mOBS_ACT.mX[8824UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8825UL] = intrm_sf_mf_136;
    out->mOBS_ACT.mX[8826UL] = t3626->mX.mX[922UL];
    out->mOBS_ACT.mX[8827UL] = intrm_sf_mf_115;
    out->mOBS_ACT.mX[8828UL] = t3626->mX.mX[1567UL];
    out->mOBS_ACT.mX[8829UL] = t3626->mX.mX[1567UL];
    out->mOBS_ACT.mX[8830UL] = t3626->mX.mX[920UL];
    out->mOBS_ACT.mX[8831UL] = zc_int661;
    out->mOBS_ACT.mX[8832UL] = intrm_sf_mf_115 - intrm_sf_mf_136;
    out->mOBS_ACT.mX[8833UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8834UL] = t3626->mX.mX[928UL];
    out->mOBS_ACT.mX[8835UL] = t3626->mX.mX[928UL];
    out->mOBS_ACT.mX[8836UL] = t3626->mX.mX[928UL];
    out->mOBS_ACT.mX[8837UL] = t3626->mX.mX[928UL];
    out->mOBS_ACT.mX[8838UL] = t3626->mX.mX[929UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[8839UL] = t3626->mX.mX[928UL];
    out->mOBS_ACT.mX[8840UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8841UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[8842UL] = t3626->mX.mX[930UL];
    out->mOBS_ACT.mX[8843UL] = t3626->mX.mX[930UL];
    out->mOBS_ACT.mX[8844UL] = t3626->mX.mX[1571UL];
    out->mOBS_ACT.mX[8845UL] = 1.0;
    out->mOBS_ACT.mX[8846UL] = intrm_sf_mf_136;
    for (t2773 = 931UL; t2773 - 931UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7916UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8852UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[8857UL] = 0.0;
    out->mOBS_ACT.mX[8858UL] = t3626->mX.mX[1570UL];
    out->mOBS_ACT.mX[8859UL] = t3626->mX.mX[1572UL] * 1000.0;
    out->mOBS_ACT.mX[8860UL] = t3626->mX.mX[1571UL];
    out->mOBS_ACT.mX[8861UL] = zc_int576;
    out->mOBS_ACT.mX[8862UL] = 1.0;
    out->mOBS_ACT.mX[8863UL] = t3626->mX.mX[1569UL];
    out->mOBS_ACT.mX[8864UL] = 1.0;
    out->mOBS_ACT.mX[8865UL] = t3626->mX.mX[928UL];
    out->mOBS_ACT.mX[8866UL] = t3626->mX.mX[930UL];
    out->mOBS_ACT.mX[8867UL] = 1.0;
    out->mOBS_ACT.mX[8868UL] = t3626->mX.mX[1569UL];
    out->mOBS_ACT.mX[8869UL] = t3626->mX.mX[1570UL];
    out->mOBS_ACT.mX[8870UL] = 1.0;
    out->mOBS_ACT.mX[8871UL] = 1.0;
    out->mOBS_ACT.mX[8872UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8873UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[8874UL] = t3626->mX.mX[930UL];
    out->mOBS_ACT.mX[8875UL] = intrm_sf_mf_136;
    out->mOBS_ACT.mX[8876UL] = t3626->mX.mX[1571UL];
    out->mOBS_ACT.mX[8877UL] = t3626->mX.mX[1571UL];
    out->mOBS_ACT.mX[8878UL] = t3626->mX.mX[928UL];
    out->mOBS_ACT.mX[8879UL] = BatteryPack_v2_ModuleAssembly_23_Module03_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[8880UL] = t3626->mX.mX[928UL];
    out->mOBS_ACT.mX[8881UL] = t3626->mX.mX[928UL];
    out->mOBS_ACT.mX[8882UL] = t3626->mX.mX[1572UL] * 1000.0;
    out->mOBS_ACT.mX[8883UL] = zc_int576;
    out->mOBS_ACT.mX[8884UL] = t3626->mX.mX[928UL];
    out->mOBS_ACT.mX[8885UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8886UL] = BatteryPack_v2_ModuleAssembly_23_Module03_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[8887UL] = BatteryPack_v2_ModuleAssembly_23_Module03_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[8888UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[8889UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8890UL] = 0.0;
    out->mOBS_ACT.mX[8891UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[8892UL] = intrm_sf_mf_136;
    out->mOBS_ACT.mX[8893UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8894UL] = 0.0;
    out->mOBS_ACT.mX[8895UL] = intrm_sf_mf_136;
    out->mOBS_ACT.mX[8896UL] = t3626->mX.mX[928UL];
    out->mOBS_ACT.mX[8897UL] = BatteryPack_v2_ModuleAssembly_23_Module03_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[8898UL] = 0.0;
    out->mOBS_ACT.mX[8899UL] = t3626->mX.mX[928UL];
    out->mOBS_ACT.mX[8900UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8901UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[8902UL] = t3626->mX.mX[930UL];
    out->mOBS_ACT.mX[8903UL] = intrm_sf_mf_136;
    out->mOBS_ACT.mX[8904UL] = t3626->mX.mX[1571UL];
    out->mOBS_ACT.mX[8905UL] = t3626->mX.mX[1571UL];
    out->mOBS_ACT.mX[8906UL] = t3626->mX.mX[928UL];
    out->mOBS_ACT.mX[8907UL] = zc_int576;
    out->mOBS_ACT.mX[8908UL] = intrm_sf_mf_136 - BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[8909UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8910UL] = t3626->mX.mX[936UL];
    out->mOBS_ACT.mX[8911UL] = t3626->mX.mX[936UL];
    out->mOBS_ACT.mX[8912UL] = t3626->mX.mX[936UL];
    out->mOBS_ACT.mX[8913UL] = t3626->mX.mX[936UL];
    out->mOBS_ACT.mX[8914UL] = t3626->mX.mX[937UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[8915UL] = t3626->mX.mX[936UL];
    out->mOBS_ACT.mX[8916UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8917UL] = intrm_sf_mf_135;
    out->mOBS_ACT.mX[8918UL] = t3626->mX.mX[938UL];
    out->mOBS_ACT.mX[8919UL] = t3626->mX.mX[938UL];
    out->mOBS_ACT.mX[8920UL] = t3626->mX.mX[1575UL];
    out->mOBS_ACT.mX[8921UL] = 1.0;
    out->mOBS_ACT.mX[8922UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    for (t2773 = 939UL; t2773 - 939UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 7984UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8928UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[8933UL] = 0.0;
    out->mOBS_ACT.mX[8934UL] = t3626->mX.mX[1574UL];
    out->mOBS_ACT.mX[8935UL] = t3626->mX.mX[1576UL] * 1000.0;
    out->mOBS_ACT.mX[8936UL] = t3626->mX.mX[1575UL];
    out->mOBS_ACT.mX[8937UL] = zc_int580;
    out->mOBS_ACT.mX[8938UL] = 1.0;
    out->mOBS_ACT.mX[8939UL] = t3626->mX.mX[1573UL];
    out->mOBS_ACT.mX[8940UL] = 1.0;
    out->mOBS_ACT.mX[8941UL] = t3626->mX.mX[936UL];
    out->mOBS_ACT.mX[8942UL] = t3626->mX.mX[938UL];
    out->mOBS_ACT.mX[8943UL] = 1.0;
    out->mOBS_ACT.mX[8944UL] = t3626->mX.mX[1573UL];
    out->mOBS_ACT.mX[8945UL] = t3626->mX.mX[1574UL];
    out->mOBS_ACT.mX[8946UL] = 1.0;
    out->mOBS_ACT.mX[8947UL] = 1.0;
    out->mOBS_ACT.mX[8948UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8949UL] = intrm_sf_mf_135;
    out->mOBS_ACT.mX[8950UL] = t3626->mX.mX[938UL];
    out->mOBS_ACT.mX[8951UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[8952UL] = t3626->mX.mX[1575UL];
    out->mOBS_ACT.mX[8953UL] = t3626->mX.mX[1575UL];
    out->mOBS_ACT.mX[8954UL] = t3626->mX.mX[936UL];
    out->mOBS_ACT.mX[8955UL] = BatteryPack_v2_ModuleAssembly_23_Module04_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[8956UL] = t3626->mX.mX[936UL];
    out->mOBS_ACT.mX[8957UL] = t3626->mX.mX[936UL];
    out->mOBS_ACT.mX[8958UL] = t3626->mX.mX[1576UL] * 1000.0;
    out->mOBS_ACT.mX[8959UL] = zc_int580;
    out->mOBS_ACT.mX[8960UL] = t3626->mX.mX[936UL];
    out->mOBS_ACT.mX[8961UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8962UL] = BatteryPack_v2_ModuleAssembly_23_Module04_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[8963UL] = BatteryPack_v2_ModuleAssembly_23_Module04_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[8964UL] = intrm_sf_mf_135;
    out->mOBS_ACT.mX[8965UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8966UL] = 0.0;
    out->mOBS_ACT.mX[8967UL] = intrm_sf_mf_135;
    out->mOBS_ACT.mX[8968UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[8969UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8970UL] = 0.0;
    out->mOBS_ACT.mX[8971UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[8972UL] = t3626->mX.mX[936UL];
    out->mOBS_ACT.mX[8973UL] = BatteryPack_v2_ModuleAssembly_23_Module04_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[8974UL] = 0.0;
    out->mOBS_ACT.mX[8975UL] = t3626->mX.mX[936UL];
    out->mOBS_ACT.mX[8976UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8977UL] = intrm_sf_mf_135;
    out->mOBS_ACT.mX[8978UL] = t3626->mX.mX[938UL];
    out->mOBS_ACT.mX[8979UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[8980UL] = t3626->mX.mX[1575UL];
    out->mOBS_ACT.mX[8981UL] = t3626->mX.mX[1575UL];
    out->mOBS_ACT.mX[8982UL] = t3626->mX.mX[936UL];
    out->mOBS_ACT.mX[8983UL] = zc_int580;
    out->mOBS_ACT.mX[8984UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3 - intrm_sf_mf_135;
    out->mOBS_ACT.mX[8985UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[8986UL] = t3626->mX.mX[944UL];
    out->mOBS_ACT.mX[8987UL] = t3626->mX.mX[944UL];
    out->mOBS_ACT.mX[8988UL] = t3626->mX.mX[944UL];
    out->mOBS_ACT.mX[8989UL] = t3626->mX.mX[944UL];
    out->mOBS_ACT.mX[8990UL] = t3626->mX.mX[945UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[8991UL] = t3626->mX.mX[944UL];
    out->mOBS_ACT.mX[8992UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[8993UL] = zc_int655;
    out->mOBS_ACT.mX[8994UL] = t3626->mX.mX[946UL];
    out->mOBS_ACT.mX[8995UL] = t3626->mX.mX[946UL];
    out->mOBS_ACT.mX[8996UL] = t3626->mX.mX[1579UL];
    out->mOBS_ACT.mX[8997UL] = 1.0;
    out->mOBS_ACT.mX[8998UL] = intrm_sf_mf_135;
    for (t2773 = 947UL; t2773 - 947UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8052UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 9004UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[9009UL] = 0.0;
    out->mOBS_ACT.mX[9010UL] = t3626->mX.mX[1578UL];
    out->mOBS_ACT.mX[9011UL] = t3626->mX.mX[1580UL] * 1000.0;
    out->mOBS_ACT.mX[9012UL] = t3626->mX.mX[1579UL];
    out->mOBS_ACT.mX[9013UL] = zc_int579;
    out->mOBS_ACT.mX[9014UL] = 1.0;
    out->mOBS_ACT.mX[9015UL] = t3626->mX.mX[1577UL];
    out->mOBS_ACT.mX[9016UL] = 1.0;
    out->mOBS_ACT.mX[9017UL] = t3626->mX.mX[944UL];
    out->mOBS_ACT.mX[9018UL] = t3626->mX.mX[946UL];
    out->mOBS_ACT.mX[9019UL] = 1.0;
    out->mOBS_ACT.mX[9020UL] = t3626->mX.mX[1577UL];
    out->mOBS_ACT.mX[9021UL] = t3626->mX.mX[1578UL];
    out->mOBS_ACT.mX[9022UL] = 1.0;
    out->mOBS_ACT.mX[9023UL] = 1.0;
    out->mOBS_ACT.mX[9024UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9025UL] = zc_int655;
    out->mOBS_ACT.mX[9026UL] = t3626->mX.mX[946UL];
    out->mOBS_ACT.mX[9027UL] = intrm_sf_mf_135;
    out->mOBS_ACT.mX[9028UL] = t3626->mX.mX[1579UL];
    out->mOBS_ACT.mX[9029UL] = t3626->mX.mX[1579UL];
    out->mOBS_ACT.mX[9030UL] = t3626->mX.mX[944UL];
    out->mOBS_ACT.mX[9031UL] = BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[9032UL] = t3626->mX.mX[944UL];
    out->mOBS_ACT.mX[9033UL] = t3626->mX.mX[944UL];
    out->mOBS_ACT.mX[9034UL] = t3626->mX.mX[1580UL] * 1000.0;
    out->mOBS_ACT.mX[9035UL] = zc_int579;
    out->mOBS_ACT.mX[9036UL] = t3626->mX.mX[944UL];
    out->mOBS_ACT.mX[9037UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9038UL] = BatteryPack_v2_ModuleAssembly_23_Module05_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[9039UL] = BatteryPack_v2_ModuleAssembly_23_Module05_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[9040UL] = zc_int655;
    out->mOBS_ACT.mX[9041UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9042UL] = 0.0;
    out->mOBS_ACT.mX[9043UL] = zc_int655;
    out->mOBS_ACT.mX[9044UL] = intrm_sf_mf_135;
    out->mOBS_ACT.mX[9045UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9046UL] = 0.0;
    out->mOBS_ACT.mX[9047UL] = intrm_sf_mf_135;
    out->mOBS_ACT.mX[9048UL] = t3626->mX.mX[944UL];
    out->mOBS_ACT.mX[9049UL] = BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[9050UL] = 0.0;
    out->mOBS_ACT.mX[9051UL] = t3626->mX.mX[944UL];
    out->mOBS_ACT.mX[9052UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9053UL] = zc_int655;
    out->mOBS_ACT.mX[9054UL] = t3626->mX.mX[946UL];
    out->mOBS_ACT.mX[9055UL] = intrm_sf_mf_135;
    out->mOBS_ACT.mX[9056UL] = t3626->mX.mX[1579UL];
    out->mOBS_ACT.mX[9057UL] = t3626->mX.mX[1579UL];
    out->mOBS_ACT.mX[9058UL] = t3626->mX.mX[944UL];
    out->mOBS_ACT.mX[9059UL] = zc_int579;
    out->mOBS_ACT.mX[9060UL] = intrm_sf_mf_135 - zc_int655;
    out->mOBS_ACT.mX[9061UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9062UL] = t3626->mX.mX[952UL];
    out->mOBS_ACT.mX[9063UL] = t3626->mX.mX[952UL];
    out->mOBS_ACT.mX[9064UL] = t3626->mX.mX[952UL];
    out->mOBS_ACT.mX[9065UL] = t3626->mX.mX[952UL];
    out->mOBS_ACT.mX[9066UL] = t3626->mX.mX[953UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[9067UL] = t3626->mX.mX[952UL];
    out->mOBS_ACT.mX[9068UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9069UL] = zc_int654;
    out->mOBS_ACT.mX[9070UL] = t3626->mX.mX[954UL];
    out->mOBS_ACT.mX[9071UL] = t3626->mX.mX[954UL];
    out->mOBS_ACT.mX[9072UL] = t3626->mX.mX[1583UL];
    out->mOBS_ACT.mX[9073UL] = 1.0;
    out->mOBS_ACT.mX[9074UL] = zc_int655;
    for (t2773 = 955UL; t2773 - 955UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8120UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 9080UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[9085UL] = 0.0;
    out->mOBS_ACT.mX[9086UL] = t3626->mX.mX[1582UL];
    out->mOBS_ACT.mX[9087UL] = t3626->mX.mX[1584UL] * 1000.0;
    out->mOBS_ACT.mX[9088UL] = t3626->mX.mX[1583UL];
    out->mOBS_ACT.mX[9089UL] = zc_int586;
    out->mOBS_ACT.mX[9090UL] = 1.0;
    out->mOBS_ACT.mX[9091UL] = t3626->mX.mX[1581UL];
    out->mOBS_ACT.mX[9092UL] = 1.0;
    out->mOBS_ACT.mX[9093UL] = t3626->mX.mX[952UL];
    out->mOBS_ACT.mX[9094UL] = t3626->mX.mX[954UL];
    out->mOBS_ACT.mX[9095UL] = 1.0;
    out->mOBS_ACT.mX[9096UL] = t3626->mX.mX[1581UL];
    out->mOBS_ACT.mX[9097UL] = t3626->mX.mX[1582UL];
    out->mOBS_ACT.mX[9098UL] = 1.0;
    out->mOBS_ACT.mX[9099UL] = 1.0;
    out->mOBS_ACT.mX[9100UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9101UL] = zc_int654;
    out->mOBS_ACT.mX[9102UL] = t3626->mX.mX[954UL];
    out->mOBS_ACT.mX[9103UL] = zc_int655;
    out->mOBS_ACT.mX[9104UL] = t3626->mX.mX[1583UL];
    out->mOBS_ACT.mX[9105UL] = t3626->mX.mX[1583UL];
    out->mOBS_ACT.mX[9106UL] = t3626->mX.mX[952UL];
    out->mOBS_ACT.mX[9107UL] = BatteryPack_v2_ModuleAssembly_23_Module06_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[9108UL] = t3626->mX.mX[952UL];
    out->mOBS_ACT.mX[9109UL] = t3626->mX.mX[952UL];
    out->mOBS_ACT.mX[9110UL] = t3626->mX.mX[1584UL] * 1000.0;
    out->mOBS_ACT.mX[9111UL] = zc_int586;
    out->mOBS_ACT.mX[9112UL] = t3626->mX.mX[952UL];
    out->mOBS_ACT.mX[9113UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9114UL] = BatteryPack_v2_ModuleAssembly_23_Module06_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[9115UL] = BatteryPack_v2_ModuleAssembly_23_Module06_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[9116UL] = zc_int654;
    out->mOBS_ACT.mX[9117UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9118UL] = 0.0;
    out->mOBS_ACT.mX[9119UL] = zc_int654;
    out->mOBS_ACT.mX[9120UL] = zc_int655;
    out->mOBS_ACT.mX[9121UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9122UL] = 0.0;
    out->mOBS_ACT.mX[9123UL] = zc_int655;
    out->mOBS_ACT.mX[9124UL] = t3626->mX.mX[952UL];
    out->mOBS_ACT.mX[9125UL] = BatteryPack_v2_ModuleAssembly_23_Module06_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[9126UL] = 0.0;
    out->mOBS_ACT.mX[9127UL] = t3626->mX.mX[952UL];
    out->mOBS_ACT.mX[9128UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9129UL] = zc_int654;
    out->mOBS_ACT.mX[9130UL] = t3626->mX.mX[954UL];
    out->mOBS_ACT.mX[9131UL] = zc_int655;
    out->mOBS_ACT.mX[9132UL] = t3626->mX.mX[1583UL];
    out->mOBS_ACT.mX[9133UL] = t3626->mX.mX[1583UL];
    out->mOBS_ACT.mX[9134UL] = t3626->mX.mX[952UL];
    out->mOBS_ACT.mX[9135UL] = zc_int586;
    out->mOBS_ACT.mX[9136UL] = zc_int655 - zc_int654;
    out->mOBS_ACT.mX[9137UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9138UL] = t3626->mX.mX[960UL];
    out->mOBS_ACT.mX[9139UL] = t3626->mX.mX[960UL];
    out->mOBS_ACT.mX[9140UL] = t3626->mX.mX[960UL];
    out->mOBS_ACT.mX[9141UL] = t3626->mX.mX[960UL];
    out->mOBS_ACT.mX[9142UL] = t3626->mX.mX[961UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[9143UL] = t3626->mX.mX[960UL];
    out->mOBS_ACT.mX[9144UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9145UL] = zc_int653;
    out->mOBS_ACT.mX[9146UL] = t3626->mX.mX[962UL];
    out->mOBS_ACT.mX[9147UL] = t3626->mX.mX[962UL];
    out->mOBS_ACT.mX[9148UL] = t3626->mX.mX[1587UL];
    out->mOBS_ACT.mX[9149UL] = 1.0;
    out->mOBS_ACT.mX[9150UL] = zc_int654;
    for (t2773 = 963UL; t2773 - 963UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8188UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 9156UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[9161UL] = 0.0;
    out->mOBS_ACT.mX[9162UL] = t3626->mX.mX[1586UL];
    out->mOBS_ACT.mX[9163UL] = t3626->mX.mX[1588UL] * 1000.0;
    out->mOBS_ACT.mX[9164UL] = t3626->mX.mX[1587UL];
    out->mOBS_ACT.mX[9165UL] = BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9166UL] = 1.0;
    out->mOBS_ACT.mX[9167UL] = t3626->mX.mX[1585UL];
    out->mOBS_ACT.mX[9168UL] = 1.0;
    out->mOBS_ACT.mX[9169UL] = t3626->mX.mX[960UL];
    out->mOBS_ACT.mX[9170UL] = t3626->mX.mX[962UL];
    out->mOBS_ACT.mX[9171UL] = 1.0;
    out->mOBS_ACT.mX[9172UL] = t3626->mX.mX[1585UL];
    out->mOBS_ACT.mX[9173UL] = t3626->mX.mX[1586UL];
    out->mOBS_ACT.mX[9174UL] = 1.0;
    out->mOBS_ACT.mX[9175UL] = 1.0;
    out->mOBS_ACT.mX[9176UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9177UL] = zc_int653;
    out->mOBS_ACT.mX[9178UL] = t3626->mX.mX[962UL];
    out->mOBS_ACT.mX[9179UL] = zc_int654;
    out->mOBS_ACT.mX[9180UL] = t3626->mX.mX[1587UL];
    out->mOBS_ACT.mX[9181UL] = t3626->mX.mX[1587UL];
    out->mOBS_ACT.mX[9182UL] = t3626->mX.mX[960UL];
    out->mOBS_ACT.mX[9183UL] = BatteryPack_v2_ModuleAssembly_23_Module07_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[9184UL] = t3626->mX.mX[960UL];
    out->mOBS_ACT.mX[9185UL] = t3626->mX.mX[960UL];
    out->mOBS_ACT.mX[9186UL] = t3626->mX.mX[1588UL] * 1000.0;
    out->mOBS_ACT.mX[9187UL] = BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9188UL] = t3626->mX.mX[960UL];
    out->mOBS_ACT.mX[9189UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9190UL] = BatteryPack_v2_ModuleAssembly_23_Module07_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[9191UL] = BatteryPack_v2_ModuleAssembly_23_Module07_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[9192UL] = zc_int653;
    out->mOBS_ACT.mX[9193UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9194UL] = 0.0;
    out->mOBS_ACT.mX[9195UL] = zc_int653;
    out->mOBS_ACT.mX[9196UL] = zc_int654;
    out->mOBS_ACT.mX[9197UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9198UL] = 0.0;
    out->mOBS_ACT.mX[9199UL] = zc_int654;
    out->mOBS_ACT.mX[9200UL] = t3626->mX.mX[960UL];
    out->mOBS_ACT.mX[9201UL] = BatteryPack_v2_ModuleAssembly_23_Module07_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[9202UL] = 0.0;
    out->mOBS_ACT.mX[9203UL] = t3626->mX.mX[960UL];
    out->mOBS_ACT.mX[9204UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9205UL] = zc_int653;
    out->mOBS_ACT.mX[9206UL] = t3626->mX.mX[962UL];
    out->mOBS_ACT.mX[9207UL] = zc_int654;
    out->mOBS_ACT.mX[9208UL] = t3626->mX.mX[1587UL];
    out->mOBS_ACT.mX[9209UL] = t3626->mX.mX[1587UL];
    out->mOBS_ACT.mX[9210UL] = t3626->mX.mX[960UL];
    out->mOBS_ACT.mX[9211UL] = BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9212UL] = zc_int654 - zc_int653;
    out->mOBS_ACT.mX[9213UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9214UL] = t3626->mX.mX[968UL];
    out->mOBS_ACT.mX[9215UL] = t3626->mX.mX[968UL];
    out->mOBS_ACT.mX[9216UL] = t3626->mX.mX[968UL];
    out->mOBS_ACT.mX[9217UL] = t3626->mX.mX[968UL];
    out->mOBS_ACT.mX[9218UL] = t3626->mX.mX[969UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[9219UL] = t3626->mX.mX[968UL];
    out->mOBS_ACT.mX[9220UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9221UL] = zc_int652;
    out->mOBS_ACT.mX[9222UL] = t3626->mX.mX[970UL];
    out->mOBS_ACT.mX[9223UL] = t3626->mX.mX[970UL];
    out->mOBS_ACT.mX[9224UL] = t3626->mX.mX[1591UL];
    out->mOBS_ACT.mX[9225UL] = 1.0;
    out->mOBS_ACT.mX[9226UL] = zc_int653;
    for (t2773 = 971UL; t2773 - 971UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8256UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 9232UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[9237UL] = 0.0;
    out->mOBS_ACT.mX[9238UL] = t3626->mX.mX[1590UL];
    out->mOBS_ACT.mX[9239UL] = t3626->mX.mX[1592UL] * 1000.0;
    out->mOBS_ACT.mX[9240UL] = t3626->mX.mX[1591UL];
    out->mOBS_ACT.mX[9241UL] = zc_int588;
    out->mOBS_ACT.mX[9242UL] = 1.0;
    out->mOBS_ACT.mX[9243UL] = t3626->mX.mX[1589UL];
    out->mOBS_ACT.mX[9244UL] = 1.0;
    out->mOBS_ACT.mX[9245UL] = t3626->mX.mX[968UL];
    out->mOBS_ACT.mX[9246UL] = t3626->mX.mX[970UL];
    out->mOBS_ACT.mX[9247UL] = 1.0;
    out->mOBS_ACT.mX[9248UL] = t3626->mX.mX[1589UL];
    out->mOBS_ACT.mX[9249UL] = t3626->mX.mX[1590UL];
    out->mOBS_ACT.mX[9250UL] = 1.0;
    out->mOBS_ACT.mX[9251UL] = 1.0;
    out->mOBS_ACT.mX[9252UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9253UL] = zc_int652;
    out->mOBS_ACT.mX[9254UL] = t3626->mX.mX[970UL];
    out->mOBS_ACT.mX[9255UL] = zc_int653;
    out->mOBS_ACT.mX[9256UL] = t3626->mX.mX[1591UL];
    out->mOBS_ACT.mX[9257UL] = t3626->mX.mX[1591UL];
    out->mOBS_ACT.mX[9258UL] = t3626->mX.mX[968UL];
    out->mOBS_ACT.mX[9259UL] = BatteryPack_v2_ModuleAssembly_23_Module08_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[9260UL] = t3626->mX.mX[968UL];
    out->mOBS_ACT.mX[9261UL] = t3626->mX.mX[968UL];
    out->mOBS_ACT.mX[9262UL] = t3626->mX.mX[1592UL] * 1000.0;
    out->mOBS_ACT.mX[9263UL] = zc_int588;
    out->mOBS_ACT.mX[9264UL] = t3626->mX.mX[968UL];
    out->mOBS_ACT.mX[9265UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9266UL] = BatteryPack_v2_ModuleAssembly_23_Module08_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[9267UL] = BatteryPack_v2_ModuleAssembly_23_Module08_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[9268UL] = zc_int652;
    out->mOBS_ACT.mX[9269UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9270UL] = 0.0;
    out->mOBS_ACT.mX[9271UL] = zc_int652;
    out->mOBS_ACT.mX[9272UL] = zc_int653;
    out->mOBS_ACT.mX[9273UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9274UL] = 0.0;
    out->mOBS_ACT.mX[9275UL] = zc_int653;
    out->mOBS_ACT.mX[9276UL] = t3626->mX.mX[968UL];
    out->mOBS_ACT.mX[9277UL] = BatteryPack_v2_ModuleAssembly_23_Module08_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[9278UL] = 0.0;
    out->mOBS_ACT.mX[9279UL] = t3626->mX.mX[968UL];
    out->mOBS_ACT.mX[9280UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9281UL] = zc_int652;
    out->mOBS_ACT.mX[9282UL] = t3626->mX.mX[970UL];
    out->mOBS_ACT.mX[9283UL] = zc_int653;
    out->mOBS_ACT.mX[9284UL] = t3626->mX.mX[1591UL];
    out->mOBS_ACT.mX[9285UL] = t3626->mX.mX[1591UL];
    out->mOBS_ACT.mX[9286UL] = t3626->mX.mX[968UL];
    out->mOBS_ACT.mX[9287UL] = zc_int588;
    out->mOBS_ACT.mX[9288UL] = zc_int653 - zc_int652;
    out->mOBS_ACT.mX[9289UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9290UL] = t3626->mX.mX[976UL];
    out->mOBS_ACT.mX[9291UL] = t3626->mX.mX[976UL];
    out->mOBS_ACT.mX[9292UL] = t3626->mX.mX[976UL];
    out->mOBS_ACT.mX[9293UL] = t3626->mX.mX[976UL];
    out->mOBS_ACT.mX[9294UL] = t3626->mX.mX[977UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[9295UL] = t3626->mX.mX[976UL];
    out->mOBS_ACT.mX[9296UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9297UL] = zc_int651;
    out->mOBS_ACT.mX[9298UL] = t3626->mX.mX[978UL];
    out->mOBS_ACT.mX[9299UL] = t3626->mX.mX[978UL];
    out->mOBS_ACT.mX[9300UL] = t3626->mX.mX[1595UL];
    out->mOBS_ACT.mX[9301UL] = 1.0;
    out->mOBS_ACT.mX[9302UL] = zc_int652;
    for (t2773 = 979UL; t2773 - 979UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8324UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 9308UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[9313UL] = 0.0;
    out->mOBS_ACT.mX[9314UL] = t3626->mX.mX[1594UL];
    out->mOBS_ACT.mX[9315UL] = t3626->mX.mX[1596UL] * 1000.0;
    out->mOBS_ACT.mX[9316UL] = t3626->mX.mX[1595UL];
    out->mOBS_ACT.mX[9317UL] = zc_int595;
    out->mOBS_ACT.mX[9318UL] = 1.0;
    out->mOBS_ACT.mX[9319UL] = t3626->mX.mX[1593UL];
    out->mOBS_ACT.mX[9320UL] = 1.0;
    out->mOBS_ACT.mX[9321UL] = t3626->mX.mX[976UL];
    out->mOBS_ACT.mX[9322UL] = t3626->mX.mX[978UL];
    out->mOBS_ACT.mX[9323UL] = 1.0;
    out->mOBS_ACT.mX[9324UL] = t3626->mX.mX[1593UL];
    out->mOBS_ACT.mX[9325UL] = t3626->mX.mX[1594UL];
    out->mOBS_ACT.mX[9326UL] = 1.0;
    out->mOBS_ACT.mX[9327UL] = 1.0;
    out->mOBS_ACT.mX[9328UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9329UL] = zc_int651;
    out->mOBS_ACT.mX[9330UL] = t3626->mX.mX[978UL];
    out->mOBS_ACT.mX[9331UL] = zc_int652;
    out->mOBS_ACT.mX[9332UL] = t3626->mX.mX[1595UL];
    out->mOBS_ACT.mX[9333UL] = t3626->mX.mX[1595UL];
    out->mOBS_ACT.mX[9334UL] = t3626->mX.mX[976UL];
    out->mOBS_ACT.mX[9335UL] = BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[9336UL] = t3626->mX.mX[976UL];
    out->mOBS_ACT.mX[9337UL] = t3626->mX.mX[976UL];
    out->mOBS_ACT.mX[9338UL] = t3626->mX.mX[1596UL] * 1000.0;
    out->mOBS_ACT.mX[9339UL] = zc_int595;
    out->mOBS_ACT.mX[9340UL] = t3626->mX.mX[976UL];
    out->mOBS_ACT.mX[9341UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9342UL] = BatteryPack_v2_ModuleAssembly_23_Module09_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[9343UL] = BatteryPack_v2_ModuleAssembly_23_Module09_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[9344UL] = zc_int651;
    out->mOBS_ACT.mX[9345UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9346UL] = 0.0;
    out->mOBS_ACT.mX[9347UL] = zc_int651;
    out->mOBS_ACT.mX[9348UL] = zc_int652;
    out->mOBS_ACT.mX[9349UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9350UL] = 0.0;
    out->mOBS_ACT.mX[9351UL] = zc_int652;
    out->mOBS_ACT.mX[9352UL] = t3626->mX.mX[976UL];
    out->mOBS_ACT.mX[9353UL] = BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[9354UL] = 0.0;
    out->mOBS_ACT.mX[9355UL] = t3626->mX.mX[976UL];
    out->mOBS_ACT.mX[9356UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9357UL] = zc_int651;
    out->mOBS_ACT.mX[9358UL] = t3626->mX.mX[978UL];
    out->mOBS_ACT.mX[9359UL] = zc_int652;
    out->mOBS_ACT.mX[9360UL] = t3626->mX.mX[1595UL];
    out->mOBS_ACT.mX[9361UL] = t3626->mX.mX[1595UL];
    out->mOBS_ACT.mX[9362UL] = t3626->mX.mX[976UL];
    out->mOBS_ACT.mX[9363UL] = zc_int595;
    out->mOBS_ACT.mX[9364UL] = zc_int652 - zc_int651;
    out->mOBS_ACT.mX[9365UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9366UL] = t3626->mX.mX[984UL];
    out->mOBS_ACT.mX[9367UL] = t3626->mX.mX[984UL];
    out->mOBS_ACT.mX[9368UL] = t3626->mX.mX[984UL];
    out->mOBS_ACT.mX[9369UL] = t3626->mX.mX[984UL];
    out->mOBS_ACT.mX[9370UL] = t3626->mX.mX[985UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[9371UL] = t3626->mX.mX[984UL];
    out->mOBS_ACT.mX[9372UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9373UL] = zc_int650;
    out->mOBS_ACT.mX[9374UL] = t3626->mX.mX[986UL];
    out->mOBS_ACT.mX[9375UL] = t3626->mX.mX[986UL];
    out->mOBS_ACT.mX[9376UL] = t3626->mX.mX[1599UL];
    out->mOBS_ACT.mX[9377UL] = 1.0;
    out->mOBS_ACT.mX[9378UL] = zc_int651;
    for (t2773 = 987UL; t2773 - 987UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8392UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 9384UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[9389UL] = 0.0;
    out->mOBS_ACT.mX[9390UL] = t3626->mX.mX[1598UL];
    out->mOBS_ACT.mX[9391UL] = t3626->mX.mX[1600UL] * 1000.0;
    out->mOBS_ACT.mX[9392UL] = t3626->mX.mX[1599UL];
    out->mOBS_ACT.mX[9393UL] = zc_int598;
    out->mOBS_ACT.mX[9394UL] = 1.0;
    out->mOBS_ACT.mX[9395UL] = t3626->mX.mX[1597UL];
    out->mOBS_ACT.mX[9396UL] = 1.0;
    out->mOBS_ACT.mX[9397UL] = t3626->mX.mX[984UL];
    out->mOBS_ACT.mX[9398UL] = t3626->mX.mX[986UL];
    out->mOBS_ACT.mX[9399UL] = 1.0;
    out->mOBS_ACT.mX[9400UL] = t3626->mX.mX[1597UL];
    out->mOBS_ACT.mX[9401UL] = t3626->mX.mX[1598UL];
    out->mOBS_ACT.mX[9402UL] = 1.0;
    out->mOBS_ACT.mX[9403UL] = 1.0;
    out->mOBS_ACT.mX[9404UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9405UL] = zc_int650;
    out->mOBS_ACT.mX[9406UL] = t3626->mX.mX[986UL];
    out->mOBS_ACT.mX[9407UL] = zc_int651;
    out->mOBS_ACT.mX[9408UL] = t3626->mX.mX[1599UL];
    out->mOBS_ACT.mX[9409UL] = t3626->mX.mX[1599UL];
    out->mOBS_ACT.mX[9410UL] = t3626->mX.mX[984UL];
    out->mOBS_ACT.mX[9411UL] = BatteryPack_v2_ModuleAssembly_23_Module10_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[9412UL] = t3626->mX.mX[984UL];
    out->mOBS_ACT.mX[9413UL] = t3626->mX.mX[984UL];
    out->mOBS_ACT.mX[9414UL] = t3626->mX.mX[1600UL] * 1000.0;
    out->mOBS_ACT.mX[9415UL] = zc_int598;
    out->mOBS_ACT.mX[9416UL] = t3626->mX.mX[984UL];
    out->mOBS_ACT.mX[9417UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9418UL] = BatteryPack_v2_ModuleAssembly_23_Module10_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[9419UL] = BatteryPack_v2_ModuleAssembly_23_Module10_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[9420UL] = zc_int650;
    out->mOBS_ACT.mX[9421UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9422UL] = 0.0;
    out->mOBS_ACT.mX[9423UL] = zc_int650;
    out->mOBS_ACT.mX[9424UL] = zc_int651;
    out->mOBS_ACT.mX[9425UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9426UL] = 0.0;
    out->mOBS_ACT.mX[9427UL] = zc_int651;
    out->mOBS_ACT.mX[9428UL] = t3626->mX.mX[984UL];
    out->mOBS_ACT.mX[9429UL] = BatteryPack_v2_ModuleAssembly_23_Module10_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[9430UL] = 0.0;
    out->mOBS_ACT.mX[9431UL] = t3626->mX.mX[984UL];
    out->mOBS_ACT.mX[9432UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9433UL] = zc_int650;
    out->mOBS_ACT.mX[9434UL] = t3626->mX.mX[986UL];
    out->mOBS_ACT.mX[9435UL] = zc_int651;
    out->mOBS_ACT.mX[9436UL] = t3626->mX.mX[1599UL];
    out->mOBS_ACT.mX[9437UL] = t3626->mX.mX[1599UL];
    out->mOBS_ACT.mX[9438UL] = t3626->mX.mX[984UL];
    out->mOBS_ACT.mX[9439UL] = zc_int598;
    out->mOBS_ACT.mX[9440UL] = zc_int651 - zc_int650;
    out->mOBS_ACT.mX[9441UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9442UL] = t3626->mX.mX[992UL];
    out->mOBS_ACT.mX[9443UL] = t3626->mX.mX[992UL];
    out->mOBS_ACT.mX[9444UL] = t3626->mX.mX[992UL];
    out->mOBS_ACT.mX[9445UL] = t3626->mX.mX[992UL];
    out->mOBS_ACT.mX[9446UL] = t3626->mX.mX[993UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[9447UL] = t3626->mX.mX[992UL];
    out->mOBS_ACT.mX[9448UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9449UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9450UL] = t3626->mX.mX[994UL];
    out->mOBS_ACT.mX[9451UL] = t3626->mX.mX[994UL];
    out->mOBS_ACT.mX[9452UL] = t3626->mX.mX[1603UL];
    out->mOBS_ACT.mX[9453UL] = 1.0;
    out->mOBS_ACT.mX[9454UL] = zc_int650;
    for (t2773 = 995UL; t2773 - 995UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8460UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 9460UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[9465UL] = 0.0;
    out->mOBS_ACT.mX[9466UL] = t3626->mX.mX[1602UL];
    out->mOBS_ACT.mX[9467UL] = t3626->mX.mX[1604UL] * 1000.0;
    out->mOBS_ACT.mX[9468UL] = t3626->mX.mX[1603UL];
    out->mOBS_ACT.mX[9469UL] = zc_int601;
    out->mOBS_ACT.mX[9470UL] = 1.0;
    out->mOBS_ACT.mX[9471UL] = t3626->mX.mX[1601UL];
    out->mOBS_ACT.mX[9472UL] = 1.0;
    out->mOBS_ACT.mX[9473UL] = t3626->mX.mX[992UL];
    out->mOBS_ACT.mX[9474UL] = t3626->mX.mX[994UL];
    out->mOBS_ACT.mX[9475UL] = 1.0;
    out->mOBS_ACT.mX[9476UL] = t3626->mX.mX[1601UL];
    out->mOBS_ACT.mX[9477UL] = t3626->mX.mX[1602UL];
    out->mOBS_ACT.mX[9478UL] = 1.0;
    out->mOBS_ACT.mX[9479UL] = 1.0;
    out->mOBS_ACT.mX[9480UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9481UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9482UL] = t3626->mX.mX[994UL];
    out->mOBS_ACT.mX[9483UL] = zc_int650;
    out->mOBS_ACT.mX[9484UL] = t3626->mX.mX[1603UL];
    out->mOBS_ACT.mX[9485UL] = t3626->mX.mX[1603UL];
    out->mOBS_ACT.mX[9486UL] = t3626->mX.mX[992UL];
    out->mOBS_ACT.mX[9487UL] = BatteryPack_v2_ModuleAssembly_23_Module11_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[9488UL] = t3626->mX.mX[992UL];
    out->mOBS_ACT.mX[9489UL] = t3626->mX.mX[992UL];
    out->mOBS_ACT.mX[9490UL] = t3626->mX.mX[1604UL] * 1000.0;
    out->mOBS_ACT.mX[9491UL] = zc_int601;
    out->mOBS_ACT.mX[9492UL] = t3626->mX.mX[992UL];
    out->mOBS_ACT.mX[9493UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9494UL] = BatteryPack_v2_ModuleAssembly_23_Module11_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[9495UL] = BatteryPack_v2_ModuleAssembly_23_Module11_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[9496UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9497UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9498UL] = 0.0;
    out->mOBS_ACT.mX[9499UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9500UL] = zc_int650;
    out->mOBS_ACT.mX[9501UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9502UL] = 0.0;
    out->mOBS_ACT.mX[9503UL] = zc_int650;
    out->mOBS_ACT.mX[9504UL] = t3626->mX.mX[992UL];
    out->mOBS_ACT.mX[9505UL] = BatteryPack_v2_ModuleAssembly_23_Module11_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[9506UL] = 0.0;
    out->mOBS_ACT.mX[9507UL] = t3626->mX.mX[992UL];
    out->mOBS_ACT.mX[9508UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9509UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9510UL] = t3626->mX.mX[994UL];
    out->mOBS_ACT.mX[9511UL] = zc_int650;
    out->mOBS_ACT.mX[9512UL] = t3626->mX.mX[1603UL];
    out->mOBS_ACT.mX[9513UL] = t3626->mX.mX[1603UL];
    out->mOBS_ACT.mX[9514UL] = t3626->mX.mX[992UL];
    out->mOBS_ACT.mX[9515UL] = zc_int601;
    out->mOBS_ACT.mX[9516UL] = zc_int650 - BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9517UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9518UL] = t3626->mX.mX[1000UL];
    out->mOBS_ACT.mX[9519UL] = t3626->mX.mX[1000UL];
    out->mOBS_ACT.mX[9520UL] = t3626->mX.mX[1000UL];
    out->mOBS_ACT.mX[9521UL] = t3626->mX.mX[1000UL];
    out->mOBS_ACT.mX[9522UL] = t3626->mX.mX[1001UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[9523UL] = t3626->mX.mX[1000UL];
    out->mOBS_ACT.mX[9524UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9525UL] = zc_int648;
    out->mOBS_ACT.mX[9526UL] = t3626->mX.mX[1002UL];
    out->mOBS_ACT.mX[9527UL] = t3626->mX.mX[1002UL];
    out->mOBS_ACT.mX[9528UL] = t3626->mX.mX[1607UL];
    out->mOBS_ACT.mX[9529UL] = 1.0;
    out->mOBS_ACT.mX[9530UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    for (t2773 = 1003UL; t2773 - 1003UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8528UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 9536UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[9541UL] = 0.0;
    out->mOBS_ACT.mX[9542UL] = t3626->mX.mX[1606UL];
    out->mOBS_ACT.mX[9543UL] = t3626->mX.mX[1608UL] * 1000.0;
    out->mOBS_ACT.mX[9544UL] = t3626->mX.mX[1607UL];
    out->mOBS_ACT.mX[9545UL] = zc_int600;
    out->mOBS_ACT.mX[9546UL] = 1.0;
    out->mOBS_ACT.mX[9547UL] = t3626->mX.mX[1605UL];
    out->mOBS_ACT.mX[9548UL] = 1.0;
    out->mOBS_ACT.mX[9549UL] = t3626->mX.mX[1000UL];
    out->mOBS_ACT.mX[9550UL] = t3626->mX.mX[1002UL];
    out->mOBS_ACT.mX[9551UL] = 1.0;
    out->mOBS_ACT.mX[9552UL] = t3626->mX.mX[1605UL];
    out->mOBS_ACT.mX[9553UL] = t3626->mX.mX[1606UL];
    out->mOBS_ACT.mX[9554UL] = 1.0;
    out->mOBS_ACT.mX[9555UL] = 1.0;
    out->mOBS_ACT.mX[9556UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9557UL] = zc_int648;
    out->mOBS_ACT.mX[9558UL] = t3626->mX.mX[1002UL];
    out->mOBS_ACT.mX[9559UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9560UL] = t3626->mX.mX[1607UL];
    out->mOBS_ACT.mX[9561UL] = t3626->mX.mX[1607UL];
    out->mOBS_ACT.mX[9562UL] = t3626->mX.mX[1000UL];
    out->mOBS_ACT.mX[9563UL] = BatteryPack_v2_ModuleAssembly_23_Module12_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[9564UL] = t3626->mX.mX[1000UL];
    out->mOBS_ACT.mX[9565UL] = t3626->mX.mX[1000UL];
    out->mOBS_ACT.mX[9566UL] = t3626->mX.mX[1608UL] * 1000.0;
    out->mOBS_ACT.mX[9567UL] = zc_int600;
    out->mOBS_ACT.mX[9568UL] = t3626->mX.mX[1000UL];
    out->mOBS_ACT.mX[9569UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9570UL] = BatteryPack_v2_ModuleAssembly_23_Module12_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[9571UL] = BatteryPack_v2_ModuleAssembly_23_Module12_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[9572UL] = zc_int648;
    out->mOBS_ACT.mX[9573UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9574UL] = 0.0;
    out->mOBS_ACT.mX[9575UL] = zc_int648;
    out->mOBS_ACT.mX[9576UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9577UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9578UL] = 0.0;
    out->mOBS_ACT.mX[9579UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9580UL] = t3626->mX.mX[1000UL];
    out->mOBS_ACT.mX[9581UL] = BatteryPack_v2_ModuleAssembly_23_Module12_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[9582UL] = 0.0;
    out->mOBS_ACT.mX[9583UL] = t3626->mX.mX[1000UL];
    out->mOBS_ACT.mX[9584UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9585UL] = zc_int648;
    out->mOBS_ACT.mX[9586UL] = t3626->mX.mX[1002UL];
    out->mOBS_ACT.mX[9587UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9588UL] = t3626->mX.mX[1607UL];
    out->mOBS_ACT.mX[9589UL] = t3626->mX.mX[1607UL];
    out->mOBS_ACT.mX[9590UL] = t3626->mX.mX[1000UL];
    out->mOBS_ACT.mX[9591UL] = zc_int600;
    out->mOBS_ACT.mX[9592UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3 - zc_int648;
    out->mOBS_ACT.mX[9593UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9594UL] = t3626->mX.mX[1008UL];
    out->mOBS_ACT.mX[9595UL] = t3626->mX.mX[1008UL];
    out->mOBS_ACT.mX[9596UL] = t3626->mX.mX[1008UL];
    out->mOBS_ACT.mX[9597UL] = t3626->mX.mX[1008UL];
    out->mOBS_ACT.mX[9598UL] = t3626->mX.mX[1009UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[9599UL] = t3626->mX.mX[1008UL];
    out->mOBS_ACT.mX[9600UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9601UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9602UL] = t3626->mX.mX[1010UL];
    out->mOBS_ACT.mX[9603UL] = t3626->mX.mX[1010UL];
    out->mOBS_ACT.mX[9604UL] = t3626->mX.mX[1611UL];
    out->mOBS_ACT.mX[9605UL] = 1.0;
    out->mOBS_ACT.mX[9606UL] = zc_int648;
    for (t2773 = 1011UL; t2773 - 1011UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8596UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 9612UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[9617UL] = 0.0;
    out->mOBS_ACT.mX[9618UL] = t3626->mX.mX[1610UL];
    out->mOBS_ACT.mX[9619UL] = t3626->mX.mX[1612UL] * 1000.0;
    out->mOBS_ACT.mX[9620UL] = t3626->mX.mX[1611UL];
    out->mOBS_ACT.mX[9621UL] = zc_int607;
    out->mOBS_ACT.mX[9622UL] = 1.0;
    out->mOBS_ACT.mX[9623UL] = t3626->mX.mX[1609UL];
    out->mOBS_ACT.mX[9624UL] = 1.0;
    out->mOBS_ACT.mX[9625UL] = t3626->mX.mX[1008UL];
    out->mOBS_ACT.mX[9626UL] = t3626->mX.mX[1010UL];
    out->mOBS_ACT.mX[9627UL] = 1.0;
    out->mOBS_ACT.mX[9628UL] = t3626->mX.mX[1609UL];
    out->mOBS_ACT.mX[9629UL] = t3626->mX.mX[1610UL];
    out->mOBS_ACT.mX[9630UL] = 1.0;
    out->mOBS_ACT.mX[9631UL] = 1.0;
    out->mOBS_ACT.mX[9632UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9633UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9634UL] = t3626->mX.mX[1010UL];
    out->mOBS_ACT.mX[9635UL] = zc_int648;
    out->mOBS_ACT.mX[9636UL] = t3626->mX.mX[1611UL];
    out->mOBS_ACT.mX[9637UL] = t3626->mX.mX[1611UL];
    out->mOBS_ACT.mX[9638UL] = t3626->mX.mX[1008UL];
    out->mOBS_ACT.mX[9639UL] = BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[9640UL] = t3626->mX.mX[1008UL];
    out->mOBS_ACT.mX[9641UL] = t3626->mX.mX[1008UL];
    out->mOBS_ACT.mX[9642UL] = t3626->mX.mX[1612UL] * 1000.0;
    out->mOBS_ACT.mX[9643UL] = zc_int607;
    out->mOBS_ACT.mX[9644UL] = t3626->mX.mX[1008UL];
    out->mOBS_ACT.mX[9645UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9646UL] = BatteryPack_v2_ModuleAssembly_23_Module13_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[9647UL] = BatteryPack_v2_ModuleAssembly_23_Module13_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[9648UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9649UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9650UL] = 0.0;
    out->mOBS_ACT.mX[9651UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9652UL] = zc_int648;
    out->mOBS_ACT.mX[9653UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9654UL] = 0.0;
    out->mOBS_ACT.mX[9655UL] = zc_int648;
    out->mOBS_ACT.mX[9656UL] = t3626->mX.mX[1008UL];
    out->mOBS_ACT.mX[9657UL] = BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[9658UL] = 0.0;
    out->mOBS_ACT.mX[9659UL] = t3626->mX.mX[1008UL];
    out->mOBS_ACT.mX[9660UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9661UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9662UL] = t3626->mX.mX[1010UL];
    out->mOBS_ACT.mX[9663UL] = zc_int648;
    out->mOBS_ACT.mX[9664UL] = t3626->mX.mX[1611UL];
    out->mOBS_ACT.mX[9665UL] = t3626->mX.mX[1611UL];
    out->mOBS_ACT.mX[9666UL] = t3626->mX.mX[1008UL];
    out->mOBS_ACT.mX[9667UL] = zc_int607;
    out->mOBS_ACT.mX[9668UL] = zc_int648 - BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9669UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9670UL] = t3626->mX.mX[1016UL];
    out->mOBS_ACT.mX[9671UL] = t3626->mX.mX[1016UL];
    out->mOBS_ACT.mX[9672UL] = t3626->mX.mX[1016UL];
    out->mOBS_ACT.mX[9673UL] = t3626->mX.mX[1016UL];
    out->mOBS_ACT.mX[9674UL] = t3626->mX.mX[1017UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[9675UL] = t3626->mX.mX[1016UL];
    out->mOBS_ACT.mX[9676UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9677UL] = zc_int646;
    out->mOBS_ACT.mX[9678UL] = t3626->mX.mX[1018UL];
    out->mOBS_ACT.mX[9679UL] = t3626->mX.mX[1018UL];
    out->mOBS_ACT.mX[9680UL] = t3626->mX.mX[1615UL];
    out->mOBS_ACT.mX[9681UL] = 1.0;
    out->mOBS_ACT.mX[9682UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    for (t2773 = 1019UL; t2773 - 1019UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8664UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 9688UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[9693UL] = 0.0;
    out->mOBS_ACT.mX[9694UL] = t3626->mX.mX[1614UL];
    out->mOBS_ACT.mX[9695UL] = t3626->mX.mX[1616UL] * 1000.0;
    out->mOBS_ACT.mX[9696UL] = t3626->mX.mX[1615UL];
    out->mOBS_ACT.mX[9697UL] = zc_int606;
    out->mOBS_ACT.mX[9698UL] = 1.0;
    out->mOBS_ACT.mX[9699UL] = t3626->mX.mX[1613UL];
    out->mOBS_ACT.mX[9700UL] = 1.0;
    out->mOBS_ACT.mX[9701UL] = t3626->mX.mX[1016UL];
    out->mOBS_ACT.mX[9702UL] = t3626->mX.mX[1018UL];
    out->mOBS_ACT.mX[9703UL] = 1.0;
    out->mOBS_ACT.mX[9704UL] = t3626->mX.mX[1613UL];
    out->mOBS_ACT.mX[9705UL] = t3626->mX.mX[1614UL];
    out->mOBS_ACT.mX[9706UL] = 1.0;
    out->mOBS_ACT.mX[9707UL] = 1.0;
    out->mOBS_ACT.mX[9708UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9709UL] = zc_int646;
    out->mOBS_ACT.mX[9710UL] = t3626->mX.mX[1018UL];
    out->mOBS_ACT.mX[9711UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9712UL] = t3626->mX.mX[1615UL];
    out->mOBS_ACT.mX[9713UL] = t3626->mX.mX[1615UL];
    out->mOBS_ACT.mX[9714UL] = t3626->mX.mX[1016UL];
    out->mOBS_ACT.mX[9715UL] = BatteryPack_v2_ModuleAssembly_23_Module14_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[9716UL] = t3626->mX.mX[1016UL];
    out->mOBS_ACT.mX[9717UL] = t3626->mX.mX[1016UL];
    out->mOBS_ACT.mX[9718UL] = t3626->mX.mX[1616UL] * 1000.0;
    out->mOBS_ACT.mX[9719UL] = zc_int606;
    out->mOBS_ACT.mX[9720UL] = t3626->mX.mX[1016UL];
    out->mOBS_ACT.mX[9721UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9722UL] = BatteryPack_v2_ModuleAssembly_23_Module14_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[9723UL] = BatteryPack_v2_ModuleAssembly_23_Module14_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[9724UL] = zc_int646;
    out->mOBS_ACT.mX[9725UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9726UL] = 0.0;
    out->mOBS_ACT.mX[9727UL] = zc_int646;
    out->mOBS_ACT.mX[9728UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9729UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9730UL] = 0.0;
    out->mOBS_ACT.mX[9731UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9732UL] = t3626->mX.mX[1016UL];
    out->mOBS_ACT.mX[9733UL] = BatteryPack_v2_ModuleAssembly_23_Module14_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[9734UL] = 0.0;
    out->mOBS_ACT.mX[9735UL] = t3626->mX.mX[1016UL];
    out->mOBS_ACT.mX[9736UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9737UL] = zc_int646;
    out->mOBS_ACT.mX[9738UL] = t3626->mX.mX[1018UL];
    out->mOBS_ACT.mX[9739UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9740UL] = t3626->mX.mX[1615UL];
    out->mOBS_ACT.mX[9741UL] = t3626->mX.mX[1615UL];
    out->mOBS_ACT.mX[9742UL] = t3626->mX.mX[1016UL];
    out->mOBS_ACT.mX[9743UL] = zc_int606;
    out->mOBS_ACT.mX[9744UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3 - zc_int646;
    out->mOBS_ACT.mX[9745UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9746UL] = t3626->mX.mX[1024UL];
    out->mOBS_ACT.mX[9747UL] = t3626->mX.mX[1024UL];
    out->mOBS_ACT.mX[9748UL] = t3626->mX.mX[1024UL];
    out->mOBS_ACT.mX[9749UL] = t3626->mX.mX[1024UL];
    out->mOBS_ACT.mX[9750UL] = t3626->mX.mX[1025UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[9751UL] = t3626->mX.mX[1024UL];
    out->mOBS_ACT.mX[9752UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9753UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9754UL] = t3626->mX.mX[1026UL];
    out->mOBS_ACT.mX[9755UL] = t3626->mX.mX[1026UL];
    out->mOBS_ACT.mX[9756UL] = t3626->mX.mX[1619UL];
    out->mOBS_ACT.mX[9757UL] = 1.0;
    out->mOBS_ACT.mX[9758UL] = zc_int646;
    for (t2773 = 1027UL; t2773 - 1027UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8732UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 9764UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[9769UL] = 0.0;
    out->mOBS_ACT.mX[9770UL] = t3626->mX.mX[1618UL];
    out->mOBS_ACT.mX[9771UL] = t3626->mX.mX[1620UL] * 1000.0;
    out->mOBS_ACT.mX[9772UL] = t3626->mX.mX[1619UL];
    out->mOBS_ACT.mX[9773UL] = BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9774UL] = 1.0;
    out->mOBS_ACT.mX[9775UL] = t3626->mX.mX[1617UL];
    out->mOBS_ACT.mX[9776UL] = 1.0;
    out->mOBS_ACT.mX[9777UL] = t3626->mX.mX[1024UL];
    out->mOBS_ACT.mX[9778UL] = t3626->mX.mX[1026UL];
    out->mOBS_ACT.mX[9779UL] = 1.0;
    out->mOBS_ACT.mX[9780UL] = t3626->mX.mX[1617UL];
    out->mOBS_ACT.mX[9781UL] = t3626->mX.mX[1618UL];
    out->mOBS_ACT.mX[9782UL] = 1.0;
    out->mOBS_ACT.mX[9783UL] = 1.0;
    out->mOBS_ACT.mX[9784UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9785UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9786UL] = t3626->mX.mX[1026UL];
    out->mOBS_ACT.mX[9787UL] = zc_int646;
    out->mOBS_ACT.mX[9788UL] = t3626->mX.mX[1619UL];
    out->mOBS_ACT.mX[9789UL] = t3626->mX.mX[1619UL];
    out->mOBS_ACT.mX[9790UL] = t3626->mX.mX[1024UL];
    out->mOBS_ACT.mX[9791UL] = BatteryPack_v2_ModuleAssembly_23_Module15_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[9792UL] = t3626->mX.mX[1024UL];
    out->mOBS_ACT.mX[9793UL] = t3626->mX.mX[1024UL];
    out->mOBS_ACT.mX[9794UL] = t3626->mX.mX[1620UL] * 1000.0;
    out->mOBS_ACT.mX[9795UL] = BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9796UL] = t3626->mX.mX[1024UL];
    out->mOBS_ACT.mX[9797UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9798UL] = BatteryPack_v2_ModuleAssembly_23_Module15_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[9799UL] = BatteryPack_v2_ModuleAssembly_23_Module15_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[9800UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9801UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9802UL] = 0.0;
    out->mOBS_ACT.mX[9803UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9804UL] = zc_int646;
    out->mOBS_ACT.mX[9805UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9806UL] = 0.0;
    out->mOBS_ACT.mX[9807UL] = zc_int646;
    out->mOBS_ACT.mX[9808UL] = t3626->mX.mX[1024UL];
    out->mOBS_ACT.mX[9809UL] = BatteryPack_v2_ModuleAssembly_23_Module15_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[9810UL] = 0.0;
    out->mOBS_ACT.mX[9811UL] = t3626->mX.mX[1024UL];
    out->mOBS_ACT.mX[9812UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9813UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9814UL] = t3626->mX.mX[1026UL];
    out->mOBS_ACT.mX[9815UL] = zc_int646;
    out->mOBS_ACT.mX[9816UL] = t3626->mX.mX[1619UL];
    out->mOBS_ACT.mX[9817UL] = t3626->mX.mX[1619UL];
    out->mOBS_ACT.mX[9818UL] = t3626->mX.mX[1024UL];
    out->mOBS_ACT.mX[9819UL] = BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9820UL] = zc_int646 - BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9821UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9822UL] = t3626->mX.mX[1032UL];
    out->mOBS_ACT.mX[9823UL] = t3626->mX.mX[1032UL];
    out->mOBS_ACT.mX[9824UL] = t3626->mX.mX[1032UL];
    out->mOBS_ACT.mX[9825UL] = t3626->mX.mX[1032UL];
    out->mOBS_ACT.mX[9826UL] = t3626->mX.mX[1033UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[9827UL] = t3626->mX.mX[1032UL];
    out->mOBS_ACT.mX[9828UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9829UL] = zc_int644;
    out->mOBS_ACT.mX[9830UL] = t3626->mX.mX[1034UL];
    out->mOBS_ACT.mX[9831UL] = t3626->mX.mX[1034UL];
    out->mOBS_ACT.mX[9832UL] = t3626->mX.mX[1623UL];
    out->mOBS_ACT.mX[9833UL] = 1.0;
    out->mOBS_ACT.mX[9834UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    for (t2773 = 1035UL; t2773 - 1035UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8800UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 9840UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[9845UL] = 0.0;
    out->mOBS_ACT.mX[9846UL] = t3626->mX.mX[1622UL];
    out->mOBS_ACT.mX[9847UL] = t3626->mX.mX[1624UL] * 1000.0;
    out->mOBS_ACT.mX[9848UL] = t3626->mX.mX[1623UL];
    out->mOBS_ACT.mX[9849UL] = zc_int612;
    out->mOBS_ACT.mX[9850UL] = 1.0;
    out->mOBS_ACT.mX[9851UL] = t3626->mX.mX[1621UL];
    out->mOBS_ACT.mX[9852UL] = 1.0;
    out->mOBS_ACT.mX[9853UL] = t3626->mX.mX[1032UL];
    out->mOBS_ACT.mX[9854UL] = t3626->mX.mX[1034UL];
    out->mOBS_ACT.mX[9855UL] = 1.0;
    out->mOBS_ACT.mX[9856UL] = t3626->mX.mX[1621UL];
    out->mOBS_ACT.mX[9857UL] = t3626->mX.mX[1622UL];
    out->mOBS_ACT.mX[9858UL] = 1.0;
    out->mOBS_ACT.mX[9859UL] = 1.0;
    out->mOBS_ACT.mX[9860UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9861UL] = zc_int644;
    out->mOBS_ACT.mX[9862UL] = t3626->mX.mX[1034UL];
    out->mOBS_ACT.mX[9863UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9864UL] = t3626->mX.mX[1623UL];
    out->mOBS_ACT.mX[9865UL] = t3626->mX.mX[1623UL];
    out->mOBS_ACT.mX[9866UL] = t3626->mX.mX[1032UL];
    out->mOBS_ACT.mX[9867UL] = BatteryPack_v2_ModuleAssembly_23_Module16_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[9868UL] = t3626->mX.mX[1032UL];
    out->mOBS_ACT.mX[9869UL] = t3626->mX.mX[1032UL];
    out->mOBS_ACT.mX[9870UL] = t3626->mX.mX[1624UL] * 1000.0;
    out->mOBS_ACT.mX[9871UL] = zc_int612;
    out->mOBS_ACT.mX[9872UL] = t3626->mX.mX[1032UL];
    out->mOBS_ACT.mX[9873UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9874UL] = BatteryPack_v2_ModuleAssembly_23_Module16_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[9875UL] = BatteryPack_v2_ModuleAssembly_23_Module16_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[9876UL] = zc_int644;
    out->mOBS_ACT.mX[9877UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9878UL] = 0.0;
    out->mOBS_ACT.mX[9879UL] = zc_int644;
    out->mOBS_ACT.mX[9880UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9881UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9882UL] = 0.0;
    out->mOBS_ACT.mX[9883UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9884UL] = t3626->mX.mX[1032UL];
    out->mOBS_ACT.mX[9885UL] = BatteryPack_v2_ModuleAssembly_23_Module16_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[9886UL] = 0.0;
    out->mOBS_ACT.mX[9887UL] = t3626->mX.mX[1032UL];
    out->mOBS_ACT.mX[9888UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9889UL] = zc_int644;
    out->mOBS_ACT.mX[9890UL] = t3626->mX.mX[1034UL];
    out->mOBS_ACT.mX[9891UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[9892UL] = t3626->mX.mX[1623UL];
    out->mOBS_ACT.mX[9893UL] = t3626->mX.mX[1623UL];
    out->mOBS_ACT.mX[9894UL] = t3626->mX.mX[1032UL];
    out->mOBS_ACT.mX[9895UL] = zc_int612;
    out->mOBS_ACT.mX[9896UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3 - zc_int644;
    out->mOBS_ACT.mX[9897UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9898UL] = t3626->mX.mX[1040UL];
    out->mOBS_ACT.mX[9899UL] = t3626->mX.mX[1040UL];
    out->mOBS_ACT.mX[9900UL] = t3626->mX.mX[1040UL];
    out->mOBS_ACT.mX[9901UL] = t3626->mX.mX[1040UL];
    out->mOBS_ACT.mX[9902UL] = t3626->mX.mX[1041UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[9903UL] = t3626->mX.mX[1040UL];
    out->mOBS_ACT.mX[9904UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9905UL] = zc_int643;
    out->mOBS_ACT.mX[9906UL] = t3626->mX.mX[1042UL];
    out->mOBS_ACT.mX[9907UL] = t3626->mX.mX[1042UL];
    out->mOBS_ACT.mX[9908UL] = t3626->mX.mX[1627UL];
    out->mOBS_ACT.mX[9909UL] = 1.0;
    out->mOBS_ACT.mX[9910UL] = zc_int644;
    for (t2773 = 1043UL; t2773 - 1043UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8868UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 9916UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[9921UL] = 0.0;
    out->mOBS_ACT.mX[9922UL] = t3626->mX.mX[1626UL];
    out->mOBS_ACT.mX[9923UL] = t3626->mX.mX[1628UL] * 1000.0;
    out->mOBS_ACT.mX[9924UL] = t3626->mX.mX[1627UL];
    out->mOBS_ACT.mX[9925UL] = zc_int615;
    out->mOBS_ACT.mX[9926UL] = 1.0;
    out->mOBS_ACT.mX[9927UL] = t3626->mX.mX[1625UL];
    out->mOBS_ACT.mX[9928UL] = 1.0;
    out->mOBS_ACT.mX[9929UL] = t3626->mX.mX[1040UL];
    out->mOBS_ACT.mX[9930UL] = t3626->mX.mX[1042UL];
    out->mOBS_ACT.mX[9931UL] = 1.0;
    out->mOBS_ACT.mX[9932UL] = t3626->mX.mX[1625UL];
    out->mOBS_ACT.mX[9933UL] = t3626->mX.mX[1626UL];
    out->mOBS_ACT.mX[9934UL] = 1.0;
    out->mOBS_ACT.mX[9935UL] = 1.0;
    out->mOBS_ACT.mX[9936UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9937UL] = zc_int643;
    out->mOBS_ACT.mX[9938UL] = t3626->mX.mX[1042UL];
    out->mOBS_ACT.mX[9939UL] = zc_int644;
    out->mOBS_ACT.mX[9940UL] = t3626->mX.mX[1627UL];
    out->mOBS_ACT.mX[9941UL] = t3626->mX.mX[1627UL];
    out->mOBS_ACT.mX[9942UL] = t3626->mX.mX[1040UL];
    out->mOBS_ACT.mX[9943UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[9944UL] = t3626->mX.mX[1040UL];
    out->mOBS_ACT.mX[9945UL] = t3626->mX.mX[1040UL];
    out->mOBS_ACT.mX[9946UL] = t3626->mX.mX[1628UL] * 1000.0;
    out->mOBS_ACT.mX[9947UL] = zc_int615;
    out->mOBS_ACT.mX[9948UL] = t3626->mX.mX[1040UL];
    out->mOBS_ACT.mX[9949UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9950UL] = BatteryPack_v2_ModuleAssembly_23_Module17_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[9951UL] = BatteryPack_v2_ModuleAssembly_23_Module17_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[9952UL] = zc_int643;
    out->mOBS_ACT.mX[9953UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9954UL] = 0.0;
    out->mOBS_ACT.mX[9955UL] = zc_int643;
    out->mOBS_ACT.mX[9956UL] = zc_int644;
    out->mOBS_ACT.mX[9957UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9958UL] = 0.0;
    out->mOBS_ACT.mX[9959UL] = zc_int644;
    out->mOBS_ACT.mX[9960UL] = t3626->mX.mX[1040UL];
    out->mOBS_ACT.mX[9961UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[9962UL] = 0.0;
    out->mOBS_ACT.mX[9963UL] = t3626->mX.mX[1040UL];
    out->mOBS_ACT.mX[9964UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9965UL] = zc_int643;
    out->mOBS_ACT.mX[9966UL] = t3626->mX.mX[1042UL];
    out->mOBS_ACT.mX[9967UL] = zc_int644;
    out->mOBS_ACT.mX[9968UL] = t3626->mX.mX[1627UL];
    out->mOBS_ACT.mX[9969UL] = t3626->mX.mX[1627UL];
    out->mOBS_ACT.mX[9970UL] = t3626->mX.mX[1040UL];
    out->mOBS_ACT.mX[9971UL] = zc_int615;
    out->mOBS_ACT.mX[9972UL] = zc_int644 - zc_int643;
    out->mOBS_ACT.mX[9973UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[9974UL] = t3626->mX.mX[1048UL];
    out->mOBS_ACT.mX[9975UL] = t3626->mX.mX[1048UL];
    out->mOBS_ACT.mX[9976UL] = t3626->mX.mX[1048UL];
    out->mOBS_ACT.mX[9977UL] = t3626->mX.mX[1048UL];
    out->mOBS_ACT.mX[9978UL] = t3626->mX.mX[1049UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[9979UL] = t3626->mX.mX[1048UL];
    out->mOBS_ACT.mX[9980UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[9981UL] = zc_int642;
    out->mOBS_ACT.mX[9982UL] = t3626->mX.mX[1050UL];
    out->mOBS_ACT.mX[9983UL] = t3626->mX.mX[1050UL];
    out->mOBS_ACT.mX[9984UL] = t3626->mX.mX[1631UL];
    out->mOBS_ACT.mX[9985UL] = 1.0;
    out->mOBS_ACT.mX[9986UL] = zc_int643;
    for (t2773 = 1051UL; t2773 - 1051UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 8936UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 9992UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[9997UL] = 0.0;
    out->mOBS_ACT.mX[9998UL] = t3626->mX.mX[1630UL];
    out->mOBS_ACT.mX[9999UL] = t3626->mX.mX[1632UL] * 1000.0;
    out->mOBS_ACT.mX[10000UL] = t3626->mX.mX[1631UL];
    out->mOBS_ACT.mX[10001UL] = zc_int618;
    out->mOBS_ACT.mX[10002UL] = 1.0;
    out->mOBS_ACT.mX[10003UL] = t3626->mX.mX[1629UL];
    out->mOBS_ACT.mX[10004UL] = 1.0;
    out->mOBS_ACT.mX[10005UL] = t3626->mX.mX[1048UL];
    out->mOBS_ACT.mX[10006UL] = t3626->mX.mX[1050UL];
    out->mOBS_ACT.mX[10007UL] = 1.0;
    out->mOBS_ACT.mX[10008UL] = t3626->mX.mX[1629UL];
    out->mOBS_ACT.mX[10009UL] = t3626->mX.mX[1630UL];
    out->mOBS_ACT.mX[10010UL] = 1.0;
    out->mOBS_ACT.mX[10011UL] = 1.0;
    out->mOBS_ACT.mX[10012UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10013UL] = zc_int642;
    out->mOBS_ACT.mX[10014UL] = t3626->mX.mX[1050UL];
    out->mOBS_ACT.mX[10015UL] = zc_int643;
    out->mOBS_ACT.mX[10016UL] = t3626->mX.mX[1631UL];
    out->mOBS_ACT.mX[10017UL] = t3626->mX.mX[1631UL];
    out->mOBS_ACT.mX[10018UL] = t3626->mX.mX[1048UL];
    out->mOBS_ACT.mX[10019UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[10020UL] = t3626->mX.mX[1048UL];
    out->mOBS_ACT.mX[10021UL] = t3626->mX.mX[1048UL];
    out->mOBS_ACT.mX[10022UL] = t3626->mX.mX[1632UL] * 1000.0;
    out->mOBS_ACT.mX[10023UL] = zc_int618;
    out->mOBS_ACT.mX[10024UL] = t3626->mX.mX[1048UL];
    out->mOBS_ACT.mX[10025UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[10026UL] = BatteryPack_v2_ModuleAssembly_23_Module18_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[10027UL] = BatteryPack_v2_ModuleAssembly_23_Module18_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[10028UL] = zc_int642;
    out->mOBS_ACT.mX[10029UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10030UL] = 0.0;
    out->mOBS_ACT.mX[10031UL] = zc_int642;
    out->mOBS_ACT.mX[10032UL] = zc_int643;
    out->mOBS_ACT.mX[10033UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10034UL] = 0.0;
    out->mOBS_ACT.mX[10035UL] = zc_int643;
    out->mOBS_ACT.mX[10036UL] = t3626->mX.mX[1048UL];
    out->mOBS_ACT.mX[10037UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[10038UL] = 0.0;
    out->mOBS_ACT.mX[10039UL] = t3626->mX.mX[1048UL];
    out->mOBS_ACT.mX[10040UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10041UL] = zc_int642;
    out->mOBS_ACT.mX[10042UL] = t3626->mX.mX[1050UL];
    out->mOBS_ACT.mX[10043UL] = zc_int643;
    out->mOBS_ACT.mX[10044UL] = t3626->mX.mX[1631UL];
    out->mOBS_ACT.mX[10045UL] = t3626->mX.mX[1631UL];
    out->mOBS_ACT.mX[10046UL] = t3626->mX.mX[1048UL];
    out->mOBS_ACT.mX[10047UL] = zc_int618;
    out->mOBS_ACT.mX[10048UL] = zc_int643 - zc_int642;
    out->mOBS_ACT.mX[10049UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[10050UL] = t3626->mX.mX[1056UL];
    out->mOBS_ACT.mX[10051UL] = t3626->mX.mX[1056UL];
    out->mOBS_ACT.mX[10052UL] = t3626->mX.mX[1056UL];
    out->mOBS_ACT.mX[10053UL] = t3626->mX.mX[1056UL];
    out->mOBS_ACT.mX[10054UL] = t3626->mX.mX[1057UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[10055UL] = t3626->mX.mX[1056UL];
    out->mOBS_ACT.mX[10056UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10057UL] = zc_int641;
    out->mOBS_ACT.mX[10058UL] = t3626->mX.mX[1058UL];
    out->mOBS_ACT.mX[10059UL] = t3626->mX.mX[1058UL];
    out->mOBS_ACT.mX[10060UL] = t3626->mX.mX[1635UL];
    out->mOBS_ACT.mX[10061UL] = 1.0;
    out->mOBS_ACT.mX[10062UL] = zc_int642;
    for (t2773 = 1059UL; t2773 - 1059UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 9004UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 10068UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[10073UL] = 0.0;
    out->mOBS_ACT.mX[10074UL] = t3626->mX.mX[1634UL];
    out->mOBS_ACT.mX[10075UL] = t3626->mX.mX[1636UL] * 1000.0;
    out->mOBS_ACT.mX[10076UL] = t3626->mX.mX[1635UL];
    out->mOBS_ACT.mX[10077UL] = zc_int625;
    out->mOBS_ACT.mX[10078UL] = 1.0;
    out->mOBS_ACT.mX[10079UL] = t3626->mX.mX[1633UL];
    out->mOBS_ACT.mX[10080UL] = 1.0;
    out->mOBS_ACT.mX[10081UL] = t3626->mX.mX[1056UL];
    out->mOBS_ACT.mX[10082UL] = t3626->mX.mX[1058UL];
    out->mOBS_ACT.mX[10083UL] = 1.0;
    out->mOBS_ACT.mX[10084UL] = t3626->mX.mX[1633UL];
    out->mOBS_ACT.mX[10085UL] = t3626->mX.mX[1634UL];
    out->mOBS_ACT.mX[10086UL] = 1.0;
    out->mOBS_ACT.mX[10087UL] = 1.0;
    out->mOBS_ACT.mX[10088UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10089UL] = zc_int641;
    out->mOBS_ACT.mX[10090UL] = t3626->mX.mX[1058UL];
    out->mOBS_ACT.mX[10091UL] = zc_int642;
    out->mOBS_ACT.mX[10092UL] = t3626->mX.mX[1635UL];
    out->mOBS_ACT.mX[10093UL] = t3626->mX.mX[1635UL];
    out->mOBS_ACT.mX[10094UL] = t3626->mX.mX[1056UL];
    out->mOBS_ACT.mX[10095UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[10096UL] = t3626->mX.mX[1056UL];
    out->mOBS_ACT.mX[10097UL] = t3626->mX.mX[1056UL];
    out->mOBS_ACT.mX[10098UL] = t3626->mX.mX[1636UL] * 1000.0;
    out->mOBS_ACT.mX[10099UL] = zc_int625;
    out->mOBS_ACT.mX[10100UL] = t3626->mX.mX[1056UL];
    out->mOBS_ACT.mX[10101UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[10102UL] = BatteryPack_v2_ModuleAssembly_23_Module19_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[10103UL] = BatteryPack_v2_ModuleAssembly_23_Module19_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[10104UL] = zc_int641;
    out->mOBS_ACT.mX[10105UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10106UL] = 0.0;
    out->mOBS_ACT.mX[10107UL] = zc_int641;
    out->mOBS_ACT.mX[10108UL] = zc_int642;
    out->mOBS_ACT.mX[10109UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10110UL] = 0.0;
    out->mOBS_ACT.mX[10111UL] = zc_int642;
    out->mOBS_ACT.mX[10112UL] = t3626->mX.mX[1056UL];
    out->mOBS_ACT.mX[10113UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[10114UL] = 0.0;
    out->mOBS_ACT.mX[10115UL] = t3626->mX.mX[1056UL];
    out->mOBS_ACT.mX[10116UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10117UL] = zc_int641;
    out->mOBS_ACT.mX[10118UL] = t3626->mX.mX[1058UL];
    out->mOBS_ACT.mX[10119UL] = zc_int642;
    out->mOBS_ACT.mX[10120UL] = t3626->mX.mX[1635UL];
    out->mOBS_ACT.mX[10121UL] = t3626->mX.mX[1635UL];
    out->mOBS_ACT.mX[10122UL] = t3626->mX.mX[1056UL];
    out->mOBS_ACT.mX[10123UL] = zc_int625;
    out->mOBS_ACT.mX[10124UL] = zc_int642 - zc_int641;
    out->mOBS_ACT.mX[10125UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[10126UL] = t3626->mX.mX[1064UL];
    out->mOBS_ACT.mX[10127UL] = t3626->mX.mX[1064UL];
    out->mOBS_ACT.mX[10128UL] = t3626->mX.mX[1064UL];
    out->mOBS_ACT.mX[10129UL] = t3626->mX.mX[1064UL];
    out->mOBS_ACT.mX[10130UL] = t3626->mX.mX[1065UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[10131UL] = t3626->mX.mX[1064UL];
    out->mOBS_ACT.mX[10132UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10133UL] = intrm_sf_mf_127;
    out->mOBS_ACT.mX[10134UL] = t3626->mX.mX[1066UL];
    out->mOBS_ACT.mX[10135UL] = t3626->mX.mX[1066UL];
    out->mOBS_ACT.mX[10136UL] = t3626->mX.mX[1639UL];
    out->mOBS_ACT.mX[10137UL] = 1.0;
    out->mOBS_ACT.mX[10138UL] = zc_int641;
    for (t2773 = 1067UL; t2773 - 1067UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 9072UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 10144UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[10149UL] = 0.0;
    out->mOBS_ACT.mX[10150UL] = t3626->mX.mX[1638UL];
    out->mOBS_ACT.mX[10151UL] = t3626->mX.mX[1640UL] * 1000.0;
    out->mOBS_ACT.mX[10152UL] = t3626->mX.mX[1639UL];
    out->mOBS_ACT.mX[10153UL] = zc_int628;
    out->mOBS_ACT.mX[10154UL] = 1.0;
    out->mOBS_ACT.mX[10155UL] = t3626->mX.mX[1637UL];
    out->mOBS_ACT.mX[10156UL] = 1.0;
    out->mOBS_ACT.mX[10157UL] = t3626->mX.mX[1064UL];
    out->mOBS_ACT.mX[10158UL] = t3626->mX.mX[1066UL];
    out->mOBS_ACT.mX[10159UL] = 1.0;
    out->mOBS_ACT.mX[10160UL] = t3626->mX.mX[1637UL];
    out->mOBS_ACT.mX[10161UL] = t3626->mX.mX[1638UL];
    out->mOBS_ACT.mX[10162UL] = 1.0;
    out->mOBS_ACT.mX[10163UL] = 1.0;
    out->mOBS_ACT.mX[10164UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10165UL] = intrm_sf_mf_127;
    out->mOBS_ACT.mX[10166UL] = t3626->mX.mX[1066UL];
    out->mOBS_ACT.mX[10167UL] = zc_int641;
    out->mOBS_ACT.mX[10168UL] = t3626->mX.mX[1639UL];
    out->mOBS_ACT.mX[10169UL] = t3626->mX.mX[1639UL];
    out->mOBS_ACT.mX[10170UL] = t3626->mX.mX[1064UL];
    out->mOBS_ACT.mX[10171UL] = BatteryPack_v2_ModuleAssembly_23_Module20_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[10172UL] = t3626->mX.mX[1064UL];
    out->mOBS_ACT.mX[10173UL] = t3626->mX.mX[1064UL];
    out->mOBS_ACT.mX[10174UL] = t3626->mX.mX[1640UL] * 1000.0;
    out->mOBS_ACT.mX[10175UL] = zc_int628;
    out->mOBS_ACT.mX[10176UL] = t3626->mX.mX[1064UL];
    out->mOBS_ACT.mX[10177UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[10178UL] = BatteryPack_v2_ModuleAssembly_23_Module20_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[10179UL] = BatteryPack_v2_ModuleAssembly_23_Module20_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[10180UL] = intrm_sf_mf_127;
    out->mOBS_ACT.mX[10181UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10182UL] = 0.0;
    out->mOBS_ACT.mX[10183UL] = intrm_sf_mf_127;
    out->mOBS_ACT.mX[10184UL] = zc_int641;
    out->mOBS_ACT.mX[10185UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10186UL] = 0.0;
    out->mOBS_ACT.mX[10187UL] = zc_int641;
    out->mOBS_ACT.mX[10188UL] = t3626->mX.mX[1064UL];
    out->mOBS_ACT.mX[10189UL] = BatteryPack_v2_ModuleAssembly_23_Module20_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[10190UL] = 0.0;
    out->mOBS_ACT.mX[10191UL] = t3626->mX.mX[1064UL];
    out->mOBS_ACT.mX[10192UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10193UL] = intrm_sf_mf_127;
    out->mOBS_ACT.mX[10194UL] = t3626->mX.mX[1066UL];
    out->mOBS_ACT.mX[10195UL] = zc_int641;
    out->mOBS_ACT.mX[10196UL] = t3626->mX.mX[1639UL];
    out->mOBS_ACT.mX[10197UL] = t3626->mX.mX[1639UL];
    out->mOBS_ACT.mX[10198UL] = t3626->mX.mX[1064UL];
    out->mOBS_ACT.mX[10199UL] = zc_int628;
    out->mOBS_ACT.mX[10200UL] = zc_int641 - intrm_sf_mf_127;
    out->mOBS_ACT.mX[10201UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[10202UL] = t3626->mX.mX[1072UL];
    out->mOBS_ACT.mX[10203UL] = t3626->mX.mX[1072UL];
    out->mOBS_ACT.mX[10204UL] = t3626->mX.mX[1072UL];
    out->mOBS_ACT.mX[10205UL] = t3626->mX.mX[1072UL];
    out->mOBS_ACT.mX[10206UL] = t3626->mX.mX[1073UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[10207UL] = t3626->mX.mX[1072UL];
    out->mOBS_ACT.mX[10208UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10209UL] = zc_int639;
    out->mOBS_ACT.mX[10210UL] = t3626->mX.mX[1074UL];
    out->mOBS_ACT.mX[10211UL] = t3626->mX.mX[1074UL];
    out->mOBS_ACT.mX[10212UL] = t3626->mX.mX[1643UL];
    out->mOBS_ACT.mX[10213UL] = 1.0;
    out->mOBS_ACT.mX[10214UL] = intrm_sf_mf_127;
    for (t2773 = 1075UL; t2773 - 1075UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 9140UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 10220UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[10225UL] = 0.0;
    out->mOBS_ACT.mX[10226UL] = t3626->mX.mX[1642UL];
    out->mOBS_ACT.mX[10227UL] = t3626->mX.mX[1644UL] * 1000.0;
    out->mOBS_ACT.mX[10228UL] = t3626->mX.mX[1643UL];
    out->mOBS_ACT.mX[10229UL] = zc_int631;
    out->mOBS_ACT.mX[10230UL] = 1.0;
    out->mOBS_ACT.mX[10231UL] = t3626->mX.mX[1641UL];
    out->mOBS_ACT.mX[10232UL] = 1.0;
    out->mOBS_ACT.mX[10233UL] = t3626->mX.mX[1072UL];
    out->mOBS_ACT.mX[10234UL] = t3626->mX.mX[1074UL];
    out->mOBS_ACT.mX[10235UL] = 1.0;
    out->mOBS_ACT.mX[10236UL] = t3626->mX.mX[1641UL];
    out->mOBS_ACT.mX[10237UL] = t3626->mX.mX[1642UL];
    out->mOBS_ACT.mX[10238UL] = 1.0;
    out->mOBS_ACT.mX[10239UL] = 1.0;
    out->mOBS_ACT.mX[10240UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10241UL] = zc_int639;
    out->mOBS_ACT.mX[10242UL] = t3626->mX.mX[1074UL];
    out->mOBS_ACT.mX[10243UL] = intrm_sf_mf_127;
    out->mOBS_ACT.mX[10244UL] = t3626->mX.mX[1643UL];
    out->mOBS_ACT.mX[10245UL] = t3626->mX.mX[1643UL];
    out->mOBS_ACT.mX[10246UL] = t3626->mX.mX[1072UL];
    out->mOBS_ACT.mX[10247UL] = BatteryPack_v2_ModuleAssembly_23_Module21_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[10248UL] = t3626->mX.mX[1072UL];
    out->mOBS_ACT.mX[10249UL] = t3626->mX.mX[1072UL];
    out->mOBS_ACT.mX[10250UL] = t3626->mX.mX[1644UL] * 1000.0;
    out->mOBS_ACT.mX[10251UL] = zc_int631;
    out->mOBS_ACT.mX[10252UL] = t3626->mX.mX[1072UL];
    out->mOBS_ACT.mX[10253UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[10254UL] = BatteryPack_v2_ModuleAssembly_23_Module21_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[10255UL] = BatteryPack_v2_ModuleAssembly_23_Module21_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[10256UL] = zc_int639;
    out->mOBS_ACT.mX[10257UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10258UL] = 0.0;
    out->mOBS_ACT.mX[10259UL] = zc_int639;
    out->mOBS_ACT.mX[10260UL] = intrm_sf_mf_127;
    out->mOBS_ACT.mX[10261UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10262UL] = 0.0;
    out->mOBS_ACT.mX[10263UL] = intrm_sf_mf_127;
    out->mOBS_ACT.mX[10264UL] = t3626->mX.mX[1072UL];
    out->mOBS_ACT.mX[10265UL] = BatteryPack_v2_ModuleAssembly_23_Module21_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[10266UL] = 0.0;
    out->mOBS_ACT.mX[10267UL] = t3626->mX.mX[1072UL];
    out->mOBS_ACT.mX[10268UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10269UL] = zc_int639;
    out->mOBS_ACT.mX[10270UL] = t3626->mX.mX[1074UL];
    out->mOBS_ACT.mX[10271UL] = intrm_sf_mf_127;
    out->mOBS_ACT.mX[10272UL] = t3626->mX.mX[1643UL];
    out->mOBS_ACT.mX[10273UL] = t3626->mX.mX[1643UL];
    out->mOBS_ACT.mX[10274UL] = t3626->mX.mX[1072UL];
    out->mOBS_ACT.mX[10275UL] = zc_int631;
    out->mOBS_ACT.mX[10276UL] = intrm_sf_mf_127 - zc_int639;
    out->mOBS_ACT.mX[10277UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[10278UL] = t3626->mX.mX[1080UL];
    out->mOBS_ACT.mX[10279UL] = t3626->mX.mX[1080UL];
    out->mOBS_ACT.mX[10280UL] = t3626->mX.mX[1080UL];
    out->mOBS_ACT.mX[10281UL] = t3626->mX.mX[1080UL];
    out->mOBS_ACT.mX[10282UL] = t3626->mX.mX[1081UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[10283UL] = t3626->mX.mX[1080UL];
    out->mOBS_ACT.mX[10284UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10285UL] = intrm_sf_mf_126;
    out->mOBS_ACT.mX[10286UL] = t3626->mX.mX[1082UL];
    out->mOBS_ACT.mX[10287UL] = t3626->mX.mX[1082UL];
    out->mOBS_ACT.mX[10288UL] = t3626->mX.mX[1647UL];
    out->mOBS_ACT.mX[10289UL] = 1.0;
    out->mOBS_ACT.mX[10290UL] = zc_int639;
    for (t2773 = 1083UL; t2773 - 1083UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 9208UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 10296UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[10301UL] = 0.0;
    out->mOBS_ACT.mX[10302UL] = t3626->mX.mX[1646UL];
    out->mOBS_ACT.mX[10303UL] = t3626->mX.mX[1648UL] * 1000.0;
    out->mOBS_ACT.mX[10304UL] = t3626->mX.mX[1647UL];
    out->mOBS_ACT.mX[10305UL] = zc_int634;
    out->mOBS_ACT.mX[10306UL] = 1.0;
    out->mOBS_ACT.mX[10307UL] = t3626->mX.mX[1645UL];
    out->mOBS_ACT.mX[10308UL] = 1.0;
    out->mOBS_ACT.mX[10309UL] = t3626->mX.mX[1080UL];
    out->mOBS_ACT.mX[10310UL] = t3626->mX.mX[1082UL];
    out->mOBS_ACT.mX[10311UL] = 1.0;
    out->mOBS_ACT.mX[10312UL] = t3626->mX.mX[1645UL];
    out->mOBS_ACT.mX[10313UL] = t3626->mX.mX[1646UL];
    out->mOBS_ACT.mX[10314UL] = 1.0;
    out->mOBS_ACT.mX[10315UL] = 1.0;
    out->mOBS_ACT.mX[10316UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10317UL] = intrm_sf_mf_126;
    out->mOBS_ACT.mX[10318UL] = t3626->mX.mX[1082UL];
    out->mOBS_ACT.mX[10319UL] = zc_int639;
    out->mOBS_ACT.mX[10320UL] = t3626->mX.mX[1647UL];
    out->mOBS_ACT.mX[10321UL] = t3626->mX.mX[1647UL];
    out->mOBS_ACT.mX[10322UL] = t3626->mX.mX[1080UL];
    out->mOBS_ACT.mX[10323UL] = BatteryPack_v2_ModuleAssembly_23_Module22_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[10324UL] = t3626->mX.mX[1080UL];
    out->mOBS_ACT.mX[10325UL] = t3626->mX.mX[1080UL];
    out->mOBS_ACT.mX[10326UL] = t3626->mX.mX[1648UL] * 1000.0;
    out->mOBS_ACT.mX[10327UL] = zc_int634;
    out->mOBS_ACT.mX[10328UL] = t3626->mX.mX[1080UL];
    out->mOBS_ACT.mX[10329UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[10330UL] = BatteryPack_v2_ModuleAssembly_23_Module22_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[10331UL] = BatteryPack_v2_ModuleAssembly_23_Module22_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[10332UL] = intrm_sf_mf_126;
    out->mOBS_ACT.mX[10333UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10334UL] = 0.0;
    out->mOBS_ACT.mX[10335UL] = intrm_sf_mf_126;
    out->mOBS_ACT.mX[10336UL] = zc_int639;
    out->mOBS_ACT.mX[10337UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10338UL] = 0.0;
    out->mOBS_ACT.mX[10339UL] = zc_int639;
    out->mOBS_ACT.mX[10340UL] = t3626->mX.mX[1080UL];
    out->mOBS_ACT.mX[10341UL] = BatteryPack_v2_ModuleAssembly_23_Module22_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[10342UL] = 0.0;
    out->mOBS_ACT.mX[10343UL] = t3626->mX.mX[1080UL];
    out->mOBS_ACT.mX[10344UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10345UL] = intrm_sf_mf_126;
    out->mOBS_ACT.mX[10346UL] = t3626->mX.mX[1082UL];
    out->mOBS_ACT.mX[10347UL] = zc_int639;
    out->mOBS_ACT.mX[10348UL] = t3626->mX.mX[1647UL];
    out->mOBS_ACT.mX[10349UL] = t3626->mX.mX[1647UL];
    out->mOBS_ACT.mX[10350UL] = t3626->mX.mX[1080UL];
    out->mOBS_ACT.mX[10351UL] = zc_int634;
    out->mOBS_ACT.mX[10352UL] = zc_int639 - intrm_sf_mf_126;
    out->mOBS_ACT.mX[10353UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[10354UL] = t3626->mX.mX[1088UL];
    out->mOBS_ACT.mX[10355UL] = t3626->mX.mX[1088UL];
    out->mOBS_ACT.mX[10356UL] = t3626->mX.mX[1088UL];
    out->mOBS_ACT.mX[10357UL] = t3626->mX.mX[1088UL];
    out->mOBS_ACT.mX[10358UL] = t3626->mX.mX[1089UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[10359UL] = t3626->mX.mX[1088UL];
    out->mOBS_ACT.mX[10360UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10361UL] = zc_int481;
    out->mOBS_ACT.mX[10362UL] = t3626->mX.mX[1090UL];
    out->mOBS_ACT.mX[10363UL] = t3626->mX.mX[1090UL];
    out->mOBS_ACT.mX[10364UL] = t3626->mX.mX[1651UL];
    out->mOBS_ACT.mX[10365UL] = 1.0;
    out->mOBS_ACT.mX[10366UL] = intrm_sf_mf_126;
    for (t2773 = 1091UL; t2773 - 1091UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 9276UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 10372UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[10377UL] = 0.0;
    out->mOBS_ACT.mX[10378UL] = t3626->mX.mX[1650UL];
    out->mOBS_ACT.mX[10379UL] = t3626->mX.mX[1652UL] * 1000.0;
    out->mOBS_ACT.mX[10380UL] = t3626->mX.mX[1651UL];
    out->mOBS_ACT.mX[10381UL] = BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[10382UL] = 1.0;
    out->mOBS_ACT.mX[10383UL] = t3626->mX.mX[1649UL];
    out->mOBS_ACT.mX[10384UL] = 1.0;
    out->mOBS_ACT.mX[10385UL] = t3626->mX.mX[1088UL];
    out->mOBS_ACT.mX[10386UL] = t3626->mX.mX[1090UL];
    out->mOBS_ACT.mX[10387UL] = 1.0;
    out->mOBS_ACT.mX[10388UL] = t3626->mX.mX[1649UL];
    out->mOBS_ACT.mX[10389UL] = t3626->mX.mX[1650UL];
    out->mOBS_ACT.mX[10390UL] = 1.0;
    out->mOBS_ACT.mX[10391UL] = 1.0;
    out->mOBS_ACT.mX[10392UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10393UL] = zc_int481;
    out->mOBS_ACT.mX[10394UL] = t3626->mX.mX[1090UL];
    out->mOBS_ACT.mX[10395UL] = intrm_sf_mf_126;
    out->mOBS_ACT.mX[10396UL] = t3626->mX.mX[1651UL];
    out->mOBS_ACT.mX[10397UL] = t3626->mX.mX[1651UL];
    out->mOBS_ACT.mX[10398UL] = t3626->mX.mX[1088UL];
    out->mOBS_ACT.mX[10399UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_thermalModel_Q * 1000.0;
    out->mOBS_ACT.mX[10400UL] = t3626->mX.mX[1088UL];
    out->mOBS_ACT.mX[10401UL] = t3626->mX.mX[1088UL];
    out->mOBS_ACT.mX[10402UL] = t3626->mX.mX[1652UL] * 1000.0;
    out->mOBS_ACT.mX[10403UL] = BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[10404UL] = t3626->mX.mX[1088UL];
    out->mOBS_ACT.mX[10405UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[10406UL] = BatteryPack_v2_ModuleAssembly_23_Module23_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[10407UL] = BatteryPack_v2_ModuleAssembly_23_Module23_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[10408UL] = zc_int481;
    out->mOBS_ACT.mX[10409UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10410UL] = 0.0;
    out->mOBS_ACT.mX[10411UL] = zc_int481;
    out->mOBS_ACT.mX[10412UL] = intrm_sf_mf_126;
    out->mOBS_ACT.mX[10413UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10414UL] = 0.0;
    out->mOBS_ACT.mX[10415UL] = intrm_sf_mf_126;
    out->mOBS_ACT.mX[10416UL] = t3626->mX.mX[1088UL];
    out->mOBS_ACT.mX[10417UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_thermalModel_Q * -1000.0;
    out->mOBS_ACT.mX[10418UL] = 0.0;
    out->mOBS_ACT.mX[10419UL] = t3626->mX.mX[1088UL];
    out->mOBS_ACT.mX[10420UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10421UL] = zc_int481;
    out->mOBS_ACT.mX[10422UL] = t3626->mX.mX[1090UL];
    out->mOBS_ACT.mX[10423UL] = intrm_sf_mf_126;
    out->mOBS_ACT.mX[10424UL] = t3626->mX.mX[1651UL];
    out->mOBS_ACT.mX[10425UL] = t3626->mX.mX[1651UL];
    out->mOBS_ACT.mX[10426UL] = t3626->mX.mX[1088UL];
    out->mOBS_ACT.mX[10427UL] = BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3;
    out->mOBS_ACT.mX[10428UL] = intrm_sf_mf_126 - zc_int481;
    out->mOBS_ACT.mX[10429UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[10430UL] = t3626->mX.mX[1096UL];
    out->mOBS_ACT.mX[10431UL] = t3626->mX.mX[1096UL];
    out->mOBS_ACT.mX[10432UL] = t3626->mX.mX[1096UL];
    out->mOBS_ACT.mX[10433UL] = t3626->mX.mX[1096UL];
    out->mOBS_ACT.mX[10434UL] = t3626->mX.mX[1097UL] * 0.00027777777777777778;
    out->mOBS_ACT.mX[10435UL] = t3626->mX.mX[1096UL];
    out->mOBS_ACT.mX[10436UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10437UL] = intrm_sf_mf_115;
    out->mOBS_ACT.mX[10438UL] = t3626->mX.mX[1098UL];
    out->mOBS_ACT.mX[10439UL] = t3626->mX.mX[1098UL];
    out->mOBS_ACT.mX[10440UL] = t3626->mX.mX[1655UL];
    out->mOBS_ACT.mX[10441UL] = 1.0;
    out->mOBS_ACT.mX[10442UL] = zc_int452;
    for (t2773 = 1099UL; t2773 - 1099UL < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 9344UL] = t3626->mX.mX[t2773];
    }
    for (t2773 = 0UL; t2773 < 5UL; t2773++) {
        out->mOBS_ACT.mX[t2773 + 10448UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel4[t2773];
    }
    out->mOBS_ACT.mX[10453UL] = 0.0;
    out->mOBS_ACT.mX[10454UL] = t3626->mX.mX[1654UL];
    out->mOBS_ACT.mX[10455UL] = t3626->mX.mX[1656UL] * 1000.0;
    out->mOBS_ACT.mX[10456UL] = t3626->mX.mX[1655UL];
    out->mOBS_ACT.mX[10457UL] = BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3;
    out->mOBS_ACT.mX[10458UL] = 1.0;
    out->mOBS_ACT.mX[10459UL] = t3626->mX.mX[1653UL];
    out->mOBS_ACT.mX[10460UL] = 1.0;
    out->mOBS_ACT.mX[10461UL] = t3626->mX.mX[1096UL];
    out->mOBS_ACT.mX[10462UL] = t3626->mX.mX[1098UL];
    out->mOBS_ACT.mX[10463UL] = 1.0;
    out->mOBS_ACT.mX[10464UL] = t3626->mX.mX[1653UL];
    out->mOBS_ACT.mX[10465UL] = t3626->mX.mX[1654UL];
    out->mOBS_ACT.mX[10466UL] = 1.0;
    out->mOBS_ACT.mX[10467UL] = 1.0;
    out->mOBS_ACT.mX[10468UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10469UL] = intrm_sf_mf_115;
    out->mOBS_ACT.mX[10470UL] = t3626->mX.mX[1098UL];
    out->mOBS_ACT.mX[10471UL] = zc_int452;
    out->mOBS_ACT.mX[10472UL] = t3626->mX.mX[1655UL];
    out->mOBS_ACT.mX[10473UL] = t3626->mX.mX[1655UL];
    out->mOBS_ACT.mX[10474UL] = t3626->mX.mX[1096UL];
    out->mOBS_ACT.mX[10475UL] = BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_thermalModel * 1000.0;
    out->mOBS_ACT.mX[10476UL] = t3626->mX.mX[1096UL];
    out->mOBS_ACT.mX[10477UL] = t3626->mX.mX[1096UL];
    out->mOBS_ACT.mX[10478UL] = t3626->mX.mX[1656UL] * 1000.0;
    out->mOBS_ACT.mX[10479UL] = BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3;
    out->mOBS_ACT.mX[10480UL] = t3626->mX.mX[1096UL];
    out->mOBS_ACT.mX[10481UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[10482UL] = BatteryPack_v2_ModuleAssembly_23_Module_1_1_AmbientResistor_Q * 1000.0;
    out->mOBS_ACT.mX[10483UL] = BatteryPack_v2_ModuleAssembly_23_Module_1_1_AmbientResistor_Q * 25000.0;
    out->mOBS_ACT.mX[10484UL] = intrm_sf_mf_115;
    out->mOBS_ACT.mX[10485UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10486UL] = 0.0;
    out->mOBS_ACT.mX[10487UL] = intrm_sf_mf_115;
    out->mOBS_ACT.mX[10488UL] = zc_int452;
    out->mOBS_ACT.mX[10489UL] = -t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10490UL] = 0.0;
    out->mOBS_ACT.mX[10491UL] = zc_int452;
    out->mOBS_ACT.mX[10492UL] = t3626->mX.mX[1096UL];
    out->mOBS_ACT.mX[10493UL] = BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_thermalModel * -1000.0;
    out->mOBS_ACT.mX[10494UL] = 0.0;
    out->mOBS_ACT.mX[10495UL] = t3626->mX.mX[1096UL];
    out->mOBS_ACT.mX[10496UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10497UL] = intrm_sf_mf_115;
    out->mOBS_ACT.mX[10498UL] = t3626->mX.mX[1098UL];
    out->mOBS_ACT.mX[10499UL] = zc_int452;
    out->mOBS_ACT.mX[10500UL] = t3626->mX.mX[1655UL];
    out->mOBS_ACT.mX[10501UL] = t3626->mX.mX[1655UL];
    out->mOBS_ACT.mX[10502UL] = t3626->mX.mX[1096UL];
    out->mOBS_ACT.mX[10503UL] = BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3;
    out->mOBS_ACT.mX[10504UL] = zc_int452 - intrm_sf_mf_115;
    out->mOBS_ACT.mX[10505UL] = zc_int452;
    out->mOBS_ACT.mX[10506UL] = zc_int481;
    out->mOBS_ACT.mX[10507UL] = zc_int452;
    out->mOBS_ACT.mX[10508UL] = 0.0;
    out->mOBS_ACT.mX[10509UL] = zc_int452;
    out->mOBS_ACT.mX[10510UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10511UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10512UL] = 0.0;
    out->mOBS_ACT.mX[10513UL] = -zc_int452;
    out->mOBS_ACT.mX[10514UL] = 0.0;
    out->mOBS_ACT.mX[10515UL] = 293.0;
    out->mOBS_ACT.mX[10516UL] = -149.2835 + zc_int457 * 1000.0;
    out->mOBS_ACT.mX[10517UL] = 293.0;
    out->mOBS_ACT.mX[10518UL] = 293.0;
    out->mOBS_ACT.mX[10519UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[10520UL] = 293.0;
    out->mOBS_ACT.mX[10521UL] = -149.2835 + zc_int457 * 1000.0;
    out->mOBS_ACT.mX[10522UL] = (t3626->mX.mX[1104UL] * 0.00050950000000000008 - 0.1492835) * 1962.708537782139;
    out->mOBS_ACT.mX[10523UL] = 0.0;
    out->mOBS_ACT.mX[10524UL] = 0.0;
    out->mOBS_ACT.mX[10525UL] = 293.0;
    out->mOBS_ACT.mX[10526UL] = t3626->mU.mX[0UL];
    out->mOBS_ACT.mX[10527UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[10528UL] = 0.0;
    out->mOBS_ACT.mX[10529UL] = t3626->mX.mX[1104UL];
    out->mOBS_ACT.mX[10530UL] = 0.0;
(void)LC;
    (void)out;
    return 0;}
