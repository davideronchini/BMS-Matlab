#include "ne_ds.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_sys_struct.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_log.h"
#include "BatterySOHEstimation_17a5a2c_49_ds.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_externals.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T BatterySOHEstimation_17a5a2c_49_ds_log(const NeDynamicSystem *LC, const NeDynamicSystemInput *t4657, NeDsMethodOutput *out)
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
    real_T t2154[1];
    real_T BatteryPack_v2_ModuleAssembly2_Module02_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel1;
    real_T BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module02_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly2_Module03_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module03_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly2_Module04_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module05_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module05_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module05_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly2_Module06_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module06_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly2_Module06_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module06_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly2_Module07_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module07_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly2_Module08_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module09_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module10_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module10_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly2_Module11_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module11_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly2_Module12_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module13_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module13_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly2_Module14_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly2_Module15_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module15_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly2_Module16_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module16_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly2_Module17_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module17_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly2_Module18_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module19_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module19_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly2_Module19_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly2_Module20_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module20_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly2_Module20_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly2_Module21_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module21_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module21_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly2_Module22_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module22_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly2_Module22_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module23_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module_1_1_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly2_Module_1_1_Cell_1_electricalMod0;
    real_T BatteryPack_v2_ModuleAssembly2_Module_1_1_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly3_Module02_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module02_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly3_Module02_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly3_Module03_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly3_Module03_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly3_Module04_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly3_Module05_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module05_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly3_Module05_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module05_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly3_Module06_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module06_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly3_Module07_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module07_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly3_Module07_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly3_Module07_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly3_Module08_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module09_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module09_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly3_Module09_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module10_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module11_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module11_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly3_Module12_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module12_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly3_Module12_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module12_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly3_Module13_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module14_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly3_Module14_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly3_Module15_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly3_Module15_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly3_Module16_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module16_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly3_Module16_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly3_Module17_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module17_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module17_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly3_Module18_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module18_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly3_Module18_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly3_Module19_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module20_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module20_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly3_Module21_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module21_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module22_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly3_Module23_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module23_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module23_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly3_Module_1_1_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly3_Module_1_1_Cell_1_electricalMod0;
    real_T BatteryPack_v2_ModuleAssembly4_Module02_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module02_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly4_Module02_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly4_Module03_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module03_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly4_Module04_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module04_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly4_Module04_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly4_Module05_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module06_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module06_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module07_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module07_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly4_Module07_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module07_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly4_Module08_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module08_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly4_Module09_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module09_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module10_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly4_Module11_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly4_Module12_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module12_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly4_Module13_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module13_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly4_Module13_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module14_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module14_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly4_Module15_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module15_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly4_Module15_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly4_Module16_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly4_Module16_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly4_Module17_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module17_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly4_Module17_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module18_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module18_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly4_Module18_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module19_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module19_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly4_Module19_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly4_Module20_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module20_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module21_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module21_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly4_Module21_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly4_Module22_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module22_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly4_Module23_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module_1_1_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly4_Module_1_1_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly5_Module02_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module02_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly5_Module03_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module03_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly5_Module03_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module03_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly5_Module04_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly5_Module05_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module06_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module07_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module08_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module08_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly5_Module08_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly5_Module09_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly5_Module10_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module10_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly5_Module10_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly5_Module11_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module11_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly5_Module12_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module13_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module13_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly5_Module13_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly5_Module14_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module14_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly5_Module15_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module15_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly5_Module16_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module17_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module18_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module18_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly5_Module19_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module20_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module20_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module20_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly5_Module21_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module21_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly5_Module21_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly5_Module22_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly5_Module23_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly5_Module23_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly5_Module_1_1_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly5_Module_1_1_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly6_Module02_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module02_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module03_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module03_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly6_Module03_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly6_Module04_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module04_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly6_Module05_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly6_Module06_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module06_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly6_Module06_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly6_Module06_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly6_Module07_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module07_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module07_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly6_Module08_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module09_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module10_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module10_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module11_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module11_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly6_Module12_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module12_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly6_Module13_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module14_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module15_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module15_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly6_Module16_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module16_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly6_Module16_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module16_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly6_Module17_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module17_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module18_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module18_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly6_Module19_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module19_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly6_Module19_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly6_Module20_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module21_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module21_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly6_Module22_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module22_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly6_Module23_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel0;
    real_T BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    real_T BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel5;
    real_T BatteryPack_v2_ModuleAssembly6_Module23_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly6_Module_1_1_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly6_Module_1_1_Cell_1_electricalMod0;
    real_T BatteryPack_v2_ModuleAssembly6_Module_1_1_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly_23_Module02_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module02_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module03_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module03_Cell_1_electricalMod0;
    real_T BatteryPack_v2_ModuleAssembly_23_Module04_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module04_Cell_1_electricalMod5;
    real_T BatteryPack_v2_ModuleAssembly_23_Module04_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly_23_Module05_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3;
    real_T BatteryPack_v2_ModuleAssembly_23_Module06_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module06_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly_23_Module07_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module07_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module08_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module08_Cell_1_electricalMod0;
    real_T BatteryPack_v2_ModuleAssembly_23_Module09_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3;
    real_T BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod5;
    real_T BatteryPack_v2_ModuleAssembly_23_Module10_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module10_Cell_1_electricalMod0;
    real_T BatteryPack_v2_ModuleAssembly_23_Module11_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module11_Cell_1_electricalMod0;
    real_T BatteryPack_v2_ModuleAssembly_23_Module11_Cell_1_electricalMod5;
    real_T BatteryPack_v2_ModuleAssembly_23_Module11_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly_23_Module12_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module12_Cell_1_electricalMod0;
    real_T BatteryPack_v2_ModuleAssembly_23_Module12_Cell_1_electricalMod5;
    real_T BatteryPack_v2_ModuleAssembly_23_Module13_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3;
    real_T BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module13_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly_23_Module14_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module14_Cell_1_electricalMod0;
    real_T BatteryPack_v2_ModuleAssembly_23_Module14_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module14_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly_23_Module15_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module15_Cell_1_electricalMod0;
    real_T BatteryPack_v2_ModuleAssembly_23_Module15_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module15_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly_23_Module16_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module16_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module17_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    real_T BatteryPack_v2_ModuleAssembly_23_Module17_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly_23_Module18_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    real_T BatteryPack_v2_ModuleAssembly_23_Module18_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly_23_Module19_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    real_T BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module20_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module20_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module21_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module21_Cell_1_electricalMod0;
    real_T BatteryPack_v2_ModuleAssembly_23_Module21_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module21_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly_23_Module22_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module22_Cell_1_electricalMod0;
    real_T BatteryPack_v2_ModuleAssembly_23_Module22_Cell_1_electricalMod5;
    real_T BatteryPack_v2_ModuleAssembly_23_Module23_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    real_T BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_thermalModel_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module23_numCyclesCell;
    real_T BatteryPack_v2_ModuleAssembly_23_Module_1_1_AmbientResistor_Q;
    real_T BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3;
    real_T BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_thermalModel;
    real_T BatteryPack_v2_ModuleAssembly_23_Module_1_1_numCyclesCell;
    real_T intrm_sf_mf_100;
    real_T intrm_sf_mf_102;
    real_T intrm_sf_mf_107;
    real_T intrm_sf_mf_108;
    real_T intrm_sf_mf_109;
    real_T intrm_sf_mf_11;
    real_T intrm_sf_mf_110;
    real_T intrm_sf_mf_112;
    real_T intrm_sf_mf_113;
    real_T intrm_sf_mf_115;
    real_T intrm_sf_mf_126;
    real_T intrm_sf_mf_13;
    real_T intrm_sf_mf_14;
    real_T intrm_sf_mf_20;
    real_T intrm_sf_mf_25;
    real_T intrm_sf_mf_39;
    real_T intrm_sf_mf_4;
    real_T intrm_sf_mf_43;
    real_T intrm_sf_mf_44;
    real_T intrm_sf_mf_5;
    real_T intrm_sf_mf_52;
    real_T intrm_sf_mf_57;
    real_T intrm_sf_mf_67;
    real_T intrm_sf_mf_69;
    real_T intrm_sf_mf_7;
    real_T intrm_sf_mf_72;
    real_T intrm_sf_mf_73;
    real_T intrm_sf_mf_75;
    real_T intrm_sf_mf_79;
    real_T intrm_sf_mf_80;
    real_T intrm_sf_mf_81;
    real_T intrm_sf_mf_85;
    real_T intrm_sf_mf_89;
    real_T intrm_sf_mf_95;
    real_T t3314;
    real_T t3318;
    real_T t3323;
    real_T t3325;
    real_T t3327;
    real_T t3328;
    real_T t3329;
    real_T t3340;
    real_T t3342;
    real_T t3343;
    real_T t3345;
    real_T t3347;
    real_T t3352;
    real_T t3353;
    real_T t3354;
    real_T t3357;
    real_T t3358;
    real_T t3360;
    real_T t3365;
    real_T t3367;
    real_T t3368;
    real_T t3373;
    real_T t3374;
    real_T t3377;
    real_T t3380;
    real_T t3382;
    real_T t3383;
    real_T t3385;
    real_T t3393;
    real_T t3395;
    real_T t3397;
    real_T t3399;
    real_T t3400;
    real_T t3404;
    real_T t3407;
    real_T t3408;
    real_T t3409;
    real_T t3417;
    real_T t3422;
    real_T t3425;
    real_T t3429;
    real_T t3432;
    real_T t3435;
    real_T t3442;
    real_T t3448;
    real_T t3452;
    real_T t3458;
    real_T t3459;
    real_T t3460;
    real_T t3462;
    real_T t3464;
    real_T t3467;
    real_T t3468;
    real_T t3469;
    real_T t3472;
    real_T t3473;
    real_T t3479;
    real_T t3483;
    real_T t3485;
    real_T t3487;
    real_T t3488;
    real_T t3489;
    real_T t3490;
    real_T t3494;
    real_T t3495;
    real_T t3499;
    real_T t3500;
    real_T t3503;
    real_T t3504;
    real_T t3508;
    real_T t3513;
    real_T t3515;
    real_T t3517;
    real_T t3518;
    real_T t3522;
    real_T t3523;
    real_T t3527;
    real_T t3528;
    real_T t3532;
    real_T t3533;
    real_T t3540;
    real_T t3542;
    real_T t3547;
    real_T t3548;
    real_T t3549;
    real_T t3550;
    real_T t3554;
    real_T t3555;
    real_T t3558;
    real_T t3559;
    real_T t3560;
    real_T t3562;
    real_T t3563;
    real_T t3564;
    real_T t3567;
    real_T t3569;
    real_T t3573;
    real_T t3575;
    real_T t3578;
    real_T t3582;
    real_T t3583;
    real_T t3584;
    real_T t3585;
    real_T t3587;
    real_T t3588;
    real_T t3590;
    real_T t3592;
    real_T t3595;
    real_T t3597;
    real_T t3602;
    real_T t3603;
    real_T t3607;
    real_T t3608;
    real_T t3609;
    real_T t3613;
    real_T t3614;
    real_T t3622;
    real_T t3627;
    real_T t3632;
    real_T t3633;
    real_T t3637;
    real_T t3640;
    real_T t3643;
    real_T t3647;
    real_T t3652;
    real_T t3653;
    real_T t3654;
    real_T t3655;
    real_T t3658;
    real_T t3660;
    real_T t3664;
    real_T t3668;
    real_T t3669;
    real_T t3672;
    real_T t3677;
    real_T t3678;
    real_T t3680;
    real_T t3682;
    real_T t3685;
    real_T t3687;
    real_T t3690;
    real_T t3694;
    real_T t3697;
    real_T t3699;
    real_T t3702;
    real_T t3705;
    real_T t3707;
    real_T t3708;
    real_T t3710;
    real_T t3712;
    real_T t3713;
    real_T t3720;
    real_T t3722;
    real_T t3723;
    real_T t3728;
    real_T t3729;
    real_T t3730;
    real_T t3732;
    real_T t3733;
    real_T t3734;
    real_T t3735;
    real_T t3737;
    real_T t3738;
    real_T t3743;
    real_T t3747;
    real_T t3748;
    real_T t3754;
    real_T t3757;
    real_T t3758;
    real_T t3762;
    real_T t3764;
    real_T t3768;
    real_T t3769;
    real_T t3770;
    real_T t3773;
    real_T t3774;
    real_T t3777;
    real_T t3780;
    real_T t3792;
    real_T t3794;
    real_T t3798;
    real_T t3803;
    real_T t3804;
    real_T t3805;
    real_T t3807;
    real_T t3808;
    real_T t3809;
    real_T t3810;
    real_T t3812;
    real_T t3813;
    real_T t3817;
    real_T t3818;
    real_T t3822;
    real_T t3823;
    real_T t3825;
    real_T t3828;
    real_T t3829;
    real_T t3832;
    real_T t3834;
    real_T t3837;
    real_T t3839;
    real_T t3840;
    real_T t3848;
    real_T t3852;
    real_T t3853;
    real_T t3855;
    real_T t3860;
    real_T t3863;
    real_T t3867;
    real_T t3868;
    real_T t3869;
    real_T t3875;
    real_T t3885;
    real_T t3888;
    real_T t3892;
    real_T t3894;
    real_T t3895;
    real_T t3897;
    real_T t3898;
    real_T t3903;
    real_T t3905;
    real_T t3907;
    real_T t3908;
    real_T t3910;
    real_T t3913;
    real_T t3917;
    real_T t3920;
    real_T t3922;
    real_T t3923;
    real_T t3927;
    real_T t3930;
    real_T t3932;
    real_T t3939;
    real_T t3942;
    real_T t3943;
    real_T t3949;
    real_T t3954;
    real_T t3958;
    real_T t3959;
    real_T t3962;
    real_T t3963;
    real_T t3965;
    real_T t3968;
    real_T t3969;
    real_T t3970;
    real_T t3973;
    real_T t3977;
    real_T t3978;
    real_T t3982;
    real_T t3984;
    real_T t3989;
    real_T t3992;
    real_T t3993;
    real_T t3994;
    real_T t3998;
    real_T zc_int10;
    real_T zc_int102;
    real_T zc_int110;
    real_T zc_int120;
    real_T zc_int121;
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
    real_T zc_int202;
    real_T zc_int208;
    real_T zc_int212;
    real_T zc_int218;
    real_T zc_int22;
    real_T zc_int225;
    real_T zc_int24;
    real_T zc_int242;
    real_T zc_int243;
    real_T zc_int247;
    real_T zc_int248;
    real_T zc_int250;
    real_T zc_int253;
    real_T zc_int258;
    real_T zc_int262;
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
    real_T zc_int334;
    real_T zc_int348;
    real_T zc_int349;
    real_T zc_int35;
    real_T zc_int354;
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
    real_T zc_int38;
    real_T zc_int383;
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
    real_T zc_int424;
    real_T zc_int425;
    real_T zc_int426;
    real_T zc_int428;
    real_T zc_int431;
    real_T zc_int436;
    real_T zc_int439;
    real_T zc_int44;
    real_T zc_int452;
    real_T zc_int454;
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
    real_T zc_int639;
    real_T zc_int64;
    real_T zc_int641;
    real_T zc_int643;
    real_T zc_int646;
    real_T zc_int650;
    real_T zc_int651;
    real_T zc_int652;
    real_T zc_int653;
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
    size_t t2380[1];
    size_t t278[1];
    size_t t280[1];
    size_t t2499;
    size_t t2919;
    size_t t2972;
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
    BatteryPack_v2_ModuleAssembly2_Module02_AmbientResistor_Q = t4657->mX.mX[0UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1107UL];
    t2380[0] = 7UL;
    t278[0] = 1UL;
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[0UL];
    t280[0] = 3UL;
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int454 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel1 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3314 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel1 > t3314 ? t3314 : BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel1;
    }
    BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel1 = zc_int454 > t2154[0UL] ? zc_int454 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3314 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly2_Module02_numCyclesCell = t2154[0UL] * t4657->mX.mX[1106UL];
    BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_thermalModel_Q = t4657->mX.mX[0UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module03_AmbientResistor_Q = t4657->mX.mX[8UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1111UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[8UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3318 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int10 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3318 > zc_int10 ? zc_int10 : t3318;
    }
    t3318 = BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int10 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly2_Module03_numCyclesCell = t2154[0UL] * t4657->mX.mX[1110UL];
    BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_thermalModel_Q = t4657->mX.mX[8UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module04_AmbientResistor_Q = t4657->mX.mX[16UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1115UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[16UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int30 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3323 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int40 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3323 > zc_int40 ? zc_int40 : t3323;
    }
    t3323 = zc_int30 > t2154[0UL] ? zc_int30 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int40 = t2154[0UL];
    t3327 = t2154[0UL] * t4657->mX.mX[1114UL];
    t3325 = t4657->mX.mX[16UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module05_AmbientResistor_Q = t4657->mX.mX[24UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1119UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[24UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int8 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3328 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3329 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3328 > t3329 ? t3329 : t3328;
    }
    t3328 = zc_int8 > t2154[0UL] ? zc_int8 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3329 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly2_Module05_numCyclesCell = t2154[0UL] * t4657->mX.mX[1118UL];
    BatteryPack_v2_ModuleAssembly2_Module05_Cell_1_thermalModel_Q = t4657->mX.mX[24UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module06_AmbientResistor_Q = t4657->mX.mX[32UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1123UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[32UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int110 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly2_Module06_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_4 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly2_Module06_Cell_1_electricalModel0 > intrm_sf_mf_4 ? intrm_sf_mf_4 : BatteryPack_v2_ModuleAssembly2_Module06_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly2_Module06_Cell_1_electricalModel0 = zc_int110 > t2154[0UL] ? zc_int110 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_4 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly2_Module06_numCyclesCell = t2154[0UL] * t4657->mX.mX[1122UL];
    BatteryPack_v2_ModuleAssembly2_Module06_Cell_1_thermalModel_Q = t4657->mX.mX[32UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module07_AmbientResistor_Q = t4657->mX.mX[40UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1127UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[40UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int120 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly2_Module07_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_5 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly2_Module07_Cell_1_electricalModel0 > intrm_sf_mf_5 ? intrm_sf_mf_5 : BatteryPack_v2_ModuleAssembly2_Module07_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly2_Module07_Cell_1_electricalModel0 = zc_int120 > t2154[0UL] ? zc_int120 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_5 = t2154[0UL];
    t3342 = t2154[0UL] * t4657->mX.mX[1126UL];
    t3340 = t4657->mX.mX[40UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module08_AmbientResistor_Q = t4657->mX.mX[48UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1131UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[48UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3343 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int161 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3343 > zc_int161 ? zc_int161 : t3343;
    }
    t3343 = BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int161 = t2154[0UL];
    t3347 = t2154[0UL] * t4657->mX.mX[1130UL];
    t3345 = t4657->mX.mX[48UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module09_AmbientResistor_Q = t4657->mX.mX[56UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1135UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[56UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t222.mField0[0UL], &t222.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_7 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel0 > intrm_sf_mf_7 ? intrm_sf_mf_7 : BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel0 = BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t222.mField0[0UL], &t222.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_7 = t2154[0UL];
    t3352 = t2154[0UL] * t4657->mX.mX[1134UL];
    BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_thermalModel_Q = t4657->mX.mX[56UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module10_AmbientResistor_Q = t4657->mX.mX[64UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1139UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[64UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int212 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3353 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3354 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3353 > t3354 ? t3354 : t3353;
    }
    t3353 = zc_int212 > t2154[0UL] ? zc_int212 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3354 = t2154[0UL];
    t3357 = t2154[0UL] * t4657->mX.mX[1138UL];
    BatteryPack_v2_ModuleAssembly2_Module10_Cell_1_electricalModel5 = t4657->mX.mX[64UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module11_AmbientResistor_Q = t4657->mX.mX[72UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1143UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[72UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int242 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3358 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int250 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3358 > zc_int250 ? zc_int250 : t3358;
    }
    t3358 = zc_int242 > t2154[0UL] ? zc_int242 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int250 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly2_Module11_numCyclesCell = t2154[0UL] * t4657->mX.mX[1142UL];
    t3360 = t4657->mX.mX[72UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module12_AmbientResistor_Q = t4657->mX.mX[80UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1147UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[80UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int281 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel0 > zc_int281 ? zc_int281 : BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel0 = BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int281 = t2154[0UL];
    t3367 = t2154[0UL] * t4657->mX.mX[1146UL];
    t3365 = t4657->mX.mX[80UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module13_AmbientResistor_Q = t4657->mX.mX[88UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1151UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[88UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3368 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_11 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3368 > intrm_sf_mf_11 ? intrm_sf_mf_11 : t3368;
    }
    t3368 = BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_11 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly2_Module13_numCyclesCell = t2154[0UL] * t4657->mX.mX[1150UL];
    BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_thermalModel_Q = t4657->mX.mX[88UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module14_AmbientResistor_Q = t4657->mX.mX[96UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1155UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[96UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3373 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3374 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3373 > t3374 ? t3374 : t3373;
    }
    t3373 = BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3374 = t2154[0UL];
    t3377 = t2154[0UL] * t4657->mX.mX[1154UL];
    BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel5 = t4657->mX.mX[96UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module15_AmbientResistor_Q = t4657->mX.mX[104UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1159UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[104UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int360 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly2_Module15_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_13 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly2_Module15_Cell_1_electricalModel0 > intrm_sf_mf_13 ? intrm_sf_mf_13 : BatteryPack_v2_ModuleAssembly2_Module15_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly2_Module15_Cell_1_electricalModel0 = zc_int360 > t2154[0UL] ? zc_int360 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_13 = t2154[0UL];
    t3382 = t2154[0UL] * t4657->mX.mX[1158UL];
    t3380 = t4657->mX.mX[104UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module16_AmbientResistor_Q = t4657->mX.mX[112UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1163UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[112UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t96.mField0[0UL], &t96.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3383 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_14 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3383 > intrm_sf_mf_14 ? intrm_sf_mf_14 : t3383;
    }
    t3383 = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t96.mField0[0UL], &t96.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_14 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly2_Module16_numCyclesCell = t2154[0UL] * t4657->mX.mX[1162UL];
    t3385 = t4657->mX.mX[112UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module17_AmbientResistor_Q = t4657->mX.mX[120UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1167UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[120UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t222.mField0[0UL], &t222.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int63 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel0 > zc_int63 ? zc_int63 : BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel0 = BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t222.mField0[0UL], &t222.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int63 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly2_Module17_numCyclesCell = t2154[0UL] * t4657->mX.mX[1166UL];
    BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_thermalModel_Q = t4657->mX.mX[120UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module18_AmbientResistor_Q = t4657->mX.mX[128UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1171UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[128UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int46 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3393 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int436 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3393 > zc_int436 ? zc_int436 : t3393;
    }
    t3393 = zc_int46 > t2154[0UL] ? zc_int46 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int436 = t2154[0UL];
    t3397 = t2154[0UL] * t4657->mX.mX[1170UL];
    t3395 = t4657->mX.mX[128UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module19_AmbientResistor_Q = t4657->mX.mX[136UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1175UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[136UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int49 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly2_Module19_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3399 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly2_Module19_Cell_1_electricalModel0 > t3399 ? t3399 : BatteryPack_v2_ModuleAssembly2_Module19_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly2_Module19_Cell_1_electricalModel0 = zc_int49 > t2154[0UL] ? zc_int49 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3399 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly2_Module19_numCyclesCell = t2154[0UL] * t4657->mX.mX[1174UL];
    t3400 = t4657->mX.mX[136UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module20_AmbientResistor_Q = t4657->mX.mX[144UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1179UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[144UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int53 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly2_Module20_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3404 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly2_Module20_Cell_1_electricalModel0 > t3404 ? t3404 : BatteryPack_v2_ModuleAssembly2_Module20_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly2_Module20_Cell_1_electricalModel0 = zc_int53 > t2154[0UL] ? zc_int53 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3404 = t2154[0UL];
    t3407 = t2154[0UL] * t4657->mX.mX[1178UL];
    BatteryPack_v2_ModuleAssembly2_Module20_Cell_1_electricalModel5 = t4657->mX.mX[144UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module21_AmbientResistor_Q = t4657->mX.mX[152UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1183UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[152UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int55 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3408 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3409 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3408 > t3409 ? t3409 : t3408;
    }
    t3408 = zc_int55 > t2154[0UL] ? zc_int55 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3409 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly2_Module21_numCyclesCell = t2154[0UL] * t4657->mX.mX[1182UL];
    BatteryPack_v2_ModuleAssembly2_Module21_Cell_1_thermalModel_Q = t4657->mX.mX[152UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module22_AmbientResistor_Q = t4657->mX.mX[160UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1187UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[160UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int58 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly2_Module22_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_20 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly2_Module22_Cell_1_electricalModel0 > intrm_sf_mf_20 ? intrm_sf_mf_20 : BatteryPack_v2_ModuleAssembly2_Module22_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly2_Module22_Cell_1_electricalModel0 = zc_int58 > t2154[0UL] ? zc_int58 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_20 = t2154[0UL];
    t3417 = t2154[0UL] * t4657->mX.mX[1186UL];
    BatteryPack_v2_ModuleAssembly2_Module22_Cell_1_thermalModel_Q = t4657->mX.mX[160UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module23_AmbientResistor_Q = t4657->mX.mX[168UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1191UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[168UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int431 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel0 > zc_int431 ? zc_int431 : BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel0 = BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int431 = t2154[0UL];
    t3422 = t2154[0UL] * t4657->mX.mX[1190UL];
    BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_thermalModel_Q = t4657->mX.mX[168UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly2_Module_1_1_AmbientResistor_Q = t4657->mX.mX[176UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1195UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[176UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t96.mField0[0UL], &t96.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int480 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly2_Module_1_1_Cell_1_electricalMod0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int481 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly2_Module_1_1_Cell_1_electricalMod0 > zc_int481 ? zc_int481 : BatteryPack_v2_ModuleAssembly2_Module_1_1_Cell_1_electricalMod0;
    }
    BatteryPack_v2_ModuleAssembly2_Module_1_1_Cell_1_electricalMod0 = zc_int480 > t2154[0UL] ? zc_int480 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t96.mField0[0UL], &t96.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int481 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly2_Module_1_1_numCyclesCell = t2154[0UL] * t4657->mX.mX[1194UL];
    t3425 = t4657->mX.mX[176UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module02_AmbientResistor_Q = t4657->mX.mX[184UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1199UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[184UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int68 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly3_Module02_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3429 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly3_Module02_Cell_1_electricalModel0 > t3429 ? t3429 : BatteryPack_v2_ModuleAssembly3_Module02_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly3_Module02_Cell_1_electricalModel0 = zc_int68 > t2154[0UL] ? zc_int68 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3429 = t2154[0UL];
    t3432 = t2154[0UL] * t4657->mX.mX[1198UL];
    BatteryPack_v2_ModuleAssembly3_Module02_Cell_1_electricalModel5 = t4657->mX.mX[184UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module03_AmbientResistor_Q = t4657->mX.mX[192UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1203UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[192UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int428 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel0 > zc_int428 ? zc_int428 : BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel0 = BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int428 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly3_Module03_numCyclesCell = t2154[0UL] * t4657->mX.mX[1202UL];
    t3435 = t4657->mX.mX[192UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module04_AmbientResistor_Q = t4657->mX.mX[200UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1207UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[200UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_25 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel0 > intrm_sf_mf_25 ? intrm_sf_mf_25 : BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel0 = BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_25 = t2154[0UL];
    t3442 = t2154[0UL] * t4657->mX.mX[1206UL];
    BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel5 = t4657->mX.mX[200UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module05_AmbientResistor_Q = t4657->mX.mX[208UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1211UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[208UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int77 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly3_Module05_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int426 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly3_Module05_Cell_1_electricalModel0 > zc_int426 ? zc_int426 : BatteryPack_v2_ModuleAssembly3_Module05_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly3_Module05_Cell_1_electricalModel0 = zc_int77 > t2154[0UL] ? zc_int77 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int426 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly3_Module05_numCyclesCell = t2154[0UL] * t4657->mX.mX[1210UL];
    BatteryPack_v2_ModuleAssembly3_Module05_Cell_1_thermalModel_Q = t4657->mX.mX[208UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module06_AmbientResistor_Q = t4657->mX.mX[216UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1215UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[216UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int80 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3448 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int425 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3448 > zc_int425 ? zc_int425 : t3448;
    }
    t3448 = zc_int80 > t2154[0UL] ? zc_int80 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int425 = t2154[0UL];
    t3452 = t2154[0UL] * t4657->mX.mX[1214UL];
    BatteryPack_v2_ModuleAssembly3_Module06_Cell_1_electricalModel5 = t4657->mX.mX[216UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module07_AmbientResistor_Q = t4657->mX.mX[224UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1219UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[224UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int83 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly3_Module07_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int424 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly3_Module07_Cell_1_electricalModel0 > zc_int424 ? zc_int424 : BatteryPack_v2_ModuleAssembly3_Module07_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly3_Module07_Cell_1_electricalModel0 = zc_int83 > t2154[0UL] ? zc_int83 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int424 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly3_Module07_numCyclesCell = t2154[0UL] * t4657->mX.mX[1218UL];
    BatteryPack_v2_ModuleAssembly3_Module07_Cell_1_electricalModel5 = t4657->mX.mX[224UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module08_AmbientResistor_Q = t4657->mX.mX[232UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1223UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[232UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int86 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3458 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3459 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3458 > t3459 ? t3459 : t3458;
    }
    t3458 = zc_int86 > t2154[0UL] ? zc_int86 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3459 = t2154[0UL];
    t3462 = t2154[0UL] * t4657->mX.mX[1222UL];
    t3460 = t4657->mX.mX[232UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module09_AmbientResistor_Q = t4657->mX.mX[240UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1227UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[240UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int89 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly3_Module09_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3464 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly3_Module09_Cell_1_electricalModel0 > t3464 ? t3464 : BatteryPack_v2_ModuleAssembly3_Module09_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly3_Module09_Cell_1_electricalModel0 = zc_int89 > t2154[0UL] ? zc_int89 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3464 = t2154[0UL];
    t3467 = t2154[0UL] * t4657->mX.mX[1226UL];
    BatteryPack_v2_ModuleAssembly3_Module09_Cell_1_thermalModel_Q = t4657->mX.mX[240UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module10_AmbientResistor_Q = t4657->mX.mX[248UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1231UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[248UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3468 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3469 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3468 > t3469 ? t3469 : t3468;
    }
    t3468 = BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3469 = t2154[0UL];
    t3472 = t2154[0UL] * t4657->mX.mX[1230UL];
    BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_thermalModel_Q = t4657->mX.mX[248UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module11_AmbientResistor_Q = t4657->mX.mX[256UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1235UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[256UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3473 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3473 > zc_int44 ? zc_int44 : t3473;
    }
    t3473 = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int44 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly3_Module11_numCyclesCell = t2154[0UL] * t4657->mX.mX[1234UL];
    BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_thermalModel_Q = t4657->mX.mX[256UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module12_AmbientResistor_Q = t4657->mX.mX[264UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1239UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[264UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t222.mField0[0UL], &t222.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int97 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly3_Module12_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3479 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly3_Module12_Cell_1_electricalModel0 > t3479 ? t3479 : BatteryPack_v2_ModuleAssembly3_Module12_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly3_Module12_Cell_1_electricalModel0 = zc_int97 > t2154[0UL] ? zc_int97 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t222.mField0[0UL], &t222.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3479 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly3_Module12_numCyclesCell = t2154[0UL] * t4657->mX.mX[1238UL];
    BatteryPack_v2_ModuleAssembly3_Module12_Cell_1_thermalModel_Q = t4657->mX.mX[264UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module13_AmbientResistor_Q = t4657->mX.mX[272UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1243UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[272UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int102 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3483 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int99 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3483 > zc_int99 ? zc_int99 : t3483;
    }
    t3483 = zc_int102 > t2154[0UL] ? zc_int102 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int99 = t2154[0UL];
    t3487 = t2154[0UL] * t4657->mX.mX[1242UL];
    t3485 = t4657->mX.mX[272UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module14_AmbientResistor_Q = t4657->mX.mX[280UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1247UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[280UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3488 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3489 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3488 > t3489 ? t3489 : t3488;
    }
    t3488 = BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3489 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly3_Module14_numCyclesCell = t2154[0UL] * t4657->mX.mX[1246UL];
    t3490 = t4657->mX.mX[280UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module15_AmbientResistor_Q = t4657->mX.mX[288UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1251UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[288UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3494 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel0 > t3494 ? t3494 : BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel0 = BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3494 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly3_Module15_numCyclesCell = t2154[0UL] * t4657->mX.mX[1250UL];
    t3495 = t4657->mX.mX[288UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module16_AmbientResistor_Q = t4657->mX.mX[296UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1255UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[296UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int121 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly3_Module16_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3499 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly3_Module16_Cell_1_electricalModel0 > t3499 ? t3499 : BatteryPack_v2_ModuleAssembly3_Module16_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly3_Module16_Cell_1_electricalModel0 = zc_int121 > t2154[0UL] ? zc_int121 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3499 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly3_Module16_numCyclesCell = t2154[0UL] * t4657->mX.mX[1254UL];
    t3500 = t4657->mX.mX[296UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module17_AmbientResistor_Q = t4657->mX.mX[304UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1259UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[304UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int134 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3503 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3504 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3503 > t3504 ? t3504 : t3503;
    }
    t3503 = zc_int134 > t2154[0UL] ? zc_int134 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3504 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly3_Module17_numCyclesCell = t2154[0UL] * t4657->mX.mX[1258UL];
    BatteryPack_v2_ModuleAssembly3_Module17_Cell_1_thermalModel_Q = t4657->mX.mX[304UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module18_AmbientResistor_Q = t4657->mX.mX[312UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1263UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[312UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int133 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3508 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_39 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3508 > intrm_sf_mf_39 ? intrm_sf_mf_39 : t3508;
    }
    t3508 = zc_int133 > t2154[0UL] ? zc_int133 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_39 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly3_Module18_numCyclesCell = t2154[0UL] * t4657->mX.mX[1262UL];
    BatteryPack_v2_ModuleAssembly3_Module18_Cell_1_electricalModel5 = t4657->mX.mX[312UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module19_AmbientResistor_Q = t4657->mX.mX[320UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1267UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[320UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int146 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3513 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int147 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3513 > zc_int147 ? zc_int147 : t3513;
    }
    t3513 = zc_int146 > t2154[0UL] ? zc_int146 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int147 = t2154[0UL];
    t3517 = t2154[0UL] * t4657->mX.mX[1266UL];
    t3515 = t4657->mX.mX[320UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module20_AmbientResistor_Q = t4657->mX.mX[328UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1271UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[328UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int148 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3518 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int155 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3518 > zc_int155 ? zc_int155 : t3518;
    }
    t3518 = zc_int148 > t2154[0UL] ? zc_int148 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int155 = t2154[0UL];
    t3522 = t2154[0UL] * t4657->mX.mX[1270UL];
    BatteryPack_v2_ModuleAssembly3_Module20_Cell_1_electricalModel5 = t4657->mX.mX[328UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module21_AmbientResistor_Q = t4657->mX.mX[336UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1275UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[336UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int154 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3523 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int164 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3523 > zc_int164 ? zc_int164 : t3523;
    }
    t3523 = zc_int154 > t2154[0UL] ? zc_int154 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int164 = t2154[0UL];
    t3527 = t2154[0UL] * t4657->mX.mX[1274UL];
    BatteryPack_v2_ModuleAssembly3_Module21_Cell_1_thermalModel_Q = t4657->mX.mX[336UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module22_AmbientResistor_Q = t4657->mX.mX[344UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1279UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[344UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3528 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_43 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3528 > intrm_sf_mf_43 ? intrm_sf_mf_43 : t3528;
    }
    t3528 = BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_43 = t2154[0UL];
    t3532 = t2154[0UL] * t4657->mX.mX[1278UL];
    BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel5 = t4657->mX.mX[344UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module23_AmbientResistor_Q = t4657->mX.mX[352UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1283UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[352UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int171 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3533 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_44 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3533 > intrm_sf_mf_44 ? intrm_sf_mf_44 : t3533;
    }
    t3533 = zc_int171 > t2154[0UL] ? zc_int171 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_44 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly3_Module23_numCyclesCell = t2154[0UL] * t4657->mX.mX[1282UL];
    BatteryPack_v2_ModuleAssembly3_Module23_Cell_1_thermalModel_Q = t4657->mX.mX[352UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly3_Module_1_1_AmbientResistor_Q = t4657->mX.mX[360UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1287UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[360UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int64 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly3_Module_1_1_Cell_1_electricalMod0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int51 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly3_Module_1_1_Cell_1_electricalMod0 > zc_int51 ? zc_int51 : BatteryPack_v2_ModuleAssembly3_Module_1_1_Cell_1_electricalMod0;
    }
    BatteryPack_v2_ModuleAssembly3_Module_1_1_Cell_1_electricalMod0 = zc_int64 > t2154[0UL] ? zc_int64 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int51 = t2154[0UL];
    t3542 = t2154[0UL] * t4657->mX.mX[1286UL];
    t3540 = t4657->mX.mX[360UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module02_AmbientResistor_Q = t4657->mX.mX[368UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1291UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[368UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t270.mField0[0UL], &t270.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int177 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly4_Module02_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int178 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly4_Module02_Cell_1_electricalModel0 > zc_int178 ? zc_int178 : BatteryPack_v2_ModuleAssembly4_Module02_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly4_Module02_Cell_1_electricalModel0 = zc_int177 > t2154[0UL] ? zc_int177 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t270.mField0[0UL], &t270.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int178 = t2154[0UL];
    t3547 = t2154[0UL] * t4657->mX.mX[1290UL];
    BatteryPack_v2_ModuleAssembly4_Module02_Cell_1_electricalModel5 = t4657->mX.mX[368UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module03_AmbientResistor_Q = t4657->mX.mX[376UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1295UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[376UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int183 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3548 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3549 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3548 > t3549 ? t3549 : t3548;
    }
    t3548 = zc_int183 > t2154[0UL] ? zc_int183 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3549 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly4_Module03_numCyclesCell = t2154[0UL] * t4657->mX.mX[1294UL];
    t3550 = t4657->mX.mX[376UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module04_AmbientResistor_Q = t4657->mX.mX[384UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1299UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[384UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int192 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly4_Module04_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3554 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly4_Module04_Cell_1_electricalModel0 > t3554 ? t3554 : BatteryPack_v2_ModuleAssembly4_Module04_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly4_Module04_Cell_1_electricalModel0 = zc_int192 > t2154[0UL] ? zc_int192 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3554 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly4_Module04_numCyclesCell = t2154[0UL] * t4657->mX.mX[1298UL];
    t3555 = t4657->mX.mX[384UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module05_AmbientResistor_Q = t4657->mX.mX[392UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1303UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[392UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int195 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3558 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3559 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3558 > t3559 ? t3559 : t3558;
    }
    t3558 = zc_int195 > t2154[0UL] ? zc_int195 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3559 = t2154[0UL];
    t3562 = t2154[0UL] * t4657->mX.mX[1302UL];
    t3560 = t4657->mX.mX[392UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module06_AmbientResistor_Q = t4657->mX.mX[400UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1307UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[400UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int202 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3563 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3564 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3563 > t3564 ? t3564 : t3563;
    }
    t3563 = zc_int202 > t2154[0UL] ? zc_int202 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3564 = t2154[0UL];
    t3567 = t2154[0UL] * t4657->mX.mX[1306UL];
    BatteryPack_v2_ModuleAssembly4_Module06_Cell_1_thermalModel_Q = t4657->mX.mX[400UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module07_AmbientResistor_Q = t4657->mX.mX[408UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1311UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[408UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int208 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly4_Module07_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3569 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly4_Module07_Cell_1_electricalModel0 > t3569 ? t3569 : BatteryPack_v2_ModuleAssembly4_Module07_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly4_Module07_Cell_1_electricalModel0 = zc_int208 > t2154[0UL] ? zc_int208 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3569 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly4_Module07_numCyclesCell = t2154[0UL] * t4657->mX.mX[1310UL];
    BatteryPack_v2_ModuleAssembly4_Module07_Cell_1_thermalModel_Q = t4657->mX.mX[408UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module08_AmbientResistor_Q = t4657->mX.mX[416UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1315UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[416UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int218 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3573 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_52 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3573 > intrm_sf_mf_52 ? intrm_sf_mf_52 : t3573;
    }
    t3573 = zc_int218 > t2154[0UL] ? zc_int218 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_52 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly4_Module08_numCyclesCell = t2154[0UL] * t4657->mX.mX[1314UL];
    t3575 = t4657->mX.mX[416UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module09_AmbientResistor_Q = t4657->mX.mX[424UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1319UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[424UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int22 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3578 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int225 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3578 > zc_int225 ? zc_int225 : t3578;
    }
    t3578 = zc_int22 > t2154[0UL] ? zc_int22 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int225 = t2154[0UL];
    t3582 = t2154[0UL] * t4657->mX.mX[1318UL];
    BatteryPack_v2_ModuleAssembly4_Module09_Cell_1_thermalModel_Q = t4657->mX.mX[424UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module10_AmbientResistor_Q = t4657->mX.mX[432UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1323UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[432UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3583 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3584 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3583 > t3584 ? t3584 : t3583;
    }
    t3583 = BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3584 = t2154[0UL];
    t3587 = t2154[0UL] * t4657->mX.mX[1322UL];
    t3585 = t4657->mX.mX[432UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module11_AmbientResistor_Q = t4657->mX.mX[440UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1327UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[440UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3588 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int24 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3588 > zc_int24 ? zc_int24 : t3588;
    }
    t3588 = BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int24 = t2154[0UL];
    t3592 = t2154[0UL] * t4657->mX.mX[1326UL];
    t3590 = t4657->mX.mX[440UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module12_AmbientResistor_Q = t4657->mX.mX[448UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1331UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[448UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int243 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly4_Module12_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int248 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly4_Module12_Cell_1_electricalModel0 > zc_int248 ? zc_int248 : BatteryPack_v2_ModuleAssembly4_Module12_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly4_Module12_Cell_1_electricalModel0 = zc_int243 > t2154[0UL] ? zc_int243 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int248 = t2154[0UL];
    t3597 = t2154[0UL] * t4657->mX.mX[1330UL];
    t3595 = t4657->mX.mX[448UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module13_AmbientResistor_Q = t4657->mX.mX[456UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1335UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[456UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int247 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly4_Module13_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_57 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly4_Module13_Cell_1_electricalModel0 > intrm_sf_mf_57 ? intrm_sf_mf_57 : BatteryPack_v2_ModuleAssembly4_Module13_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly4_Module13_Cell_1_electricalModel0 = zc_int247 > t2154[0UL] ? zc_int247 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_57 = t2154[0UL];
    t3602 = t2154[0UL] * t4657->mX.mX[1334UL];
    BatteryPack_v2_ModuleAssembly4_Module13_Cell_1_thermalModel_Q = t4657->mX.mX[456UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module14_AmbientResistor_Q = t4657->mX.mX[464UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1339UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[464UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int253 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3603 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int258 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3603 > zc_int258 ? zc_int258 : t3603;
    }
    t3603 = zc_int253 > t2154[0UL] ? zc_int253 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int258 = t2154[0UL];
    t3607 = t2154[0UL] * t4657->mX.mX[1338UL];
    BatteryPack_v2_ModuleAssembly4_Module14_Cell_1_electricalModel5 = t4657->mX.mX[464UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module15_AmbientResistor_Q = t4657->mX.mX[472UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1343UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[472UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int262 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3608 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3609 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3608 > t3609 ? t3609 : t3608;
    }
    t3608 = zc_int262 > t2154[0UL] ? zc_int262 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3609 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly4_Module15_numCyclesCell = t2154[0UL] * t4657->mX.mX[1342UL];
    BatteryPack_v2_ModuleAssembly4_Module15_Cell_1_electricalModel5 = t4657->mX.mX[472UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module16_AmbientResistor_Q = t4657->mX.mX[480UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1347UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[480UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t270.mField0[0UL], &t270.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3613 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3614 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3613 > t3614 ? t3614 : t3613;
    }
    t3613 = BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t270.mField0[0UL], &t270.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3614 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly4_Module16_numCyclesCell = t2154[0UL] * t4657->mX.mX[1346UL];
    BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel5 = t4657->mX.mX[480UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module17_AmbientResistor_Q = t4657->mX.mX[488UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1351UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[488UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int276 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly4_Module17_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int279 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly4_Module17_Cell_1_electricalModel0 > zc_int279 ? zc_int279 : BatteryPack_v2_ModuleAssembly4_Module17_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly4_Module17_Cell_1_electricalModel0 = zc_int276 > t2154[0UL] ? zc_int276 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int279 = t2154[0UL];
    t3622 = t2154[0UL] * t4657->mX.mX[1350UL];
    BatteryPack_v2_ModuleAssembly4_Module17_Cell_1_thermalModel_Q = t4657->mX.mX[488UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module18_AmbientResistor_Q = t4657->mX.mX[496UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1355UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[496UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int290 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly4_Module18_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int283 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly4_Module18_Cell_1_electricalModel0 > zc_int283 ? zc_int283 : BatteryPack_v2_ModuleAssembly4_Module18_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly4_Module18_Cell_1_electricalModel0 = zc_int290 > t2154[0UL] ? zc_int290 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int283 = t2154[0UL];
    t3627 = t2154[0UL] * t4657->mX.mX[1354UL];
    BatteryPack_v2_ModuleAssembly4_Module18_Cell_1_thermalModel_Q = t4657->mX.mX[496UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module19_AmbientResistor_Q = t4657->mX.mX[504UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1359UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[504UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int293 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly4_Module19_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int289 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly4_Module19_Cell_1_electricalModel0 > zc_int289 ? zc_int289 : BatteryPack_v2_ModuleAssembly4_Module19_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly4_Module19_Cell_1_electricalModel0 = zc_int293 > t2154[0UL] ? zc_int293 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int289 = t2154[0UL];
    t3632 = t2154[0UL] * t4657->mX.mX[1358UL];
    BatteryPack_v2_ModuleAssembly4_Module19_Cell_1_electricalModel5 = t4657->mX.mX[504UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module20_AmbientResistor_Q = t4657->mX.mX[512UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1363UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[512UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int299 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3633 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int3 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3633 > zc_int3 ? zc_int3 : t3633;
    }
    t3633 = zc_int299 > t2154[0UL] ? zc_int299 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int3 = t2154[0UL];
    t3637 = t2154[0UL] * t4657->mX.mX[1362UL];
    BatteryPack_v2_ModuleAssembly4_Module20_Cell_1_thermalModel_Q = t4657->mX.mX[512UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module21_AmbientResistor_Q = t4657->mX.mX[520UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1367UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[520UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int301 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly4_Module21_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int304 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly4_Module21_Cell_1_electricalModel0 > zc_int304 ? zc_int304 : BatteryPack_v2_ModuleAssembly4_Module21_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly4_Module21_Cell_1_electricalModel0 = zc_int301 > t2154[0UL] ? zc_int301 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int304 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly4_Module21_numCyclesCell = t2154[0UL] * t4657->mX.mX[1366UL];
    t3640 = t4657->mX.mX[520UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module22_AmbientResistor_Q = t4657->mX.mX[528UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1371UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[528UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int314 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3643 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int320 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3643 > zc_int320 ? zc_int320 : t3643;
    }
    t3643 = zc_int314 > t2154[0UL] ? zc_int314 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int320 = t2154[0UL];
    t3647 = t2154[0UL] * t4657->mX.mX[1370UL];
    BatteryPack_v2_ModuleAssembly4_Module22_Cell_1_electricalModel5 = t4657->mX.mX[528UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module23_AmbientResistor_Q = t4657->mX.mX[536UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1375UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[536UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t231.mField0[0UL], &t231.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_67 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel0 > intrm_sf_mf_67 ? intrm_sf_mf_67 : BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel0 = BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t231.mField0[0UL], &t231.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_67 = t2154[0UL];
    t3652 = t2154[0UL] * t4657->mX.mX[1374UL];
    BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_thermalModel_Q = t4657->mX.mX[536UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly4_Module_1_1_AmbientResistor_Q = t4657->mX.mX[544UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1379UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[544UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int324 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3653 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3654 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3653 > t3654 ? t3654 : t3653;
    }
    t3653 = zc_int324 > t2154[0UL] ? zc_int324 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3654 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly4_Module_1_1_numCyclesCell = t2154[0UL] * t4657->mX.mX[1378UL];
    t3655 = t4657->mX.mX[544UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module02_AmbientResistor_Q = t4657->mX.mX[552UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1383UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[552UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int35 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3658 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_69 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3658 > intrm_sf_mf_69 ? intrm_sf_mf_69 : t3658;
    }
    t3658 = zc_int35 > t2154[0UL] ? zc_int35 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_69 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly5_Module02_numCyclesCell = t2154[0UL] * t4657->mX.mX[1382UL];
    t3660 = t4657->mX.mX[552UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module03_AmbientResistor_Q = t4657->mX.mX[560UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1387UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[560UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t231.mField0[0UL], &t231.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int334 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly5_Module03_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3664 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly5_Module03_Cell_1_electricalModel0 > t3664 ? t3664 : BatteryPack_v2_ModuleAssembly5_Module03_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly5_Module03_Cell_1_electricalModel0 = zc_int334 > t2154[0UL] ? zc_int334 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t231.mField0[0UL], &t231.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3664 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly5_Module03_numCyclesCell = t2154[0UL] * t4657->mX.mX[1386UL];
    BatteryPack_v2_ModuleAssembly5_Module03_Cell_1_thermalModel_Q = t4657->mX.mX[560UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module04_AmbientResistor_Q = t4657->mX.mX[568UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1391UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[568UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3668 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3669 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3668 > t3669 ? t3669 : t3668;
    }
    t3668 = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3669 = t2154[0UL];
    t3672 = t2154[0UL] * t4657->mX.mX[1390UL];
    BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel5 = t4657->mX.mX[568UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module05_AmbientResistor_Q = t4657->mX.mX[576UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1395UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[576UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_72 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel0 > intrm_sf_mf_72 ? intrm_sf_mf_72 : BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel0 = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_72 = t2154[0UL];
    t3677 = t2154[0UL] * t4657->mX.mX[1394UL];
    BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_thermalModel_Q = t4657->mX.mX[576UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module06_AmbientResistor_Q = t4657->mX.mX[584UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1399UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[584UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3678 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_73 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3678 > intrm_sf_mf_73 ? intrm_sf_mf_73 : t3678;
    }
    t3678 = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_73 = t2154[0UL];
    t3682 = t2154[0UL] * t4657->mX.mX[1398UL];
    t3680 = t4657->mX.mX[584UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module07_AmbientResistor_Q = t4657->mX.mX[592UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1403UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[592UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int348 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel0 > zc_int348 ? zc_int348 : BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel0 = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int348 = t2154[0UL];
    t3687 = t2154[0UL] * t4657->mX.mX[1402UL];
    t3685 = t4657->mX.mX[592UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module08_AmbientResistor_Q = t4657->mX.mX[600UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1407UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[600UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int349 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly5_Module08_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_75 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly5_Module08_Cell_1_electricalModel0 > intrm_sf_mf_75 ? intrm_sf_mf_75 : BatteryPack_v2_ModuleAssembly5_Module08_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly5_Module08_Cell_1_electricalModel0 = zc_int349 > t2154[0UL] ? zc_int349 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_75 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly5_Module08_numCyclesCell = t2154[0UL] * t4657->mX.mX[1406UL];
    t3690 = t4657->mX.mX[600UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module09_AmbientResistor_Q = t4657->mX.mX[608UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1411UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[608UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3694 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel0 > t3694 ? t3694 : BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel0 = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3694 = t2154[0UL];
    t3697 = t2154[0UL] * t4657->mX.mX[1410UL];
    BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel5 = t4657->mX.mX[608UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module10_AmbientResistor_Q = t4657->mX.mX[616UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1415UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[616UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int354 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly5_Module10_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3699 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly5_Module10_Cell_1_electricalModel0 > t3699 ? t3699 : BatteryPack_v2_ModuleAssembly5_Module10_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly5_Module10_Cell_1_electricalModel0 = zc_int354 > t2154[0UL] ? zc_int354 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3699 = t2154[0UL];
    t3702 = t2154[0UL] * t4657->mX.mX[1414UL];
    BatteryPack_v2_ModuleAssembly5_Module10_Cell_1_electricalModel5 = t4657->mX.mX[616UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module11_AmbientResistor_Q = t4657->mX.mX[624UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1419UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[624UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int356 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly5_Module11_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int357 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly5_Module11_Cell_1_electricalModel0 > zc_int357 ? zc_int357 : BatteryPack_v2_ModuleAssembly5_Module11_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly5_Module11_Cell_1_electricalModel0 = zc_int356 > t2154[0UL] ? zc_int356 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int357 = t2154[0UL];
    t3707 = t2154[0UL] * t4657->mX.mX[1418UL];
    t3705 = t4657->mX.mX[624UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module12_AmbientResistor_Q = t4657->mX.mX[632UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1423UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[632UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int358 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3708 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_79 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3708 > intrm_sf_mf_79 ? intrm_sf_mf_79 : t3708;
    }
    t3708 = zc_int358 > t2154[0UL] ? zc_int358 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_79 = t2154[0UL];
    t3712 = t2154[0UL] * t4657->mX.mX[1422UL];
    t3710 = t4657->mX.mX[632UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module13_AmbientResistor_Q = t4657->mX.mX[640UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1427UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[640UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int38 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3713 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_80 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3713 > intrm_sf_mf_80 ? intrm_sf_mf_80 : t3713;
    }
    t3713 = zc_int38 > t2154[0UL] ? zc_int38 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_80 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly5_Module13_numCyclesCell = t2154[0UL] * t4657->mX.mX[1426UL];
    BatteryPack_v2_ModuleAssembly5_Module13_Cell_1_electricalModel5 = t4657->mX.mX[640UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module14_AmbientResistor_Q = t4657->mX.mX[648UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1431UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[648UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int362 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly5_Module14_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_81 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly5_Module14_Cell_1_electricalModel0 > intrm_sf_mf_81 ? intrm_sf_mf_81 : BatteryPack_v2_ModuleAssembly5_Module14_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly5_Module14_Cell_1_electricalModel0 = zc_int362 > t2154[0UL] ? zc_int362 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_81 = t2154[0UL];
    t3722 = t2154[0UL] * t4657->mX.mX[1430UL];
    t3720 = t4657->mX.mX[648UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module15_AmbientResistor_Q = t4657->mX.mX[656UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1435UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[656UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3723 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int365 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3723 > zc_int365 ? zc_int365 : t3723;
    }
    t3723 = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int365 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly5_Module15_numCyclesCell = t2154[0UL] * t4657->mX.mX[1434UL];
    BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_thermalModel_Q = t4657->mX.mX[656UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module16_AmbientResistor_Q = t4657->mX.mX[664UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1439UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[664UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3728 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3729 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3728 > t3729 ? t3729 : t3728;
    }
    t3728 = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3729 = t2154[0UL];
    t3732 = t2154[0UL] * t4657->mX.mX[1438UL];
    t3730 = t4657->mX.mX[664UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module17_AmbientResistor_Q = t4657->mX.mX[672UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1443UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[672UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int368 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3733 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3734 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3733 > t3734 ? t3734 : t3733;
    }
    t3733 = zc_int368 > t2154[0UL] ? zc_int368 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3734 = t2154[0UL];
    t3737 = t2154[0UL] * t4657->mX.mX[1442UL];
    t3735 = t4657->mX.mX[672UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module18_AmbientResistor_Q = t4657->mX.mX[680UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1447UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[680UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3738 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_85 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3738 > intrm_sf_mf_85 ? intrm_sf_mf_85 : t3738;
    }
    t3738 = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_85 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly5_Module18_numCyclesCell = t2154[0UL] * t4657->mX.mX[1446UL];
    BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_thermalModel_Q = t4657->mX.mX[680UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module19_AmbientResistor_Q = t4657->mX.mX[688UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1451UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[688UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3743 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int373 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3743 > zc_int373 ? zc_int373 : t3743;
    }
    t3743 = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int373 = t2154[0UL];
    t3747 = t2154[0UL] * t4657->mX.mX[1450UL];
    BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_thermalModel_Q = t4657->mX.mX[688UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module20_AmbientResistor_Q = t4657->mX.mX[696UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1455UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[696UL];
    tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL], &t231.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int374 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3748 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int375 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3748 > zc_int375 ? zc_int375 : t3748;
    }
    t3748 = zc_int374 > t2154[0UL] ? zc_int374 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t231.mField0[0UL], &t231.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int375 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly5_Module20_numCyclesCell = t2154[0UL] * t4657->mX.mX[1454UL];
    BatteryPack_v2_ModuleAssembly5_Module20_Cell_1_thermalModel_Q = t4657->mX.mX[696UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module21_AmbientResistor_Q = t4657->mX.mX[704UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1459UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[704UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int376 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly5_Module21_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3754 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly5_Module21_Cell_1_electricalModel0 > t3754 ? t3754 : BatteryPack_v2_ModuleAssembly5_Module21_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly5_Module21_Cell_1_electricalModel0 = zc_int376 > t2154[0UL] ? zc_int376 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t270.mField0[0UL], &t270.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3754 = t2154[0UL];
    t3757 = t2154[0UL] * t4657->mX.mX[1458UL];
    BatteryPack_v2_ModuleAssembly5_Module21_Cell_1_electricalModel5 = t4657->mX.mX[704UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module22_AmbientResistor_Q = t4657->mX.mX[712UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1463UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[712UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3758 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_89 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3758 > intrm_sf_mf_89 ? intrm_sf_mf_89 : t3758;
    }
    t3758 = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t18.mField0[0UL], &t18.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_89 = t2154[0UL];
    t3762 = t2154[0UL] * t4657->mX.mX[1462UL];
    BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel5 = t4657->mX.mX[712UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module23_AmbientResistor_Q = t4657->mX.mX[720UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1467UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[720UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3764 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel0 > t3764 ? t3764 : BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel0 = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3764 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly5_Module23_numCyclesCell = t2154[0UL] * t4657->mX.mX[1466UL];
    BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel5 = t4657->mX.mX[720UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly5_Module_1_1_AmbientResistor_Q = t4657->mX.mX[728UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1471UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[728UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int383 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3768 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3769 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3768 > t3769 ? t3769 : t3768;
    }
    t3768 = zc_int383 > t2154[0UL] ? zc_int383 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3769 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly5_Module_1_1_numCyclesCell = t2154[0UL] * t4657->mX.mX[1470UL];
    t3770 = t4657->mX.mX[728UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module02_AmbientResistor_Q = t4657->mX.mX[736UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1475UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[736UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int385 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3773 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3774 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3773 > t3774 ? t3774 : t3773;
    }
    t3773 = zc_int385 > t2154[0UL] ? zc_int385 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t186.mField0[0UL], &t186.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3774 = t2154[0UL];
    t3777 = t2154[0UL] * t4657->mX.mX[1474UL];
    BatteryPack_v2_ModuleAssembly6_Module02_Cell_1_thermalModel_Q = t4657->mX.mX[736UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module03_AmbientResistor_Q = t4657->mX.mX[744UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1479UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[744UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int387 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly6_Module03_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int388 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly6_Module03_Cell_1_electricalModel0 > zc_int388 ? zc_int388 : BatteryPack_v2_ModuleAssembly6_Module03_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly6_Module03_Cell_1_electricalModel0 = zc_int387 > t2154[0UL] ? zc_int387 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int388 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly6_Module03_numCyclesCell = t2154[0UL] * t4657->mX.mX[1478UL];
    t3780 = t4657->mX.mX[744UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module04_AmbientResistor_Q = t4657->mX.mX[752UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1483UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[752UL];
    tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL], &t270.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t270.mField0[0UL], &t270.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int410 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel0 > zc_int410 ? zc_int410 : BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel0 = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t270.mField0[0UL], &t270.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int410 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly6_Module04_numCyclesCell = t2154[0UL] * t4657->mX.mX[1482UL];
    BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_thermalModel_Q = t4657->mX.mX[752UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module05_AmbientResistor_Q = t4657->mX.mX[760UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1487UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[760UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_95 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel0 > intrm_sf_mf_95 ? intrm_sf_mf_95 : BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel0 = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_95 = t2154[0UL];
    t3792 = t2154[0UL] * t4657->mX.mX[1486UL];
    BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel5 = t4657->mX.mX[760UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module06_AmbientResistor_Q = t4657->mX.mX[768UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1491UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[768UL];
    tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL], &t18.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int393 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly6_Module06_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3794 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly6_Module06_Cell_1_electricalModel0 > t3794 ? t3794 : BatteryPack_v2_ModuleAssembly6_Module06_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly6_Module06_Cell_1_electricalModel0 = zc_int393 > t2154[0UL] ? zc_int393 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t18.mField0[0UL], &t18.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3794 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly6_Module06_numCyclesCell = t2154[0UL] * t4657->mX.mX[1490UL];
    BatteryPack_v2_ModuleAssembly6_Module06_Cell_1_electricalModel5 = t4657->mX.mX[768UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module07_AmbientResistor_Q = t4657->mX.mX[776UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1495UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[776UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int395 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3798 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int396 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3798 > zc_int396 ? zc_int396 : t3798;
    }
    t3798 = zc_int395 > t2154[0UL] ? zc_int395 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int396 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly6_Module07_numCyclesCell = t2154[0UL] * t4657->mX.mX[1494UL];
    BatteryPack_v2_ModuleAssembly6_Module07_Cell_1_thermalModel_Q = t4657->mX.mX[776UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module08_AmbientResistor_Q = t4657->mX.mX[784UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1499UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[784UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int397 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3803 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3804 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3803 > t3804 ? t3804 : t3803;
    }
    t3803 = zc_int397 > t2154[0UL] ? zc_int397 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3804 = t2154[0UL];
    t3807 = t2154[0UL] * t4657->mX.mX[1498UL];
    t3805 = t4657->mX.mX[784UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module09_AmbientResistor_Q = t4657->mX.mX[792UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1503UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[792UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3808 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3809 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3808 > t3809 ? t3809 : t3808;
    }
    t3808 = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3809 = t2154[0UL];
    t3812 = t2154[0UL] * t4657->mX.mX[1502UL];
    t3810 = t4657->mX.mX[792UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module10_AmbientResistor_Q = t4657->mX.mX[800UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1507UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[800UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int401 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3813 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_100 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3813 > intrm_sf_mf_100 ? intrm_sf_mf_100 : t3813;
    }
    t3813 = zc_int401 > t2154[0UL] ? zc_int401 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_100 = t2154[0UL];
    t3817 = t2154[0UL] * t4657->mX.mX[1506UL];
    BatteryPack_v2_ModuleAssembly6_Module10_Cell_1_thermalModel_Q = t4657->mX.mX[800UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module11_AmbientResistor_Q = t4657->mX.mX[808UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1511UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[808UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int403 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3818 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int404 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3818 > zc_int404 ? zc_int404 : t3818;
    }
    t3818 = zc_int403 > t2154[0UL] ? zc_int403 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t165.mField0[0UL], &t165.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int404 = t2154[0UL];
    t3822 = t2154[0UL] * t4657->mX.mX[1510UL];
    BatteryPack_v2_ModuleAssembly6_Module11_Cell_1_electricalModel5 = t4657->mX.mX[808UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module12_AmbientResistor_Q = t4657->mX.mX[816UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1515UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[816UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int405 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3823 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_102 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3823 > intrm_sf_mf_102 ? intrm_sf_mf_102 : t3823;
    }
    t3823 = zc_int405 > t2154[0UL] ? zc_int405 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_102 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly6_Module12_numCyclesCell = t2154[0UL] * t4657->mX.mX[1514UL];
    t3825 = t4657->mX.mX[816UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module13_AmbientResistor_Q = t4657->mX.mX[824UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1519UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[824UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3828 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3829 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3828 > t3829 ? t3829 : t3828;
    }
    t3828 = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3829 = t2154[0UL];
    t3832 = t2154[0UL] * t4657->mX.mX[1518UL];
    BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_thermalModel_Q = t4657->mX.mX[824UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module14_AmbientResistor_Q = t4657->mX.mX[832UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1523UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[832UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3834 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel0 > t3834 ? t3834 : BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel0 = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3834 = t2154[0UL];
    t3837 = t2154[0UL] * t4657->mX.mX[1522UL];
    BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_thermalModel_Q = t4657->mX.mX[832UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module15_AmbientResistor_Q = t4657->mX.mX[840UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1527UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[840UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3839 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel0 > t3839 ? t3839 : BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel0 = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t187.mField0[0UL], &t187.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3839 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly6_Module15_numCyclesCell = t2154[0UL] * t4657->mX.mX[1526UL];
    t3840 = t4657->mX.mX[840UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module16_AmbientResistor_Q = t4657->mX.mX[848UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1531UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[848UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int414 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly6_Module16_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int415 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly6_Module16_Cell_1_electricalModel0 > zc_int415 ? zc_int415 : BatteryPack_v2_ModuleAssembly6_Module16_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly6_Module16_Cell_1_electricalModel0 = zc_int414 > t2154[0UL] ? zc_int414 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int415 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly6_Module16_numCyclesCell = t2154[0UL] * t4657->mX.mX[1530UL];
    BatteryPack_v2_ModuleAssembly6_Module16_Cell_1_thermalModel_Q = t4657->mX.mX[848UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module17_AmbientResistor_Q = t4657->mX.mX[856UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1535UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[856UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int416 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3848 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_107 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3848 > intrm_sf_mf_107 ? intrm_sf_mf_107 : t3848;
    }
    t3848 = zc_int416 > t2154[0UL] ? zc_int416 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_107 = t2154[0UL];
    t3852 = t2154[0UL] * t4657->mX.mX[1534UL];
    BatteryPack_v2_ModuleAssembly6_Module17_Cell_1_thermalModel_Q = t4657->mX.mX[856UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module18_AmbientResistor_Q = t4657->mX.mX[864UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1539UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[864UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3853 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_108 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3853 > intrm_sf_mf_108 ? intrm_sf_mf_108 : t3853;
    }
    t3853 = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_108 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly6_Module18_numCyclesCell = t2154[0UL] * t4657->mX.mX[1538UL];
    t3855 = t4657->mX.mX[864UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module19_AmbientResistor_Q = t4657->mX.mX[872UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1543UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[872UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int439 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly6_Module19_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_109 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly6_Module19_Cell_1_electricalModel0 > intrm_sf_mf_109 ? intrm_sf_mf_109 : BatteryPack_v2_ModuleAssembly6_Module19_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly6_Module19_Cell_1_electricalModel0 = zc_int439 > t2154[0UL] ? zc_int439 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t140.mField0[0UL], &t140.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_109 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly6_Module19_numCyclesCell = t2154[0UL] * t4657->mX.mX[1542UL];
    t3860 = t4657->mX.mX[872UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module20_AmbientResistor_Q = t4657->mX.mX[880UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1547UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[880UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3863 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_110 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3863 > intrm_sf_mf_110 ? intrm_sf_mf_110 : t3863;
    }
    t3863 = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_110 = t2154[0UL];
    t3867 = t2154[0UL] * t4657->mX.mX[1546UL];
    BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_thermalModel_Q = t4657->mX.mX[880UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module21_AmbientResistor_Q = t4657->mX.mX[888UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1551UL];
    tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL], &t165.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[888UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3868 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3869 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3868 > t3869 ? t3869 : t3868;
    }
    t3868 = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t165.mField0[0UL], &t165.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3869 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly6_Module21_numCyclesCell = t2154[0UL] * t4657->mX.mX[1550UL];
    BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_thermalModel_Q = t4657->mX.mX[888UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module22_AmbientResistor_Q = t4657->mX.mX[896UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1555UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[896UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_112 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel0 > intrm_sf_mf_112 ? intrm_sf_mf_112 : BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel0 = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_112 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly6_Module22_numCyclesCell = t2154[0UL] * t4657->mX.mX[1554UL];
    t3875 = t4657->mX.mX[896UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module23_AmbientResistor_Q = t4657->mX.mX[904UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1559UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[904UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel0 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_113 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel0 > intrm_sf_mf_113 ? intrm_sf_mf_113 : BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel0;
    }
    BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel0 = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t19.mField0[0UL], &t19.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_113 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly6_Module23_numCyclesCell = t2154[0UL] * t4657->mX.mX[1558UL];
    BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel5 = t4657->mX.mX[904UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly6_Module_1_1_AmbientResistor_Q = t4657->mX.mX[912UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1563UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[912UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int6 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly6_Module_1_1_Cell_1_electricalMod0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int452 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly6_Module_1_1_Cell_1_electricalMod0 > zc_int452 ? zc_int452 : BatteryPack_v2_ModuleAssembly6_Module_1_1_Cell_1_electricalMod0;
    }
    BatteryPack_v2_ModuleAssembly6_Module_1_1_Cell_1_electricalMod0 = zc_int6 > t2154[0UL] ? zc_int6 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int452 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly6_Module_1_1_numCyclesCell = t2154[0UL] * t4657->mX.mX[1562UL];
    t3885 = t4657->mX.mX[912UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module02_AmbientResistor_Q = t4657->mX.mX[920UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1567UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[920UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int661 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3888 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_115 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3888 > intrm_sf_mf_115 ? intrm_sf_mf_115 : t3888;
    }
    t3888 = zc_int661 > t2154[0UL] ? zc_int661 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_115 = t2154[0UL];
    t3892 = t2154[0UL] * t4657->mX.mX[1566UL];
    BatteryPack_v2_ModuleAssembly_23_Module02_Cell_1_thermalModel_Q = t4657->mX.mX[920UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module03_AmbientResistor_Q = t4657->mX.mX[928UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1571UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[928UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int576 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly_23_Module03_Cell_1_electricalMod0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3894 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly_23_Module03_Cell_1_electricalMod0 > t3894 ? t3894 : BatteryPack_v2_ModuleAssembly_23_Module03_Cell_1_electricalMod0;
    }
    BatteryPack_v2_ModuleAssembly_23_Module03_Cell_1_electricalMod0 = zc_int576 > t2154[0UL] ? zc_int576 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3894 = t2154[0UL];
    t3897 = t2154[0UL] * t4657->mX.mX[1570UL];
    t3895 = t4657->mX.mX[928UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module04_AmbientResistor_Q = t4657->mX.mX[936UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1575UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[936UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int579 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3898 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int586 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3898 > zc_int586 ? zc_int586 : t3898;
    }
    t3898 = zc_int579 > t2154[0UL] ? zc_int579 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t125.mField0[0UL], &t125.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int586 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module04_numCyclesCell = t2154[0UL] * t4657->mX.mX[1574UL];
    BatteryPack_v2_ModuleAssembly_23_Module04_Cell_1_electricalMod5 = t4657->mX.mX[936UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module05_AmbientResistor_Q = t4657->mX.mX[944UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1579UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[944UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3903 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int588 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3903 > zc_int588 ? zc_int588 : t3903;
    }
    t3903 = BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t214.mField0[0UL], &t214.mField2[0UL], &t162.mField0[0UL], &t162.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int588 = t2154[0UL];
    t3907 = t2154[0UL] * t4657->mX.mX[1578UL];
    t3905 = t4657->mX.mX[944UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module06_AmbientResistor_Q = t4657->mX.mX[952UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1583UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[952UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int595 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3908 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int598 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3908 > zc_int598 ? zc_int598 : t3908;
    }
    t3908 = zc_int595 > t2154[0UL] ? zc_int595 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t153.mField0[0UL], &t153.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int598 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module06_numCyclesCell = t2154[0UL] * t4657->mX.mX[1582UL];
    t3910 = t4657->mX.mX[952UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module07_AmbientResistor_Q = t4657->mX.mX[960UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1587UL];
    tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL], &t19.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[960UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int601 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3913 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int600 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3913 > zc_int600 ? zc_int600 : t3913;
    }
    t3913 = zc_int601 > t2154[0UL] ? zc_int601 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t19.mField0[0UL], &t19.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int600 = t2154[0UL];
    t3917 = t2154[0UL] * t4657->mX.mX[1586UL];
    BatteryPack_v2_ModuleAssembly_23_Module07_Cell_1_thermalModel_Q = t4657->mX.mX[960UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module08_AmbientResistor_Q = t4657->mX.mX[968UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1591UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[968UL];
    tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL], &t214.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int607 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly_23_Module08_Cell_1_electricalMod0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int606 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly_23_Module08_Cell_1_electricalMod0 > zc_int606 ? zc_int606 : BatteryPack_v2_ModuleAssembly_23_Module08_Cell_1_electricalMod0;
    }
    BatteryPack_v2_ModuleAssembly_23_Module08_Cell_1_electricalMod0 = zc_int607 > t2154[0UL] ? zc_int607 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t214.mField0[0UL], &t214.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int606 = t2154[0UL];
    t3922 = t2154[0UL] * t4657->mX.mX[1590UL];
    t3920 = t4657->mX.mX[968UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module09_AmbientResistor_Q = t4657->mX.mX[976UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1595UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[976UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3923 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int612 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3923 > zc_int612 ? zc_int612 : t3923;
    }
    t3923 = BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t61.mField0[0UL], &t61.mField2[0UL], &t21.mField0[0UL], &t21.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int612 = t2154[0UL];
    t3927 = t2154[0UL] * t4657->mX.mX[1594UL];
    BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod5 = t4657->mX.mX[976UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module10_AmbientResistor_Q = t4657->mX.mX[984UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1599UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[984UL];
    tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL], &t61.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int615 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly_23_Module10_Cell_1_electricalMod0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int618 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly_23_Module10_Cell_1_electricalMod0 > zc_int618 ? zc_int618 : BatteryPack_v2_ModuleAssembly_23_Module10_Cell_1_electricalMod0;
    }
    BatteryPack_v2_ModuleAssembly_23_Module10_Cell_1_electricalMod0 = zc_int615 > t2154[0UL] ? zc_int615 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t61.mField0[0UL], &t61.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int618 = t2154[0UL];
    t3932 = t2154[0UL] * t4657->mX.mX[1598UL];
    t3930 = t4657->mX.mX[984UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module11_AmbientResistor_Q = t4657->mX.mX[992UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1603UL];
    tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL], &t162.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[992UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int625 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly_23_Module11_Cell_1_electricalMod0 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int628 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly_23_Module11_Cell_1_electricalMod0 > zc_int628 ? zc_int628 : BatteryPack_v2_ModuleAssembly_23_Module11_Cell_1_electricalMod0;
    }
    BatteryPack_v2_ModuleAssembly_23_Module11_Cell_1_electricalMod0 = zc_int625 > t2154[0UL] ? zc_int625 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t162.mField0[0UL], &t162.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int628 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module11_numCyclesCell = t2154[0UL] * t4657->mX.mX[1602UL];
    BatteryPack_v2_ModuleAssembly_23_Module11_Cell_1_electricalMod5 = t4657->mX.mX[992UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module12_AmbientResistor_Q = t4657->mX.mX[1000UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1607UL];
    tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL], &t21.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[1000UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int631 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly_23_Module12_Cell_1_electricalMod0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3939 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly_23_Module12_Cell_1_electricalMod0 > t3939 ? t3939 : BatteryPack_v2_ModuleAssembly_23_Module12_Cell_1_electricalMod0;
    }
    BatteryPack_v2_ModuleAssembly_23_Module12_Cell_1_electricalMod0 = zc_int631 > t2154[0UL] ? zc_int631 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t21.mField0[0UL], &t21.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3939 = t2154[0UL];
    t3942 = t2154[0UL] * t4657->mX.mX[1606UL];
    BatteryPack_v2_ModuleAssembly_23_Module12_Cell_1_electricalMod5 = t4657->mX.mX[1000UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module13_AmbientResistor_Q = t4657->mX.mX[1008UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1611UL];
    tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL], &t125.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[1008UL];
    tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL], &t140.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3943 = t2154[t2972 > 0UL ? 0UL : t2972];
        intrm_sf_mf_126 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3943 > intrm_sf_mf_126 ? intrm_sf_mf_126 : t3943;
    }
    t3943 = BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t125.mField0[0UL], &t125.mField2[0UL], &t140.mField0[0UL], &t140.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    intrm_sf_mf_126 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module13_numCyclesCell = t2154[0UL] * t4657->mX.mX[1610UL];
    BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_thermalModel_Q = t4657->mX.mX[1008UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module14_AmbientResistor_Q = t4657->mX.mX[1016UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1615UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[1016UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int639 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly_23_Module14_Cell_1_electricalMod0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3949 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly_23_Module14_Cell_1_electricalMod0 > t3949 ? t3949 : BatteryPack_v2_ModuleAssembly_23_Module14_Cell_1_electricalMod0;
    }
    BatteryPack_v2_ModuleAssembly_23_Module14_Cell_1_electricalMod0 = zc_int639 > t2154[0UL] ? zc_int639 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3949 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module14_numCyclesCell = t2154[0UL] * t4657->mX.mX[1614UL];
    BatteryPack_v2_ModuleAssembly_23_Module14_Cell_1_thermalModel_Q = t4657->mX.mX[1016UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module15_AmbientResistor_Q = t4657->mX.mX[1024UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1619UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[1024UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int641 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly_23_Module15_Cell_1_electricalMod0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3954 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly_23_Module15_Cell_1_electricalMod0 > t3954 ? t3954 : BatteryPack_v2_ModuleAssembly_23_Module15_Cell_1_electricalMod0;
    }
    BatteryPack_v2_ModuleAssembly_23_Module15_Cell_1_electricalMod0 = zc_int641 > t2154[0UL] ? zc_int641 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3954 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module15_numCyclesCell = t2154[0UL] * t4657->mX.mX[1618UL];
    BatteryPack_v2_ModuleAssembly_23_Module15_Cell_1_thermalModel_Q = t4657->mX.mX[1024UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module16_AmbientResistor_Q = t4657->mX.mX[1032UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1623UL];
    tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL], &t96.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[1032UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int643 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3958 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3959 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3958 > t3959 ? t3959 : t3958;
    }
    t3958 = zc_int643 > t2154[0UL] ? zc_int643 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t96.mField0[0UL], &t96.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3959 = t2154[0UL];
    t3962 = t2154[0UL] * t4657->mX.mX[1622UL];
    BatteryPack_v2_ModuleAssembly_23_Module16_Cell_1_thermalModel_Q = t4657->mX.mX[1032UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module17_AmbientResistor_Q = t4657->mX.mX[1040UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1627UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[1040UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3963 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int646 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3963 > zc_int646 ? zc_int646 : t3963;
    }
    t3963 = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int646 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module17_numCyclesCell = t2154[0UL] * t4657->mX.mX[1626UL];
    t3965 = t4657->mX.mX[1040UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module18_AmbientResistor_Q = t4657->mX.mX[1048UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1631UL];
    tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL], &t153.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[1048UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3968 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3969 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3968 > t3969 ? t3969 : t3968;
    }
    t3968 = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t153.mField0[0UL], &t153.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3969 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module18_numCyclesCell = t2154[0UL] * t4657->mX.mX[1630UL];
    t3970 = t4657->mX.mX[1048UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module19_AmbientResistor_Q = t4657->mX.mX[1056UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1635UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[1056UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3973 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int650 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3973 > zc_int650 ? zc_int650 : t3973;
    }
    t3973 = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t217.mField0[0UL], &t217.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int650 = t2154[0UL];
    t3977 = t2154[0UL] * t4657->mX.mX[1634UL];
    BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_thermalModel_Q = t4657->mX.mX[1056UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module20_AmbientResistor_Q = t4657->mX.mX[1064UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1639UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[1064UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int651 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3978 = t2154[t2972 > 0UL ? 0UL : t2972];
        zc_int652 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3978 > zc_int652 ? zc_int652 : t3978;
    }
    t3978 = zc_int651 > t2154[0UL] ? zc_int651 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int652 = t2154[0UL];
    t3982 = t2154[0UL] * t4657->mX.mX[1638UL];
    BatteryPack_v2_ModuleAssembly_23_Module20_Cell_1_thermalModel_Q = t4657->mX.mX[1064UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module21_AmbientResistor_Q = t4657->mX.mX[1072UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1643UL];
    tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL], &t222.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[1072UL];
    tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL], &t217.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int653 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly_23_Module21_Cell_1_electricalMod0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3984 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly_23_Module21_Cell_1_electricalMod0 > t3984 ? t3984 : BatteryPack_v2_ModuleAssembly_23_Module21_Cell_1_electricalMod0;
    }
    BatteryPack_v2_ModuleAssembly_23_Module21_Cell_1_electricalMod0 = zc_int653 > t2154[0UL] ? zc_int653 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t222.mField0[0UL], &t222.mField2[0UL], &t217.mField0[0UL], &t217.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3984 = t2154[0UL];
    BatteryPack_v2_ModuleAssembly_23_Module21_numCyclesCell = t2154[0UL] * t4657->mX.mX[1642UL];
    BatteryPack_v2_ModuleAssembly_23_Module21_Cell_1_thermalModel_Q = t4657->mX.mX[1072UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module22_AmbientResistor_Q = t4657->mX.mX[1080UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1647UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[1080UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    zc_int655 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        BatteryPack_v2_ModuleAssembly_23_Module22_Cell_1_electricalMod0 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3989 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = BatteryPack_v2_ModuleAssembly_23_Module22_Cell_1_electricalMod0 > t3989 ? t3989 : BatteryPack_v2_ModuleAssembly_23_Module22_Cell_1_electricalMod0;
    }
    BatteryPack_v2_ModuleAssembly_23_Module22_Cell_1_electricalMod0 = zc_int655 > t2154[0UL] ? zc_int655 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    t3989 = t2154[0UL];
    t3992 = t2154[0UL] * t4657->mX.mX[1646UL];
    BatteryPack_v2_ModuleAssembly_23_Module22_Cell_1_electricalMod5 = t4657->mX.mX[1080UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module23_AmbientResistor_Q = t4657->mX.mX[1088UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1651UL];
    tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL], &t186.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[1088UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3 = t2154[0UL];
    t2154[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3993 = t2154[t2972 > 0UL ? 0UL : t2972];
        t3994 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t2154[t2972 > 0UL ? 0UL : t2972] = t3993 > t3994 ? t3994 : t3993;
    }
    t3993 = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3 > t2154[0UL] ? BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3 : t2154[0UL];
    tlu2_2d_linear_nearest_value(&t2154[0UL], &t186.mField0[0UL], &t186.mField2[0UL], &t161.mField0[0UL], &t161.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module23_numCyclesCell = t2154[0UL] * t4657->mX.mX[1650UL];
    BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_thermalModel_Q = t4657->mX.mX[1088UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    BatteryPack_v2_ModuleAssembly_23_Module_1_1_AmbientResistor_Q = t4657->mX.mX[1096UL] * 4.0E-5 + t4657->mX.mX[1104UL] * -4.0E-5;
    t1488[0UL] = t4657->mX.mX[1655UL];
    tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL], &t161.mField2[0UL], &nonscalar1[0UL], &t1488[0UL], &t2380[0UL], &t278[0UL]);
    t1488[0UL] = t4657->mX.mX[1096UL];
    tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL], &t187.mField2[0UL], &nonscalar2[0UL], &t1488[0UL], &t280[0UL], &t278[0UL]);
    tlu2_2d_linear_nearest_value(&t1488[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField0, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3 = t1488[0UL];
    t1488[0UL] = pmf_get_inf();
    for (t2499 = 0UL; t2499 < 21UL; t2499++) {
        t2972 = t2499 / 21UL;
        t3998 = t1488[t2972 > 0UL ? 0UL : t2972];
        zc_int457 = ((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5;
        t1488[t2972 > 0UL ? 0UL : t2972] = t3998 > zc_int457 ? zc_int457 : t3998;
    }
    t3998 = BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3 > t1488[0UL] ? BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3 : t1488[0UL];
    tlu2_2d_linear_nearest_value(&t1488[0UL], &t161.mField0[0UL], &t161.mField2[0UL], &t187.mField0[0UL], &t187.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t2380[0UL], &t280[0UL], &t278[0UL]);
    BatteryPack_v2_ModuleAssembly_23_Module_1_1_numCyclesCell = t1488[0UL] * t4657->mX.mX[1654UL];
    BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_thermalModel = t4657->mX.mX[1096UL] * -4.0E-5 + t4657->mX.mX[1104UL] * 4.0E-5;
    if (t4657->mM.mX[0UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int457 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int457 = BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[1UL] != 0) {
        BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3 = t4657->mX.mX[1110UL] * zc_int10;
    }
    if (t4657->mM.mX[771UL] != 0) {
        zc_int10 = 8.200000000000002E-8;
    } else {
        zc_int10 = t4657->mX.mX[1122UL] * intrm_sf_mf_4;
    }
    if (t4657->mM.mX[738UL] != 0) {
        intrm_sf_mf_4 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_4 = t4657->mX.mX[1242UL] * zc_int99;
    }
    if (t4657->mM.mX[727UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int99 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int99 = zc_int102;
    }
    intrm_sf_mf_4 = (((((t4657->mU.mX[0UL] * intrm_sf_mf_4 + t4657->mX.mX[275UL]) + t4657->mX.mX[276UL]) + t4657->mX.mX[277UL]) + t4657->mX.mX[278UL]) + t4657->mX.mX[279UL]) + zc_int99;
    if (t4657->mM.mX[749UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int102 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int102 = BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[760UL] != 0) {
        zc_int99 = 8.200000000000002E-8;
    } else {
        zc_int99 = t4657->mX.mX[1246UL] * t3489;
    }
    zc_int102 += ((((t4657->mU.mX[0UL] * zc_int99 + t4657->mX.mX[283UL]) + t4657->mX.mX[284UL]) + t4657->mX.mX[285UL]) + t4657->mX.mX[286UL]) + t4657->mX.mX[287UL];
    if (t4657->mM.mX[772UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int99 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int99 = BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[783UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 = t4657->mX.mX[1250UL] * t3494;
    }
    zc_int99 += ((((t4657->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 + t4657->mX.mX[291UL]) + t4657->mX.mX[292UL]) + t4657->mX.mX[293UL]) + t4657->mX.mX[294UL]) + t4657->mX.mX[295UL];
    if (t4657->mM.mX[794UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 = zc_int121;
    }
    if (t4657->mM.mX[805UL] != 0) {
        t3489 = 8.200000000000002E-8;
    } else {
        t3489 = t4657->mX.mX[1254UL] * t3499;
    }
    if (t4657->mM.mX[660UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 = zc_int110;
    }
    zc_int10 = (((((t4657->mU.mX[0UL] * zc_int10 + t4657->mX.mX[35UL]) + t4657->mX.mX[36UL]) + t4657->mX.mX[37UL]) + t4657->mX.mX[38UL]) + t4657->mX.mX[39UL]) + BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3;
    zc_int110 = (((((t4657->mU.mX[0UL] * t3489 + t4657->mX.mX[299UL]) + t4657->mX.mX[300UL]) + t4657->mX.mX[301UL]) + t4657->mX.mX[302UL]) + t4657->mX.mX[303UL]) + BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3;
    if (t4657->mM.mX[816UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 = zc_int134;
    }
    if (t4657->mM.mX[827UL] != 0) {
        t3489 = 8.200000000000002E-8;
    } else {
        t3489 = t4657->mX.mX[1258UL] * t3504;
    }
    BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 += ((((t4657->mU.mX[0UL] * t3489 + t4657->mX.mX[307UL]) + t4657->mX.mX[308UL]) + t4657->mX.mX[309UL]) + t4657->mX.mX[310UL]) + t4657->mX.mX[311UL];
    if (t4657->mM.mX[838UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        t3489 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        t3489 = zc_int133;
    }
    if (t4657->mM.mX[849UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 = t4657->mX.mX[1262UL] * intrm_sf_mf_39;
    }
    t3489 += ((((t4657->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 + t4657->mX.mX[315UL]) + t4657->mX.mX[316UL]) + t4657->mX.mX[317UL]) + t4657->mX.mX[318UL]) + t4657->mX.mX[319UL];
    if (t4657->mM.mX[860UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 = zc_int146;
    }
    if (t4657->mM.mX[871UL] != 0) {
        t3494 = 8.200000000000002E-8;
    } else {
        t3494 = t4657->mX.mX[1266UL] * zc_int147;
    }
    BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 += ((((t4657->mU.mX[0UL] * t3494 + t4657->mX.mX[323UL]) + t4657->mX.mX[324UL]) + t4657->mX.mX[325UL]) + t4657->mX.mX[326UL]) + t4657->mX.mX[327UL];
    if (t4657->mM.mX[882UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        t3494 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        t3494 = zc_int120;
    }
    if (t4657->mM.mX[883UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int120 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int120 = zc_int148;
    }
    if (t4657->mM.mX[894UL] != 0) {
        zc_int121 = 8.200000000000002E-8;
    } else {
        zc_int121 = t4657->mX.mX[1270UL] * zc_int155;
    }
    zc_int120 += ((((t4657->mU.mX[0UL] * zc_int121 + t4657->mX.mX[331UL]) + t4657->mX.mX[332UL]) + t4657->mX.mX[333UL]) + t4657->mX.mX[334UL]) + t4657->mX.mX[335UL];
    if (t4657->mM.mX[905UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int121 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int121 = zc_int154;
    }
    if (t4657->mM.mX[916UL] != 0) {
        t3499 = 8.200000000000002E-8;
    } else {
        t3499 = t4657->mX.mX[1274UL] * zc_int164;
    }
    zc_int121 += ((((t4657->mU.mX[0UL] * t3499 + t4657->mX.mX[339UL]) + t4657->mX.mX[340UL]) + t4657->mX.mX[341UL]) + t4657->mX.mX[342UL]) + t4657->mX.mX[343UL];
    if (t4657->mM.mX[927UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        t3499 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        t3499 = BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[938UL] != 0) {
        zc_int134 = 8.200000000000002E-8;
    } else {
        zc_int134 = t4657->mX.mX[1278UL] * intrm_sf_mf_43;
    }
    t3499 += ((((t4657->mU.mX[0UL] * zc_int134 + t4657->mX.mX[347UL]) + t4657->mX.mX[348UL]) + t4657->mX.mX[349UL]) + t4657->mX.mX[350UL]) + t4657->mX.mX[351UL];
    if (t4657->mM.mX[949UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int134 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int134 = zc_int171;
    }
    if (t4657->mM.mX[993UL] != 0) {
        t3504 = 8.200000000000002E-8;
    } else {
        t3504 = t4657->mX.mX[1126UL] * intrm_sf_mf_5;
    }
    if (t4657->mM.mX[960UL] != 0) {
        intrm_sf_mf_5 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_5 = t4657->mX.mX[1282UL] * intrm_sf_mf_44;
    }
    intrm_sf_mf_5 = (((((t4657->mU.mX[0UL] * intrm_sf_mf_5 + t4657->mX.mX[355UL]) + t4657->mX.mX[356UL]) + t4657->mX.mX[357UL]) + t4657->mX.mX[358UL]) + t4657->mX.mX[359UL]) + zc_int134;
    if (t4657->mM.mX[971UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int134 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int134 = zc_int324;
    }
    if (t4657->mM.mX[982UL] != 0) {
        zc_int133 = 8.200000000000002E-8;
    } else {
        zc_int133 = t4657->mX.mX[1378UL] * t3654;
    }
    zc_int134 += ((((t4657->mU.mX[0UL] * zc_int133 + t4657->mX.mX[547UL]) + t4657->mX.mX[548UL]) + t4657->mX.mX[549UL]) + t4657->mX.mX[550UL]) + t4657->mX.mX[551UL];
    if (t4657->mM.mX[994UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int133 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int133 = zc_int177;
    }
    if (t4657->mM.mX[1005UL] != 0) {
        intrm_sf_mf_39 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_39 = t4657->mX.mX[1290UL] * zc_int178;
    }
    zc_int133 += ((((t4657->mU.mX[0UL] * intrm_sf_mf_39 + t4657->mX.mX[371UL]) + t4657->mX.mX[372UL]) + t4657->mX.mX[373UL]) + t4657->mX.mX[374UL]) + t4657->mX.mX[375UL];
    if (t4657->mM.mX[1016UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        intrm_sf_mf_39 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_39 = zc_int183;
    }
    if (t4657->mM.mX[1027UL] != 0) {
        zc_int146 = 8.200000000000002E-8;
    } else {
        zc_int146 = t4657->mX.mX[1294UL] * t3549;
    }
    t3494 += ((((t4657->mU.mX[0UL] * t3504 + t4657->mX.mX[43UL]) + t4657->mX.mX[44UL]) + t4657->mX.mX[45UL]) + t4657->mX.mX[46UL]) + t4657->mX.mX[47UL];
    t3504 = (((((t4657->mU.mX[0UL] * zc_int146 + t4657->mX.mX[379UL]) + t4657->mX.mX[380UL]) + t4657->mX.mX[381UL]) + t4657->mX.mX[382UL]) + t4657->mX.mX[383UL]) + intrm_sf_mf_39;
    if (t4657->mM.mX[1038UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        intrm_sf_mf_39 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_39 = zc_int192;
    }
    if (t4657->mM.mX[1049UL] != 0) {
        zc_int146 = 8.200000000000002E-8;
    } else {
        zc_int146 = t4657->mX.mX[1298UL] * t3554;
    }
    intrm_sf_mf_39 += ((((t4657->mU.mX[0UL] * zc_int146 + t4657->mX.mX[387UL]) + t4657->mX.mX[388UL]) + t4657->mX.mX[389UL]) + t4657->mX.mX[390UL]) + t4657->mX.mX[391UL];
    if (t4657->mM.mX[1060UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int146 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int146 = zc_int195;
    }
    if (t4657->mM.mX[1071UL] != 0) {
        zc_int147 = 8.200000000000002E-8;
    } else {
        zc_int147 = t4657->mX.mX[1302UL] * t3559;
    }
    zc_int146 += ((((t4657->mU.mX[0UL] * zc_int147 + t4657->mX.mX[395UL]) + t4657->mX.mX[396UL]) + t4657->mX.mX[397UL]) + t4657->mX.mX[398UL]) + t4657->mX.mX[399UL];
    if (t4657->mM.mX[1082UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int147 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int147 = zc_int202;
    }
    if (t4657->mM.mX[1093UL] != 0) {
        zc_int148 = 8.200000000000002E-8;
    } else {
        zc_int148 = t4657->mX.mX[1306UL] * t3564;
    }
    zc_int147 += ((((t4657->mU.mX[0UL] * zc_int148 + t4657->mX.mX[403UL]) + t4657->mX.mX[404UL]) + t4657->mX.mX[405UL]) + t4657->mX.mX[406UL]) + t4657->mX.mX[407UL];
    if (t4657->mM.mX[2UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int148 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int148 = BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[3UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3 = zc_int208;
    }
    if (t4657->mM.mX[14UL] != 0) {
        zc_int155 = 8.200000000000002E-8;
    } else {
        zc_int155 = t4657->mX.mX[1310UL] * t3569;
    }
    BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3 += ((((t4657->mU.mX[0UL] * zc_int155 + t4657->mX.mX[411UL]) + t4657->mX.mX[412UL]) + t4657->mX.mX[413UL]) + t4657->mX.mX[414UL]) + t4657->mX.mX[415UL];
    if (t4657->mM.mX[25UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int155 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int155 = zc_int218;
    }
    if (t4657->mM.mX[36UL] != 0) {
        zc_int154 = 8.200000000000002E-8;
    } else {
        zc_int154 = t4657->mX.mX[1314UL] * intrm_sf_mf_52;
    }
    zc_int155 += ((((t4657->mU.mX[0UL] * zc_int154 + t4657->mX.mX[419UL]) + t4657->mX.mX[420UL]) + t4657->mX.mX[421UL]) + t4657->mX.mX[422UL]) + t4657->mX.mX[423UL];
    if (t4657->mM.mX[47UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int154 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int154 = zc_int22;
    }
    if (t4657->mM.mX[58UL] != 0) {
        zc_int164 = 8.200000000000002E-8;
    } else {
        zc_int164 = t4657->mX.mX[1318UL] * zc_int225;
    }
    zc_int154 += ((((t4657->mU.mX[0UL] * zc_int164 + t4657->mX.mX[427UL]) + t4657->mX.mX[428UL]) + t4657->mX.mX[429UL]) + t4657->mX.mX[430UL]) + t4657->mX.mX[431UL];
    if (t4657->mM.mX[69UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int164 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int164 = BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[113UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3 = t4657->mX.mX[1130UL] * zc_int161;
    }
    if (t4657->mM.mX[80UL] != 0) {
        zc_int161 = 8.200000000000002E-8;
    } else {
        zc_int161 = t4657->mX.mX[1322UL] * t3584;
    }
    zc_int161 = (((((t4657->mU.mX[0UL] * zc_int161 + t4657->mX.mX[435UL]) + t4657->mX.mX[436UL]) + t4657->mX.mX[437UL]) + t4657->mX.mX[438UL]) + t4657->mX.mX[439UL]) + zc_int164;
    if (t4657->mM.mX[91UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int164 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int164 = BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[102UL] != 0) {
        intrm_sf_mf_43 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_43 = t4657->mX.mX[1326UL] * zc_int24;
    }
    zc_int164 += ((((t4657->mU.mX[0UL] * intrm_sf_mf_43 + t4657->mX.mX[443UL]) + t4657->mX.mX[444UL]) + t4657->mX.mX[445UL]) + t4657->mX.mX[446UL]) + t4657->mX.mX[447UL];
    if (t4657->mM.mX[114UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        intrm_sf_mf_43 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_43 = zc_int243;
    }
    if (t4657->mM.mX[119UL] != 0) {
        zc_int171 = 8.200000000000002E-8;
    } else {
        zc_int171 = t4657->mX.mX[1330UL] * zc_int248;
    }
    intrm_sf_mf_43 += ((((t4657->mU.mX[0UL] * zc_int171 + t4657->mX.mX[451UL]) + t4657->mX.mX[452UL]) + t4657->mX.mX[453UL]) + t4657->mX.mX[454UL]) + t4657->mX.mX[455UL];
    if (t4657->mM.mX[120UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int171 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int171 = zc_int247;
    }
    if (t4657->mM.mX[121UL] != 0) {
        intrm_sf_mf_44 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_44 = t4657->mX.mX[1334UL] * intrm_sf_mf_57;
    }
    zc_int148 += ((((t4657->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3 + t4657->mX.mX[51UL]) + t4657->mX.mX[52UL]) + t4657->mX.mX[53UL]) + t4657->mX.mX[54UL]) + t4657->mX.mX[55UL];
    BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3 = (((((t4657->mU.mX[0UL] * intrm_sf_mf_44 + t4657->mX.mX[459UL]) + t4657->mX.mX[460UL]) + t4657->mX.mX[461UL]) + t4657->mX.mX[462UL]) + t4657->mX.mX[463UL]) + zc_int171;
    if (t4657->mM.mX[122UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int171 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int171 = zc_int253;
    }
    if (t4657->mM.mX[123UL] != 0) {
        intrm_sf_mf_44 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_44 = t4657->mX.mX[1338UL] * zc_int258;
    }
    zc_int171 += ((((t4657->mU.mX[0UL] * intrm_sf_mf_44 + t4657->mX.mX[467UL]) + t4657->mX.mX[468UL]) + t4657->mX.mX[469UL]) + t4657->mX.mX[470UL]) + t4657->mX.mX[471UL];
    if (t4657->mM.mX[124UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        intrm_sf_mf_44 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_44 = zc_int262;
    }
    if (t4657->mM.mX[125UL] != 0) {
        zc_int177 = 8.200000000000002E-8;
    } else {
        zc_int177 = t4657->mX.mX[1342UL] * t3609;
    }
    intrm_sf_mf_44 += ((((t4657->mU.mX[0UL] * zc_int177 + t4657->mX.mX[475UL]) + t4657->mX.mX[476UL]) + t4657->mX.mX[477UL]) + t4657->mX.mX[478UL]) + t4657->mX.mX[479UL];
    if (t4657->mM.mX[126UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int177 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int177 = BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[127UL] != 0) {
        zc_int178 = 8.200000000000002E-8;
    } else {
        zc_int178 = t4657->mX.mX[1346UL] * t3614;
    }
    zc_int177 += ((((t4657->mU.mX[0UL] * zc_int178 + t4657->mX.mX[483UL]) + t4657->mX.mX[484UL]) + t4657->mX.mX[485UL]) + t4657->mX.mX[486UL]) + t4657->mX.mX[487UL];
    if (t4657->mM.mX[128UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int178 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int178 = BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[129UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3 = zc_int276;
    }
    if (t4657->mM.mX[130UL] != 0) {
        zc_int183 = 8.200000000000002E-8;
    } else {
        zc_int183 = t4657->mX.mX[1350UL] * zc_int279;
    }
    BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3 += ((((t4657->mU.mX[0UL] * zc_int183 + t4657->mX.mX[491UL]) + t4657->mX.mX[492UL]) + t4657->mX.mX[493UL]) + t4657->mX.mX[494UL]) + t4657->mX.mX[495UL];
    if (t4657->mM.mX[131UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int183 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int183 = zc_int290;
    }
    if (t4657->mM.mX[132UL] != 0) {
        t3549 = 8.200000000000002E-8;
    } else {
        t3549 = t4657->mX.mX[1354UL] * zc_int283;
    }
    zc_int183 += ((((t4657->mU.mX[0UL] * t3549 + t4657->mX.mX[499UL]) + t4657->mX.mX[500UL]) + t4657->mX.mX[501UL]) + t4657->mX.mX[502UL]) + t4657->mX.mX[503UL];
    if (t4657->mM.mX[133UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        t3549 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        t3549 = zc_int293;
    }
    if (t4657->mM.mX[134UL] != 0) {
        zc_int192 = 8.200000000000002E-8;
    } else {
        zc_int192 = t4657->mX.mX[1358UL] * zc_int289;
    }
    t3549 += ((((t4657->mU.mX[0UL] * zc_int192 + t4657->mX.mX[507UL]) + t4657->mX.mX[508UL]) + t4657->mX.mX[509UL]) + t4657->mX.mX[510UL]) + t4657->mX.mX[511UL];
    if (t4657->mM.mX[135UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int192 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int192 = zc_int299;
    }
    if (t4657->mM.mX[139UL] != 0) {
        t3554 = 8.200000000000002E-8;
    } else {
        t3554 = t4657->mX.mX[1134UL] * intrm_sf_mf_7;
    }
    if (t4657->mM.mX[136UL] != 0) {
        intrm_sf_mf_7 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_7 = t4657->mX.mX[1362UL] * zc_int3;
    }
    intrm_sf_mf_7 = (((((t4657->mU.mX[0UL] * intrm_sf_mf_7 + t4657->mX.mX[515UL]) + t4657->mX.mX[516UL]) + t4657->mX.mX[517UL]) + t4657->mX.mX[518UL]) + t4657->mX.mX[519UL]) + zc_int192;
    if (t4657->mM.mX[137UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int192 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int192 = zc_int301;
    }
    if (t4657->mM.mX[138UL] != 0) {
        zc_int195 = 8.200000000000002E-8;
    } else {
        zc_int195 = t4657->mX.mX[1366UL] * zc_int304;
    }
    zc_int192 += ((((t4657->mU.mX[0UL] * zc_int195 + t4657->mX.mX[523UL]) + t4657->mX.mX[524UL]) + t4657->mX.mX[525UL]) + t4657->mX.mX[526UL]) + t4657->mX.mX[527UL];
    if (t4657->mM.mX[140UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int195 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int195 = zc_int314;
    }
    if (t4657->mM.mX[141UL] != 0) {
        t3559 = 8.200000000000002E-8;
    } else {
        t3559 = t4657->mX.mX[1370UL] * zc_int320;
    }
    zc_int195 += ((((t4657->mU.mX[0UL] * t3559 + t4657->mX.mX[531UL]) + t4657->mX.mX[532UL]) + t4657->mX.mX[533UL]) + t4657->mX.mX[534UL]) + t4657->mX.mX[535UL];
    if (t4657->mM.mX[142UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        t3559 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        t3559 = BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[143UL] != 0) {
        zc_int202 = 8.200000000000002E-8;
    } else {
        zc_int202 = t4657->mX.mX[1374UL] * intrm_sf_mf_67;
    }
    BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3 = (((((t4657->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3 + t4657->mX.mX[11UL]) + t4657->mX.mX[12UL]) + t4657->mX.mX[13UL]) + t4657->mX.mX[14UL]) + t4657->mX.mX[15UL]) + zc_int457;
    zc_int178 += ((((t4657->mU.mX[0UL] * t3554 + t4657->mX.mX[59UL]) + t4657->mX.mX[60UL]) + t4657->mX.mX[61UL]) + t4657->mX.mX[62UL]) + t4657->mX.mX[63UL];
    t3554 = (((((t4657->mU.mX[0UL] * zc_int202 + t4657->mX.mX[539UL]) + t4657->mX.mX[540UL]) + t4657->mX.mX[541UL]) + t4657->mX.mX[542UL]) + t4657->mX.mX[543UL]) + t3559;
    if (t4657->mM.mX[144UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        t3559 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        t3559 = zc_int383;
    }
    if (t4657->mM.mX[145UL] != 0) {
        zc_int202 = 8.200000000000002E-8;
    } else {
        zc_int202 = t4657->mX.mX[1470UL] * t3769;
    }
    t3559 += ((((t4657->mU.mX[0UL] * zc_int202 + t4657->mX.mX[731UL]) + t4657->mX.mX[732UL]) + t4657->mX.mX[733UL]) + t4657->mX.mX[734UL]) + t4657->mX.mX[735UL];
    if (t4657->mM.mX[146UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int202 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int202 = zc_int35;
    }
    if (t4657->mM.mX[147UL] != 0) {
        t3564 = 8.200000000000002E-8;
    } else {
        t3564 = t4657->mX.mX[1382UL] * intrm_sf_mf_69;
    }
    zc_int202 += ((((t4657->mU.mX[0UL] * t3564 + t4657->mX.mX[555UL]) + t4657->mX.mX[556UL]) + t4657->mX.mX[557UL]) + t4657->mX.mX[558UL]) + t4657->mX.mX[559UL];
    if (t4657->mM.mX[148UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        t3564 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        t3564 = zc_int334;
    }
    if (t4657->mM.mX[149UL] != 0) {
        zc_int208 = 8.200000000000002E-8;
    } else {
        zc_int208 = t4657->mX.mX[1386UL] * t3664;
    }
    t3564 += ((((t4657->mU.mX[0UL] * zc_int208 + t4657->mX.mX[563UL]) + t4657->mX.mX[564UL]) + t4657->mX.mX[565UL]) + t4657->mX.mX[566UL]) + t4657->mX.mX[567UL];
    if (t4657->mM.mX[150UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int208 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int208 = zc_int212;
    }
    if (t4657->mM.mX[151UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int212 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int212 = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[152UL] != 0) {
        t3569 = 8.200000000000002E-8;
    } else {
        t3569 = t4657->mX.mX[1390UL] * t3669;
    }
    zc_int212 += ((((t4657->mU.mX[0UL] * t3569 + t4657->mX.mX[571UL]) + t4657->mX.mX[572UL]) + t4657->mX.mX[573UL]) + t4657->mX.mX[574UL]) + t4657->mX.mX[575UL];
    if (t4657->mM.mX[153UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        t3569 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        t3569 = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[154UL] != 0) {
        zc_int218 = 8.200000000000002E-8;
    } else {
        zc_int218 = t4657->mX.mX[1394UL] * intrm_sf_mf_72;
    }
    t3569 += ((((t4657->mU.mX[0UL] * zc_int218 + t4657->mX.mX[579UL]) + t4657->mX.mX[580UL]) + t4657->mX.mX[581UL]) + t4657->mX.mX[582UL]) + t4657->mX.mX[583UL];
    if (t4657->mM.mX[155UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int218 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int218 = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[156UL] != 0) {
        intrm_sf_mf_52 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_52 = t4657->mX.mX[1398UL] * intrm_sf_mf_73;
    }
    zc_int218 += ((((t4657->mU.mX[0UL] * intrm_sf_mf_52 + t4657->mX.mX[587UL]) + t4657->mX.mX[588UL]) + t4657->mX.mX[589UL]) + t4657->mX.mX[590UL]) + t4657->mX.mX[591UL];
    if (t4657->mM.mX[157UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        intrm_sf_mf_52 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_52 = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[161UL] != 0) {
        zc_int22 = 8.200000000000002E-8;
    } else {
        zc_int22 = t4657->mX.mX[1138UL] * t3354;
    }
    if (t4657->mM.mX[158UL] != 0) {
        t3354 = 8.200000000000002E-8;
    } else {
        t3354 = t4657->mX.mX[1402UL] * zc_int348;
    }
    t3354 = (((((t4657->mU.mX[0UL] * t3354 + t4657->mX.mX[595UL]) + t4657->mX.mX[596UL]) + t4657->mX.mX[597UL]) + t4657->mX.mX[598UL]) + t4657->mX.mX[599UL]) + intrm_sf_mf_52;
    if (t4657->mM.mX[159UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        intrm_sf_mf_52 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_52 = zc_int349;
    }
    if (t4657->mM.mX[160UL] != 0) {
        zc_int225 = 8.200000000000002E-8;
    } else {
        zc_int225 = t4657->mX.mX[1406UL] * intrm_sf_mf_75;
    }
    intrm_sf_mf_52 += ((((t4657->mU.mX[0UL] * zc_int225 + t4657->mX.mX[603UL]) + t4657->mX.mX[604UL]) + t4657->mX.mX[605UL]) + t4657->mX.mX[606UL]) + t4657->mX.mX[607UL];
    if (t4657->mM.mX[162UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int225 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int225 = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[163UL] != 0) {
        BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 = t4657->mX.mX[1410UL] * t3694;
    }
    zc_int225 += ((((t4657->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 + t4657->mX.mX[611UL]) + t4657->mX.mX[612UL]) + t4657->mX.mX[613UL]) + t4657->mX.mX[614UL]) + t4657->mX.mX[615UL];
    if (t4657->mM.mX[164UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 = zc_int354;
    }
    if (t4657->mM.mX[165UL] != 0) {
        t3584 = 8.200000000000002E-8;
    } else {
        t3584 = t4657->mX.mX[1414UL] * t3699;
    }
    zc_int208 += ((((t4657->mU.mX[0UL] * zc_int22 + t4657->mX.mX[67UL]) + t4657->mX.mX[68UL]) + t4657->mX.mX[69UL]) + t4657->mX.mX[70UL]) + t4657->mX.mX[71UL];
    zc_int22 = (((((t4657->mU.mX[0UL] * t3584 + t4657->mX.mX[619UL]) + t4657->mX.mX[620UL]) + t4657->mX.mX[621UL]) + t4657->mX.mX[622UL]) + t4657->mX.mX[623UL]) + BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3;
    if (t4657->mM.mX[166UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 = zc_int356;
    }
    if (t4657->mM.mX[167UL] != 0) {
        t3584 = 8.200000000000002E-8;
    } else {
        t3584 = t4657->mX.mX[1418UL] * zc_int357;
    }
    BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 += ((((t4657->mU.mX[0UL] * t3584 + t4657->mX.mX[627UL]) + t4657->mX.mX[628UL]) + t4657->mX.mX[629UL]) + t4657->mX.mX[630UL]) + t4657->mX.mX[631UL];
    if (t4657->mM.mX[168UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        t3584 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        t3584 = zc_int358;
    }
    if (t4657->mM.mX[169UL] != 0) {
        BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 = t4657->mX.mX[1422UL] * intrm_sf_mf_79;
    }
    t3584 += ((((t4657->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 + t4657->mX.mX[635UL]) + t4657->mX.mX[636UL]) + t4657->mX.mX[637UL]) + t4657->mX.mX[638UL]) + t4657->mX.mX[639UL];
    if (t4657->mM.mX[170UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 = zc_int38;
    }
    if (t4657->mM.mX[171UL] != 0) {
        zc_int24 = 8.200000000000002E-8;
    } else {
        zc_int24 = t4657->mX.mX[1426UL] * intrm_sf_mf_80;
    }
    BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 += ((((t4657->mU.mX[0UL] * zc_int24 + t4657->mX.mX[643UL]) + t4657->mX.mX[644UL]) + t4657->mX.mX[645UL]) + t4657->mX.mX[646UL]) + t4657->mX.mX[647UL];
    if (t4657->mM.mX[172UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int24 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int24 = zc_int242;
    }
    if (t4657->mM.mX[173UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int242 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int242 = zc_int362;
    }
    if (t4657->mM.mX[174UL] != 0) {
        zc_int243 = 8.200000000000002E-8;
    } else {
        zc_int243 = t4657->mX.mX[1430UL] * intrm_sf_mf_81;
    }
    zc_int242 += ((((t4657->mU.mX[0UL] * zc_int243 + t4657->mX.mX[651UL]) + t4657->mX.mX[652UL]) + t4657->mX.mX[653UL]) + t4657->mX.mX[654UL]) + t4657->mX.mX[655UL];
    if (t4657->mM.mX[175UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int243 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int243 = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[176UL] != 0) {
        zc_int248 = 8.200000000000002E-8;
    } else {
        zc_int248 = t4657->mX.mX[1434UL] * zc_int365;
    }
    zc_int243 += ((((t4657->mU.mX[0UL] * zc_int248 + t4657->mX.mX[659UL]) + t4657->mX.mX[660UL]) + t4657->mX.mX[661UL]) + t4657->mX.mX[662UL]) + t4657->mX.mX[663UL];
    if (t4657->mM.mX[177UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int248 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int248 = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[178UL] != 0) {
        zc_int247 = 8.200000000000002E-8;
    } else {
        zc_int247 = t4657->mX.mX[1438UL] * t3729;
    }
    zc_int248 += ((((t4657->mU.mX[0UL] * zc_int247 + t4657->mX.mX[667UL]) + t4657->mX.mX[668UL]) + t4657->mX.mX[669UL]) + t4657->mX.mX[670UL]) + t4657->mX.mX[671UL];
    if (t4657->mM.mX[179UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int247 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int247 = zc_int368;
    }
    if (t4657->mM.mX[183UL] != 0) {
        intrm_sf_mf_57 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_57 = t4657->mX.mX[1142UL] * zc_int250;
    }
    if (t4657->mM.mX[180UL] != 0) {
        zc_int250 = 8.200000000000002E-8;
    } else {
        zc_int250 = t4657->mX.mX[1442UL] * t3734;
    }
    zc_int250 = (((((t4657->mU.mX[0UL] * zc_int250 + t4657->mX.mX[675UL]) + t4657->mX.mX[676UL]) + t4657->mX.mX[677UL]) + t4657->mX.mX[678UL]) + t4657->mX.mX[679UL]) + zc_int247;
    if (t4657->mM.mX[181UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int247 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int247 = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[182UL] != 0) {
        zc_int253 = 8.200000000000002E-8;
    } else {
        zc_int253 = t4657->mX.mX[1446UL] * intrm_sf_mf_85;
    }
    zc_int247 += ((((t4657->mU.mX[0UL] * zc_int253 + t4657->mX.mX[683UL]) + t4657->mX.mX[684UL]) + t4657->mX.mX[685UL]) + t4657->mX.mX[686UL]) + t4657->mX.mX[687UL];
    if (t4657->mM.mX[184UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int253 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int253 = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[185UL] != 0) {
        zc_int258 = 8.200000000000002E-8;
    } else {
        zc_int258 = t4657->mX.mX[1450UL] * zc_int373;
    }
    zc_int253 += ((((t4657->mU.mX[0UL] * zc_int258 + t4657->mX.mX[691UL]) + t4657->mX.mX[692UL]) + t4657->mX.mX[693UL]) + t4657->mX.mX[694UL]) + t4657->mX.mX[695UL];
    if (t4657->mM.mX[186UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int258 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int258 = zc_int374;
    }
    if (t4657->mM.mX[187UL] != 0) {
        zc_int262 = 8.200000000000002E-8;
    } else {
        zc_int262 = t4657->mX.mX[1454UL] * zc_int375;
    }
    zc_int24 += ((((t4657->mU.mX[0UL] * intrm_sf_mf_57 + t4657->mX.mX[75UL]) + t4657->mX.mX[76UL]) + t4657->mX.mX[77UL]) + t4657->mX.mX[78UL]) + t4657->mX.mX[79UL];
    intrm_sf_mf_57 = (((((t4657->mU.mX[0UL] * zc_int262 + t4657->mX.mX[699UL]) + t4657->mX.mX[700UL]) + t4657->mX.mX[701UL]) + t4657->mX.mX[702UL]) + t4657->mX.mX[703UL]) + zc_int258;
    if (t4657->mM.mX[188UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int258 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int258 = zc_int376;
    }
    if (t4657->mM.mX[189UL] != 0) {
        zc_int262 = 8.200000000000002E-8;
    } else {
        zc_int262 = t4657->mX.mX[1458UL] * t3754;
    }
    zc_int258 += ((((t4657->mU.mX[0UL] * zc_int262 + t4657->mX.mX[707UL]) + t4657->mX.mX[708UL]) + t4657->mX.mX[709UL]) + t4657->mX.mX[710UL]) + t4657->mX.mX[711UL];
    if (t4657->mM.mX[190UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int262 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int262 = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[191UL] != 0) {
        t3609 = 8.200000000000002E-8;
    } else {
        t3609 = t4657->mX.mX[1462UL] * intrm_sf_mf_89;
    }
    zc_int262 += ((((t4657->mU.mX[0UL] * t3609 + t4657->mX.mX[715UL]) + t4657->mX.mX[716UL]) + t4657->mX.mX[717UL]) + t4657->mX.mX[718UL]) + t4657->mX.mX[719UL];
    if (t4657->mM.mX[192UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        t3609 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        t3609 = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[193UL] != 0) {
        BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 = t4657->mX.mX[1466UL] * t3764;
    }
    t3609 += ((((t4657->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 + t4657->mX.mX[723UL]) + t4657->mX.mX[724UL]) + t4657->mX.mX[725UL]) + t4657->mX.mX[726UL]) + t4657->mX.mX[727UL];
    if (t4657->mM.mX[194UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 = BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[195UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3 = zc_int6;
    }
    if (t4657->mM.mX[196UL] != 0) {
        t3614 = 8.200000000000002E-8;
    } else {
        t3614 = t4657->mX.mX[1562UL] * zc_int452;
    }
    BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3 += ((((t4657->mU.mX[0UL] * t3614 + t4657->mX.mX[915UL]) + t4657->mX.mX[916UL]) + t4657->mX.mX[917UL]) + t4657->mX.mX[918UL]) + t4657->mX.mX[919UL];
    if (t4657->mM.mX[197UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        t3614 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        t3614 = zc_int385;
    }
    if (t4657->mM.mX[198UL] != 0) {
        zc_int276 = 8.200000000000002E-8;
    } else {
        zc_int276 = t4657->mX.mX[1474UL] * t3774;
    }
    t3614 += ((((t4657->mU.mX[0UL] * zc_int276 + t4657->mX.mX[739UL]) + t4657->mX.mX[740UL]) + t4657->mX.mX[741UL]) + t4657->mX.mX[742UL]) + t4657->mX.mX[743UL];
    if (t4657->mM.mX[199UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int276 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int276 = zc_int387;
    }
    if (t4657->mM.mX[200UL] != 0) {
        zc_int279 = 8.200000000000002E-8;
    } else {
        zc_int279 = t4657->mX.mX[1478UL] * zc_int388;
    }
    zc_int276 += ((((t4657->mU.mX[0UL] * zc_int279 + t4657->mX.mX[747UL]) + t4657->mX.mX[748UL]) + t4657->mX.mX[749UL]) + t4657->mX.mX[750UL]) + t4657->mX.mX[751UL];
    if (t4657->mM.mX[201UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int279 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int279 = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[205UL] != 0) {
        zc_int290 = 8.200000000000002E-8;
    } else {
        zc_int290 = t4657->mX.mX[1146UL] * zc_int281;
    }
    if (t4657->mM.mX[202UL] != 0) {
        zc_int281 = 8.200000000000002E-8;
    } else {
        zc_int281 = t4657->mX.mX[1482UL] * zc_int410;
    }
    zc_int281 = (((((t4657->mU.mX[0UL] * zc_int281 + t4657->mX.mX[755UL]) + t4657->mX.mX[756UL]) + t4657->mX.mX[757UL]) + t4657->mX.mX[758UL]) + t4657->mX.mX[759UL]) + zc_int279;
    if (t4657->mM.mX[203UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int279 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int279 = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[204UL] != 0) {
        zc_int283 = 8.200000000000002E-8;
    } else {
        zc_int283 = t4657->mX.mX[1486UL] * intrm_sf_mf_95;
    }
    zc_int279 += ((((t4657->mU.mX[0UL] * zc_int283 + t4657->mX.mX[763UL]) + t4657->mX.mX[764UL]) + t4657->mX.mX[765UL]) + t4657->mX.mX[766UL]) + t4657->mX.mX[767UL];
    if (t4657->mM.mX[206UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int283 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int283 = zc_int393;
    }
    if (t4657->mM.mX[207UL] != 0) {
        zc_int293 = 8.200000000000002E-8;
    } else {
        zc_int293 = t4657->mX.mX[1490UL] * t3794;
    }
    zc_int283 += ((((t4657->mU.mX[0UL] * zc_int293 + t4657->mX.mX[771UL]) + t4657->mX.mX[772UL]) + t4657->mX.mX[773UL]) + t4657->mX.mX[774UL]) + t4657->mX.mX[775UL];
    if (t4657->mM.mX[208UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int293 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int293 = zc_int395;
    }
    if (t4657->mM.mX[209UL] != 0) {
        zc_int289 = 8.200000000000002E-8;
    } else {
        zc_int289 = t4657->mX.mX[1494UL] * zc_int396;
    }
    BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 += ((((t4657->mU.mX[0UL] * zc_int290 + t4657->mX.mX[83UL]) + t4657->mX.mX[84UL]) + t4657->mX.mX[85UL]) + t4657->mX.mX[86UL]) + t4657->mX.mX[87UL];
    zc_int290 = (((((t4657->mU.mX[0UL] * zc_int289 + t4657->mX.mX[779UL]) + t4657->mX.mX[780UL]) + t4657->mX.mX[781UL]) + t4657->mX.mX[782UL]) + t4657->mX.mX[783UL]) + zc_int293;
    if (t4657->mM.mX[210UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int293 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int293 = zc_int397;
    }
    if (t4657->mM.mX[211UL] != 0) {
        zc_int289 = 8.200000000000002E-8;
    } else {
        zc_int289 = t4657->mX.mX[1498UL] * t3804;
    }
    zc_int293 += ((((t4657->mU.mX[0UL] * zc_int289 + t4657->mX.mX[787UL]) + t4657->mX.mX[788UL]) + t4657->mX.mX[789UL]) + t4657->mX.mX[790UL]) + t4657->mX.mX[791UL];
    if (t4657->mM.mX[212UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int289 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int289 = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[213UL] != 0) {
        zc_int299 = 8.200000000000002E-8;
    } else {
        zc_int299 = t4657->mX.mX[1502UL] * t3809;
    }
    zc_int289 += ((((t4657->mU.mX[0UL] * zc_int299 + t4657->mX.mX[795UL]) + t4657->mX.mX[796UL]) + t4657->mX.mX[797UL]) + t4657->mX.mX[798UL]) + t4657->mX.mX[799UL];
    if (t4657->mM.mX[214UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int299 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int299 = zc_int401;
    }
    if (t4657->mM.mX[215UL] != 0) {
        zc_int3 = 8.200000000000002E-8;
    } else {
        zc_int3 = t4657->mX.mX[1506UL] * intrm_sf_mf_100;
    }
    zc_int299 += ((((t4657->mU.mX[0UL] * zc_int3 + t4657->mX.mX[803UL]) + t4657->mX.mX[804UL]) + t4657->mX.mX[805UL]) + t4657->mX.mX[806UL]) + t4657->mX.mX[807UL];
    if (t4657->mM.mX[216UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int3 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int3 = zc_int30;
    }
    if (t4657->mM.mX[217UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int30 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int30 = BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[218UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3 = zc_int403;
    }
    if (t4657->mM.mX[219UL] != 0) {
        zc_int301 = 8.200000000000002E-8;
    } else {
        zc_int301 = t4657->mX.mX[1510UL] * zc_int404;
    }
    BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3 += ((((t4657->mU.mX[0UL] * zc_int301 + t4657->mX.mX[811UL]) + t4657->mX.mX[812UL]) + t4657->mX.mX[813UL]) + t4657->mX.mX[814UL]) + t4657->mX.mX[815UL];
    if (t4657->mM.mX[220UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int301 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int301 = zc_int405;
    }
    if (t4657->mM.mX[221UL] != 0) {
        zc_int304 = 8.200000000000002E-8;
    } else {
        zc_int304 = t4657->mX.mX[1514UL] * intrm_sf_mf_102;
    }
    zc_int301 += ((((t4657->mU.mX[0UL] * zc_int304 + t4657->mX.mX[819UL]) + t4657->mX.mX[820UL]) + t4657->mX.mX[821UL]) + t4657->mX.mX[822UL]) + t4657->mX.mX[823UL];
    if (t4657->mM.mX[222UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int304 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int304 = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[223UL] != 0) {
        zc_int314 = 8.200000000000002E-8;
    } else {
        zc_int314 = t4657->mX.mX[1518UL] * t3829;
    }
    zc_int304 += ((((t4657->mU.mX[0UL] * zc_int314 + t4657->mX.mX[827UL]) + t4657->mX.mX[828UL]) + t4657->mX.mX[829UL]) + t4657->mX.mX[830UL]) + t4657->mX.mX[831UL];
    if (t4657->mM.mX[224UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int314 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int314 = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[228UL] != 0) {
        zc_int320 = 8.200000000000002E-8;
    } else {
        zc_int320 = t4657->mX.mX[1150UL] * intrm_sf_mf_11;
    }
    if (t4657->mM.mX[225UL] != 0) {
        intrm_sf_mf_11 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_11 = t4657->mX.mX[1522UL] * t3834;
    }
    intrm_sf_mf_11 = (((((t4657->mU.mX[0UL] * intrm_sf_mf_11 + t4657->mX.mX[835UL]) + t4657->mX.mX[836UL]) + t4657->mX.mX[837UL]) + t4657->mX.mX[838UL]) + t4657->mX.mX[839UL]) + zc_int314;
    if (t4657->mM.mX[226UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int314 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int314 = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[227UL] != 0) {
        BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 = t4657->mX.mX[1526UL] * t3839;
    }
    zc_int314 += ((((t4657->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 + t4657->mX.mX[843UL]) + t4657->mX.mX[844UL]) + t4657->mX.mX[845UL]) + t4657->mX.mX[846UL]) + t4657->mX.mX[847UL];
    if (t4657->mM.mX[229UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 = zc_int414;
    }
    if (t4657->mM.mX[230UL] != 0) {
        intrm_sf_mf_67 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_67 = t4657->mX.mX[1530UL] * zc_int415;
    }
    BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 += ((((t4657->mU.mX[0UL] * intrm_sf_mf_67 + t4657->mX.mX[851UL]) + t4657->mX.mX[852UL]) + t4657->mX.mX[853UL]) + t4657->mX.mX[854UL]) + t4657->mX.mX[855UL];
    if (t4657->mM.mX[231UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        intrm_sf_mf_67 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_67 = zc_int416;
    }
    if (t4657->mM.mX[232UL] != 0) {
        zc_int324 = 8.200000000000002E-8;
    } else {
        zc_int324 = t4657->mX.mX[1534UL] * intrm_sf_mf_107;
    }
    zc_int30 += ((((t4657->mU.mX[0UL] * zc_int320 + t4657->mX.mX[91UL]) + t4657->mX.mX[92UL]) + t4657->mX.mX[93UL]) + t4657->mX.mX[94UL]) + t4657->mX.mX[95UL];
    zc_int320 = (((((t4657->mU.mX[0UL] * zc_int324 + t4657->mX.mX[859UL]) + t4657->mX.mX[860UL]) + t4657->mX.mX[861UL]) + t4657->mX.mX[862UL]) + t4657->mX.mX[863UL]) + intrm_sf_mf_67;
    if (t4657->mM.mX[233UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        intrm_sf_mf_67 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_67 = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[234UL] != 0) {
        zc_int324 = 8.200000000000002E-8;
    } else {
        zc_int324 = t4657->mX.mX[1538UL] * intrm_sf_mf_108;
    }
    intrm_sf_mf_67 += ((((t4657->mU.mX[0UL] * zc_int324 + t4657->mX.mX[867UL]) + t4657->mX.mX[868UL]) + t4657->mX.mX[869UL]) + t4657->mX.mX[870UL]) + t4657->mX.mX[871UL];
    if (t4657->mM.mX[235UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int324 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int324 = zc_int439;
    }
    if (t4657->mM.mX[236UL] != 0) {
        t3654 = 8.200000000000002E-8;
    } else {
        t3654 = t4657->mX.mX[1542UL] * intrm_sf_mf_109;
    }
    zc_int324 += ((((t4657->mU.mX[0UL] * t3654 + t4657->mX.mX[875UL]) + t4657->mX.mX[876UL]) + t4657->mX.mX[877UL]) + t4657->mX.mX[878UL]) + t4657->mX.mX[879UL];
    if (t4657->mM.mX[237UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        t3654 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        t3654 = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[238UL] != 0) {
        zc_int35 = 8.200000000000002E-8;
    } else {
        zc_int35 = t4657->mX.mX[1546UL] * intrm_sf_mf_110;
    }
    t3654 += ((((t4657->mU.mX[0UL] * zc_int35 + t4657->mX.mX[883UL]) + t4657->mX.mX[884UL]) + t4657->mX.mX[885UL]) + t4657->mX.mX[886UL]) + t4657->mX.mX[887UL];
    if (t4657->mM.mX[239UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int35 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int35 = BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[240UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3 = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[241UL] != 0) {
        intrm_sf_mf_69 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_69 = t4657->mX.mX[1550UL] * t3869;
    }
    BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3 += ((((t4657->mU.mX[0UL] * intrm_sf_mf_69 + t4657->mX.mX[891UL]) + t4657->mX.mX[892UL]) + t4657->mX.mX[893UL]) + t4657->mX.mX[894UL]) + t4657->mX.mX[895UL];
    if (t4657->mM.mX[242UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        intrm_sf_mf_69 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_69 = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[243UL] != 0) {
        zc_int334 = 8.200000000000002E-8;
    } else {
        zc_int334 = t4657->mX.mX[1554UL] * intrm_sf_mf_112;
    }
    intrm_sf_mf_69 += ((((t4657->mU.mX[0UL] * zc_int334 + t4657->mX.mX[899UL]) + t4657->mX.mX[900UL]) + t4657->mX.mX[901UL]) + t4657->mX.mX[902UL]) + t4657->mX.mX[903UL];
    if (t4657->mM.mX[244UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int334 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int334 = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[245UL] != 0) {
        t3664 = 8.200000000000002E-8;
    } else {
        t3664 = t4657->mX.mX[1558UL] * intrm_sf_mf_113;
    }
    zc_int334 += ((((t4657->mU.mX[0UL] * t3664 + t4657->mX.mX[907UL]) + t4657->mX.mX[908UL]) + t4657->mX.mX[909UL]) + t4657->mX.mX[910UL]) + t4657->mX.mX[911UL];
    if (t4657->mM.mX[250UL] != 0) {
        t3664 = 8.200000000000002E-8;
    } else {
        t3664 = t4657->mX.mX[1154UL] * t3374;
    }
    t3374 = intrm_sf_mf_69 - (-zc_int334);
    BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3 = BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3 - (-t3374);
    t3669 = t3654 - (-BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3);
    BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3 = zc_int324 - (-t3669);
    intrm_sf_mf_72 = intrm_sf_mf_67 - (-BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3);
    BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3 = zc_int320 - (-intrm_sf_mf_72);
    intrm_sf_mf_73 = BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3 - (-BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3);
    BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3 = zc_int314 - (-intrm_sf_mf_73);
    zc_int348 = intrm_sf_mf_11 - (-BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3);
    zc_int349 = zc_int304 - (-zc_int348);
    zc_int35 += ((((t4657->mU.mX[0UL] * t3664 + t4657->mX.mX[99UL]) + t4657->mX.mX[100UL]) + t4657->mX.mX[101UL]) + t4657->mX.mX[102UL]) + t4657->mX.mX[103UL];
    t3664 = zc_int301 - (-zc_int349);
    intrm_sf_mf_75 = BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3 - (-t3664);
    BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3 = zc_int299 - (-intrm_sf_mf_75);
    t3694 = zc_int289 - (-BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3);
    zc_int354 = zc_int293 - (-t3694);
    t3699 = zc_int290 - (-zc_int354);
    zc_int356 = zc_int283 - (-t3699);
    zc_int357 = zc_int279 - (-zc_int356);
    zc_int358 = zc_int281 - (-zc_int357);
    intrm_sf_mf_79 = zc_int276 - (-zc_int358);
    if (t4657->mM.mX[261UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int38 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int38 = zc_int360;
    }
    zc_int360 = t3614 - (-intrm_sf_mf_79);
    intrm_sf_mf_80 = BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3 - (-zc_int360);
    zc_int362 = t3609 - (-intrm_sf_mf_80);
    intrm_sf_mf_81 = zc_int262 - (-zc_int362);
    BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3 = zc_int258 - (-intrm_sf_mf_81);
    zc_int365 = intrm_sf_mf_57 - (-BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3);
    BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3 = zc_int253 - (-zc_int365);
    t3729 = zc_int247 - (-BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3);
    zc_int368 = zc_int250 - (-t3729);
    t3734 = zc_int248 - (-zc_int368);
    if (t4657->mM.mX[272UL] != 0) {
        BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3 = t4657->mX.mX[1158UL] * intrm_sf_mf_13;
    }
    intrm_sf_mf_13 = zc_int243 - (-t3734);
    intrm_sf_mf_85 = zc_int242 - (-intrm_sf_mf_13);
    BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3 = BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3 - (-intrm_sf_mf_85);
    zc_int373 = t3584 - (-BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3);
    zc_int374 = BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3 - (-zc_int373);
    zc_int375 = zc_int22 - (-zc_int374);
    zc_int376 = zc_int225 - (-zc_int375);
    t3754 = intrm_sf_mf_52 - (-zc_int376);
    BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3 = t3354 - (-t3754);
    intrm_sf_mf_89 = zc_int218 - (-BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3);
    zc_int38 += ((((t4657->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3 + t4657->mX.mX[107UL]) + t4657->mX.mX[108UL]) + t4657->mX.mX[109UL]) + t4657->mX.mX[110UL]) + t4657->mX.mX[111UL];
    BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3 = t3569 - (-intrm_sf_mf_89);
    BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3 = zc_int212 - (-BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3);
    t3764 = t3564 - (-BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3);
    zc_int383 = zc_int202 - (-t3764);
    t3769 = t3559 - (-zc_int383);
    zc_int385 = t3554 - (-t3769);
    t3774 = zc_int195 - (-zc_int385);
    zc_int387 = zc_int192 - (-t3774);
    zc_int388 = intrm_sf_mf_7 - (-zc_int387);
    BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3 = t3549 - (-zc_int388);
    if (t4657->mM.mX[283UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int410 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int410 = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    }
    BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3 = zc_int183 - (-BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3);
    BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3 = BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3 - (-BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3);
    intrm_sf_mf_95 = zc_int177 - (-BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3);
    zc_int393 = intrm_sf_mf_44 - (-intrm_sf_mf_95);
    t3794 = zc_int171 - (-zc_int393);
    zc_int395 = BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3 - (-t3794);
    zc_int396 = intrm_sf_mf_43 - (-zc_int395);
    zc_int397 = zc_int164 - (-zc_int396);
    t3804 = zc_int161 - (-zc_int397);
    BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3 = zc_int154 - (-t3804);
    if (t4657->mM.mX[327UL] != 0) {
        t3809 = 8.200000000000002E-8;
    } else {
        t3809 = t4657->mX.mX[1114UL] * zc_int40;
    }
    if (t4657->mM.mX[294UL] != 0) {
        zc_int40 = 8.200000000000002E-8;
    } else {
        zc_int40 = t4657->mX.mX[1162UL] * intrm_sf_mf_14;
    }
    intrm_sf_mf_14 = zc_int155 - (-BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3);
    zc_int401 = BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3 - (-intrm_sf_mf_14);
    intrm_sf_mf_100 = zc_int147 - (-zc_int401);
    zc_int403 = zc_int146 - (-intrm_sf_mf_100);
    zc_int404 = intrm_sf_mf_39 - (-zc_int403);
    zc_int405 = t3504 - (-zc_int404);
    intrm_sf_mf_102 = zc_int133 - (-zc_int405);
    BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3 = zc_int134 - (-intrm_sf_mf_102);
    t3829 = intrm_sf_mf_5 - (-BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3);
    BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3 = t3499 - (-t3829);
    zc_int40 = (((((t4657->mU.mX[0UL] * zc_int40 + t4657->mX.mX[115UL]) + t4657->mX.mX[116UL]) + t4657->mX.mX[117UL]) + t4657->mX.mX[118UL]) + t4657->mX.mX[119UL]) + zc_int410;
    zc_int410 = zc_int121 - (-BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3);
    t3834 = zc_int120 - (-zc_int410);
    BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3 = BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3 - (-t3834);
    t3839 = t3489 - (-BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3);
    zc_int414 = BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3 - (-t3839);
    zc_int415 = zc_int110 - (-zc_int414);
    zc_int416 = zc_int99 - (-zc_int415);
    intrm_sf_mf_107 = zc_int102 - (-zc_int416);
    BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3 = intrm_sf_mf_4 - (-intrm_sf_mf_107);
    if (t4657->mM.mX[705UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        intrm_sf_mf_108 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_108 = zc_int97;
    }
    if (t4657->mM.mX[716UL] != 0) {
        zc_int97 = 8.200000000000002E-8;
    } else {
        zc_int97 = t4657->mX.mX[1238UL] * t3479;
    }
    zc_int97 = (((((t4657->mU.mX[0UL] * zc_int97 + t4657->mX.mX[267UL]) + t4657->mX.mX[268UL]) + t4657->mX.mX[269UL]) + t4657->mX.mX[270UL]) + t4657->mX.mX[271UL]) + intrm_sf_mf_108;
    t3479 = zc_int97 - (-BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3);
    if (t4657->mM.mX[305UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        intrm_sf_mf_108 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        intrm_sf_mf_108 = BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[683UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3 = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[694UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3 = t4657->mX.mX[1234UL] * zc_int44;
    }
    BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3 += ((((t4657->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3 + t4657->mX.mX[259UL]) + t4657->mX.mX[260UL]) + t4657->mX.mX[261UL]) + t4657->mX.mX[262UL]) + t4657->mX.mX[263UL];
    BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3 = BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3 - (-t3479);
    if (t4657->mM.mX[661UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int44 = BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[672UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3 = t4657->mX.mX[1230UL] * t3469;
    }
    BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3 = (((((t4657->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3 + t4657->mX.mX[251UL]) + t4657->mX.mX[252UL]) + t4657->mX.mX[253UL]) + t4657->mX.mX[254UL]) + t4657->mX.mX[255UL]) + zc_int44;
    t3469 = BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3 - (-BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3);
    if (t4657->mM.mX[638UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int44 = zc_int89;
    }
    if (t4657->mM.mX[649UL] != 0) {
        zc_int89 = 8.200000000000002E-8;
    } else {
        zc_int89 = t4657->mX.mX[1226UL] * t3464;
    }
    zc_int89 = (((((t4657->mU.mX[0UL] * zc_int89 + t4657->mX.mX[243UL]) + t4657->mX.mX[244UL]) + t4657->mX.mX[245UL]) + t4657->mX.mX[246UL]) + t4657->mX.mX[247UL]) + zc_int44;
    t3464 = zc_int89 - (-t3469);
    if (t4657->mM.mX[616UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int44 = zc_int86;
    }
    if (t4657->mM.mX[627UL] != 0) {
        zc_int86 = 8.200000000000002E-8;
    } else {
        zc_int86 = t4657->mX.mX[1222UL] * t3459;
    }
    zc_int86 = (((((t4657->mU.mX[0UL] * zc_int86 + t4657->mX.mX[235UL]) + t4657->mX.mX[236UL]) + t4657->mX.mX[237UL]) + t4657->mX.mX[238UL]) + t4657->mX.mX[239UL]) + zc_int44;
    t3459 = zc_int86 - (-t3464);
    if (t4657->mM.mX[594UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int44 = zc_int83;
    }
    if (t4657->mM.mX[605UL] != 0) {
        zc_int83 = 8.200000000000002E-8;
    } else {
        zc_int83 = t4657->mX.mX[1218UL] * zc_int424;
    }
    zc_int83 = (((((t4657->mU.mX[0UL] * zc_int83 + t4657->mX.mX[227UL]) + t4657->mX.mX[228UL]) + t4657->mX.mX[229UL]) + t4657->mX.mX[230UL]) + t4657->mX.mX[231UL]) + zc_int44;
    zc_int424 = zc_int83 - (-t3459);
    if (t4657->mM.mX[572UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int44 = zc_int80;
    }
    if (t4657->mM.mX[583UL] != 0) {
        zc_int80 = 8.200000000000002E-8;
    } else {
        zc_int80 = t4657->mX.mX[1214UL] * zc_int425;
    }
    zc_int80 = (((((t4657->mU.mX[0UL] * zc_int80 + t4657->mX.mX[219UL]) + t4657->mX.mX[220UL]) + t4657->mX.mX[221UL]) + t4657->mX.mX[222UL]) + t4657->mX.mX[223UL]) + zc_int44;
    zc_int425 = zc_int80 - (-zc_int424);
    if (t4657->mM.mX[550UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int44 = zc_int77;
    }
    if (t4657->mM.mX[561UL] != 0) {
        zc_int77 = 8.200000000000002E-8;
    } else {
        zc_int77 = t4657->mX.mX[1210UL] * zc_int426;
    }
    zc_int77 = (((((t4657->mU.mX[0UL] * zc_int77 + t4657->mX.mX[211UL]) + t4657->mX.mX[212UL]) + t4657->mX.mX[213UL]) + t4657->mX.mX[214UL]) + t4657->mX.mX[215UL]) + zc_int44;
    zc_int426 = zc_int77 - (-zc_int425);
    if (t4657->mM.mX[527UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int44 = BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[538UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3 = t4657->mX.mX[1206UL] * intrm_sf_mf_25;
    }
    BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3 = (((((t4657->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3 + t4657->mX.mX[203UL]) + t4657->mX.mX[204UL]) + t4657->mX.mX[205UL]) + t4657->mX.mX[206UL]) + t4657->mX.mX[207UL]) + zc_int44;
    intrm_sf_mf_25 = BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3 - (-zc_int426);
    if (t4657->mM.mX[505UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int44 = BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[516UL] != 0) {
        BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3 = t4657->mX.mX[1202UL] * zc_int428;
    }
    BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3 = (((((t4657->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3 + t4657->mX.mX[195UL]) + t4657->mX.mX[196UL]) + t4657->mX.mX[197UL]) + t4657->mX.mX[198UL]) + t4657->mX.mX[199UL]) + zc_int44;
    zc_int428 = BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3 - (-intrm_sf_mf_25);
    if (t4657->mM.mX[483UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int44 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int44 = zc_int68;
    }
    if (t4657->mM.mX[494UL] != 0) {
        zc_int68 = 8.200000000000002E-8;
    } else {
        zc_int68 = t4657->mX.mX[1198UL] * t3429;
    }
    zc_int68 = (((((t4657->mU.mX[0UL] * zc_int68 + t4657->mX.mX[187UL]) + t4657->mX.mX[188UL]) + t4657->mX.mX[189UL]) + t4657->mX.mX[190UL]) + t4657->mX.mX[191UL]) + zc_int44;
    t3429 = zc_int68 - (-zc_int428);
    if (t4657->mM.mX[316UL] != 0) {
        zc_int44 = 8.200000000000002E-8;
    } else {
        zc_int44 = t4657->mX.mX[1166UL] * zc_int63;
    }
    if (t4657->mM.mX[461UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int63 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int63 = zc_int64;
    }
    if (t4657->mM.mX[472UL] != 0) {
        zc_int64 = 8.200000000000002E-8;
    } else {
        zc_int64 = t4657->mX.mX[1286UL] * zc_int51;
    }
    zc_int63 += ((((t4657->mU.mX[0UL] * zc_int64 + t4657->mX.mX[363UL]) + t4657->mX.mX[364UL]) + t4657->mX.mX[365UL]) + t4657->mX.mX[366UL]) + t4657->mX.mX[367UL];
    zc_int64 = zc_int63 - (-t3429);
    if (t4657->mM.mX[439UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int51 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int51 = BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3;
    }
    if (t4657->mM.mX[450UL] != 0) {
        BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3 = t4657->mX.mX[1190UL] * zc_int431;
    }
    BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3 = (((((t4657->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3 + t4657->mX.mX[171UL]) + t4657->mX.mX[172UL]) + t4657->mX.mX[173UL]) + t4657->mX.mX[174UL]) + t4657->mX.mX[175UL]) + zc_int51;
    zc_int431 = BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3 - (-zc_int64);
    if (t4657->mM.mX[416UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int51 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int51 = zc_int58;
    }
    if (t4657->mM.mX[427UL] != 0) {
        zc_int58 = 8.200000000000002E-8;
    } else {
        zc_int58 = t4657->mX.mX[1186UL] * intrm_sf_mf_20;
    }
    zc_int58 = (((((t4657->mU.mX[0UL] * zc_int58 + t4657->mX.mX[163UL]) + t4657->mX.mX[164UL]) + t4657->mX.mX[165UL]) + t4657->mX.mX[166UL]) + t4657->mX.mX[167UL]) + zc_int51;
    intrm_sf_mf_20 = zc_int58 - (-zc_int431);
    if (t4657->mM.mX[394UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int51 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int51 = zc_int55;
    }
    if (t4657->mM.mX[405UL] != 0) {
        zc_int55 = 8.200000000000002E-8;
    } else {
        zc_int55 = t4657->mX.mX[1182UL] * t3409;
    }
    zc_int55 = (((((t4657->mU.mX[0UL] * zc_int55 + t4657->mX.mX[155UL]) + t4657->mX.mX[156UL]) + t4657->mX.mX[157UL]) + t4657->mX.mX[158UL]) + t4657->mX.mX[159UL]) + zc_int51;
    t3409 = zc_int55 - (-intrm_sf_mf_20);
    if (t4657->mM.mX[372UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int51 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int51 = zc_int53;
    }
    if (t4657->mM.mX[383UL] != 0) {
        zc_int53 = 8.200000000000002E-8;
    } else {
        zc_int53 = t4657->mX.mX[1178UL] * t3404;
    }
    zc_int53 = (((((t4657->mU.mX[0UL] * zc_int53 + t4657->mX.mX[147UL]) + t4657->mX.mX[148UL]) + t4657->mX.mX[149UL]) + t4657->mX.mX[150UL]) + t4657->mX.mX[151UL]) + zc_int51;
    t3404 = zc_int53 - (-t3409);
    if (t4657->mM.mX[350UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int51 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int51 = zc_int49;
    }
    if (t4657->mM.mX[361UL] != 0) {
        zc_int49 = 8.200000000000002E-8;
    } else {
        zc_int49 = t4657->mX.mX[1174UL] * t3399;
    }
    zc_int49 = (((((t4657->mU.mX[0UL] * zc_int49 + t4657->mX.mX[139UL]) + t4657->mX.mX[140UL]) + t4657->mX.mX[141UL]) + t4657->mX.mX[142UL]) + t4657->mX.mX[143UL]) + zc_int51;
    t3399 = zc_int49 - (-t3404);
    if (t4657->mM.mX[328UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int51 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int51 = zc_int46;
    }
    if (t4657->mM.mX[339UL] != 0) {
        zc_int46 = 8.200000000000002E-8;
    } else {
        zc_int46 = t4657->mX.mX[1170UL] * zc_int436;
    }
    zc_int46 = (((((t4657->mU.mX[0UL] * zc_int46 + t4657->mX.mX[131UL]) + t4657->mX.mX[132UL]) + t4657->mX.mX[133UL]) + t4657->mX.mX[134UL]) + t4657->mX.mX[135UL]) + zc_int51;
    zc_int436 = zc_int46 - (-t3399);
    zc_int44 = (((((t4657->mU.mX[0UL] * zc_int44 + t4657->mX.mX[123UL]) + t4657->mX.mX[124UL]) + t4657->mX.mX[125UL]) + t4657->mX.mX[126UL]) + t4657->mX.mX[127UL]) + intrm_sf_mf_108;
    zc_int51 = zc_int44 - (-zc_int436);
    intrm_sf_mf_108 = zc_int40 - (-zc_int51);
    zc_int439 = zc_int38 - (-intrm_sf_mf_108);
    intrm_sf_mf_109 = zc_int35 - (-zc_int439);
    BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3 = zc_int30 - (-intrm_sf_mf_109);
    intrm_sf_mf_110 = BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3 - (-BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3);
    BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3 = zc_int24 - (-intrm_sf_mf_110);
    t3869 = zc_int208 - (-BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3);
    BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3 = zc_int178 - (-t3869);
    intrm_sf_mf_112 = zc_int148 - (-BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3);
    BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3 = t3494 - (-intrm_sf_mf_112);
    intrm_sf_mf_113 = zc_int10 - (-BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3);
    if (t4657->mM.mX[438UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int6 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int6 = zc_int8;
    }
    if (t4657->mM.mX[549UL] != 0) {
        zc_int8 = 8.200000000000002E-8;
    } else {
        zc_int8 = t4657->mX.mX[1118UL] * t3329;
    }
    zc_int8 = (((((t4657->mU.mX[0UL] * zc_int8 + t4657->mX.mX[27UL]) + t4657->mX.mX[28UL]) + t4657->mX.mX[29UL]) + t4657->mX.mX[30UL]) + t4657->mX.mX[31UL]) + zc_int6;
    t3329 = zc_int8 - (-intrm_sf_mf_113);
    zc_int3 += ((((t4657->mU.mX[0UL] * t3809 + t4657->mX.mX[19UL]) + t4657->mX.mX[20UL]) + t4657->mX.mX[21UL]) + t4657->mX.mX[22UL]) + t4657->mX.mX[23UL];
    t3809 = zc_int3 - (-t3329);
    zc_int6 = BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3 - (-t3809);
    if (t4657->mM.mX[246UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int452 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int452 = zc_int454;
    }
    if (t4657->mM.mX[247UL] != 0) {
        zc_int454 = 8.200000000000002E-8;
    } else {
        zc_int454 = t4657->mX.mX[1106UL] * t3314;
    }
    zc_int454 = (((((t4657->mU.mX[0UL] * zc_int454 + t4657->mX.mX[3UL]) + t4657->mX.mX[4UL]) + t4657->mX.mX[5UL]) + t4657->mX.mX[6UL]) + t4657->mX.mX[7UL]) + zc_int452;
    t3314 = zc_int454 - (-zc_int6);
    if (t4657->mM.mX[248UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int457 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int457 = zc_int480;
    }
    if (t4657->mM.mX[249UL] != 0) {
        zc_int480 = 8.200000000000002E-8;
    } else {
        zc_int480 = t4657->mX.mX[1194UL] * zc_int481;
    }
    zc_int480 = (((((t4657->mU.mX[0UL] * zc_int480 + t4657->mX.mX[179UL]) + t4657->mX.mX[180UL]) + t4657->mX.mX[181UL]) + t4657->mX.mX[182UL]) + t4657->mX.mX[183UL]) + zc_int457;
    zc_int481 = zc_int480 - (-t3314);
    if (t4657->mM.mX[251UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int457 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int457 = zc_int576;
    }
    if (t4657->mM.mX[252UL] != 0) {
        zc_int576 = 8.200000000000002E-8;
    } else {
        zc_int576 = t4657->mX.mX[1570UL] * t3894;
    }
    zc_int576 = (((((t4657->mU.mX[0UL] * zc_int576 + t4657->mX.mX[931UL]) + t4657->mX.mX[932UL]) + t4657->mX.mX[933UL]) + t4657->mX.mX[934UL]) + t4657->mX.mX[935UL]) + zc_int457;
    if (t4657->mM.mX[253UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        t3894 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        t3894 = zc_int579;
    }
    if (t4657->mM.mX[254UL] != 0) {
        zc_int579 = 8.200000000000002E-8;
    } else {
        zc_int579 = t4657->mX.mX[1574UL] * zc_int586;
    }
    t3894 += ((((t4657->mU.mX[0UL] * zc_int579 + t4657->mX.mX[939UL]) + t4657->mX.mX[940UL]) + t4657->mX.mX[941UL]) + t4657->mX.mX[942UL]) + t4657->mX.mX[943UL];
    if (t4657->mM.mX[255UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int579 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int579 = BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3;
    }
    if (t4657->mM.mX[256UL] != 0) {
        zc_int586 = 8.200000000000002E-8;
    } else {
        zc_int586 = t4657->mX.mX[1578UL] * zc_int588;
    }
    zc_int579 += ((((t4657->mU.mX[0UL] * zc_int586 + t4657->mX.mX[947UL]) + t4657->mX.mX[948UL]) + t4657->mX.mX[949UL]) + t4657->mX.mX[950UL]) + t4657->mX.mX[951UL];
    if (t4657->mM.mX[257UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int586 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int586 = zc_int595;
    }
    if (t4657->mM.mX[258UL] != 0) {
        BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3 = t4657->mX.mX[1582UL] * zc_int598;
    }
    zc_int586 += ((((t4657->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3 + t4657->mX.mX[955UL]) + t4657->mX.mX[956UL]) + t4657->mX.mX[957UL]) + t4657->mX.mX[958UL]) + t4657->mX.mX[959UL];
    if (t4657->mM.mX[259UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3 = zc_int601;
    }
    if (t4657->mM.mX[260UL] != 0) {
        zc_int588 = 8.200000000000002E-8;
    } else {
        zc_int588 = t4657->mX.mX[1586UL] * zc_int600;
    }
    BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3 += ((((t4657->mU.mX[0UL] * zc_int588 + t4657->mX.mX[963UL]) + t4657->mX.mX[964UL]) + t4657->mX.mX[965UL]) + t4657->mX.mX[966UL]) + t4657->mX.mX[967UL];
    if (t4657->mM.mX[262UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int588 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int588 = zc_int607;
    }
    if (t4657->mM.mX[263UL] != 0) {
        zc_int595 = 8.200000000000002E-8;
    } else {
        zc_int595 = t4657->mX.mX[1590UL] * zc_int606;
    }
    zc_int588 += ((((t4657->mU.mX[0UL] * zc_int595 + t4657->mX.mX[971UL]) + t4657->mX.mX[972UL]) + t4657->mX.mX[973UL]) + t4657->mX.mX[974UL]) + t4657->mX.mX[975UL];
    if (t4657->mM.mX[264UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int595 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int595 = BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3;
    }
    if (t4657->mM.mX[265UL] != 0) {
        zc_int598 = 8.200000000000002E-8;
    } else {
        zc_int598 = t4657->mX.mX[1594UL] * zc_int612;
    }
    zc_int595 += ((((t4657->mU.mX[0UL] * zc_int598 + t4657->mX.mX[979UL]) + t4657->mX.mX[980UL]) + t4657->mX.mX[981UL]) + t4657->mX.mX[982UL]) + t4657->mX.mX[983UL];
    if (t4657->mM.mX[266UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int598 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int598 = zc_int615;
    }
    if (t4657->mM.mX[267UL] != 0) {
        zc_int601 = 8.200000000000002E-8;
    } else {
        zc_int601 = t4657->mX.mX[1598UL] * zc_int618;
    }
    zc_int598 += ((((t4657->mU.mX[0UL] * zc_int601 + t4657->mX.mX[987UL]) + t4657->mX.mX[988UL]) + t4657->mX.mX[989UL]) + t4657->mX.mX[990UL]) + t4657->mX.mX[991UL];
    if (t4657->mM.mX[268UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int601 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int601 = zc_int625;
    }
    if (t4657->mM.mX[269UL] != 0) {
        zc_int600 = 8.200000000000002E-8;
    } else {
        zc_int600 = t4657->mX.mX[1602UL] * zc_int628;
    }
    zc_int601 += ((((t4657->mU.mX[0UL] * zc_int600 + t4657->mX.mX[995UL]) + t4657->mX.mX[996UL]) + t4657->mX.mX[997UL]) + t4657->mX.mX[998UL]) + t4657->mX.mX[999UL];
    if (t4657->mM.mX[270UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int600 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int600 = zc_int631;
    }
    if (t4657->mM.mX[271UL] != 0) {
        zc_int607 = 8.200000000000002E-8;
    } else {
        zc_int607 = t4657->mX.mX[1606UL] * t3939;
    }
    zc_int600 += ((((t4657->mU.mX[0UL] * zc_int607 + t4657->mX.mX[1003UL]) + t4657->mX.mX[1004UL]) + t4657->mX.mX[1005UL]) + t4657->mX.mX[1006UL]) + t4657->mX.mX[1007UL];
    if (t4657->mM.mX[273UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int607 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int607 = BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3;
    }
    if (t4657->mM.mX[274UL] != 0) {
        zc_int606 = 8.200000000000002E-8;
    } else {
        zc_int606 = t4657->mX.mX[1610UL] * intrm_sf_mf_126;
    }
    zc_int607 += ((((t4657->mU.mX[0UL] * zc_int606 + t4657->mX.mX[1011UL]) + t4657->mX.mX[1012UL]) + t4657->mX.mX[1013UL]) + t4657->mX.mX[1014UL]) + t4657->mX.mX[1015UL];
    if (t4657->mM.mX[275UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int606 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int606 = zc_int639;
    }
    if (t4657->mM.mX[276UL] != 0) {
        BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 = t4657->mX.mX[1614UL] * t3949;
    }
    zc_int606 += ((((t4657->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 + t4657->mX.mX[1019UL]) + t4657->mX.mX[1020UL]) + t4657->mX.mX[1021UL]) + t4657->mX.mX[1022UL]) + t4657->mX.mX[1023UL];
    if (t4657->mM.mX[277UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 = zc_int641;
    }
    if (t4657->mM.mX[278UL] != 0) {
        zc_int612 = 8.200000000000002E-8;
    } else {
        zc_int612 = t4657->mX.mX[1618UL] * t3954;
    }
    BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 += ((((t4657->mU.mX[0UL] * zc_int612 + t4657->mX.mX[1027UL]) + t4657->mX.mX[1028UL]) + t4657->mX.mX[1029UL]) + t4657->mX.mX[1030UL]) + t4657->mX.mX[1031UL];
    if (t4657->mM.mX[279UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int612 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int612 = zc_int643;
    }
    if (t4657->mM.mX[280UL] != 0) {
        zc_int615 = 8.200000000000002E-8;
    } else {
        zc_int615 = t4657->mX.mX[1622UL] * t3959;
    }
    zc_int612 += ((((t4657->mU.mX[0UL] * zc_int615 + t4657->mX.mX[1035UL]) + t4657->mX.mX[1036UL]) + t4657->mX.mX[1037UL]) + t4657->mX.mX[1038UL]) + t4657->mX.mX[1039UL];
    if (t4657->mM.mX[281UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int615 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int615 = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    }
    if (t4657->mM.mX[282UL] != 0) {
        zc_int618 = 8.200000000000002E-8;
    } else {
        zc_int618 = t4657->mX.mX[1626UL] * zc_int646;
    }
    zc_int615 += ((((t4657->mU.mX[0UL] * zc_int618 + t4657->mX.mX[1043UL]) + t4657->mX.mX[1044UL]) + t4657->mX.mX[1045UL]) + t4657->mX.mX[1046UL]) + t4657->mX.mX[1047UL];
    if (t4657->mM.mX[284UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int618 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int618 = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    }
    if (t4657->mM.mX[285UL] != 0) {
        zc_int625 = 8.200000000000002E-8;
    } else {
        zc_int625 = t4657->mX.mX[1630UL] * t3969;
    }
    zc_int618 += ((((t4657->mU.mX[0UL] * zc_int625 + t4657->mX.mX[1051UL]) + t4657->mX.mX[1052UL]) + t4657->mX.mX[1053UL]) + t4657->mX.mX[1054UL]) + t4657->mX.mX[1055UL];
    if (t4657->mM.mX[286UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int625 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int625 = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    }
    if (t4657->mM.mX[287UL] != 0) {
        zc_int628 = 8.200000000000002E-8;
    } else {
        zc_int628 = t4657->mX.mX[1634UL] * zc_int650;
    }
    zc_int625 += ((((t4657->mU.mX[0UL] * zc_int628 + t4657->mX.mX[1059UL]) + t4657->mX.mX[1060UL]) + t4657->mX.mX[1061UL]) + t4657->mX.mX[1062UL]) + t4657->mX.mX[1063UL];
    if (t4657->mM.mX[288UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int628 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int628 = zc_int651;
    }
    if (t4657->mM.mX[289UL] != 0) {
        zc_int631 = 8.200000000000002E-8;
    } else {
        zc_int631 = t4657->mX.mX[1638UL] * zc_int652;
    }
    zc_int628 += ((((t4657->mU.mX[0UL] * zc_int631 + t4657->mX.mX[1067UL]) + t4657->mX.mX[1068UL]) + t4657->mX.mX[1069UL]) + t4657->mX.mX[1070UL]) + t4657->mX.mX[1071UL];
    if (t4657->mM.mX[290UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int631 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int631 = zc_int653;
    }
    if (t4657->mM.mX[291UL] != 0) {
        t3939 = 8.200000000000002E-8;
    } else {
        t3939 = t4657->mX.mX[1642UL] * t3984;
    }
    zc_int631 += ((((t4657->mU.mX[0UL] * t3939 + t4657->mX.mX[1075UL]) + t4657->mX.mX[1076UL]) + t4657->mX.mX[1077UL]) + t4657->mX.mX[1078UL]) + t4657->mX.mX[1079UL];
    if (t4657->mM.mX[292UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        t3939 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        t3939 = zc_int655;
    }
    if (t4657->mM.mX[293UL] != 0) {
        BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3 = 8.200000000000002E-8;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3 = t4657->mX.mX[1646UL] * t3989;
    }
    t3939 += ((((t4657->mU.mX[0UL] * BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3 + t4657->mX.mX[1083UL]) + t4657->mX.mX[1084UL]) + t4657->mX.mX[1085UL]) + t4657->mX.mX[1086UL]) + t4657->mX.mX[1087UL];
    if (t4657->mM.mX[295UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3 = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    }
    if (t4657->mM.mX[296UL] != 0) {
        intrm_sf_mf_126 = 8.200000000000002E-8;
    } else {
        intrm_sf_mf_126 = t2154[0UL] * t4657->mX.mX[1650UL];
    }
    BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3 += ((((t4657->mU.mX[0UL] * intrm_sf_mf_126 + t4657->mX.mX[1091UL]) + t4657->mX.mX[1092UL]) + t4657->mX.mX[1093UL]) + t4657->mX.mX[1094UL]) + t4657->mX.mX[1095UL];
    intrm_sf_mf_126 = BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3 - (-zc_int481);
    zc_int639 = t3939 - (-intrm_sf_mf_126);
    t3949 = zc_int631 - (-zc_int639);
    zc_int641 = zc_int628 - (-t3949);
    t3954 = zc_int625 - (-zc_int641);
    zc_int643 = zc_int618 - (-t3954);
    t3959 = zc_int615 - (-zc_int643);
    BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3 = zc_int612 - (-t3959);
    zc_int646 = BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3 - (-BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3);
    BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3 = zc_int606 - (-zc_int646);
    t3969 = zc_int607 - (-BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3);
    BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3 = zc_int600 - (-t3969);
    zc_int650 = zc_int601 - (-BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3);
    zc_int651 = zc_int598 - (-zc_int650);
    zc_int652 = zc_int595 - (-zc_int651);
    zc_int653 = zc_int588 - (-zc_int652);
    t3984 = BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3 - (-zc_int653);
    zc_int655 = zc_int586 - (-t3984);
    t3989 = zc_int579 - (-zc_int655);
    BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3 = t3894 - (-t3989);
    t3994 = zc_int576 - (-BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3);
    if (t4657->mM.mX[297UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        zc_int457 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    } else {
        zc_int457 = zc_int661;
    }
    if (t4657->mM.mX[298UL] != 0) {
        zc_int661 = 8.200000000000002E-8;
    } else {
        zc_int661 = t4657->mX.mX[1566UL] * intrm_sf_mf_115;
    }
    zc_int661 = (((((t4657->mU.mX[0UL] * zc_int661 + t4657->mX.mX[923UL]) + t4657->mX.mX[924UL]) + t4657->mX.mX[925UL]) + t4657->mX.mX[926UL]) + t4657->mX.mX[927UL]) + zc_int457;
    intrm_sf_mf_115 = zc_int661 - (-t3994);
    if (t4657->mM.mX[299UL] != 0) {
        t2380[0UL] = 0UL;
        for (t2499 = 0UL; t2499 < 21UL; t2499++) {
            t2972 = t2499 / 21UL;
            t2919 = (t2499 - t2499 % 21UL) + t2380[t2972 > 0UL ? 0UL : t2972];
            if (((_NeDynamicSystem*)(LC))->mField0[t2499] * 1.0E-5 < ((_NeDynamicSystem*)(LC))->mField0[t2919 > 20UL ? 20UL : t2919] * 1.0E-5) {
                t2380[t2972 > 0UL ? 0UL : t2972] = t2499 % 21UL;
            }
        }
        BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3 = ((_NeDynamicSystem*)(LC))->mField0[t2380[0UL] > 20UL ? 20UL : t2380[0UL]] * 1.0E-5;
    }
    if (t4657->mM.mX[300UL] != 0) {
        zc_int457 = 8.200000000000002E-8;
    } else {
        zc_int457 = t1488[0UL] * t4657->mX.mX[1654UL];
    }
    zc_int457 = (((((t4657->mU.mX[0UL] * zc_int457 + t4657->mX.mX[1099UL]) + t4657->mX.mX[1100UL]) + t4657->mX.mX[1101UL]) + t4657->mX.mX[1102UL]) + t4657->mX.mX[1103UL]) + BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3;
    BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3 = zc_int457 - (-intrm_sf_mf_115);
    zc_int452 = t4657->mX.mX[1104UL] * 0.00050950000000000008;
    out->mLOG.mX[0UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3UL] = t4657->mX.mX[0UL];
    out->mLOG.mX[4UL] = t4657->mX.mX[0UL];
    out->mLOG.mX[5UL] = t4657->mX.mX[0UL];
    out->mLOG.mX[6UL] = t4657->mX.mX[0UL];
    out->mLOG.mX[7UL] = t4657->mX.mX[1UL] * 0.00027777777777777778;
    out->mLOG.mX[8UL] = t4657->mX.mX[0UL];
    out->mLOG.mX[9UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[10UL] = zc_int6;
    out->mLOG.mX[11UL] = t4657->mX.mX[2UL];
    out->mLOG.mX[12UL] = t4657->mX.mX[2UL];
    out->mLOG.mX[13UL] = t4657->mX.mX[1107UL];
    out->mLOG.mX[14UL] = t3314;
    for (t2499 = 3UL; t2499 - 3UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 12UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[20UL] = t4657->mX.mX[1106UL];
    out->mLOG.mX[21UL] = t4657->mX.mX[1108UL] * 1000.0;
    out->mLOG.mX[22UL] = t4657->mX.mX[1107UL];
    out->mLOG.mX[23UL] = zc_int454;
    out->mLOG.mX[24UL] = t4657->mX.mX[1105UL];
    out->mLOG.mX[25UL] = t4657->mX.mX[1UL];
    out->mLOG.mX[26UL] = t4657->mX.mX[0UL];
    out->mLOG.mX[27UL] = t4657->mX.mX[2UL];
    out->mLOG.mX[28UL] = t4657->mX.mX[1105UL];
    out->mLOG.mX[29UL] = t4657->mX.mX[1106UL];
    out->mLOG.mX[30UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[31UL] = zc_int6;
    out->mLOG.mX[32UL] = t4657->mX.mX[2UL];
    out->mLOG.mX[33UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_electricalModel1;
    out->mLOG.mX[34UL] = t3314;
    out->mLOG.mX[35UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly2_Module02_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly2_Module02_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[3UL] * t4657->mX.mX[3UL] * 0.0 + t4657->mX.mX[4UL] * t4657->mX.mX[4UL] * 0.0) + t4657->mX.mX[5UL] * t4657->mX.mX[5UL] * 0.0) + t4657->mX.mX[6UL] * t4657->mX.mX[6UL] * 0.0) + t4657->mX.mX[7UL] * t4657->mX.mX[7UL] * 0.0) * 0.001;
    out->mLOG.mX[36UL] = t4657->mX.mX[1107UL];
    out->mLOG.mX[37UL] = t4657->mX.mX[1107UL];
    out->mLOG.mX[38UL] = t4657->mX.mX[0UL];
    out->mLOG.mX[39UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[40UL] = t4657->mX.mX[0UL];
    out->mLOG.mX[41UL] = t4657->mX.mX[0UL];
    out->mLOG.mX[42UL] = t4657->mX.mX[1108UL] * 1000.0;
    out->mLOG.mX[43UL] = zc_int454;
    out->mLOG.mX[44UL] = t4657->mX.mX[0UL];
    out->mLOG.mX[45UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[46UL] = BatteryPack_v2_ModuleAssembly2_Module02_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[47UL] = BatteryPack_v2_ModuleAssembly2_Module02_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[48UL] = zc_int6;
    out->mLOG.mX[49UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[50UL] = zc_int6;
    out->mLOG.mX[51UL] = t3314;
    out->mLOG.mX[52UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[53UL] = t3314;
    out->mLOG.mX[54UL] = t4657->mX.mX[0UL];
    out->mLOG.mX[55UL] = BatteryPack_v2_ModuleAssembly2_Module02_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[56UL] = t4657->mX.mX[0UL];
    out->mLOG.mX[57UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[58UL] = zc_int6;
    out->mLOG.mX[59UL] = t4657->mX.mX[2UL];
    out->mLOG.mX[60UL] = t3314;
    out->mLOG.mX[61UL] = 0.0;
    out->mLOG.mX[62UL] = t4657->mX.mX[1107UL];
    out->mLOG.mX[63UL] = t4657->mX.mX[1107UL];
    out->mLOG.mX[64UL] = t4657->mX.mX[0UL];
    out->mLOG.mX[65UL] = zc_int454;
    out->mLOG.mX[66UL] = t3314 - zc_int6;
    out->mLOG.mX[67UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[68UL] = t4657->mX.mX[8UL];
    out->mLOG.mX[69UL] = t4657->mX.mX[8UL];
    out->mLOG.mX[70UL] = t4657->mX.mX[8UL];
    out->mLOG.mX[71UL] = t4657->mX.mX[8UL];
    out->mLOG.mX[72UL] = t4657->mX.mX[9UL] * 0.00027777777777777778;
    out->mLOG.mX[73UL] = t4657->mX.mX[8UL];
    out->mLOG.mX[74UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[75UL] = t3809;
    out->mLOG.mX[76UL] = t4657->mX.mX[10UL];
    out->mLOG.mX[77UL] = t4657->mX.mX[10UL];
    out->mLOG.mX[78UL] = t4657->mX.mX[1111UL];
    out->mLOG.mX[79UL] = zc_int6;
    for (t2499 = 11UL; t2499 - 11UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 69UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[85UL] = t4657->mX.mX[1110UL];
    out->mLOG.mX[86UL] = t4657->mX.mX[1112UL] * 1000.0;
    out->mLOG.mX[87UL] = t4657->mX.mX[1111UL];
    out->mLOG.mX[88UL] = BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3;
    out->mLOG.mX[89UL] = t4657->mX.mX[1109UL];
    out->mLOG.mX[90UL] = t4657->mX.mX[9UL];
    out->mLOG.mX[91UL] = t4657->mX.mX[8UL];
    out->mLOG.mX[92UL] = t4657->mX.mX[10UL];
    out->mLOG.mX[93UL] = t4657->mX.mX[1109UL];
    out->mLOG.mX[94UL] = t4657->mX.mX[1110UL];
    out->mLOG.mX[95UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[96UL] = t3809;
    out->mLOG.mX[97UL] = t4657->mX.mX[10UL];
    out->mLOG.mX[98UL] = t3318;
    out->mLOG.mX[99UL] = zc_int6;
    out->mLOG.mX[100UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly2_Module03_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly2_Module03_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[11UL] * t4657->mX.mX[11UL] * 0.0 + t4657->mX.mX[12UL] * t4657->mX.mX[12UL] * 0.0) + t4657->mX.mX[13UL] * t4657->mX.mX[13UL] * 0.0) + t4657->mX.mX[14UL] * t4657->mX.mX[14UL] * 0.0) + t4657->mX.mX[15UL] * t4657->mX.mX[15UL] * 0.0) * 0.001;
    out->mLOG.mX[101UL] = t4657->mX.mX[1111UL];
    out->mLOG.mX[102UL] = t4657->mX.mX[1111UL];
    out->mLOG.mX[103UL] = t4657->mX.mX[8UL];
    out->mLOG.mX[104UL] = BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[105UL] = t4657->mX.mX[8UL];
    out->mLOG.mX[106UL] = t4657->mX.mX[8UL];
    out->mLOG.mX[107UL] = t4657->mX.mX[1112UL] * 1000.0;
    out->mLOG.mX[108UL] = BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3;
    out->mLOG.mX[109UL] = t4657->mX.mX[8UL];
    out->mLOG.mX[110UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[111UL] = BatteryPack_v2_ModuleAssembly2_Module03_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[112UL] = BatteryPack_v2_ModuleAssembly2_Module03_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[113UL] = t3809;
    out->mLOG.mX[114UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[115UL] = t3809;
    out->mLOG.mX[116UL] = zc_int6;
    out->mLOG.mX[117UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[118UL] = zc_int6;
    out->mLOG.mX[119UL] = t4657->mX.mX[8UL];
    out->mLOG.mX[120UL] = BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[121UL] = t4657->mX.mX[8UL];
    out->mLOG.mX[122UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[123UL] = t3809;
    out->mLOG.mX[124UL] = t4657->mX.mX[10UL];
    out->mLOG.mX[125UL] = zc_int6;
    out->mLOG.mX[126UL] = 0.0;
    out->mLOG.mX[127UL] = t4657->mX.mX[1111UL];
    out->mLOG.mX[128UL] = t4657->mX.mX[1111UL];
    out->mLOG.mX[129UL] = t4657->mX.mX[8UL];
    out->mLOG.mX[130UL] = BatteryPack_v2_ModuleAssembly2_Module03_Cell_1_electricalModel3;
    out->mLOG.mX[131UL] = zc_int6 - t3809;
    out->mLOG.mX[132UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[133UL] = t4657->mX.mX[16UL];
    out->mLOG.mX[134UL] = t4657->mX.mX[16UL];
    out->mLOG.mX[135UL] = t4657->mX.mX[16UL];
    out->mLOG.mX[136UL] = t4657->mX.mX[16UL];
    out->mLOG.mX[137UL] = t4657->mX.mX[17UL] * 0.00027777777777777778;
    out->mLOG.mX[138UL] = t4657->mX.mX[16UL];
    out->mLOG.mX[139UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[140UL] = t3329;
    out->mLOG.mX[141UL] = t4657->mX.mX[18UL];
    out->mLOG.mX[142UL] = t4657->mX.mX[18UL];
    out->mLOG.mX[143UL] = t4657->mX.mX[1115UL];
    out->mLOG.mX[144UL] = t3809;
    for (t2499 = 19UL; t2499 - 19UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 126UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[150UL] = t4657->mX.mX[1114UL];
    out->mLOG.mX[151UL] = t4657->mX.mX[1116UL] * 1000.0;
    out->mLOG.mX[152UL] = t4657->mX.mX[1115UL];
    out->mLOG.mX[153UL] = zc_int3;
    out->mLOG.mX[154UL] = t4657->mX.mX[1113UL];
    out->mLOG.mX[155UL] = t4657->mX.mX[17UL];
    out->mLOG.mX[156UL] = t4657->mX.mX[16UL];
    out->mLOG.mX[157UL] = t4657->mX.mX[18UL];
    out->mLOG.mX[158UL] = t4657->mX.mX[1113UL];
    out->mLOG.mX[159UL] = t4657->mX.mX[1114UL];
    out->mLOG.mX[160UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[161UL] = t3329;
    out->mLOG.mX[162UL] = t4657->mX.mX[18UL];
    out->mLOG.mX[163UL] = t3323;
    out->mLOG.mX[164UL] = t3809;
    out->mLOG.mX[165UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3327 > 8.200000000000002E-8 ? t3327 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[19UL] * t4657->mX.mX[19UL] * 0.0 + t4657->mX.mX[20UL] * t4657->mX.mX[20UL] * 0.0) + t4657->mX.mX[21UL] * t4657->mX.mX[21UL] * 0.0) + t4657->mX.mX[22UL] * t4657->mX.mX[22UL] * 0.0) + t4657->mX.mX[23UL] * t4657->mX.mX[23UL] * 0.0) * 0.001;
    out->mLOG.mX[166UL] = t4657->mX.mX[1115UL];
    out->mLOG.mX[167UL] = t4657->mX.mX[1115UL];
    out->mLOG.mX[168UL] = t4657->mX.mX[16UL];
    out->mLOG.mX[169UL] = t3325 * 1000.0;
    out->mLOG.mX[170UL] = t4657->mX.mX[16UL];
    out->mLOG.mX[171UL] = t4657->mX.mX[16UL];
    out->mLOG.mX[172UL] = t4657->mX.mX[1116UL] * 1000.0;
    out->mLOG.mX[173UL] = zc_int3;
    out->mLOG.mX[174UL] = t4657->mX.mX[16UL];
    out->mLOG.mX[175UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[176UL] = BatteryPack_v2_ModuleAssembly2_Module04_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[177UL] = BatteryPack_v2_ModuleAssembly2_Module04_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[178UL] = t3329;
    out->mLOG.mX[179UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[180UL] = t3329;
    out->mLOG.mX[181UL] = t3809;
    out->mLOG.mX[182UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[183UL] = t3809;
    out->mLOG.mX[184UL] = t4657->mX.mX[16UL];
    out->mLOG.mX[185UL] = t3325 * -1000.0;
    out->mLOG.mX[186UL] = t4657->mX.mX[16UL];
    out->mLOG.mX[187UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[188UL] = t3329;
    out->mLOG.mX[189UL] = t4657->mX.mX[18UL];
    out->mLOG.mX[190UL] = t3809;
    out->mLOG.mX[191UL] = 0.0;
    out->mLOG.mX[192UL] = t4657->mX.mX[1115UL];
    out->mLOG.mX[193UL] = t4657->mX.mX[1115UL];
    out->mLOG.mX[194UL] = t4657->mX.mX[16UL];
    out->mLOG.mX[195UL] = zc_int3;
    out->mLOG.mX[196UL] = t3809 - t3329;
    out->mLOG.mX[197UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[198UL] = t4657->mX.mX[24UL];
    out->mLOG.mX[199UL] = t4657->mX.mX[24UL];
    out->mLOG.mX[200UL] = t4657->mX.mX[24UL];
    out->mLOG.mX[201UL] = t4657->mX.mX[24UL];
    out->mLOG.mX[202UL] = t4657->mX.mX[25UL] * 0.00027777777777777778;
    out->mLOG.mX[203UL] = t4657->mX.mX[24UL];
    out->mLOG.mX[204UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[205UL] = intrm_sf_mf_113;
    out->mLOG.mX[206UL] = t4657->mX.mX[26UL];
    out->mLOG.mX[207UL] = t4657->mX.mX[26UL];
    out->mLOG.mX[208UL] = t4657->mX.mX[1119UL];
    out->mLOG.mX[209UL] = t3329;
    for (t2499 = 27UL; t2499 - 27UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 183UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[215UL] = t4657->mX.mX[1118UL];
    out->mLOG.mX[216UL] = t4657->mX.mX[1120UL] * 1000.0;
    out->mLOG.mX[217UL] = t4657->mX.mX[1119UL];
    out->mLOG.mX[218UL] = zc_int8;
    out->mLOG.mX[219UL] = t4657->mX.mX[1117UL];
    out->mLOG.mX[220UL] = t4657->mX.mX[25UL];
    out->mLOG.mX[221UL] = t4657->mX.mX[24UL];
    out->mLOG.mX[222UL] = t4657->mX.mX[26UL];
    out->mLOG.mX[223UL] = t4657->mX.mX[1117UL];
    out->mLOG.mX[224UL] = t4657->mX.mX[1118UL];
    out->mLOG.mX[225UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[226UL] = intrm_sf_mf_113;
    out->mLOG.mX[227UL] = t4657->mX.mX[26UL];
    out->mLOG.mX[228UL] = t3328;
    out->mLOG.mX[229UL] = t3329;
    out->mLOG.mX[230UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly2_Module05_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly2_Module05_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[27UL] * t4657->mX.mX[27UL] * 0.0 + t4657->mX.mX[28UL] * t4657->mX.mX[28UL] * 0.0) + t4657->mX.mX[29UL] * t4657->mX.mX[29UL] * 0.0) + t4657->mX.mX[30UL] * t4657->mX.mX[30UL] * 0.0) + t4657->mX.mX[31UL] * t4657->mX.mX[31UL] * 0.0) * 0.001;
    out->mLOG.mX[231UL] = t4657->mX.mX[1119UL];
    out->mLOG.mX[232UL] = t4657->mX.mX[1119UL];
    out->mLOG.mX[233UL] = t4657->mX.mX[24UL];
    out->mLOG.mX[234UL] = BatteryPack_v2_ModuleAssembly2_Module05_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[235UL] = t4657->mX.mX[24UL];
    out->mLOG.mX[236UL] = t4657->mX.mX[24UL];
    out->mLOG.mX[237UL] = t4657->mX.mX[1120UL] * 1000.0;
    out->mLOG.mX[238UL] = zc_int8;
    out->mLOG.mX[239UL] = t4657->mX.mX[24UL];
    out->mLOG.mX[240UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[241UL] = BatteryPack_v2_ModuleAssembly2_Module05_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[242UL] = BatteryPack_v2_ModuleAssembly2_Module05_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[243UL] = intrm_sf_mf_113;
    out->mLOG.mX[244UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[245UL] = intrm_sf_mf_113;
    out->mLOG.mX[246UL] = t3329;
    out->mLOG.mX[247UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[248UL] = t3329;
    out->mLOG.mX[249UL] = t4657->mX.mX[24UL];
    out->mLOG.mX[250UL] = BatteryPack_v2_ModuleAssembly2_Module05_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[251UL] = t4657->mX.mX[24UL];
    out->mLOG.mX[252UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[253UL] = intrm_sf_mf_113;
    out->mLOG.mX[254UL] = t4657->mX.mX[26UL];
    out->mLOG.mX[255UL] = t3329;
    out->mLOG.mX[256UL] = 0.0;
    out->mLOG.mX[257UL] = t4657->mX.mX[1119UL];
    out->mLOG.mX[258UL] = t4657->mX.mX[1119UL];
    out->mLOG.mX[259UL] = t4657->mX.mX[24UL];
    out->mLOG.mX[260UL] = zc_int8;
    out->mLOG.mX[261UL] = t3329 - intrm_sf_mf_113;
    out->mLOG.mX[262UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[263UL] = t4657->mX.mX[32UL];
    out->mLOG.mX[264UL] = t4657->mX.mX[32UL];
    out->mLOG.mX[265UL] = t4657->mX.mX[32UL];
    out->mLOG.mX[266UL] = t4657->mX.mX[32UL];
    out->mLOG.mX[267UL] = t4657->mX.mX[33UL] * 0.00027777777777777778;
    out->mLOG.mX[268UL] = t4657->mX.mX[32UL];
    out->mLOG.mX[269UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[270UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[271UL] = t4657->mX.mX[34UL];
    out->mLOG.mX[272UL] = t4657->mX.mX[34UL];
    out->mLOG.mX[273UL] = t4657->mX.mX[1123UL];
    out->mLOG.mX[274UL] = intrm_sf_mf_113;
    for (t2499 = 35UL; t2499 - 35UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 240UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[280UL] = t4657->mX.mX[1122UL];
    out->mLOG.mX[281UL] = t4657->mX.mX[1124UL] * 1000.0;
    out->mLOG.mX[282UL] = t4657->mX.mX[1123UL];
    out->mLOG.mX[283UL] = zc_int10;
    out->mLOG.mX[284UL] = t4657->mX.mX[1121UL];
    out->mLOG.mX[285UL] = t4657->mX.mX[33UL];
    out->mLOG.mX[286UL] = t4657->mX.mX[32UL];
    out->mLOG.mX[287UL] = t4657->mX.mX[34UL];
    out->mLOG.mX[288UL] = t4657->mX.mX[1121UL];
    out->mLOG.mX[289UL] = t4657->mX.mX[1122UL];
    out->mLOG.mX[290UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[291UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[292UL] = t4657->mX.mX[34UL];
    out->mLOG.mX[293UL] = BatteryPack_v2_ModuleAssembly2_Module06_Cell_1_electricalModel0;
    out->mLOG.mX[294UL] = intrm_sf_mf_113;
    out->mLOG.mX[295UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly2_Module06_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly2_Module06_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[35UL] * t4657->mX.mX[35UL] * 0.0 + t4657->mX.mX[36UL] * t4657->mX.mX[36UL] * 0.0) + t4657->mX.mX[37UL] * t4657->mX.mX[37UL] * 0.0) + t4657->mX.mX[38UL] * t4657->mX.mX[38UL] * 0.0) + t4657->mX.mX[39UL] * t4657->mX.mX[39UL] * 0.0) * 0.001;
    out->mLOG.mX[296UL] = t4657->mX.mX[1123UL];
    out->mLOG.mX[297UL] = t4657->mX.mX[1123UL];
    out->mLOG.mX[298UL] = t4657->mX.mX[32UL];
    out->mLOG.mX[299UL] = BatteryPack_v2_ModuleAssembly2_Module06_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[300UL] = t4657->mX.mX[32UL];
    out->mLOG.mX[301UL] = t4657->mX.mX[32UL];
    out->mLOG.mX[302UL] = t4657->mX.mX[1124UL] * 1000.0;
    out->mLOG.mX[303UL] = zc_int10;
    out->mLOG.mX[304UL] = t4657->mX.mX[32UL];
    out->mLOG.mX[305UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[306UL] = BatteryPack_v2_ModuleAssembly2_Module06_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[307UL] = BatteryPack_v2_ModuleAssembly2_Module06_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[308UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[309UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[310UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[311UL] = intrm_sf_mf_113;
    out->mLOG.mX[312UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[313UL] = intrm_sf_mf_113;
    out->mLOG.mX[314UL] = t4657->mX.mX[32UL];
    out->mLOG.mX[315UL] = BatteryPack_v2_ModuleAssembly2_Module06_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[316UL] = t4657->mX.mX[32UL];
    out->mLOG.mX[317UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[318UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[319UL] = t4657->mX.mX[34UL];
    out->mLOG.mX[320UL] = intrm_sf_mf_113;
    out->mLOG.mX[321UL] = 0.0;
    out->mLOG.mX[322UL] = t4657->mX.mX[1123UL];
    out->mLOG.mX[323UL] = t4657->mX.mX[1123UL];
    out->mLOG.mX[324UL] = t4657->mX.mX[32UL];
    out->mLOG.mX[325UL] = zc_int10;
    out->mLOG.mX[326UL] = intrm_sf_mf_113 - BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[327UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[328UL] = t4657->mX.mX[40UL];
    out->mLOG.mX[329UL] = t4657->mX.mX[40UL];
    out->mLOG.mX[330UL] = t4657->mX.mX[40UL];
    out->mLOG.mX[331UL] = t4657->mX.mX[40UL];
    out->mLOG.mX[332UL] = t4657->mX.mX[41UL] * 0.00027777777777777778;
    out->mLOG.mX[333UL] = t4657->mX.mX[40UL];
    out->mLOG.mX[334UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[335UL] = intrm_sf_mf_112;
    out->mLOG.mX[336UL] = t4657->mX.mX[42UL];
    out->mLOG.mX[337UL] = t4657->mX.mX[42UL];
    out->mLOG.mX[338UL] = t4657->mX.mX[1127UL];
    out->mLOG.mX[339UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    for (t2499 = 43UL; t2499 - 43UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 297UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[345UL] = t4657->mX.mX[1126UL];
    out->mLOG.mX[346UL] = t4657->mX.mX[1128UL] * 1000.0;
    out->mLOG.mX[347UL] = t4657->mX.mX[1127UL];
    out->mLOG.mX[348UL] = t3494;
    out->mLOG.mX[349UL] = t4657->mX.mX[1125UL];
    out->mLOG.mX[350UL] = t4657->mX.mX[41UL];
    out->mLOG.mX[351UL] = t4657->mX.mX[40UL];
    out->mLOG.mX[352UL] = t4657->mX.mX[42UL];
    out->mLOG.mX[353UL] = t4657->mX.mX[1125UL];
    out->mLOG.mX[354UL] = t4657->mX.mX[1126UL];
    out->mLOG.mX[355UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[356UL] = intrm_sf_mf_112;
    out->mLOG.mX[357UL] = t4657->mX.mX[42UL];
    out->mLOG.mX[358UL] = BatteryPack_v2_ModuleAssembly2_Module07_Cell_1_electricalModel0;
    out->mLOG.mX[359UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[360UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3342 > 8.200000000000002E-8 ? t3342 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[43UL] * t4657->mX.mX[43UL] * 0.0 + t4657->mX.mX[44UL] * t4657->mX.mX[44UL] * 0.0) + t4657->mX.mX[45UL] * t4657->mX.mX[45UL] * 0.0) + t4657->mX.mX[46UL] * t4657->mX.mX[46UL] * 0.0) + t4657->mX.mX[47UL] * t4657->mX.mX[47UL] * 0.0) * 0.001;
    out->mLOG.mX[361UL] = t4657->mX.mX[1127UL];
    out->mLOG.mX[362UL] = t4657->mX.mX[1127UL];
    out->mLOG.mX[363UL] = t4657->mX.mX[40UL];
    out->mLOG.mX[364UL] = t3340 * 1000.0;
    out->mLOG.mX[365UL] = t4657->mX.mX[40UL];
    out->mLOG.mX[366UL] = t4657->mX.mX[40UL];
    out->mLOG.mX[367UL] = t4657->mX.mX[1128UL] * 1000.0;
    out->mLOG.mX[368UL] = t3494;
    out->mLOG.mX[369UL] = t4657->mX.mX[40UL];
    out->mLOG.mX[370UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[371UL] = BatteryPack_v2_ModuleAssembly2_Module07_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[372UL] = BatteryPack_v2_ModuleAssembly2_Module07_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[373UL] = intrm_sf_mf_112;
    out->mLOG.mX[374UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[375UL] = intrm_sf_mf_112;
    out->mLOG.mX[376UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[377UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[378UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[379UL] = t4657->mX.mX[40UL];
    out->mLOG.mX[380UL] = t3340 * -1000.0;
    out->mLOG.mX[381UL] = t4657->mX.mX[40UL];
    out->mLOG.mX[382UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[383UL] = intrm_sf_mf_112;
    out->mLOG.mX[384UL] = t4657->mX.mX[42UL];
    out->mLOG.mX[385UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[386UL] = 0.0;
    out->mLOG.mX[387UL] = t4657->mX.mX[1127UL];
    out->mLOG.mX[388UL] = t4657->mX.mX[1127UL];
    out->mLOG.mX[389UL] = t4657->mX.mX[40UL];
    out->mLOG.mX[390UL] = t3494;
    out->mLOG.mX[391UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel3 - intrm_sf_mf_112;
    out->mLOG.mX[392UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[393UL] = t4657->mX.mX[48UL];
    out->mLOG.mX[394UL] = t4657->mX.mX[48UL];
    out->mLOG.mX[395UL] = t4657->mX.mX[48UL];
    out->mLOG.mX[396UL] = t4657->mX.mX[48UL];
    out->mLOG.mX[397UL] = t4657->mX.mX[49UL] * 0.00027777777777777778;
    out->mLOG.mX[398UL] = t4657->mX.mX[48UL];
    out->mLOG.mX[399UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[400UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[401UL] = t4657->mX.mX[50UL];
    out->mLOG.mX[402UL] = t4657->mX.mX[50UL];
    out->mLOG.mX[403UL] = t4657->mX.mX[1131UL];
    out->mLOG.mX[404UL] = intrm_sf_mf_112;
    for (t2499 = 51UL; t2499 - 51UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 354UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[410UL] = t4657->mX.mX[1130UL];
    out->mLOG.mX[411UL] = t4657->mX.mX[1132UL] * 1000.0;
    out->mLOG.mX[412UL] = t4657->mX.mX[1131UL];
    out->mLOG.mX[413UL] = zc_int148;
    out->mLOG.mX[414UL] = t4657->mX.mX[1129UL];
    out->mLOG.mX[415UL] = t4657->mX.mX[49UL];
    out->mLOG.mX[416UL] = t4657->mX.mX[48UL];
    out->mLOG.mX[417UL] = t4657->mX.mX[50UL];
    out->mLOG.mX[418UL] = t4657->mX.mX[1129UL];
    out->mLOG.mX[419UL] = t4657->mX.mX[1130UL];
    out->mLOG.mX[420UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[421UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[422UL] = t4657->mX.mX[50UL];
    out->mLOG.mX[423UL] = t3343;
    out->mLOG.mX[424UL] = intrm_sf_mf_112;
    out->mLOG.mX[425UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3347 > 8.200000000000002E-8 ? t3347 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[51UL] * t4657->mX.mX[51UL] * 0.0 + t4657->mX.mX[52UL] * t4657->mX.mX[52UL] * 0.0) + t4657->mX.mX[53UL] * t4657->mX.mX[53UL] * 0.0) + t4657->mX.mX[54UL] * t4657->mX.mX[54UL] * 0.0) + t4657->mX.mX[55UL] * t4657->mX.mX[55UL] * 0.0) * 0.001;
    out->mLOG.mX[426UL] = t4657->mX.mX[1131UL];
    out->mLOG.mX[427UL] = t4657->mX.mX[1131UL];
    out->mLOG.mX[428UL] = t4657->mX.mX[48UL];
    out->mLOG.mX[429UL] = t3345 * 1000.0;
    out->mLOG.mX[430UL] = t4657->mX.mX[48UL];
    out->mLOG.mX[431UL] = t4657->mX.mX[48UL];
    out->mLOG.mX[432UL] = t4657->mX.mX[1132UL] * 1000.0;
    out->mLOG.mX[433UL] = zc_int148;
    out->mLOG.mX[434UL] = t4657->mX.mX[48UL];
    out->mLOG.mX[435UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[436UL] = BatteryPack_v2_ModuleAssembly2_Module08_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[437UL] = BatteryPack_v2_ModuleAssembly2_Module08_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[438UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[439UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[440UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[441UL] = intrm_sf_mf_112;
    out->mLOG.mX[442UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[443UL] = intrm_sf_mf_112;
    out->mLOG.mX[444UL] = t4657->mX.mX[48UL];
    out->mLOG.mX[445UL] = t3345 * -1000.0;
    out->mLOG.mX[446UL] = t4657->mX.mX[48UL];
    out->mLOG.mX[447UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[448UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[449UL] = t4657->mX.mX[50UL];
    out->mLOG.mX[450UL] = intrm_sf_mf_112;
    out->mLOG.mX[451UL] = 0.0;
    out->mLOG.mX[452UL] = t4657->mX.mX[1131UL];
    out->mLOG.mX[453UL] = t4657->mX.mX[1131UL];
    out->mLOG.mX[454UL] = t4657->mX.mX[48UL];
    out->mLOG.mX[455UL] = zc_int148;
    out->mLOG.mX[456UL] = intrm_sf_mf_112 - BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[457UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[458UL] = t4657->mX.mX[56UL];
    out->mLOG.mX[459UL] = t4657->mX.mX[56UL];
    out->mLOG.mX[460UL] = t4657->mX.mX[56UL];
    out->mLOG.mX[461UL] = t4657->mX.mX[56UL];
    out->mLOG.mX[462UL] = t4657->mX.mX[57UL] * 0.00027777777777777778;
    out->mLOG.mX[463UL] = t4657->mX.mX[56UL];
    out->mLOG.mX[464UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[465UL] = t3869;
    out->mLOG.mX[466UL] = t4657->mX.mX[58UL];
    out->mLOG.mX[467UL] = t4657->mX.mX[58UL];
    out->mLOG.mX[468UL] = t4657->mX.mX[1135UL];
    out->mLOG.mX[469UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    for (t2499 = 59UL; t2499 - 59UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 411UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[475UL] = t4657->mX.mX[1134UL];
    out->mLOG.mX[476UL] = t4657->mX.mX[1136UL] * 1000.0;
    out->mLOG.mX[477UL] = t4657->mX.mX[1135UL];
    out->mLOG.mX[478UL] = zc_int178;
    out->mLOG.mX[479UL] = t4657->mX.mX[1133UL];
    out->mLOG.mX[480UL] = t4657->mX.mX[57UL];
    out->mLOG.mX[481UL] = t4657->mX.mX[56UL];
    out->mLOG.mX[482UL] = t4657->mX.mX[58UL];
    out->mLOG.mX[483UL] = t4657->mX.mX[1133UL];
    out->mLOG.mX[484UL] = t4657->mX.mX[1134UL];
    out->mLOG.mX[485UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[486UL] = t3869;
    out->mLOG.mX[487UL] = t4657->mX.mX[58UL];
    out->mLOG.mX[488UL] = BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel0;
    out->mLOG.mX[489UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[490UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3352 > 8.200000000000002E-8 ? t3352 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[59UL] * t4657->mX.mX[59UL] * 0.0 + t4657->mX.mX[60UL] * t4657->mX.mX[60UL] * 0.0) + t4657->mX.mX[61UL] * t4657->mX.mX[61UL] * 0.0) + t4657->mX.mX[62UL] * t4657->mX.mX[62UL] * 0.0) + t4657->mX.mX[63UL] * t4657->mX.mX[63UL] * 0.0) * 0.001;
    out->mLOG.mX[491UL] = t4657->mX.mX[1135UL];
    out->mLOG.mX[492UL] = t4657->mX.mX[1135UL];
    out->mLOG.mX[493UL] = t4657->mX.mX[56UL];
    out->mLOG.mX[494UL] = BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[495UL] = t4657->mX.mX[56UL];
    out->mLOG.mX[496UL] = t4657->mX.mX[56UL];
    out->mLOG.mX[497UL] = t4657->mX.mX[1136UL] * 1000.0;
    out->mLOG.mX[498UL] = zc_int178;
    out->mLOG.mX[499UL] = t4657->mX.mX[56UL];
    out->mLOG.mX[500UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[501UL] = BatteryPack_v2_ModuleAssembly2_Module09_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[502UL] = BatteryPack_v2_ModuleAssembly2_Module09_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[503UL] = t3869;
    out->mLOG.mX[504UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[505UL] = t3869;
    out->mLOG.mX[506UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[507UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[508UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[509UL] = t4657->mX.mX[56UL];
    out->mLOG.mX[510UL] = BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[511UL] = t4657->mX.mX[56UL];
    out->mLOG.mX[512UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[513UL] = t3869;
    out->mLOG.mX[514UL] = t4657->mX.mX[58UL];
    out->mLOG.mX[515UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[516UL] = 0.0;
    out->mLOG.mX[517UL] = t4657->mX.mX[1135UL];
    out->mLOG.mX[518UL] = t4657->mX.mX[1135UL];
    out->mLOG.mX[519UL] = t4657->mX.mX[56UL];
    out->mLOG.mX[520UL] = zc_int178;
    out->mLOG.mX[521UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel3 - t3869;
    out->mLOG.mX[522UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[523UL] = t4657->mX.mX[64UL];
    out->mLOG.mX[524UL] = t4657->mX.mX[64UL];
    out->mLOG.mX[525UL] = t4657->mX.mX[64UL];
    out->mLOG.mX[526UL] = t4657->mX.mX[64UL];
    out->mLOG.mX[527UL] = t4657->mX.mX[65UL] * 0.00027777777777777778;
    out->mLOG.mX[528UL] = t4657->mX.mX[64UL];
    out->mLOG.mX[529UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[530UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    out->mLOG.mX[531UL] = t4657->mX.mX[66UL];
    out->mLOG.mX[532UL] = t4657->mX.mX[66UL];
    out->mLOG.mX[533UL] = t4657->mX.mX[1139UL];
    out->mLOG.mX[534UL] = t3869;
    for (t2499 = 67UL; t2499 - 67UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 468UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[540UL] = t4657->mX.mX[1138UL];
    out->mLOG.mX[541UL] = t4657->mX.mX[1140UL] * 1000.0;
    out->mLOG.mX[542UL] = t4657->mX.mX[1139UL];
    out->mLOG.mX[543UL] = zc_int208;
    out->mLOG.mX[544UL] = t4657->mX.mX[1137UL];
    out->mLOG.mX[545UL] = t4657->mX.mX[65UL];
    out->mLOG.mX[546UL] = t4657->mX.mX[64UL];
    out->mLOG.mX[547UL] = t4657->mX.mX[66UL];
    out->mLOG.mX[548UL] = t4657->mX.mX[1137UL];
    out->mLOG.mX[549UL] = t4657->mX.mX[1138UL];
    out->mLOG.mX[550UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[551UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    out->mLOG.mX[552UL] = t4657->mX.mX[66UL];
    out->mLOG.mX[553UL] = t3353;
    out->mLOG.mX[554UL] = t3869;
    out->mLOG.mX[555UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3357 > 8.200000000000002E-8 ? t3357 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[67UL] * t4657->mX.mX[67UL] * 0.0 + t4657->mX.mX[68UL] * t4657->mX.mX[68UL] * 0.0) + t4657->mX.mX[69UL] * t4657->mX.mX[69UL] * 0.0) + t4657->mX.mX[70UL] * t4657->mX.mX[70UL] * 0.0) + t4657->mX.mX[71UL] * t4657->mX.mX[71UL] * 0.0) * 0.001;
    out->mLOG.mX[556UL] = t4657->mX.mX[1139UL];
    out->mLOG.mX[557UL] = t4657->mX.mX[1139UL];
    out->mLOG.mX[558UL] = t4657->mX.mX[64UL];
    out->mLOG.mX[559UL] = BatteryPack_v2_ModuleAssembly2_Module10_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[560UL] = t4657->mX.mX[64UL];
    out->mLOG.mX[561UL] = t4657->mX.mX[64UL];
    out->mLOG.mX[562UL] = t4657->mX.mX[1140UL] * 1000.0;
    out->mLOG.mX[563UL] = zc_int208;
    out->mLOG.mX[564UL] = t4657->mX.mX[64UL];
    out->mLOG.mX[565UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[566UL] = BatteryPack_v2_ModuleAssembly2_Module10_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[567UL] = BatteryPack_v2_ModuleAssembly2_Module10_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[568UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    out->mLOG.mX[569UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[570UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    out->mLOG.mX[571UL] = t3869;
    out->mLOG.mX[572UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[573UL] = t3869;
    out->mLOG.mX[574UL] = t4657->mX.mX[64UL];
    out->mLOG.mX[575UL] = BatteryPack_v2_ModuleAssembly2_Module10_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[576UL] = t4657->mX.mX[64UL];
    out->mLOG.mX[577UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[578UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    out->mLOG.mX[579UL] = t4657->mX.mX[66UL];
    out->mLOG.mX[580UL] = t3869;
    out->mLOG.mX[581UL] = 0.0;
    out->mLOG.mX[582UL] = t4657->mX.mX[1139UL];
    out->mLOG.mX[583UL] = t4657->mX.mX[1139UL];
    out->mLOG.mX[584UL] = t4657->mX.mX[64UL];
    out->mLOG.mX[585UL] = zc_int208;
    out->mLOG.mX[586UL] = t3869 - BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    out->mLOG.mX[587UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[588UL] = t4657->mX.mX[72UL];
    out->mLOG.mX[589UL] = t4657->mX.mX[72UL];
    out->mLOG.mX[590UL] = t4657->mX.mX[72UL];
    out->mLOG.mX[591UL] = t4657->mX.mX[72UL];
    out->mLOG.mX[592UL] = t4657->mX.mX[73UL] * 0.00027777777777777778;
    out->mLOG.mX[593UL] = t4657->mX.mX[72UL];
    out->mLOG.mX[594UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[595UL] = intrm_sf_mf_110;
    out->mLOG.mX[596UL] = t4657->mX.mX[74UL];
    out->mLOG.mX[597UL] = t4657->mX.mX[74UL];
    out->mLOG.mX[598UL] = t4657->mX.mX[1143UL];
    out->mLOG.mX[599UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    for (t2499 = 75UL; t2499 - 75UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 525UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[605UL] = t4657->mX.mX[1142UL];
    out->mLOG.mX[606UL] = t4657->mX.mX[1144UL] * 1000.0;
    out->mLOG.mX[607UL] = t4657->mX.mX[1143UL];
    out->mLOG.mX[608UL] = zc_int24;
    out->mLOG.mX[609UL] = t4657->mX.mX[1141UL];
    out->mLOG.mX[610UL] = t4657->mX.mX[73UL];
    out->mLOG.mX[611UL] = t4657->mX.mX[72UL];
    out->mLOG.mX[612UL] = t4657->mX.mX[74UL];
    out->mLOG.mX[613UL] = t4657->mX.mX[1141UL];
    out->mLOG.mX[614UL] = t4657->mX.mX[1142UL];
    out->mLOG.mX[615UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[616UL] = intrm_sf_mf_110;
    out->mLOG.mX[617UL] = t4657->mX.mX[74UL];
    out->mLOG.mX[618UL] = t3358;
    out->mLOG.mX[619UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    out->mLOG.mX[620UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly2_Module11_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly2_Module11_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[75UL] * t4657->mX.mX[75UL] * 0.0 + t4657->mX.mX[76UL] * t4657->mX.mX[76UL] * 0.0) + t4657->mX.mX[77UL] * t4657->mX.mX[77UL] * 0.0) + t4657->mX.mX[78UL] * t4657->mX.mX[78UL] * 0.0) + t4657->mX.mX[79UL] * t4657->mX.mX[79UL] * 0.0) * 0.001;
    out->mLOG.mX[621UL] = t4657->mX.mX[1143UL];
    out->mLOG.mX[622UL] = t4657->mX.mX[1143UL];
    out->mLOG.mX[623UL] = t4657->mX.mX[72UL];
    out->mLOG.mX[624UL] = t3360 * 1000.0;
    out->mLOG.mX[625UL] = t4657->mX.mX[72UL];
    out->mLOG.mX[626UL] = t4657->mX.mX[72UL];
    out->mLOG.mX[627UL] = t4657->mX.mX[1144UL] * 1000.0;
    out->mLOG.mX[628UL] = zc_int24;
    out->mLOG.mX[629UL] = t4657->mX.mX[72UL];
    out->mLOG.mX[630UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[631UL] = BatteryPack_v2_ModuleAssembly2_Module11_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[632UL] = BatteryPack_v2_ModuleAssembly2_Module11_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[633UL] = intrm_sf_mf_110;
    out->mLOG.mX[634UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[635UL] = intrm_sf_mf_110;
    out->mLOG.mX[636UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    out->mLOG.mX[637UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[638UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    out->mLOG.mX[639UL] = t4657->mX.mX[72UL];
    out->mLOG.mX[640UL] = t3360 * -1000.0;
    out->mLOG.mX[641UL] = t4657->mX.mX[72UL];
    out->mLOG.mX[642UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[643UL] = intrm_sf_mf_110;
    out->mLOG.mX[644UL] = t4657->mX.mX[74UL];
    out->mLOG.mX[645UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3;
    out->mLOG.mX[646UL] = 0.0;
    out->mLOG.mX[647UL] = t4657->mX.mX[1143UL];
    out->mLOG.mX[648UL] = t4657->mX.mX[1143UL];
    out->mLOG.mX[649UL] = t4657->mX.mX[72UL];
    out->mLOG.mX[650UL] = zc_int24;
    out->mLOG.mX[651UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_electricalModel3 - intrm_sf_mf_110;
    out->mLOG.mX[652UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[653UL] = t4657->mX.mX[80UL];
    out->mLOG.mX[654UL] = t4657->mX.mX[80UL];
    out->mLOG.mX[655UL] = t4657->mX.mX[80UL];
    out->mLOG.mX[656UL] = t4657->mX.mX[80UL];
    out->mLOG.mX[657UL] = t4657->mX.mX[81UL] * 0.00027777777777777778;
    out->mLOG.mX[658UL] = t4657->mX.mX[80UL];
    out->mLOG.mX[659UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[660UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    out->mLOG.mX[661UL] = t4657->mX.mX[82UL];
    out->mLOG.mX[662UL] = t4657->mX.mX[82UL];
    out->mLOG.mX[663UL] = t4657->mX.mX[1147UL];
    out->mLOG.mX[664UL] = intrm_sf_mf_110;
    for (t2499 = 83UL; t2499 - 83UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 582UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[670UL] = t4657->mX.mX[1146UL];
    out->mLOG.mX[671UL] = t4657->mX.mX[1148UL] * 1000.0;
    out->mLOG.mX[672UL] = t4657->mX.mX[1147UL];
    out->mLOG.mX[673UL] = BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[674UL] = t4657->mX.mX[1145UL];
    out->mLOG.mX[675UL] = t4657->mX.mX[81UL];
    out->mLOG.mX[676UL] = t4657->mX.mX[80UL];
    out->mLOG.mX[677UL] = t4657->mX.mX[82UL];
    out->mLOG.mX[678UL] = t4657->mX.mX[1145UL];
    out->mLOG.mX[679UL] = t4657->mX.mX[1146UL];
    out->mLOG.mX[680UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[681UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    out->mLOG.mX[682UL] = t4657->mX.mX[82UL];
    out->mLOG.mX[683UL] = BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel0;
    out->mLOG.mX[684UL] = intrm_sf_mf_110;
    out->mLOG.mX[685UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3367 > 8.200000000000002E-8 ? t3367 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[83UL] * t4657->mX.mX[83UL] * 0.0 + t4657->mX.mX[84UL] * t4657->mX.mX[84UL] * 0.0) + t4657->mX.mX[85UL] * t4657->mX.mX[85UL] * 0.0) + t4657->mX.mX[86UL] * t4657->mX.mX[86UL] * 0.0) + t4657->mX.mX[87UL] * t4657->mX.mX[87UL] * 0.0) * 0.001;
    out->mLOG.mX[686UL] = t4657->mX.mX[1147UL];
    out->mLOG.mX[687UL] = t4657->mX.mX[1147UL];
    out->mLOG.mX[688UL] = t4657->mX.mX[80UL];
    out->mLOG.mX[689UL] = t3365 * 1000.0;
    out->mLOG.mX[690UL] = t4657->mX.mX[80UL];
    out->mLOG.mX[691UL] = t4657->mX.mX[80UL];
    out->mLOG.mX[692UL] = t4657->mX.mX[1148UL] * 1000.0;
    out->mLOG.mX[693UL] = BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[694UL] = t4657->mX.mX[80UL];
    out->mLOG.mX[695UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[696UL] = BatteryPack_v2_ModuleAssembly2_Module12_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[697UL] = BatteryPack_v2_ModuleAssembly2_Module12_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[698UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    out->mLOG.mX[699UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[700UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    out->mLOG.mX[701UL] = intrm_sf_mf_110;
    out->mLOG.mX[702UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[703UL] = intrm_sf_mf_110;
    out->mLOG.mX[704UL] = t4657->mX.mX[80UL];
    out->mLOG.mX[705UL] = t3365 * -1000.0;
    out->mLOG.mX[706UL] = t4657->mX.mX[80UL];
    out->mLOG.mX[707UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[708UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    out->mLOG.mX[709UL] = t4657->mX.mX[82UL];
    out->mLOG.mX[710UL] = intrm_sf_mf_110;
    out->mLOG.mX[711UL] = 0.0;
    out->mLOG.mX[712UL] = t4657->mX.mX[1147UL];
    out->mLOG.mX[713UL] = t4657->mX.mX[1147UL];
    out->mLOG.mX[714UL] = t4657->mX.mX[80UL];
    out->mLOG.mX[715UL] = BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[716UL] = intrm_sf_mf_110 - BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    out->mLOG.mX[717UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[718UL] = t4657->mX.mX[88UL];
    out->mLOG.mX[719UL] = t4657->mX.mX[88UL];
    out->mLOG.mX[720UL] = t4657->mX.mX[88UL];
    out->mLOG.mX[721UL] = t4657->mX.mX[88UL];
    out->mLOG.mX[722UL] = t4657->mX.mX[89UL] * 0.00027777777777777778;
    out->mLOG.mX[723UL] = t4657->mX.mX[88UL];
    out->mLOG.mX[724UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[725UL] = intrm_sf_mf_109;
    out->mLOG.mX[726UL] = t4657->mX.mX[90UL];
    out->mLOG.mX[727UL] = t4657->mX.mX[90UL];
    out->mLOG.mX[728UL] = t4657->mX.mX[1151UL];
    out->mLOG.mX[729UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    for (t2499 = 91UL; t2499 - 91UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 639UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[735UL] = t4657->mX.mX[1150UL];
    out->mLOG.mX[736UL] = t4657->mX.mX[1152UL] * 1000.0;
    out->mLOG.mX[737UL] = t4657->mX.mX[1151UL];
    out->mLOG.mX[738UL] = zc_int30;
    out->mLOG.mX[739UL] = t4657->mX.mX[1149UL];
    out->mLOG.mX[740UL] = t4657->mX.mX[89UL];
    out->mLOG.mX[741UL] = t4657->mX.mX[88UL];
    out->mLOG.mX[742UL] = t4657->mX.mX[90UL];
    out->mLOG.mX[743UL] = t4657->mX.mX[1149UL];
    out->mLOG.mX[744UL] = t4657->mX.mX[1150UL];
    out->mLOG.mX[745UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[746UL] = intrm_sf_mf_109;
    out->mLOG.mX[747UL] = t4657->mX.mX[90UL];
    out->mLOG.mX[748UL] = t3368;
    out->mLOG.mX[749UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    out->mLOG.mX[750UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly2_Module13_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly2_Module13_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[91UL] * t4657->mX.mX[91UL] * 0.0 + t4657->mX.mX[92UL] * t4657->mX.mX[92UL] * 0.0) + t4657->mX.mX[93UL] * t4657->mX.mX[93UL] * 0.0) + t4657->mX.mX[94UL] * t4657->mX.mX[94UL] * 0.0) + t4657->mX.mX[95UL] * t4657->mX.mX[95UL] * 0.0) * 0.001;
    out->mLOG.mX[751UL] = t4657->mX.mX[1151UL];
    out->mLOG.mX[752UL] = t4657->mX.mX[1151UL];
    out->mLOG.mX[753UL] = t4657->mX.mX[88UL];
    out->mLOG.mX[754UL] = BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[755UL] = t4657->mX.mX[88UL];
    out->mLOG.mX[756UL] = t4657->mX.mX[88UL];
    out->mLOG.mX[757UL] = t4657->mX.mX[1152UL] * 1000.0;
    out->mLOG.mX[758UL] = zc_int30;
    out->mLOG.mX[759UL] = t4657->mX.mX[88UL];
    out->mLOG.mX[760UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[761UL] = BatteryPack_v2_ModuleAssembly2_Module13_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[762UL] = BatteryPack_v2_ModuleAssembly2_Module13_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[763UL] = intrm_sf_mf_109;
    out->mLOG.mX[764UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[765UL] = intrm_sf_mf_109;
    out->mLOG.mX[766UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    out->mLOG.mX[767UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[768UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    out->mLOG.mX[769UL] = t4657->mX.mX[88UL];
    out->mLOG.mX[770UL] = BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[771UL] = t4657->mX.mX[88UL];
    out->mLOG.mX[772UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[773UL] = intrm_sf_mf_109;
    out->mLOG.mX[774UL] = t4657->mX.mX[90UL];
    out->mLOG.mX[775UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3;
    out->mLOG.mX[776UL] = 0.0;
    out->mLOG.mX[777UL] = t4657->mX.mX[1151UL];
    out->mLOG.mX[778UL] = t4657->mX.mX[1151UL];
    out->mLOG.mX[779UL] = t4657->mX.mX[88UL];
    out->mLOG.mX[780UL] = zc_int30;
    out->mLOG.mX[781UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_electricalModel3 - intrm_sf_mf_109;
    out->mLOG.mX[782UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[783UL] = t4657->mX.mX[96UL];
    out->mLOG.mX[784UL] = t4657->mX.mX[96UL];
    out->mLOG.mX[785UL] = t4657->mX.mX[96UL];
    out->mLOG.mX[786UL] = t4657->mX.mX[96UL];
    out->mLOG.mX[787UL] = t4657->mX.mX[97UL] * 0.00027777777777777778;
    out->mLOG.mX[788UL] = t4657->mX.mX[96UL];
    out->mLOG.mX[789UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[790UL] = zc_int439;
    out->mLOG.mX[791UL] = t4657->mX.mX[98UL];
    out->mLOG.mX[792UL] = t4657->mX.mX[98UL];
    out->mLOG.mX[793UL] = t4657->mX.mX[1155UL];
    out->mLOG.mX[794UL] = intrm_sf_mf_109;
    for (t2499 = 99UL; t2499 - 99UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 696UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[800UL] = t4657->mX.mX[1154UL];
    out->mLOG.mX[801UL] = t4657->mX.mX[1156UL] * 1000.0;
    out->mLOG.mX[802UL] = t4657->mX.mX[1155UL];
    out->mLOG.mX[803UL] = zc_int35;
    out->mLOG.mX[804UL] = t4657->mX.mX[1153UL];
    out->mLOG.mX[805UL] = t4657->mX.mX[97UL];
    out->mLOG.mX[806UL] = t4657->mX.mX[96UL];
    out->mLOG.mX[807UL] = t4657->mX.mX[98UL];
    out->mLOG.mX[808UL] = t4657->mX.mX[1153UL];
    out->mLOG.mX[809UL] = t4657->mX.mX[1154UL];
    out->mLOG.mX[810UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[811UL] = zc_int439;
    out->mLOG.mX[812UL] = t4657->mX.mX[98UL];
    out->mLOG.mX[813UL] = t3373;
    out->mLOG.mX[814UL] = intrm_sf_mf_109;
    out->mLOG.mX[815UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3377 > 8.200000000000002E-8 ? t3377 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[99UL] * t4657->mX.mX[99UL] * 0.0 + t4657->mX.mX[100UL] * t4657->mX.mX[100UL] * 0.0) + t4657->mX.mX[101UL] * t4657->mX.mX[101UL] * 0.0) + t4657->mX.mX[102UL] * t4657->mX.mX[102UL] * 0.0) + t4657->mX.mX[103UL] * t4657->mX.mX[103UL] * 0.0) * 0.001;
    out->mLOG.mX[816UL] = t4657->mX.mX[1155UL];
    out->mLOG.mX[817UL] = t4657->mX.mX[1155UL];
    out->mLOG.mX[818UL] = t4657->mX.mX[96UL];
    out->mLOG.mX[819UL] = BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[820UL] = t4657->mX.mX[96UL];
    out->mLOG.mX[821UL] = t4657->mX.mX[96UL];
    out->mLOG.mX[822UL] = t4657->mX.mX[1156UL] * 1000.0;
    out->mLOG.mX[823UL] = zc_int35;
    out->mLOG.mX[824UL] = t4657->mX.mX[96UL];
    out->mLOG.mX[825UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[826UL] = BatteryPack_v2_ModuleAssembly2_Module14_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[827UL] = BatteryPack_v2_ModuleAssembly2_Module14_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[828UL] = zc_int439;
    out->mLOG.mX[829UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[830UL] = zc_int439;
    out->mLOG.mX[831UL] = intrm_sf_mf_109;
    out->mLOG.mX[832UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[833UL] = intrm_sf_mf_109;
    out->mLOG.mX[834UL] = t4657->mX.mX[96UL];
    out->mLOG.mX[835UL] = BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[836UL] = t4657->mX.mX[96UL];
    out->mLOG.mX[837UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[838UL] = zc_int439;
    out->mLOG.mX[839UL] = t4657->mX.mX[98UL];
    out->mLOG.mX[840UL] = intrm_sf_mf_109;
    out->mLOG.mX[841UL] = 0.0;
    out->mLOG.mX[842UL] = t4657->mX.mX[1155UL];
    out->mLOG.mX[843UL] = t4657->mX.mX[1155UL];
    out->mLOG.mX[844UL] = t4657->mX.mX[96UL];
    out->mLOG.mX[845UL] = zc_int35;
    out->mLOG.mX[846UL] = intrm_sf_mf_109 - zc_int439;
    out->mLOG.mX[847UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[848UL] = t4657->mX.mX[104UL];
    out->mLOG.mX[849UL] = t4657->mX.mX[104UL];
    out->mLOG.mX[850UL] = t4657->mX.mX[104UL];
    out->mLOG.mX[851UL] = t4657->mX.mX[104UL];
    out->mLOG.mX[852UL] = t4657->mX.mX[105UL] * 0.00027777777777777778;
    out->mLOG.mX[853UL] = t4657->mX.mX[104UL];
    out->mLOG.mX[854UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[855UL] = intrm_sf_mf_108;
    out->mLOG.mX[856UL] = t4657->mX.mX[106UL];
    out->mLOG.mX[857UL] = t4657->mX.mX[106UL];
    out->mLOG.mX[858UL] = t4657->mX.mX[1159UL];
    out->mLOG.mX[859UL] = zc_int439;
    for (t2499 = 107UL; t2499 - 107UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 753UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[865UL] = t4657->mX.mX[1158UL];
    out->mLOG.mX[866UL] = t4657->mX.mX[1160UL] * 1000.0;
    out->mLOG.mX[867UL] = t4657->mX.mX[1159UL];
    out->mLOG.mX[868UL] = zc_int38;
    out->mLOG.mX[869UL] = t4657->mX.mX[1157UL];
    out->mLOG.mX[870UL] = t4657->mX.mX[105UL];
    out->mLOG.mX[871UL] = t4657->mX.mX[104UL];
    out->mLOG.mX[872UL] = t4657->mX.mX[106UL];
    out->mLOG.mX[873UL] = t4657->mX.mX[1157UL];
    out->mLOG.mX[874UL] = t4657->mX.mX[1158UL];
    out->mLOG.mX[875UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[876UL] = intrm_sf_mf_108;
    out->mLOG.mX[877UL] = t4657->mX.mX[106UL];
    out->mLOG.mX[878UL] = BatteryPack_v2_ModuleAssembly2_Module15_Cell_1_electricalModel0;
    out->mLOG.mX[879UL] = zc_int439;
    out->mLOG.mX[880UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3382 > 8.200000000000002E-8 ? t3382 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[107UL] * t4657->mX.mX[107UL] * 0.0 + t4657->mX.mX[108UL] * t4657->mX.mX[108UL] * 0.0) + t4657->mX.mX[109UL] * t4657->mX.mX[109UL] * 0.0) + t4657->mX.mX[110UL] * t4657->mX.mX[110UL] * 0.0) + t4657->mX.mX[111UL] * t4657->mX.mX[111UL] * 0.0) * 0.001;
    out->mLOG.mX[881UL] = t4657->mX.mX[1159UL];
    out->mLOG.mX[882UL] = t4657->mX.mX[1159UL];
    out->mLOG.mX[883UL] = t4657->mX.mX[104UL];
    out->mLOG.mX[884UL] = t3380 * 1000.0;
    out->mLOG.mX[885UL] = t4657->mX.mX[104UL];
    out->mLOG.mX[886UL] = t4657->mX.mX[104UL];
    out->mLOG.mX[887UL] = t4657->mX.mX[1160UL] * 1000.0;
    out->mLOG.mX[888UL] = zc_int38;
    out->mLOG.mX[889UL] = t4657->mX.mX[104UL];
    out->mLOG.mX[890UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[891UL] = BatteryPack_v2_ModuleAssembly2_Module15_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[892UL] = BatteryPack_v2_ModuleAssembly2_Module15_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[893UL] = intrm_sf_mf_108;
    out->mLOG.mX[894UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[895UL] = intrm_sf_mf_108;
    out->mLOG.mX[896UL] = zc_int439;
    out->mLOG.mX[897UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[898UL] = zc_int439;
    out->mLOG.mX[899UL] = t4657->mX.mX[104UL];
    out->mLOG.mX[900UL] = t3380 * -1000.0;
    out->mLOG.mX[901UL] = t4657->mX.mX[104UL];
    out->mLOG.mX[902UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[903UL] = intrm_sf_mf_108;
    out->mLOG.mX[904UL] = t4657->mX.mX[106UL];
    out->mLOG.mX[905UL] = zc_int439;
    out->mLOG.mX[906UL] = 0.0;
    out->mLOG.mX[907UL] = t4657->mX.mX[1159UL];
    out->mLOG.mX[908UL] = t4657->mX.mX[1159UL];
    out->mLOG.mX[909UL] = t4657->mX.mX[104UL];
    out->mLOG.mX[910UL] = zc_int38;
    out->mLOG.mX[911UL] = zc_int439 - intrm_sf_mf_108;
    out->mLOG.mX[912UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[913UL] = t4657->mX.mX[112UL];
    out->mLOG.mX[914UL] = t4657->mX.mX[112UL];
    out->mLOG.mX[915UL] = t4657->mX.mX[112UL];
    out->mLOG.mX[916UL] = t4657->mX.mX[112UL];
    out->mLOG.mX[917UL] = t4657->mX.mX[113UL] * 0.00027777777777777778;
    out->mLOG.mX[918UL] = t4657->mX.mX[112UL];
    out->mLOG.mX[919UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[920UL] = zc_int51;
    out->mLOG.mX[921UL] = t4657->mX.mX[114UL];
    out->mLOG.mX[922UL] = t4657->mX.mX[114UL];
    out->mLOG.mX[923UL] = t4657->mX.mX[1163UL];
    out->mLOG.mX[924UL] = intrm_sf_mf_108;
    for (t2499 = 115UL; t2499 - 115UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 810UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[930UL] = t4657->mX.mX[1162UL];
    out->mLOG.mX[931UL] = t4657->mX.mX[1164UL] * 1000.0;
    out->mLOG.mX[932UL] = t4657->mX.mX[1163UL];
    out->mLOG.mX[933UL] = zc_int40;
    out->mLOG.mX[934UL] = t4657->mX.mX[1161UL];
    out->mLOG.mX[935UL] = t4657->mX.mX[113UL];
    out->mLOG.mX[936UL] = t4657->mX.mX[112UL];
    out->mLOG.mX[937UL] = t4657->mX.mX[114UL];
    out->mLOG.mX[938UL] = t4657->mX.mX[1161UL];
    out->mLOG.mX[939UL] = t4657->mX.mX[1162UL];
    out->mLOG.mX[940UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[941UL] = zc_int51;
    out->mLOG.mX[942UL] = t4657->mX.mX[114UL];
    out->mLOG.mX[943UL] = t3383;
    out->mLOG.mX[944UL] = intrm_sf_mf_108;
    out->mLOG.mX[945UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly2_Module16_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly2_Module16_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[115UL] * t4657->mX.mX[115UL] * 0.0 + t4657->mX.mX[116UL] * t4657->mX.mX[116UL] * 0.0) + t4657->mX.mX[117UL] * t4657->mX.mX[117UL] * 0.0) + t4657->mX.mX[118UL] * t4657->mX.mX[118UL] * 0.0) + t4657->mX.mX[119UL] * t4657->mX.mX[119UL] * 0.0) * 0.001;
    out->mLOG.mX[946UL] = t4657->mX.mX[1163UL];
    out->mLOG.mX[947UL] = t4657->mX.mX[1163UL];
    out->mLOG.mX[948UL] = t4657->mX.mX[112UL];
    out->mLOG.mX[949UL] = t3385 * 1000.0;
    out->mLOG.mX[950UL] = t4657->mX.mX[112UL];
    out->mLOG.mX[951UL] = t4657->mX.mX[112UL];
    out->mLOG.mX[952UL] = t4657->mX.mX[1164UL] * 1000.0;
    out->mLOG.mX[953UL] = zc_int40;
    out->mLOG.mX[954UL] = t4657->mX.mX[112UL];
    out->mLOG.mX[955UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[956UL] = BatteryPack_v2_ModuleAssembly2_Module16_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[957UL] = BatteryPack_v2_ModuleAssembly2_Module16_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[958UL] = zc_int51;
    out->mLOG.mX[959UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[960UL] = zc_int51;
    out->mLOG.mX[961UL] = intrm_sf_mf_108;
    out->mLOG.mX[962UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[963UL] = intrm_sf_mf_108;
    out->mLOG.mX[964UL] = t4657->mX.mX[112UL];
    out->mLOG.mX[965UL] = t3385 * -1000.0;
    out->mLOG.mX[966UL] = t4657->mX.mX[112UL];
    out->mLOG.mX[967UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[968UL] = zc_int51;
    out->mLOG.mX[969UL] = t4657->mX.mX[114UL];
    out->mLOG.mX[970UL] = intrm_sf_mf_108;
    out->mLOG.mX[971UL] = 0.0;
    out->mLOG.mX[972UL] = t4657->mX.mX[1163UL];
    out->mLOG.mX[973UL] = t4657->mX.mX[1163UL];
    out->mLOG.mX[974UL] = t4657->mX.mX[112UL];
    out->mLOG.mX[975UL] = zc_int40;
    out->mLOG.mX[976UL] = intrm_sf_mf_108 - zc_int51;
    out->mLOG.mX[977UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[978UL] = t4657->mX.mX[120UL];
    out->mLOG.mX[979UL] = t4657->mX.mX[120UL];
    out->mLOG.mX[980UL] = t4657->mX.mX[120UL];
    out->mLOG.mX[981UL] = t4657->mX.mX[120UL];
    out->mLOG.mX[982UL] = t4657->mX.mX[121UL] * 0.00027777777777777778;
    out->mLOG.mX[983UL] = t4657->mX.mX[120UL];
    out->mLOG.mX[984UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[985UL] = zc_int436;
    out->mLOG.mX[986UL] = t4657->mX.mX[122UL];
    out->mLOG.mX[987UL] = t4657->mX.mX[122UL];
    out->mLOG.mX[988UL] = t4657->mX.mX[1167UL];
    out->mLOG.mX[989UL] = zc_int51;
    for (t2499 = 123UL; t2499 - 123UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 867UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[995UL] = t4657->mX.mX[1166UL];
    out->mLOG.mX[996UL] = t4657->mX.mX[1168UL] * 1000.0;
    out->mLOG.mX[997UL] = t4657->mX.mX[1167UL];
    out->mLOG.mX[998UL] = zc_int44;
    out->mLOG.mX[999UL] = t4657->mX.mX[1165UL];
    out->mLOG.mX[1000UL] = t4657->mX.mX[121UL];
    out->mLOG.mX[1001UL] = t4657->mX.mX[120UL];
    out->mLOG.mX[1002UL] = t4657->mX.mX[122UL];
    out->mLOG.mX[1003UL] = t4657->mX.mX[1165UL];
    out->mLOG.mX[1004UL] = t4657->mX.mX[1166UL];
    out->mLOG.mX[1005UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1006UL] = zc_int436;
    out->mLOG.mX[1007UL] = t4657->mX.mX[122UL];
    out->mLOG.mX[1008UL] = BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel0;
    out->mLOG.mX[1009UL] = zc_int51;
    out->mLOG.mX[1010UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly2_Module17_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly2_Module17_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[123UL] * t4657->mX.mX[123UL] * 0.0 + t4657->mX.mX[124UL] * t4657->mX.mX[124UL] * 0.0) + t4657->mX.mX[125UL] * t4657->mX.mX[125UL] * 0.0) + t4657->mX.mX[126UL] * t4657->mX.mX[126UL] * 0.0) + t4657->mX.mX[127UL] * t4657->mX.mX[127UL] * 0.0) * 0.001;
    out->mLOG.mX[1011UL] = t4657->mX.mX[1167UL];
    out->mLOG.mX[1012UL] = t4657->mX.mX[1167UL];
    out->mLOG.mX[1013UL] = t4657->mX.mX[120UL];
    out->mLOG.mX[1014UL] = BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[1015UL] = t4657->mX.mX[120UL];
    out->mLOG.mX[1016UL] = t4657->mX.mX[120UL];
    out->mLOG.mX[1017UL] = t4657->mX.mX[1168UL] * 1000.0;
    out->mLOG.mX[1018UL] = zc_int44;
    out->mLOG.mX[1019UL] = t4657->mX.mX[120UL];
    out->mLOG.mX[1020UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1021UL] = BatteryPack_v2_ModuleAssembly2_Module17_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[1022UL] = BatteryPack_v2_ModuleAssembly2_Module17_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[1023UL] = zc_int436;
    out->mLOG.mX[1024UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1025UL] = zc_int436;
    out->mLOG.mX[1026UL] = zc_int51;
    out->mLOG.mX[1027UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[1028UL] = zc_int51;
    out->mLOG.mX[1029UL] = t4657->mX.mX[120UL];
    out->mLOG.mX[1030UL] = BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[1031UL] = t4657->mX.mX[120UL];
    out->mLOG.mX[1032UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1033UL] = zc_int436;
    out->mLOG.mX[1034UL] = t4657->mX.mX[122UL];
    out->mLOG.mX[1035UL] = zc_int51;
    out->mLOG.mX[1036UL] = 0.0;
    out->mLOG.mX[1037UL] = t4657->mX.mX[1167UL];
    out->mLOG.mX[1038UL] = t4657->mX.mX[1167UL];
    out->mLOG.mX[1039UL] = t4657->mX.mX[120UL];
    out->mLOG.mX[1040UL] = zc_int44;
    out->mLOG.mX[1041UL] = zc_int51 - zc_int436;
    out->mLOG.mX[1042UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1043UL] = t4657->mX.mX[128UL];
    out->mLOG.mX[1044UL] = t4657->mX.mX[128UL];
    out->mLOG.mX[1045UL] = t4657->mX.mX[128UL];
    out->mLOG.mX[1046UL] = t4657->mX.mX[128UL];
    out->mLOG.mX[1047UL] = t4657->mX.mX[129UL] * 0.00027777777777777778;
    out->mLOG.mX[1048UL] = t4657->mX.mX[128UL];
    out->mLOG.mX[1049UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1050UL] = t3399;
    out->mLOG.mX[1051UL] = t4657->mX.mX[130UL];
    out->mLOG.mX[1052UL] = t4657->mX.mX[130UL];
    out->mLOG.mX[1053UL] = t4657->mX.mX[1171UL];
    out->mLOG.mX[1054UL] = zc_int436;
    for (t2499 = 131UL; t2499 - 131UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 924UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[1060UL] = t4657->mX.mX[1170UL];
    out->mLOG.mX[1061UL] = t4657->mX.mX[1172UL] * 1000.0;
    out->mLOG.mX[1062UL] = t4657->mX.mX[1171UL];
    out->mLOG.mX[1063UL] = zc_int46;
    out->mLOG.mX[1064UL] = t4657->mX.mX[1169UL];
    out->mLOG.mX[1065UL] = t4657->mX.mX[129UL];
    out->mLOG.mX[1066UL] = t4657->mX.mX[128UL];
    out->mLOG.mX[1067UL] = t4657->mX.mX[130UL];
    out->mLOG.mX[1068UL] = t4657->mX.mX[1169UL];
    out->mLOG.mX[1069UL] = t4657->mX.mX[1170UL];
    out->mLOG.mX[1070UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1071UL] = t3399;
    out->mLOG.mX[1072UL] = t4657->mX.mX[130UL];
    out->mLOG.mX[1073UL] = t3393;
    out->mLOG.mX[1074UL] = zc_int436;
    out->mLOG.mX[1075UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3397 > 8.200000000000002E-8 ? t3397 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[131UL] * t4657->mX.mX[131UL] * 0.0 + t4657->mX.mX[132UL] * t4657->mX.mX[132UL] * 0.0) + t4657->mX.mX[133UL] * t4657->mX.mX[133UL] * 0.0) + t4657->mX.mX[134UL] * t4657->mX.mX[134UL] * 0.0) + t4657->mX.mX[135UL] * t4657->mX.mX[135UL] * 0.0) * 0.001;
    out->mLOG.mX[1076UL] = t4657->mX.mX[1171UL];
    out->mLOG.mX[1077UL] = t4657->mX.mX[1171UL];
    out->mLOG.mX[1078UL] = t4657->mX.mX[128UL];
    out->mLOG.mX[1079UL] = t3395 * 1000.0;
    out->mLOG.mX[1080UL] = t4657->mX.mX[128UL];
    out->mLOG.mX[1081UL] = t4657->mX.mX[128UL];
    out->mLOG.mX[1082UL] = t4657->mX.mX[1172UL] * 1000.0;
    out->mLOG.mX[1083UL] = zc_int46;
    out->mLOG.mX[1084UL] = t4657->mX.mX[128UL];
    out->mLOG.mX[1085UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1086UL] = BatteryPack_v2_ModuleAssembly2_Module18_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[1087UL] = BatteryPack_v2_ModuleAssembly2_Module18_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[1088UL] = t3399;
    out->mLOG.mX[1089UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1090UL] = t3399;
    out->mLOG.mX[1091UL] = zc_int436;
    out->mLOG.mX[1092UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[1093UL] = zc_int436;
    out->mLOG.mX[1094UL] = t4657->mX.mX[128UL];
    out->mLOG.mX[1095UL] = t3395 * -1000.0;
    out->mLOG.mX[1096UL] = t4657->mX.mX[128UL];
    out->mLOG.mX[1097UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1098UL] = t3399;
    out->mLOG.mX[1099UL] = t4657->mX.mX[130UL];
    out->mLOG.mX[1100UL] = zc_int436;
    out->mLOG.mX[1101UL] = 0.0;
    out->mLOG.mX[1102UL] = t4657->mX.mX[1171UL];
    out->mLOG.mX[1103UL] = t4657->mX.mX[1171UL];
    out->mLOG.mX[1104UL] = t4657->mX.mX[128UL];
    out->mLOG.mX[1105UL] = zc_int46;
    out->mLOG.mX[1106UL] = zc_int436 - t3399;
    out->mLOG.mX[1107UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1108UL] = t4657->mX.mX[136UL];
    out->mLOG.mX[1109UL] = t4657->mX.mX[136UL];
    out->mLOG.mX[1110UL] = t4657->mX.mX[136UL];
    out->mLOG.mX[1111UL] = t4657->mX.mX[136UL];
    out->mLOG.mX[1112UL] = t4657->mX.mX[137UL] * 0.00027777777777777778;
    out->mLOG.mX[1113UL] = t4657->mX.mX[136UL];
    out->mLOG.mX[1114UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1115UL] = t3404;
    out->mLOG.mX[1116UL] = t4657->mX.mX[138UL];
    out->mLOG.mX[1117UL] = t4657->mX.mX[138UL];
    out->mLOG.mX[1118UL] = t4657->mX.mX[1175UL];
    out->mLOG.mX[1119UL] = t3399;
    for (t2499 = 139UL; t2499 - 139UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 981UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[1125UL] = t4657->mX.mX[1174UL];
    out->mLOG.mX[1126UL] = t4657->mX.mX[1176UL] * 1000.0;
    out->mLOG.mX[1127UL] = t4657->mX.mX[1175UL];
    out->mLOG.mX[1128UL] = zc_int49;
    out->mLOG.mX[1129UL] = t4657->mX.mX[1173UL];
    out->mLOG.mX[1130UL] = t4657->mX.mX[137UL];
    out->mLOG.mX[1131UL] = t4657->mX.mX[136UL];
    out->mLOG.mX[1132UL] = t4657->mX.mX[138UL];
    out->mLOG.mX[1133UL] = t4657->mX.mX[1173UL];
    out->mLOG.mX[1134UL] = t4657->mX.mX[1174UL];
    out->mLOG.mX[1135UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1136UL] = t3404;
    out->mLOG.mX[1137UL] = t4657->mX.mX[138UL];
    out->mLOG.mX[1138UL] = BatteryPack_v2_ModuleAssembly2_Module19_Cell_1_electricalModel0;
    out->mLOG.mX[1139UL] = t3399;
    out->mLOG.mX[1140UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly2_Module19_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly2_Module19_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[139UL] * t4657->mX.mX[139UL] * 0.0 + t4657->mX.mX[140UL] * t4657->mX.mX[140UL] * 0.0) + t4657->mX.mX[141UL] * t4657->mX.mX[141UL] * 0.0) + t4657->mX.mX[142UL] * t4657->mX.mX[142UL] * 0.0) + t4657->mX.mX[143UL] * t4657->mX.mX[143UL] * 0.0) * 0.001;
    out->mLOG.mX[1141UL] = t4657->mX.mX[1175UL];
    out->mLOG.mX[1142UL] = t4657->mX.mX[1175UL];
    out->mLOG.mX[1143UL] = t4657->mX.mX[136UL];
    out->mLOG.mX[1144UL] = t3400 * 1000.0;
    out->mLOG.mX[1145UL] = t4657->mX.mX[136UL];
    out->mLOG.mX[1146UL] = t4657->mX.mX[136UL];
    out->mLOG.mX[1147UL] = t4657->mX.mX[1176UL] * 1000.0;
    out->mLOG.mX[1148UL] = zc_int49;
    out->mLOG.mX[1149UL] = t4657->mX.mX[136UL];
    out->mLOG.mX[1150UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1151UL] = BatteryPack_v2_ModuleAssembly2_Module19_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[1152UL] = BatteryPack_v2_ModuleAssembly2_Module19_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[1153UL] = t3404;
    out->mLOG.mX[1154UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1155UL] = t3404;
    out->mLOG.mX[1156UL] = t3399;
    out->mLOG.mX[1157UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[1158UL] = t3399;
    out->mLOG.mX[1159UL] = t4657->mX.mX[136UL];
    out->mLOG.mX[1160UL] = t3400 * -1000.0;
    out->mLOG.mX[1161UL] = t4657->mX.mX[136UL];
    out->mLOG.mX[1162UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1163UL] = t3404;
    out->mLOG.mX[1164UL] = t4657->mX.mX[138UL];
    out->mLOG.mX[1165UL] = t3399;
    out->mLOG.mX[1166UL] = 0.0;
    out->mLOG.mX[1167UL] = t4657->mX.mX[1175UL];
    out->mLOG.mX[1168UL] = t4657->mX.mX[1175UL];
    out->mLOG.mX[1169UL] = t4657->mX.mX[136UL];
    out->mLOG.mX[1170UL] = zc_int49;
    out->mLOG.mX[1171UL] = t3399 - t3404;
    out->mLOG.mX[1172UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1173UL] = t4657->mX.mX[144UL];
    out->mLOG.mX[1174UL] = t4657->mX.mX[144UL];
    out->mLOG.mX[1175UL] = t4657->mX.mX[144UL];
    out->mLOG.mX[1176UL] = t4657->mX.mX[144UL];
    out->mLOG.mX[1177UL] = t4657->mX.mX[145UL] * 0.00027777777777777778;
    out->mLOG.mX[1178UL] = t4657->mX.mX[144UL];
    out->mLOG.mX[1179UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1180UL] = t3409;
    out->mLOG.mX[1181UL] = t4657->mX.mX[146UL];
    out->mLOG.mX[1182UL] = t4657->mX.mX[146UL];
    out->mLOG.mX[1183UL] = t4657->mX.mX[1179UL];
    out->mLOG.mX[1184UL] = t3404;
    for (t2499 = 147UL; t2499 - 147UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 1038UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[1190UL] = t4657->mX.mX[1178UL];
    out->mLOG.mX[1191UL] = t4657->mX.mX[1180UL] * 1000.0;
    out->mLOG.mX[1192UL] = t4657->mX.mX[1179UL];
    out->mLOG.mX[1193UL] = zc_int53;
    out->mLOG.mX[1194UL] = t4657->mX.mX[1177UL];
    out->mLOG.mX[1195UL] = t4657->mX.mX[145UL];
    out->mLOG.mX[1196UL] = t4657->mX.mX[144UL];
    out->mLOG.mX[1197UL] = t4657->mX.mX[146UL];
    out->mLOG.mX[1198UL] = t4657->mX.mX[1177UL];
    out->mLOG.mX[1199UL] = t4657->mX.mX[1178UL];
    out->mLOG.mX[1200UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1201UL] = t3409;
    out->mLOG.mX[1202UL] = t4657->mX.mX[146UL];
    out->mLOG.mX[1203UL] = BatteryPack_v2_ModuleAssembly2_Module20_Cell_1_electricalModel0;
    out->mLOG.mX[1204UL] = t3404;
    out->mLOG.mX[1205UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3407 > 8.200000000000002E-8 ? t3407 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[147UL] * t4657->mX.mX[147UL] * 0.0 + t4657->mX.mX[148UL] * t4657->mX.mX[148UL] * 0.0) + t4657->mX.mX[149UL] * t4657->mX.mX[149UL] * 0.0) + t4657->mX.mX[150UL] * t4657->mX.mX[150UL] * 0.0) + t4657->mX.mX[151UL] * t4657->mX.mX[151UL] * 0.0) * 0.001;
    out->mLOG.mX[1206UL] = t4657->mX.mX[1179UL];
    out->mLOG.mX[1207UL] = t4657->mX.mX[1179UL];
    out->mLOG.mX[1208UL] = t4657->mX.mX[144UL];
    out->mLOG.mX[1209UL] = BatteryPack_v2_ModuleAssembly2_Module20_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[1210UL] = t4657->mX.mX[144UL];
    out->mLOG.mX[1211UL] = t4657->mX.mX[144UL];
    out->mLOG.mX[1212UL] = t4657->mX.mX[1180UL] * 1000.0;
    out->mLOG.mX[1213UL] = zc_int53;
    out->mLOG.mX[1214UL] = t4657->mX.mX[144UL];
    out->mLOG.mX[1215UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1216UL] = BatteryPack_v2_ModuleAssembly2_Module20_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[1217UL] = BatteryPack_v2_ModuleAssembly2_Module20_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[1218UL] = t3409;
    out->mLOG.mX[1219UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1220UL] = t3409;
    out->mLOG.mX[1221UL] = t3404;
    out->mLOG.mX[1222UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[1223UL] = t3404;
    out->mLOG.mX[1224UL] = t4657->mX.mX[144UL];
    out->mLOG.mX[1225UL] = BatteryPack_v2_ModuleAssembly2_Module20_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[1226UL] = t4657->mX.mX[144UL];
    out->mLOG.mX[1227UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1228UL] = t3409;
    out->mLOG.mX[1229UL] = t4657->mX.mX[146UL];
    out->mLOG.mX[1230UL] = t3404;
    out->mLOG.mX[1231UL] = 0.0;
    out->mLOG.mX[1232UL] = t4657->mX.mX[1179UL];
    out->mLOG.mX[1233UL] = t4657->mX.mX[1179UL];
    out->mLOG.mX[1234UL] = t4657->mX.mX[144UL];
    out->mLOG.mX[1235UL] = zc_int53;
    out->mLOG.mX[1236UL] = t3404 - t3409;
    out->mLOG.mX[1237UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1238UL] = t4657->mX.mX[152UL];
    out->mLOG.mX[1239UL] = t4657->mX.mX[152UL];
    out->mLOG.mX[1240UL] = t4657->mX.mX[152UL];
    out->mLOG.mX[1241UL] = t4657->mX.mX[152UL];
    out->mLOG.mX[1242UL] = t4657->mX.mX[153UL] * 0.00027777777777777778;
    out->mLOG.mX[1243UL] = t4657->mX.mX[152UL];
    out->mLOG.mX[1244UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1245UL] = intrm_sf_mf_20;
    out->mLOG.mX[1246UL] = t4657->mX.mX[154UL];
    out->mLOG.mX[1247UL] = t4657->mX.mX[154UL];
    out->mLOG.mX[1248UL] = t4657->mX.mX[1183UL];
    out->mLOG.mX[1249UL] = t3409;
    for (t2499 = 155UL; t2499 - 155UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 1095UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[1255UL] = t4657->mX.mX[1182UL];
    out->mLOG.mX[1256UL] = t4657->mX.mX[1184UL] * 1000.0;
    out->mLOG.mX[1257UL] = t4657->mX.mX[1183UL];
    out->mLOG.mX[1258UL] = zc_int55;
    out->mLOG.mX[1259UL] = t4657->mX.mX[1181UL];
    out->mLOG.mX[1260UL] = t4657->mX.mX[153UL];
    out->mLOG.mX[1261UL] = t4657->mX.mX[152UL];
    out->mLOG.mX[1262UL] = t4657->mX.mX[154UL];
    out->mLOG.mX[1263UL] = t4657->mX.mX[1181UL];
    out->mLOG.mX[1264UL] = t4657->mX.mX[1182UL];
    out->mLOG.mX[1265UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1266UL] = intrm_sf_mf_20;
    out->mLOG.mX[1267UL] = t4657->mX.mX[154UL];
    out->mLOG.mX[1268UL] = t3408;
    out->mLOG.mX[1269UL] = t3409;
    out->mLOG.mX[1270UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly2_Module21_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly2_Module21_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[155UL] * t4657->mX.mX[155UL] * 0.0 + t4657->mX.mX[156UL] * t4657->mX.mX[156UL] * 0.0) + t4657->mX.mX[157UL] * t4657->mX.mX[157UL] * 0.0) + t4657->mX.mX[158UL] * t4657->mX.mX[158UL] * 0.0) + t4657->mX.mX[159UL] * t4657->mX.mX[159UL] * 0.0) * 0.001;
    out->mLOG.mX[1271UL] = t4657->mX.mX[1183UL];
    out->mLOG.mX[1272UL] = t4657->mX.mX[1183UL];
    out->mLOG.mX[1273UL] = t4657->mX.mX[152UL];
    out->mLOG.mX[1274UL] = BatteryPack_v2_ModuleAssembly2_Module21_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[1275UL] = t4657->mX.mX[152UL];
    out->mLOG.mX[1276UL] = t4657->mX.mX[152UL];
    out->mLOG.mX[1277UL] = t4657->mX.mX[1184UL] * 1000.0;
    out->mLOG.mX[1278UL] = zc_int55;
    out->mLOG.mX[1279UL] = t4657->mX.mX[152UL];
    out->mLOG.mX[1280UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1281UL] = BatteryPack_v2_ModuleAssembly2_Module21_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[1282UL] = BatteryPack_v2_ModuleAssembly2_Module21_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[1283UL] = intrm_sf_mf_20;
    out->mLOG.mX[1284UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1285UL] = intrm_sf_mf_20;
    out->mLOG.mX[1286UL] = t3409;
    out->mLOG.mX[1287UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[1288UL] = t3409;
    out->mLOG.mX[1289UL] = t4657->mX.mX[152UL];
    out->mLOG.mX[1290UL] = BatteryPack_v2_ModuleAssembly2_Module21_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[1291UL] = t4657->mX.mX[152UL];
    out->mLOG.mX[1292UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1293UL] = intrm_sf_mf_20;
    out->mLOG.mX[1294UL] = t4657->mX.mX[154UL];
    out->mLOG.mX[1295UL] = t3409;
    out->mLOG.mX[1296UL] = 0.0;
    out->mLOG.mX[1297UL] = t4657->mX.mX[1183UL];
    out->mLOG.mX[1298UL] = t4657->mX.mX[1183UL];
    out->mLOG.mX[1299UL] = t4657->mX.mX[152UL];
    out->mLOG.mX[1300UL] = zc_int55;
    out->mLOG.mX[1301UL] = t3409 - intrm_sf_mf_20;
    out->mLOG.mX[1302UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1303UL] = t4657->mX.mX[160UL];
    out->mLOG.mX[1304UL] = t4657->mX.mX[160UL];
    out->mLOG.mX[1305UL] = t4657->mX.mX[160UL];
    out->mLOG.mX[1306UL] = t4657->mX.mX[160UL];
    out->mLOG.mX[1307UL] = t4657->mX.mX[161UL] * 0.00027777777777777778;
    out->mLOG.mX[1308UL] = t4657->mX.mX[160UL];
    out->mLOG.mX[1309UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1310UL] = zc_int431;
    out->mLOG.mX[1311UL] = t4657->mX.mX[162UL];
    out->mLOG.mX[1312UL] = t4657->mX.mX[162UL];
    out->mLOG.mX[1313UL] = t4657->mX.mX[1187UL];
    out->mLOG.mX[1314UL] = intrm_sf_mf_20;
    for (t2499 = 163UL; t2499 - 163UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 1152UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[1320UL] = t4657->mX.mX[1186UL];
    out->mLOG.mX[1321UL] = t4657->mX.mX[1188UL] * 1000.0;
    out->mLOG.mX[1322UL] = t4657->mX.mX[1187UL];
    out->mLOG.mX[1323UL] = zc_int58;
    out->mLOG.mX[1324UL] = t4657->mX.mX[1185UL];
    out->mLOG.mX[1325UL] = t4657->mX.mX[161UL];
    out->mLOG.mX[1326UL] = t4657->mX.mX[160UL];
    out->mLOG.mX[1327UL] = t4657->mX.mX[162UL];
    out->mLOG.mX[1328UL] = t4657->mX.mX[1185UL];
    out->mLOG.mX[1329UL] = t4657->mX.mX[1186UL];
    out->mLOG.mX[1330UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1331UL] = zc_int431;
    out->mLOG.mX[1332UL] = t4657->mX.mX[162UL];
    out->mLOG.mX[1333UL] = BatteryPack_v2_ModuleAssembly2_Module22_Cell_1_electricalModel0;
    out->mLOG.mX[1334UL] = intrm_sf_mf_20;
    out->mLOG.mX[1335UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3417 > 8.200000000000002E-8 ? t3417 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[163UL] * t4657->mX.mX[163UL] * 0.0 + t4657->mX.mX[164UL] * t4657->mX.mX[164UL] * 0.0) + t4657->mX.mX[165UL] * t4657->mX.mX[165UL] * 0.0) + t4657->mX.mX[166UL] * t4657->mX.mX[166UL] * 0.0) + t4657->mX.mX[167UL] * t4657->mX.mX[167UL] * 0.0) * 0.001;
    out->mLOG.mX[1336UL] = t4657->mX.mX[1187UL];
    out->mLOG.mX[1337UL] = t4657->mX.mX[1187UL];
    out->mLOG.mX[1338UL] = t4657->mX.mX[160UL];
    out->mLOG.mX[1339UL] = BatteryPack_v2_ModuleAssembly2_Module22_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[1340UL] = t4657->mX.mX[160UL];
    out->mLOG.mX[1341UL] = t4657->mX.mX[160UL];
    out->mLOG.mX[1342UL] = t4657->mX.mX[1188UL] * 1000.0;
    out->mLOG.mX[1343UL] = zc_int58;
    out->mLOG.mX[1344UL] = t4657->mX.mX[160UL];
    out->mLOG.mX[1345UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1346UL] = BatteryPack_v2_ModuleAssembly2_Module22_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[1347UL] = BatteryPack_v2_ModuleAssembly2_Module22_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[1348UL] = zc_int431;
    out->mLOG.mX[1349UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1350UL] = zc_int431;
    out->mLOG.mX[1351UL] = intrm_sf_mf_20;
    out->mLOG.mX[1352UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[1353UL] = intrm_sf_mf_20;
    out->mLOG.mX[1354UL] = t4657->mX.mX[160UL];
    out->mLOG.mX[1355UL] = BatteryPack_v2_ModuleAssembly2_Module22_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[1356UL] = t4657->mX.mX[160UL];
    out->mLOG.mX[1357UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1358UL] = zc_int431;
    out->mLOG.mX[1359UL] = t4657->mX.mX[162UL];
    out->mLOG.mX[1360UL] = intrm_sf_mf_20;
    out->mLOG.mX[1361UL] = 0.0;
    out->mLOG.mX[1362UL] = t4657->mX.mX[1187UL];
    out->mLOG.mX[1363UL] = t4657->mX.mX[1187UL];
    out->mLOG.mX[1364UL] = t4657->mX.mX[160UL];
    out->mLOG.mX[1365UL] = zc_int58;
    out->mLOG.mX[1366UL] = intrm_sf_mf_20 - zc_int431;
    out->mLOG.mX[1367UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1368UL] = t4657->mX.mX[168UL];
    out->mLOG.mX[1369UL] = t4657->mX.mX[168UL];
    out->mLOG.mX[1370UL] = t4657->mX.mX[168UL];
    out->mLOG.mX[1371UL] = t4657->mX.mX[168UL];
    out->mLOG.mX[1372UL] = t4657->mX.mX[169UL] * 0.00027777777777777778;
    out->mLOG.mX[1373UL] = t4657->mX.mX[168UL];
    out->mLOG.mX[1374UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1375UL] = zc_int64;
    out->mLOG.mX[1376UL] = t4657->mX.mX[170UL];
    out->mLOG.mX[1377UL] = t4657->mX.mX[170UL];
    out->mLOG.mX[1378UL] = t4657->mX.mX[1191UL];
    out->mLOG.mX[1379UL] = zc_int431;
    for (t2499 = 171UL; t2499 - 171UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 1209UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[1385UL] = t4657->mX.mX[1190UL];
    out->mLOG.mX[1386UL] = t4657->mX.mX[1192UL] * 1000.0;
    out->mLOG.mX[1387UL] = t4657->mX.mX[1191UL];
    out->mLOG.mX[1388UL] = BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[1389UL] = t4657->mX.mX[1189UL];
    out->mLOG.mX[1390UL] = t4657->mX.mX[169UL];
    out->mLOG.mX[1391UL] = t4657->mX.mX[168UL];
    out->mLOG.mX[1392UL] = t4657->mX.mX[170UL];
    out->mLOG.mX[1393UL] = t4657->mX.mX[1189UL];
    out->mLOG.mX[1394UL] = t4657->mX.mX[1190UL];
    out->mLOG.mX[1395UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1396UL] = zc_int64;
    out->mLOG.mX[1397UL] = t4657->mX.mX[170UL];
    out->mLOG.mX[1398UL] = BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel0;
    out->mLOG.mX[1399UL] = zc_int431;
    out->mLOG.mX[1400UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3422 > 8.200000000000002E-8 ? t3422 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[171UL] * t4657->mX.mX[171UL] * 0.0 + t4657->mX.mX[172UL] * t4657->mX.mX[172UL] * 0.0) + t4657->mX.mX[173UL] * t4657->mX.mX[173UL] * 0.0) + t4657->mX.mX[174UL] * t4657->mX.mX[174UL] * 0.0) + t4657->mX.mX[175UL] * t4657->mX.mX[175UL] * 0.0) * 0.001;
    out->mLOG.mX[1401UL] = t4657->mX.mX[1191UL];
    out->mLOG.mX[1402UL] = t4657->mX.mX[1191UL];
    out->mLOG.mX[1403UL] = t4657->mX.mX[168UL];
    out->mLOG.mX[1404UL] = BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[1405UL] = t4657->mX.mX[168UL];
    out->mLOG.mX[1406UL] = t4657->mX.mX[168UL];
    out->mLOG.mX[1407UL] = t4657->mX.mX[1192UL] * 1000.0;
    out->mLOG.mX[1408UL] = BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[1409UL] = t4657->mX.mX[168UL];
    out->mLOG.mX[1410UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1411UL] = BatteryPack_v2_ModuleAssembly2_Module23_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[1412UL] = BatteryPack_v2_ModuleAssembly2_Module23_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[1413UL] = zc_int64;
    out->mLOG.mX[1414UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1415UL] = zc_int64;
    out->mLOG.mX[1416UL] = zc_int431;
    out->mLOG.mX[1417UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[1418UL] = zc_int431;
    out->mLOG.mX[1419UL] = t4657->mX.mX[168UL];
    out->mLOG.mX[1420UL] = BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[1421UL] = t4657->mX.mX[168UL];
    out->mLOG.mX[1422UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1423UL] = zc_int64;
    out->mLOG.mX[1424UL] = t4657->mX.mX[170UL];
    out->mLOG.mX[1425UL] = zc_int431;
    out->mLOG.mX[1426UL] = 0.0;
    out->mLOG.mX[1427UL] = t4657->mX.mX[1191UL];
    out->mLOG.mX[1428UL] = t4657->mX.mX[1191UL];
    out->mLOG.mX[1429UL] = t4657->mX.mX[168UL];
    out->mLOG.mX[1430UL] = BatteryPack_v2_ModuleAssembly2_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[1431UL] = zc_int431 - zc_int64;
    out->mLOG.mX[1432UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1433UL] = t4657->mX.mX[176UL];
    out->mLOG.mX[1434UL] = t4657->mX.mX[176UL];
    out->mLOG.mX[1435UL] = t4657->mX.mX[176UL];
    out->mLOG.mX[1436UL] = t4657->mX.mX[176UL];
    out->mLOG.mX[1437UL] = t4657->mX.mX[177UL] * 0.00027777777777777778;
    out->mLOG.mX[1438UL] = t4657->mX.mX[176UL];
    out->mLOG.mX[1439UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1440UL] = t3314;
    out->mLOG.mX[1441UL] = t4657->mX.mX[178UL];
    out->mLOG.mX[1442UL] = t4657->mX.mX[178UL];
    out->mLOG.mX[1443UL] = t4657->mX.mX[1195UL];
    out->mLOG.mX[1444UL] = zc_int481;
    for (t2499 = 179UL; t2499 - 179UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 1266UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[1450UL] = t4657->mX.mX[1194UL];
    out->mLOG.mX[1451UL] = t4657->mX.mX[1196UL] * 1000.0;
    out->mLOG.mX[1452UL] = t4657->mX.mX[1195UL];
    out->mLOG.mX[1453UL] = zc_int480;
    out->mLOG.mX[1454UL] = t4657->mX.mX[1193UL];
    out->mLOG.mX[1455UL] = t4657->mX.mX[177UL];
    out->mLOG.mX[1456UL] = t4657->mX.mX[176UL];
    out->mLOG.mX[1457UL] = t4657->mX.mX[178UL];
    out->mLOG.mX[1458UL] = t4657->mX.mX[1193UL];
    out->mLOG.mX[1459UL] = t4657->mX.mX[1194UL];
    out->mLOG.mX[1460UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1461UL] = t3314;
    out->mLOG.mX[1462UL] = t4657->mX.mX[178UL];
    out->mLOG.mX[1463UL] = BatteryPack_v2_ModuleAssembly2_Module_1_1_Cell_1_electricalMod0;
    out->mLOG.mX[1464UL] = zc_int481;
    out->mLOG.mX[1465UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly2_Module_1_1_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly2_Module_1_1_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[179UL] * t4657->mX.mX[179UL] * 0.0 + t4657->mX.mX[180UL] * t4657->mX.mX[180UL] * 0.0) + t4657->mX.mX[181UL] * t4657->mX.mX[181UL] * 0.0) + t4657->mX.mX[182UL] * t4657->mX.mX[182UL] * 0.0) + t4657->mX.mX[183UL] * t4657->mX.mX[183UL] * 0.0) * 0.001;
    out->mLOG.mX[1466UL] = t4657->mX.mX[1195UL];
    out->mLOG.mX[1467UL] = t4657->mX.mX[1195UL];
    out->mLOG.mX[1468UL] = t4657->mX.mX[176UL];
    out->mLOG.mX[1469UL] = t3425 * 1000.0;
    out->mLOG.mX[1470UL] = t4657->mX.mX[176UL];
    out->mLOG.mX[1471UL] = t4657->mX.mX[176UL];
    out->mLOG.mX[1472UL] = t4657->mX.mX[1196UL] * 1000.0;
    out->mLOG.mX[1473UL] = zc_int480;
    out->mLOG.mX[1474UL] = t4657->mX.mX[176UL];
    out->mLOG.mX[1475UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1476UL] = BatteryPack_v2_ModuleAssembly2_Module_1_1_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[1477UL] = BatteryPack_v2_ModuleAssembly2_Module_1_1_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[1478UL] = t3314;
    out->mLOG.mX[1479UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1480UL] = t3314;
    out->mLOG.mX[1481UL] = zc_int481;
    out->mLOG.mX[1482UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[1483UL] = zc_int481;
    out->mLOG.mX[1484UL] = t4657->mX.mX[176UL];
    out->mLOG.mX[1485UL] = t3425 * -1000.0;
    out->mLOG.mX[1486UL] = t4657->mX.mX[176UL];
    out->mLOG.mX[1487UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1488UL] = t3314;
    out->mLOG.mX[1489UL] = t4657->mX.mX[178UL];
    out->mLOG.mX[1490UL] = zc_int481;
    out->mLOG.mX[1491UL] = 0.0;
    out->mLOG.mX[1492UL] = t4657->mX.mX[1195UL];
    out->mLOG.mX[1493UL] = t4657->mX.mX[1195UL];
    out->mLOG.mX[1494UL] = t4657->mX.mX[176UL];
    out->mLOG.mX[1495UL] = zc_int480;
    out->mLOG.mX[1496UL] = zc_int481 - t3314;
    out->mLOG.mX[1497UL] = zc_int481;
    out->mLOG.mX[1498UL] = zc_int64;
    out->mLOG.mX[1499UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1500UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1501UL] = t4657->mX.mX[184UL];
    out->mLOG.mX[1502UL] = t4657->mX.mX[184UL];
    out->mLOG.mX[1503UL] = t4657->mX.mX[184UL];
    out->mLOG.mX[1504UL] = t4657->mX.mX[184UL];
    out->mLOG.mX[1505UL] = t4657->mX.mX[185UL] * 0.00027777777777777778;
    out->mLOG.mX[1506UL] = t4657->mX.mX[184UL];
    out->mLOG.mX[1507UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1508UL] = zc_int428;
    out->mLOG.mX[1509UL] = t4657->mX.mX[186UL];
    out->mLOG.mX[1510UL] = t4657->mX.mX[186UL];
    out->mLOG.mX[1511UL] = t4657->mX.mX[1199UL];
    out->mLOG.mX[1512UL] = t3429;
    for (t2499 = 187UL; t2499 - 187UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 1326UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[1518UL] = t4657->mX.mX[1198UL];
    out->mLOG.mX[1519UL] = t4657->mX.mX[1200UL] * 1000.0;
    out->mLOG.mX[1520UL] = t4657->mX.mX[1199UL];
    out->mLOG.mX[1521UL] = zc_int68;
    out->mLOG.mX[1522UL] = t4657->mX.mX[1197UL];
    out->mLOG.mX[1523UL] = t4657->mX.mX[185UL];
    out->mLOG.mX[1524UL] = t4657->mX.mX[184UL];
    out->mLOG.mX[1525UL] = t4657->mX.mX[186UL];
    out->mLOG.mX[1526UL] = t4657->mX.mX[1197UL];
    out->mLOG.mX[1527UL] = t4657->mX.mX[1198UL];
    out->mLOG.mX[1528UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1529UL] = zc_int428;
    out->mLOG.mX[1530UL] = t4657->mX.mX[186UL];
    out->mLOG.mX[1531UL] = BatteryPack_v2_ModuleAssembly3_Module02_Cell_1_electricalModel0;
    out->mLOG.mX[1532UL] = t3429;
    out->mLOG.mX[1533UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3432 > 8.200000000000002E-8 ? t3432 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[187UL] * t4657->mX.mX[187UL] * 0.0 + t4657->mX.mX[188UL] * t4657->mX.mX[188UL] * 0.0) + t4657->mX.mX[189UL] * t4657->mX.mX[189UL] * 0.0) + t4657->mX.mX[190UL] * t4657->mX.mX[190UL] * 0.0) + t4657->mX.mX[191UL] * t4657->mX.mX[191UL] * 0.0) * 0.001;
    out->mLOG.mX[1534UL] = t4657->mX.mX[1199UL];
    out->mLOG.mX[1535UL] = t4657->mX.mX[1199UL];
    out->mLOG.mX[1536UL] = t4657->mX.mX[184UL];
    out->mLOG.mX[1537UL] = BatteryPack_v2_ModuleAssembly3_Module02_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[1538UL] = t4657->mX.mX[184UL];
    out->mLOG.mX[1539UL] = t4657->mX.mX[184UL];
    out->mLOG.mX[1540UL] = t4657->mX.mX[1200UL] * 1000.0;
    out->mLOG.mX[1541UL] = zc_int68;
    out->mLOG.mX[1542UL] = t4657->mX.mX[184UL];
    out->mLOG.mX[1543UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1544UL] = BatteryPack_v2_ModuleAssembly3_Module02_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[1545UL] = BatteryPack_v2_ModuleAssembly3_Module02_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[1546UL] = zc_int428;
    out->mLOG.mX[1547UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1548UL] = zc_int428;
    out->mLOG.mX[1549UL] = t3429;
    out->mLOG.mX[1550UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[1551UL] = t3429;
    out->mLOG.mX[1552UL] = t4657->mX.mX[184UL];
    out->mLOG.mX[1553UL] = BatteryPack_v2_ModuleAssembly3_Module02_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[1554UL] = t4657->mX.mX[184UL];
    out->mLOG.mX[1555UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1556UL] = zc_int428;
    out->mLOG.mX[1557UL] = t4657->mX.mX[186UL];
    out->mLOG.mX[1558UL] = t3429;
    out->mLOG.mX[1559UL] = 0.0;
    out->mLOG.mX[1560UL] = t4657->mX.mX[1199UL];
    out->mLOG.mX[1561UL] = t4657->mX.mX[1199UL];
    out->mLOG.mX[1562UL] = t4657->mX.mX[184UL];
    out->mLOG.mX[1563UL] = zc_int68;
    out->mLOG.mX[1564UL] = t3429 - zc_int428;
    out->mLOG.mX[1565UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1566UL] = t4657->mX.mX[192UL];
    out->mLOG.mX[1567UL] = t4657->mX.mX[192UL];
    out->mLOG.mX[1568UL] = t4657->mX.mX[192UL];
    out->mLOG.mX[1569UL] = t4657->mX.mX[192UL];
    out->mLOG.mX[1570UL] = t4657->mX.mX[193UL] * 0.00027777777777777778;
    out->mLOG.mX[1571UL] = t4657->mX.mX[192UL];
    out->mLOG.mX[1572UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1573UL] = intrm_sf_mf_25;
    out->mLOG.mX[1574UL] = t4657->mX.mX[194UL];
    out->mLOG.mX[1575UL] = t4657->mX.mX[194UL];
    out->mLOG.mX[1576UL] = t4657->mX.mX[1203UL];
    out->mLOG.mX[1577UL] = zc_int428;
    for (t2499 = 195UL; t2499 - 195UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 1383UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[1583UL] = t4657->mX.mX[1202UL];
    out->mLOG.mX[1584UL] = t4657->mX.mX[1204UL] * 1000.0;
    out->mLOG.mX[1585UL] = t4657->mX.mX[1203UL];
    out->mLOG.mX[1586UL] = BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3;
    out->mLOG.mX[1587UL] = t4657->mX.mX[1201UL];
    out->mLOG.mX[1588UL] = t4657->mX.mX[193UL];
    out->mLOG.mX[1589UL] = t4657->mX.mX[192UL];
    out->mLOG.mX[1590UL] = t4657->mX.mX[194UL];
    out->mLOG.mX[1591UL] = t4657->mX.mX[1201UL];
    out->mLOG.mX[1592UL] = t4657->mX.mX[1202UL];
    out->mLOG.mX[1593UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1594UL] = intrm_sf_mf_25;
    out->mLOG.mX[1595UL] = t4657->mX.mX[194UL];
    out->mLOG.mX[1596UL] = BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel0;
    out->mLOG.mX[1597UL] = zc_int428;
    out->mLOG.mX[1598UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly3_Module03_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly3_Module03_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[195UL] * t4657->mX.mX[195UL] * 0.0 + t4657->mX.mX[196UL] * t4657->mX.mX[196UL] * 0.0) + t4657->mX.mX[197UL] * t4657->mX.mX[197UL] * 0.0) + t4657->mX.mX[198UL] * t4657->mX.mX[198UL] * 0.0) + t4657->mX.mX[199UL] * t4657->mX.mX[199UL] * 0.0) * 0.001;
    out->mLOG.mX[1599UL] = t4657->mX.mX[1203UL];
    out->mLOG.mX[1600UL] = t4657->mX.mX[1203UL];
    out->mLOG.mX[1601UL] = t4657->mX.mX[192UL];
    out->mLOG.mX[1602UL] = t3435 * 1000.0;
    out->mLOG.mX[1603UL] = t4657->mX.mX[192UL];
    out->mLOG.mX[1604UL] = t4657->mX.mX[192UL];
    out->mLOG.mX[1605UL] = t4657->mX.mX[1204UL] * 1000.0;
    out->mLOG.mX[1606UL] = BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3;
    out->mLOG.mX[1607UL] = t4657->mX.mX[192UL];
    out->mLOG.mX[1608UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1609UL] = BatteryPack_v2_ModuleAssembly3_Module03_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[1610UL] = BatteryPack_v2_ModuleAssembly3_Module03_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[1611UL] = intrm_sf_mf_25;
    out->mLOG.mX[1612UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1613UL] = intrm_sf_mf_25;
    out->mLOG.mX[1614UL] = zc_int428;
    out->mLOG.mX[1615UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[1616UL] = zc_int428;
    out->mLOG.mX[1617UL] = t4657->mX.mX[192UL];
    out->mLOG.mX[1618UL] = t3435 * -1000.0;
    out->mLOG.mX[1619UL] = t4657->mX.mX[192UL];
    out->mLOG.mX[1620UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1621UL] = intrm_sf_mf_25;
    out->mLOG.mX[1622UL] = t4657->mX.mX[194UL];
    out->mLOG.mX[1623UL] = zc_int428;
    out->mLOG.mX[1624UL] = 0.0;
    out->mLOG.mX[1625UL] = t4657->mX.mX[1203UL];
    out->mLOG.mX[1626UL] = t4657->mX.mX[1203UL];
    out->mLOG.mX[1627UL] = t4657->mX.mX[192UL];
    out->mLOG.mX[1628UL] = BatteryPack_v2_ModuleAssembly3_Module03_Cell_1_electricalModel3;
    out->mLOG.mX[1629UL] = zc_int428 - intrm_sf_mf_25;
    out->mLOG.mX[1630UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1631UL] = t4657->mX.mX[200UL];
    out->mLOG.mX[1632UL] = t4657->mX.mX[200UL];
    out->mLOG.mX[1633UL] = t4657->mX.mX[200UL];
    out->mLOG.mX[1634UL] = t4657->mX.mX[200UL];
    out->mLOG.mX[1635UL] = t4657->mX.mX[201UL] * 0.00027777777777777778;
    out->mLOG.mX[1636UL] = t4657->mX.mX[200UL];
    out->mLOG.mX[1637UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1638UL] = zc_int426;
    out->mLOG.mX[1639UL] = t4657->mX.mX[202UL];
    out->mLOG.mX[1640UL] = t4657->mX.mX[202UL];
    out->mLOG.mX[1641UL] = t4657->mX.mX[1207UL];
    out->mLOG.mX[1642UL] = intrm_sf_mf_25;
    for (t2499 = 203UL; t2499 - 203UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 1440UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[1648UL] = t4657->mX.mX[1206UL];
    out->mLOG.mX[1649UL] = t4657->mX.mX[1208UL] * 1000.0;
    out->mLOG.mX[1650UL] = t4657->mX.mX[1207UL];
    out->mLOG.mX[1651UL] = BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[1652UL] = t4657->mX.mX[1205UL];
    out->mLOG.mX[1653UL] = t4657->mX.mX[201UL];
    out->mLOG.mX[1654UL] = t4657->mX.mX[200UL];
    out->mLOG.mX[1655UL] = t4657->mX.mX[202UL];
    out->mLOG.mX[1656UL] = t4657->mX.mX[1205UL];
    out->mLOG.mX[1657UL] = t4657->mX.mX[1206UL];
    out->mLOG.mX[1658UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1659UL] = zc_int426;
    out->mLOG.mX[1660UL] = t4657->mX.mX[202UL];
    out->mLOG.mX[1661UL] = BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel0;
    out->mLOG.mX[1662UL] = intrm_sf_mf_25;
    out->mLOG.mX[1663UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3442 > 8.200000000000002E-8 ? t3442 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[203UL] * t4657->mX.mX[203UL] * 0.0 + t4657->mX.mX[204UL] * t4657->mX.mX[204UL] * 0.0) + t4657->mX.mX[205UL] * t4657->mX.mX[205UL] * 0.0) + t4657->mX.mX[206UL] * t4657->mX.mX[206UL] * 0.0) + t4657->mX.mX[207UL] * t4657->mX.mX[207UL] * 0.0) * 0.001;
    out->mLOG.mX[1664UL] = t4657->mX.mX[1207UL];
    out->mLOG.mX[1665UL] = t4657->mX.mX[1207UL];
    out->mLOG.mX[1666UL] = t4657->mX.mX[200UL];
    out->mLOG.mX[1667UL] = BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[1668UL] = t4657->mX.mX[200UL];
    out->mLOG.mX[1669UL] = t4657->mX.mX[200UL];
    out->mLOG.mX[1670UL] = t4657->mX.mX[1208UL] * 1000.0;
    out->mLOG.mX[1671UL] = BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[1672UL] = t4657->mX.mX[200UL];
    out->mLOG.mX[1673UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1674UL] = BatteryPack_v2_ModuleAssembly3_Module04_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[1675UL] = BatteryPack_v2_ModuleAssembly3_Module04_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[1676UL] = zc_int426;
    out->mLOG.mX[1677UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1678UL] = zc_int426;
    out->mLOG.mX[1679UL] = intrm_sf_mf_25;
    out->mLOG.mX[1680UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[1681UL] = intrm_sf_mf_25;
    out->mLOG.mX[1682UL] = t4657->mX.mX[200UL];
    out->mLOG.mX[1683UL] = BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[1684UL] = t4657->mX.mX[200UL];
    out->mLOG.mX[1685UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1686UL] = zc_int426;
    out->mLOG.mX[1687UL] = t4657->mX.mX[202UL];
    out->mLOG.mX[1688UL] = intrm_sf_mf_25;
    out->mLOG.mX[1689UL] = 0.0;
    out->mLOG.mX[1690UL] = t4657->mX.mX[1207UL];
    out->mLOG.mX[1691UL] = t4657->mX.mX[1207UL];
    out->mLOG.mX[1692UL] = t4657->mX.mX[200UL];
    out->mLOG.mX[1693UL] = BatteryPack_v2_ModuleAssembly3_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[1694UL] = intrm_sf_mf_25 - zc_int426;
    out->mLOG.mX[1695UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1696UL] = t4657->mX.mX[208UL];
    out->mLOG.mX[1697UL] = t4657->mX.mX[208UL];
    out->mLOG.mX[1698UL] = t4657->mX.mX[208UL];
    out->mLOG.mX[1699UL] = t4657->mX.mX[208UL];
    out->mLOG.mX[1700UL] = t4657->mX.mX[209UL] * 0.00027777777777777778;
    out->mLOG.mX[1701UL] = t4657->mX.mX[208UL];
    out->mLOG.mX[1702UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1703UL] = zc_int425;
    out->mLOG.mX[1704UL] = t4657->mX.mX[210UL];
    out->mLOG.mX[1705UL] = t4657->mX.mX[210UL];
    out->mLOG.mX[1706UL] = t4657->mX.mX[1211UL];
    out->mLOG.mX[1707UL] = zc_int426;
    for (t2499 = 211UL; t2499 - 211UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 1497UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[1713UL] = t4657->mX.mX[1210UL];
    out->mLOG.mX[1714UL] = t4657->mX.mX[1212UL] * 1000.0;
    out->mLOG.mX[1715UL] = t4657->mX.mX[1211UL];
    out->mLOG.mX[1716UL] = zc_int77;
    out->mLOG.mX[1717UL] = t4657->mX.mX[1209UL];
    out->mLOG.mX[1718UL] = t4657->mX.mX[209UL];
    out->mLOG.mX[1719UL] = t4657->mX.mX[208UL];
    out->mLOG.mX[1720UL] = t4657->mX.mX[210UL];
    out->mLOG.mX[1721UL] = t4657->mX.mX[1209UL];
    out->mLOG.mX[1722UL] = t4657->mX.mX[1210UL];
    out->mLOG.mX[1723UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1724UL] = zc_int425;
    out->mLOG.mX[1725UL] = t4657->mX.mX[210UL];
    out->mLOG.mX[1726UL] = BatteryPack_v2_ModuleAssembly3_Module05_Cell_1_electricalModel0;
    out->mLOG.mX[1727UL] = zc_int426;
    out->mLOG.mX[1728UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly3_Module05_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly3_Module05_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[211UL] * t4657->mX.mX[211UL] * 0.0 + t4657->mX.mX[212UL] * t4657->mX.mX[212UL] * 0.0) + t4657->mX.mX[213UL] * t4657->mX.mX[213UL] * 0.0) + t4657->mX.mX[214UL] * t4657->mX.mX[214UL] * 0.0) + t4657->mX.mX[215UL] * t4657->mX.mX[215UL] * 0.0) * 0.001;
    out->mLOG.mX[1729UL] = t4657->mX.mX[1211UL];
    out->mLOG.mX[1730UL] = t4657->mX.mX[1211UL];
    out->mLOG.mX[1731UL] = t4657->mX.mX[208UL];
    out->mLOG.mX[1732UL] = BatteryPack_v2_ModuleAssembly3_Module05_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[1733UL] = t4657->mX.mX[208UL];
    out->mLOG.mX[1734UL] = t4657->mX.mX[208UL];
    out->mLOG.mX[1735UL] = t4657->mX.mX[1212UL] * 1000.0;
    out->mLOG.mX[1736UL] = zc_int77;
    out->mLOG.mX[1737UL] = t4657->mX.mX[208UL];
    out->mLOG.mX[1738UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1739UL] = BatteryPack_v2_ModuleAssembly3_Module05_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[1740UL] = BatteryPack_v2_ModuleAssembly3_Module05_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[1741UL] = zc_int425;
    out->mLOG.mX[1742UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1743UL] = zc_int425;
    out->mLOG.mX[1744UL] = zc_int426;
    out->mLOG.mX[1745UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[1746UL] = zc_int426;
    out->mLOG.mX[1747UL] = t4657->mX.mX[208UL];
    out->mLOG.mX[1748UL] = BatteryPack_v2_ModuleAssembly3_Module05_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[1749UL] = t4657->mX.mX[208UL];
    out->mLOG.mX[1750UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1751UL] = zc_int425;
    out->mLOG.mX[1752UL] = t4657->mX.mX[210UL];
    out->mLOG.mX[1753UL] = zc_int426;
    out->mLOG.mX[1754UL] = 0.0;
    out->mLOG.mX[1755UL] = t4657->mX.mX[1211UL];
    out->mLOG.mX[1756UL] = t4657->mX.mX[1211UL];
    out->mLOG.mX[1757UL] = t4657->mX.mX[208UL];
    out->mLOG.mX[1758UL] = zc_int77;
    out->mLOG.mX[1759UL] = zc_int426 - zc_int425;
    out->mLOG.mX[1760UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1761UL] = t4657->mX.mX[216UL];
    out->mLOG.mX[1762UL] = t4657->mX.mX[216UL];
    out->mLOG.mX[1763UL] = t4657->mX.mX[216UL];
    out->mLOG.mX[1764UL] = t4657->mX.mX[216UL];
    out->mLOG.mX[1765UL] = t4657->mX.mX[217UL] * 0.00027777777777777778;
    out->mLOG.mX[1766UL] = t4657->mX.mX[216UL];
    out->mLOG.mX[1767UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1768UL] = zc_int424;
    out->mLOG.mX[1769UL] = t4657->mX.mX[218UL];
    out->mLOG.mX[1770UL] = t4657->mX.mX[218UL];
    out->mLOG.mX[1771UL] = t4657->mX.mX[1215UL];
    out->mLOG.mX[1772UL] = zc_int425;
    for (t2499 = 219UL; t2499 - 219UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 1554UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[1778UL] = t4657->mX.mX[1214UL];
    out->mLOG.mX[1779UL] = t4657->mX.mX[1216UL] * 1000.0;
    out->mLOG.mX[1780UL] = t4657->mX.mX[1215UL];
    out->mLOG.mX[1781UL] = zc_int80;
    out->mLOG.mX[1782UL] = t4657->mX.mX[1213UL];
    out->mLOG.mX[1783UL] = t4657->mX.mX[217UL];
    out->mLOG.mX[1784UL] = t4657->mX.mX[216UL];
    out->mLOG.mX[1785UL] = t4657->mX.mX[218UL];
    out->mLOG.mX[1786UL] = t4657->mX.mX[1213UL];
    out->mLOG.mX[1787UL] = t4657->mX.mX[1214UL];
    out->mLOG.mX[1788UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1789UL] = zc_int424;
    out->mLOG.mX[1790UL] = t4657->mX.mX[218UL];
    out->mLOG.mX[1791UL] = t3448;
    out->mLOG.mX[1792UL] = zc_int425;
    out->mLOG.mX[1793UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3452 > 8.200000000000002E-8 ? t3452 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[219UL] * t4657->mX.mX[219UL] * 0.0 + t4657->mX.mX[220UL] * t4657->mX.mX[220UL] * 0.0) + t4657->mX.mX[221UL] * t4657->mX.mX[221UL] * 0.0) + t4657->mX.mX[222UL] * t4657->mX.mX[222UL] * 0.0) + t4657->mX.mX[223UL] * t4657->mX.mX[223UL] * 0.0) * 0.001;
    out->mLOG.mX[1794UL] = t4657->mX.mX[1215UL];
    out->mLOG.mX[1795UL] = t4657->mX.mX[1215UL];
    out->mLOG.mX[1796UL] = t4657->mX.mX[216UL];
    out->mLOG.mX[1797UL] = BatteryPack_v2_ModuleAssembly3_Module06_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[1798UL] = t4657->mX.mX[216UL];
    out->mLOG.mX[1799UL] = t4657->mX.mX[216UL];
    out->mLOG.mX[1800UL] = t4657->mX.mX[1216UL] * 1000.0;
    out->mLOG.mX[1801UL] = zc_int80;
    out->mLOG.mX[1802UL] = t4657->mX.mX[216UL];
    out->mLOG.mX[1803UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1804UL] = BatteryPack_v2_ModuleAssembly3_Module06_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[1805UL] = BatteryPack_v2_ModuleAssembly3_Module06_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[1806UL] = zc_int424;
    out->mLOG.mX[1807UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1808UL] = zc_int424;
    out->mLOG.mX[1809UL] = zc_int425;
    out->mLOG.mX[1810UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[1811UL] = zc_int425;
    out->mLOG.mX[1812UL] = t4657->mX.mX[216UL];
    out->mLOG.mX[1813UL] = BatteryPack_v2_ModuleAssembly3_Module06_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[1814UL] = t4657->mX.mX[216UL];
    out->mLOG.mX[1815UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1816UL] = zc_int424;
    out->mLOG.mX[1817UL] = t4657->mX.mX[218UL];
    out->mLOG.mX[1818UL] = zc_int425;
    out->mLOG.mX[1819UL] = 0.0;
    out->mLOG.mX[1820UL] = t4657->mX.mX[1215UL];
    out->mLOG.mX[1821UL] = t4657->mX.mX[1215UL];
    out->mLOG.mX[1822UL] = t4657->mX.mX[216UL];
    out->mLOG.mX[1823UL] = zc_int80;
    out->mLOG.mX[1824UL] = zc_int425 - zc_int424;
    out->mLOG.mX[1825UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1826UL] = t4657->mX.mX[224UL];
    out->mLOG.mX[1827UL] = t4657->mX.mX[224UL];
    out->mLOG.mX[1828UL] = t4657->mX.mX[224UL];
    out->mLOG.mX[1829UL] = t4657->mX.mX[224UL];
    out->mLOG.mX[1830UL] = t4657->mX.mX[225UL] * 0.00027777777777777778;
    out->mLOG.mX[1831UL] = t4657->mX.mX[224UL];
    out->mLOG.mX[1832UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1833UL] = t3459;
    out->mLOG.mX[1834UL] = t4657->mX.mX[226UL];
    out->mLOG.mX[1835UL] = t4657->mX.mX[226UL];
    out->mLOG.mX[1836UL] = t4657->mX.mX[1219UL];
    out->mLOG.mX[1837UL] = zc_int424;
    for (t2499 = 227UL; t2499 - 227UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 1611UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[1843UL] = t4657->mX.mX[1218UL];
    out->mLOG.mX[1844UL] = t4657->mX.mX[1220UL] * 1000.0;
    out->mLOG.mX[1845UL] = t4657->mX.mX[1219UL];
    out->mLOG.mX[1846UL] = zc_int83;
    out->mLOG.mX[1847UL] = t4657->mX.mX[1217UL];
    out->mLOG.mX[1848UL] = t4657->mX.mX[225UL];
    out->mLOG.mX[1849UL] = t4657->mX.mX[224UL];
    out->mLOG.mX[1850UL] = t4657->mX.mX[226UL];
    out->mLOG.mX[1851UL] = t4657->mX.mX[1217UL];
    out->mLOG.mX[1852UL] = t4657->mX.mX[1218UL];
    out->mLOG.mX[1853UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1854UL] = t3459;
    out->mLOG.mX[1855UL] = t4657->mX.mX[226UL];
    out->mLOG.mX[1856UL] = BatteryPack_v2_ModuleAssembly3_Module07_Cell_1_electricalModel0;
    out->mLOG.mX[1857UL] = zc_int424;
    out->mLOG.mX[1858UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly3_Module07_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly3_Module07_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[227UL] * t4657->mX.mX[227UL] * 0.0 + t4657->mX.mX[228UL] * t4657->mX.mX[228UL] * 0.0) + t4657->mX.mX[229UL] * t4657->mX.mX[229UL] * 0.0) + t4657->mX.mX[230UL] * t4657->mX.mX[230UL] * 0.0) + t4657->mX.mX[231UL] * t4657->mX.mX[231UL] * 0.0) * 0.001;
    out->mLOG.mX[1859UL] = t4657->mX.mX[1219UL];
    out->mLOG.mX[1860UL] = t4657->mX.mX[1219UL];
    out->mLOG.mX[1861UL] = t4657->mX.mX[224UL];
    out->mLOG.mX[1862UL] = BatteryPack_v2_ModuleAssembly3_Module07_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[1863UL] = t4657->mX.mX[224UL];
    out->mLOG.mX[1864UL] = t4657->mX.mX[224UL];
    out->mLOG.mX[1865UL] = t4657->mX.mX[1220UL] * 1000.0;
    out->mLOG.mX[1866UL] = zc_int83;
    out->mLOG.mX[1867UL] = t4657->mX.mX[224UL];
    out->mLOG.mX[1868UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1869UL] = BatteryPack_v2_ModuleAssembly3_Module07_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[1870UL] = BatteryPack_v2_ModuleAssembly3_Module07_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[1871UL] = t3459;
    out->mLOG.mX[1872UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1873UL] = t3459;
    out->mLOG.mX[1874UL] = zc_int424;
    out->mLOG.mX[1875UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[1876UL] = zc_int424;
    out->mLOG.mX[1877UL] = t4657->mX.mX[224UL];
    out->mLOG.mX[1878UL] = BatteryPack_v2_ModuleAssembly3_Module07_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[1879UL] = t4657->mX.mX[224UL];
    out->mLOG.mX[1880UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1881UL] = t3459;
    out->mLOG.mX[1882UL] = t4657->mX.mX[226UL];
    out->mLOG.mX[1883UL] = zc_int424;
    out->mLOG.mX[1884UL] = 0.0;
    out->mLOG.mX[1885UL] = t4657->mX.mX[1219UL];
    out->mLOG.mX[1886UL] = t4657->mX.mX[1219UL];
    out->mLOG.mX[1887UL] = t4657->mX.mX[224UL];
    out->mLOG.mX[1888UL] = zc_int83;
    out->mLOG.mX[1889UL] = zc_int424 - t3459;
    out->mLOG.mX[1890UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1891UL] = t4657->mX.mX[232UL];
    out->mLOG.mX[1892UL] = t4657->mX.mX[232UL];
    out->mLOG.mX[1893UL] = t4657->mX.mX[232UL];
    out->mLOG.mX[1894UL] = t4657->mX.mX[232UL];
    out->mLOG.mX[1895UL] = t4657->mX.mX[233UL] * 0.00027777777777777778;
    out->mLOG.mX[1896UL] = t4657->mX.mX[232UL];
    out->mLOG.mX[1897UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1898UL] = t3464;
    out->mLOG.mX[1899UL] = t4657->mX.mX[234UL];
    out->mLOG.mX[1900UL] = t4657->mX.mX[234UL];
    out->mLOG.mX[1901UL] = t4657->mX.mX[1223UL];
    out->mLOG.mX[1902UL] = t3459;
    for (t2499 = 235UL; t2499 - 235UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 1668UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[1908UL] = t4657->mX.mX[1222UL];
    out->mLOG.mX[1909UL] = t4657->mX.mX[1224UL] * 1000.0;
    out->mLOG.mX[1910UL] = t4657->mX.mX[1223UL];
    out->mLOG.mX[1911UL] = zc_int86;
    out->mLOG.mX[1912UL] = t4657->mX.mX[1221UL];
    out->mLOG.mX[1913UL] = t4657->mX.mX[233UL];
    out->mLOG.mX[1914UL] = t4657->mX.mX[232UL];
    out->mLOG.mX[1915UL] = t4657->mX.mX[234UL];
    out->mLOG.mX[1916UL] = t4657->mX.mX[1221UL];
    out->mLOG.mX[1917UL] = t4657->mX.mX[1222UL];
    out->mLOG.mX[1918UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1919UL] = t3464;
    out->mLOG.mX[1920UL] = t4657->mX.mX[234UL];
    out->mLOG.mX[1921UL] = t3458;
    out->mLOG.mX[1922UL] = t3459;
    out->mLOG.mX[1923UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3462 > 8.200000000000002E-8 ? t3462 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[235UL] * t4657->mX.mX[235UL] * 0.0 + t4657->mX.mX[236UL] * t4657->mX.mX[236UL] * 0.0) + t4657->mX.mX[237UL] * t4657->mX.mX[237UL] * 0.0) + t4657->mX.mX[238UL] * t4657->mX.mX[238UL] * 0.0) + t4657->mX.mX[239UL] * t4657->mX.mX[239UL] * 0.0) * 0.001;
    out->mLOG.mX[1924UL] = t4657->mX.mX[1223UL];
    out->mLOG.mX[1925UL] = t4657->mX.mX[1223UL];
    out->mLOG.mX[1926UL] = t4657->mX.mX[232UL];
    out->mLOG.mX[1927UL] = t3460 * 1000.0;
    out->mLOG.mX[1928UL] = t4657->mX.mX[232UL];
    out->mLOG.mX[1929UL] = t4657->mX.mX[232UL];
    out->mLOG.mX[1930UL] = t4657->mX.mX[1224UL] * 1000.0;
    out->mLOG.mX[1931UL] = zc_int86;
    out->mLOG.mX[1932UL] = t4657->mX.mX[232UL];
    out->mLOG.mX[1933UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1934UL] = BatteryPack_v2_ModuleAssembly3_Module08_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[1935UL] = BatteryPack_v2_ModuleAssembly3_Module08_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[1936UL] = t3464;
    out->mLOG.mX[1937UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1938UL] = t3464;
    out->mLOG.mX[1939UL] = t3459;
    out->mLOG.mX[1940UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[1941UL] = t3459;
    out->mLOG.mX[1942UL] = t4657->mX.mX[232UL];
    out->mLOG.mX[1943UL] = t3460 * -1000.0;
    out->mLOG.mX[1944UL] = t4657->mX.mX[232UL];
    out->mLOG.mX[1945UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1946UL] = t3464;
    out->mLOG.mX[1947UL] = t4657->mX.mX[234UL];
    out->mLOG.mX[1948UL] = t3459;
    out->mLOG.mX[1949UL] = 0.0;
    out->mLOG.mX[1950UL] = t4657->mX.mX[1223UL];
    out->mLOG.mX[1951UL] = t4657->mX.mX[1223UL];
    out->mLOG.mX[1952UL] = t4657->mX.mX[232UL];
    out->mLOG.mX[1953UL] = zc_int86;
    out->mLOG.mX[1954UL] = t3459 - t3464;
    out->mLOG.mX[1955UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1956UL] = t4657->mX.mX[240UL];
    out->mLOG.mX[1957UL] = t4657->mX.mX[240UL];
    out->mLOG.mX[1958UL] = t4657->mX.mX[240UL];
    out->mLOG.mX[1959UL] = t4657->mX.mX[240UL];
    out->mLOG.mX[1960UL] = t4657->mX.mX[241UL] * 0.00027777777777777778;
    out->mLOG.mX[1961UL] = t4657->mX.mX[240UL];
    out->mLOG.mX[1962UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1963UL] = t3469;
    out->mLOG.mX[1964UL] = t4657->mX.mX[242UL];
    out->mLOG.mX[1965UL] = t4657->mX.mX[242UL];
    out->mLOG.mX[1966UL] = t4657->mX.mX[1227UL];
    out->mLOG.mX[1967UL] = t3464;
    for (t2499 = 243UL; t2499 - 243UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 1725UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[1973UL] = t4657->mX.mX[1226UL];
    out->mLOG.mX[1974UL] = t4657->mX.mX[1228UL] * 1000.0;
    out->mLOG.mX[1975UL] = t4657->mX.mX[1227UL];
    out->mLOG.mX[1976UL] = zc_int89;
    out->mLOG.mX[1977UL] = t4657->mX.mX[1225UL];
    out->mLOG.mX[1978UL] = t4657->mX.mX[241UL];
    out->mLOG.mX[1979UL] = t4657->mX.mX[240UL];
    out->mLOG.mX[1980UL] = t4657->mX.mX[242UL];
    out->mLOG.mX[1981UL] = t4657->mX.mX[1225UL];
    out->mLOG.mX[1982UL] = t4657->mX.mX[1226UL];
    out->mLOG.mX[1983UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[1984UL] = t3469;
    out->mLOG.mX[1985UL] = t4657->mX.mX[242UL];
    out->mLOG.mX[1986UL] = BatteryPack_v2_ModuleAssembly3_Module09_Cell_1_electricalModel0;
    out->mLOG.mX[1987UL] = t3464;
    out->mLOG.mX[1988UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3467 > 8.200000000000002E-8 ? t3467 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[243UL] * t4657->mX.mX[243UL] * 0.0 + t4657->mX.mX[244UL] * t4657->mX.mX[244UL] * 0.0) + t4657->mX.mX[245UL] * t4657->mX.mX[245UL] * 0.0) + t4657->mX.mX[246UL] * t4657->mX.mX[246UL] * 0.0) + t4657->mX.mX[247UL] * t4657->mX.mX[247UL] * 0.0) * 0.001;
    out->mLOG.mX[1989UL] = t4657->mX.mX[1227UL];
    out->mLOG.mX[1990UL] = t4657->mX.mX[1227UL];
    out->mLOG.mX[1991UL] = t4657->mX.mX[240UL];
    out->mLOG.mX[1992UL] = BatteryPack_v2_ModuleAssembly3_Module09_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[1993UL] = t4657->mX.mX[240UL];
    out->mLOG.mX[1994UL] = t4657->mX.mX[240UL];
    out->mLOG.mX[1995UL] = t4657->mX.mX[1228UL] * 1000.0;
    out->mLOG.mX[1996UL] = zc_int89;
    out->mLOG.mX[1997UL] = t4657->mX.mX[240UL];
    out->mLOG.mX[1998UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[1999UL] = BatteryPack_v2_ModuleAssembly3_Module09_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[2000UL] = BatteryPack_v2_ModuleAssembly3_Module09_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[2001UL] = t3469;
    out->mLOG.mX[2002UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2003UL] = t3469;
    out->mLOG.mX[2004UL] = t3464;
    out->mLOG.mX[2005UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[2006UL] = t3464;
    out->mLOG.mX[2007UL] = t4657->mX.mX[240UL];
    out->mLOG.mX[2008UL] = BatteryPack_v2_ModuleAssembly3_Module09_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[2009UL] = t4657->mX.mX[240UL];
    out->mLOG.mX[2010UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2011UL] = t3469;
    out->mLOG.mX[2012UL] = t4657->mX.mX[242UL];
    out->mLOG.mX[2013UL] = t3464;
    out->mLOG.mX[2014UL] = 0.0;
    out->mLOG.mX[2015UL] = t4657->mX.mX[1227UL];
    out->mLOG.mX[2016UL] = t4657->mX.mX[1227UL];
    out->mLOG.mX[2017UL] = t4657->mX.mX[240UL];
    out->mLOG.mX[2018UL] = zc_int89;
    out->mLOG.mX[2019UL] = t3464 - t3469;
    out->mLOG.mX[2020UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2021UL] = t4657->mX.mX[248UL];
    out->mLOG.mX[2022UL] = t4657->mX.mX[248UL];
    out->mLOG.mX[2023UL] = t4657->mX.mX[248UL];
    out->mLOG.mX[2024UL] = t4657->mX.mX[248UL];
    out->mLOG.mX[2025UL] = t4657->mX.mX[249UL] * 0.00027777777777777778;
    out->mLOG.mX[2026UL] = t4657->mX.mX[248UL];
    out->mLOG.mX[2027UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2028UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    out->mLOG.mX[2029UL] = t4657->mX.mX[250UL];
    out->mLOG.mX[2030UL] = t4657->mX.mX[250UL];
    out->mLOG.mX[2031UL] = t4657->mX.mX[1231UL];
    out->mLOG.mX[2032UL] = t3469;
    for (t2499 = 251UL; t2499 - 251UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 1782UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[2038UL] = t4657->mX.mX[1230UL];
    out->mLOG.mX[2039UL] = t4657->mX.mX[1232UL] * 1000.0;
    out->mLOG.mX[2040UL] = t4657->mX.mX[1231UL];
    out->mLOG.mX[2041UL] = BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3;
    out->mLOG.mX[2042UL] = t4657->mX.mX[1229UL];
    out->mLOG.mX[2043UL] = t4657->mX.mX[249UL];
    out->mLOG.mX[2044UL] = t4657->mX.mX[248UL];
    out->mLOG.mX[2045UL] = t4657->mX.mX[250UL];
    out->mLOG.mX[2046UL] = t4657->mX.mX[1229UL];
    out->mLOG.mX[2047UL] = t4657->mX.mX[1230UL];
    out->mLOG.mX[2048UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2049UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    out->mLOG.mX[2050UL] = t4657->mX.mX[250UL];
    out->mLOG.mX[2051UL] = t3468;
    out->mLOG.mX[2052UL] = t3469;
    out->mLOG.mX[2053UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3472 > 8.200000000000002E-8 ? t3472 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[251UL] * t4657->mX.mX[251UL] * 0.0 + t4657->mX.mX[252UL] * t4657->mX.mX[252UL] * 0.0) + t4657->mX.mX[253UL] * t4657->mX.mX[253UL] * 0.0) + t4657->mX.mX[254UL] * t4657->mX.mX[254UL] * 0.0) + t4657->mX.mX[255UL] * t4657->mX.mX[255UL] * 0.0) * 0.001;
    out->mLOG.mX[2054UL] = t4657->mX.mX[1231UL];
    out->mLOG.mX[2055UL] = t4657->mX.mX[1231UL];
    out->mLOG.mX[2056UL] = t4657->mX.mX[248UL];
    out->mLOG.mX[2057UL] = BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[2058UL] = t4657->mX.mX[248UL];
    out->mLOG.mX[2059UL] = t4657->mX.mX[248UL];
    out->mLOG.mX[2060UL] = t4657->mX.mX[1232UL] * 1000.0;
    out->mLOG.mX[2061UL] = BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3;
    out->mLOG.mX[2062UL] = t4657->mX.mX[248UL];
    out->mLOG.mX[2063UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2064UL] = BatteryPack_v2_ModuleAssembly3_Module10_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[2065UL] = BatteryPack_v2_ModuleAssembly3_Module10_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[2066UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    out->mLOG.mX[2067UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2068UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    out->mLOG.mX[2069UL] = t3469;
    out->mLOG.mX[2070UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[2071UL] = t3469;
    out->mLOG.mX[2072UL] = t4657->mX.mX[248UL];
    out->mLOG.mX[2073UL] = BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[2074UL] = t4657->mX.mX[248UL];
    out->mLOG.mX[2075UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2076UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    out->mLOG.mX[2077UL] = t4657->mX.mX[250UL];
    out->mLOG.mX[2078UL] = t3469;
    out->mLOG.mX[2079UL] = 0.0;
    out->mLOG.mX[2080UL] = t4657->mX.mX[1231UL];
    out->mLOG.mX[2081UL] = t4657->mX.mX[1231UL];
    out->mLOG.mX[2082UL] = t4657->mX.mX[248UL];
    out->mLOG.mX[2083UL] = BatteryPack_v2_ModuleAssembly3_Module10_Cell_1_electricalModel3;
    out->mLOG.mX[2084UL] = t3469 - BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    out->mLOG.mX[2085UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2086UL] = t4657->mX.mX[256UL];
    out->mLOG.mX[2087UL] = t4657->mX.mX[256UL];
    out->mLOG.mX[2088UL] = t4657->mX.mX[256UL];
    out->mLOG.mX[2089UL] = t4657->mX.mX[256UL];
    out->mLOG.mX[2090UL] = t4657->mX.mX[257UL] * 0.00027777777777777778;
    out->mLOG.mX[2091UL] = t4657->mX.mX[256UL];
    out->mLOG.mX[2092UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2093UL] = t3479;
    out->mLOG.mX[2094UL] = t4657->mX.mX[258UL];
    out->mLOG.mX[2095UL] = t4657->mX.mX[258UL];
    out->mLOG.mX[2096UL] = t4657->mX.mX[1235UL];
    out->mLOG.mX[2097UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    for (t2499 = 259UL; t2499 - 259UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 1839UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[2103UL] = t4657->mX.mX[1234UL];
    out->mLOG.mX[2104UL] = t4657->mX.mX[1236UL] * 1000.0;
    out->mLOG.mX[2105UL] = t4657->mX.mX[1235UL];
    out->mLOG.mX[2106UL] = BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3;
    out->mLOG.mX[2107UL] = t4657->mX.mX[1233UL];
    out->mLOG.mX[2108UL] = t4657->mX.mX[257UL];
    out->mLOG.mX[2109UL] = t4657->mX.mX[256UL];
    out->mLOG.mX[2110UL] = t4657->mX.mX[258UL];
    out->mLOG.mX[2111UL] = t4657->mX.mX[1233UL];
    out->mLOG.mX[2112UL] = t4657->mX.mX[1234UL];
    out->mLOG.mX[2113UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2114UL] = t3479;
    out->mLOG.mX[2115UL] = t4657->mX.mX[258UL];
    out->mLOG.mX[2116UL] = t3473;
    out->mLOG.mX[2117UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    out->mLOG.mX[2118UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly3_Module11_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly3_Module11_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[259UL] * t4657->mX.mX[259UL] * 0.0 + t4657->mX.mX[260UL] * t4657->mX.mX[260UL] * 0.0) + t4657->mX.mX[261UL] * t4657->mX.mX[261UL] * 0.0) + t4657->mX.mX[262UL] * t4657->mX.mX[262UL] * 0.0) + t4657->mX.mX[263UL] * t4657->mX.mX[263UL] * 0.0) * 0.001;
    out->mLOG.mX[2119UL] = t4657->mX.mX[1235UL];
    out->mLOG.mX[2120UL] = t4657->mX.mX[1235UL];
    out->mLOG.mX[2121UL] = t4657->mX.mX[256UL];
    out->mLOG.mX[2122UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[2123UL] = t4657->mX.mX[256UL];
    out->mLOG.mX[2124UL] = t4657->mX.mX[256UL];
    out->mLOG.mX[2125UL] = t4657->mX.mX[1236UL] * 1000.0;
    out->mLOG.mX[2126UL] = BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3;
    out->mLOG.mX[2127UL] = t4657->mX.mX[256UL];
    out->mLOG.mX[2128UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2129UL] = BatteryPack_v2_ModuleAssembly3_Module11_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[2130UL] = BatteryPack_v2_ModuleAssembly3_Module11_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[2131UL] = t3479;
    out->mLOG.mX[2132UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2133UL] = t3479;
    out->mLOG.mX[2134UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    out->mLOG.mX[2135UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[2136UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    out->mLOG.mX[2137UL] = t4657->mX.mX[256UL];
    out->mLOG.mX[2138UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[2139UL] = t4657->mX.mX[256UL];
    out->mLOG.mX[2140UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2141UL] = t3479;
    out->mLOG.mX[2142UL] = t4657->mX.mX[258UL];
    out->mLOG.mX[2143UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3;
    out->mLOG.mX[2144UL] = 0.0;
    out->mLOG.mX[2145UL] = t4657->mX.mX[1235UL];
    out->mLOG.mX[2146UL] = t4657->mX.mX[1235UL];
    out->mLOG.mX[2147UL] = t4657->mX.mX[256UL];
    out->mLOG.mX[2148UL] = BatteryPack_v2_ModuleAssembly2_Module17_Cell_1_electricalModel3;
    out->mLOG.mX[2149UL] = BatteryPack_v2_ModuleAssembly3_Module11_Cell_1_electricalModel3 - t3479;
    out->mLOG.mX[2150UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2151UL] = t4657->mX.mX[264UL];
    out->mLOG.mX[2152UL] = t4657->mX.mX[264UL];
    out->mLOG.mX[2153UL] = t4657->mX.mX[264UL];
    out->mLOG.mX[2154UL] = t4657->mX.mX[264UL];
    out->mLOG.mX[2155UL] = t4657->mX.mX[265UL] * 0.00027777777777777778;
    out->mLOG.mX[2156UL] = t4657->mX.mX[264UL];
    out->mLOG.mX[2157UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2158UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    out->mLOG.mX[2159UL] = t4657->mX.mX[266UL];
    out->mLOG.mX[2160UL] = t4657->mX.mX[266UL];
    out->mLOG.mX[2161UL] = t4657->mX.mX[1239UL];
    out->mLOG.mX[2162UL] = t3479;
    for (t2499 = 267UL; t2499 - 267UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 1896UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[2168UL] = t4657->mX.mX[1238UL];
    out->mLOG.mX[2169UL] = t4657->mX.mX[1240UL] * 1000.0;
    out->mLOG.mX[2170UL] = t4657->mX.mX[1239UL];
    out->mLOG.mX[2171UL] = zc_int97;
    out->mLOG.mX[2172UL] = t4657->mX.mX[1237UL];
    out->mLOG.mX[2173UL] = t4657->mX.mX[265UL];
    out->mLOG.mX[2174UL] = t4657->mX.mX[264UL];
    out->mLOG.mX[2175UL] = t4657->mX.mX[266UL];
    out->mLOG.mX[2176UL] = t4657->mX.mX[1237UL];
    out->mLOG.mX[2177UL] = t4657->mX.mX[1238UL];
    out->mLOG.mX[2178UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2179UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    out->mLOG.mX[2180UL] = t4657->mX.mX[266UL];
    out->mLOG.mX[2181UL] = BatteryPack_v2_ModuleAssembly3_Module12_Cell_1_electricalModel0;
    out->mLOG.mX[2182UL] = t3479;
    out->mLOG.mX[2183UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly3_Module12_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly3_Module12_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[267UL] * t4657->mX.mX[267UL] * 0.0 + t4657->mX.mX[268UL] * t4657->mX.mX[268UL] * 0.0) + t4657->mX.mX[269UL] * t4657->mX.mX[269UL] * 0.0) + t4657->mX.mX[270UL] * t4657->mX.mX[270UL] * 0.0) + t4657->mX.mX[271UL] * t4657->mX.mX[271UL] * 0.0) * 0.001;
    out->mLOG.mX[2184UL] = t4657->mX.mX[1239UL];
    out->mLOG.mX[2185UL] = t4657->mX.mX[1239UL];
    out->mLOG.mX[2186UL] = t4657->mX.mX[264UL];
    out->mLOG.mX[2187UL] = BatteryPack_v2_ModuleAssembly3_Module12_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[2188UL] = t4657->mX.mX[264UL];
    out->mLOG.mX[2189UL] = t4657->mX.mX[264UL];
    out->mLOG.mX[2190UL] = t4657->mX.mX[1240UL] * 1000.0;
    out->mLOG.mX[2191UL] = zc_int97;
    out->mLOG.mX[2192UL] = t4657->mX.mX[264UL];
    out->mLOG.mX[2193UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2194UL] = BatteryPack_v2_ModuleAssembly3_Module12_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[2195UL] = BatteryPack_v2_ModuleAssembly3_Module12_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[2196UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    out->mLOG.mX[2197UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2198UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    out->mLOG.mX[2199UL] = t3479;
    out->mLOG.mX[2200UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[2201UL] = t3479;
    out->mLOG.mX[2202UL] = t4657->mX.mX[264UL];
    out->mLOG.mX[2203UL] = BatteryPack_v2_ModuleAssembly3_Module12_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[2204UL] = t4657->mX.mX[264UL];
    out->mLOG.mX[2205UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2206UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    out->mLOG.mX[2207UL] = t4657->mX.mX[266UL];
    out->mLOG.mX[2208UL] = t3479;
    out->mLOG.mX[2209UL] = 0.0;
    out->mLOG.mX[2210UL] = t4657->mX.mX[1239UL];
    out->mLOG.mX[2211UL] = t4657->mX.mX[1239UL];
    out->mLOG.mX[2212UL] = t4657->mX.mX[264UL];
    out->mLOG.mX[2213UL] = zc_int97;
    out->mLOG.mX[2214UL] = t3479 - BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    out->mLOG.mX[2215UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2216UL] = t4657->mX.mX[272UL];
    out->mLOG.mX[2217UL] = t4657->mX.mX[272UL];
    out->mLOG.mX[2218UL] = t4657->mX.mX[272UL];
    out->mLOG.mX[2219UL] = t4657->mX.mX[272UL];
    out->mLOG.mX[2220UL] = t4657->mX.mX[273UL] * 0.00027777777777777778;
    out->mLOG.mX[2221UL] = t4657->mX.mX[272UL];
    out->mLOG.mX[2222UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2223UL] = intrm_sf_mf_107;
    out->mLOG.mX[2224UL] = t4657->mX.mX[274UL];
    out->mLOG.mX[2225UL] = t4657->mX.mX[274UL];
    out->mLOG.mX[2226UL] = t4657->mX.mX[1243UL];
    out->mLOG.mX[2227UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    for (t2499 = 275UL; t2499 - 275UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 1953UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[2233UL] = t4657->mX.mX[1242UL];
    out->mLOG.mX[2234UL] = t4657->mX.mX[1244UL] * 1000.0;
    out->mLOG.mX[2235UL] = t4657->mX.mX[1243UL];
    out->mLOG.mX[2236UL] = intrm_sf_mf_4;
    out->mLOG.mX[2237UL] = t4657->mX.mX[1241UL];
    out->mLOG.mX[2238UL] = t4657->mX.mX[273UL];
    out->mLOG.mX[2239UL] = t4657->mX.mX[272UL];
    out->mLOG.mX[2240UL] = t4657->mX.mX[274UL];
    out->mLOG.mX[2241UL] = t4657->mX.mX[1241UL];
    out->mLOG.mX[2242UL] = t4657->mX.mX[1242UL];
    out->mLOG.mX[2243UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2244UL] = intrm_sf_mf_107;
    out->mLOG.mX[2245UL] = t4657->mX.mX[274UL];
    out->mLOG.mX[2246UL] = t3483;
    out->mLOG.mX[2247UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    out->mLOG.mX[2248UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3487 > 8.200000000000002E-8 ? t3487 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[275UL] * t4657->mX.mX[275UL] * 0.0 + t4657->mX.mX[276UL] * t4657->mX.mX[276UL] * 0.0) + t4657->mX.mX[277UL] * t4657->mX.mX[277UL] * 0.0) + t4657->mX.mX[278UL] * t4657->mX.mX[278UL] * 0.0) + t4657->mX.mX[279UL] * t4657->mX.mX[279UL] * 0.0) * 0.001;
    out->mLOG.mX[2249UL] = t4657->mX.mX[1243UL];
    out->mLOG.mX[2250UL] = t4657->mX.mX[1243UL];
    out->mLOG.mX[2251UL] = t4657->mX.mX[272UL];
    out->mLOG.mX[2252UL] = t3485 * 1000.0;
    out->mLOG.mX[2253UL] = t4657->mX.mX[272UL];
    out->mLOG.mX[2254UL] = t4657->mX.mX[272UL];
    out->mLOG.mX[2255UL] = t4657->mX.mX[1244UL] * 1000.0;
    out->mLOG.mX[2256UL] = intrm_sf_mf_4;
    out->mLOG.mX[2257UL] = t4657->mX.mX[272UL];
    out->mLOG.mX[2258UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2259UL] = BatteryPack_v2_ModuleAssembly3_Module13_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[2260UL] = BatteryPack_v2_ModuleAssembly3_Module13_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[2261UL] = intrm_sf_mf_107;
    out->mLOG.mX[2262UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2263UL] = intrm_sf_mf_107;
    out->mLOG.mX[2264UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    out->mLOG.mX[2265UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[2266UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    out->mLOG.mX[2267UL] = t4657->mX.mX[272UL];
    out->mLOG.mX[2268UL] = t3485 * -1000.0;
    out->mLOG.mX[2269UL] = t4657->mX.mX[272UL];
    out->mLOG.mX[2270UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2271UL] = intrm_sf_mf_107;
    out->mLOG.mX[2272UL] = t4657->mX.mX[274UL];
    out->mLOG.mX[2273UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3;
    out->mLOG.mX[2274UL] = 0.0;
    out->mLOG.mX[2275UL] = t4657->mX.mX[1243UL];
    out->mLOG.mX[2276UL] = t4657->mX.mX[1243UL];
    out->mLOG.mX[2277UL] = t4657->mX.mX[272UL];
    out->mLOG.mX[2278UL] = intrm_sf_mf_4;
    out->mLOG.mX[2279UL] = BatteryPack_v2_ModuleAssembly6_Module18_Cell_1_electricalModel3 - intrm_sf_mf_107;
    out->mLOG.mX[2280UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2281UL] = t4657->mX.mX[280UL];
    out->mLOG.mX[2282UL] = t4657->mX.mX[280UL];
    out->mLOG.mX[2283UL] = t4657->mX.mX[280UL];
    out->mLOG.mX[2284UL] = t4657->mX.mX[280UL];
    out->mLOG.mX[2285UL] = t4657->mX.mX[281UL] * 0.00027777777777777778;
    out->mLOG.mX[2286UL] = t4657->mX.mX[280UL];
    out->mLOG.mX[2287UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2288UL] = zc_int416;
    out->mLOG.mX[2289UL] = t4657->mX.mX[282UL];
    out->mLOG.mX[2290UL] = t4657->mX.mX[282UL];
    out->mLOG.mX[2291UL] = t4657->mX.mX[1247UL];
    out->mLOG.mX[2292UL] = intrm_sf_mf_107;
    for (t2499 = 283UL; t2499 - 283UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 2010UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[2298UL] = t4657->mX.mX[1246UL];
    out->mLOG.mX[2299UL] = t4657->mX.mX[1248UL] * 1000.0;
    out->mLOG.mX[2300UL] = t4657->mX.mX[1247UL];
    out->mLOG.mX[2301UL] = zc_int102;
    out->mLOG.mX[2302UL] = t4657->mX.mX[1245UL];
    out->mLOG.mX[2303UL] = t4657->mX.mX[281UL];
    out->mLOG.mX[2304UL] = t4657->mX.mX[280UL];
    out->mLOG.mX[2305UL] = t4657->mX.mX[282UL];
    out->mLOG.mX[2306UL] = t4657->mX.mX[1245UL];
    out->mLOG.mX[2307UL] = t4657->mX.mX[1246UL];
    out->mLOG.mX[2308UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2309UL] = zc_int416;
    out->mLOG.mX[2310UL] = t4657->mX.mX[282UL];
    out->mLOG.mX[2311UL] = t3488;
    out->mLOG.mX[2312UL] = intrm_sf_mf_107;
    out->mLOG.mX[2313UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly3_Module14_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly3_Module14_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[283UL] * t4657->mX.mX[283UL] * 0.0 + t4657->mX.mX[284UL] * t4657->mX.mX[284UL] * 0.0) + t4657->mX.mX[285UL] * t4657->mX.mX[285UL] * 0.0) + t4657->mX.mX[286UL] * t4657->mX.mX[286UL] * 0.0) + t4657->mX.mX[287UL] * t4657->mX.mX[287UL] * 0.0) * 0.001;
    out->mLOG.mX[2314UL] = t4657->mX.mX[1247UL];
    out->mLOG.mX[2315UL] = t4657->mX.mX[1247UL];
    out->mLOG.mX[2316UL] = t4657->mX.mX[280UL];
    out->mLOG.mX[2317UL] = t3490 * 1000.0;
    out->mLOG.mX[2318UL] = t4657->mX.mX[280UL];
    out->mLOG.mX[2319UL] = t4657->mX.mX[280UL];
    out->mLOG.mX[2320UL] = t4657->mX.mX[1248UL] * 1000.0;
    out->mLOG.mX[2321UL] = zc_int102;
    out->mLOG.mX[2322UL] = t4657->mX.mX[280UL];
    out->mLOG.mX[2323UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2324UL] = BatteryPack_v2_ModuleAssembly3_Module14_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[2325UL] = BatteryPack_v2_ModuleAssembly3_Module14_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[2326UL] = zc_int416;
    out->mLOG.mX[2327UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2328UL] = zc_int416;
    out->mLOG.mX[2329UL] = intrm_sf_mf_107;
    out->mLOG.mX[2330UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[2331UL] = intrm_sf_mf_107;
    out->mLOG.mX[2332UL] = t4657->mX.mX[280UL];
    out->mLOG.mX[2333UL] = t3490 * -1000.0;
    out->mLOG.mX[2334UL] = t4657->mX.mX[280UL];
    out->mLOG.mX[2335UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2336UL] = zc_int416;
    out->mLOG.mX[2337UL] = t4657->mX.mX[282UL];
    out->mLOG.mX[2338UL] = intrm_sf_mf_107;
    out->mLOG.mX[2339UL] = 0.0;
    out->mLOG.mX[2340UL] = t4657->mX.mX[1247UL];
    out->mLOG.mX[2341UL] = t4657->mX.mX[1247UL];
    out->mLOG.mX[2342UL] = t4657->mX.mX[280UL];
    out->mLOG.mX[2343UL] = zc_int102;
    out->mLOG.mX[2344UL] = intrm_sf_mf_107 - zc_int416;
    out->mLOG.mX[2345UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2346UL] = t4657->mX.mX[288UL];
    out->mLOG.mX[2347UL] = t4657->mX.mX[288UL];
    out->mLOG.mX[2348UL] = t4657->mX.mX[288UL];
    out->mLOG.mX[2349UL] = t4657->mX.mX[288UL];
    out->mLOG.mX[2350UL] = t4657->mX.mX[289UL] * 0.00027777777777777778;
    out->mLOG.mX[2351UL] = t4657->mX.mX[288UL];
    out->mLOG.mX[2352UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2353UL] = zc_int415;
    out->mLOG.mX[2354UL] = t4657->mX.mX[290UL];
    out->mLOG.mX[2355UL] = t4657->mX.mX[290UL];
    out->mLOG.mX[2356UL] = t4657->mX.mX[1251UL];
    out->mLOG.mX[2357UL] = zc_int416;
    for (t2499 = 291UL; t2499 - 291UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 2067UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[2363UL] = t4657->mX.mX[1250UL];
    out->mLOG.mX[2364UL] = t4657->mX.mX[1252UL] * 1000.0;
    out->mLOG.mX[2365UL] = t4657->mX.mX[1251UL];
    out->mLOG.mX[2366UL] = zc_int99;
    out->mLOG.mX[2367UL] = t4657->mX.mX[1249UL];
    out->mLOG.mX[2368UL] = t4657->mX.mX[289UL];
    out->mLOG.mX[2369UL] = t4657->mX.mX[288UL];
    out->mLOG.mX[2370UL] = t4657->mX.mX[290UL];
    out->mLOG.mX[2371UL] = t4657->mX.mX[1249UL];
    out->mLOG.mX[2372UL] = t4657->mX.mX[1250UL];
    out->mLOG.mX[2373UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2374UL] = zc_int415;
    out->mLOG.mX[2375UL] = t4657->mX.mX[290UL];
    out->mLOG.mX[2376UL] = BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel0;
    out->mLOG.mX[2377UL] = zc_int416;
    out->mLOG.mX[2378UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly3_Module15_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly3_Module15_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[291UL] * t4657->mX.mX[291UL] * 0.0 + t4657->mX.mX[292UL] * t4657->mX.mX[292UL] * 0.0) + t4657->mX.mX[293UL] * t4657->mX.mX[293UL] * 0.0) + t4657->mX.mX[294UL] * t4657->mX.mX[294UL] * 0.0) + t4657->mX.mX[295UL] * t4657->mX.mX[295UL] * 0.0) * 0.001;
    out->mLOG.mX[2379UL] = t4657->mX.mX[1251UL];
    out->mLOG.mX[2380UL] = t4657->mX.mX[1251UL];
    out->mLOG.mX[2381UL] = t4657->mX.mX[288UL];
    out->mLOG.mX[2382UL] = t3495 * 1000.0;
    out->mLOG.mX[2383UL] = t4657->mX.mX[288UL];
    out->mLOG.mX[2384UL] = t4657->mX.mX[288UL];
    out->mLOG.mX[2385UL] = t4657->mX.mX[1252UL] * 1000.0;
    out->mLOG.mX[2386UL] = zc_int99;
    out->mLOG.mX[2387UL] = t4657->mX.mX[288UL];
    out->mLOG.mX[2388UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2389UL] = BatteryPack_v2_ModuleAssembly3_Module15_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[2390UL] = BatteryPack_v2_ModuleAssembly3_Module15_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[2391UL] = zc_int415;
    out->mLOG.mX[2392UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2393UL] = zc_int415;
    out->mLOG.mX[2394UL] = zc_int416;
    out->mLOG.mX[2395UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[2396UL] = zc_int416;
    out->mLOG.mX[2397UL] = t4657->mX.mX[288UL];
    out->mLOG.mX[2398UL] = t3495 * -1000.0;
    out->mLOG.mX[2399UL] = t4657->mX.mX[288UL];
    out->mLOG.mX[2400UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2401UL] = zc_int415;
    out->mLOG.mX[2402UL] = t4657->mX.mX[290UL];
    out->mLOG.mX[2403UL] = zc_int416;
    out->mLOG.mX[2404UL] = 0.0;
    out->mLOG.mX[2405UL] = t4657->mX.mX[1251UL];
    out->mLOG.mX[2406UL] = t4657->mX.mX[1251UL];
    out->mLOG.mX[2407UL] = t4657->mX.mX[288UL];
    out->mLOG.mX[2408UL] = zc_int99;
    out->mLOG.mX[2409UL] = zc_int416 - zc_int415;
    out->mLOG.mX[2410UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2411UL] = t4657->mX.mX[296UL];
    out->mLOG.mX[2412UL] = t4657->mX.mX[296UL];
    out->mLOG.mX[2413UL] = t4657->mX.mX[296UL];
    out->mLOG.mX[2414UL] = t4657->mX.mX[296UL];
    out->mLOG.mX[2415UL] = t4657->mX.mX[297UL] * 0.00027777777777777778;
    out->mLOG.mX[2416UL] = t4657->mX.mX[296UL];
    out->mLOG.mX[2417UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2418UL] = zc_int414;
    out->mLOG.mX[2419UL] = t4657->mX.mX[298UL];
    out->mLOG.mX[2420UL] = t4657->mX.mX[298UL];
    out->mLOG.mX[2421UL] = t4657->mX.mX[1255UL];
    out->mLOG.mX[2422UL] = zc_int415;
    for (t2499 = 299UL; t2499 - 299UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 2124UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[2428UL] = t4657->mX.mX[1254UL];
    out->mLOG.mX[2429UL] = t4657->mX.mX[1256UL] * 1000.0;
    out->mLOG.mX[2430UL] = t4657->mX.mX[1255UL];
    out->mLOG.mX[2431UL] = zc_int110;
    out->mLOG.mX[2432UL] = t4657->mX.mX[1253UL];
    out->mLOG.mX[2433UL] = t4657->mX.mX[297UL];
    out->mLOG.mX[2434UL] = t4657->mX.mX[296UL];
    out->mLOG.mX[2435UL] = t4657->mX.mX[298UL];
    out->mLOG.mX[2436UL] = t4657->mX.mX[1253UL];
    out->mLOG.mX[2437UL] = t4657->mX.mX[1254UL];
    out->mLOG.mX[2438UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2439UL] = zc_int414;
    out->mLOG.mX[2440UL] = t4657->mX.mX[298UL];
    out->mLOG.mX[2441UL] = BatteryPack_v2_ModuleAssembly3_Module16_Cell_1_electricalModel0;
    out->mLOG.mX[2442UL] = zc_int415;
    out->mLOG.mX[2443UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly3_Module16_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly3_Module16_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[299UL] * t4657->mX.mX[299UL] * 0.0 + t4657->mX.mX[300UL] * t4657->mX.mX[300UL] * 0.0) + t4657->mX.mX[301UL] * t4657->mX.mX[301UL] * 0.0) + t4657->mX.mX[302UL] * t4657->mX.mX[302UL] * 0.0) + t4657->mX.mX[303UL] * t4657->mX.mX[303UL] * 0.0) * 0.001;
    out->mLOG.mX[2444UL] = t4657->mX.mX[1255UL];
    out->mLOG.mX[2445UL] = t4657->mX.mX[1255UL];
    out->mLOG.mX[2446UL] = t4657->mX.mX[296UL];
    out->mLOG.mX[2447UL] = t3500 * 1000.0;
    out->mLOG.mX[2448UL] = t4657->mX.mX[296UL];
    out->mLOG.mX[2449UL] = t4657->mX.mX[296UL];
    out->mLOG.mX[2450UL] = t4657->mX.mX[1256UL] * 1000.0;
    out->mLOG.mX[2451UL] = zc_int110;
    out->mLOG.mX[2452UL] = t4657->mX.mX[296UL];
    out->mLOG.mX[2453UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2454UL] = BatteryPack_v2_ModuleAssembly3_Module16_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[2455UL] = BatteryPack_v2_ModuleAssembly3_Module16_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[2456UL] = zc_int414;
    out->mLOG.mX[2457UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2458UL] = zc_int414;
    out->mLOG.mX[2459UL] = zc_int415;
    out->mLOG.mX[2460UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[2461UL] = zc_int415;
    out->mLOG.mX[2462UL] = t4657->mX.mX[296UL];
    out->mLOG.mX[2463UL] = t3500 * -1000.0;
    out->mLOG.mX[2464UL] = t4657->mX.mX[296UL];
    out->mLOG.mX[2465UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2466UL] = zc_int414;
    out->mLOG.mX[2467UL] = t4657->mX.mX[298UL];
    out->mLOG.mX[2468UL] = zc_int415;
    out->mLOG.mX[2469UL] = 0.0;
    out->mLOG.mX[2470UL] = t4657->mX.mX[1255UL];
    out->mLOG.mX[2471UL] = t4657->mX.mX[1255UL];
    out->mLOG.mX[2472UL] = t4657->mX.mX[296UL];
    out->mLOG.mX[2473UL] = zc_int110;
    out->mLOG.mX[2474UL] = zc_int415 - zc_int414;
    out->mLOG.mX[2475UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2476UL] = t4657->mX.mX[304UL];
    out->mLOG.mX[2477UL] = t4657->mX.mX[304UL];
    out->mLOG.mX[2478UL] = t4657->mX.mX[304UL];
    out->mLOG.mX[2479UL] = t4657->mX.mX[304UL];
    out->mLOG.mX[2480UL] = t4657->mX.mX[305UL] * 0.00027777777777777778;
    out->mLOG.mX[2481UL] = t4657->mX.mX[304UL];
    out->mLOG.mX[2482UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2483UL] = t3839;
    out->mLOG.mX[2484UL] = t4657->mX.mX[306UL];
    out->mLOG.mX[2485UL] = t4657->mX.mX[306UL];
    out->mLOG.mX[2486UL] = t4657->mX.mX[1259UL];
    out->mLOG.mX[2487UL] = zc_int414;
    for (t2499 = 307UL; t2499 - 307UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 2181UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[2493UL] = t4657->mX.mX[1258UL];
    out->mLOG.mX[2494UL] = t4657->mX.mX[1260UL] * 1000.0;
    out->mLOG.mX[2495UL] = t4657->mX.mX[1259UL];
    out->mLOG.mX[2496UL] = BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3;
    out->mLOG.mX[2497UL] = t4657->mX.mX[1257UL];
    out->mLOG.mX[2498UL] = t4657->mX.mX[305UL];
    out->mLOG.mX[2499UL] = t4657->mX.mX[304UL];
    out->mLOG.mX[2500UL] = t4657->mX.mX[306UL];
    out->mLOG.mX[2501UL] = t4657->mX.mX[1257UL];
    out->mLOG.mX[2502UL] = t4657->mX.mX[1258UL];
    out->mLOG.mX[2503UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2504UL] = t3839;
    out->mLOG.mX[2505UL] = t4657->mX.mX[306UL];
    out->mLOG.mX[2506UL] = t3503;
    out->mLOG.mX[2507UL] = zc_int414;
    out->mLOG.mX[2508UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly3_Module17_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly3_Module17_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[307UL] * t4657->mX.mX[307UL] * 0.0 + t4657->mX.mX[308UL] * t4657->mX.mX[308UL] * 0.0) + t4657->mX.mX[309UL] * t4657->mX.mX[309UL] * 0.0) + t4657->mX.mX[310UL] * t4657->mX.mX[310UL] * 0.0) + t4657->mX.mX[311UL] * t4657->mX.mX[311UL] * 0.0) * 0.001;
    out->mLOG.mX[2509UL] = t4657->mX.mX[1259UL];
    out->mLOG.mX[2510UL] = t4657->mX.mX[1259UL];
    out->mLOG.mX[2511UL] = t4657->mX.mX[304UL];
    out->mLOG.mX[2512UL] = BatteryPack_v2_ModuleAssembly3_Module17_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[2513UL] = t4657->mX.mX[304UL];
    out->mLOG.mX[2514UL] = t4657->mX.mX[304UL];
    out->mLOG.mX[2515UL] = t4657->mX.mX[1260UL] * 1000.0;
    out->mLOG.mX[2516UL] = BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3;
    out->mLOG.mX[2517UL] = t4657->mX.mX[304UL];
    out->mLOG.mX[2518UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2519UL] = BatteryPack_v2_ModuleAssembly3_Module17_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[2520UL] = BatteryPack_v2_ModuleAssembly3_Module17_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[2521UL] = t3839;
    out->mLOG.mX[2522UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2523UL] = t3839;
    out->mLOG.mX[2524UL] = zc_int414;
    out->mLOG.mX[2525UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[2526UL] = zc_int414;
    out->mLOG.mX[2527UL] = t4657->mX.mX[304UL];
    out->mLOG.mX[2528UL] = BatteryPack_v2_ModuleAssembly3_Module17_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[2529UL] = t4657->mX.mX[304UL];
    out->mLOG.mX[2530UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2531UL] = t3839;
    out->mLOG.mX[2532UL] = t4657->mX.mX[306UL];
    out->mLOG.mX[2533UL] = zc_int414;
    out->mLOG.mX[2534UL] = 0.0;
    out->mLOG.mX[2535UL] = t4657->mX.mX[1259UL];
    out->mLOG.mX[2536UL] = t4657->mX.mX[1259UL];
    out->mLOG.mX[2537UL] = t4657->mX.mX[304UL];
    out->mLOG.mX[2538UL] = BatteryPack_v2_ModuleAssembly3_Module14_Cell_1_electricalModel3;
    out->mLOG.mX[2539UL] = zc_int414 - t3839;
    out->mLOG.mX[2540UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2541UL] = t4657->mX.mX[312UL];
    out->mLOG.mX[2542UL] = t4657->mX.mX[312UL];
    out->mLOG.mX[2543UL] = t4657->mX.mX[312UL];
    out->mLOG.mX[2544UL] = t4657->mX.mX[312UL];
    out->mLOG.mX[2545UL] = t4657->mX.mX[313UL] * 0.00027777777777777778;
    out->mLOG.mX[2546UL] = t4657->mX.mX[312UL];
    out->mLOG.mX[2547UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2548UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[2549UL] = t4657->mX.mX[314UL];
    out->mLOG.mX[2550UL] = t4657->mX.mX[314UL];
    out->mLOG.mX[2551UL] = t4657->mX.mX[1263UL];
    out->mLOG.mX[2552UL] = t3839;
    for (t2499 = 315UL; t2499 - 315UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 2238UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[2558UL] = t4657->mX.mX[1262UL];
    out->mLOG.mX[2559UL] = t4657->mX.mX[1264UL] * 1000.0;
    out->mLOG.mX[2560UL] = t4657->mX.mX[1263UL];
    out->mLOG.mX[2561UL] = t3489;
    out->mLOG.mX[2562UL] = t4657->mX.mX[1261UL];
    out->mLOG.mX[2563UL] = t4657->mX.mX[313UL];
    out->mLOG.mX[2564UL] = t4657->mX.mX[312UL];
    out->mLOG.mX[2565UL] = t4657->mX.mX[314UL];
    out->mLOG.mX[2566UL] = t4657->mX.mX[1261UL];
    out->mLOG.mX[2567UL] = t4657->mX.mX[1262UL];
    out->mLOG.mX[2568UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2569UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[2570UL] = t4657->mX.mX[314UL];
    out->mLOG.mX[2571UL] = t3508;
    out->mLOG.mX[2572UL] = t3839;
    out->mLOG.mX[2573UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly3_Module18_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly3_Module18_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[315UL] * t4657->mX.mX[315UL] * 0.0 + t4657->mX.mX[316UL] * t4657->mX.mX[316UL] * 0.0) + t4657->mX.mX[317UL] * t4657->mX.mX[317UL] * 0.0) + t4657->mX.mX[318UL] * t4657->mX.mX[318UL] * 0.0) + t4657->mX.mX[319UL] * t4657->mX.mX[319UL] * 0.0) * 0.001;
    out->mLOG.mX[2574UL] = t4657->mX.mX[1263UL];
    out->mLOG.mX[2575UL] = t4657->mX.mX[1263UL];
    out->mLOG.mX[2576UL] = t4657->mX.mX[312UL];
    out->mLOG.mX[2577UL] = BatteryPack_v2_ModuleAssembly3_Module18_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[2578UL] = t4657->mX.mX[312UL];
    out->mLOG.mX[2579UL] = t4657->mX.mX[312UL];
    out->mLOG.mX[2580UL] = t4657->mX.mX[1264UL] * 1000.0;
    out->mLOG.mX[2581UL] = t3489;
    out->mLOG.mX[2582UL] = t4657->mX.mX[312UL];
    out->mLOG.mX[2583UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2584UL] = BatteryPack_v2_ModuleAssembly3_Module18_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[2585UL] = BatteryPack_v2_ModuleAssembly3_Module18_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[2586UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[2587UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2588UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[2589UL] = t3839;
    out->mLOG.mX[2590UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[2591UL] = t3839;
    out->mLOG.mX[2592UL] = t4657->mX.mX[312UL];
    out->mLOG.mX[2593UL] = BatteryPack_v2_ModuleAssembly3_Module18_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[2594UL] = t4657->mX.mX[312UL];
    out->mLOG.mX[2595UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2596UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[2597UL] = t4657->mX.mX[314UL];
    out->mLOG.mX[2598UL] = t3839;
    out->mLOG.mX[2599UL] = 0.0;
    out->mLOG.mX[2600UL] = t4657->mX.mX[1263UL];
    out->mLOG.mX[2601UL] = t4657->mX.mX[1263UL];
    out->mLOG.mX[2602UL] = t4657->mX.mX[312UL];
    out->mLOG.mX[2603UL] = t3489;
    out->mLOG.mX[2604UL] = t3839 - BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[2605UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2606UL] = t4657->mX.mX[320UL];
    out->mLOG.mX[2607UL] = t4657->mX.mX[320UL];
    out->mLOG.mX[2608UL] = t4657->mX.mX[320UL];
    out->mLOG.mX[2609UL] = t4657->mX.mX[320UL];
    out->mLOG.mX[2610UL] = t4657->mX.mX[321UL] * 0.00027777777777777778;
    out->mLOG.mX[2611UL] = t4657->mX.mX[320UL];
    out->mLOG.mX[2612UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2613UL] = t3834;
    out->mLOG.mX[2614UL] = t4657->mX.mX[322UL];
    out->mLOG.mX[2615UL] = t4657->mX.mX[322UL];
    out->mLOG.mX[2616UL] = t4657->mX.mX[1267UL];
    out->mLOG.mX[2617UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    for (t2499 = 323UL; t2499 - 323UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 2295UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[2623UL] = t4657->mX.mX[1266UL];
    out->mLOG.mX[2624UL] = t4657->mX.mX[1268UL] * 1000.0;
    out->mLOG.mX[2625UL] = t4657->mX.mX[1267UL];
    out->mLOG.mX[2626UL] = BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[2627UL] = t4657->mX.mX[1265UL];
    out->mLOG.mX[2628UL] = t4657->mX.mX[321UL];
    out->mLOG.mX[2629UL] = t4657->mX.mX[320UL];
    out->mLOG.mX[2630UL] = t4657->mX.mX[322UL];
    out->mLOG.mX[2631UL] = t4657->mX.mX[1265UL];
    out->mLOG.mX[2632UL] = t4657->mX.mX[1266UL];
    out->mLOG.mX[2633UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2634UL] = t3834;
    out->mLOG.mX[2635UL] = t4657->mX.mX[322UL];
    out->mLOG.mX[2636UL] = t3513;
    out->mLOG.mX[2637UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[2638UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3517 > 8.200000000000002E-8 ? t3517 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[323UL] * t4657->mX.mX[323UL] * 0.0 + t4657->mX.mX[324UL] * t4657->mX.mX[324UL] * 0.0) + t4657->mX.mX[325UL] * t4657->mX.mX[325UL] * 0.0) + t4657->mX.mX[326UL] * t4657->mX.mX[326UL] * 0.0) + t4657->mX.mX[327UL] * t4657->mX.mX[327UL] * 0.0) * 0.001;
    out->mLOG.mX[2639UL] = t4657->mX.mX[1267UL];
    out->mLOG.mX[2640UL] = t4657->mX.mX[1267UL];
    out->mLOG.mX[2641UL] = t4657->mX.mX[320UL];
    out->mLOG.mX[2642UL] = t3515 * 1000.0;
    out->mLOG.mX[2643UL] = t4657->mX.mX[320UL];
    out->mLOG.mX[2644UL] = t4657->mX.mX[320UL];
    out->mLOG.mX[2645UL] = t4657->mX.mX[1268UL] * 1000.0;
    out->mLOG.mX[2646UL] = BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[2647UL] = t4657->mX.mX[320UL];
    out->mLOG.mX[2648UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2649UL] = BatteryPack_v2_ModuleAssembly3_Module19_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[2650UL] = BatteryPack_v2_ModuleAssembly3_Module19_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[2651UL] = t3834;
    out->mLOG.mX[2652UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2653UL] = t3834;
    out->mLOG.mX[2654UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[2655UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[2656UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[2657UL] = t4657->mX.mX[320UL];
    out->mLOG.mX[2658UL] = t3515 * -1000.0;
    out->mLOG.mX[2659UL] = t4657->mX.mX[320UL];
    out->mLOG.mX[2660UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2661UL] = t3834;
    out->mLOG.mX[2662UL] = t4657->mX.mX[322UL];
    out->mLOG.mX[2663UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[2664UL] = 0.0;
    out->mLOG.mX[2665UL] = t4657->mX.mX[1267UL];
    out->mLOG.mX[2666UL] = t4657->mX.mX[1267UL];
    out->mLOG.mX[2667UL] = t4657->mX.mX[320UL];
    out->mLOG.mX[2668UL] = BatteryPack_v2_ModuleAssembly3_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[2669UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel3 - t3834;
    out->mLOG.mX[2670UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2671UL] = t4657->mX.mX[328UL];
    out->mLOG.mX[2672UL] = t4657->mX.mX[328UL];
    out->mLOG.mX[2673UL] = t4657->mX.mX[328UL];
    out->mLOG.mX[2674UL] = t4657->mX.mX[328UL];
    out->mLOG.mX[2675UL] = t4657->mX.mX[329UL] * 0.00027777777777777778;
    out->mLOG.mX[2676UL] = t4657->mX.mX[328UL];
    out->mLOG.mX[2677UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2678UL] = zc_int410;
    out->mLOG.mX[2679UL] = t4657->mX.mX[330UL];
    out->mLOG.mX[2680UL] = t4657->mX.mX[330UL];
    out->mLOG.mX[2681UL] = t4657->mX.mX[1271UL];
    out->mLOG.mX[2682UL] = t3834;
    for (t2499 = 331UL; t2499 - 331UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 2352UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[2688UL] = t4657->mX.mX[1270UL];
    out->mLOG.mX[2689UL] = t4657->mX.mX[1272UL] * 1000.0;
    out->mLOG.mX[2690UL] = t4657->mX.mX[1271UL];
    out->mLOG.mX[2691UL] = zc_int120;
    out->mLOG.mX[2692UL] = t4657->mX.mX[1269UL];
    out->mLOG.mX[2693UL] = t4657->mX.mX[329UL];
    out->mLOG.mX[2694UL] = t4657->mX.mX[328UL];
    out->mLOG.mX[2695UL] = t4657->mX.mX[330UL];
    out->mLOG.mX[2696UL] = t4657->mX.mX[1269UL];
    out->mLOG.mX[2697UL] = t4657->mX.mX[1270UL];
    out->mLOG.mX[2698UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2699UL] = zc_int410;
    out->mLOG.mX[2700UL] = t4657->mX.mX[330UL];
    out->mLOG.mX[2701UL] = t3518;
    out->mLOG.mX[2702UL] = t3834;
    out->mLOG.mX[2703UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3522 > 8.200000000000002E-8 ? t3522 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[331UL] * t4657->mX.mX[331UL] * 0.0 + t4657->mX.mX[332UL] * t4657->mX.mX[332UL] * 0.0) + t4657->mX.mX[333UL] * t4657->mX.mX[333UL] * 0.0) + t4657->mX.mX[334UL] * t4657->mX.mX[334UL] * 0.0) + t4657->mX.mX[335UL] * t4657->mX.mX[335UL] * 0.0) * 0.001;
    out->mLOG.mX[2704UL] = t4657->mX.mX[1271UL];
    out->mLOG.mX[2705UL] = t4657->mX.mX[1271UL];
    out->mLOG.mX[2706UL] = t4657->mX.mX[328UL];
    out->mLOG.mX[2707UL] = BatteryPack_v2_ModuleAssembly3_Module20_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[2708UL] = t4657->mX.mX[328UL];
    out->mLOG.mX[2709UL] = t4657->mX.mX[328UL];
    out->mLOG.mX[2710UL] = t4657->mX.mX[1272UL] * 1000.0;
    out->mLOG.mX[2711UL] = zc_int120;
    out->mLOG.mX[2712UL] = t4657->mX.mX[328UL];
    out->mLOG.mX[2713UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2714UL] = BatteryPack_v2_ModuleAssembly3_Module20_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[2715UL] = BatteryPack_v2_ModuleAssembly3_Module20_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[2716UL] = zc_int410;
    out->mLOG.mX[2717UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2718UL] = zc_int410;
    out->mLOG.mX[2719UL] = t3834;
    out->mLOG.mX[2720UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[2721UL] = t3834;
    out->mLOG.mX[2722UL] = t4657->mX.mX[328UL];
    out->mLOG.mX[2723UL] = BatteryPack_v2_ModuleAssembly3_Module20_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[2724UL] = t4657->mX.mX[328UL];
    out->mLOG.mX[2725UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2726UL] = zc_int410;
    out->mLOG.mX[2727UL] = t4657->mX.mX[330UL];
    out->mLOG.mX[2728UL] = t3834;
    out->mLOG.mX[2729UL] = 0.0;
    out->mLOG.mX[2730UL] = t4657->mX.mX[1271UL];
    out->mLOG.mX[2731UL] = t4657->mX.mX[1271UL];
    out->mLOG.mX[2732UL] = t4657->mX.mX[328UL];
    out->mLOG.mX[2733UL] = zc_int120;
    out->mLOG.mX[2734UL] = t3834 - zc_int410;
    out->mLOG.mX[2735UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2736UL] = t4657->mX.mX[336UL];
    out->mLOG.mX[2737UL] = t4657->mX.mX[336UL];
    out->mLOG.mX[2738UL] = t4657->mX.mX[336UL];
    out->mLOG.mX[2739UL] = t4657->mX.mX[336UL];
    out->mLOG.mX[2740UL] = t4657->mX.mX[337UL] * 0.00027777777777777778;
    out->mLOG.mX[2741UL] = t4657->mX.mX[336UL];
    out->mLOG.mX[2742UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2743UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    out->mLOG.mX[2744UL] = t4657->mX.mX[338UL];
    out->mLOG.mX[2745UL] = t4657->mX.mX[338UL];
    out->mLOG.mX[2746UL] = t4657->mX.mX[1275UL];
    out->mLOG.mX[2747UL] = zc_int410;
    for (t2499 = 339UL; t2499 - 339UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 2409UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[2753UL] = t4657->mX.mX[1274UL];
    out->mLOG.mX[2754UL] = t4657->mX.mX[1276UL] * 1000.0;
    out->mLOG.mX[2755UL] = t4657->mX.mX[1275UL];
    out->mLOG.mX[2756UL] = zc_int121;
    out->mLOG.mX[2757UL] = t4657->mX.mX[1273UL];
    out->mLOG.mX[2758UL] = t4657->mX.mX[337UL];
    out->mLOG.mX[2759UL] = t4657->mX.mX[336UL];
    out->mLOG.mX[2760UL] = t4657->mX.mX[338UL];
    out->mLOG.mX[2761UL] = t4657->mX.mX[1273UL];
    out->mLOG.mX[2762UL] = t4657->mX.mX[1274UL];
    out->mLOG.mX[2763UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2764UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    out->mLOG.mX[2765UL] = t4657->mX.mX[338UL];
    out->mLOG.mX[2766UL] = t3523;
    out->mLOG.mX[2767UL] = zc_int410;
    out->mLOG.mX[2768UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3527 > 8.200000000000002E-8 ? t3527 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[339UL] * t4657->mX.mX[339UL] * 0.0 + t4657->mX.mX[340UL] * t4657->mX.mX[340UL] * 0.0) + t4657->mX.mX[341UL] * t4657->mX.mX[341UL] * 0.0) + t4657->mX.mX[342UL] * t4657->mX.mX[342UL] * 0.0) + t4657->mX.mX[343UL] * t4657->mX.mX[343UL] * 0.0) * 0.001;
    out->mLOG.mX[2769UL] = t4657->mX.mX[1275UL];
    out->mLOG.mX[2770UL] = t4657->mX.mX[1275UL];
    out->mLOG.mX[2771UL] = t4657->mX.mX[336UL];
    out->mLOG.mX[2772UL] = BatteryPack_v2_ModuleAssembly3_Module21_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[2773UL] = t4657->mX.mX[336UL];
    out->mLOG.mX[2774UL] = t4657->mX.mX[336UL];
    out->mLOG.mX[2775UL] = t4657->mX.mX[1276UL] * 1000.0;
    out->mLOG.mX[2776UL] = zc_int121;
    out->mLOG.mX[2777UL] = t4657->mX.mX[336UL];
    out->mLOG.mX[2778UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2779UL] = BatteryPack_v2_ModuleAssembly3_Module21_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[2780UL] = BatteryPack_v2_ModuleAssembly3_Module21_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[2781UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    out->mLOG.mX[2782UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2783UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    out->mLOG.mX[2784UL] = zc_int410;
    out->mLOG.mX[2785UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[2786UL] = zc_int410;
    out->mLOG.mX[2787UL] = t4657->mX.mX[336UL];
    out->mLOG.mX[2788UL] = BatteryPack_v2_ModuleAssembly3_Module21_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[2789UL] = t4657->mX.mX[336UL];
    out->mLOG.mX[2790UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2791UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    out->mLOG.mX[2792UL] = t4657->mX.mX[338UL];
    out->mLOG.mX[2793UL] = zc_int410;
    out->mLOG.mX[2794UL] = 0.0;
    out->mLOG.mX[2795UL] = t4657->mX.mX[1275UL];
    out->mLOG.mX[2796UL] = t4657->mX.mX[1275UL];
    out->mLOG.mX[2797UL] = t4657->mX.mX[336UL];
    out->mLOG.mX[2798UL] = zc_int121;
    out->mLOG.mX[2799UL] = zc_int410 - BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    out->mLOG.mX[2800UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2801UL] = t4657->mX.mX[344UL];
    out->mLOG.mX[2802UL] = t4657->mX.mX[344UL];
    out->mLOG.mX[2803UL] = t4657->mX.mX[344UL];
    out->mLOG.mX[2804UL] = t4657->mX.mX[344UL];
    out->mLOG.mX[2805UL] = t4657->mX.mX[345UL] * 0.00027777777777777778;
    out->mLOG.mX[2806UL] = t4657->mX.mX[344UL];
    out->mLOG.mX[2807UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2808UL] = t3829;
    out->mLOG.mX[2809UL] = t4657->mX.mX[346UL];
    out->mLOG.mX[2810UL] = t4657->mX.mX[346UL];
    out->mLOG.mX[2811UL] = t4657->mX.mX[1279UL];
    out->mLOG.mX[2812UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    for (t2499 = 347UL; t2499 - 347UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 2466UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[2818UL] = t4657->mX.mX[1278UL];
    out->mLOG.mX[2819UL] = t4657->mX.mX[1280UL] * 1000.0;
    out->mLOG.mX[2820UL] = t4657->mX.mX[1279UL];
    out->mLOG.mX[2821UL] = t3499;
    out->mLOG.mX[2822UL] = t4657->mX.mX[1277UL];
    out->mLOG.mX[2823UL] = t4657->mX.mX[345UL];
    out->mLOG.mX[2824UL] = t4657->mX.mX[344UL];
    out->mLOG.mX[2825UL] = t4657->mX.mX[346UL];
    out->mLOG.mX[2826UL] = t4657->mX.mX[1277UL];
    out->mLOG.mX[2827UL] = t4657->mX.mX[1278UL];
    out->mLOG.mX[2828UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2829UL] = t3829;
    out->mLOG.mX[2830UL] = t4657->mX.mX[346UL];
    out->mLOG.mX[2831UL] = t3528;
    out->mLOG.mX[2832UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    out->mLOG.mX[2833UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3532 > 8.200000000000002E-8 ? t3532 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[347UL] * t4657->mX.mX[347UL] * 0.0 + t4657->mX.mX[348UL] * t4657->mX.mX[348UL] * 0.0) + t4657->mX.mX[349UL] * t4657->mX.mX[349UL] * 0.0) + t4657->mX.mX[350UL] * t4657->mX.mX[350UL] * 0.0) + t4657->mX.mX[351UL] * t4657->mX.mX[351UL] * 0.0) * 0.001;
    out->mLOG.mX[2834UL] = t4657->mX.mX[1279UL];
    out->mLOG.mX[2835UL] = t4657->mX.mX[1279UL];
    out->mLOG.mX[2836UL] = t4657->mX.mX[344UL];
    out->mLOG.mX[2837UL] = BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[2838UL] = t4657->mX.mX[344UL];
    out->mLOG.mX[2839UL] = t4657->mX.mX[344UL];
    out->mLOG.mX[2840UL] = t4657->mX.mX[1280UL] * 1000.0;
    out->mLOG.mX[2841UL] = t3499;
    out->mLOG.mX[2842UL] = t4657->mX.mX[344UL];
    out->mLOG.mX[2843UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2844UL] = BatteryPack_v2_ModuleAssembly3_Module22_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[2845UL] = BatteryPack_v2_ModuleAssembly3_Module22_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[2846UL] = t3829;
    out->mLOG.mX[2847UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2848UL] = t3829;
    out->mLOG.mX[2849UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    out->mLOG.mX[2850UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[2851UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    out->mLOG.mX[2852UL] = t4657->mX.mX[344UL];
    out->mLOG.mX[2853UL] = BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[2854UL] = t4657->mX.mX[344UL];
    out->mLOG.mX[2855UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2856UL] = t3829;
    out->mLOG.mX[2857UL] = t4657->mX.mX[346UL];
    out->mLOG.mX[2858UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3;
    out->mLOG.mX[2859UL] = 0.0;
    out->mLOG.mX[2860UL] = t4657->mX.mX[1279UL];
    out->mLOG.mX[2861UL] = t4657->mX.mX[1279UL];
    out->mLOG.mX[2862UL] = t4657->mX.mX[344UL];
    out->mLOG.mX[2863UL] = t3499;
    out->mLOG.mX[2864UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel3 - t3829;
    out->mLOG.mX[2865UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2866UL] = t4657->mX.mX[352UL];
    out->mLOG.mX[2867UL] = t4657->mX.mX[352UL];
    out->mLOG.mX[2868UL] = t4657->mX.mX[352UL];
    out->mLOG.mX[2869UL] = t4657->mX.mX[352UL];
    out->mLOG.mX[2870UL] = t4657->mX.mX[353UL] * 0.00027777777777777778;
    out->mLOG.mX[2871UL] = t4657->mX.mX[352UL];
    out->mLOG.mX[2872UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2873UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mLOG.mX[2874UL] = t4657->mX.mX[354UL];
    out->mLOG.mX[2875UL] = t4657->mX.mX[354UL];
    out->mLOG.mX[2876UL] = t4657->mX.mX[1283UL];
    out->mLOG.mX[2877UL] = t3829;
    for (t2499 = 355UL; t2499 - 355UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 2523UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[2883UL] = t4657->mX.mX[1282UL];
    out->mLOG.mX[2884UL] = t4657->mX.mX[1284UL] * 1000.0;
    out->mLOG.mX[2885UL] = t4657->mX.mX[1283UL];
    out->mLOG.mX[2886UL] = intrm_sf_mf_5;
    out->mLOG.mX[2887UL] = t4657->mX.mX[1281UL];
    out->mLOG.mX[2888UL] = t4657->mX.mX[353UL];
    out->mLOG.mX[2889UL] = t4657->mX.mX[352UL];
    out->mLOG.mX[2890UL] = t4657->mX.mX[354UL];
    out->mLOG.mX[2891UL] = t4657->mX.mX[1281UL];
    out->mLOG.mX[2892UL] = t4657->mX.mX[1282UL];
    out->mLOG.mX[2893UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2894UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mLOG.mX[2895UL] = t4657->mX.mX[354UL];
    out->mLOG.mX[2896UL] = t3533;
    out->mLOG.mX[2897UL] = t3829;
    out->mLOG.mX[2898UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly3_Module23_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly3_Module23_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[355UL] * t4657->mX.mX[355UL] * 0.0 + t4657->mX.mX[356UL] * t4657->mX.mX[356UL] * 0.0) + t4657->mX.mX[357UL] * t4657->mX.mX[357UL] * 0.0) + t4657->mX.mX[358UL] * t4657->mX.mX[358UL] * 0.0) + t4657->mX.mX[359UL] * t4657->mX.mX[359UL] * 0.0) * 0.001;
    out->mLOG.mX[2899UL] = t4657->mX.mX[1283UL];
    out->mLOG.mX[2900UL] = t4657->mX.mX[1283UL];
    out->mLOG.mX[2901UL] = t4657->mX.mX[352UL];
    out->mLOG.mX[2902UL] = BatteryPack_v2_ModuleAssembly3_Module23_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[2903UL] = t4657->mX.mX[352UL];
    out->mLOG.mX[2904UL] = t4657->mX.mX[352UL];
    out->mLOG.mX[2905UL] = t4657->mX.mX[1284UL] * 1000.0;
    out->mLOG.mX[2906UL] = intrm_sf_mf_5;
    out->mLOG.mX[2907UL] = t4657->mX.mX[352UL];
    out->mLOG.mX[2908UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2909UL] = BatteryPack_v2_ModuleAssembly3_Module23_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[2910UL] = BatteryPack_v2_ModuleAssembly3_Module23_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[2911UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mLOG.mX[2912UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2913UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mLOG.mX[2914UL] = t3829;
    out->mLOG.mX[2915UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[2916UL] = t3829;
    out->mLOG.mX[2917UL] = t4657->mX.mX[352UL];
    out->mLOG.mX[2918UL] = BatteryPack_v2_ModuleAssembly3_Module23_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[2919UL] = t4657->mX.mX[352UL];
    out->mLOG.mX[2920UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2921UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mLOG.mX[2922UL] = t4657->mX.mX[354UL];
    out->mLOG.mX[2923UL] = t3829;
    out->mLOG.mX[2924UL] = 0.0;
    out->mLOG.mX[2925UL] = t4657->mX.mX[1283UL];
    out->mLOG.mX[2926UL] = t4657->mX.mX[1283UL];
    out->mLOG.mX[2927UL] = t4657->mX.mX[352UL];
    out->mLOG.mX[2928UL] = intrm_sf_mf_5;
    out->mLOG.mX[2929UL] = t3829 - BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mLOG.mX[2930UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2931UL] = t4657->mX.mX[360UL];
    out->mLOG.mX[2932UL] = t4657->mX.mX[360UL];
    out->mLOG.mX[2933UL] = t4657->mX.mX[360UL];
    out->mLOG.mX[2934UL] = t4657->mX.mX[360UL];
    out->mLOG.mX[2935UL] = t4657->mX.mX[361UL] * 0.00027777777777777778;
    out->mLOG.mX[2936UL] = t4657->mX.mX[360UL];
    out->mLOG.mX[2937UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2938UL] = t3429;
    out->mLOG.mX[2939UL] = t4657->mX.mX[362UL];
    out->mLOG.mX[2940UL] = t4657->mX.mX[362UL];
    out->mLOG.mX[2941UL] = t4657->mX.mX[1287UL];
    out->mLOG.mX[2942UL] = zc_int64;
    for (t2499 = 363UL; t2499 - 363UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 2580UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[2948UL] = t4657->mX.mX[1286UL];
    out->mLOG.mX[2949UL] = t4657->mX.mX[1288UL] * 1000.0;
    out->mLOG.mX[2950UL] = t4657->mX.mX[1287UL];
    out->mLOG.mX[2951UL] = zc_int63;
    out->mLOG.mX[2952UL] = t4657->mX.mX[1285UL];
    out->mLOG.mX[2953UL] = t4657->mX.mX[361UL];
    out->mLOG.mX[2954UL] = t4657->mX.mX[360UL];
    out->mLOG.mX[2955UL] = t4657->mX.mX[362UL];
    out->mLOG.mX[2956UL] = t4657->mX.mX[1285UL];
    out->mLOG.mX[2957UL] = t4657->mX.mX[1286UL];
    out->mLOG.mX[2958UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2959UL] = t3429;
    out->mLOG.mX[2960UL] = t4657->mX.mX[362UL];
    out->mLOG.mX[2961UL] = BatteryPack_v2_ModuleAssembly3_Module_1_1_Cell_1_electricalMod0;
    out->mLOG.mX[2962UL] = zc_int64;
    out->mLOG.mX[2963UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3542 > 8.200000000000002E-8 ? t3542 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[363UL] * t4657->mX.mX[363UL] * 0.0 + t4657->mX.mX[364UL] * t4657->mX.mX[364UL] * 0.0) + t4657->mX.mX[365UL] * t4657->mX.mX[365UL] * 0.0) + t4657->mX.mX[366UL] * t4657->mX.mX[366UL] * 0.0) + t4657->mX.mX[367UL] * t4657->mX.mX[367UL] * 0.0) * 0.001;
    out->mLOG.mX[2964UL] = t4657->mX.mX[1287UL];
    out->mLOG.mX[2965UL] = t4657->mX.mX[1287UL];
    out->mLOG.mX[2966UL] = t4657->mX.mX[360UL];
    out->mLOG.mX[2967UL] = t3540 * 1000.0;
    out->mLOG.mX[2968UL] = t4657->mX.mX[360UL];
    out->mLOG.mX[2969UL] = t4657->mX.mX[360UL];
    out->mLOG.mX[2970UL] = t4657->mX.mX[1288UL] * 1000.0;
    out->mLOG.mX[2971UL] = zc_int63;
    out->mLOG.mX[2972UL] = t4657->mX.mX[360UL];
    out->mLOG.mX[2973UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2974UL] = BatteryPack_v2_ModuleAssembly3_Module_1_1_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[2975UL] = BatteryPack_v2_ModuleAssembly3_Module_1_1_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[2976UL] = t3429;
    out->mLOG.mX[2977UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2978UL] = t3429;
    out->mLOG.mX[2979UL] = zc_int64;
    out->mLOG.mX[2980UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[2981UL] = zc_int64;
    out->mLOG.mX[2982UL] = t4657->mX.mX[360UL];
    out->mLOG.mX[2983UL] = t3540 * -1000.0;
    out->mLOG.mX[2984UL] = t4657->mX.mX[360UL];
    out->mLOG.mX[2985UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[2986UL] = t3429;
    out->mLOG.mX[2987UL] = t4657->mX.mX[362UL];
    out->mLOG.mX[2988UL] = zc_int64;
    out->mLOG.mX[2989UL] = 0.0;
    out->mLOG.mX[2990UL] = t4657->mX.mX[1287UL];
    out->mLOG.mX[2991UL] = t4657->mX.mX[1287UL];
    out->mLOG.mX[2992UL] = t4657->mX.mX[360UL];
    out->mLOG.mX[2993UL] = zc_int63;
    out->mLOG.mX[2994UL] = zc_int64 - t3429;
    out->mLOG.mX[2995UL] = zc_int64;
    out->mLOG.mX[2996UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mLOG.mX[2997UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2998UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[2999UL] = t4657->mX.mX[368UL];
    out->mLOG.mX[3000UL] = t4657->mX.mX[368UL];
    out->mLOG.mX[3001UL] = t4657->mX.mX[368UL];
    out->mLOG.mX[3002UL] = t4657->mX.mX[368UL];
    out->mLOG.mX[3003UL] = t4657->mX.mX[369UL] * 0.00027777777777777778;
    out->mLOG.mX[3004UL] = t4657->mX.mX[368UL];
    out->mLOG.mX[3005UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3006UL] = zc_int405;
    out->mLOG.mX[3007UL] = t4657->mX.mX[370UL];
    out->mLOG.mX[3008UL] = t4657->mX.mX[370UL];
    out->mLOG.mX[3009UL] = t4657->mX.mX[1291UL];
    out->mLOG.mX[3010UL] = intrm_sf_mf_102;
    for (t2499 = 371UL; t2499 - 371UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 2640UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[3016UL] = t4657->mX.mX[1290UL];
    out->mLOG.mX[3017UL] = t4657->mX.mX[1292UL] * 1000.0;
    out->mLOG.mX[3018UL] = t4657->mX.mX[1291UL];
    out->mLOG.mX[3019UL] = zc_int133;
    out->mLOG.mX[3020UL] = t4657->mX.mX[1289UL];
    out->mLOG.mX[3021UL] = t4657->mX.mX[369UL];
    out->mLOG.mX[3022UL] = t4657->mX.mX[368UL];
    out->mLOG.mX[3023UL] = t4657->mX.mX[370UL];
    out->mLOG.mX[3024UL] = t4657->mX.mX[1289UL];
    out->mLOG.mX[3025UL] = t4657->mX.mX[1290UL];
    out->mLOG.mX[3026UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3027UL] = zc_int405;
    out->mLOG.mX[3028UL] = t4657->mX.mX[370UL];
    out->mLOG.mX[3029UL] = BatteryPack_v2_ModuleAssembly4_Module02_Cell_1_electricalModel0;
    out->mLOG.mX[3030UL] = intrm_sf_mf_102;
    out->mLOG.mX[3031UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3547 > 8.200000000000002E-8 ? t3547 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[371UL] * t4657->mX.mX[371UL] * 0.0 + t4657->mX.mX[372UL] * t4657->mX.mX[372UL] * 0.0) + t4657->mX.mX[373UL] * t4657->mX.mX[373UL] * 0.0) + t4657->mX.mX[374UL] * t4657->mX.mX[374UL] * 0.0) + t4657->mX.mX[375UL] * t4657->mX.mX[375UL] * 0.0) * 0.001;
    out->mLOG.mX[3032UL] = t4657->mX.mX[1291UL];
    out->mLOG.mX[3033UL] = t4657->mX.mX[1291UL];
    out->mLOG.mX[3034UL] = t4657->mX.mX[368UL];
    out->mLOG.mX[3035UL] = BatteryPack_v2_ModuleAssembly4_Module02_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[3036UL] = t4657->mX.mX[368UL];
    out->mLOG.mX[3037UL] = t4657->mX.mX[368UL];
    out->mLOG.mX[3038UL] = t4657->mX.mX[1292UL] * 1000.0;
    out->mLOG.mX[3039UL] = zc_int133;
    out->mLOG.mX[3040UL] = t4657->mX.mX[368UL];
    out->mLOG.mX[3041UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3042UL] = BatteryPack_v2_ModuleAssembly4_Module02_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[3043UL] = BatteryPack_v2_ModuleAssembly4_Module02_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[3044UL] = zc_int405;
    out->mLOG.mX[3045UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3046UL] = zc_int405;
    out->mLOG.mX[3047UL] = intrm_sf_mf_102;
    out->mLOG.mX[3048UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[3049UL] = intrm_sf_mf_102;
    out->mLOG.mX[3050UL] = t4657->mX.mX[368UL];
    out->mLOG.mX[3051UL] = BatteryPack_v2_ModuleAssembly4_Module02_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[3052UL] = t4657->mX.mX[368UL];
    out->mLOG.mX[3053UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3054UL] = zc_int405;
    out->mLOG.mX[3055UL] = t4657->mX.mX[370UL];
    out->mLOG.mX[3056UL] = intrm_sf_mf_102;
    out->mLOG.mX[3057UL] = 0.0;
    out->mLOG.mX[3058UL] = t4657->mX.mX[1291UL];
    out->mLOG.mX[3059UL] = t4657->mX.mX[1291UL];
    out->mLOG.mX[3060UL] = t4657->mX.mX[368UL];
    out->mLOG.mX[3061UL] = zc_int133;
    out->mLOG.mX[3062UL] = intrm_sf_mf_102 - zc_int405;
    out->mLOG.mX[3063UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3064UL] = t4657->mX.mX[376UL];
    out->mLOG.mX[3065UL] = t4657->mX.mX[376UL];
    out->mLOG.mX[3066UL] = t4657->mX.mX[376UL];
    out->mLOG.mX[3067UL] = t4657->mX.mX[376UL];
    out->mLOG.mX[3068UL] = t4657->mX.mX[377UL] * 0.00027777777777777778;
    out->mLOG.mX[3069UL] = t4657->mX.mX[376UL];
    out->mLOG.mX[3070UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3071UL] = zc_int404;
    out->mLOG.mX[3072UL] = t4657->mX.mX[378UL];
    out->mLOG.mX[3073UL] = t4657->mX.mX[378UL];
    out->mLOG.mX[3074UL] = t4657->mX.mX[1295UL];
    out->mLOG.mX[3075UL] = zc_int405;
    for (t2499 = 379UL; t2499 - 379UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 2697UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[3081UL] = t4657->mX.mX[1294UL];
    out->mLOG.mX[3082UL] = t4657->mX.mX[1296UL] * 1000.0;
    out->mLOG.mX[3083UL] = t4657->mX.mX[1295UL];
    out->mLOG.mX[3084UL] = t3504;
    out->mLOG.mX[3085UL] = t4657->mX.mX[1293UL];
    out->mLOG.mX[3086UL] = t4657->mX.mX[377UL];
    out->mLOG.mX[3087UL] = t4657->mX.mX[376UL];
    out->mLOG.mX[3088UL] = t4657->mX.mX[378UL];
    out->mLOG.mX[3089UL] = t4657->mX.mX[1293UL];
    out->mLOG.mX[3090UL] = t4657->mX.mX[1294UL];
    out->mLOG.mX[3091UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3092UL] = zc_int404;
    out->mLOG.mX[3093UL] = t4657->mX.mX[378UL];
    out->mLOG.mX[3094UL] = t3548;
    out->mLOG.mX[3095UL] = zc_int405;
    out->mLOG.mX[3096UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly4_Module03_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly4_Module03_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[379UL] * t4657->mX.mX[379UL] * 0.0 + t4657->mX.mX[380UL] * t4657->mX.mX[380UL] * 0.0) + t4657->mX.mX[381UL] * t4657->mX.mX[381UL] * 0.0) + t4657->mX.mX[382UL] * t4657->mX.mX[382UL] * 0.0) + t4657->mX.mX[383UL] * t4657->mX.mX[383UL] * 0.0) * 0.001;
    out->mLOG.mX[3097UL] = t4657->mX.mX[1295UL];
    out->mLOG.mX[3098UL] = t4657->mX.mX[1295UL];
    out->mLOG.mX[3099UL] = t4657->mX.mX[376UL];
    out->mLOG.mX[3100UL] = t3550 * 1000.0;
    out->mLOG.mX[3101UL] = t4657->mX.mX[376UL];
    out->mLOG.mX[3102UL] = t4657->mX.mX[376UL];
    out->mLOG.mX[3103UL] = t4657->mX.mX[1296UL] * 1000.0;
    out->mLOG.mX[3104UL] = t3504;
    out->mLOG.mX[3105UL] = t4657->mX.mX[376UL];
    out->mLOG.mX[3106UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3107UL] = BatteryPack_v2_ModuleAssembly4_Module03_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[3108UL] = BatteryPack_v2_ModuleAssembly4_Module03_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[3109UL] = zc_int404;
    out->mLOG.mX[3110UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3111UL] = zc_int404;
    out->mLOG.mX[3112UL] = zc_int405;
    out->mLOG.mX[3113UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[3114UL] = zc_int405;
    out->mLOG.mX[3115UL] = t4657->mX.mX[376UL];
    out->mLOG.mX[3116UL] = t3550 * -1000.0;
    out->mLOG.mX[3117UL] = t4657->mX.mX[376UL];
    out->mLOG.mX[3118UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3119UL] = zc_int404;
    out->mLOG.mX[3120UL] = t4657->mX.mX[378UL];
    out->mLOG.mX[3121UL] = zc_int405;
    out->mLOG.mX[3122UL] = 0.0;
    out->mLOG.mX[3123UL] = t4657->mX.mX[1295UL];
    out->mLOG.mX[3124UL] = t4657->mX.mX[1295UL];
    out->mLOG.mX[3125UL] = t4657->mX.mX[376UL];
    out->mLOG.mX[3126UL] = t3504;
    out->mLOG.mX[3127UL] = zc_int405 - zc_int404;
    out->mLOG.mX[3128UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3129UL] = t4657->mX.mX[384UL];
    out->mLOG.mX[3130UL] = t4657->mX.mX[384UL];
    out->mLOG.mX[3131UL] = t4657->mX.mX[384UL];
    out->mLOG.mX[3132UL] = t4657->mX.mX[384UL];
    out->mLOG.mX[3133UL] = t4657->mX.mX[385UL] * 0.00027777777777777778;
    out->mLOG.mX[3134UL] = t4657->mX.mX[384UL];
    out->mLOG.mX[3135UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3136UL] = zc_int403;
    out->mLOG.mX[3137UL] = t4657->mX.mX[386UL];
    out->mLOG.mX[3138UL] = t4657->mX.mX[386UL];
    out->mLOG.mX[3139UL] = t4657->mX.mX[1299UL];
    out->mLOG.mX[3140UL] = zc_int404;
    for (t2499 = 387UL; t2499 - 387UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 2754UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[3146UL] = t4657->mX.mX[1298UL];
    out->mLOG.mX[3147UL] = t4657->mX.mX[1300UL] * 1000.0;
    out->mLOG.mX[3148UL] = t4657->mX.mX[1299UL];
    out->mLOG.mX[3149UL] = intrm_sf_mf_39;
    out->mLOG.mX[3150UL] = t4657->mX.mX[1297UL];
    out->mLOG.mX[3151UL] = t4657->mX.mX[385UL];
    out->mLOG.mX[3152UL] = t4657->mX.mX[384UL];
    out->mLOG.mX[3153UL] = t4657->mX.mX[386UL];
    out->mLOG.mX[3154UL] = t4657->mX.mX[1297UL];
    out->mLOG.mX[3155UL] = t4657->mX.mX[1298UL];
    out->mLOG.mX[3156UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3157UL] = zc_int403;
    out->mLOG.mX[3158UL] = t4657->mX.mX[386UL];
    out->mLOG.mX[3159UL] = BatteryPack_v2_ModuleAssembly4_Module04_Cell_1_electricalModel0;
    out->mLOG.mX[3160UL] = zc_int404;
    out->mLOG.mX[3161UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly4_Module04_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly4_Module04_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[387UL] * t4657->mX.mX[387UL] * 0.0 + t4657->mX.mX[388UL] * t4657->mX.mX[388UL] * 0.0) + t4657->mX.mX[389UL] * t4657->mX.mX[389UL] * 0.0) + t4657->mX.mX[390UL] * t4657->mX.mX[390UL] * 0.0) + t4657->mX.mX[391UL] * t4657->mX.mX[391UL] * 0.0) * 0.001;
    out->mLOG.mX[3162UL] = t4657->mX.mX[1299UL];
    out->mLOG.mX[3163UL] = t4657->mX.mX[1299UL];
    out->mLOG.mX[3164UL] = t4657->mX.mX[384UL];
    out->mLOG.mX[3165UL] = t3555 * 1000.0;
    out->mLOG.mX[3166UL] = t4657->mX.mX[384UL];
    out->mLOG.mX[3167UL] = t4657->mX.mX[384UL];
    out->mLOG.mX[3168UL] = t4657->mX.mX[1300UL] * 1000.0;
    out->mLOG.mX[3169UL] = intrm_sf_mf_39;
    out->mLOG.mX[3170UL] = t4657->mX.mX[384UL];
    out->mLOG.mX[3171UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3172UL] = BatteryPack_v2_ModuleAssembly4_Module04_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[3173UL] = BatteryPack_v2_ModuleAssembly4_Module04_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[3174UL] = zc_int403;
    out->mLOG.mX[3175UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3176UL] = zc_int403;
    out->mLOG.mX[3177UL] = zc_int404;
    out->mLOG.mX[3178UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[3179UL] = zc_int404;
    out->mLOG.mX[3180UL] = t4657->mX.mX[384UL];
    out->mLOG.mX[3181UL] = t3555 * -1000.0;
    out->mLOG.mX[3182UL] = t4657->mX.mX[384UL];
    out->mLOG.mX[3183UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3184UL] = zc_int403;
    out->mLOG.mX[3185UL] = t4657->mX.mX[386UL];
    out->mLOG.mX[3186UL] = zc_int404;
    out->mLOG.mX[3187UL] = 0.0;
    out->mLOG.mX[3188UL] = t4657->mX.mX[1299UL];
    out->mLOG.mX[3189UL] = t4657->mX.mX[1299UL];
    out->mLOG.mX[3190UL] = t4657->mX.mX[384UL];
    out->mLOG.mX[3191UL] = intrm_sf_mf_39;
    out->mLOG.mX[3192UL] = zc_int404 - zc_int403;
    out->mLOG.mX[3193UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3194UL] = t4657->mX.mX[392UL];
    out->mLOG.mX[3195UL] = t4657->mX.mX[392UL];
    out->mLOG.mX[3196UL] = t4657->mX.mX[392UL];
    out->mLOG.mX[3197UL] = t4657->mX.mX[392UL];
    out->mLOG.mX[3198UL] = t4657->mX.mX[393UL] * 0.00027777777777777778;
    out->mLOG.mX[3199UL] = t4657->mX.mX[392UL];
    out->mLOG.mX[3200UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3201UL] = intrm_sf_mf_100;
    out->mLOG.mX[3202UL] = t4657->mX.mX[394UL];
    out->mLOG.mX[3203UL] = t4657->mX.mX[394UL];
    out->mLOG.mX[3204UL] = t4657->mX.mX[1303UL];
    out->mLOG.mX[3205UL] = zc_int403;
    for (t2499 = 395UL; t2499 - 395UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 2811UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[3211UL] = t4657->mX.mX[1302UL];
    out->mLOG.mX[3212UL] = t4657->mX.mX[1304UL] * 1000.0;
    out->mLOG.mX[3213UL] = t4657->mX.mX[1303UL];
    out->mLOG.mX[3214UL] = zc_int146;
    out->mLOG.mX[3215UL] = t4657->mX.mX[1301UL];
    out->mLOG.mX[3216UL] = t4657->mX.mX[393UL];
    out->mLOG.mX[3217UL] = t4657->mX.mX[392UL];
    out->mLOG.mX[3218UL] = t4657->mX.mX[394UL];
    out->mLOG.mX[3219UL] = t4657->mX.mX[1301UL];
    out->mLOG.mX[3220UL] = t4657->mX.mX[1302UL];
    out->mLOG.mX[3221UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3222UL] = intrm_sf_mf_100;
    out->mLOG.mX[3223UL] = t4657->mX.mX[394UL];
    out->mLOG.mX[3224UL] = t3558;
    out->mLOG.mX[3225UL] = zc_int403;
    out->mLOG.mX[3226UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3562 > 8.200000000000002E-8 ? t3562 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[395UL] * t4657->mX.mX[395UL] * 0.0 + t4657->mX.mX[396UL] * t4657->mX.mX[396UL] * 0.0) + t4657->mX.mX[397UL] * t4657->mX.mX[397UL] * 0.0) + t4657->mX.mX[398UL] * t4657->mX.mX[398UL] * 0.0) + t4657->mX.mX[399UL] * t4657->mX.mX[399UL] * 0.0) * 0.001;
    out->mLOG.mX[3227UL] = t4657->mX.mX[1303UL];
    out->mLOG.mX[3228UL] = t4657->mX.mX[1303UL];
    out->mLOG.mX[3229UL] = t4657->mX.mX[392UL];
    out->mLOG.mX[3230UL] = t3560 * 1000.0;
    out->mLOG.mX[3231UL] = t4657->mX.mX[392UL];
    out->mLOG.mX[3232UL] = t4657->mX.mX[392UL];
    out->mLOG.mX[3233UL] = t4657->mX.mX[1304UL] * 1000.0;
    out->mLOG.mX[3234UL] = zc_int146;
    out->mLOG.mX[3235UL] = t4657->mX.mX[392UL];
    out->mLOG.mX[3236UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3237UL] = BatteryPack_v2_ModuleAssembly4_Module05_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[3238UL] = BatteryPack_v2_ModuleAssembly4_Module05_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[3239UL] = intrm_sf_mf_100;
    out->mLOG.mX[3240UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3241UL] = intrm_sf_mf_100;
    out->mLOG.mX[3242UL] = zc_int403;
    out->mLOG.mX[3243UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[3244UL] = zc_int403;
    out->mLOG.mX[3245UL] = t4657->mX.mX[392UL];
    out->mLOG.mX[3246UL] = t3560 * -1000.0;
    out->mLOG.mX[3247UL] = t4657->mX.mX[392UL];
    out->mLOG.mX[3248UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3249UL] = intrm_sf_mf_100;
    out->mLOG.mX[3250UL] = t4657->mX.mX[394UL];
    out->mLOG.mX[3251UL] = zc_int403;
    out->mLOG.mX[3252UL] = 0.0;
    out->mLOG.mX[3253UL] = t4657->mX.mX[1303UL];
    out->mLOG.mX[3254UL] = t4657->mX.mX[1303UL];
    out->mLOG.mX[3255UL] = t4657->mX.mX[392UL];
    out->mLOG.mX[3256UL] = zc_int146;
    out->mLOG.mX[3257UL] = zc_int403 - intrm_sf_mf_100;
    out->mLOG.mX[3258UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3259UL] = t4657->mX.mX[400UL];
    out->mLOG.mX[3260UL] = t4657->mX.mX[400UL];
    out->mLOG.mX[3261UL] = t4657->mX.mX[400UL];
    out->mLOG.mX[3262UL] = t4657->mX.mX[400UL];
    out->mLOG.mX[3263UL] = t4657->mX.mX[401UL] * 0.00027777777777777778;
    out->mLOG.mX[3264UL] = t4657->mX.mX[400UL];
    out->mLOG.mX[3265UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3266UL] = zc_int401;
    out->mLOG.mX[3267UL] = t4657->mX.mX[402UL];
    out->mLOG.mX[3268UL] = t4657->mX.mX[402UL];
    out->mLOG.mX[3269UL] = t4657->mX.mX[1307UL];
    out->mLOG.mX[3270UL] = intrm_sf_mf_100;
    for (t2499 = 403UL; t2499 - 403UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 2868UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[3276UL] = t4657->mX.mX[1306UL];
    out->mLOG.mX[3277UL] = t4657->mX.mX[1308UL] * 1000.0;
    out->mLOG.mX[3278UL] = t4657->mX.mX[1307UL];
    out->mLOG.mX[3279UL] = zc_int147;
    out->mLOG.mX[3280UL] = t4657->mX.mX[1305UL];
    out->mLOG.mX[3281UL] = t4657->mX.mX[401UL];
    out->mLOG.mX[3282UL] = t4657->mX.mX[400UL];
    out->mLOG.mX[3283UL] = t4657->mX.mX[402UL];
    out->mLOG.mX[3284UL] = t4657->mX.mX[1305UL];
    out->mLOG.mX[3285UL] = t4657->mX.mX[1306UL];
    out->mLOG.mX[3286UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3287UL] = zc_int401;
    out->mLOG.mX[3288UL] = t4657->mX.mX[402UL];
    out->mLOG.mX[3289UL] = t3563;
    out->mLOG.mX[3290UL] = intrm_sf_mf_100;
    out->mLOG.mX[3291UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3567 > 8.200000000000002E-8 ? t3567 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[403UL] * t4657->mX.mX[403UL] * 0.0 + t4657->mX.mX[404UL] * t4657->mX.mX[404UL] * 0.0) + t4657->mX.mX[405UL] * t4657->mX.mX[405UL] * 0.0) + t4657->mX.mX[406UL] * t4657->mX.mX[406UL] * 0.0) + t4657->mX.mX[407UL] * t4657->mX.mX[407UL] * 0.0) * 0.001;
    out->mLOG.mX[3292UL] = t4657->mX.mX[1307UL];
    out->mLOG.mX[3293UL] = t4657->mX.mX[1307UL];
    out->mLOG.mX[3294UL] = t4657->mX.mX[400UL];
    out->mLOG.mX[3295UL] = BatteryPack_v2_ModuleAssembly4_Module06_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[3296UL] = t4657->mX.mX[400UL];
    out->mLOG.mX[3297UL] = t4657->mX.mX[400UL];
    out->mLOG.mX[3298UL] = t4657->mX.mX[1308UL] * 1000.0;
    out->mLOG.mX[3299UL] = zc_int147;
    out->mLOG.mX[3300UL] = t4657->mX.mX[400UL];
    out->mLOG.mX[3301UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3302UL] = BatteryPack_v2_ModuleAssembly4_Module06_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[3303UL] = BatteryPack_v2_ModuleAssembly4_Module06_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[3304UL] = zc_int401;
    out->mLOG.mX[3305UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3306UL] = zc_int401;
    out->mLOG.mX[3307UL] = intrm_sf_mf_100;
    out->mLOG.mX[3308UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[3309UL] = intrm_sf_mf_100;
    out->mLOG.mX[3310UL] = t4657->mX.mX[400UL];
    out->mLOG.mX[3311UL] = BatteryPack_v2_ModuleAssembly4_Module06_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[3312UL] = t4657->mX.mX[400UL];
    out->mLOG.mX[3313UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3314UL] = zc_int401;
    out->mLOG.mX[3315UL] = t4657->mX.mX[402UL];
    out->mLOG.mX[3316UL] = intrm_sf_mf_100;
    out->mLOG.mX[3317UL] = 0.0;
    out->mLOG.mX[3318UL] = t4657->mX.mX[1307UL];
    out->mLOG.mX[3319UL] = t4657->mX.mX[1307UL];
    out->mLOG.mX[3320UL] = t4657->mX.mX[400UL];
    out->mLOG.mX[3321UL] = zc_int147;
    out->mLOG.mX[3322UL] = intrm_sf_mf_100 - zc_int401;
    out->mLOG.mX[3323UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3324UL] = t4657->mX.mX[408UL];
    out->mLOG.mX[3325UL] = t4657->mX.mX[408UL];
    out->mLOG.mX[3326UL] = t4657->mX.mX[408UL];
    out->mLOG.mX[3327UL] = t4657->mX.mX[408UL];
    out->mLOG.mX[3328UL] = t4657->mX.mX[409UL] * 0.00027777777777777778;
    out->mLOG.mX[3329UL] = t4657->mX.mX[408UL];
    out->mLOG.mX[3330UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3331UL] = intrm_sf_mf_14;
    out->mLOG.mX[3332UL] = t4657->mX.mX[410UL];
    out->mLOG.mX[3333UL] = t4657->mX.mX[410UL];
    out->mLOG.mX[3334UL] = t4657->mX.mX[1311UL];
    out->mLOG.mX[3335UL] = zc_int401;
    for (t2499 = 411UL; t2499 - 411UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 2925UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[3341UL] = t4657->mX.mX[1310UL];
    out->mLOG.mX[3342UL] = t4657->mX.mX[1312UL] * 1000.0;
    out->mLOG.mX[3343UL] = t4657->mX.mX[1311UL];
    out->mLOG.mX[3344UL] = BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3;
    out->mLOG.mX[3345UL] = t4657->mX.mX[1309UL];
    out->mLOG.mX[3346UL] = t4657->mX.mX[409UL];
    out->mLOG.mX[3347UL] = t4657->mX.mX[408UL];
    out->mLOG.mX[3348UL] = t4657->mX.mX[410UL];
    out->mLOG.mX[3349UL] = t4657->mX.mX[1309UL];
    out->mLOG.mX[3350UL] = t4657->mX.mX[1310UL];
    out->mLOG.mX[3351UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3352UL] = intrm_sf_mf_14;
    out->mLOG.mX[3353UL] = t4657->mX.mX[410UL];
    out->mLOG.mX[3354UL] = BatteryPack_v2_ModuleAssembly4_Module07_Cell_1_electricalModel0;
    out->mLOG.mX[3355UL] = zc_int401;
    out->mLOG.mX[3356UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly4_Module07_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly4_Module07_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[411UL] * t4657->mX.mX[411UL] * 0.0 + t4657->mX.mX[412UL] * t4657->mX.mX[412UL] * 0.0) + t4657->mX.mX[413UL] * t4657->mX.mX[413UL] * 0.0) + t4657->mX.mX[414UL] * t4657->mX.mX[414UL] * 0.0) + t4657->mX.mX[415UL] * t4657->mX.mX[415UL] * 0.0) * 0.001;
    out->mLOG.mX[3357UL] = t4657->mX.mX[1311UL];
    out->mLOG.mX[3358UL] = t4657->mX.mX[1311UL];
    out->mLOG.mX[3359UL] = t4657->mX.mX[408UL];
    out->mLOG.mX[3360UL] = BatteryPack_v2_ModuleAssembly4_Module07_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[3361UL] = t4657->mX.mX[408UL];
    out->mLOG.mX[3362UL] = t4657->mX.mX[408UL];
    out->mLOG.mX[3363UL] = t4657->mX.mX[1312UL] * 1000.0;
    out->mLOG.mX[3364UL] = BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3;
    out->mLOG.mX[3365UL] = t4657->mX.mX[408UL];
    out->mLOG.mX[3366UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3367UL] = BatteryPack_v2_ModuleAssembly4_Module07_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[3368UL] = BatteryPack_v2_ModuleAssembly4_Module07_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[3369UL] = intrm_sf_mf_14;
    out->mLOG.mX[3370UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3371UL] = intrm_sf_mf_14;
    out->mLOG.mX[3372UL] = zc_int401;
    out->mLOG.mX[3373UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[3374UL] = zc_int401;
    out->mLOG.mX[3375UL] = t4657->mX.mX[408UL];
    out->mLOG.mX[3376UL] = BatteryPack_v2_ModuleAssembly4_Module07_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[3377UL] = t4657->mX.mX[408UL];
    out->mLOG.mX[3378UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3379UL] = intrm_sf_mf_14;
    out->mLOG.mX[3380UL] = t4657->mX.mX[410UL];
    out->mLOG.mX[3381UL] = zc_int401;
    out->mLOG.mX[3382UL] = 0.0;
    out->mLOG.mX[3383UL] = t4657->mX.mX[1311UL];
    out->mLOG.mX[3384UL] = t4657->mX.mX[1311UL];
    out->mLOG.mX[3385UL] = t4657->mX.mX[408UL];
    out->mLOG.mX[3386UL] = BatteryPack_v2_ModuleAssembly2_Module08_Cell_1_electricalModel3;
    out->mLOG.mX[3387UL] = zc_int401 - intrm_sf_mf_14;
    out->mLOG.mX[3388UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3389UL] = t4657->mX.mX[416UL];
    out->mLOG.mX[3390UL] = t4657->mX.mX[416UL];
    out->mLOG.mX[3391UL] = t4657->mX.mX[416UL];
    out->mLOG.mX[3392UL] = t4657->mX.mX[416UL];
    out->mLOG.mX[3393UL] = t4657->mX.mX[417UL] * 0.00027777777777777778;
    out->mLOG.mX[3394UL] = t4657->mX.mX[416UL];
    out->mLOG.mX[3395UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3396UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[3397UL] = t4657->mX.mX[418UL];
    out->mLOG.mX[3398UL] = t4657->mX.mX[418UL];
    out->mLOG.mX[3399UL] = t4657->mX.mX[1315UL];
    out->mLOG.mX[3400UL] = intrm_sf_mf_14;
    for (t2499 = 419UL; t2499 - 419UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 2982UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[3406UL] = t4657->mX.mX[1314UL];
    out->mLOG.mX[3407UL] = t4657->mX.mX[1316UL] * 1000.0;
    out->mLOG.mX[3408UL] = t4657->mX.mX[1315UL];
    out->mLOG.mX[3409UL] = zc_int155;
    out->mLOG.mX[3410UL] = t4657->mX.mX[1313UL];
    out->mLOG.mX[3411UL] = t4657->mX.mX[417UL];
    out->mLOG.mX[3412UL] = t4657->mX.mX[416UL];
    out->mLOG.mX[3413UL] = t4657->mX.mX[418UL];
    out->mLOG.mX[3414UL] = t4657->mX.mX[1313UL];
    out->mLOG.mX[3415UL] = t4657->mX.mX[1314UL];
    out->mLOG.mX[3416UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3417UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[3418UL] = t4657->mX.mX[418UL];
    out->mLOG.mX[3419UL] = t3573;
    out->mLOG.mX[3420UL] = intrm_sf_mf_14;
    out->mLOG.mX[3421UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly4_Module08_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly4_Module08_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[419UL] * t4657->mX.mX[419UL] * 0.0 + t4657->mX.mX[420UL] * t4657->mX.mX[420UL] * 0.0) + t4657->mX.mX[421UL] * t4657->mX.mX[421UL] * 0.0) + t4657->mX.mX[422UL] * t4657->mX.mX[422UL] * 0.0) + t4657->mX.mX[423UL] * t4657->mX.mX[423UL] * 0.0) * 0.001;
    out->mLOG.mX[3422UL] = t4657->mX.mX[1315UL];
    out->mLOG.mX[3423UL] = t4657->mX.mX[1315UL];
    out->mLOG.mX[3424UL] = t4657->mX.mX[416UL];
    out->mLOG.mX[3425UL] = t3575 * 1000.0;
    out->mLOG.mX[3426UL] = t4657->mX.mX[416UL];
    out->mLOG.mX[3427UL] = t4657->mX.mX[416UL];
    out->mLOG.mX[3428UL] = t4657->mX.mX[1316UL] * 1000.0;
    out->mLOG.mX[3429UL] = zc_int155;
    out->mLOG.mX[3430UL] = t4657->mX.mX[416UL];
    out->mLOG.mX[3431UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3432UL] = BatteryPack_v2_ModuleAssembly4_Module08_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[3433UL] = BatteryPack_v2_ModuleAssembly4_Module08_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[3434UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[3435UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3436UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[3437UL] = intrm_sf_mf_14;
    out->mLOG.mX[3438UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[3439UL] = intrm_sf_mf_14;
    out->mLOG.mX[3440UL] = t4657->mX.mX[416UL];
    out->mLOG.mX[3441UL] = t3575 * -1000.0;
    out->mLOG.mX[3442UL] = t4657->mX.mX[416UL];
    out->mLOG.mX[3443UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3444UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[3445UL] = t4657->mX.mX[418UL];
    out->mLOG.mX[3446UL] = intrm_sf_mf_14;
    out->mLOG.mX[3447UL] = 0.0;
    out->mLOG.mX[3448UL] = t4657->mX.mX[1315UL];
    out->mLOG.mX[3449UL] = t4657->mX.mX[1315UL];
    out->mLOG.mX[3450UL] = t4657->mX.mX[416UL];
    out->mLOG.mX[3451UL] = zc_int155;
    out->mLOG.mX[3452UL] = intrm_sf_mf_14 - BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[3453UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3454UL] = t4657->mX.mX[424UL];
    out->mLOG.mX[3455UL] = t4657->mX.mX[424UL];
    out->mLOG.mX[3456UL] = t4657->mX.mX[424UL];
    out->mLOG.mX[3457UL] = t4657->mX.mX[424UL];
    out->mLOG.mX[3458UL] = t4657->mX.mX[425UL] * 0.00027777777777777778;
    out->mLOG.mX[3459UL] = t4657->mX.mX[424UL];
    out->mLOG.mX[3460UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3461UL] = t3804;
    out->mLOG.mX[3462UL] = t4657->mX.mX[426UL];
    out->mLOG.mX[3463UL] = t4657->mX.mX[426UL];
    out->mLOG.mX[3464UL] = t4657->mX.mX[1319UL];
    out->mLOG.mX[3465UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    for (t2499 = 427UL; t2499 - 427UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 3039UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[3471UL] = t4657->mX.mX[1318UL];
    out->mLOG.mX[3472UL] = t4657->mX.mX[1320UL] * 1000.0;
    out->mLOG.mX[3473UL] = t4657->mX.mX[1319UL];
    out->mLOG.mX[3474UL] = zc_int154;
    out->mLOG.mX[3475UL] = t4657->mX.mX[1317UL];
    out->mLOG.mX[3476UL] = t4657->mX.mX[425UL];
    out->mLOG.mX[3477UL] = t4657->mX.mX[424UL];
    out->mLOG.mX[3478UL] = t4657->mX.mX[426UL];
    out->mLOG.mX[3479UL] = t4657->mX.mX[1317UL];
    out->mLOG.mX[3480UL] = t4657->mX.mX[1318UL];
    out->mLOG.mX[3481UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3482UL] = t3804;
    out->mLOG.mX[3483UL] = t4657->mX.mX[426UL];
    out->mLOG.mX[3484UL] = t3578;
    out->mLOG.mX[3485UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[3486UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3582 > 8.200000000000002E-8 ? t3582 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[427UL] * t4657->mX.mX[427UL] * 0.0 + t4657->mX.mX[428UL] * t4657->mX.mX[428UL] * 0.0) + t4657->mX.mX[429UL] * t4657->mX.mX[429UL] * 0.0) + t4657->mX.mX[430UL] * t4657->mX.mX[430UL] * 0.0) + t4657->mX.mX[431UL] * t4657->mX.mX[431UL] * 0.0) * 0.001;
    out->mLOG.mX[3487UL] = t4657->mX.mX[1319UL];
    out->mLOG.mX[3488UL] = t4657->mX.mX[1319UL];
    out->mLOG.mX[3489UL] = t4657->mX.mX[424UL];
    out->mLOG.mX[3490UL] = BatteryPack_v2_ModuleAssembly4_Module09_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[3491UL] = t4657->mX.mX[424UL];
    out->mLOG.mX[3492UL] = t4657->mX.mX[424UL];
    out->mLOG.mX[3493UL] = t4657->mX.mX[1320UL] * 1000.0;
    out->mLOG.mX[3494UL] = zc_int154;
    out->mLOG.mX[3495UL] = t4657->mX.mX[424UL];
    out->mLOG.mX[3496UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3497UL] = BatteryPack_v2_ModuleAssembly4_Module09_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[3498UL] = BatteryPack_v2_ModuleAssembly4_Module09_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[3499UL] = t3804;
    out->mLOG.mX[3500UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3501UL] = t3804;
    out->mLOG.mX[3502UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[3503UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[3504UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[3505UL] = t4657->mX.mX[424UL];
    out->mLOG.mX[3506UL] = BatteryPack_v2_ModuleAssembly4_Module09_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[3507UL] = t4657->mX.mX[424UL];
    out->mLOG.mX[3508UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3509UL] = t3804;
    out->mLOG.mX[3510UL] = t4657->mX.mX[426UL];
    out->mLOG.mX[3511UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[3512UL] = 0.0;
    out->mLOG.mX[3513UL] = t4657->mX.mX[1319UL];
    out->mLOG.mX[3514UL] = t4657->mX.mX[1319UL];
    out->mLOG.mX[3515UL] = t4657->mX.mX[424UL];
    out->mLOG.mX[3516UL] = zc_int154;
    out->mLOG.mX[3517UL] = BatteryPack_v2_ModuleAssembly6_Module09_Cell_1_electricalModel3 - t3804;
    out->mLOG.mX[3518UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3519UL] = t4657->mX.mX[432UL];
    out->mLOG.mX[3520UL] = t4657->mX.mX[432UL];
    out->mLOG.mX[3521UL] = t4657->mX.mX[432UL];
    out->mLOG.mX[3522UL] = t4657->mX.mX[432UL];
    out->mLOG.mX[3523UL] = t4657->mX.mX[433UL] * 0.00027777777777777778;
    out->mLOG.mX[3524UL] = t4657->mX.mX[432UL];
    out->mLOG.mX[3525UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3526UL] = zc_int397;
    out->mLOG.mX[3527UL] = t4657->mX.mX[434UL];
    out->mLOG.mX[3528UL] = t4657->mX.mX[434UL];
    out->mLOG.mX[3529UL] = t4657->mX.mX[1323UL];
    out->mLOG.mX[3530UL] = t3804;
    for (t2499 = 435UL; t2499 - 435UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 3096UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[3536UL] = t4657->mX.mX[1322UL];
    out->mLOG.mX[3537UL] = t4657->mX.mX[1324UL] * 1000.0;
    out->mLOG.mX[3538UL] = t4657->mX.mX[1323UL];
    out->mLOG.mX[3539UL] = zc_int161;
    out->mLOG.mX[3540UL] = t4657->mX.mX[1321UL];
    out->mLOG.mX[3541UL] = t4657->mX.mX[433UL];
    out->mLOG.mX[3542UL] = t4657->mX.mX[432UL];
    out->mLOG.mX[3543UL] = t4657->mX.mX[434UL];
    out->mLOG.mX[3544UL] = t4657->mX.mX[1321UL];
    out->mLOG.mX[3545UL] = t4657->mX.mX[1322UL];
    out->mLOG.mX[3546UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3547UL] = zc_int397;
    out->mLOG.mX[3548UL] = t4657->mX.mX[434UL];
    out->mLOG.mX[3549UL] = t3583;
    out->mLOG.mX[3550UL] = t3804;
    out->mLOG.mX[3551UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3587 > 8.200000000000002E-8 ? t3587 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[435UL] * t4657->mX.mX[435UL] * 0.0 + t4657->mX.mX[436UL] * t4657->mX.mX[436UL] * 0.0) + t4657->mX.mX[437UL] * t4657->mX.mX[437UL] * 0.0) + t4657->mX.mX[438UL] * t4657->mX.mX[438UL] * 0.0) + t4657->mX.mX[439UL] * t4657->mX.mX[439UL] * 0.0) * 0.001;
    out->mLOG.mX[3552UL] = t4657->mX.mX[1323UL];
    out->mLOG.mX[3553UL] = t4657->mX.mX[1323UL];
    out->mLOG.mX[3554UL] = t4657->mX.mX[432UL];
    out->mLOG.mX[3555UL] = t3585 * 1000.0;
    out->mLOG.mX[3556UL] = t4657->mX.mX[432UL];
    out->mLOG.mX[3557UL] = t4657->mX.mX[432UL];
    out->mLOG.mX[3558UL] = t4657->mX.mX[1324UL] * 1000.0;
    out->mLOG.mX[3559UL] = zc_int161;
    out->mLOG.mX[3560UL] = t4657->mX.mX[432UL];
    out->mLOG.mX[3561UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3562UL] = BatteryPack_v2_ModuleAssembly4_Module10_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[3563UL] = BatteryPack_v2_ModuleAssembly4_Module10_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[3564UL] = zc_int397;
    out->mLOG.mX[3565UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3566UL] = zc_int397;
    out->mLOG.mX[3567UL] = t3804;
    out->mLOG.mX[3568UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[3569UL] = t3804;
    out->mLOG.mX[3570UL] = t4657->mX.mX[432UL];
    out->mLOG.mX[3571UL] = t3585 * -1000.0;
    out->mLOG.mX[3572UL] = t4657->mX.mX[432UL];
    out->mLOG.mX[3573UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3574UL] = zc_int397;
    out->mLOG.mX[3575UL] = t4657->mX.mX[434UL];
    out->mLOG.mX[3576UL] = t3804;
    out->mLOG.mX[3577UL] = 0.0;
    out->mLOG.mX[3578UL] = t4657->mX.mX[1323UL];
    out->mLOG.mX[3579UL] = t4657->mX.mX[1323UL];
    out->mLOG.mX[3580UL] = t4657->mX.mX[432UL];
    out->mLOG.mX[3581UL] = zc_int161;
    out->mLOG.mX[3582UL] = t3804 - zc_int397;
    out->mLOG.mX[3583UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3584UL] = t4657->mX.mX[440UL];
    out->mLOG.mX[3585UL] = t4657->mX.mX[440UL];
    out->mLOG.mX[3586UL] = t4657->mX.mX[440UL];
    out->mLOG.mX[3587UL] = t4657->mX.mX[440UL];
    out->mLOG.mX[3588UL] = t4657->mX.mX[441UL] * 0.00027777777777777778;
    out->mLOG.mX[3589UL] = t4657->mX.mX[440UL];
    out->mLOG.mX[3590UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3591UL] = zc_int396;
    out->mLOG.mX[3592UL] = t4657->mX.mX[442UL];
    out->mLOG.mX[3593UL] = t4657->mX.mX[442UL];
    out->mLOG.mX[3594UL] = t4657->mX.mX[1327UL];
    out->mLOG.mX[3595UL] = zc_int397;
    for (t2499 = 443UL; t2499 - 443UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 3153UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[3601UL] = t4657->mX.mX[1326UL];
    out->mLOG.mX[3602UL] = t4657->mX.mX[1328UL] * 1000.0;
    out->mLOG.mX[3603UL] = t4657->mX.mX[1327UL];
    out->mLOG.mX[3604UL] = zc_int164;
    out->mLOG.mX[3605UL] = t4657->mX.mX[1325UL];
    out->mLOG.mX[3606UL] = t4657->mX.mX[441UL];
    out->mLOG.mX[3607UL] = t4657->mX.mX[440UL];
    out->mLOG.mX[3608UL] = t4657->mX.mX[442UL];
    out->mLOG.mX[3609UL] = t4657->mX.mX[1325UL];
    out->mLOG.mX[3610UL] = t4657->mX.mX[1326UL];
    out->mLOG.mX[3611UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3612UL] = zc_int396;
    out->mLOG.mX[3613UL] = t4657->mX.mX[442UL];
    out->mLOG.mX[3614UL] = t3588;
    out->mLOG.mX[3615UL] = zc_int397;
    out->mLOG.mX[3616UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3592 > 8.200000000000002E-8 ? t3592 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[443UL] * t4657->mX.mX[443UL] * 0.0 + t4657->mX.mX[444UL] * t4657->mX.mX[444UL] * 0.0) + t4657->mX.mX[445UL] * t4657->mX.mX[445UL] * 0.0) + t4657->mX.mX[446UL] * t4657->mX.mX[446UL] * 0.0) + t4657->mX.mX[447UL] * t4657->mX.mX[447UL] * 0.0) * 0.001;
    out->mLOG.mX[3617UL] = t4657->mX.mX[1327UL];
    out->mLOG.mX[3618UL] = t4657->mX.mX[1327UL];
    out->mLOG.mX[3619UL] = t4657->mX.mX[440UL];
    out->mLOG.mX[3620UL] = t3590 * 1000.0;
    out->mLOG.mX[3621UL] = t4657->mX.mX[440UL];
    out->mLOG.mX[3622UL] = t4657->mX.mX[440UL];
    out->mLOG.mX[3623UL] = t4657->mX.mX[1328UL] * 1000.0;
    out->mLOG.mX[3624UL] = zc_int164;
    out->mLOG.mX[3625UL] = t4657->mX.mX[440UL];
    out->mLOG.mX[3626UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3627UL] = BatteryPack_v2_ModuleAssembly4_Module11_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[3628UL] = BatteryPack_v2_ModuleAssembly4_Module11_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[3629UL] = zc_int396;
    out->mLOG.mX[3630UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3631UL] = zc_int396;
    out->mLOG.mX[3632UL] = zc_int397;
    out->mLOG.mX[3633UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[3634UL] = zc_int397;
    out->mLOG.mX[3635UL] = t4657->mX.mX[440UL];
    out->mLOG.mX[3636UL] = t3590 * -1000.0;
    out->mLOG.mX[3637UL] = t4657->mX.mX[440UL];
    out->mLOG.mX[3638UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3639UL] = zc_int396;
    out->mLOG.mX[3640UL] = t4657->mX.mX[442UL];
    out->mLOG.mX[3641UL] = zc_int397;
    out->mLOG.mX[3642UL] = 0.0;
    out->mLOG.mX[3643UL] = t4657->mX.mX[1327UL];
    out->mLOG.mX[3644UL] = t4657->mX.mX[1327UL];
    out->mLOG.mX[3645UL] = t4657->mX.mX[440UL];
    out->mLOG.mX[3646UL] = zc_int164;
    out->mLOG.mX[3647UL] = zc_int397 - zc_int396;
    out->mLOG.mX[3648UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3649UL] = t4657->mX.mX[448UL];
    out->mLOG.mX[3650UL] = t4657->mX.mX[448UL];
    out->mLOG.mX[3651UL] = t4657->mX.mX[448UL];
    out->mLOG.mX[3652UL] = t4657->mX.mX[448UL];
    out->mLOG.mX[3653UL] = t4657->mX.mX[449UL] * 0.00027777777777777778;
    out->mLOG.mX[3654UL] = t4657->mX.mX[448UL];
    out->mLOG.mX[3655UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3656UL] = zc_int395;
    out->mLOG.mX[3657UL] = t4657->mX.mX[450UL];
    out->mLOG.mX[3658UL] = t4657->mX.mX[450UL];
    out->mLOG.mX[3659UL] = t4657->mX.mX[1331UL];
    out->mLOG.mX[3660UL] = zc_int396;
    for (t2499 = 451UL; t2499 - 451UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 3210UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[3666UL] = t4657->mX.mX[1330UL];
    out->mLOG.mX[3667UL] = t4657->mX.mX[1332UL] * 1000.0;
    out->mLOG.mX[3668UL] = t4657->mX.mX[1331UL];
    out->mLOG.mX[3669UL] = intrm_sf_mf_43;
    out->mLOG.mX[3670UL] = t4657->mX.mX[1329UL];
    out->mLOG.mX[3671UL] = t4657->mX.mX[449UL];
    out->mLOG.mX[3672UL] = t4657->mX.mX[448UL];
    out->mLOG.mX[3673UL] = t4657->mX.mX[450UL];
    out->mLOG.mX[3674UL] = t4657->mX.mX[1329UL];
    out->mLOG.mX[3675UL] = t4657->mX.mX[1330UL];
    out->mLOG.mX[3676UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3677UL] = zc_int395;
    out->mLOG.mX[3678UL] = t4657->mX.mX[450UL];
    out->mLOG.mX[3679UL] = BatteryPack_v2_ModuleAssembly4_Module12_Cell_1_electricalModel0;
    out->mLOG.mX[3680UL] = zc_int396;
    out->mLOG.mX[3681UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3597 > 8.200000000000002E-8 ? t3597 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[451UL] * t4657->mX.mX[451UL] * 0.0 + t4657->mX.mX[452UL] * t4657->mX.mX[452UL] * 0.0) + t4657->mX.mX[453UL] * t4657->mX.mX[453UL] * 0.0) + t4657->mX.mX[454UL] * t4657->mX.mX[454UL] * 0.0) + t4657->mX.mX[455UL] * t4657->mX.mX[455UL] * 0.0) * 0.001;
    out->mLOG.mX[3682UL] = t4657->mX.mX[1331UL];
    out->mLOG.mX[3683UL] = t4657->mX.mX[1331UL];
    out->mLOG.mX[3684UL] = t4657->mX.mX[448UL];
    out->mLOG.mX[3685UL] = t3595 * 1000.0;
    out->mLOG.mX[3686UL] = t4657->mX.mX[448UL];
    out->mLOG.mX[3687UL] = t4657->mX.mX[448UL];
    out->mLOG.mX[3688UL] = t4657->mX.mX[1332UL] * 1000.0;
    out->mLOG.mX[3689UL] = intrm_sf_mf_43;
    out->mLOG.mX[3690UL] = t4657->mX.mX[448UL];
    out->mLOG.mX[3691UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3692UL] = BatteryPack_v2_ModuleAssembly4_Module12_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[3693UL] = BatteryPack_v2_ModuleAssembly4_Module12_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[3694UL] = zc_int395;
    out->mLOG.mX[3695UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3696UL] = zc_int395;
    out->mLOG.mX[3697UL] = zc_int396;
    out->mLOG.mX[3698UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[3699UL] = zc_int396;
    out->mLOG.mX[3700UL] = t4657->mX.mX[448UL];
    out->mLOG.mX[3701UL] = t3595 * -1000.0;
    out->mLOG.mX[3702UL] = t4657->mX.mX[448UL];
    out->mLOG.mX[3703UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3704UL] = zc_int395;
    out->mLOG.mX[3705UL] = t4657->mX.mX[450UL];
    out->mLOG.mX[3706UL] = zc_int396;
    out->mLOG.mX[3707UL] = 0.0;
    out->mLOG.mX[3708UL] = t4657->mX.mX[1331UL];
    out->mLOG.mX[3709UL] = t4657->mX.mX[1331UL];
    out->mLOG.mX[3710UL] = t4657->mX.mX[448UL];
    out->mLOG.mX[3711UL] = intrm_sf_mf_43;
    out->mLOG.mX[3712UL] = zc_int396 - zc_int395;
    out->mLOG.mX[3713UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3714UL] = t4657->mX.mX[456UL];
    out->mLOG.mX[3715UL] = t4657->mX.mX[456UL];
    out->mLOG.mX[3716UL] = t4657->mX.mX[456UL];
    out->mLOG.mX[3717UL] = t4657->mX.mX[456UL];
    out->mLOG.mX[3718UL] = t4657->mX.mX[457UL] * 0.00027777777777777778;
    out->mLOG.mX[3719UL] = t4657->mX.mX[456UL];
    out->mLOG.mX[3720UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3721UL] = t3794;
    out->mLOG.mX[3722UL] = t4657->mX.mX[458UL];
    out->mLOG.mX[3723UL] = t4657->mX.mX[458UL];
    out->mLOG.mX[3724UL] = t4657->mX.mX[1335UL];
    out->mLOG.mX[3725UL] = zc_int395;
    for (t2499 = 459UL; t2499 - 459UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 3267UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[3731UL] = t4657->mX.mX[1334UL];
    out->mLOG.mX[3732UL] = t4657->mX.mX[1336UL] * 1000.0;
    out->mLOG.mX[3733UL] = t4657->mX.mX[1335UL];
    out->mLOG.mX[3734UL] = BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[3735UL] = t4657->mX.mX[1333UL];
    out->mLOG.mX[3736UL] = t4657->mX.mX[457UL];
    out->mLOG.mX[3737UL] = t4657->mX.mX[456UL];
    out->mLOG.mX[3738UL] = t4657->mX.mX[458UL];
    out->mLOG.mX[3739UL] = t4657->mX.mX[1333UL];
    out->mLOG.mX[3740UL] = t4657->mX.mX[1334UL];
    out->mLOG.mX[3741UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3742UL] = t3794;
    out->mLOG.mX[3743UL] = t4657->mX.mX[458UL];
    out->mLOG.mX[3744UL] = BatteryPack_v2_ModuleAssembly4_Module13_Cell_1_electricalModel0;
    out->mLOG.mX[3745UL] = zc_int395;
    out->mLOG.mX[3746UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3602 > 8.200000000000002E-8 ? t3602 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[459UL] * t4657->mX.mX[459UL] * 0.0 + t4657->mX.mX[460UL] * t4657->mX.mX[460UL] * 0.0) + t4657->mX.mX[461UL] * t4657->mX.mX[461UL] * 0.0) + t4657->mX.mX[462UL] * t4657->mX.mX[462UL] * 0.0) + t4657->mX.mX[463UL] * t4657->mX.mX[463UL] * 0.0) * 0.001;
    out->mLOG.mX[3747UL] = t4657->mX.mX[1335UL];
    out->mLOG.mX[3748UL] = t4657->mX.mX[1335UL];
    out->mLOG.mX[3749UL] = t4657->mX.mX[456UL];
    out->mLOG.mX[3750UL] = BatteryPack_v2_ModuleAssembly4_Module13_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[3751UL] = t4657->mX.mX[456UL];
    out->mLOG.mX[3752UL] = t4657->mX.mX[456UL];
    out->mLOG.mX[3753UL] = t4657->mX.mX[1336UL] * 1000.0;
    out->mLOG.mX[3754UL] = BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[3755UL] = t4657->mX.mX[456UL];
    out->mLOG.mX[3756UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3757UL] = BatteryPack_v2_ModuleAssembly4_Module13_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[3758UL] = BatteryPack_v2_ModuleAssembly4_Module13_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[3759UL] = t3794;
    out->mLOG.mX[3760UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3761UL] = t3794;
    out->mLOG.mX[3762UL] = zc_int395;
    out->mLOG.mX[3763UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[3764UL] = zc_int395;
    out->mLOG.mX[3765UL] = t4657->mX.mX[456UL];
    out->mLOG.mX[3766UL] = BatteryPack_v2_ModuleAssembly4_Module13_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[3767UL] = t4657->mX.mX[456UL];
    out->mLOG.mX[3768UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3769UL] = t3794;
    out->mLOG.mX[3770UL] = t4657->mX.mX[458UL];
    out->mLOG.mX[3771UL] = zc_int395;
    out->mLOG.mX[3772UL] = 0.0;
    out->mLOG.mX[3773UL] = t4657->mX.mX[1335UL];
    out->mLOG.mX[3774UL] = t4657->mX.mX[1335UL];
    out->mLOG.mX[3775UL] = t4657->mX.mX[456UL];
    out->mLOG.mX[3776UL] = BatteryPack_v2_ModuleAssembly3_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[3777UL] = zc_int395 - t3794;
    out->mLOG.mX[3778UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3779UL] = t4657->mX.mX[464UL];
    out->mLOG.mX[3780UL] = t4657->mX.mX[464UL];
    out->mLOG.mX[3781UL] = t4657->mX.mX[464UL];
    out->mLOG.mX[3782UL] = t4657->mX.mX[464UL];
    out->mLOG.mX[3783UL] = t4657->mX.mX[465UL] * 0.00027777777777777778;
    out->mLOG.mX[3784UL] = t4657->mX.mX[464UL];
    out->mLOG.mX[3785UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3786UL] = zc_int393;
    out->mLOG.mX[3787UL] = t4657->mX.mX[466UL];
    out->mLOG.mX[3788UL] = t4657->mX.mX[466UL];
    out->mLOG.mX[3789UL] = t4657->mX.mX[1339UL];
    out->mLOG.mX[3790UL] = t3794;
    for (t2499 = 467UL; t2499 - 467UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 3324UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[3796UL] = t4657->mX.mX[1338UL];
    out->mLOG.mX[3797UL] = t4657->mX.mX[1340UL] * 1000.0;
    out->mLOG.mX[3798UL] = t4657->mX.mX[1339UL];
    out->mLOG.mX[3799UL] = zc_int171;
    out->mLOG.mX[3800UL] = t4657->mX.mX[1337UL];
    out->mLOG.mX[3801UL] = t4657->mX.mX[465UL];
    out->mLOG.mX[3802UL] = t4657->mX.mX[464UL];
    out->mLOG.mX[3803UL] = t4657->mX.mX[466UL];
    out->mLOG.mX[3804UL] = t4657->mX.mX[1337UL];
    out->mLOG.mX[3805UL] = t4657->mX.mX[1338UL];
    out->mLOG.mX[3806UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3807UL] = zc_int393;
    out->mLOG.mX[3808UL] = t4657->mX.mX[466UL];
    out->mLOG.mX[3809UL] = t3603;
    out->mLOG.mX[3810UL] = t3794;
    out->mLOG.mX[3811UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3607 > 8.200000000000002E-8 ? t3607 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[467UL] * t4657->mX.mX[467UL] * 0.0 + t4657->mX.mX[468UL] * t4657->mX.mX[468UL] * 0.0) + t4657->mX.mX[469UL] * t4657->mX.mX[469UL] * 0.0) + t4657->mX.mX[470UL] * t4657->mX.mX[470UL] * 0.0) + t4657->mX.mX[471UL] * t4657->mX.mX[471UL] * 0.0) * 0.001;
    out->mLOG.mX[3812UL] = t4657->mX.mX[1339UL];
    out->mLOG.mX[3813UL] = t4657->mX.mX[1339UL];
    out->mLOG.mX[3814UL] = t4657->mX.mX[464UL];
    out->mLOG.mX[3815UL] = BatteryPack_v2_ModuleAssembly4_Module14_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[3816UL] = t4657->mX.mX[464UL];
    out->mLOG.mX[3817UL] = t4657->mX.mX[464UL];
    out->mLOG.mX[3818UL] = t4657->mX.mX[1340UL] * 1000.0;
    out->mLOG.mX[3819UL] = zc_int171;
    out->mLOG.mX[3820UL] = t4657->mX.mX[464UL];
    out->mLOG.mX[3821UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3822UL] = BatteryPack_v2_ModuleAssembly4_Module14_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[3823UL] = BatteryPack_v2_ModuleAssembly4_Module14_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[3824UL] = zc_int393;
    out->mLOG.mX[3825UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3826UL] = zc_int393;
    out->mLOG.mX[3827UL] = t3794;
    out->mLOG.mX[3828UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[3829UL] = t3794;
    out->mLOG.mX[3830UL] = t4657->mX.mX[464UL];
    out->mLOG.mX[3831UL] = BatteryPack_v2_ModuleAssembly4_Module14_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[3832UL] = t4657->mX.mX[464UL];
    out->mLOG.mX[3833UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3834UL] = zc_int393;
    out->mLOG.mX[3835UL] = t4657->mX.mX[466UL];
    out->mLOG.mX[3836UL] = t3794;
    out->mLOG.mX[3837UL] = 0.0;
    out->mLOG.mX[3838UL] = t4657->mX.mX[1339UL];
    out->mLOG.mX[3839UL] = t4657->mX.mX[1339UL];
    out->mLOG.mX[3840UL] = t4657->mX.mX[464UL];
    out->mLOG.mX[3841UL] = zc_int171;
    out->mLOG.mX[3842UL] = t3794 - zc_int393;
    out->mLOG.mX[3843UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3844UL] = t4657->mX.mX[472UL];
    out->mLOG.mX[3845UL] = t4657->mX.mX[472UL];
    out->mLOG.mX[3846UL] = t4657->mX.mX[472UL];
    out->mLOG.mX[3847UL] = t4657->mX.mX[472UL];
    out->mLOG.mX[3848UL] = t4657->mX.mX[473UL] * 0.00027777777777777778;
    out->mLOG.mX[3849UL] = t4657->mX.mX[472UL];
    out->mLOG.mX[3850UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3851UL] = intrm_sf_mf_95;
    out->mLOG.mX[3852UL] = t4657->mX.mX[474UL];
    out->mLOG.mX[3853UL] = t4657->mX.mX[474UL];
    out->mLOG.mX[3854UL] = t4657->mX.mX[1343UL];
    out->mLOG.mX[3855UL] = zc_int393;
    for (t2499 = 475UL; t2499 - 475UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 3381UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[3861UL] = t4657->mX.mX[1342UL];
    out->mLOG.mX[3862UL] = t4657->mX.mX[1344UL] * 1000.0;
    out->mLOG.mX[3863UL] = t4657->mX.mX[1343UL];
    out->mLOG.mX[3864UL] = intrm_sf_mf_44;
    out->mLOG.mX[3865UL] = t4657->mX.mX[1341UL];
    out->mLOG.mX[3866UL] = t4657->mX.mX[473UL];
    out->mLOG.mX[3867UL] = t4657->mX.mX[472UL];
    out->mLOG.mX[3868UL] = t4657->mX.mX[474UL];
    out->mLOG.mX[3869UL] = t4657->mX.mX[1341UL];
    out->mLOG.mX[3870UL] = t4657->mX.mX[1342UL];
    out->mLOG.mX[3871UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3872UL] = intrm_sf_mf_95;
    out->mLOG.mX[3873UL] = t4657->mX.mX[474UL];
    out->mLOG.mX[3874UL] = t3608;
    out->mLOG.mX[3875UL] = zc_int393;
    out->mLOG.mX[3876UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly4_Module15_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly4_Module15_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[475UL] * t4657->mX.mX[475UL] * 0.0 + t4657->mX.mX[476UL] * t4657->mX.mX[476UL] * 0.0) + t4657->mX.mX[477UL] * t4657->mX.mX[477UL] * 0.0) + t4657->mX.mX[478UL] * t4657->mX.mX[478UL] * 0.0) + t4657->mX.mX[479UL] * t4657->mX.mX[479UL] * 0.0) * 0.001;
    out->mLOG.mX[3877UL] = t4657->mX.mX[1343UL];
    out->mLOG.mX[3878UL] = t4657->mX.mX[1343UL];
    out->mLOG.mX[3879UL] = t4657->mX.mX[472UL];
    out->mLOG.mX[3880UL] = BatteryPack_v2_ModuleAssembly4_Module15_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[3881UL] = t4657->mX.mX[472UL];
    out->mLOG.mX[3882UL] = t4657->mX.mX[472UL];
    out->mLOG.mX[3883UL] = t4657->mX.mX[1344UL] * 1000.0;
    out->mLOG.mX[3884UL] = intrm_sf_mf_44;
    out->mLOG.mX[3885UL] = t4657->mX.mX[472UL];
    out->mLOG.mX[3886UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3887UL] = BatteryPack_v2_ModuleAssembly4_Module15_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[3888UL] = BatteryPack_v2_ModuleAssembly4_Module15_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[3889UL] = intrm_sf_mf_95;
    out->mLOG.mX[3890UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3891UL] = intrm_sf_mf_95;
    out->mLOG.mX[3892UL] = zc_int393;
    out->mLOG.mX[3893UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[3894UL] = zc_int393;
    out->mLOG.mX[3895UL] = t4657->mX.mX[472UL];
    out->mLOG.mX[3896UL] = BatteryPack_v2_ModuleAssembly4_Module15_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[3897UL] = t4657->mX.mX[472UL];
    out->mLOG.mX[3898UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3899UL] = intrm_sf_mf_95;
    out->mLOG.mX[3900UL] = t4657->mX.mX[474UL];
    out->mLOG.mX[3901UL] = zc_int393;
    out->mLOG.mX[3902UL] = 0.0;
    out->mLOG.mX[3903UL] = t4657->mX.mX[1343UL];
    out->mLOG.mX[3904UL] = t4657->mX.mX[1343UL];
    out->mLOG.mX[3905UL] = t4657->mX.mX[472UL];
    out->mLOG.mX[3906UL] = intrm_sf_mf_44;
    out->mLOG.mX[3907UL] = zc_int393 - intrm_sf_mf_95;
    out->mLOG.mX[3908UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3909UL] = t4657->mX.mX[480UL];
    out->mLOG.mX[3910UL] = t4657->mX.mX[480UL];
    out->mLOG.mX[3911UL] = t4657->mX.mX[480UL];
    out->mLOG.mX[3912UL] = t4657->mX.mX[480UL];
    out->mLOG.mX[3913UL] = t4657->mX.mX[481UL] * 0.00027777777777777778;
    out->mLOG.mX[3914UL] = t4657->mX.mX[480UL];
    out->mLOG.mX[3915UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3916UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    out->mLOG.mX[3917UL] = t4657->mX.mX[482UL];
    out->mLOG.mX[3918UL] = t4657->mX.mX[482UL];
    out->mLOG.mX[3919UL] = t4657->mX.mX[1347UL];
    out->mLOG.mX[3920UL] = intrm_sf_mf_95;
    for (t2499 = 483UL; t2499 - 483UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 3438UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[3926UL] = t4657->mX.mX[1346UL];
    out->mLOG.mX[3927UL] = t4657->mX.mX[1348UL] * 1000.0;
    out->mLOG.mX[3928UL] = t4657->mX.mX[1347UL];
    out->mLOG.mX[3929UL] = zc_int177;
    out->mLOG.mX[3930UL] = t4657->mX.mX[1345UL];
    out->mLOG.mX[3931UL] = t4657->mX.mX[481UL];
    out->mLOG.mX[3932UL] = t4657->mX.mX[480UL];
    out->mLOG.mX[3933UL] = t4657->mX.mX[482UL];
    out->mLOG.mX[3934UL] = t4657->mX.mX[1345UL];
    out->mLOG.mX[3935UL] = t4657->mX.mX[1346UL];
    out->mLOG.mX[3936UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3937UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    out->mLOG.mX[3938UL] = t4657->mX.mX[482UL];
    out->mLOG.mX[3939UL] = t3613;
    out->mLOG.mX[3940UL] = intrm_sf_mf_95;
    out->mLOG.mX[3941UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly4_Module16_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly4_Module16_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[483UL] * t4657->mX.mX[483UL] * 0.0 + t4657->mX.mX[484UL] * t4657->mX.mX[484UL] * 0.0) + t4657->mX.mX[485UL] * t4657->mX.mX[485UL] * 0.0) + t4657->mX.mX[486UL] * t4657->mX.mX[486UL] * 0.0) + t4657->mX.mX[487UL] * t4657->mX.mX[487UL] * 0.0) * 0.001;
    out->mLOG.mX[3942UL] = t4657->mX.mX[1347UL];
    out->mLOG.mX[3943UL] = t4657->mX.mX[1347UL];
    out->mLOG.mX[3944UL] = t4657->mX.mX[480UL];
    out->mLOG.mX[3945UL] = BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[3946UL] = t4657->mX.mX[480UL];
    out->mLOG.mX[3947UL] = t4657->mX.mX[480UL];
    out->mLOG.mX[3948UL] = t4657->mX.mX[1348UL] * 1000.0;
    out->mLOG.mX[3949UL] = zc_int177;
    out->mLOG.mX[3950UL] = t4657->mX.mX[480UL];
    out->mLOG.mX[3951UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3952UL] = BatteryPack_v2_ModuleAssembly4_Module16_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[3953UL] = BatteryPack_v2_ModuleAssembly4_Module16_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[3954UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    out->mLOG.mX[3955UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3956UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    out->mLOG.mX[3957UL] = intrm_sf_mf_95;
    out->mLOG.mX[3958UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[3959UL] = intrm_sf_mf_95;
    out->mLOG.mX[3960UL] = t4657->mX.mX[480UL];
    out->mLOG.mX[3961UL] = BatteryPack_v2_ModuleAssembly4_Module16_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[3962UL] = t4657->mX.mX[480UL];
    out->mLOG.mX[3963UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3964UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    out->mLOG.mX[3965UL] = t4657->mX.mX[482UL];
    out->mLOG.mX[3966UL] = intrm_sf_mf_95;
    out->mLOG.mX[3967UL] = 0.0;
    out->mLOG.mX[3968UL] = t4657->mX.mX[1347UL];
    out->mLOG.mX[3969UL] = t4657->mX.mX[1347UL];
    out->mLOG.mX[3970UL] = t4657->mX.mX[480UL];
    out->mLOG.mX[3971UL] = zc_int177;
    out->mLOG.mX[3972UL] = intrm_sf_mf_95 - BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    out->mLOG.mX[3973UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[3974UL] = t4657->mX.mX[488UL];
    out->mLOG.mX[3975UL] = t4657->mX.mX[488UL];
    out->mLOG.mX[3976UL] = t4657->mX.mX[488UL];
    out->mLOG.mX[3977UL] = t4657->mX.mX[488UL];
    out->mLOG.mX[3978UL] = t4657->mX.mX[489UL] * 0.00027777777777777778;
    out->mLOG.mX[3979UL] = t4657->mX.mX[488UL];
    out->mLOG.mX[3980UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[3981UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[3982UL] = t4657->mX.mX[490UL];
    out->mLOG.mX[3983UL] = t4657->mX.mX[490UL];
    out->mLOG.mX[3984UL] = t4657->mX.mX[1351UL];
    out->mLOG.mX[3985UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    for (t2499 = 491UL; t2499 - 491UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 3495UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[3991UL] = t4657->mX.mX[1350UL];
    out->mLOG.mX[3992UL] = t4657->mX.mX[1352UL] * 1000.0;
    out->mLOG.mX[3993UL] = t4657->mX.mX[1351UL];
    out->mLOG.mX[3994UL] = BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[3995UL] = t4657->mX.mX[1349UL];
    out->mLOG.mX[3996UL] = t4657->mX.mX[489UL];
    out->mLOG.mX[3997UL] = t4657->mX.mX[488UL];
    out->mLOG.mX[3998UL] = t4657->mX.mX[490UL];
    out->mLOG.mX[3999UL] = t4657->mX.mX[1349UL];
    out->mLOG.mX[4000UL] = t4657->mX.mX[1350UL];
    out->mLOG.mX[4001UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4002UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[4003UL] = t4657->mX.mX[490UL];
    out->mLOG.mX[4004UL] = BatteryPack_v2_ModuleAssembly4_Module17_Cell_1_electricalModel0;
    out->mLOG.mX[4005UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    out->mLOG.mX[4006UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3622 > 8.200000000000002E-8 ? t3622 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[491UL] * t4657->mX.mX[491UL] * 0.0 + t4657->mX.mX[492UL] * t4657->mX.mX[492UL] * 0.0) + t4657->mX.mX[493UL] * t4657->mX.mX[493UL] * 0.0) + t4657->mX.mX[494UL] * t4657->mX.mX[494UL] * 0.0) + t4657->mX.mX[495UL] * t4657->mX.mX[495UL] * 0.0) * 0.001;
    out->mLOG.mX[4007UL] = t4657->mX.mX[1351UL];
    out->mLOG.mX[4008UL] = t4657->mX.mX[1351UL];
    out->mLOG.mX[4009UL] = t4657->mX.mX[488UL];
    out->mLOG.mX[4010UL] = BatteryPack_v2_ModuleAssembly4_Module17_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[4011UL] = t4657->mX.mX[488UL];
    out->mLOG.mX[4012UL] = t4657->mX.mX[488UL];
    out->mLOG.mX[4013UL] = t4657->mX.mX[1352UL] * 1000.0;
    out->mLOG.mX[4014UL] = BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[4015UL] = t4657->mX.mX[488UL];
    out->mLOG.mX[4016UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4017UL] = BatteryPack_v2_ModuleAssembly4_Module17_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[4018UL] = BatteryPack_v2_ModuleAssembly4_Module17_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[4019UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[4020UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4021UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[4022UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    out->mLOG.mX[4023UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[4024UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    out->mLOG.mX[4025UL] = t4657->mX.mX[488UL];
    out->mLOG.mX[4026UL] = BatteryPack_v2_ModuleAssembly4_Module17_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[4027UL] = t4657->mX.mX[488UL];
    out->mLOG.mX[4028UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4029UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[4030UL] = t4657->mX.mX[490UL];
    out->mLOG.mX[4031UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3;
    out->mLOG.mX[4032UL] = 0.0;
    out->mLOG.mX[4033UL] = t4657->mX.mX[1351UL];
    out->mLOG.mX[4034UL] = t4657->mX.mX[1351UL];
    out->mLOG.mX[4035UL] = t4657->mX.mX[488UL];
    out->mLOG.mX[4036UL] = BatteryPack_v2_ModuleAssembly2_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[4037UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel3 - BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[4038UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4039UL] = t4657->mX.mX[496UL];
    out->mLOG.mX[4040UL] = t4657->mX.mX[496UL];
    out->mLOG.mX[4041UL] = t4657->mX.mX[496UL];
    out->mLOG.mX[4042UL] = t4657->mX.mX[496UL];
    out->mLOG.mX[4043UL] = t4657->mX.mX[497UL] * 0.00027777777777777778;
    out->mLOG.mX[4044UL] = t4657->mX.mX[496UL];
    out->mLOG.mX[4045UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4046UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[4047UL] = t4657->mX.mX[498UL];
    out->mLOG.mX[4048UL] = t4657->mX.mX[498UL];
    out->mLOG.mX[4049UL] = t4657->mX.mX[1355UL];
    out->mLOG.mX[4050UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    for (t2499 = 499UL; t2499 - 499UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 3552UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[4056UL] = t4657->mX.mX[1354UL];
    out->mLOG.mX[4057UL] = t4657->mX.mX[1356UL] * 1000.0;
    out->mLOG.mX[4058UL] = t4657->mX.mX[1355UL];
    out->mLOG.mX[4059UL] = zc_int183;
    out->mLOG.mX[4060UL] = t4657->mX.mX[1353UL];
    out->mLOG.mX[4061UL] = t4657->mX.mX[497UL];
    out->mLOG.mX[4062UL] = t4657->mX.mX[496UL];
    out->mLOG.mX[4063UL] = t4657->mX.mX[498UL];
    out->mLOG.mX[4064UL] = t4657->mX.mX[1353UL];
    out->mLOG.mX[4065UL] = t4657->mX.mX[1354UL];
    out->mLOG.mX[4066UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4067UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[4068UL] = t4657->mX.mX[498UL];
    out->mLOG.mX[4069UL] = BatteryPack_v2_ModuleAssembly4_Module18_Cell_1_electricalModel0;
    out->mLOG.mX[4070UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[4071UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3627 > 8.200000000000002E-8 ? t3627 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[499UL] * t4657->mX.mX[499UL] * 0.0 + t4657->mX.mX[500UL] * t4657->mX.mX[500UL] * 0.0) + t4657->mX.mX[501UL] * t4657->mX.mX[501UL] * 0.0) + t4657->mX.mX[502UL] * t4657->mX.mX[502UL] * 0.0) + t4657->mX.mX[503UL] * t4657->mX.mX[503UL] * 0.0) * 0.001;
    out->mLOG.mX[4072UL] = t4657->mX.mX[1355UL];
    out->mLOG.mX[4073UL] = t4657->mX.mX[1355UL];
    out->mLOG.mX[4074UL] = t4657->mX.mX[496UL];
    out->mLOG.mX[4075UL] = BatteryPack_v2_ModuleAssembly4_Module18_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[4076UL] = t4657->mX.mX[496UL];
    out->mLOG.mX[4077UL] = t4657->mX.mX[496UL];
    out->mLOG.mX[4078UL] = t4657->mX.mX[1356UL] * 1000.0;
    out->mLOG.mX[4079UL] = zc_int183;
    out->mLOG.mX[4080UL] = t4657->mX.mX[496UL];
    out->mLOG.mX[4081UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4082UL] = BatteryPack_v2_ModuleAssembly4_Module18_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[4083UL] = BatteryPack_v2_ModuleAssembly4_Module18_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[4084UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[4085UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4086UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[4087UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[4088UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[4089UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[4090UL] = t4657->mX.mX[496UL];
    out->mLOG.mX[4091UL] = BatteryPack_v2_ModuleAssembly4_Module18_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[4092UL] = t4657->mX.mX[496UL];
    out->mLOG.mX[4093UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4094UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[4095UL] = t4657->mX.mX[498UL];
    out->mLOG.mX[4096UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[4097UL] = 0.0;
    out->mLOG.mX[4098UL] = t4657->mX.mX[1355UL];
    out->mLOG.mX[4099UL] = t4657->mX.mX[1355UL];
    out->mLOG.mX[4100UL] = t4657->mX.mX[496UL];
    out->mLOG.mX[4101UL] = zc_int183;
    out->mLOG.mX[4102UL] = BatteryPack_v2_ModuleAssembly2_Module16_Cell_1_electricalModel3 - BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[4103UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4104UL] = t4657->mX.mX[504UL];
    out->mLOG.mX[4105UL] = t4657->mX.mX[504UL];
    out->mLOG.mX[4106UL] = t4657->mX.mX[504UL];
    out->mLOG.mX[4107UL] = t4657->mX.mX[504UL];
    out->mLOG.mX[4108UL] = t4657->mX.mX[505UL] * 0.00027777777777777778;
    out->mLOG.mX[4109UL] = t4657->mX.mX[504UL];
    out->mLOG.mX[4110UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4111UL] = zc_int388;
    out->mLOG.mX[4112UL] = t4657->mX.mX[506UL];
    out->mLOG.mX[4113UL] = t4657->mX.mX[506UL];
    out->mLOG.mX[4114UL] = t4657->mX.mX[1359UL];
    out->mLOG.mX[4115UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    for (t2499 = 507UL; t2499 - 507UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 3609UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[4121UL] = t4657->mX.mX[1358UL];
    out->mLOG.mX[4122UL] = t4657->mX.mX[1360UL] * 1000.0;
    out->mLOG.mX[4123UL] = t4657->mX.mX[1359UL];
    out->mLOG.mX[4124UL] = t3549;
    out->mLOG.mX[4125UL] = t4657->mX.mX[1357UL];
    out->mLOG.mX[4126UL] = t4657->mX.mX[505UL];
    out->mLOG.mX[4127UL] = t4657->mX.mX[504UL];
    out->mLOG.mX[4128UL] = t4657->mX.mX[506UL];
    out->mLOG.mX[4129UL] = t4657->mX.mX[1357UL];
    out->mLOG.mX[4130UL] = t4657->mX.mX[1358UL];
    out->mLOG.mX[4131UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4132UL] = zc_int388;
    out->mLOG.mX[4133UL] = t4657->mX.mX[506UL];
    out->mLOG.mX[4134UL] = BatteryPack_v2_ModuleAssembly4_Module19_Cell_1_electricalModel0;
    out->mLOG.mX[4135UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[4136UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3632 > 8.200000000000002E-8 ? t3632 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[507UL] * t4657->mX.mX[507UL] * 0.0 + t4657->mX.mX[508UL] * t4657->mX.mX[508UL] * 0.0) + t4657->mX.mX[509UL] * t4657->mX.mX[509UL] * 0.0) + t4657->mX.mX[510UL] * t4657->mX.mX[510UL] * 0.0) + t4657->mX.mX[511UL] * t4657->mX.mX[511UL] * 0.0) * 0.001;
    out->mLOG.mX[4137UL] = t4657->mX.mX[1359UL];
    out->mLOG.mX[4138UL] = t4657->mX.mX[1359UL];
    out->mLOG.mX[4139UL] = t4657->mX.mX[504UL];
    out->mLOG.mX[4140UL] = BatteryPack_v2_ModuleAssembly4_Module19_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[4141UL] = t4657->mX.mX[504UL];
    out->mLOG.mX[4142UL] = t4657->mX.mX[504UL];
    out->mLOG.mX[4143UL] = t4657->mX.mX[1360UL] * 1000.0;
    out->mLOG.mX[4144UL] = t3549;
    out->mLOG.mX[4145UL] = t4657->mX.mX[504UL];
    out->mLOG.mX[4146UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4147UL] = BatteryPack_v2_ModuleAssembly4_Module19_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[4148UL] = BatteryPack_v2_ModuleAssembly4_Module19_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[4149UL] = zc_int388;
    out->mLOG.mX[4150UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4151UL] = zc_int388;
    out->mLOG.mX[4152UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[4153UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[4154UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[4155UL] = t4657->mX.mX[504UL];
    out->mLOG.mX[4156UL] = BatteryPack_v2_ModuleAssembly4_Module19_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[4157UL] = t4657->mX.mX[504UL];
    out->mLOG.mX[4158UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4159UL] = zc_int388;
    out->mLOG.mX[4160UL] = t4657->mX.mX[506UL];
    out->mLOG.mX[4161UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[4162UL] = 0.0;
    out->mLOG.mX[4163UL] = t4657->mX.mX[1359UL];
    out->mLOG.mX[4164UL] = t4657->mX.mX[1359UL];
    out->mLOG.mX[4165UL] = t4657->mX.mX[504UL];
    out->mLOG.mX[4166UL] = t3549;
    out->mLOG.mX[4167UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel3 - zc_int388;
    out->mLOG.mX[4168UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4169UL] = t4657->mX.mX[512UL];
    out->mLOG.mX[4170UL] = t4657->mX.mX[512UL];
    out->mLOG.mX[4171UL] = t4657->mX.mX[512UL];
    out->mLOG.mX[4172UL] = t4657->mX.mX[512UL];
    out->mLOG.mX[4173UL] = t4657->mX.mX[513UL] * 0.00027777777777777778;
    out->mLOG.mX[4174UL] = t4657->mX.mX[512UL];
    out->mLOG.mX[4175UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4176UL] = zc_int387;
    out->mLOG.mX[4177UL] = t4657->mX.mX[514UL];
    out->mLOG.mX[4178UL] = t4657->mX.mX[514UL];
    out->mLOG.mX[4179UL] = t4657->mX.mX[1363UL];
    out->mLOG.mX[4180UL] = zc_int388;
    for (t2499 = 515UL; t2499 - 515UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 3666UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[4186UL] = t4657->mX.mX[1362UL];
    out->mLOG.mX[4187UL] = t4657->mX.mX[1364UL] * 1000.0;
    out->mLOG.mX[4188UL] = t4657->mX.mX[1363UL];
    out->mLOG.mX[4189UL] = intrm_sf_mf_7;
    out->mLOG.mX[4190UL] = t4657->mX.mX[1361UL];
    out->mLOG.mX[4191UL] = t4657->mX.mX[513UL];
    out->mLOG.mX[4192UL] = t4657->mX.mX[512UL];
    out->mLOG.mX[4193UL] = t4657->mX.mX[514UL];
    out->mLOG.mX[4194UL] = t4657->mX.mX[1361UL];
    out->mLOG.mX[4195UL] = t4657->mX.mX[1362UL];
    out->mLOG.mX[4196UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4197UL] = zc_int387;
    out->mLOG.mX[4198UL] = t4657->mX.mX[514UL];
    out->mLOG.mX[4199UL] = t3633;
    out->mLOG.mX[4200UL] = zc_int388;
    out->mLOG.mX[4201UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3637 > 8.200000000000002E-8 ? t3637 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[515UL] * t4657->mX.mX[515UL] * 0.0 + t4657->mX.mX[516UL] * t4657->mX.mX[516UL] * 0.0) + t4657->mX.mX[517UL] * t4657->mX.mX[517UL] * 0.0) + t4657->mX.mX[518UL] * t4657->mX.mX[518UL] * 0.0) + t4657->mX.mX[519UL] * t4657->mX.mX[519UL] * 0.0) * 0.001;
    out->mLOG.mX[4202UL] = t4657->mX.mX[1363UL];
    out->mLOG.mX[4203UL] = t4657->mX.mX[1363UL];
    out->mLOG.mX[4204UL] = t4657->mX.mX[512UL];
    out->mLOG.mX[4205UL] = BatteryPack_v2_ModuleAssembly4_Module20_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[4206UL] = t4657->mX.mX[512UL];
    out->mLOG.mX[4207UL] = t4657->mX.mX[512UL];
    out->mLOG.mX[4208UL] = t4657->mX.mX[1364UL] * 1000.0;
    out->mLOG.mX[4209UL] = intrm_sf_mf_7;
    out->mLOG.mX[4210UL] = t4657->mX.mX[512UL];
    out->mLOG.mX[4211UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4212UL] = BatteryPack_v2_ModuleAssembly4_Module20_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[4213UL] = BatteryPack_v2_ModuleAssembly4_Module20_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[4214UL] = zc_int387;
    out->mLOG.mX[4215UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4216UL] = zc_int387;
    out->mLOG.mX[4217UL] = zc_int388;
    out->mLOG.mX[4218UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[4219UL] = zc_int388;
    out->mLOG.mX[4220UL] = t4657->mX.mX[512UL];
    out->mLOG.mX[4221UL] = BatteryPack_v2_ModuleAssembly4_Module20_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[4222UL] = t4657->mX.mX[512UL];
    out->mLOG.mX[4223UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4224UL] = zc_int387;
    out->mLOG.mX[4225UL] = t4657->mX.mX[514UL];
    out->mLOG.mX[4226UL] = zc_int388;
    out->mLOG.mX[4227UL] = 0.0;
    out->mLOG.mX[4228UL] = t4657->mX.mX[1363UL];
    out->mLOG.mX[4229UL] = t4657->mX.mX[1363UL];
    out->mLOG.mX[4230UL] = t4657->mX.mX[512UL];
    out->mLOG.mX[4231UL] = intrm_sf_mf_7;
    out->mLOG.mX[4232UL] = zc_int388 - zc_int387;
    out->mLOG.mX[4233UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4234UL] = t4657->mX.mX[520UL];
    out->mLOG.mX[4235UL] = t4657->mX.mX[520UL];
    out->mLOG.mX[4236UL] = t4657->mX.mX[520UL];
    out->mLOG.mX[4237UL] = t4657->mX.mX[520UL];
    out->mLOG.mX[4238UL] = t4657->mX.mX[521UL] * 0.00027777777777777778;
    out->mLOG.mX[4239UL] = t4657->mX.mX[520UL];
    out->mLOG.mX[4240UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4241UL] = t3774;
    out->mLOG.mX[4242UL] = t4657->mX.mX[522UL];
    out->mLOG.mX[4243UL] = t4657->mX.mX[522UL];
    out->mLOG.mX[4244UL] = t4657->mX.mX[1367UL];
    out->mLOG.mX[4245UL] = zc_int387;
    for (t2499 = 523UL; t2499 - 523UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 3723UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[4251UL] = t4657->mX.mX[1366UL];
    out->mLOG.mX[4252UL] = t4657->mX.mX[1368UL] * 1000.0;
    out->mLOG.mX[4253UL] = t4657->mX.mX[1367UL];
    out->mLOG.mX[4254UL] = zc_int192;
    out->mLOG.mX[4255UL] = t4657->mX.mX[1365UL];
    out->mLOG.mX[4256UL] = t4657->mX.mX[521UL];
    out->mLOG.mX[4257UL] = t4657->mX.mX[520UL];
    out->mLOG.mX[4258UL] = t4657->mX.mX[522UL];
    out->mLOG.mX[4259UL] = t4657->mX.mX[1365UL];
    out->mLOG.mX[4260UL] = t4657->mX.mX[1366UL];
    out->mLOG.mX[4261UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4262UL] = t3774;
    out->mLOG.mX[4263UL] = t4657->mX.mX[522UL];
    out->mLOG.mX[4264UL] = BatteryPack_v2_ModuleAssembly4_Module21_Cell_1_electricalModel0;
    out->mLOG.mX[4265UL] = zc_int387;
    out->mLOG.mX[4266UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly4_Module21_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly4_Module21_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[523UL] * t4657->mX.mX[523UL] * 0.0 + t4657->mX.mX[524UL] * t4657->mX.mX[524UL] * 0.0) + t4657->mX.mX[525UL] * t4657->mX.mX[525UL] * 0.0) + t4657->mX.mX[526UL] * t4657->mX.mX[526UL] * 0.0) + t4657->mX.mX[527UL] * t4657->mX.mX[527UL] * 0.0) * 0.001;
    out->mLOG.mX[4267UL] = t4657->mX.mX[1367UL];
    out->mLOG.mX[4268UL] = t4657->mX.mX[1367UL];
    out->mLOG.mX[4269UL] = t4657->mX.mX[520UL];
    out->mLOG.mX[4270UL] = t3640 * 1000.0;
    out->mLOG.mX[4271UL] = t4657->mX.mX[520UL];
    out->mLOG.mX[4272UL] = t4657->mX.mX[520UL];
    out->mLOG.mX[4273UL] = t4657->mX.mX[1368UL] * 1000.0;
    out->mLOG.mX[4274UL] = zc_int192;
    out->mLOG.mX[4275UL] = t4657->mX.mX[520UL];
    out->mLOG.mX[4276UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4277UL] = BatteryPack_v2_ModuleAssembly4_Module21_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[4278UL] = BatteryPack_v2_ModuleAssembly4_Module21_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[4279UL] = t3774;
    out->mLOG.mX[4280UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4281UL] = t3774;
    out->mLOG.mX[4282UL] = zc_int387;
    out->mLOG.mX[4283UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[4284UL] = zc_int387;
    out->mLOG.mX[4285UL] = t4657->mX.mX[520UL];
    out->mLOG.mX[4286UL] = t3640 * -1000.0;
    out->mLOG.mX[4287UL] = t4657->mX.mX[520UL];
    out->mLOG.mX[4288UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4289UL] = t3774;
    out->mLOG.mX[4290UL] = t4657->mX.mX[522UL];
    out->mLOG.mX[4291UL] = zc_int387;
    out->mLOG.mX[4292UL] = 0.0;
    out->mLOG.mX[4293UL] = t4657->mX.mX[1367UL];
    out->mLOG.mX[4294UL] = t4657->mX.mX[1367UL];
    out->mLOG.mX[4295UL] = t4657->mX.mX[520UL];
    out->mLOG.mX[4296UL] = zc_int192;
    out->mLOG.mX[4297UL] = zc_int387 - t3774;
    out->mLOG.mX[4298UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4299UL] = t4657->mX.mX[528UL];
    out->mLOG.mX[4300UL] = t4657->mX.mX[528UL];
    out->mLOG.mX[4301UL] = t4657->mX.mX[528UL];
    out->mLOG.mX[4302UL] = t4657->mX.mX[528UL];
    out->mLOG.mX[4303UL] = t4657->mX.mX[529UL] * 0.00027777777777777778;
    out->mLOG.mX[4304UL] = t4657->mX.mX[528UL];
    out->mLOG.mX[4305UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4306UL] = zc_int385;
    out->mLOG.mX[4307UL] = t4657->mX.mX[530UL];
    out->mLOG.mX[4308UL] = t4657->mX.mX[530UL];
    out->mLOG.mX[4309UL] = t4657->mX.mX[1371UL];
    out->mLOG.mX[4310UL] = t3774;
    for (t2499 = 531UL; t2499 - 531UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 3780UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[4316UL] = t4657->mX.mX[1370UL];
    out->mLOG.mX[4317UL] = t4657->mX.mX[1372UL] * 1000.0;
    out->mLOG.mX[4318UL] = t4657->mX.mX[1371UL];
    out->mLOG.mX[4319UL] = zc_int195;
    out->mLOG.mX[4320UL] = t4657->mX.mX[1369UL];
    out->mLOG.mX[4321UL] = t4657->mX.mX[529UL];
    out->mLOG.mX[4322UL] = t4657->mX.mX[528UL];
    out->mLOG.mX[4323UL] = t4657->mX.mX[530UL];
    out->mLOG.mX[4324UL] = t4657->mX.mX[1369UL];
    out->mLOG.mX[4325UL] = t4657->mX.mX[1370UL];
    out->mLOG.mX[4326UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4327UL] = zc_int385;
    out->mLOG.mX[4328UL] = t4657->mX.mX[530UL];
    out->mLOG.mX[4329UL] = t3643;
    out->mLOG.mX[4330UL] = t3774;
    out->mLOG.mX[4331UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3647 > 8.200000000000002E-8 ? t3647 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[531UL] * t4657->mX.mX[531UL] * 0.0 + t4657->mX.mX[532UL] * t4657->mX.mX[532UL] * 0.0) + t4657->mX.mX[533UL] * t4657->mX.mX[533UL] * 0.0) + t4657->mX.mX[534UL] * t4657->mX.mX[534UL] * 0.0) + t4657->mX.mX[535UL] * t4657->mX.mX[535UL] * 0.0) * 0.001;
    out->mLOG.mX[4332UL] = t4657->mX.mX[1371UL];
    out->mLOG.mX[4333UL] = t4657->mX.mX[1371UL];
    out->mLOG.mX[4334UL] = t4657->mX.mX[528UL];
    out->mLOG.mX[4335UL] = BatteryPack_v2_ModuleAssembly4_Module22_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[4336UL] = t4657->mX.mX[528UL];
    out->mLOG.mX[4337UL] = t4657->mX.mX[528UL];
    out->mLOG.mX[4338UL] = t4657->mX.mX[1372UL] * 1000.0;
    out->mLOG.mX[4339UL] = zc_int195;
    out->mLOG.mX[4340UL] = t4657->mX.mX[528UL];
    out->mLOG.mX[4341UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4342UL] = BatteryPack_v2_ModuleAssembly4_Module22_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[4343UL] = BatteryPack_v2_ModuleAssembly4_Module22_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[4344UL] = zc_int385;
    out->mLOG.mX[4345UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4346UL] = zc_int385;
    out->mLOG.mX[4347UL] = t3774;
    out->mLOG.mX[4348UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[4349UL] = t3774;
    out->mLOG.mX[4350UL] = t4657->mX.mX[528UL];
    out->mLOG.mX[4351UL] = BatteryPack_v2_ModuleAssembly4_Module22_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[4352UL] = t4657->mX.mX[528UL];
    out->mLOG.mX[4353UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4354UL] = zc_int385;
    out->mLOG.mX[4355UL] = t4657->mX.mX[530UL];
    out->mLOG.mX[4356UL] = t3774;
    out->mLOG.mX[4357UL] = 0.0;
    out->mLOG.mX[4358UL] = t4657->mX.mX[1371UL];
    out->mLOG.mX[4359UL] = t4657->mX.mX[1371UL];
    out->mLOG.mX[4360UL] = t4657->mX.mX[528UL];
    out->mLOG.mX[4361UL] = zc_int195;
    out->mLOG.mX[4362UL] = t3774 - zc_int385;
    out->mLOG.mX[4363UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4364UL] = t4657->mX.mX[536UL];
    out->mLOG.mX[4365UL] = t4657->mX.mX[536UL];
    out->mLOG.mX[4366UL] = t4657->mX.mX[536UL];
    out->mLOG.mX[4367UL] = t4657->mX.mX[536UL];
    out->mLOG.mX[4368UL] = t4657->mX.mX[537UL] * 0.00027777777777777778;
    out->mLOG.mX[4369UL] = t4657->mX.mX[536UL];
    out->mLOG.mX[4370UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4371UL] = t3769;
    out->mLOG.mX[4372UL] = t4657->mX.mX[538UL];
    out->mLOG.mX[4373UL] = t4657->mX.mX[538UL];
    out->mLOG.mX[4374UL] = t4657->mX.mX[1375UL];
    out->mLOG.mX[4375UL] = zc_int385;
    for (t2499 = 539UL; t2499 - 539UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 3837UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[4381UL] = t4657->mX.mX[1374UL];
    out->mLOG.mX[4382UL] = t4657->mX.mX[1376UL] * 1000.0;
    out->mLOG.mX[4383UL] = t4657->mX.mX[1375UL];
    out->mLOG.mX[4384UL] = t3554;
    out->mLOG.mX[4385UL] = t4657->mX.mX[1373UL];
    out->mLOG.mX[4386UL] = t4657->mX.mX[537UL];
    out->mLOG.mX[4387UL] = t4657->mX.mX[536UL];
    out->mLOG.mX[4388UL] = t4657->mX.mX[538UL];
    out->mLOG.mX[4389UL] = t4657->mX.mX[1373UL];
    out->mLOG.mX[4390UL] = t4657->mX.mX[1374UL];
    out->mLOG.mX[4391UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4392UL] = t3769;
    out->mLOG.mX[4393UL] = t4657->mX.mX[538UL];
    out->mLOG.mX[4394UL] = BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel0;
    out->mLOG.mX[4395UL] = zc_int385;
    out->mLOG.mX[4396UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3652 > 8.200000000000002E-8 ? t3652 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[539UL] * t4657->mX.mX[539UL] * 0.0 + t4657->mX.mX[540UL] * t4657->mX.mX[540UL] * 0.0) + t4657->mX.mX[541UL] * t4657->mX.mX[541UL] * 0.0) + t4657->mX.mX[542UL] * t4657->mX.mX[542UL] * 0.0) + t4657->mX.mX[543UL] * t4657->mX.mX[543UL] * 0.0) * 0.001;
    out->mLOG.mX[4397UL] = t4657->mX.mX[1375UL];
    out->mLOG.mX[4398UL] = t4657->mX.mX[1375UL];
    out->mLOG.mX[4399UL] = t4657->mX.mX[536UL];
    out->mLOG.mX[4400UL] = BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[4401UL] = t4657->mX.mX[536UL];
    out->mLOG.mX[4402UL] = t4657->mX.mX[536UL];
    out->mLOG.mX[4403UL] = t4657->mX.mX[1376UL] * 1000.0;
    out->mLOG.mX[4404UL] = t3554;
    out->mLOG.mX[4405UL] = t4657->mX.mX[536UL];
    out->mLOG.mX[4406UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4407UL] = BatteryPack_v2_ModuleAssembly4_Module23_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[4408UL] = BatteryPack_v2_ModuleAssembly4_Module23_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[4409UL] = t3769;
    out->mLOG.mX[4410UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4411UL] = t3769;
    out->mLOG.mX[4412UL] = zc_int385;
    out->mLOG.mX[4413UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[4414UL] = zc_int385;
    out->mLOG.mX[4415UL] = t4657->mX.mX[536UL];
    out->mLOG.mX[4416UL] = BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[4417UL] = t4657->mX.mX[536UL];
    out->mLOG.mX[4418UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4419UL] = t3769;
    out->mLOG.mX[4420UL] = t4657->mX.mX[538UL];
    out->mLOG.mX[4421UL] = zc_int385;
    out->mLOG.mX[4422UL] = 0.0;
    out->mLOG.mX[4423UL] = t4657->mX.mX[1375UL];
    out->mLOG.mX[4424UL] = t4657->mX.mX[1375UL];
    out->mLOG.mX[4425UL] = t4657->mX.mX[536UL];
    out->mLOG.mX[4426UL] = t3554;
    out->mLOG.mX[4427UL] = zc_int385 - t3769;
    out->mLOG.mX[4428UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4429UL] = t4657->mX.mX[544UL];
    out->mLOG.mX[4430UL] = t4657->mX.mX[544UL];
    out->mLOG.mX[4431UL] = t4657->mX.mX[544UL];
    out->mLOG.mX[4432UL] = t4657->mX.mX[544UL];
    out->mLOG.mX[4433UL] = t4657->mX.mX[545UL] * 0.00027777777777777778;
    out->mLOG.mX[4434UL] = t4657->mX.mX[544UL];
    out->mLOG.mX[4435UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4436UL] = intrm_sf_mf_102;
    out->mLOG.mX[4437UL] = t4657->mX.mX[546UL];
    out->mLOG.mX[4438UL] = t4657->mX.mX[546UL];
    out->mLOG.mX[4439UL] = t4657->mX.mX[1379UL];
    out->mLOG.mX[4440UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    for (t2499 = 547UL; t2499 - 547UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 3894UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[4446UL] = t4657->mX.mX[1378UL];
    out->mLOG.mX[4447UL] = t4657->mX.mX[1380UL] * 1000.0;
    out->mLOG.mX[4448UL] = t4657->mX.mX[1379UL];
    out->mLOG.mX[4449UL] = zc_int134;
    out->mLOG.mX[4450UL] = t4657->mX.mX[1377UL];
    out->mLOG.mX[4451UL] = t4657->mX.mX[545UL];
    out->mLOG.mX[4452UL] = t4657->mX.mX[544UL];
    out->mLOG.mX[4453UL] = t4657->mX.mX[546UL];
    out->mLOG.mX[4454UL] = t4657->mX.mX[1377UL];
    out->mLOG.mX[4455UL] = t4657->mX.mX[1378UL];
    out->mLOG.mX[4456UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4457UL] = intrm_sf_mf_102;
    out->mLOG.mX[4458UL] = t4657->mX.mX[546UL];
    out->mLOG.mX[4459UL] = t3653;
    out->mLOG.mX[4460UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mLOG.mX[4461UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly4_Module_1_1_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly4_Module_1_1_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[547UL] * t4657->mX.mX[547UL] * 0.0 + t4657->mX.mX[548UL] * t4657->mX.mX[548UL] * 0.0) + t4657->mX.mX[549UL] * t4657->mX.mX[549UL] * 0.0) + t4657->mX.mX[550UL] * t4657->mX.mX[550UL] * 0.0) + t4657->mX.mX[551UL] * t4657->mX.mX[551UL] * 0.0) * 0.001;
    out->mLOG.mX[4462UL] = t4657->mX.mX[1379UL];
    out->mLOG.mX[4463UL] = t4657->mX.mX[1379UL];
    out->mLOG.mX[4464UL] = t4657->mX.mX[544UL];
    out->mLOG.mX[4465UL] = t3655 * 1000.0;
    out->mLOG.mX[4466UL] = t4657->mX.mX[544UL];
    out->mLOG.mX[4467UL] = t4657->mX.mX[544UL];
    out->mLOG.mX[4468UL] = t4657->mX.mX[1380UL] * 1000.0;
    out->mLOG.mX[4469UL] = zc_int134;
    out->mLOG.mX[4470UL] = t4657->mX.mX[544UL];
    out->mLOG.mX[4471UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4472UL] = BatteryPack_v2_ModuleAssembly4_Module_1_1_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[4473UL] = BatteryPack_v2_ModuleAssembly4_Module_1_1_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[4474UL] = intrm_sf_mf_102;
    out->mLOG.mX[4475UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4476UL] = intrm_sf_mf_102;
    out->mLOG.mX[4477UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mLOG.mX[4478UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[4479UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mLOG.mX[4480UL] = t4657->mX.mX[544UL];
    out->mLOG.mX[4481UL] = t3655 * -1000.0;
    out->mLOG.mX[4482UL] = t4657->mX.mX[544UL];
    out->mLOG.mX[4483UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4484UL] = intrm_sf_mf_102;
    out->mLOG.mX[4485UL] = t4657->mX.mX[546UL];
    out->mLOG.mX[4486UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mLOG.mX[4487UL] = 0.0;
    out->mLOG.mX[4488UL] = t4657->mX.mX[1379UL];
    out->mLOG.mX[4489UL] = t4657->mX.mX[1379UL];
    out->mLOG.mX[4490UL] = t4657->mX.mX[544UL];
    out->mLOG.mX[4491UL] = zc_int134;
    out->mLOG.mX[4492UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3 - intrm_sf_mf_102;
    out->mLOG.mX[4493UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_electricalModel3;
    out->mLOG.mX[4494UL] = t3769;
    out->mLOG.mX[4495UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4496UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4497UL] = t4657->mX.mX[552UL];
    out->mLOG.mX[4498UL] = t4657->mX.mX[552UL];
    out->mLOG.mX[4499UL] = t4657->mX.mX[552UL];
    out->mLOG.mX[4500UL] = t4657->mX.mX[552UL];
    out->mLOG.mX[4501UL] = t4657->mX.mX[553UL] * 0.00027777777777777778;
    out->mLOG.mX[4502UL] = t4657->mX.mX[552UL];
    out->mLOG.mX[4503UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4504UL] = t3764;
    out->mLOG.mX[4505UL] = t4657->mX.mX[554UL];
    out->mLOG.mX[4506UL] = t4657->mX.mX[554UL];
    out->mLOG.mX[4507UL] = t4657->mX.mX[1383UL];
    out->mLOG.mX[4508UL] = zc_int383;
    for (t2499 = 555UL; t2499 - 555UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 3954UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[4514UL] = t4657->mX.mX[1382UL];
    out->mLOG.mX[4515UL] = t4657->mX.mX[1384UL] * 1000.0;
    out->mLOG.mX[4516UL] = t4657->mX.mX[1383UL];
    out->mLOG.mX[4517UL] = zc_int202;
    out->mLOG.mX[4518UL] = t4657->mX.mX[1381UL];
    out->mLOG.mX[4519UL] = t4657->mX.mX[553UL];
    out->mLOG.mX[4520UL] = t4657->mX.mX[552UL];
    out->mLOG.mX[4521UL] = t4657->mX.mX[554UL];
    out->mLOG.mX[4522UL] = t4657->mX.mX[1381UL];
    out->mLOG.mX[4523UL] = t4657->mX.mX[1382UL];
    out->mLOG.mX[4524UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4525UL] = t3764;
    out->mLOG.mX[4526UL] = t4657->mX.mX[554UL];
    out->mLOG.mX[4527UL] = t3658;
    out->mLOG.mX[4528UL] = zc_int383;
    out->mLOG.mX[4529UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly5_Module02_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly5_Module02_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[555UL] * t4657->mX.mX[555UL] * 0.0 + t4657->mX.mX[556UL] * t4657->mX.mX[556UL] * 0.0) + t4657->mX.mX[557UL] * t4657->mX.mX[557UL] * 0.0) + t4657->mX.mX[558UL] * t4657->mX.mX[558UL] * 0.0) + t4657->mX.mX[559UL] * t4657->mX.mX[559UL] * 0.0) * 0.001;
    out->mLOG.mX[4530UL] = t4657->mX.mX[1383UL];
    out->mLOG.mX[4531UL] = t4657->mX.mX[1383UL];
    out->mLOG.mX[4532UL] = t4657->mX.mX[552UL];
    out->mLOG.mX[4533UL] = t3660 * 1000.0;
    out->mLOG.mX[4534UL] = t4657->mX.mX[552UL];
    out->mLOG.mX[4535UL] = t4657->mX.mX[552UL];
    out->mLOG.mX[4536UL] = t4657->mX.mX[1384UL] * 1000.0;
    out->mLOG.mX[4537UL] = zc_int202;
    out->mLOG.mX[4538UL] = t4657->mX.mX[552UL];
    out->mLOG.mX[4539UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4540UL] = BatteryPack_v2_ModuleAssembly5_Module02_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[4541UL] = BatteryPack_v2_ModuleAssembly5_Module02_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[4542UL] = t3764;
    out->mLOG.mX[4543UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4544UL] = t3764;
    out->mLOG.mX[4545UL] = zc_int383;
    out->mLOG.mX[4546UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[4547UL] = zc_int383;
    out->mLOG.mX[4548UL] = t4657->mX.mX[552UL];
    out->mLOG.mX[4549UL] = t3660 * -1000.0;
    out->mLOG.mX[4550UL] = t4657->mX.mX[552UL];
    out->mLOG.mX[4551UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4552UL] = t3764;
    out->mLOG.mX[4553UL] = t4657->mX.mX[554UL];
    out->mLOG.mX[4554UL] = zc_int383;
    out->mLOG.mX[4555UL] = 0.0;
    out->mLOG.mX[4556UL] = t4657->mX.mX[1383UL];
    out->mLOG.mX[4557UL] = t4657->mX.mX[1383UL];
    out->mLOG.mX[4558UL] = t4657->mX.mX[552UL];
    out->mLOG.mX[4559UL] = zc_int202;
    out->mLOG.mX[4560UL] = zc_int383 - t3764;
    out->mLOG.mX[4561UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4562UL] = t4657->mX.mX[560UL];
    out->mLOG.mX[4563UL] = t4657->mX.mX[560UL];
    out->mLOG.mX[4564UL] = t4657->mX.mX[560UL];
    out->mLOG.mX[4565UL] = t4657->mX.mX[560UL];
    out->mLOG.mX[4566UL] = t4657->mX.mX[561UL] * 0.00027777777777777778;
    out->mLOG.mX[4567UL] = t4657->mX.mX[560UL];
    out->mLOG.mX[4568UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4569UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[4570UL] = t4657->mX.mX[562UL];
    out->mLOG.mX[4571UL] = t4657->mX.mX[562UL];
    out->mLOG.mX[4572UL] = t4657->mX.mX[1387UL];
    out->mLOG.mX[4573UL] = t3764;
    for (t2499 = 563UL; t2499 - 563UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 4011UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[4579UL] = t4657->mX.mX[1386UL];
    out->mLOG.mX[4580UL] = t4657->mX.mX[1388UL] * 1000.0;
    out->mLOG.mX[4581UL] = t4657->mX.mX[1387UL];
    out->mLOG.mX[4582UL] = t3564;
    out->mLOG.mX[4583UL] = t4657->mX.mX[1385UL];
    out->mLOG.mX[4584UL] = t4657->mX.mX[561UL];
    out->mLOG.mX[4585UL] = t4657->mX.mX[560UL];
    out->mLOG.mX[4586UL] = t4657->mX.mX[562UL];
    out->mLOG.mX[4587UL] = t4657->mX.mX[1385UL];
    out->mLOG.mX[4588UL] = t4657->mX.mX[1386UL];
    out->mLOG.mX[4589UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4590UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[4591UL] = t4657->mX.mX[562UL];
    out->mLOG.mX[4592UL] = BatteryPack_v2_ModuleAssembly5_Module03_Cell_1_electricalModel0;
    out->mLOG.mX[4593UL] = t3764;
    out->mLOG.mX[4594UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly5_Module03_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly5_Module03_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[563UL] * t4657->mX.mX[563UL] * 0.0 + t4657->mX.mX[564UL] * t4657->mX.mX[564UL] * 0.0) + t4657->mX.mX[565UL] * t4657->mX.mX[565UL] * 0.0) + t4657->mX.mX[566UL] * t4657->mX.mX[566UL] * 0.0) + t4657->mX.mX[567UL] * t4657->mX.mX[567UL] * 0.0) * 0.001;
    out->mLOG.mX[4595UL] = t4657->mX.mX[1387UL];
    out->mLOG.mX[4596UL] = t4657->mX.mX[1387UL];
    out->mLOG.mX[4597UL] = t4657->mX.mX[560UL];
    out->mLOG.mX[4598UL] = BatteryPack_v2_ModuleAssembly5_Module03_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[4599UL] = t4657->mX.mX[560UL];
    out->mLOG.mX[4600UL] = t4657->mX.mX[560UL];
    out->mLOG.mX[4601UL] = t4657->mX.mX[1388UL] * 1000.0;
    out->mLOG.mX[4602UL] = t3564;
    out->mLOG.mX[4603UL] = t4657->mX.mX[560UL];
    out->mLOG.mX[4604UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4605UL] = BatteryPack_v2_ModuleAssembly5_Module03_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[4606UL] = BatteryPack_v2_ModuleAssembly5_Module03_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[4607UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[4608UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4609UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[4610UL] = t3764;
    out->mLOG.mX[4611UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[4612UL] = t3764;
    out->mLOG.mX[4613UL] = t4657->mX.mX[560UL];
    out->mLOG.mX[4614UL] = BatteryPack_v2_ModuleAssembly5_Module03_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[4615UL] = t4657->mX.mX[560UL];
    out->mLOG.mX[4616UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4617UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[4618UL] = t4657->mX.mX[562UL];
    out->mLOG.mX[4619UL] = t3764;
    out->mLOG.mX[4620UL] = 0.0;
    out->mLOG.mX[4621UL] = t4657->mX.mX[1387UL];
    out->mLOG.mX[4622UL] = t4657->mX.mX[1387UL];
    out->mLOG.mX[4623UL] = t4657->mX.mX[560UL];
    out->mLOG.mX[4624UL] = t3564;
    out->mLOG.mX[4625UL] = t3764 - BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[4626UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4627UL] = t4657->mX.mX[568UL];
    out->mLOG.mX[4628UL] = t4657->mX.mX[568UL];
    out->mLOG.mX[4629UL] = t4657->mX.mX[568UL];
    out->mLOG.mX[4630UL] = t4657->mX.mX[568UL];
    out->mLOG.mX[4631UL] = t4657->mX.mX[569UL] * 0.00027777777777777778;
    out->mLOG.mX[4632UL] = t4657->mX.mX[568UL];
    out->mLOG.mX[4633UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4634UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    out->mLOG.mX[4635UL] = t4657->mX.mX[570UL];
    out->mLOG.mX[4636UL] = t4657->mX.mX[570UL];
    out->mLOG.mX[4637UL] = t4657->mX.mX[1391UL];
    out->mLOG.mX[4638UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    for (t2499 = 571UL; t2499 - 571UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 4068UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[4644UL] = t4657->mX.mX[1390UL];
    out->mLOG.mX[4645UL] = t4657->mX.mX[1392UL] * 1000.0;
    out->mLOG.mX[4646UL] = t4657->mX.mX[1391UL];
    out->mLOG.mX[4647UL] = zc_int212;
    out->mLOG.mX[4648UL] = t4657->mX.mX[1389UL];
    out->mLOG.mX[4649UL] = t4657->mX.mX[569UL];
    out->mLOG.mX[4650UL] = t4657->mX.mX[568UL];
    out->mLOG.mX[4651UL] = t4657->mX.mX[570UL];
    out->mLOG.mX[4652UL] = t4657->mX.mX[1389UL];
    out->mLOG.mX[4653UL] = t4657->mX.mX[1390UL];
    out->mLOG.mX[4654UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4655UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    out->mLOG.mX[4656UL] = t4657->mX.mX[570UL];
    out->mLOG.mX[4657UL] = t3668;
    out->mLOG.mX[4658UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[4659UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3672 > 8.200000000000002E-8 ? t3672 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[571UL] * t4657->mX.mX[571UL] * 0.0 + t4657->mX.mX[572UL] * t4657->mX.mX[572UL] * 0.0) + t4657->mX.mX[573UL] * t4657->mX.mX[573UL] * 0.0) + t4657->mX.mX[574UL] * t4657->mX.mX[574UL] * 0.0) + t4657->mX.mX[575UL] * t4657->mX.mX[575UL] * 0.0) * 0.001;
    out->mLOG.mX[4660UL] = t4657->mX.mX[1391UL];
    out->mLOG.mX[4661UL] = t4657->mX.mX[1391UL];
    out->mLOG.mX[4662UL] = t4657->mX.mX[568UL];
    out->mLOG.mX[4663UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[4664UL] = t4657->mX.mX[568UL];
    out->mLOG.mX[4665UL] = t4657->mX.mX[568UL];
    out->mLOG.mX[4666UL] = t4657->mX.mX[1392UL] * 1000.0;
    out->mLOG.mX[4667UL] = zc_int212;
    out->mLOG.mX[4668UL] = t4657->mX.mX[568UL];
    out->mLOG.mX[4669UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4670UL] = BatteryPack_v2_ModuleAssembly5_Module04_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[4671UL] = BatteryPack_v2_ModuleAssembly5_Module04_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[4672UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    out->mLOG.mX[4673UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4674UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    out->mLOG.mX[4675UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[4676UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[4677UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[4678UL] = t4657->mX.mX[568UL];
    out->mLOG.mX[4679UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[4680UL] = t4657->mX.mX[568UL];
    out->mLOG.mX[4681UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4682UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    out->mLOG.mX[4683UL] = t4657->mX.mX[570UL];
    out->mLOG.mX[4684UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[4685UL] = 0.0;
    out->mLOG.mX[4686UL] = t4657->mX.mX[1391UL];
    out->mLOG.mX[4687UL] = t4657->mX.mX[1391UL];
    out->mLOG.mX[4688UL] = t4657->mX.mX[568UL];
    out->mLOG.mX[4689UL] = zc_int212;
    out->mLOG.mX[4690UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel3 - BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    out->mLOG.mX[4691UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4692UL] = t4657->mX.mX[576UL];
    out->mLOG.mX[4693UL] = t4657->mX.mX[576UL];
    out->mLOG.mX[4694UL] = t4657->mX.mX[576UL];
    out->mLOG.mX[4695UL] = t4657->mX.mX[576UL];
    out->mLOG.mX[4696UL] = t4657->mX.mX[577UL] * 0.00027777777777777778;
    out->mLOG.mX[4697UL] = t4657->mX.mX[576UL];
    out->mLOG.mX[4698UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4699UL] = intrm_sf_mf_89;
    out->mLOG.mX[4700UL] = t4657->mX.mX[578UL];
    out->mLOG.mX[4701UL] = t4657->mX.mX[578UL];
    out->mLOG.mX[4702UL] = t4657->mX.mX[1395UL];
    out->mLOG.mX[4703UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    for (t2499 = 579UL; t2499 - 579UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 4125UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[4709UL] = t4657->mX.mX[1394UL];
    out->mLOG.mX[4710UL] = t4657->mX.mX[1396UL] * 1000.0;
    out->mLOG.mX[4711UL] = t4657->mX.mX[1395UL];
    out->mLOG.mX[4712UL] = t3569;
    out->mLOG.mX[4713UL] = t4657->mX.mX[1393UL];
    out->mLOG.mX[4714UL] = t4657->mX.mX[577UL];
    out->mLOG.mX[4715UL] = t4657->mX.mX[576UL];
    out->mLOG.mX[4716UL] = t4657->mX.mX[578UL];
    out->mLOG.mX[4717UL] = t4657->mX.mX[1393UL];
    out->mLOG.mX[4718UL] = t4657->mX.mX[1394UL];
    out->mLOG.mX[4719UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4720UL] = intrm_sf_mf_89;
    out->mLOG.mX[4721UL] = t4657->mX.mX[578UL];
    out->mLOG.mX[4722UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel0;
    out->mLOG.mX[4723UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    out->mLOG.mX[4724UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3677 > 8.200000000000002E-8 ? t3677 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[579UL] * t4657->mX.mX[579UL] * 0.0 + t4657->mX.mX[580UL] * t4657->mX.mX[580UL] * 0.0) + t4657->mX.mX[581UL] * t4657->mX.mX[581UL] * 0.0) + t4657->mX.mX[582UL] * t4657->mX.mX[582UL] * 0.0) + t4657->mX.mX[583UL] * t4657->mX.mX[583UL] * 0.0) * 0.001;
    out->mLOG.mX[4725UL] = t4657->mX.mX[1395UL];
    out->mLOG.mX[4726UL] = t4657->mX.mX[1395UL];
    out->mLOG.mX[4727UL] = t4657->mX.mX[576UL];
    out->mLOG.mX[4728UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[4729UL] = t4657->mX.mX[576UL];
    out->mLOG.mX[4730UL] = t4657->mX.mX[576UL];
    out->mLOG.mX[4731UL] = t4657->mX.mX[1396UL] * 1000.0;
    out->mLOG.mX[4732UL] = t3569;
    out->mLOG.mX[4733UL] = t4657->mX.mX[576UL];
    out->mLOG.mX[4734UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4735UL] = BatteryPack_v2_ModuleAssembly5_Module05_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[4736UL] = BatteryPack_v2_ModuleAssembly5_Module05_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[4737UL] = intrm_sf_mf_89;
    out->mLOG.mX[4738UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4739UL] = intrm_sf_mf_89;
    out->mLOG.mX[4740UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    out->mLOG.mX[4741UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[4742UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    out->mLOG.mX[4743UL] = t4657->mX.mX[576UL];
    out->mLOG.mX[4744UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[4745UL] = t4657->mX.mX[576UL];
    out->mLOG.mX[4746UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4747UL] = intrm_sf_mf_89;
    out->mLOG.mX[4748UL] = t4657->mX.mX[578UL];
    out->mLOG.mX[4749UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3;
    out->mLOG.mX[4750UL] = 0.0;
    out->mLOG.mX[4751UL] = t4657->mX.mX[1395UL];
    out->mLOG.mX[4752UL] = t4657->mX.mX[1395UL];
    out->mLOG.mX[4753UL] = t4657->mX.mX[576UL];
    out->mLOG.mX[4754UL] = t3569;
    out->mLOG.mX[4755UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_electricalModel3 - intrm_sf_mf_89;
    out->mLOG.mX[4756UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4757UL] = t4657->mX.mX[584UL];
    out->mLOG.mX[4758UL] = t4657->mX.mX[584UL];
    out->mLOG.mX[4759UL] = t4657->mX.mX[584UL];
    out->mLOG.mX[4760UL] = t4657->mX.mX[584UL];
    out->mLOG.mX[4761UL] = t4657->mX.mX[585UL] * 0.00027777777777777778;
    out->mLOG.mX[4762UL] = t4657->mX.mX[584UL];
    out->mLOG.mX[4763UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4764UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[4765UL] = t4657->mX.mX[586UL];
    out->mLOG.mX[4766UL] = t4657->mX.mX[586UL];
    out->mLOG.mX[4767UL] = t4657->mX.mX[1399UL];
    out->mLOG.mX[4768UL] = intrm_sf_mf_89;
    for (t2499 = 587UL; t2499 - 587UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 4182UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[4774UL] = t4657->mX.mX[1398UL];
    out->mLOG.mX[4775UL] = t4657->mX.mX[1400UL] * 1000.0;
    out->mLOG.mX[4776UL] = t4657->mX.mX[1399UL];
    out->mLOG.mX[4777UL] = zc_int218;
    out->mLOG.mX[4778UL] = t4657->mX.mX[1397UL];
    out->mLOG.mX[4779UL] = t4657->mX.mX[585UL];
    out->mLOG.mX[4780UL] = t4657->mX.mX[584UL];
    out->mLOG.mX[4781UL] = t4657->mX.mX[586UL];
    out->mLOG.mX[4782UL] = t4657->mX.mX[1397UL];
    out->mLOG.mX[4783UL] = t4657->mX.mX[1398UL];
    out->mLOG.mX[4784UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4785UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[4786UL] = t4657->mX.mX[586UL];
    out->mLOG.mX[4787UL] = t3678;
    out->mLOG.mX[4788UL] = intrm_sf_mf_89;
    out->mLOG.mX[4789UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3682 > 8.200000000000002E-8 ? t3682 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[587UL] * t4657->mX.mX[587UL] * 0.0 + t4657->mX.mX[588UL] * t4657->mX.mX[588UL] * 0.0) + t4657->mX.mX[589UL] * t4657->mX.mX[589UL] * 0.0) + t4657->mX.mX[590UL] * t4657->mX.mX[590UL] * 0.0) + t4657->mX.mX[591UL] * t4657->mX.mX[591UL] * 0.0) * 0.001;
    out->mLOG.mX[4790UL] = t4657->mX.mX[1399UL];
    out->mLOG.mX[4791UL] = t4657->mX.mX[1399UL];
    out->mLOG.mX[4792UL] = t4657->mX.mX[584UL];
    out->mLOG.mX[4793UL] = t3680 * 1000.0;
    out->mLOG.mX[4794UL] = t4657->mX.mX[584UL];
    out->mLOG.mX[4795UL] = t4657->mX.mX[584UL];
    out->mLOG.mX[4796UL] = t4657->mX.mX[1400UL] * 1000.0;
    out->mLOG.mX[4797UL] = zc_int218;
    out->mLOG.mX[4798UL] = t4657->mX.mX[584UL];
    out->mLOG.mX[4799UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4800UL] = BatteryPack_v2_ModuleAssembly5_Module06_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[4801UL] = BatteryPack_v2_ModuleAssembly5_Module06_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[4802UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[4803UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4804UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[4805UL] = intrm_sf_mf_89;
    out->mLOG.mX[4806UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[4807UL] = intrm_sf_mf_89;
    out->mLOG.mX[4808UL] = t4657->mX.mX[584UL];
    out->mLOG.mX[4809UL] = t3680 * -1000.0;
    out->mLOG.mX[4810UL] = t4657->mX.mX[584UL];
    out->mLOG.mX[4811UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4812UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[4813UL] = t4657->mX.mX[586UL];
    out->mLOG.mX[4814UL] = intrm_sf_mf_89;
    out->mLOG.mX[4815UL] = 0.0;
    out->mLOG.mX[4816UL] = t4657->mX.mX[1399UL];
    out->mLOG.mX[4817UL] = t4657->mX.mX[1399UL];
    out->mLOG.mX[4818UL] = t4657->mX.mX[584UL];
    out->mLOG.mX[4819UL] = zc_int218;
    out->mLOG.mX[4820UL] = intrm_sf_mf_89 - BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[4821UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4822UL] = t4657->mX.mX[592UL];
    out->mLOG.mX[4823UL] = t4657->mX.mX[592UL];
    out->mLOG.mX[4824UL] = t4657->mX.mX[592UL];
    out->mLOG.mX[4825UL] = t4657->mX.mX[592UL];
    out->mLOG.mX[4826UL] = t4657->mX.mX[593UL] * 0.00027777777777777778;
    out->mLOG.mX[4827UL] = t4657->mX.mX[592UL];
    out->mLOG.mX[4828UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4829UL] = t3754;
    out->mLOG.mX[4830UL] = t4657->mX.mX[594UL];
    out->mLOG.mX[4831UL] = t4657->mX.mX[594UL];
    out->mLOG.mX[4832UL] = t4657->mX.mX[1403UL];
    out->mLOG.mX[4833UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    for (t2499 = 595UL; t2499 - 595UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 4239UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[4839UL] = t4657->mX.mX[1402UL];
    out->mLOG.mX[4840UL] = t4657->mX.mX[1404UL] * 1000.0;
    out->mLOG.mX[4841UL] = t4657->mX.mX[1403UL];
    out->mLOG.mX[4842UL] = t3354;
    out->mLOG.mX[4843UL] = t4657->mX.mX[1401UL];
    out->mLOG.mX[4844UL] = t4657->mX.mX[593UL];
    out->mLOG.mX[4845UL] = t4657->mX.mX[592UL];
    out->mLOG.mX[4846UL] = t4657->mX.mX[594UL];
    out->mLOG.mX[4847UL] = t4657->mX.mX[1401UL];
    out->mLOG.mX[4848UL] = t4657->mX.mX[1402UL];
    out->mLOG.mX[4849UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4850UL] = t3754;
    out->mLOG.mX[4851UL] = t4657->mX.mX[594UL];
    out->mLOG.mX[4852UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel0;
    out->mLOG.mX[4853UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[4854UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3687 > 8.200000000000002E-8 ? t3687 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[595UL] * t4657->mX.mX[595UL] * 0.0 + t4657->mX.mX[596UL] * t4657->mX.mX[596UL] * 0.0) + t4657->mX.mX[597UL] * t4657->mX.mX[597UL] * 0.0) + t4657->mX.mX[598UL] * t4657->mX.mX[598UL] * 0.0) + t4657->mX.mX[599UL] * t4657->mX.mX[599UL] * 0.0) * 0.001;
    out->mLOG.mX[4855UL] = t4657->mX.mX[1403UL];
    out->mLOG.mX[4856UL] = t4657->mX.mX[1403UL];
    out->mLOG.mX[4857UL] = t4657->mX.mX[592UL];
    out->mLOG.mX[4858UL] = t3685 * 1000.0;
    out->mLOG.mX[4859UL] = t4657->mX.mX[592UL];
    out->mLOG.mX[4860UL] = t4657->mX.mX[592UL];
    out->mLOG.mX[4861UL] = t4657->mX.mX[1404UL] * 1000.0;
    out->mLOG.mX[4862UL] = t3354;
    out->mLOG.mX[4863UL] = t4657->mX.mX[592UL];
    out->mLOG.mX[4864UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4865UL] = BatteryPack_v2_ModuleAssembly5_Module07_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[4866UL] = BatteryPack_v2_ModuleAssembly5_Module07_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[4867UL] = t3754;
    out->mLOG.mX[4868UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4869UL] = t3754;
    out->mLOG.mX[4870UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[4871UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[4872UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[4873UL] = t4657->mX.mX[592UL];
    out->mLOG.mX[4874UL] = t3685 * -1000.0;
    out->mLOG.mX[4875UL] = t4657->mX.mX[592UL];
    out->mLOG.mX[4876UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4877UL] = t3754;
    out->mLOG.mX[4878UL] = t4657->mX.mX[594UL];
    out->mLOG.mX[4879UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3;
    out->mLOG.mX[4880UL] = 0.0;
    out->mLOG.mX[4881UL] = t4657->mX.mX[1403UL];
    out->mLOG.mX[4882UL] = t4657->mX.mX[1403UL];
    out->mLOG.mX[4883UL] = t4657->mX.mX[592UL];
    out->mLOG.mX[4884UL] = t3354;
    out->mLOG.mX[4885UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel3 - t3754;
    out->mLOG.mX[4886UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4887UL] = t4657->mX.mX[600UL];
    out->mLOG.mX[4888UL] = t4657->mX.mX[600UL];
    out->mLOG.mX[4889UL] = t4657->mX.mX[600UL];
    out->mLOG.mX[4890UL] = t4657->mX.mX[600UL];
    out->mLOG.mX[4891UL] = t4657->mX.mX[601UL] * 0.00027777777777777778;
    out->mLOG.mX[4892UL] = t4657->mX.mX[600UL];
    out->mLOG.mX[4893UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4894UL] = zc_int376;
    out->mLOG.mX[4895UL] = t4657->mX.mX[602UL];
    out->mLOG.mX[4896UL] = t4657->mX.mX[602UL];
    out->mLOG.mX[4897UL] = t4657->mX.mX[1407UL];
    out->mLOG.mX[4898UL] = t3754;
    for (t2499 = 603UL; t2499 - 603UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 4296UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[4904UL] = t4657->mX.mX[1406UL];
    out->mLOG.mX[4905UL] = t4657->mX.mX[1408UL] * 1000.0;
    out->mLOG.mX[4906UL] = t4657->mX.mX[1407UL];
    out->mLOG.mX[4907UL] = intrm_sf_mf_52;
    out->mLOG.mX[4908UL] = t4657->mX.mX[1405UL];
    out->mLOG.mX[4909UL] = t4657->mX.mX[601UL];
    out->mLOG.mX[4910UL] = t4657->mX.mX[600UL];
    out->mLOG.mX[4911UL] = t4657->mX.mX[602UL];
    out->mLOG.mX[4912UL] = t4657->mX.mX[1405UL];
    out->mLOG.mX[4913UL] = t4657->mX.mX[1406UL];
    out->mLOG.mX[4914UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4915UL] = zc_int376;
    out->mLOG.mX[4916UL] = t4657->mX.mX[602UL];
    out->mLOG.mX[4917UL] = BatteryPack_v2_ModuleAssembly5_Module08_Cell_1_electricalModel0;
    out->mLOG.mX[4918UL] = t3754;
    out->mLOG.mX[4919UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly5_Module08_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly5_Module08_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[603UL] * t4657->mX.mX[603UL] * 0.0 + t4657->mX.mX[604UL] * t4657->mX.mX[604UL] * 0.0) + t4657->mX.mX[605UL] * t4657->mX.mX[605UL] * 0.0) + t4657->mX.mX[606UL] * t4657->mX.mX[606UL] * 0.0) + t4657->mX.mX[607UL] * t4657->mX.mX[607UL] * 0.0) * 0.001;
    out->mLOG.mX[4920UL] = t4657->mX.mX[1407UL];
    out->mLOG.mX[4921UL] = t4657->mX.mX[1407UL];
    out->mLOG.mX[4922UL] = t4657->mX.mX[600UL];
    out->mLOG.mX[4923UL] = t3690 * 1000.0;
    out->mLOG.mX[4924UL] = t4657->mX.mX[600UL];
    out->mLOG.mX[4925UL] = t4657->mX.mX[600UL];
    out->mLOG.mX[4926UL] = t4657->mX.mX[1408UL] * 1000.0;
    out->mLOG.mX[4927UL] = intrm_sf_mf_52;
    out->mLOG.mX[4928UL] = t4657->mX.mX[600UL];
    out->mLOG.mX[4929UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4930UL] = BatteryPack_v2_ModuleAssembly5_Module08_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[4931UL] = BatteryPack_v2_ModuleAssembly5_Module08_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[4932UL] = zc_int376;
    out->mLOG.mX[4933UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4934UL] = zc_int376;
    out->mLOG.mX[4935UL] = t3754;
    out->mLOG.mX[4936UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[4937UL] = t3754;
    out->mLOG.mX[4938UL] = t4657->mX.mX[600UL];
    out->mLOG.mX[4939UL] = t3690 * -1000.0;
    out->mLOG.mX[4940UL] = t4657->mX.mX[600UL];
    out->mLOG.mX[4941UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4942UL] = zc_int376;
    out->mLOG.mX[4943UL] = t4657->mX.mX[602UL];
    out->mLOG.mX[4944UL] = t3754;
    out->mLOG.mX[4945UL] = 0.0;
    out->mLOG.mX[4946UL] = t4657->mX.mX[1407UL];
    out->mLOG.mX[4947UL] = t4657->mX.mX[1407UL];
    out->mLOG.mX[4948UL] = t4657->mX.mX[600UL];
    out->mLOG.mX[4949UL] = intrm_sf_mf_52;
    out->mLOG.mX[4950UL] = t3754 - zc_int376;
    out->mLOG.mX[4951UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4952UL] = t4657->mX.mX[608UL];
    out->mLOG.mX[4953UL] = t4657->mX.mX[608UL];
    out->mLOG.mX[4954UL] = t4657->mX.mX[608UL];
    out->mLOG.mX[4955UL] = t4657->mX.mX[608UL];
    out->mLOG.mX[4956UL] = t4657->mX.mX[609UL] * 0.00027777777777777778;
    out->mLOG.mX[4957UL] = t4657->mX.mX[608UL];
    out->mLOG.mX[4958UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4959UL] = zc_int375;
    out->mLOG.mX[4960UL] = t4657->mX.mX[610UL];
    out->mLOG.mX[4961UL] = t4657->mX.mX[610UL];
    out->mLOG.mX[4962UL] = t4657->mX.mX[1411UL];
    out->mLOG.mX[4963UL] = zc_int376;
    for (t2499 = 611UL; t2499 - 611UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 4353UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[4969UL] = t4657->mX.mX[1410UL];
    out->mLOG.mX[4970UL] = t4657->mX.mX[1412UL] * 1000.0;
    out->mLOG.mX[4971UL] = t4657->mX.mX[1411UL];
    out->mLOG.mX[4972UL] = zc_int225;
    out->mLOG.mX[4973UL] = t4657->mX.mX[1409UL];
    out->mLOG.mX[4974UL] = t4657->mX.mX[609UL];
    out->mLOG.mX[4975UL] = t4657->mX.mX[608UL];
    out->mLOG.mX[4976UL] = t4657->mX.mX[610UL];
    out->mLOG.mX[4977UL] = t4657->mX.mX[1409UL];
    out->mLOG.mX[4978UL] = t4657->mX.mX[1410UL];
    out->mLOG.mX[4979UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4980UL] = zc_int375;
    out->mLOG.mX[4981UL] = t4657->mX.mX[610UL];
    out->mLOG.mX[4982UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel0;
    out->mLOG.mX[4983UL] = zc_int376;
    out->mLOG.mX[4984UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3697 > 8.200000000000002E-8 ? t3697 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[611UL] * t4657->mX.mX[611UL] * 0.0 + t4657->mX.mX[612UL] * t4657->mX.mX[612UL] * 0.0) + t4657->mX.mX[613UL] * t4657->mX.mX[613UL] * 0.0) + t4657->mX.mX[614UL] * t4657->mX.mX[614UL] * 0.0) + t4657->mX.mX[615UL] * t4657->mX.mX[615UL] * 0.0) * 0.001;
    out->mLOG.mX[4985UL] = t4657->mX.mX[1411UL];
    out->mLOG.mX[4986UL] = t4657->mX.mX[1411UL];
    out->mLOG.mX[4987UL] = t4657->mX.mX[608UL];
    out->mLOG.mX[4988UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[4989UL] = t4657->mX.mX[608UL];
    out->mLOG.mX[4990UL] = t4657->mX.mX[608UL];
    out->mLOG.mX[4991UL] = t4657->mX.mX[1412UL] * 1000.0;
    out->mLOG.mX[4992UL] = zc_int225;
    out->mLOG.mX[4993UL] = t4657->mX.mX[608UL];
    out->mLOG.mX[4994UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[4995UL] = BatteryPack_v2_ModuleAssembly5_Module09_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[4996UL] = BatteryPack_v2_ModuleAssembly5_Module09_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[4997UL] = zc_int375;
    out->mLOG.mX[4998UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[4999UL] = zc_int375;
    out->mLOG.mX[5000UL] = zc_int376;
    out->mLOG.mX[5001UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[5002UL] = zc_int376;
    out->mLOG.mX[5003UL] = t4657->mX.mX[608UL];
    out->mLOG.mX[5004UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[5005UL] = t4657->mX.mX[608UL];
    out->mLOG.mX[5006UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5007UL] = zc_int375;
    out->mLOG.mX[5008UL] = t4657->mX.mX[610UL];
    out->mLOG.mX[5009UL] = zc_int376;
    out->mLOG.mX[5010UL] = 0.0;
    out->mLOG.mX[5011UL] = t4657->mX.mX[1411UL];
    out->mLOG.mX[5012UL] = t4657->mX.mX[1411UL];
    out->mLOG.mX[5013UL] = t4657->mX.mX[608UL];
    out->mLOG.mX[5014UL] = zc_int225;
    out->mLOG.mX[5015UL] = zc_int376 - zc_int375;
    out->mLOG.mX[5016UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5017UL] = t4657->mX.mX[616UL];
    out->mLOG.mX[5018UL] = t4657->mX.mX[616UL];
    out->mLOG.mX[5019UL] = t4657->mX.mX[616UL];
    out->mLOG.mX[5020UL] = t4657->mX.mX[616UL];
    out->mLOG.mX[5021UL] = t4657->mX.mX[617UL] * 0.00027777777777777778;
    out->mLOG.mX[5022UL] = t4657->mX.mX[616UL];
    out->mLOG.mX[5023UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5024UL] = zc_int374;
    out->mLOG.mX[5025UL] = t4657->mX.mX[618UL];
    out->mLOG.mX[5026UL] = t4657->mX.mX[618UL];
    out->mLOG.mX[5027UL] = t4657->mX.mX[1415UL];
    out->mLOG.mX[5028UL] = zc_int375;
    for (t2499 = 619UL; t2499 - 619UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 4410UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[5034UL] = t4657->mX.mX[1414UL];
    out->mLOG.mX[5035UL] = t4657->mX.mX[1416UL] * 1000.0;
    out->mLOG.mX[5036UL] = t4657->mX.mX[1415UL];
    out->mLOG.mX[5037UL] = zc_int22;
    out->mLOG.mX[5038UL] = t4657->mX.mX[1413UL];
    out->mLOG.mX[5039UL] = t4657->mX.mX[617UL];
    out->mLOG.mX[5040UL] = t4657->mX.mX[616UL];
    out->mLOG.mX[5041UL] = t4657->mX.mX[618UL];
    out->mLOG.mX[5042UL] = t4657->mX.mX[1413UL];
    out->mLOG.mX[5043UL] = t4657->mX.mX[1414UL];
    out->mLOG.mX[5044UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5045UL] = zc_int374;
    out->mLOG.mX[5046UL] = t4657->mX.mX[618UL];
    out->mLOG.mX[5047UL] = BatteryPack_v2_ModuleAssembly5_Module10_Cell_1_electricalModel0;
    out->mLOG.mX[5048UL] = zc_int375;
    out->mLOG.mX[5049UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3702 > 8.200000000000002E-8 ? t3702 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[619UL] * t4657->mX.mX[619UL] * 0.0 + t4657->mX.mX[620UL] * t4657->mX.mX[620UL] * 0.0) + t4657->mX.mX[621UL] * t4657->mX.mX[621UL] * 0.0) + t4657->mX.mX[622UL] * t4657->mX.mX[622UL] * 0.0) + t4657->mX.mX[623UL] * t4657->mX.mX[623UL] * 0.0) * 0.001;
    out->mLOG.mX[5050UL] = t4657->mX.mX[1415UL];
    out->mLOG.mX[5051UL] = t4657->mX.mX[1415UL];
    out->mLOG.mX[5052UL] = t4657->mX.mX[616UL];
    out->mLOG.mX[5053UL] = BatteryPack_v2_ModuleAssembly5_Module10_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[5054UL] = t4657->mX.mX[616UL];
    out->mLOG.mX[5055UL] = t4657->mX.mX[616UL];
    out->mLOG.mX[5056UL] = t4657->mX.mX[1416UL] * 1000.0;
    out->mLOG.mX[5057UL] = zc_int22;
    out->mLOG.mX[5058UL] = t4657->mX.mX[616UL];
    out->mLOG.mX[5059UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5060UL] = BatteryPack_v2_ModuleAssembly5_Module10_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[5061UL] = BatteryPack_v2_ModuleAssembly5_Module10_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[5062UL] = zc_int374;
    out->mLOG.mX[5063UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5064UL] = zc_int374;
    out->mLOG.mX[5065UL] = zc_int375;
    out->mLOG.mX[5066UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[5067UL] = zc_int375;
    out->mLOG.mX[5068UL] = t4657->mX.mX[616UL];
    out->mLOG.mX[5069UL] = BatteryPack_v2_ModuleAssembly5_Module10_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[5070UL] = t4657->mX.mX[616UL];
    out->mLOG.mX[5071UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5072UL] = zc_int374;
    out->mLOG.mX[5073UL] = t4657->mX.mX[618UL];
    out->mLOG.mX[5074UL] = zc_int375;
    out->mLOG.mX[5075UL] = 0.0;
    out->mLOG.mX[5076UL] = t4657->mX.mX[1415UL];
    out->mLOG.mX[5077UL] = t4657->mX.mX[1415UL];
    out->mLOG.mX[5078UL] = t4657->mX.mX[616UL];
    out->mLOG.mX[5079UL] = zc_int22;
    out->mLOG.mX[5080UL] = zc_int375 - zc_int374;
    out->mLOG.mX[5081UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5082UL] = t4657->mX.mX[624UL];
    out->mLOG.mX[5083UL] = t4657->mX.mX[624UL];
    out->mLOG.mX[5084UL] = t4657->mX.mX[624UL];
    out->mLOG.mX[5085UL] = t4657->mX.mX[624UL];
    out->mLOG.mX[5086UL] = t4657->mX.mX[625UL] * 0.00027777777777777778;
    out->mLOG.mX[5087UL] = t4657->mX.mX[624UL];
    out->mLOG.mX[5088UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5089UL] = zc_int373;
    out->mLOG.mX[5090UL] = t4657->mX.mX[626UL];
    out->mLOG.mX[5091UL] = t4657->mX.mX[626UL];
    out->mLOG.mX[5092UL] = t4657->mX.mX[1419UL];
    out->mLOG.mX[5093UL] = zc_int374;
    for (t2499 = 627UL; t2499 - 627UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 4467UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[5099UL] = t4657->mX.mX[1418UL];
    out->mLOG.mX[5100UL] = t4657->mX.mX[1420UL] * 1000.0;
    out->mLOG.mX[5101UL] = t4657->mX.mX[1419UL];
    out->mLOG.mX[5102UL] = BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3;
    out->mLOG.mX[5103UL] = t4657->mX.mX[1417UL];
    out->mLOG.mX[5104UL] = t4657->mX.mX[625UL];
    out->mLOG.mX[5105UL] = t4657->mX.mX[624UL];
    out->mLOG.mX[5106UL] = t4657->mX.mX[626UL];
    out->mLOG.mX[5107UL] = t4657->mX.mX[1417UL];
    out->mLOG.mX[5108UL] = t4657->mX.mX[1418UL];
    out->mLOG.mX[5109UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5110UL] = zc_int373;
    out->mLOG.mX[5111UL] = t4657->mX.mX[626UL];
    out->mLOG.mX[5112UL] = BatteryPack_v2_ModuleAssembly5_Module11_Cell_1_electricalModel0;
    out->mLOG.mX[5113UL] = zc_int374;
    out->mLOG.mX[5114UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3707 > 8.200000000000002E-8 ? t3707 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[627UL] * t4657->mX.mX[627UL] * 0.0 + t4657->mX.mX[628UL] * t4657->mX.mX[628UL] * 0.0) + t4657->mX.mX[629UL] * t4657->mX.mX[629UL] * 0.0) + t4657->mX.mX[630UL] * t4657->mX.mX[630UL] * 0.0) + t4657->mX.mX[631UL] * t4657->mX.mX[631UL] * 0.0) * 0.001;
    out->mLOG.mX[5115UL] = t4657->mX.mX[1419UL];
    out->mLOG.mX[5116UL] = t4657->mX.mX[1419UL];
    out->mLOG.mX[5117UL] = t4657->mX.mX[624UL];
    out->mLOG.mX[5118UL] = t3705 * 1000.0;
    out->mLOG.mX[5119UL] = t4657->mX.mX[624UL];
    out->mLOG.mX[5120UL] = t4657->mX.mX[624UL];
    out->mLOG.mX[5121UL] = t4657->mX.mX[1420UL] * 1000.0;
    out->mLOG.mX[5122UL] = BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3;
    out->mLOG.mX[5123UL] = t4657->mX.mX[624UL];
    out->mLOG.mX[5124UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5125UL] = BatteryPack_v2_ModuleAssembly5_Module11_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[5126UL] = BatteryPack_v2_ModuleAssembly5_Module11_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[5127UL] = zc_int373;
    out->mLOG.mX[5128UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5129UL] = zc_int373;
    out->mLOG.mX[5130UL] = zc_int374;
    out->mLOG.mX[5131UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[5132UL] = zc_int374;
    out->mLOG.mX[5133UL] = t4657->mX.mX[624UL];
    out->mLOG.mX[5134UL] = t3705 * -1000.0;
    out->mLOG.mX[5135UL] = t4657->mX.mX[624UL];
    out->mLOG.mX[5136UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5137UL] = zc_int373;
    out->mLOG.mX[5138UL] = t4657->mX.mX[626UL];
    out->mLOG.mX[5139UL] = zc_int374;
    out->mLOG.mX[5140UL] = 0.0;
    out->mLOG.mX[5141UL] = t4657->mX.mX[1419UL];
    out->mLOG.mX[5142UL] = t4657->mX.mX[1419UL];
    out->mLOG.mX[5143UL] = t4657->mX.mX[624UL];
    out->mLOG.mX[5144UL] = BatteryPack_v2_ModuleAssembly4_Module10_Cell_1_electricalModel3;
    out->mLOG.mX[5145UL] = zc_int374 - zc_int373;
    out->mLOG.mX[5146UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5147UL] = t4657->mX.mX[632UL];
    out->mLOG.mX[5148UL] = t4657->mX.mX[632UL];
    out->mLOG.mX[5149UL] = t4657->mX.mX[632UL];
    out->mLOG.mX[5150UL] = t4657->mX.mX[632UL];
    out->mLOG.mX[5151UL] = t4657->mX.mX[633UL] * 0.00027777777777777778;
    out->mLOG.mX[5152UL] = t4657->mX.mX[632UL];
    out->mLOG.mX[5153UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5154UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    out->mLOG.mX[5155UL] = t4657->mX.mX[634UL];
    out->mLOG.mX[5156UL] = t4657->mX.mX[634UL];
    out->mLOG.mX[5157UL] = t4657->mX.mX[1423UL];
    out->mLOG.mX[5158UL] = zc_int373;
    for (t2499 = 635UL; t2499 - 635UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 4524UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[5164UL] = t4657->mX.mX[1422UL];
    out->mLOG.mX[5165UL] = t4657->mX.mX[1424UL] * 1000.0;
    out->mLOG.mX[5166UL] = t4657->mX.mX[1423UL];
    out->mLOG.mX[5167UL] = t3584;
    out->mLOG.mX[5168UL] = t4657->mX.mX[1421UL];
    out->mLOG.mX[5169UL] = t4657->mX.mX[633UL];
    out->mLOG.mX[5170UL] = t4657->mX.mX[632UL];
    out->mLOG.mX[5171UL] = t4657->mX.mX[634UL];
    out->mLOG.mX[5172UL] = t4657->mX.mX[1421UL];
    out->mLOG.mX[5173UL] = t4657->mX.mX[1422UL];
    out->mLOG.mX[5174UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5175UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    out->mLOG.mX[5176UL] = t4657->mX.mX[634UL];
    out->mLOG.mX[5177UL] = t3708;
    out->mLOG.mX[5178UL] = zc_int373;
    out->mLOG.mX[5179UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3712 > 8.200000000000002E-8 ? t3712 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[635UL] * t4657->mX.mX[635UL] * 0.0 + t4657->mX.mX[636UL] * t4657->mX.mX[636UL] * 0.0) + t4657->mX.mX[637UL] * t4657->mX.mX[637UL] * 0.0) + t4657->mX.mX[638UL] * t4657->mX.mX[638UL] * 0.0) + t4657->mX.mX[639UL] * t4657->mX.mX[639UL] * 0.0) * 0.001;
    out->mLOG.mX[5180UL] = t4657->mX.mX[1423UL];
    out->mLOG.mX[5181UL] = t4657->mX.mX[1423UL];
    out->mLOG.mX[5182UL] = t4657->mX.mX[632UL];
    out->mLOG.mX[5183UL] = t3710 * 1000.0;
    out->mLOG.mX[5184UL] = t4657->mX.mX[632UL];
    out->mLOG.mX[5185UL] = t4657->mX.mX[632UL];
    out->mLOG.mX[5186UL] = t4657->mX.mX[1424UL] * 1000.0;
    out->mLOG.mX[5187UL] = t3584;
    out->mLOG.mX[5188UL] = t4657->mX.mX[632UL];
    out->mLOG.mX[5189UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5190UL] = BatteryPack_v2_ModuleAssembly5_Module12_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[5191UL] = BatteryPack_v2_ModuleAssembly5_Module12_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[5192UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    out->mLOG.mX[5193UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5194UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    out->mLOG.mX[5195UL] = zc_int373;
    out->mLOG.mX[5196UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[5197UL] = zc_int373;
    out->mLOG.mX[5198UL] = t4657->mX.mX[632UL];
    out->mLOG.mX[5199UL] = t3710 * -1000.0;
    out->mLOG.mX[5200UL] = t4657->mX.mX[632UL];
    out->mLOG.mX[5201UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5202UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    out->mLOG.mX[5203UL] = t4657->mX.mX[634UL];
    out->mLOG.mX[5204UL] = zc_int373;
    out->mLOG.mX[5205UL] = 0.0;
    out->mLOG.mX[5206UL] = t4657->mX.mX[1423UL];
    out->mLOG.mX[5207UL] = t4657->mX.mX[1423UL];
    out->mLOG.mX[5208UL] = t4657->mX.mX[632UL];
    out->mLOG.mX[5209UL] = t3584;
    out->mLOG.mX[5210UL] = zc_int373 - BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    out->mLOG.mX[5211UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5212UL] = t4657->mX.mX[640UL];
    out->mLOG.mX[5213UL] = t4657->mX.mX[640UL];
    out->mLOG.mX[5214UL] = t4657->mX.mX[640UL];
    out->mLOG.mX[5215UL] = t4657->mX.mX[640UL];
    out->mLOG.mX[5216UL] = t4657->mX.mX[641UL] * 0.00027777777777777778;
    out->mLOG.mX[5217UL] = t4657->mX.mX[640UL];
    out->mLOG.mX[5218UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5219UL] = intrm_sf_mf_85;
    out->mLOG.mX[5220UL] = t4657->mX.mX[642UL];
    out->mLOG.mX[5221UL] = t4657->mX.mX[642UL];
    out->mLOG.mX[5222UL] = t4657->mX.mX[1427UL];
    out->mLOG.mX[5223UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    for (t2499 = 643UL; t2499 - 643UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 4581UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[5229UL] = t4657->mX.mX[1426UL];
    out->mLOG.mX[5230UL] = t4657->mX.mX[1428UL] * 1000.0;
    out->mLOG.mX[5231UL] = t4657->mX.mX[1427UL];
    out->mLOG.mX[5232UL] = BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3;
    out->mLOG.mX[5233UL] = t4657->mX.mX[1425UL];
    out->mLOG.mX[5234UL] = t4657->mX.mX[641UL];
    out->mLOG.mX[5235UL] = t4657->mX.mX[640UL];
    out->mLOG.mX[5236UL] = t4657->mX.mX[642UL];
    out->mLOG.mX[5237UL] = t4657->mX.mX[1425UL];
    out->mLOG.mX[5238UL] = t4657->mX.mX[1426UL];
    out->mLOG.mX[5239UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5240UL] = intrm_sf_mf_85;
    out->mLOG.mX[5241UL] = t4657->mX.mX[642UL];
    out->mLOG.mX[5242UL] = t3713;
    out->mLOG.mX[5243UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    out->mLOG.mX[5244UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly5_Module13_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly5_Module13_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[643UL] * t4657->mX.mX[643UL] * 0.0 + t4657->mX.mX[644UL] * t4657->mX.mX[644UL] * 0.0) + t4657->mX.mX[645UL] * t4657->mX.mX[645UL] * 0.0) + t4657->mX.mX[646UL] * t4657->mX.mX[646UL] * 0.0) + t4657->mX.mX[647UL] * t4657->mX.mX[647UL] * 0.0) * 0.001;
    out->mLOG.mX[5245UL] = t4657->mX.mX[1427UL];
    out->mLOG.mX[5246UL] = t4657->mX.mX[1427UL];
    out->mLOG.mX[5247UL] = t4657->mX.mX[640UL];
    out->mLOG.mX[5248UL] = BatteryPack_v2_ModuleAssembly5_Module13_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[5249UL] = t4657->mX.mX[640UL];
    out->mLOG.mX[5250UL] = t4657->mX.mX[640UL];
    out->mLOG.mX[5251UL] = t4657->mX.mX[1428UL] * 1000.0;
    out->mLOG.mX[5252UL] = BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3;
    out->mLOG.mX[5253UL] = t4657->mX.mX[640UL];
    out->mLOG.mX[5254UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5255UL] = BatteryPack_v2_ModuleAssembly5_Module13_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[5256UL] = BatteryPack_v2_ModuleAssembly5_Module13_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[5257UL] = intrm_sf_mf_85;
    out->mLOG.mX[5258UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5259UL] = intrm_sf_mf_85;
    out->mLOG.mX[5260UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    out->mLOG.mX[5261UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[5262UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    out->mLOG.mX[5263UL] = t4657->mX.mX[640UL];
    out->mLOG.mX[5264UL] = BatteryPack_v2_ModuleAssembly5_Module13_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[5265UL] = t4657->mX.mX[640UL];
    out->mLOG.mX[5266UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5267UL] = intrm_sf_mf_85;
    out->mLOG.mX[5268UL] = t4657->mX.mX[642UL];
    out->mLOG.mX[5269UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3;
    out->mLOG.mX[5270UL] = 0.0;
    out->mLOG.mX[5271UL] = t4657->mX.mX[1427UL];
    out->mLOG.mX[5272UL] = t4657->mX.mX[1427UL];
    out->mLOG.mX[5273UL] = t4657->mX.mX[640UL];
    out->mLOG.mX[5274UL] = BatteryPack_v2_ModuleAssembly4_Module11_Cell_1_electricalModel3;
    out->mLOG.mX[5275UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_electricalModel3 - intrm_sf_mf_85;
    out->mLOG.mX[5276UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5277UL] = t4657->mX.mX[648UL];
    out->mLOG.mX[5278UL] = t4657->mX.mX[648UL];
    out->mLOG.mX[5279UL] = t4657->mX.mX[648UL];
    out->mLOG.mX[5280UL] = t4657->mX.mX[648UL];
    out->mLOG.mX[5281UL] = t4657->mX.mX[649UL] * 0.00027777777777777778;
    out->mLOG.mX[5282UL] = t4657->mX.mX[648UL];
    out->mLOG.mX[5283UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5284UL] = intrm_sf_mf_13;
    out->mLOG.mX[5285UL] = t4657->mX.mX[650UL];
    out->mLOG.mX[5286UL] = t4657->mX.mX[650UL];
    out->mLOG.mX[5287UL] = t4657->mX.mX[1431UL];
    out->mLOG.mX[5288UL] = intrm_sf_mf_85;
    for (t2499 = 651UL; t2499 - 651UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 4638UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[5294UL] = t4657->mX.mX[1430UL];
    out->mLOG.mX[5295UL] = t4657->mX.mX[1432UL] * 1000.0;
    out->mLOG.mX[5296UL] = t4657->mX.mX[1431UL];
    out->mLOG.mX[5297UL] = zc_int242;
    out->mLOG.mX[5298UL] = t4657->mX.mX[1429UL];
    out->mLOG.mX[5299UL] = t4657->mX.mX[649UL];
    out->mLOG.mX[5300UL] = t4657->mX.mX[648UL];
    out->mLOG.mX[5301UL] = t4657->mX.mX[650UL];
    out->mLOG.mX[5302UL] = t4657->mX.mX[1429UL];
    out->mLOG.mX[5303UL] = t4657->mX.mX[1430UL];
    out->mLOG.mX[5304UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5305UL] = intrm_sf_mf_13;
    out->mLOG.mX[5306UL] = t4657->mX.mX[650UL];
    out->mLOG.mX[5307UL] = BatteryPack_v2_ModuleAssembly5_Module14_Cell_1_electricalModel0;
    out->mLOG.mX[5308UL] = intrm_sf_mf_85;
    out->mLOG.mX[5309UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3722 > 8.200000000000002E-8 ? t3722 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[651UL] * t4657->mX.mX[651UL] * 0.0 + t4657->mX.mX[652UL] * t4657->mX.mX[652UL] * 0.0) + t4657->mX.mX[653UL] * t4657->mX.mX[653UL] * 0.0) + t4657->mX.mX[654UL] * t4657->mX.mX[654UL] * 0.0) + t4657->mX.mX[655UL] * t4657->mX.mX[655UL] * 0.0) * 0.001;
    out->mLOG.mX[5310UL] = t4657->mX.mX[1431UL];
    out->mLOG.mX[5311UL] = t4657->mX.mX[1431UL];
    out->mLOG.mX[5312UL] = t4657->mX.mX[648UL];
    out->mLOG.mX[5313UL] = t3720 * 1000.0;
    out->mLOG.mX[5314UL] = t4657->mX.mX[648UL];
    out->mLOG.mX[5315UL] = t4657->mX.mX[648UL];
    out->mLOG.mX[5316UL] = t4657->mX.mX[1432UL] * 1000.0;
    out->mLOG.mX[5317UL] = zc_int242;
    out->mLOG.mX[5318UL] = t4657->mX.mX[648UL];
    out->mLOG.mX[5319UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5320UL] = BatteryPack_v2_ModuleAssembly5_Module14_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[5321UL] = BatteryPack_v2_ModuleAssembly5_Module14_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[5322UL] = intrm_sf_mf_13;
    out->mLOG.mX[5323UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5324UL] = intrm_sf_mf_13;
    out->mLOG.mX[5325UL] = intrm_sf_mf_85;
    out->mLOG.mX[5326UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[5327UL] = intrm_sf_mf_85;
    out->mLOG.mX[5328UL] = t4657->mX.mX[648UL];
    out->mLOG.mX[5329UL] = t3720 * -1000.0;
    out->mLOG.mX[5330UL] = t4657->mX.mX[648UL];
    out->mLOG.mX[5331UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5332UL] = intrm_sf_mf_13;
    out->mLOG.mX[5333UL] = t4657->mX.mX[650UL];
    out->mLOG.mX[5334UL] = intrm_sf_mf_85;
    out->mLOG.mX[5335UL] = 0.0;
    out->mLOG.mX[5336UL] = t4657->mX.mX[1431UL];
    out->mLOG.mX[5337UL] = t4657->mX.mX[1431UL];
    out->mLOG.mX[5338UL] = t4657->mX.mX[648UL];
    out->mLOG.mX[5339UL] = zc_int242;
    out->mLOG.mX[5340UL] = intrm_sf_mf_85 - intrm_sf_mf_13;
    out->mLOG.mX[5341UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5342UL] = t4657->mX.mX[656UL];
    out->mLOG.mX[5343UL] = t4657->mX.mX[656UL];
    out->mLOG.mX[5344UL] = t4657->mX.mX[656UL];
    out->mLOG.mX[5345UL] = t4657->mX.mX[656UL];
    out->mLOG.mX[5346UL] = t4657->mX.mX[657UL] * 0.00027777777777777778;
    out->mLOG.mX[5347UL] = t4657->mX.mX[656UL];
    out->mLOG.mX[5348UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5349UL] = t3734;
    out->mLOG.mX[5350UL] = t4657->mX.mX[658UL];
    out->mLOG.mX[5351UL] = t4657->mX.mX[658UL];
    out->mLOG.mX[5352UL] = t4657->mX.mX[1435UL];
    out->mLOG.mX[5353UL] = intrm_sf_mf_13;
    for (t2499 = 659UL; t2499 - 659UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 4695UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[5359UL] = t4657->mX.mX[1434UL];
    out->mLOG.mX[5360UL] = t4657->mX.mX[1436UL] * 1000.0;
    out->mLOG.mX[5361UL] = t4657->mX.mX[1435UL];
    out->mLOG.mX[5362UL] = zc_int243;
    out->mLOG.mX[5363UL] = t4657->mX.mX[1433UL];
    out->mLOG.mX[5364UL] = t4657->mX.mX[657UL];
    out->mLOG.mX[5365UL] = t4657->mX.mX[656UL];
    out->mLOG.mX[5366UL] = t4657->mX.mX[658UL];
    out->mLOG.mX[5367UL] = t4657->mX.mX[1433UL];
    out->mLOG.mX[5368UL] = t4657->mX.mX[1434UL];
    out->mLOG.mX[5369UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5370UL] = t3734;
    out->mLOG.mX[5371UL] = t4657->mX.mX[658UL];
    out->mLOG.mX[5372UL] = t3723;
    out->mLOG.mX[5373UL] = intrm_sf_mf_13;
    out->mLOG.mX[5374UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly5_Module15_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly5_Module15_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[659UL] * t4657->mX.mX[659UL] * 0.0 + t4657->mX.mX[660UL] * t4657->mX.mX[660UL] * 0.0) + t4657->mX.mX[661UL] * t4657->mX.mX[661UL] * 0.0) + t4657->mX.mX[662UL] * t4657->mX.mX[662UL] * 0.0) + t4657->mX.mX[663UL] * t4657->mX.mX[663UL] * 0.0) * 0.001;
    out->mLOG.mX[5375UL] = t4657->mX.mX[1435UL];
    out->mLOG.mX[5376UL] = t4657->mX.mX[1435UL];
    out->mLOG.mX[5377UL] = t4657->mX.mX[656UL];
    out->mLOG.mX[5378UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[5379UL] = t4657->mX.mX[656UL];
    out->mLOG.mX[5380UL] = t4657->mX.mX[656UL];
    out->mLOG.mX[5381UL] = t4657->mX.mX[1436UL] * 1000.0;
    out->mLOG.mX[5382UL] = zc_int243;
    out->mLOG.mX[5383UL] = t4657->mX.mX[656UL];
    out->mLOG.mX[5384UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5385UL] = BatteryPack_v2_ModuleAssembly5_Module15_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[5386UL] = BatteryPack_v2_ModuleAssembly5_Module15_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[5387UL] = t3734;
    out->mLOG.mX[5388UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5389UL] = t3734;
    out->mLOG.mX[5390UL] = intrm_sf_mf_13;
    out->mLOG.mX[5391UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[5392UL] = intrm_sf_mf_13;
    out->mLOG.mX[5393UL] = t4657->mX.mX[656UL];
    out->mLOG.mX[5394UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[5395UL] = t4657->mX.mX[656UL];
    out->mLOG.mX[5396UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5397UL] = t3734;
    out->mLOG.mX[5398UL] = t4657->mX.mX[658UL];
    out->mLOG.mX[5399UL] = intrm_sf_mf_13;
    out->mLOG.mX[5400UL] = 0.0;
    out->mLOG.mX[5401UL] = t4657->mX.mX[1435UL];
    out->mLOG.mX[5402UL] = t4657->mX.mX[1435UL];
    out->mLOG.mX[5403UL] = t4657->mX.mX[656UL];
    out->mLOG.mX[5404UL] = zc_int243;
    out->mLOG.mX[5405UL] = intrm_sf_mf_13 - t3734;
    out->mLOG.mX[5406UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5407UL] = t4657->mX.mX[664UL];
    out->mLOG.mX[5408UL] = t4657->mX.mX[664UL];
    out->mLOG.mX[5409UL] = t4657->mX.mX[664UL];
    out->mLOG.mX[5410UL] = t4657->mX.mX[664UL];
    out->mLOG.mX[5411UL] = t4657->mX.mX[665UL] * 0.00027777777777777778;
    out->mLOG.mX[5412UL] = t4657->mX.mX[664UL];
    out->mLOG.mX[5413UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5414UL] = zc_int368;
    out->mLOG.mX[5415UL] = t4657->mX.mX[666UL];
    out->mLOG.mX[5416UL] = t4657->mX.mX[666UL];
    out->mLOG.mX[5417UL] = t4657->mX.mX[1439UL];
    out->mLOG.mX[5418UL] = t3734;
    for (t2499 = 667UL; t2499 - 667UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 4752UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[5424UL] = t4657->mX.mX[1438UL];
    out->mLOG.mX[5425UL] = t4657->mX.mX[1440UL] * 1000.0;
    out->mLOG.mX[5426UL] = t4657->mX.mX[1439UL];
    out->mLOG.mX[5427UL] = zc_int248;
    out->mLOG.mX[5428UL] = t4657->mX.mX[1437UL];
    out->mLOG.mX[5429UL] = t4657->mX.mX[665UL];
    out->mLOG.mX[5430UL] = t4657->mX.mX[664UL];
    out->mLOG.mX[5431UL] = t4657->mX.mX[666UL];
    out->mLOG.mX[5432UL] = t4657->mX.mX[1437UL];
    out->mLOG.mX[5433UL] = t4657->mX.mX[1438UL];
    out->mLOG.mX[5434UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5435UL] = zc_int368;
    out->mLOG.mX[5436UL] = t4657->mX.mX[666UL];
    out->mLOG.mX[5437UL] = t3728;
    out->mLOG.mX[5438UL] = t3734;
    out->mLOG.mX[5439UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3732 > 8.200000000000002E-8 ? t3732 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[667UL] * t4657->mX.mX[667UL] * 0.0 + t4657->mX.mX[668UL] * t4657->mX.mX[668UL] * 0.0) + t4657->mX.mX[669UL] * t4657->mX.mX[669UL] * 0.0) + t4657->mX.mX[670UL] * t4657->mX.mX[670UL] * 0.0) + t4657->mX.mX[671UL] * t4657->mX.mX[671UL] * 0.0) * 0.001;
    out->mLOG.mX[5440UL] = t4657->mX.mX[1439UL];
    out->mLOG.mX[5441UL] = t4657->mX.mX[1439UL];
    out->mLOG.mX[5442UL] = t4657->mX.mX[664UL];
    out->mLOG.mX[5443UL] = t3730 * 1000.0;
    out->mLOG.mX[5444UL] = t4657->mX.mX[664UL];
    out->mLOG.mX[5445UL] = t4657->mX.mX[664UL];
    out->mLOG.mX[5446UL] = t4657->mX.mX[1440UL] * 1000.0;
    out->mLOG.mX[5447UL] = zc_int248;
    out->mLOG.mX[5448UL] = t4657->mX.mX[664UL];
    out->mLOG.mX[5449UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5450UL] = BatteryPack_v2_ModuleAssembly5_Module16_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[5451UL] = BatteryPack_v2_ModuleAssembly5_Module16_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[5452UL] = zc_int368;
    out->mLOG.mX[5453UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5454UL] = zc_int368;
    out->mLOG.mX[5455UL] = t3734;
    out->mLOG.mX[5456UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[5457UL] = t3734;
    out->mLOG.mX[5458UL] = t4657->mX.mX[664UL];
    out->mLOG.mX[5459UL] = t3730 * -1000.0;
    out->mLOG.mX[5460UL] = t4657->mX.mX[664UL];
    out->mLOG.mX[5461UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5462UL] = zc_int368;
    out->mLOG.mX[5463UL] = t4657->mX.mX[666UL];
    out->mLOG.mX[5464UL] = t3734;
    out->mLOG.mX[5465UL] = 0.0;
    out->mLOG.mX[5466UL] = t4657->mX.mX[1439UL];
    out->mLOG.mX[5467UL] = t4657->mX.mX[1439UL];
    out->mLOG.mX[5468UL] = t4657->mX.mX[664UL];
    out->mLOG.mX[5469UL] = zc_int248;
    out->mLOG.mX[5470UL] = t3734 - zc_int368;
    out->mLOG.mX[5471UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5472UL] = t4657->mX.mX[672UL];
    out->mLOG.mX[5473UL] = t4657->mX.mX[672UL];
    out->mLOG.mX[5474UL] = t4657->mX.mX[672UL];
    out->mLOG.mX[5475UL] = t4657->mX.mX[672UL];
    out->mLOG.mX[5476UL] = t4657->mX.mX[673UL] * 0.00027777777777777778;
    out->mLOG.mX[5477UL] = t4657->mX.mX[672UL];
    out->mLOG.mX[5478UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5479UL] = t3729;
    out->mLOG.mX[5480UL] = t4657->mX.mX[674UL];
    out->mLOG.mX[5481UL] = t4657->mX.mX[674UL];
    out->mLOG.mX[5482UL] = t4657->mX.mX[1443UL];
    out->mLOG.mX[5483UL] = zc_int368;
    for (t2499 = 675UL; t2499 - 675UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 4809UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[5489UL] = t4657->mX.mX[1442UL];
    out->mLOG.mX[5490UL] = t4657->mX.mX[1444UL] * 1000.0;
    out->mLOG.mX[5491UL] = t4657->mX.mX[1443UL];
    out->mLOG.mX[5492UL] = zc_int250;
    out->mLOG.mX[5493UL] = t4657->mX.mX[1441UL];
    out->mLOG.mX[5494UL] = t4657->mX.mX[673UL];
    out->mLOG.mX[5495UL] = t4657->mX.mX[672UL];
    out->mLOG.mX[5496UL] = t4657->mX.mX[674UL];
    out->mLOG.mX[5497UL] = t4657->mX.mX[1441UL];
    out->mLOG.mX[5498UL] = t4657->mX.mX[1442UL];
    out->mLOG.mX[5499UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5500UL] = t3729;
    out->mLOG.mX[5501UL] = t4657->mX.mX[674UL];
    out->mLOG.mX[5502UL] = t3733;
    out->mLOG.mX[5503UL] = zc_int368;
    out->mLOG.mX[5504UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3737 > 8.200000000000002E-8 ? t3737 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[675UL] * t4657->mX.mX[675UL] * 0.0 + t4657->mX.mX[676UL] * t4657->mX.mX[676UL] * 0.0) + t4657->mX.mX[677UL] * t4657->mX.mX[677UL] * 0.0) + t4657->mX.mX[678UL] * t4657->mX.mX[678UL] * 0.0) + t4657->mX.mX[679UL] * t4657->mX.mX[679UL] * 0.0) * 0.001;
    out->mLOG.mX[5505UL] = t4657->mX.mX[1443UL];
    out->mLOG.mX[5506UL] = t4657->mX.mX[1443UL];
    out->mLOG.mX[5507UL] = t4657->mX.mX[672UL];
    out->mLOG.mX[5508UL] = t3735 * 1000.0;
    out->mLOG.mX[5509UL] = t4657->mX.mX[672UL];
    out->mLOG.mX[5510UL] = t4657->mX.mX[672UL];
    out->mLOG.mX[5511UL] = t4657->mX.mX[1444UL] * 1000.0;
    out->mLOG.mX[5512UL] = zc_int250;
    out->mLOG.mX[5513UL] = t4657->mX.mX[672UL];
    out->mLOG.mX[5514UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5515UL] = BatteryPack_v2_ModuleAssembly5_Module17_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[5516UL] = BatteryPack_v2_ModuleAssembly5_Module17_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[5517UL] = t3729;
    out->mLOG.mX[5518UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5519UL] = t3729;
    out->mLOG.mX[5520UL] = zc_int368;
    out->mLOG.mX[5521UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[5522UL] = zc_int368;
    out->mLOG.mX[5523UL] = t4657->mX.mX[672UL];
    out->mLOG.mX[5524UL] = t3735 * -1000.0;
    out->mLOG.mX[5525UL] = t4657->mX.mX[672UL];
    out->mLOG.mX[5526UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5527UL] = t3729;
    out->mLOG.mX[5528UL] = t4657->mX.mX[674UL];
    out->mLOG.mX[5529UL] = zc_int368;
    out->mLOG.mX[5530UL] = 0.0;
    out->mLOG.mX[5531UL] = t4657->mX.mX[1443UL];
    out->mLOG.mX[5532UL] = t4657->mX.mX[1443UL];
    out->mLOG.mX[5533UL] = t4657->mX.mX[672UL];
    out->mLOG.mX[5534UL] = zc_int250;
    out->mLOG.mX[5535UL] = zc_int368 - t3729;
    out->mLOG.mX[5536UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5537UL] = t4657->mX.mX[680UL];
    out->mLOG.mX[5538UL] = t4657->mX.mX[680UL];
    out->mLOG.mX[5539UL] = t4657->mX.mX[680UL];
    out->mLOG.mX[5540UL] = t4657->mX.mX[680UL];
    out->mLOG.mX[5541UL] = t4657->mX.mX[681UL] * 0.00027777777777777778;
    out->mLOG.mX[5542UL] = t4657->mX.mX[680UL];
    out->mLOG.mX[5543UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5544UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[5545UL] = t4657->mX.mX[682UL];
    out->mLOG.mX[5546UL] = t4657->mX.mX[682UL];
    out->mLOG.mX[5547UL] = t4657->mX.mX[1447UL];
    out->mLOG.mX[5548UL] = t3729;
    for (t2499 = 683UL; t2499 - 683UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 4866UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[5554UL] = t4657->mX.mX[1446UL];
    out->mLOG.mX[5555UL] = t4657->mX.mX[1448UL] * 1000.0;
    out->mLOG.mX[5556UL] = t4657->mX.mX[1447UL];
    out->mLOG.mX[5557UL] = zc_int247;
    out->mLOG.mX[5558UL] = t4657->mX.mX[1445UL];
    out->mLOG.mX[5559UL] = t4657->mX.mX[681UL];
    out->mLOG.mX[5560UL] = t4657->mX.mX[680UL];
    out->mLOG.mX[5561UL] = t4657->mX.mX[682UL];
    out->mLOG.mX[5562UL] = t4657->mX.mX[1445UL];
    out->mLOG.mX[5563UL] = t4657->mX.mX[1446UL];
    out->mLOG.mX[5564UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5565UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[5566UL] = t4657->mX.mX[682UL];
    out->mLOG.mX[5567UL] = t3738;
    out->mLOG.mX[5568UL] = t3729;
    out->mLOG.mX[5569UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly5_Module18_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly5_Module18_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[683UL] * t4657->mX.mX[683UL] * 0.0 + t4657->mX.mX[684UL] * t4657->mX.mX[684UL] * 0.0) + t4657->mX.mX[685UL] * t4657->mX.mX[685UL] * 0.0) + t4657->mX.mX[686UL] * t4657->mX.mX[686UL] * 0.0) + t4657->mX.mX[687UL] * t4657->mX.mX[687UL] * 0.0) * 0.001;
    out->mLOG.mX[5570UL] = t4657->mX.mX[1447UL];
    out->mLOG.mX[5571UL] = t4657->mX.mX[1447UL];
    out->mLOG.mX[5572UL] = t4657->mX.mX[680UL];
    out->mLOG.mX[5573UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[5574UL] = t4657->mX.mX[680UL];
    out->mLOG.mX[5575UL] = t4657->mX.mX[680UL];
    out->mLOG.mX[5576UL] = t4657->mX.mX[1448UL] * 1000.0;
    out->mLOG.mX[5577UL] = zc_int247;
    out->mLOG.mX[5578UL] = t4657->mX.mX[680UL];
    out->mLOG.mX[5579UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5580UL] = BatteryPack_v2_ModuleAssembly5_Module18_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[5581UL] = BatteryPack_v2_ModuleAssembly5_Module18_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[5582UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[5583UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5584UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[5585UL] = t3729;
    out->mLOG.mX[5586UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[5587UL] = t3729;
    out->mLOG.mX[5588UL] = t4657->mX.mX[680UL];
    out->mLOG.mX[5589UL] = BatteryPack_v2_ModuleAssembly5_Module18_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[5590UL] = t4657->mX.mX[680UL];
    out->mLOG.mX[5591UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5592UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[5593UL] = t4657->mX.mX[682UL];
    out->mLOG.mX[5594UL] = t3729;
    out->mLOG.mX[5595UL] = 0.0;
    out->mLOG.mX[5596UL] = t4657->mX.mX[1447UL];
    out->mLOG.mX[5597UL] = t4657->mX.mX[1447UL];
    out->mLOG.mX[5598UL] = t4657->mX.mX[680UL];
    out->mLOG.mX[5599UL] = zc_int247;
    out->mLOG.mX[5600UL] = t3729 - BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[5601UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5602UL] = t4657->mX.mX[688UL];
    out->mLOG.mX[5603UL] = t4657->mX.mX[688UL];
    out->mLOG.mX[5604UL] = t4657->mX.mX[688UL];
    out->mLOG.mX[5605UL] = t4657->mX.mX[688UL];
    out->mLOG.mX[5606UL] = t4657->mX.mX[689UL] * 0.00027777777777777778;
    out->mLOG.mX[5607UL] = t4657->mX.mX[688UL];
    out->mLOG.mX[5608UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5609UL] = zc_int365;
    out->mLOG.mX[5610UL] = t4657->mX.mX[690UL];
    out->mLOG.mX[5611UL] = t4657->mX.mX[690UL];
    out->mLOG.mX[5612UL] = t4657->mX.mX[1451UL];
    out->mLOG.mX[5613UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    for (t2499 = 691UL; t2499 - 691UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 4923UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[5619UL] = t4657->mX.mX[1450UL];
    out->mLOG.mX[5620UL] = t4657->mX.mX[1452UL] * 1000.0;
    out->mLOG.mX[5621UL] = t4657->mX.mX[1451UL];
    out->mLOG.mX[5622UL] = zc_int253;
    out->mLOG.mX[5623UL] = t4657->mX.mX[1449UL];
    out->mLOG.mX[5624UL] = t4657->mX.mX[689UL];
    out->mLOG.mX[5625UL] = t4657->mX.mX[688UL];
    out->mLOG.mX[5626UL] = t4657->mX.mX[690UL];
    out->mLOG.mX[5627UL] = t4657->mX.mX[1449UL];
    out->mLOG.mX[5628UL] = t4657->mX.mX[1450UL];
    out->mLOG.mX[5629UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5630UL] = zc_int365;
    out->mLOG.mX[5631UL] = t4657->mX.mX[690UL];
    out->mLOG.mX[5632UL] = t3743;
    out->mLOG.mX[5633UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[5634UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3747 > 8.200000000000002E-8 ? t3747 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[691UL] * t4657->mX.mX[691UL] * 0.0 + t4657->mX.mX[692UL] * t4657->mX.mX[692UL] * 0.0) + t4657->mX.mX[693UL] * t4657->mX.mX[693UL] * 0.0) + t4657->mX.mX[694UL] * t4657->mX.mX[694UL] * 0.0) + t4657->mX.mX[695UL] * t4657->mX.mX[695UL] * 0.0) * 0.001;
    out->mLOG.mX[5635UL] = t4657->mX.mX[1451UL];
    out->mLOG.mX[5636UL] = t4657->mX.mX[1451UL];
    out->mLOG.mX[5637UL] = t4657->mX.mX[688UL];
    out->mLOG.mX[5638UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[5639UL] = t4657->mX.mX[688UL];
    out->mLOG.mX[5640UL] = t4657->mX.mX[688UL];
    out->mLOG.mX[5641UL] = t4657->mX.mX[1452UL] * 1000.0;
    out->mLOG.mX[5642UL] = zc_int253;
    out->mLOG.mX[5643UL] = t4657->mX.mX[688UL];
    out->mLOG.mX[5644UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5645UL] = BatteryPack_v2_ModuleAssembly5_Module19_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[5646UL] = BatteryPack_v2_ModuleAssembly5_Module19_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[5647UL] = zc_int365;
    out->mLOG.mX[5648UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5649UL] = zc_int365;
    out->mLOG.mX[5650UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[5651UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[5652UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[5653UL] = t4657->mX.mX[688UL];
    out->mLOG.mX[5654UL] = BatteryPack_v2_ModuleAssembly5_Module19_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[5655UL] = t4657->mX.mX[688UL];
    out->mLOG.mX[5656UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5657UL] = zc_int365;
    out->mLOG.mX[5658UL] = t4657->mX.mX[690UL];
    out->mLOG.mX[5659UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3;
    out->mLOG.mX[5660UL] = 0.0;
    out->mLOG.mX[5661UL] = t4657->mX.mX[1451UL];
    out->mLOG.mX[5662UL] = t4657->mX.mX[1451UL];
    out->mLOG.mX[5663UL] = t4657->mX.mX[688UL];
    out->mLOG.mX[5664UL] = zc_int253;
    out->mLOG.mX[5665UL] = BatteryPack_v2_ModuleAssembly5_Module16_Cell_1_electricalModel3 - zc_int365;
    out->mLOG.mX[5666UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5667UL] = t4657->mX.mX[696UL];
    out->mLOG.mX[5668UL] = t4657->mX.mX[696UL];
    out->mLOG.mX[5669UL] = t4657->mX.mX[696UL];
    out->mLOG.mX[5670UL] = t4657->mX.mX[696UL];
    out->mLOG.mX[5671UL] = t4657->mX.mX[697UL] * 0.00027777777777777778;
    out->mLOG.mX[5672UL] = t4657->mX.mX[696UL];
    out->mLOG.mX[5673UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5674UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[5675UL] = t4657->mX.mX[698UL];
    out->mLOG.mX[5676UL] = t4657->mX.mX[698UL];
    out->mLOG.mX[5677UL] = t4657->mX.mX[1455UL];
    out->mLOG.mX[5678UL] = zc_int365;
    for (t2499 = 699UL; t2499 - 699UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 4980UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[5684UL] = t4657->mX.mX[1454UL];
    out->mLOG.mX[5685UL] = t4657->mX.mX[1456UL] * 1000.0;
    out->mLOG.mX[5686UL] = t4657->mX.mX[1455UL];
    out->mLOG.mX[5687UL] = intrm_sf_mf_57;
    out->mLOG.mX[5688UL] = t4657->mX.mX[1453UL];
    out->mLOG.mX[5689UL] = t4657->mX.mX[697UL];
    out->mLOG.mX[5690UL] = t4657->mX.mX[696UL];
    out->mLOG.mX[5691UL] = t4657->mX.mX[698UL];
    out->mLOG.mX[5692UL] = t4657->mX.mX[1453UL];
    out->mLOG.mX[5693UL] = t4657->mX.mX[1454UL];
    out->mLOG.mX[5694UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5695UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[5696UL] = t4657->mX.mX[698UL];
    out->mLOG.mX[5697UL] = t3748;
    out->mLOG.mX[5698UL] = zc_int365;
    out->mLOG.mX[5699UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly5_Module20_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly5_Module20_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[699UL] * t4657->mX.mX[699UL] * 0.0 + t4657->mX.mX[700UL] * t4657->mX.mX[700UL] * 0.0) + t4657->mX.mX[701UL] * t4657->mX.mX[701UL] * 0.0) + t4657->mX.mX[702UL] * t4657->mX.mX[702UL] * 0.0) + t4657->mX.mX[703UL] * t4657->mX.mX[703UL] * 0.0) * 0.001;
    out->mLOG.mX[5700UL] = t4657->mX.mX[1455UL];
    out->mLOG.mX[5701UL] = t4657->mX.mX[1455UL];
    out->mLOG.mX[5702UL] = t4657->mX.mX[696UL];
    out->mLOG.mX[5703UL] = BatteryPack_v2_ModuleAssembly5_Module20_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[5704UL] = t4657->mX.mX[696UL];
    out->mLOG.mX[5705UL] = t4657->mX.mX[696UL];
    out->mLOG.mX[5706UL] = t4657->mX.mX[1456UL] * 1000.0;
    out->mLOG.mX[5707UL] = intrm_sf_mf_57;
    out->mLOG.mX[5708UL] = t4657->mX.mX[696UL];
    out->mLOG.mX[5709UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5710UL] = BatteryPack_v2_ModuleAssembly5_Module20_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[5711UL] = BatteryPack_v2_ModuleAssembly5_Module20_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[5712UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[5713UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5714UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[5715UL] = zc_int365;
    out->mLOG.mX[5716UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[5717UL] = zc_int365;
    out->mLOG.mX[5718UL] = t4657->mX.mX[696UL];
    out->mLOG.mX[5719UL] = BatteryPack_v2_ModuleAssembly5_Module20_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[5720UL] = t4657->mX.mX[696UL];
    out->mLOG.mX[5721UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5722UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[5723UL] = t4657->mX.mX[698UL];
    out->mLOG.mX[5724UL] = zc_int365;
    out->mLOG.mX[5725UL] = 0.0;
    out->mLOG.mX[5726UL] = t4657->mX.mX[1455UL];
    out->mLOG.mX[5727UL] = t4657->mX.mX[1455UL];
    out->mLOG.mX[5728UL] = t4657->mX.mX[696UL];
    out->mLOG.mX[5729UL] = intrm_sf_mf_57;
    out->mLOG.mX[5730UL] = zc_int365 - BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[5731UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5732UL] = t4657->mX.mX[704UL];
    out->mLOG.mX[5733UL] = t4657->mX.mX[704UL];
    out->mLOG.mX[5734UL] = t4657->mX.mX[704UL];
    out->mLOG.mX[5735UL] = t4657->mX.mX[704UL];
    out->mLOG.mX[5736UL] = t4657->mX.mX[705UL] * 0.00027777777777777778;
    out->mLOG.mX[5737UL] = t4657->mX.mX[704UL];
    out->mLOG.mX[5738UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5739UL] = intrm_sf_mf_81;
    out->mLOG.mX[5740UL] = t4657->mX.mX[706UL];
    out->mLOG.mX[5741UL] = t4657->mX.mX[706UL];
    out->mLOG.mX[5742UL] = t4657->mX.mX[1459UL];
    out->mLOG.mX[5743UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    for (t2499 = 707UL; t2499 - 707UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 5037UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[5749UL] = t4657->mX.mX[1458UL];
    out->mLOG.mX[5750UL] = t4657->mX.mX[1460UL] * 1000.0;
    out->mLOG.mX[5751UL] = t4657->mX.mX[1459UL];
    out->mLOG.mX[5752UL] = zc_int258;
    out->mLOG.mX[5753UL] = t4657->mX.mX[1457UL];
    out->mLOG.mX[5754UL] = t4657->mX.mX[705UL];
    out->mLOG.mX[5755UL] = t4657->mX.mX[704UL];
    out->mLOG.mX[5756UL] = t4657->mX.mX[706UL];
    out->mLOG.mX[5757UL] = t4657->mX.mX[1457UL];
    out->mLOG.mX[5758UL] = t4657->mX.mX[1458UL];
    out->mLOG.mX[5759UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5760UL] = intrm_sf_mf_81;
    out->mLOG.mX[5761UL] = t4657->mX.mX[706UL];
    out->mLOG.mX[5762UL] = BatteryPack_v2_ModuleAssembly5_Module21_Cell_1_electricalModel0;
    out->mLOG.mX[5763UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[5764UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3757 > 8.200000000000002E-8 ? t3757 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[707UL] * t4657->mX.mX[707UL] * 0.0 + t4657->mX.mX[708UL] * t4657->mX.mX[708UL] * 0.0) + t4657->mX.mX[709UL] * t4657->mX.mX[709UL] * 0.0) + t4657->mX.mX[710UL] * t4657->mX.mX[710UL] * 0.0) + t4657->mX.mX[711UL] * t4657->mX.mX[711UL] * 0.0) * 0.001;
    out->mLOG.mX[5765UL] = t4657->mX.mX[1459UL];
    out->mLOG.mX[5766UL] = t4657->mX.mX[1459UL];
    out->mLOG.mX[5767UL] = t4657->mX.mX[704UL];
    out->mLOG.mX[5768UL] = BatteryPack_v2_ModuleAssembly5_Module21_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[5769UL] = t4657->mX.mX[704UL];
    out->mLOG.mX[5770UL] = t4657->mX.mX[704UL];
    out->mLOG.mX[5771UL] = t4657->mX.mX[1460UL] * 1000.0;
    out->mLOG.mX[5772UL] = zc_int258;
    out->mLOG.mX[5773UL] = t4657->mX.mX[704UL];
    out->mLOG.mX[5774UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5775UL] = BatteryPack_v2_ModuleAssembly5_Module21_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[5776UL] = BatteryPack_v2_ModuleAssembly5_Module21_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[5777UL] = intrm_sf_mf_81;
    out->mLOG.mX[5778UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5779UL] = intrm_sf_mf_81;
    out->mLOG.mX[5780UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[5781UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[5782UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[5783UL] = t4657->mX.mX[704UL];
    out->mLOG.mX[5784UL] = BatteryPack_v2_ModuleAssembly5_Module21_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[5785UL] = t4657->mX.mX[704UL];
    out->mLOG.mX[5786UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5787UL] = intrm_sf_mf_81;
    out->mLOG.mX[5788UL] = t4657->mX.mX[706UL];
    out->mLOG.mX[5789UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3;
    out->mLOG.mX[5790UL] = 0.0;
    out->mLOG.mX[5791UL] = t4657->mX.mX[1459UL];
    out->mLOG.mX[5792UL] = t4657->mX.mX[1459UL];
    out->mLOG.mX[5793UL] = t4657->mX.mX[704UL];
    out->mLOG.mX[5794UL] = zc_int258;
    out->mLOG.mX[5795UL] = BatteryPack_v2_ModuleAssembly5_Module15_Cell_1_electricalModel3 - intrm_sf_mf_81;
    out->mLOG.mX[5796UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5797UL] = t4657->mX.mX[712UL];
    out->mLOG.mX[5798UL] = t4657->mX.mX[712UL];
    out->mLOG.mX[5799UL] = t4657->mX.mX[712UL];
    out->mLOG.mX[5800UL] = t4657->mX.mX[712UL];
    out->mLOG.mX[5801UL] = t4657->mX.mX[713UL] * 0.00027777777777777778;
    out->mLOG.mX[5802UL] = t4657->mX.mX[712UL];
    out->mLOG.mX[5803UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5804UL] = zc_int362;
    out->mLOG.mX[5805UL] = t4657->mX.mX[714UL];
    out->mLOG.mX[5806UL] = t4657->mX.mX[714UL];
    out->mLOG.mX[5807UL] = t4657->mX.mX[1463UL];
    out->mLOG.mX[5808UL] = intrm_sf_mf_81;
    for (t2499 = 715UL; t2499 - 715UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 5094UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[5814UL] = t4657->mX.mX[1462UL];
    out->mLOG.mX[5815UL] = t4657->mX.mX[1464UL] * 1000.0;
    out->mLOG.mX[5816UL] = t4657->mX.mX[1463UL];
    out->mLOG.mX[5817UL] = zc_int262;
    out->mLOG.mX[5818UL] = t4657->mX.mX[1461UL];
    out->mLOG.mX[5819UL] = t4657->mX.mX[713UL];
    out->mLOG.mX[5820UL] = t4657->mX.mX[712UL];
    out->mLOG.mX[5821UL] = t4657->mX.mX[714UL];
    out->mLOG.mX[5822UL] = t4657->mX.mX[1461UL];
    out->mLOG.mX[5823UL] = t4657->mX.mX[1462UL];
    out->mLOG.mX[5824UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5825UL] = zc_int362;
    out->mLOG.mX[5826UL] = t4657->mX.mX[714UL];
    out->mLOG.mX[5827UL] = t3758;
    out->mLOG.mX[5828UL] = intrm_sf_mf_81;
    out->mLOG.mX[5829UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3762 > 8.200000000000002E-8 ? t3762 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[715UL] * t4657->mX.mX[715UL] * 0.0 + t4657->mX.mX[716UL] * t4657->mX.mX[716UL] * 0.0) + t4657->mX.mX[717UL] * t4657->mX.mX[717UL] * 0.0) + t4657->mX.mX[718UL] * t4657->mX.mX[718UL] * 0.0) + t4657->mX.mX[719UL] * t4657->mX.mX[719UL] * 0.0) * 0.001;
    out->mLOG.mX[5830UL] = t4657->mX.mX[1463UL];
    out->mLOG.mX[5831UL] = t4657->mX.mX[1463UL];
    out->mLOG.mX[5832UL] = t4657->mX.mX[712UL];
    out->mLOG.mX[5833UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[5834UL] = t4657->mX.mX[712UL];
    out->mLOG.mX[5835UL] = t4657->mX.mX[712UL];
    out->mLOG.mX[5836UL] = t4657->mX.mX[1464UL] * 1000.0;
    out->mLOG.mX[5837UL] = zc_int262;
    out->mLOG.mX[5838UL] = t4657->mX.mX[712UL];
    out->mLOG.mX[5839UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5840UL] = BatteryPack_v2_ModuleAssembly5_Module22_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[5841UL] = BatteryPack_v2_ModuleAssembly5_Module22_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[5842UL] = zc_int362;
    out->mLOG.mX[5843UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5844UL] = zc_int362;
    out->mLOG.mX[5845UL] = intrm_sf_mf_81;
    out->mLOG.mX[5846UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[5847UL] = intrm_sf_mf_81;
    out->mLOG.mX[5848UL] = t4657->mX.mX[712UL];
    out->mLOG.mX[5849UL] = BatteryPack_v2_ModuleAssembly5_Module22_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[5850UL] = t4657->mX.mX[712UL];
    out->mLOG.mX[5851UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5852UL] = zc_int362;
    out->mLOG.mX[5853UL] = t4657->mX.mX[714UL];
    out->mLOG.mX[5854UL] = intrm_sf_mf_81;
    out->mLOG.mX[5855UL] = 0.0;
    out->mLOG.mX[5856UL] = t4657->mX.mX[1463UL];
    out->mLOG.mX[5857UL] = t4657->mX.mX[1463UL];
    out->mLOG.mX[5858UL] = t4657->mX.mX[712UL];
    out->mLOG.mX[5859UL] = zc_int262;
    out->mLOG.mX[5860UL] = intrm_sf_mf_81 - zc_int362;
    out->mLOG.mX[5861UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5862UL] = t4657->mX.mX[720UL];
    out->mLOG.mX[5863UL] = t4657->mX.mX[720UL];
    out->mLOG.mX[5864UL] = t4657->mX.mX[720UL];
    out->mLOG.mX[5865UL] = t4657->mX.mX[720UL];
    out->mLOG.mX[5866UL] = t4657->mX.mX[721UL] * 0.00027777777777777778;
    out->mLOG.mX[5867UL] = t4657->mX.mX[720UL];
    out->mLOG.mX[5868UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5869UL] = intrm_sf_mf_80;
    out->mLOG.mX[5870UL] = t4657->mX.mX[722UL];
    out->mLOG.mX[5871UL] = t4657->mX.mX[722UL];
    out->mLOG.mX[5872UL] = t4657->mX.mX[1467UL];
    out->mLOG.mX[5873UL] = zc_int362;
    for (t2499 = 723UL; t2499 - 723UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 5151UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[5879UL] = t4657->mX.mX[1466UL];
    out->mLOG.mX[5880UL] = t4657->mX.mX[1468UL] * 1000.0;
    out->mLOG.mX[5881UL] = t4657->mX.mX[1467UL];
    out->mLOG.mX[5882UL] = t3609;
    out->mLOG.mX[5883UL] = t4657->mX.mX[1465UL];
    out->mLOG.mX[5884UL] = t4657->mX.mX[721UL];
    out->mLOG.mX[5885UL] = t4657->mX.mX[720UL];
    out->mLOG.mX[5886UL] = t4657->mX.mX[722UL];
    out->mLOG.mX[5887UL] = t4657->mX.mX[1465UL];
    out->mLOG.mX[5888UL] = t4657->mX.mX[1466UL];
    out->mLOG.mX[5889UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5890UL] = intrm_sf_mf_80;
    out->mLOG.mX[5891UL] = t4657->mX.mX[722UL];
    out->mLOG.mX[5892UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel0;
    out->mLOG.mX[5893UL] = zc_int362;
    out->mLOG.mX[5894UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly5_Module23_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly5_Module23_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[723UL] * t4657->mX.mX[723UL] * 0.0 + t4657->mX.mX[724UL] * t4657->mX.mX[724UL] * 0.0) + t4657->mX.mX[725UL] * t4657->mX.mX[725UL] * 0.0) + t4657->mX.mX[726UL] * t4657->mX.mX[726UL] * 0.0) + t4657->mX.mX[727UL] * t4657->mX.mX[727UL] * 0.0) * 0.001;
    out->mLOG.mX[5895UL] = t4657->mX.mX[1467UL];
    out->mLOG.mX[5896UL] = t4657->mX.mX[1467UL];
    out->mLOG.mX[5897UL] = t4657->mX.mX[720UL];
    out->mLOG.mX[5898UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[5899UL] = t4657->mX.mX[720UL];
    out->mLOG.mX[5900UL] = t4657->mX.mX[720UL];
    out->mLOG.mX[5901UL] = t4657->mX.mX[1468UL] * 1000.0;
    out->mLOG.mX[5902UL] = t3609;
    out->mLOG.mX[5903UL] = t4657->mX.mX[720UL];
    out->mLOG.mX[5904UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5905UL] = BatteryPack_v2_ModuleAssembly5_Module23_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[5906UL] = BatteryPack_v2_ModuleAssembly5_Module23_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[5907UL] = intrm_sf_mf_80;
    out->mLOG.mX[5908UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5909UL] = intrm_sf_mf_80;
    out->mLOG.mX[5910UL] = zc_int362;
    out->mLOG.mX[5911UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[5912UL] = zc_int362;
    out->mLOG.mX[5913UL] = t4657->mX.mX[720UL];
    out->mLOG.mX[5914UL] = BatteryPack_v2_ModuleAssembly5_Module23_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[5915UL] = t4657->mX.mX[720UL];
    out->mLOG.mX[5916UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5917UL] = intrm_sf_mf_80;
    out->mLOG.mX[5918UL] = t4657->mX.mX[722UL];
    out->mLOG.mX[5919UL] = zc_int362;
    out->mLOG.mX[5920UL] = 0.0;
    out->mLOG.mX[5921UL] = t4657->mX.mX[1467UL];
    out->mLOG.mX[5922UL] = t4657->mX.mX[1467UL];
    out->mLOG.mX[5923UL] = t4657->mX.mX[720UL];
    out->mLOG.mX[5924UL] = t3609;
    out->mLOG.mX[5925UL] = zc_int362 - intrm_sf_mf_80;
    out->mLOG.mX[5926UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5927UL] = t4657->mX.mX[728UL];
    out->mLOG.mX[5928UL] = t4657->mX.mX[728UL];
    out->mLOG.mX[5929UL] = t4657->mX.mX[728UL];
    out->mLOG.mX[5930UL] = t4657->mX.mX[728UL];
    out->mLOG.mX[5931UL] = t4657->mX.mX[729UL] * 0.00027777777777777778;
    out->mLOG.mX[5932UL] = t4657->mX.mX[728UL];
    out->mLOG.mX[5933UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5934UL] = zc_int383;
    out->mLOG.mX[5935UL] = t4657->mX.mX[730UL];
    out->mLOG.mX[5936UL] = t4657->mX.mX[730UL];
    out->mLOG.mX[5937UL] = t4657->mX.mX[1471UL];
    out->mLOG.mX[5938UL] = t3769;
    for (t2499 = 731UL; t2499 - 731UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 5208UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[5944UL] = t4657->mX.mX[1470UL];
    out->mLOG.mX[5945UL] = t4657->mX.mX[1472UL] * 1000.0;
    out->mLOG.mX[5946UL] = t4657->mX.mX[1471UL];
    out->mLOG.mX[5947UL] = t3559;
    out->mLOG.mX[5948UL] = t4657->mX.mX[1469UL];
    out->mLOG.mX[5949UL] = t4657->mX.mX[729UL];
    out->mLOG.mX[5950UL] = t4657->mX.mX[728UL];
    out->mLOG.mX[5951UL] = t4657->mX.mX[730UL];
    out->mLOG.mX[5952UL] = t4657->mX.mX[1469UL];
    out->mLOG.mX[5953UL] = t4657->mX.mX[1470UL];
    out->mLOG.mX[5954UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5955UL] = zc_int383;
    out->mLOG.mX[5956UL] = t4657->mX.mX[730UL];
    out->mLOG.mX[5957UL] = t3768;
    out->mLOG.mX[5958UL] = t3769;
    out->mLOG.mX[5959UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly5_Module_1_1_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly5_Module_1_1_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[731UL] * t4657->mX.mX[731UL] * 0.0 + t4657->mX.mX[732UL] * t4657->mX.mX[732UL] * 0.0) + t4657->mX.mX[733UL] * t4657->mX.mX[733UL] * 0.0) + t4657->mX.mX[734UL] * t4657->mX.mX[734UL] * 0.0) + t4657->mX.mX[735UL] * t4657->mX.mX[735UL] * 0.0) * 0.001;
    out->mLOG.mX[5960UL] = t4657->mX.mX[1471UL];
    out->mLOG.mX[5961UL] = t4657->mX.mX[1471UL];
    out->mLOG.mX[5962UL] = t4657->mX.mX[728UL];
    out->mLOG.mX[5963UL] = t3770 * 1000.0;
    out->mLOG.mX[5964UL] = t4657->mX.mX[728UL];
    out->mLOG.mX[5965UL] = t4657->mX.mX[728UL];
    out->mLOG.mX[5966UL] = t4657->mX.mX[1472UL] * 1000.0;
    out->mLOG.mX[5967UL] = t3559;
    out->mLOG.mX[5968UL] = t4657->mX.mX[728UL];
    out->mLOG.mX[5969UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5970UL] = BatteryPack_v2_ModuleAssembly5_Module_1_1_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[5971UL] = BatteryPack_v2_ModuleAssembly5_Module_1_1_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[5972UL] = zc_int383;
    out->mLOG.mX[5973UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5974UL] = zc_int383;
    out->mLOG.mX[5975UL] = t3769;
    out->mLOG.mX[5976UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[5977UL] = t3769;
    out->mLOG.mX[5978UL] = t4657->mX.mX[728UL];
    out->mLOG.mX[5979UL] = t3770 * -1000.0;
    out->mLOG.mX[5980UL] = t4657->mX.mX[728UL];
    out->mLOG.mX[5981UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[5982UL] = zc_int383;
    out->mLOG.mX[5983UL] = t4657->mX.mX[730UL];
    out->mLOG.mX[5984UL] = t3769;
    out->mLOG.mX[5985UL] = 0.0;
    out->mLOG.mX[5986UL] = t4657->mX.mX[1471UL];
    out->mLOG.mX[5987UL] = t4657->mX.mX[1471UL];
    out->mLOG.mX[5988UL] = t4657->mX.mX[728UL];
    out->mLOG.mX[5989UL] = t3559;
    out->mLOG.mX[5990UL] = t3769 - zc_int383;
    out->mLOG.mX[5991UL] = t3769;
    out->mLOG.mX[5992UL] = intrm_sf_mf_80;
    out->mLOG.mX[5993UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5994UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[5995UL] = t4657->mX.mX[736UL];
    out->mLOG.mX[5996UL] = t4657->mX.mX[736UL];
    out->mLOG.mX[5997UL] = t4657->mX.mX[736UL];
    out->mLOG.mX[5998UL] = t4657->mX.mX[736UL];
    out->mLOG.mX[5999UL] = t4657->mX.mX[737UL] * 0.00027777777777777778;
    out->mLOG.mX[6000UL] = t4657->mX.mX[736UL];
    out->mLOG.mX[6001UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6002UL] = intrm_sf_mf_79;
    out->mLOG.mX[6003UL] = t4657->mX.mX[738UL];
    out->mLOG.mX[6004UL] = t4657->mX.mX[738UL];
    out->mLOG.mX[6005UL] = t4657->mX.mX[1475UL];
    out->mLOG.mX[6006UL] = zc_int360;
    for (t2499 = 739UL; t2499 - 739UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 5268UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[6012UL] = t4657->mX.mX[1474UL];
    out->mLOG.mX[6013UL] = t4657->mX.mX[1476UL] * 1000.0;
    out->mLOG.mX[6014UL] = t4657->mX.mX[1475UL];
    out->mLOG.mX[6015UL] = t3614;
    out->mLOG.mX[6016UL] = t4657->mX.mX[1473UL];
    out->mLOG.mX[6017UL] = t4657->mX.mX[737UL];
    out->mLOG.mX[6018UL] = t4657->mX.mX[736UL];
    out->mLOG.mX[6019UL] = t4657->mX.mX[738UL];
    out->mLOG.mX[6020UL] = t4657->mX.mX[1473UL];
    out->mLOG.mX[6021UL] = t4657->mX.mX[1474UL];
    out->mLOG.mX[6022UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6023UL] = intrm_sf_mf_79;
    out->mLOG.mX[6024UL] = t4657->mX.mX[738UL];
    out->mLOG.mX[6025UL] = t3773;
    out->mLOG.mX[6026UL] = zc_int360;
    out->mLOG.mX[6027UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3777 > 8.200000000000002E-8 ? t3777 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[739UL] * t4657->mX.mX[739UL] * 0.0 + t4657->mX.mX[740UL] * t4657->mX.mX[740UL] * 0.0) + t4657->mX.mX[741UL] * t4657->mX.mX[741UL] * 0.0) + t4657->mX.mX[742UL] * t4657->mX.mX[742UL] * 0.0) + t4657->mX.mX[743UL] * t4657->mX.mX[743UL] * 0.0) * 0.001;
    out->mLOG.mX[6028UL] = t4657->mX.mX[1475UL];
    out->mLOG.mX[6029UL] = t4657->mX.mX[1475UL];
    out->mLOG.mX[6030UL] = t4657->mX.mX[736UL];
    out->mLOG.mX[6031UL] = BatteryPack_v2_ModuleAssembly6_Module02_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[6032UL] = t4657->mX.mX[736UL];
    out->mLOG.mX[6033UL] = t4657->mX.mX[736UL];
    out->mLOG.mX[6034UL] = t4657->mX.mX[1476UL] * 1000.0;
    out->mLOG.mX[6035UL] = t3614;
    out->mLOG.mX[6036UL] = t4657->mX.mX[736UL];
    out->mLOG.mX[6037UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6038UL] = BatteryPack_v2_ModuleAssembly6_Module02_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[6039UL] = BatteryPack_v2_ModuleAssembly6_Module02_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[6040UL] = intrm_sf_mf_79;
    out->mLOG.mX[6041UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6042UL] = intrm_sf_mf_79;
    out->mLOG.mX[6043UL] = zc_int360;
    out->mLOG.mX[6044UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[6045UL] = zc_int360;
    out->mLOG.mX[6046UL] = t4657->mX.mX[736UL];
    out->mLOG.mX[6047UL] = BatteryPack_v2_ModuleAssembly6_Module02_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[6048UL] = t4657->mX.mX[736UL];
    out->mLOG.mX[6049UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6050UL] = intrm_sf_mf_79;
    out->mLOG.mX[6051UL] = t4657->mX.mX[738UL];
    out->mLOG.mX[6052UL] = zc_int360;
    out->mLOG.mX[6053UL] = 0.0;
    out->mLOG.mX[6054UL] = t4657->mX.mX[1475UL];
    out->mLOG.mX[6055UL] = t4657->mX.mX[1475UL];
    out->mLOG.mX[6056UL] = t4657->mX.mX[736UL];
    out->mLOG.mX[6057UL] = t3614;
    out->mLOG.mX[6058UL] = zc_int360 - intrm_sf_mf_79;
    out->mLOG.mX[6059UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6060UL] = t4657->mX.mX[744UL];
    out->mLOG.mX[6061UL] = t4657->mX.mX[744UL];
    out->mLOG.mX[6062UL] = t4657->mX.mX[744UL];
    out->mLOG.mX[6063UL] = t4657->mX.mX[744UL];
    out->mLOG.mX[6064UL] = t4657->mX.mX[745UL] * 0.00027777777777777778;
    out->mLOG.mX[6065UL] = t4657->mX.mX[744UL];
    out->mLOG.mX[6066UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6067UL] = zc_int358;
    out->mLOG.mX[6068UL] = t4657->mX.mX[746UL];
    out->mLOG.mX[6069UL] = t4657->mX.mX[746UL];
    out->mLOG.mX[6070UL] = t4657->mX.mX[1479UL];
    out->mLOG.mX[6071UL] = intrm_sf_mf_79;
    for (t2499 = 747UL; t2499 - 747UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 5325UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[6077UL] = t4657->mX.mX[1478UL];
    out->mLOG.mX[6078UL] = t4657->mX.mX[1480UL] * 1000.0;
    out->mLOG.mX[6079UL] = t4657->mX.mX[1479UL];
    out->mLOG.mX[6080UL] = zc_int276;
    out->mLOG.mX[6081UL] = t4657->mX.mX[1477UL];
    out->mLOG.mX[6082UL] = t4657->mX.mX[745UL];
    out->mLOG.mX[6083UL] = t4657->mX.mX[744UL];
    out->mLOG.mX[6084UL] = t4657->mX.mX[746UL];
    out->mLOG.mX[6085UL] = t4657->mX.mX[1477UL];
    out->mLOG.mX[6086UL] = t4657->mX.mX[1478UL];
    out->mLOG.mX[6087UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6088UL] = zc_int358;
    out->mLOG.mX[6089UL] = t4657->mX.mX[746UL];
    out->mLOG.mX[6090UL] = BatteryPack_v2_ModuleAssembly6_Module03_Cell_1_electricalModel0;
    out->mLOG.mX[6091UL] = intrm_sf_mf_79;
    out->mLOG.mX[6092UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly6_Module03_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly6_Module03_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[747UL] * t4657->mX.mX[747UL] * 0.0 + t4657->mX.mX[748UL] * t4657->mX.mX[748UL] * 0.0) + t4657->mX.mX[749UL] * t4657->mX.mX[749UL] * 0.0) + t4657->mX.mX[750UL] * t4657->mX.mX[750UL] * 0.0) + t4657->mX.mX[751UL] * t4657->mX.mX[751UL] * 0.0) * 0.001;
    out->mLOG.mX[6093UL] = t4657->mX.mX[1479UL];
    out->mLOG.mX[6094UL] = t4657->mX.mX[1479UL];
    out->mLOG.mX[6095UL] = t4657->mX.mX[744UL];
    out->mLOG.mX[6096UL] = t3780 * 1000.0;
    out->mLOG.mX[6097UL] = t4657->mX.mX[744UL];
    out->mLOG.mX[6098UL] = t4657->mX.mX[744UL];
    out->mLOG.mX[6099UL] = t4657->mX.mX[1480UL] * 1000.0;
    out->mLOG.mX[6100UL] = zc_int276;
    out->mLOG.mX[6101UL] = t4657->mX.mX[744UL];
    out->mLOG.mX[6102UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6103UL] = BatteryPack_v2_ModuleAssembly6_Module03_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[6104UL] = BatteryPack_v2_ModuleAssembly6_Module03_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[6105UL] = zc_int358;
    out->mLOG.mX[6106UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6107UL] = zc_int358;
    out->mLOG.mX[6108UL] = intrm_sf_mf_79;
    out->mLOG.mX[6109UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[6110UL] = intrm_sf_mf_79;
    out->mLOG.mX[6111UL] = t4657->mX.mX[744UL];
    out->mLOG.mX[6112UL] = t3780 * -1000.0;
    out->mLOG.mX[6113UL] = t4657->mX.mX[744UL];
    out->mLOG.mX[6114UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6115UL] = zc_int358;
    out->mLOG.mX[6116UL] = t4657->mX.mX[746UL];
    out->mLOG.mX[6117UL] = intrm_sf_mf_79;
    out->mLOG.mX[6118UL] = 0.0;
    out->mLOG.mX[6119UL] = t4657->mX.mX[1479UL];
    out->mLOG.mX[6120UL] = t4657->mX.mX[1479UL];
    out->mLOG.mX[6121UL] = t4657->mX.mX[744UL];
    out->mLOG.mX[6122UL] = zc_int276;
    out->mLOG.mX[6123UL] = intrm_sf_mf_79 - zc_int358;
    out->mLOG.mX[6124UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6125UL] = t4657->mX.mX[752UL];
    out->mLOG.mX[6126UL] = t4657->mX.mX[752UL];
    out->mLOG.mX[6127UL] = t4657->mX.mX[752UL];
    out->mLOG.mX[6128UL] = t4657->mX.mX[752UL];
    out->mLOG.mX[6129UL] = t4657->mX.mX[753UL] * 0.00027777777777777778;
    out->mLOG.mX[6130UL] = t4657->mX.mX[752UL];
    out->mLOG.mX[6131UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6132UL] = zc_int357;
    out->mLOG.mX[6133UL] = t4657->mX.mX[754UL];
    out->mLOG.mX[6134UL] = t4657->mX.mX[754UL];
    out->mLOG.mX[6135UL] = t4657->mX.mX[1483UL];
    out->mLOG.mX[6136UL] = zc_int358;
    for (t2499 = 755UL; t2499 - 755UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 5382UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[6142UL] = t4657->mX.mX[1482UL];
    out->mLOG.mX[6143UL] = t4657->mX.mX[1484UL] * 1000.0;
    out->mLOG.mX[6144UL] = t4657->mX.mX[1483UL];
    out->mLOG.mX[6145UL] = zc_int281;
    out->mLOG.mX[6146UL] = t4657->mX.mX[1481UL];
    out->mLOG.mX[6147UL] = t4657->mX.mX[753UL];
    out->mLOG.mX[6148UL] = t4657->mX.mX[752UL];
    out->mLOG.mX[6149UL] = t4657->mX.mX[754UL];
    out->mLOG.mX[6150UL] = t4657->mX.mX[1481UL];
    out->mLOG.mX[6151UL] = t4657->mX.mX[1482UL];
    out->mLOG.mX[6152UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6153UL] = zc_int357;
    out->mLOG.mX[6154UL] = t4657->mX.mX[754UL];
    out->mLOG.mX[6155UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_electricalModel0;
    out->mLOG.mX[6156UL] = zc_int358;
    out->mLOG.mX[6157UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly6_Module04_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly6_Module04_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[755UL] * t4657->mX.mX[755UL] * 0.0 + t4657->mX.mX[756UL] * t4657->mX.mX[756UL] * 0.0) + t4657->mX.mX[757UL] * t4657->mX.mX[757UL] * 0.0) + t4657->mX.mX[758UL] * t4657->mX.mX[758UL] * 0.0) + t4657->mX.mX[759UL] * t4657->mX.mX[759UL] * 0.0) * 0.001;
    out->mLOG.mX[6158UL] = t4657->mX.mX[1483UL];
    out->mLOG.mX[6159UL] = t4657->mX.mX[1483UL];
    out->mLOG.mX[6160UL] = t4657->mX.mX[752UL];
    out->mLOG.mX[6161UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[6162UL] = t4657->mX.mX[752UL];
    out->mLOG.mX[6163UL] = t4657->mX.mX[752UL];
    out->mLOG.mX[6164UL] = t4657->mX.mX[1484UL] * 1000.0;
    out->mLOG.mX[6165UL] = zc_int281;
    out->mLOG.mX[6166UL] = t4657->mX.mX[752UL];
    out->mLOG.mX[6167UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6168UL] = BatteryPack_v2_ModuleAssembly6_Module04_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[6169UL] = BatteryPack_v2_ModuleAssembly6_Module04_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[6170UL] = zc_int357;
    out->mLOG.mX[6171UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6172UL] = zc_int357;
    out->mLOG.mX[6173UL] = zc_int358;
    out->mLOG.mX[6174UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[6175UL] = zc_int358;
    out->mLOG.mX[6176UL] = t4657->mX.mX[752UL];
    out->mLOG.mX[6177UL] = BatteryPack_v2_ModuleAssembly6_Module04_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[6178UL] = t4657->mX.mX[752UL];
    out->mLOG.mX[6179UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6180UL] = zc_int357;
    out->mLOG.mX[6181UL] = t4657->mX.mX[754UL];
    out->mLOG.mX[6182UL] = zc_int358;
    out->mLOG.mX[6183UL] = 0.0;
    out->mLOG.mX[6184UL] = t4657->mX.mX[1483UL];
    out->mLOG.mX[6185UL] = t4657->mX.mX[1483UL];
    out->mLOG.mX[6186UL] = t4657->mX.mX[752UL];
    out->mLOG.mX[6187UL] = zc_int281;
    out->mLOG.mX[6188UL] = zc_int358 - zc_int357;
    out->mLOG.mX[6189UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6190UL] = t4657->mX.mX[760UL];
    out->mLOG.mX[6191UL] = t4657->mX.mX[760UL];
    out->mLOG.mX[6192UL] = t4657->mX.mX[760UL];
    out->mLOG.mX[6193UL] = t4657->mX.mX[760UL];
    out->mLOG.mX[6194UL] = t4657->mX.mX[761UL] * 0.00027777777777777778;
    out->mLOG.mX[6195UL] = t4657->mX.mX[760UL];
    out->mLOG.mX[6196UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6197UL] = zc_int356;
    out->mLOG.mX[6198UL] = t4657->mX.mX[762UL];
    out->mLOG.mX[6199UL] = t4657->mX.mX[762UL];
    out->mLOG.mX[6200UL] = t4657->mX.mX[1487UL];
    out->mLOG.mX[6201UL] = zc_int357;
    for (t2499 = 763UL; t2499 - 763UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 5439UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[6207UL] = t4657->mX.mX[1486UL];
    out->mLOG.mX[6208UL] = t4657->mX.mX[1488UL] * 1000.0;
    out->mLOG.mX[6209UL] = t4657->mX.mX[1487UL];
    out->mLOG.mX[6210UL] = zc_int279;
    out->mLOG.mX[6211UL] = t4657->mX.mX[1485UL];
    out->mLOG.mX[6212UL] = t4657->mX.mX[761UL];
    out->mLOG.mX[6213UL] = t4657->mX.mX[760UL];
    out->mLOG.mX[6214UL] = t4657->mX.mX[762UL];
    out->mLOG.mX[6215UL] = t4657->mX.mX[1485UL];
    out->mLOG.mX[6216UL] = t4657->mX.mX[1486UL];
    out->mLOG.mX[6217UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6218UL] = zc_int356;
    out->mLOG.mX[6219UL] = t4657->mX.mX[762UL];
    out->mLOG.mX[6220UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel0;
    out->mLOG.mX[6221UL] = zc_int357;
    out->mLOG.mX[6222UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3792 > 8.200000000000002E-8 ? t3792 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[763UL] * t4657->mX.mX[763UL] * 0.0 + t4657->mX.mX[764UL] * t4657->mX.mX[764UL] * 0.0) + t4657->mX.mX[765UL] * t4657->mX.mX[765UL] * 0.0) + t4657->mX.mX[766UL] * t4657->mX.mX[766UL] * 0.0) + t4657->mX.mX[767UL] * t4657->mX.mX[767UL] * 0.0) * 0.001;
    out->mLOG.mX[6223UL] = t4657->mX.mX[1487UL];
    out->mLOG.mX[6224UL] = t4657->mX.mX[1487UL];
    out->mLOG.mX[6225UL] = t4657->mX.mX[760UL];
    out->mLOG.mX[6226UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[6227UL] = t4657->mX.mX[760UL];
    out->mLOG.mX[6228UL] = t4657->mX.mX[760UL];
    out->mLOG.mX[6229UL] = t4657->mX.mX[1488UL] * 1000.0;
    out->mLOG.mX[6230UL] = zc_int279;
    out->mLOG.mX[6231UL] = t4657->mX.mX[760UL];
    out->mLOG.mX[6232UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6233UL] = BatteryPack_v2_ModuleAssembly6_Module05_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[6234UL] = BatteryPack_v2_ModuleAssembly6_Module05_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[6235UL] = zc_int356;
    out->mLOG.mX[6236UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6237UL] = zc_int356;
    out->mLOG.mX[6238UL] = zc_int357;
    out->mLOG.mX[6239UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[6240UL] = zc_int357;
    out->mLOG.mX[6241UL] = t4657->mX.mX[760UL];
    out->mLOG.mX[6242UL] = BatteryPack_v2_ModuleAssembly6_Module05_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[6243UL] = t4657->mX.mX[760UL];
    out->mLOG.mX[6244UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6245UL] = zc_int356;
    out->mLOG.mX[6246UL] = t4657->mX.mX[762UL];
    out->mLOG.mX[6247UL] = zc_int357;
    out->mLOG.mX[6248UL] = 0.0;
    out->mLOG.mX[6249UL] = t4657->mX.mX[1487UL];
    out->mLOG.mX[6250UL] = t4657->mX.mX[1487UL];
    out->mLOG.mX[6251UL] = t4657->mX.mX[760UL];
    out->mLOG.mX[6252UL] = zc_int279;
    out->mLOG.mX[6253UL] = zc_int357 - zc_int356;
    out->mLOG.mX[6254UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6255UL] = t4657->mX.mX[768UL];
    out->mLOG.mX[6256UL] = t4657->mX.mX[768UL];
    out->mLOG.mX[6257UL] = t4657->mX.mX[768UL];
    out->mLOG.mX[6258UL] = t4657->mX.mX[768UL];
    out->mLOG.mX[6259UL] = t4657->mX.mX[769UL] * 0.00027777777777777778;
    out->mLOG.mX[6260UL] = t4657->mX.mX[768UL];
    out->mLOG.mX[6261UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6262UL] = t3699;
    out->mLOG.mX[6263UL] = t4657->mX.mX[770UL];
    out->mLOG.mX[6264UL] = t4657->mX.mX[770UL];
    out->mLOG.mX[6265UL] = t4657->mX.mX[1491UL];
    out->mLOG.mX[6266UL] = zc_int356;
    for (t2499 = 771UL; t2499 - 771UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 5496UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[6272UL] = t4657->mX.mX[1490UL];
    out->mLOG.mX[6273UL] = t4657->mX.mX[1492UL] * 1000.0;
    out->mLOG.mX[6274UL] = t4657->mX.mX[1491UL];
    out->mLOG.mX[6275UL] = zc_int283;
    out->mLOG.mX[6276UL] = t4657->mX.mX[1489UL];
    out->mLOG.mX[6277UL] = t4657->mX.mX[769UL];
    out->mLOG.mX[6278UL] = t4657->mX.mX[768UL];
    out->mLOG.mX[6279UL] = t4657->mX.mX[770UL];
    out->mLOG.mX[6280UL] = t4657->mX.mX[1489UL];
    out->mLOG.mX[6281UL] = t4657->mX.mX[1490UL];
    out->mLOG.mX[6282UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6283UL] = t3699;
    out->mLOG.mX[6284UL] = t4657->mX.mX[770UL];
    out->mLOG.mX[6285UL] = BatteryPack_v2_ModuleAssembly6_Module06_Cell_1_electricalModel0;
    out->mLOG.mX[6286UL] = zc_int356;
    out->mLOG.mX[6287UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly6_Module06_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly6_Module06_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[771UL] * t4657->mX.mX[771UL] * 0.0 + t4657->mX.mX[772UL] * t4657->mX.mX[772UL] * 0.0) + t4657->mX.mX[773UL] * t4657->mX.mX[773UL] * 0.0) + t4657->mX.mX[774UL] * t4657->mX.mX[774UL] * 0.0) + t4657->mX.mX[775UL] * t4657->mX.mX[775UL] * 0.0) * 0.001;
    out->mLOG.mX[6288UL] = t4657->mX.mX[1491UL];
    out->mLOG.mX[6289UL] = t4657->mX.mX[1491UL];
    out->mLOG.mX[6290UL] = t4657->mX.mX[768UL];
    out->mLOG.mX[6291UL] = BatteryPack_v2_ModuleAssembly6_Module06_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[6292UL] = t4657->mX.mX[768UL];
    out->mLOG.mX[6293UL] = t4657->mX.mX[768UL];
    out->mLOG.mX[6294UL] = t4657->mX.mX[1492UL] * 1000.0;
    out->mLOG.mX[6295UL] = zc_int283;
    out->mLOG.mX[6296UL] = t4657->mX.mX[768UL];
    out->mLOG.mX[6297UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6298UL] = BatteryPack_v2_ModuleAssembly6_Module06_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[6299UL] = BatteryPack_v2_ModuleAssembly6_Module06_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[6300UL] = t3699;
    out->mLOG.mX[6301UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6302UL] = t3699;
    out->mLOG.mX[6303UL] = zc_int356;
    out->mLOG.mX[6304UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[6305UL] = zc_int356;
    out->mLOG.mX[6306UL] = t4657->mX.mX[768UL];
    out->mLOG.mX[6307UL] = BatteryPack_v2_ModuleAssembly6_Module06_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[6308UL] = t4657->mX.mX[768UL];
    out->mLOG.mX[6309UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6310UL] = t3699;
    out->mLOG.mX[6311UL] = t4657->mX.mX[770UL];
    out->mLOG.mX[6312UL] = zc_int356;
    out->mLOG.mX[6313UL] = 0.0;
    out->mLOG.mX[6314UL] = t4657->mX.mX[1491UL];
    out->mLOG.mX[6315UL] = t4657->mX.mX[1491UL];
    out->mLOG.mX[6316UL] = t4657->mX.mX[768UL];
    out->mLOG.mX[6317UL] = zc_int283;
    out->mLOG.mX[6318UL] = zc_int356 - t3699;
    out->mLOG.mX[6319UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6320UL] = t4657->mX.mX[776UL];
    out->mLOG.mX[6321UL] = t4657->mX.mX[776UL];
    out->mLOG.mX[6322UL] = t4657->mX.mX[776UL];
    out->mLOG.mX[6323UL] = t4657->mX.mX[776UL];
    out->mLOG.mX[6324UL] = t4657->mX.mX[777UL] * 0.00027777777777777778;
    out->mLOG.mX[6325UL] = t4657->mX.mX[776UL];
    out->mLOG.mX[6326UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6327UL] = zc_int354;
    out->mLOG.mX[6328UL] = t4657->mX.mX[778UL];
    out->mLOG.mX[6329UL] = t4657->mX.mX[778UL];
    out->mLOG.mX[6330UL] = t4657->mX.mX[1495UL];
    out->mLOG.mX[6331UL] = t3699;
    for (t2499 = 779UL; t2499 - 779UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 5553UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[6337UL] = t4657->mX.mX[1494UL];
    out->mLOG.mX[6338UL] = t4657->mX.mX[1496UL] * 1000.0;
    out->mLOG.mX[6339UL] = t4657->mX.mX[1495UL];
    out->mLOG.mX[6340UL] = zc_int290;
    out->mLOG.mX[6341UL] = t4657->mX.mX[1493UL];
    out->mLOG.mX[6342UL] = t4657->mX.mX[777UL];
    out->mLOG.mX[6343UL] = t4657->mX.mX[776UL];
    out->mLOG.mX[6344UL] = t4657->mX.mX[778UL];
    out->mLOG.mX[6345UL] = t4657->mX.mX[1493UL];
    out->mLOG.mX[6346UL] = t4657->mX.mX[1494UL];
    out->mLOG.mX[6347UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6348UL] = zc_int354;
    out->mLOG.mX[6349UL] = t4657->mX.mX[778UL];
    out->mLOG.mX[6350UL] = t3798;
    out->mLOG.mX[6351UL] = t3699;
    out->mLOG.mX[6352UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly6_Module07_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly6_Module07_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[779UL] * t4657->mX.mX[779UL] * 0.0 + t4657->mX.mX[780UL] * t4657->mX.mX[780UL] * 0.0) + t4657->mX.mX[781UL] * t4657->mX.mX[781UL] * 0.0) + t4657->mX.mX[782UL] * t4657->mX.mX[782UL] * 0.0) + t4657->mX.mX[783UL] * t4657->mX.mX[783UL] * 0.0) * 0.001;
    out->mLOG.mX[6353UL] = t4657->mX.mX[1495UL];
    out->mLOG.mX[6354UL] = t4657->mX.mX[1495UL];
    out->mLOG.mX[6355UL] = t4657->mX.mX[776UL];
    out->mLOG.mX[6356UL] = BatteryPack_v2_ModuleAssembly6_Module07_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[6357UL] = t4657->mX.mX[776UL];
    out->mLOG.mX[6358UL] = t4657->mX.mX[776UL];
    out->mLOG.mX[6359UL] = t4657->mX.mX[1496UL] * 1000.0;
    out->mLOG.mX[6360UL] = zc_int290;
    out->mLOG.mX[6361UL] = t4657->mX.mX[776UL];
    out->mLOG.mX[6362UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6363UL] = BatteryPack_v2_ModuleAssembly6_Module07_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[6364UL] = BatteryPack_v2_ModuleAssembly6_Module07_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[6365UL] = zc_int354;
    out->mLOG.mX[6366UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6367UL] = zc_int354;
    out->mLOG.mX[6368UL] = t3699;
    out->mLOG.mX[6369UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[6370UL] = t3699;
    out->mLOG.mX[6371UL] = t4657->mX.mX[776UL];
    out->mLOG.mX[6372UL] = BatteryPack_v2_ModuleAssembly6_Module07_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[6373UL] = t4657->mX.mX[776UL];
    out->mLOG.mX[6374UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6375UL] = zc_int354;
    out->mLOG.mX[6376UL] = t4657->mX.mX[778UL];
    out->mLOG.mX[6377UL] = t3699;
    out->mLOG.mX[6378UL] = 0.0;
    out->mLOG.mX[6379UL] = t4657->mX.mX[1495UL];
    out->mLOG.mX[6380UL] = t4657->mX.mX[1495UL];
    out->mLOG.mX[6381UL] = t4657->mX.mX[776UL];
    out->mLOG.mX[6382UL] = zc_int290;
    out->mLOG.mX[6383UL] = t3699 - zc_int354;
    out->mLOG.mX[6384UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6385UL] = t4657->mX.mX[784UL];
    out->mLOG.mX[6386UL] = t4657->mX.mX[784UL];
    out->mLOG.mX[6387UL] = t4657->mX.mX[784UL];
    out->mLOG.mX[6388UL] = t4657->mX.mX[784UL];
    out->mLOG.mX[6389UL] = t4657->mX.mX[785UL] * 0.00027777777777777778;
    out->mLOG.mX[6390UL] = t4657->mX.mX[784UL];
    out->mLOG.mX[6391UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6392UL] = t3694;
    out->mLOG.mX[6393UL] = t4657->mX.mX[786UL];
    out->mLOG.mX[6394UL] = t4657->mX.mX[786UL];
    out->mLOG.mX[6395UL] = t4657->mX.mX[1499UL];
    out->mLOG.mX[6396UL] = zc_int354;
    for (t2499 = 787UL; t2499 - 787UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 5610UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[6402UL] = t4657->mX.mX[1498UL];
    out->mLOG.mX[6403UL] = t4657->mX.mX[1500UL] * 1000.0;
    out->mLOG.mX[6404UL] = t4657->mX.mX[1499UL];
    out->mLOG.mX[6405UL] = zc_int293;
    out->mLOG.mX[6406UL] = t4657->mX.mX[1497UL];
    out->mLOG.mX[6407UL] = t4657->mX.mX[785UL];
    out->mLOG.mX[6408UL] = t4657->mX.mX[784UL];
    out->mLOG.mX[6409UL] = t4657->mX.mX[786UL];
    out->mLOG.mX[6410UL] = t4657->mX.mX[1497UL];
    out->mLOG.mX[6411UL] = t4657->mX.mX[1498UL];
    out->mLOG.mX[6412UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6413UL] = t3694;
    out->mLOG.mX[6414UL] = t4657->mX.mX[786UL];
    out->mLOG.mX[6415UL] = t3803;
    out->mLOG.mX[6416UL] = zc_int354;
    out->mLOG.mX[6417UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3807 > 8.200000000000002E-8 ? t3807 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[787UL] * t4657->mX.mX[787UL] * 0.0 + t4657->mX.mX[788UL] * t4657->mX.mX[788UL] * 0.0) + t4657->mX.mX[789UL] * t4657->mX.mX[789UL] * 0.0) + t4657->mX.mX[790UL] * t4657->mX.mX[790UL] * 0.0) + t4657->mX.mX[791UL] * t4657->mX.mX[791UL] * 0.0) * 0.001;
    out->mLOG.mX[6418UL] = t4657->mX.mX[1499UL];
    out->mLOG.mX[6419UL] = t4657->mX.mX[1499UL];
    out->mLOG.mX[6420UL] = t4657->mX.mX[784UL];
    out->mLOG.mX[6421UL] = t3805 * 1000.0;
    out->mLOG.mX[6422UL] = t4657->mX.mX[784UL];
    out->mLOG.mX[6423UL] = t4657->mX.mX[784UL];
    out->mLOG.mX[6424UL] = t4657->mX.mX[1500UL] * 1000.0;
    out->mLOG.mX[6425UL] = zc_int293;
    out->mLOG.mX[6426UL] = t4657->mX.mX[784UL];
    out->mLOG.mX[6427UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6428UL] = BatteryPack_v2_ModuleAssembly6_Module08_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[6429UL] = BatteryPack_v2_ModuleAssembly6_Module08_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[6430UL] = t3694;
    out->mLOG.mX[6431UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6432UL] = t3694;
    out->mLOG.mX[6433UL] = zc_int354;
    out->mLOG.mX[6434UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[6435UL] = zc_int354;
    out->mLOG.mX[6436UL] = t4657->mX.mX[784UL];
    out->mLOG.mX[6437UL] = t3805 * -1000.0;
    out->mLOG.mX[6438UL] = t4657->mX.mX[784UL];
    out->mLOG.mX[6439UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6440UL] = t3694;
    out->mLOG.mX[6441UL] = t4657->mX.mX[786UL];
    out->mLOG.mX[6442UL] = zc_int354;
    out->mLOG.mX[6443UL] = 0.0;
    out->mLOG.mX[6444UL] = t4657->mX.mX[1499UL];
    out->mLOG.mX[6445UL] = t4657->mX.mX[1499UL];
    out->mLOG.mX[6446UL] = t4657->mX.mX[784UL];
    out->mLOG.mX[6447UL] = zc_int293;
    out->mLOG.mX[6448UL] = zc_int354 - t3694;
    out->mLOG.mX[6449UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6450UL] = t4657->mX.mX[792UL];
    out->mLOG.mX[6451UL] = t4657->mX.mX[792UL];
    out->mLOG.mX[6452UL] = t4657->mX.mX[792UL];
    out->mLOG.mX[6453UL] = t4657->mX.mX[792UL];
    out->mLOG.mX[6454UL] = t4657->mX.mX[793UL] * 0.00027777777777777778;
    out->mLOG.mX[6455UL] = t4657->mX.mX[792UL];
    out->mLOG.mX[6456UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6457UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[6458UL] = t4657->mX.mX[794UL];
    out->mLOG.mX[6459UL] = t4657->mX.mX[794UL];
    out->mLOG.mX[6460UL] = t4657->mX.mX[1503UL];
    out->mLOG.mX[6461UL] = t3694;
    for (t2499 = 795UL; t2499 - 795UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 5667UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[6467UL] = t4657->mX.mX[1502UL];
    out->mLOG.mX[6468UL] = t4657->mX.mX[1504UL] * 1000.0;
    out->mLOG.mX[6469UL] = t4657->mX.mX[1503UL];
    out->mLOG.mX[6470UL] = zc_int289;
    out->mLOG.mX[6471UL] = t4657->mX.mX[1501UL];
    out->mLOG.mX[6472UL] = t4657->mX.mX[793UL];
    out->mLOG.mX[6473UL] = t4657->mX.mX[792UL];
    out->mLOG.mX[6474UL] = t4657->mX.mX[794UL];
    out->mLOG.mX[6475UL] = t4657->mX.mX[1501UL];
    out->mLOG.mX[6476UL] = t4657->mX.mX[1502UL];
    out->mLOG.mX[6477UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6478UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[6479UL] = t4657->mX.mX[794UL];
    out->mLOG.mX[6480UL] = t3808;
    out->mLOG.mX[6481UL] = t3694;
    out->mLOG.mX[6482UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3812 > 8.200000000000002E-8 ? t3812 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[795UL] * t4657->mX.mX[795UL] * 0.0 + t4657->mX.mX[796UL] * t4657->mX.mX[796UL] * 0.0) + t4657->mX.mX[797UL] * t4657->mX.mX[797UL] * 0.0) + t4657->mX.mX[798UL] * t4657->mX.mX[798UL] * 0.0) + t4657->mX.mX[799UL] * t4657->mX.mX[799UL] * 0.0) * 0.001;
    out->mLOG.mX[6483UL] = t4657->mX.mX[1503UL];
    out->mLOG.mX[6484UL] = t4657->mX.mX[1503UL];
    out->mLOG.mX[6485UL] = t4657->mX.mX[792UL];
    out->mLOG.mX[6486UL] = t3810 * 1000.0;
    out->mLOG.mX[6487UL] = t4657->mX.mX[792UL];
    out->mLOG.mX[6488UL] = t4657->mX.mX[792UL];
    out->mLOG.mX[6489UL] = t4657->mX.mX[1504UL] * 1000.0;
    out->mLOG.mX[6490UL] = zc_int289;
    out->mLOG.mX[6491UL] = t4657->mX.mX[792UL];
    out->mLOG.mX[6492UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6493UL] = BatteryPack_v2_ModuleAssembly6_Module09_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[6494UL] = BatteryPack_v2_ModuleAssembly6_Module09_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[6495UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[6496UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6497UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[6498UL] = t3694;
    out->mLOG.mX[6499UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[6500UL] = t3694;
    out->mLOG.mX[6501UL] = t4657->mX.mX[792UL];
    out->mLOG.mX[6502UL] = t3810 * -1000.0;
    out->mLOG.mX[6503UL] = t4657->mX.mX[792UL];
    out->mLOG.mX[6504UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6505UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[6506UL] = t4657->mX.mX[794UL];
    out->mLOG.mX[6507UL] = t3694;
    out->mLOG.mX[6508UL] = 0.0;
    out->mLOG.mX[6509UL] = t4657->mX.mX[1503UL];
    out->mLOG.mX[6510UL] = t4657->mX.mX[1503UL];
    out->mLOG.mX[6511UL] = t4657->mX.mX[792UL];
    out->mLOG.mX[6512UL] = zc_int289;
    out->mLOG.mX[6513UL] = t3694 - BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[6514UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6515UL] = t4657->mX.mX[800UL];
    out->mLOG.mX[6516UL] = t4657->mX.mX[800UL];
    out->mLOG.mX[6517UL] = t4657->mX.mX[800UL];
    out->mLOG.mX[6518UL] = t4657->mX.mX[800UL];
    out->mLOG.mX[6519UL] = t4657->mX.mX[801UL] * 0.00027777777777777778;
    out->mLOG.mX[6520UL] = t4657->mX.mX[800UL];
    out->mLOG.mX[6521UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6522UL] = intrm_sf_mf_75;
    out->mLOG.mX[6523UL] = t4657->mX.mX[802UL];
    out->mLOG.mX[6524UL] = t4657->mX.mX[802UL];
    out->mLOG.mX[6525UL] = t4657->mX.mX[1507UL];
    out->mLOG.mX[6526UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    for (t2499 = 803UL; t2499 - 803UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 5724UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[6532UL] = t4657->mX.mX[1506UL];
    out->mLOG.mX[6533UL] = t4657->mX.mX[1508UL] * 1000.0;
    out->mLOG.mX[6534UL] = t4657->mX.mX[1507UL];
    out->mLOG.mX[6535UL] = zc_int299;
    out->mLOG.mX[6536UL] = t4657->mX.mX[1505UL];
    out->mLOG.mX[6537UL] = t4657->mX.mX[801UL];
    out->mLOG.mX[6538UL] = t4657->mX.mX[800UL];
    out->mLOG.mX[6539UL] = t4657->mX.mX[802UL];
    out->mLOG.mX[6540UL] = t4657->mX.mX[1505UL];
    out->mLOG.mX[6541UL] = t4657->mX.mX[1506UL];
    out->mLOG.mX[6542UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6543UL] = intrm_sf_mf_75;
    out->mLOG.mX[6544UL] = t4657->mX.mX[802UL];
    out->mLOG.mX[6545UL] = t3813;
    out->mLOG.mX[6546UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[6547UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3817 > 8.200000000000002E-8 ? t3817 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[803UL] * t4657->mX.mX[803UL] * 0.0 + t4657->mX.mX[804UL] * t4657->mX.mX[804UL] * 0.0) + t4657->mX.mX[805UL] * t4657->mX.mX[805UL] * 0.0) + t4657->mX.mX[806UL] * t4657->mX.mX[806UL] * 0.0) + t4657->mX.mX[807UL] * t4657->mX.mX[807UL] * 0.0) * 0.001;
    out->mLOG.mX[6548UL] = t4657->mX.mX[1507UL];
    out->mLOG.mX[6549UL] = t4657->mX.mX[1507UL];
    out->mLOG.mX[6550UL] = t4657->mX.mX[800UL];
    out->mLOG.mX[6551UL] = BatteryPack_v2_ModuleAssembly6_Module10_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[6552UL] = t4657->mX.mX[800UL];
    out->mLOG.mX[6553UL] = t4657->mX.mX[800UL];
    out->mLOG.mX[6554UL] = t4657->mX.mX[1508UL] * 1000.0;
    out->mLOG.mX[6555UL] = zc_int299;
    out->mLOG.mX[6556UL] = t4657->mX.mX[800UL];
    out->mLOG.mX[6557UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6558UL] = BatteryPack_v2_ModuleAssembly6_Module10_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[6559UL] = BatteryPack_v2_ModuleAssembly6_Module10_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[6560UL] = intrm_sf_mf_75;
    out->mLOG.mX[6561UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6562UL] = intrm_sf_mf_75;
    out->mLOG.mX[6563UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[6564UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[6565UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[6566UL] = t4657->mX.mX[800UL];
    out->mLOG.mX[6567UL] = BatteryPack_v2_ModuleAssembly6_Module10_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[6568UL] = t4657->mX.mX[800UL];
    out->mLOG.mX[6569UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6570UL] = intrm_sf_mf_75;
    out->mLOG.mX[6571UL] = t4657->mX.mX[802UL];
    out->mLOG.mX[6572UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3;
    out->mLOG.mX[6573UL] = 0.0;
    out->mLOG.mX[6574UL] = t4657->mX.mX[1507UL];
    out->mLOG.mX[6575UL] = t4657->mX.mX[1507UL];
    out->mLOG.mX[6576UL] = t4657->mX.mX[800UL];
    out->mLOG.mX[6577UL] = zc_int299;
    out->mLOG.mX[6578UL] = BatteryPack_v2_ModuleAssembly5_Module09_Cell_1_electricalModel3 - intrm_sf_mf_75;
    out->mLOG.mX[6579UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6580UL] = t4657->mX.mX[808UL];
    out->mLOG.mX[6581UL] = t4657->mX.mX[808UL];
    out->mLOG.mX[6582UL] = t4657->mX.mX[808UL];
    out->mLOG.mX[6583UL] = t4657->mX.mX[808UL];
    out->mLOG.mX[6584UL] = t4657->mX.mX[809UL] * 0.00027777777777777778;
    out->mLOG.mX[6585UL] = t4657->mX.mX[808UL];
    out->mLOG.mX[6586UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6587UL] = t3664;
    out->mLOG.mX[6588UL] = t4657->mX.mX[810UL];
    out->mLOG.mX[6589UL] = t4657->mX.mX[810UL];
    out->mLOG.mX[6590UL] = t4657->mX.mX[1511UL];
    out->mLOG.mX[6591UL] = intrm_sf_mf_75;
    for (t2499 = 811UL; t2499 - 811UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 5781UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[6597UL] = t4657->mX.mX[1510UL];
    out->mLOG.mX[6598UL] = t4657->mX.mX[1512UL] * 1000.0;
    out->mLOG.mX[6599UL] = t4657->mX.mX[1511UL];
    out->mLOG.mX[6600UL] = BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3;
    out->mLOG.mX[6601UL] = t4657->mX.mX[1509UL];
    out->mLOG.mX[6602UL] = t4657->mX.mX[809UL];
    out->mLOG.mX[6603UL] = t4657->mX.mX[808UL];
    out->mLOG.mX[6604UL] = t4657->mX.mX[810UL];
    out->mLOG.mX[6605UL] = t4657->mX.mX[1509UL];
    out->mLOG.mX[6606UL] = t4657->mX.mX[1510UL];
    out->mLOG.mX[6607UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6608UL] = t3664;
    out->mLOG.mX[6609UL] = t4657->mX.mX[810UL];
    out->mLOG.mX[6610UL] = t3818;
    out->mLOG.mX[6611UL] = intrm_sf_mf_75;
    out->mLOG.mX[6612UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3822 > 8.200000000000002E-8 ? t3822 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[811UL] * t4657->mX.mX[811UL] * 0.0 + t4657->mX.mX[812UL] * t4657->mX.mX[812UL] * 0.0) + t4657->mX.mX[813UL] * t4657->mX.mX[813UL] * 0.0) + t4657->mX.mX[814UL] * t4657->mX.mX[814UL] * 0.0) + t4657->mX.mX[815UL] * t4657->mX.mX[815UL] * 0.0) * 0.001;
    out->mLOG.mX[6613UL] = t4657->mX.mX[1511UL];
    out->mLOG.mX[6614UL] = t4657->mX.mX[1511UL];
    out->mLOG.mX[6615UL] = t4657->mX.mX[808UL];
    out->mLOG.mX[6616UL] = BatteryPack_v2_ModuleAssembly6_Module11_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[6617UL] = t4657->mX.mX[808UL];
    out->mLOG.mX[6618UL] = t4657->mX.mX[808UL];
    out->mLOG.mX[6619UL] = t4657->mX.mX[1512UL] * 1000.0;
    out->mLOG.mX[6620UL] = BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3;
    out->mLOG.mX[6621UL] = t4657->mX.mX[808UL];
    out->mLOG.mX[6622UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6623UL] = BatteryPack_v2_ModuleAssembly6_Module11_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[6624UL] = BatteryPack_v2_ModuleAssembly6_Module11_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[6625UL] = t3664;
    out->mLOG.mX[6626UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6627UL] = t3664;
    out->mLOG.mX[6628UL] = intrm_sf_mf_75;
    out->mLOG.mX[6629UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[6630UL] = intrm_sf_mf_75;
    out->mLOG.mX[6631UL] = t4657->mX.mX[808UL];
    out->mLOG.mX[6632UL] = BatteryPack_v2_ModuleAssembly6_Module11_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[6633UL] = t4657->mX.mX[808UL];
    out->mLOG.mX[6634UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6635UL] = t3664;
    out->mLOG.mX[6636UL] = t4657->mX.mX[810UL];
    out->mLOG.mX[6637UL] = intrm_sf_mf_75;
    out->mLOG.mX[6638UL] = 0.0;
    out->mLOG.mX[6639UL] = t4657->mX.mX[1511UL];
    out->mLOG.mX[6640UL] = t4657->mX.mX[1511UL];
    out->mLOG.mX[6641UL] = t4657->mX.mX[808UL];
    out->mLOG.mX[6642UL] = BatteryPack_v2_ModuleAssembly2_Module13_Cell_1_electricalModel3;
    out->mLOG.mX[6643UL] = intrm_sf_mf_75 - t3664;
    out->mLOG.mX[6644UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6645UL] = t4657->mX.mX[816UL];
    out->mLOG.mX[6646UL] = t4657->mX.mX[816UL];
    out->mLOG.mX[6647UL] = t4657->mX.mX[816UL];
    out->mLOG.mX[6648UL] = t4657->mX.mX[816UL];
    out->mLOG.mX[6649UL] = t4657->mX.mX[817UL] * 0.00027777777777777778;
    out->mLOG.mX[6650UL] = t4657->mX.mX[816UL];
    out->mLOG.mX[6651UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6652UL] = zc_int349;
    out->mLOG.mX[6653UL] = t4657->mX.mX[818UL];
    out->mLOG.mX[6654UL] = t4657->mX.mX[818UL];
    out->mLOG.mX[6655UL] = t4657->mX.mX[1515UL];
    out->mLOG.mX[6656UL] = t3664;
    for (t2499 = 819UL; t2499 - 819UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 5838UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[6662UL] = t4657->mX.mX[1514UL];
    out->mLOG.mX[6663UL] = t4657->mX.mX[1516UL] * 1000.0;
    out->mLOG.mX[6664UL] = t4657->mX.mX[1515UL];
    out->mLOG.mX[6665UL] = zc_int301;
    out->mLOG.mX[6666UL] = t4657->mX.mX[1513UL];
    out->mLOG.mX[6667UL] = t4657->mX.mX[817UL];
    out->mLOG.mX[6668UL] = t4657->mX.mX[816UL];
    out->mLOG.mX[6669UL] = t4657->mX.mX[818UL];
    out->mLOG.mX[6670UL] = t4657->mX.mX[1513UL];
    out->mLOG.mX[6671UL] = t4657->mX.mX[1514UL];
    out->mLOG.mX[6672UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6673UL] = zc_int349;
    out->mLOG.mX[6674UL] = t4657->mX.mX[818UL];
    out->mLOG.mX[6675UL] = t3823;
    out->mLOG.mX[6676UL] = t3664;
    out->mLOG.mX[6677UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly6_Module12_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly6_Module12_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[819UL] * t4657->mX.mX[819UL] * 0.0 + t4657->mX.mX[820UL] * t4657->mX.mX[820UL] * 0.0) + t4657->mX.mX[821UL] * t4657->mX.mX[821UL] * 0.0) + t4657->mX.mX[822UL] * t4657->mX.mX[822UL] * 0.0) + t4657->mX.mX[823UL] * t4657->mX.mX[823UL] * 0.0) * 0.001;
    out->mLOG.mX[6678UL] = t4657->mX.mX[1515UL];
    out->mLOG.mX[6679UL] = t4657->mX.mX[1515UL];
    out->mLOG.mX[6680UL] = t4657->mX.mX[816UL];
    out->mLOG.mX[6681UL] = t3825 * 1000.0;
    out->mLOG.mX[6682UL] = t4657->mX.mX[816UL];
    out->mLOG.mX[6683UL] = t4657->mX.mX[816UL];
    out->mLOG.mX[6684UL] = t4657->mX.mX[1516UL] * 1000.0;
    out->mLOG.mX[6685UL] = zc_int301;
    out->mLOG.mX[6686UL] = t4657->mX.mX[816UL];
    out->mLOG.mX[6687UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6688UL] = BatteryPack_v2_ModuleAssembly6_Module12_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[6689UL] = BatteryPack_v2_ModuleAssembly6_Module12_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[6690UL] = zc_int349;
    out->mLOG.mX[6691UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6692UL] = zc_int349;
    out->mLOG.mX[6693UL] = t3664;
    out->mLOG.mX[6694UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[6695UL] = t3664;
    out->mLOG.mX[6696UL] = t4657->mX.mX[816UL];
    out->mLOG.mX[6697UL] = t3825 * -1000.0;
    out->mLOG.mX[6698UL] = t4657->mX.mX[816UL];
    out->mLOG.mX[6699UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6700UL] = zc_int349;
    out->mLOG.mX[6701UL] = t4657->mX.mX[818UL];
    out->mLOG.mX[6702UL] = t3664;
    out->mLOG.mX[6703UL] = 0.0;
    out->mLOG.mX[6704UL] = t4657->mX.mX[1515UL];
    out->mLOG.mX[6705UL] = t4657->mX.mX[1515UL];
    out->mLOG.mX[6706UL] = t4657->mX.mX[816UL];
    out->mLOG.mX[6707UL] = zc_int301;
    out->mLOG.mX[6708UL] = t3664 - zc_int349;
    out->mLOG.mX[6709UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6710UL] = t4657->mX.mX[824UL];
    out->mLOG.mX[6711UL] = t4657->mX.mX[824UL];
    out->mLOG.mX[6712UL] = t4657->mX.mX[824UL];
    out->mLOG.mX[6713UL] = t4657->mX.mX[824UL];
    out->mLOG.mX[6714UL] = t4657->mX.mX[825UL] * 0.00027777777777777778;
    out->mLOG.mX[6715UL] = t4657->mX.mX[824UL];
    out->mLOG.mX[6716UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6717UL] = zc_int348;
    out->mLOG.mX[6718UL] = t4657->mX.mX[826UL];
    out->mLOG.mX[6719UL] = t4657->mX.mX[826UL];
    out->mLOG.mX[6720UL] = t4657->mX.mX[1519UL];
    out->mLOG.mX[6721UL] = zc_int349;
    for (t2499 = 827UL; t2499 - 827UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 5895UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[6727UL] = t4657->mX.mX[1518UL];
    out->mLOG.mX[6728UL] = t4657->mX.mX[1520UL] * 1000.0;
    out->mLOG.mX[6729UL] = t4657->mX.mX[1519UL];
    out->mLOG.mX[6730UL] = zc_int304;
    out->mLOG.mX[6731UL] = t4657->mX.mX[1517UL];
    out->mLOG.mX[6732UL] = t4657->mX.mX[825UL];
    out->mLOG.mX[6733UL] = t4657->mX.mX[824UL];
    out->mLOG.mX[6734UL] = t4657->mX.mX[826UL];
    out->mLOG.mX[6735UL] = t4657->mX.mX[1517UL];
    out->mLOG.mX[6736UL] = t4657->mX.mX[1518UL];
    out->mLOG.mX[6737UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6738UL] = zc_int348;
    out->mLOG.mX[6739UL] = t4657->mX.mX[826UL];
    out->mLOG.mX[6740UL] = t3828;
    out->mLOG.mX[6741UL] = zc_int349;
    out->mLOG.mX[6742UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3832 > 8.200000000000002E-8 ? t3832 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[827UL] * t4657->mX.mX[827UL] * 0.0 + t4657->mX.mX[828UL] * t4657->mX.mX[828UL] * 0.0) + t4657->mX.mX[829UL] * t4657->mX.mX[829UL] * 0.0) + t4657->mX.mX[830UL] * t4657->mX.mX[830UL] * 0.0) + t4657->mX.mX[831UL] * t4657->mX.mX[831UL] * 0.0) * 0.001;
    out->mLOG.mX[6743UL] = t4657->mX.mX[1519UL];
    out->mLOG.mX[6744UL] = t4657->mX.mX[1519UL];
    out->mLOG.mX[6745UL] = t4657->mX.mX[824UL];
    out->mLOG.mX[6746UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[6747UL] = t4657->mX.mX[824UL];
    out->mLOG.mX[6748UL] = t4657->mX.mX[824UL];
    out->mLOG.mX[6749UL] = t4657->mX.mX[1520UL] * 1000.0;
    out->mLOG.mX[6750UL] = zc_int304;
    out->mLOG.mX[6751UL] = t4657->mX.mX[824UL];
    out->mLOG.mX[6752UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6753UL] = BatteryPack_v2_ModuleAssembly6_Module13_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[6754UL] = BatteryPack_v2_ModuleAssembly6_Module13_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[6755UL] = zc_int348;
    out->mLOG.mX[6756UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6757UL] = zc_int348;
    out->mLOG.mX[6758UL] = zc_int349;
    out->mLOG.mX[6759UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[6760UL] = zc_int349;
    out->mLOG.mX[6761UL] = t4657->mX.mX[824UL];
    out->mLOG.mX[6762UL] = BatteryPack_v2_ModuleAssembly6_Module13_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[6763UL] = t4657->mX.mX[824UL];
    out->mLOG.mX[6764UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6765UL] = zc_int348;
    out->mLOG.mX[6766UL] = t4657->mX.mX[826UL];
    out->mLOG.mX[6767UL] = zc_int349;
    out->mLOG.mX[6768UL] = 0.0;
    out->mLOG.mX[6769UL] = t4657->mX.mX[1519UL];
    out->mLOG.mX[6770UL] = t4657->mX.mX[1519UL];
    out->mLOG.mX[6771UL] = t4657->mX.mX[824UL];
    out->mLOG.mX[6772UL] = zc_int304;
    out->mLOG.mX[6773UL] = zc_int349 - zc_int348;
    out->mLOG.mX[6774UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6775UL] = t4657->mX.mX[832UL];
    out->mLOG.mX[6776UL] = t4657->mX.mX[832UL];
    out->mLOG.mX[6777UL] = t4657->mX.mX[832UL];
    out->mLOG.mX[6778UL] = t4657->mX.mX[832UL];
    out->mLOG.mX[6779UL] = t4657->mX.mX[833UL] * 0.00027777777777777778;
    out->mLOG.mX[6780UL] = t4657->mX.mX[832UL];
    out->mLOG.mX[6781UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6782UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    out->mLOG.mX[6783UL] = t4657->mX.mX[834UL];
    out->mLOG.mX[6784UL] = t4657->mX.mX[834UL];
    out->mLOG.mX[6785UL] = t4657->mX.mX[1523UL];
    out->mLOG.mX[6786UL] = zc_int348;
    for (t2499 = 835UL; t2499 - 835UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 5952UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[6792UL] = t4657->mX.mX[1522UL];
    out->mLOG.mX[6793UL] = t4657->mX.mX[1524UL] * 1000.0;
    out->mLOG.mX[6794UL] = t4657->mX.mX[1523UL];
    out->mLOG.mX[6795UL] = intrm_sf_mf_11;
    out->mLOG.mX[6796UL] = t4657->mX.mX[1521UL];
    out->mLOG.mX[6797UL] = t4657->mX.mX[833UL];
    out->mLOG.mX[6798UL] = t4657->mX.mX[832UL];
    out->mLOG.mX[6799UL] = t4657->mX.mX[834UL];
    out->mLOG.mX[6800UL] = t4657->mX.mX[1521UL];
    out->mLOG.mX[6801UL] = t4657->mX.mX[1522UL];
    out->mLOG.mX[6802UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6803UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    out->mLOG.mX[6804UL] = t4657->mX.mX[834UL];
    out->mLOG.mX[6805UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_electricalModel0;
    out->mLOG.mX[6806UL] = zc_int348;
    out->mLOG.mX[6807UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3837 > 8.200000000000002E-8 ? t3837 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[835UL] * t4657->mX.mX[835UL] * 0.0 + t4657->mX.mX[836UL] * t4657->mX.mX[836UL] * 0.0) + t4657->mX.mX[837UL] * t4657->mX.mX[837UL] * 0.0) + t4657->mX.mX[838UL] * t4657->mX.mX[838UL] * 0.0) + t4657->mX.mX[839UL] * t4657->mX.mX[839UL] * 0.0) * 0.001;
    out->mLOG.mX[6808UL] = t4657->mX.mX[1523UL];
    out->mLOG.mX[6809UL] = t4657->mX.mX[1523UL];
    out->mLOG.mX[6810UL] = t4657->mX.mX[832UL];
    out->mLOG.mX[6811UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[6812UL] = t4657->mX.mX[832UL];
    out->mLOG.mX[6813UL] = t4657->mX.mX[832UL];
    out->mLOG.mX[6814UL] = t4657->mX.mX[1524UL] * 1000.0;
    out->mLOG.mX[6815UL] = intrm_sf_mf_11;
    out->mLOG.mX[6816UL] = t4657->mX.mX[832UL];
    out->mLOG.mX[6817UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6818UL] = BatteryPack_v2_ModuleAssembly6_Module14_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[6819UL] = BatteryPack_v2_ModuleAssembly6_Module14_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[6820UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    out->mLOG.mX[6821UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6822UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    out->mLOG.mX[6823UL] = zc_int348;
    out->mLOG.mX[6824UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[6825UL] = zc_int348;
    out->mLOG.mX[6826UL] = t4657->mX.mX[832UL];
    out->mLOG.mX[6827UL] = BatteryPack_v2_ModuleAssembly6_Module14_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[6828UL] = t4657->mX.mX[832UL];
    out->mLOG.mX[6829UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6830UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    out->mLOG.mX[6831UL] = t4657->mX.mX[834UL];
    out->mLOG.mX[6832UL] = zc_int348;
    out->mLOG.mX[6833UL] = 0.0;
    out->mLOG.mX[6834UL] = t4657->mX.mX[1523UL];
    out->mLOG.mX[6835UL] = t4657->mX.mX[1523UL];
    out->mLOG.mX[6836UL] = t4657->mX.mX[832UL];
    out->mLOG.mX[6837UL] = intrm_sf_mf_11;
    out->mLOG.mX[6838UL] = zc_int348 - BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    out->mLOG.mX[6839UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6840UL] = t4657->mX.mX[840UL];
    out->mLOG.mX[6841UL] = t4657->mX.mX[840UL];
    out->mLOG.mX[6842UL] = t4657->mX.mX[840UL];
    out->mLOG.mX[6843UL] = t4657->mX.mX[840UL];
    out->mLOG.mX[6844UL] = t4657->mX.mX[841UL] * 0.00027777777777777778;
    out->mLOG.mX[6845UL] = t4657->mX.mX[840UL];
    out->mLOG.mX[6846UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6847UL] = intrm_sf_mf_73;
    out->mLOG.mX[6848UL] = t4657->mX.mX[842UL];
    out->mLOG.mX[6849UL] = t4657->mX.mX[842UL];
    out->mLOG.mX[6850UL] = t4657->mX.mX[1527UL];
    out->mLOG.mX[6851UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    for (t2499 = 843UL; t2499 - 843UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 6009UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[6857UL] = t4657->mX.mX[1526UL];
    out->mLOG.mX[6858UL] = t4657->mX.mX[1528UL] * 1000.0;
    out->mLOG.mX[6859UL] = t4657->mX.mX[1527UL];
    out->mLOG.mX[6860UL] = zc_int314;
    out->mLOG.mX[6861UL] = t4657->mX.mX[1525UL];
    out->mLOG.mX[6862UL] = t4657->mX.mX[841UL];
    out->mLOG.mX[6863UL] = t4657->mX.mX[840UL];
    out->mLOG.mX[6864UL] = t4657->mX.mX[842UL];
    out->mLOG.mX[6865UL] = t4657->mX.mX[1525UL];
    out->mLOG.mX[6866UL] = t4657->mX.mX[1526UL];
    out->mLOG.mX[6867UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6868UL] = intrm_sf_mf_73;
    out->mLOG.mX[6869UL] = t4657->mX.mX[842UL];
    out->mLOG.mX[6870UL] = BatteryPack_v2_ModuleAssembly6_Module15_Cell_1_electricalModel0;
    out->mLOG.mX[6871UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    out->mLOG.mX[6872UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly6_Module15_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly6_Module15_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[843UL] * t4657->mX.mX[843UL] * 0.0 + t4657->mX.mX[844UL] * t4657->mX.mX[844UL] * 0.0) + t4657->mX.mX[845UL] * t4657->mX.mX[845UL] * 0.0) + t4657->mX.mX[846UL] * t4657->mX.mX[846UL] * 0.0) + t4657->mX.mX[847UL] * t4657->mX.mX[847UL] * 0.0) * 0.001;
    out->mLOG.mX[6873UL] = t4657->mX.mX[1527UL];
    out->mLOG.mX[6874UL] = t4657->mX.mX[1527UL];
    out->mLOG.mX[6875UL] = t4657->mX.mX[840UL];
    out->mLOG.mX[6876UL] = t3840 * 1000.0;
    out->mLOG.mX[6877UL] = t4657->mX.mX[840UL];
    out->mLOG.mX[6878UL] = t4657->mX.mX[840UL];
    out->mLOG.mX[6879UL] = t4657->mX.mX[1528UL] * 1000.0;
    out->mLOG.mX[6880UL] = zc_int314;
    out->mLOG.mX[6881UL] = t4657->mX.mX[840UL];
    out->mLOG.mX[6882UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6883UL] = BatteryPack_v2_ModuleAssembly6_Module15_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[6884UL] = BatteryPack_v2_ModuleAssembly6_Module15_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[6885UL] = intrm_sf_mf_73;
    out->mLOG.mX[6886UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6887UL] = intrm_sf_mf_73;
    out->mLOG.mX[6888UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    out->mLOG.mX[6889UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[6890UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    out->mLOG.mX[6891UL] = t4657->mX.mX[840UL];
    out->mLOG.mX[6892UL] = t3840 * -1000.0;
    out->mLOG.mX[6893UL] = t4657->mX.mX[840UL];
    out->mLOG.mX[6894UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6895UL] = intrm_sf_mf_73;
    out->mLOG.mX[6896UL] = t4657->mX.mX[842UL];
    out->mLOG.mX[6897UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3;
    out->mLOG.mX[6898UL] = 0.0;
    out->mLOG.mX[6899UL] = t4657->mX.mX[1527UL];
    out->mLOG.mX[6900UL] = t4657->mX.mX[1527UL];
    out->mLOG.mX[6901UL] = t4657->mX.mX[840UL];
    out->mLOG.mX[6902UL] = zc_int314;
    out->mLOG.mX[6903UL] = BatteryPack_v2_ModuleAssembly5_Module07_Cell_1_electricalModel3 - intrm_sf_mf_73;
    out->mLOG.mX[6904UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6905UL] = t4657->mX.mX[848UL];
    out->mLOG.mX[6906UL] = t4657->mX.mX[848UL];
    out->mLOG.mX[6907UL] = t4657->mX.mX[848UL];
    out->mLOG.mX[6908UL] = t4657->mX.mX[848UL];
    out->mLOG.mX[6909UL] = t4657->mX.mX[849UL] * 0.00027777777777777778;
    out->mLOG.mX[6910UL] = t4657->mX.mX[848UL];
    out->mLOG.mX[6911UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6912UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    out->mLOG.mX[6913UL] = t4657->mX.mX[850UL];
    out->mLOG.mX[6914UL] = t4657->mX.mX[850UL];
    out->mLOG.mX[6915UL] = t4657->mX.mX[1531UL];
    out->mLOG.mX[6916UL] = intrm_sf_mf_73;
    for (t2499 = 851UL; t2499 - 851UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 6066UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[6922UL] = t4657->mX.mX[1530UL];
    out->mLOG.mX[6923UL] = t4657->mX.mX[1532UL] * 1000.0;
    out->mLOG.mX[6924UL] = t4657->mX.mX[1531UL];
    out->mLOG.mX[6925UL] = BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[6926UL] = t4657->mX.mX[1529UL];
    out->mLOG.mX[6927UL] = t4657->mX.mX[849UL];
    out->mLOG.mX[6928UL] = t4657->mX.mX[848UL];
    out->mLOG.mX[6929UL] = t4657->mX.mX[850UL];
    out->mLOG.mX[6930UL] = t4657->mX.mX[1529UL];
    out->mLOG.mX[6931UL] = t4657->mX.mX[1530UL];
    out->mLOG.mX[6932UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6933UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    out->mLOG.mX[6934UL] = t4657->mX.mX[850UL];
    out->mLOG.mX[6935UL] = BatteryPack_v2_ModuleAssembly6_Module16_Cell_1_electricalModel0;
    out->mLOG.mX[6936UL] = intrm_sf_mf_73;
    out->mLOG.mX[6937UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly6_Module16_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly6_Module16_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[851UL] * t4657->mX.mX[851UL] * 0.0 + t4657->mX.mX[852UL] * t4657->mX.mX[852UL] * 0.0) + t4657->mX.mX[853UL] * t4657->mX.mX[853UL] * 0.0) + t4657->mX.mX[854UL] * t4657->mX.mX[854UL] * 0.0) + t4657->mX.mX[855UL] * t4657->mX.mX[855UL] * 0.0) * 0.001;
    out->mLOG.mX[6938UL] = t4657->mX.mX[1531UL];
    out->mLOG.mX[6939UL] = t4657->mX.mX[1531UL];
    out->mLOG.mX[6940UL] = t4657->mX.mX[848UL];
    out->mLOG.mX[6941UL] = BatteryPack_v2_ModuleAssembly6_Module16_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[6942UL] = t4657->mX.mX[848UL];
    out->mLOG.mX[6943UL] = t4657->mX.mX[848UL];
    out->mLOG.mX[6944UL] = t4657->mX.mX[1532UL] * 1000.0;
    out->mLOG.mX[6945UL] = BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[6946UL] = t4657->mX.mX[848UL];
    out->mLOG.mX[6947UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6948UL] = BatteryPack_v2_ModuleAssembly6_Module16_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[6949UL] = BatteryPack_v2_ModuleAssembly6_Module16_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[6950UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    out->mLOG.mX[6951UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6952UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    out->mLOG.mX[6953UL] = intrm_sf_mf_73;
    out->mLOG.mX[6954UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[6955UL] = intrm_sf_mf_73;
    out->mLOG.mX[6956UL] = t4657->mX.mX[848UL];
    out->mLOG.mX[6957UL] = BatteryPack_v2_ModuleAssembly6_Module16_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[6958UL] = t4657->mX.mX[848UL];
    out->mLOG.mX[6959UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6960UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    out->mLOG.mX[6961UL] = t4657->mX.mX[850UL];
    out->mLOG.mX[6962UL] = intrm_sf_mf_73;
    out->mLOG.mX[6963UL] = 0.0;
    out->mLOG.mX[6964UL] = t4657->mX.mX[1531UL];
    out->mLOG.mX[6965UL] = t4657->mX.mX[1531UL];
    out->mLOG.mX[6966UL] = t4657->mX.mX[848UL];
    out->mLOG.mX[6967UL] = BatteryPack_v2_ModuleAssembly4_Module23_Cell_1_electricalModel3;
    out->mLOG.mX[6968UL] = intrm_sf_mf_73 - BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    out->mLOG.mX[6969UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[6970UL] = t4657->mX.mX[856UL];
    out->mLOG.mX[6971UL] = t4657->mX.mX[856UL];
    out->mLOG.mX[6972UL] = t4657->mX.mX[856UL];
    out->mLOG.mX[6973UL] = t4657->mX.mX[856UL];
    out->mLOG.mX[6974UL] = t4657->mX.mX[857UL] * 0.00027777777777777778;
    out->mLOG.mX[6975UL] = t4657->mX.mX[856UL];
    out->mLOG.mX[6976UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6977UL] = intrm_sf_mf_72;
    out->mLOG.mX[6978UL] = t4657->mX.mX[858UL];
    out->mLOG.mX[6979UL] = t4657->mX.mX[858UL];
    out->mLOG.mX[6980UL] = t4657->mX.mX[1535UL];
    out->mLOG.mX[6981UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    for (t2499 = 859UL; t2499 - 859UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 6123UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[6987UL] = t4657->mX.mX[1534UL];
    out->mLOG.mX[6988UL] = t4657->mX.mX[1536UL] * 1000.0;
    out->mLOG.mX[6989UL] = t4657->mX.mX[1535UL];
    out->mLOG.mX[6990UL] = zc_int320;
    out->mLOG.mX[6991UL] = t4657->mX.mX[1533UL];
    out->mLOG.mX[6992UL] = t4657->mX.mX[857UL];
    out->mLOG.mX[6993UL] = t4657->mX.mX[856UL];
    out->mLOG.mX[6994UL] = t4657->mX.mX[858UL];
    out->mLOG.mX[6995UL] = t4657->mX.mX[1533UL];
    out->mLOG.mX[6996UL] = t4657->mX.mX[1534UL];
    out->mLOG.mX[6997UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[6998UL] = intrm_sf_mf_72;
    out->mLOG.mX[6999UL] = t4657->mX.mX[858UL];
    out->mLOG.mX[7000UL] = t3848;
    out->mLOG.mX[7001UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    out->mLOG.mX[7002UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3852 > 8.200000000000002E-8 ? t3852 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[859UL] * t4657->mX.mX[859UL] * 0.0 + t4657->mX.mX[860UL] * t4657->mX.mX[860UL] * 0.0) + t4657->mX.mX[861UL] * t4657->mX.mX[861UL] * 0.0) + t4657->mX.mX[862UL] * t4657->mX.mX[862UL] * 0.0) + t4657->mX.mX[863UL] * t4657->mX.mX[863UL] * 0.0) * 0.001;
    out->mLOG.mX[7003UL] = t4657->mX.mX[1535UL];
    out->mLOG.mX[7004UL] = t4657->mX.mX[1535UL];
    out->mLOG.mX[7005UL] = t4657->mX.mX[856UL];
    out->mLOG.mX[7006UL] = BatteryPack_v2_ModuleAssembly6_Module17_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[7007UL] = t4657->mX.mX[856UL];
    out->mLOG.mX[7008UL] = t4657->mX.mX[856UL];
    out->mLOG.mX[7009UL] = t4657->mX.mX[1536UL] * 1000.0;
    out->mLOG.mX[7010UL] = zc_int320;
    out->mLOG.mX[7011UL] = t4657->mX.mX[856UL];
    out->mLOG.mX[7012UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7013UL] = BatteryPack_v2_ModuleAssembly6_Module17_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[7014UL] = BatteryPack_v2_ModuleAssembly6_Module17_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[7015UL] = intrm_sf_mf_72;
    out->mLOG.mX[7016UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7017UL] = intrm_sf_mf_72;
    out->mLOG.mX[7018UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    out->mLOG.mX[7019UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[7020UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    out->mLOG.mX[7021UL] = t4657->mX.mX[856UL];
    out->mLOG.mX[7022UL] = BatteryPack_v2_ModuleAssembly6_Module17_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[7023UL] = t4657->mX.mX[856UL];
    out->mLOG.mX[7024UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7025UL] = intrm_sf_mf_72;
    out->mLOG.mX[7026UL] = t4657->mX.mX[858UL];
    out->mLOG.mX[7027UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3;
    out->mLOG.mX[7028UL] = 0.0;
    out->mLOG.mX[7029UL] = t4657->mX.mX[1535UL];
    out->mLOG.mX[7030UL] = t4657->mX.mX[1535UL];
    out->mLOG.mX[7031UL] = t4657->mX.mX[856UL];
    out->mLOG.mX[7032UL] = zc_int320;
    out->mLOG.mX[7033UL] = BatteryPack_v2_ModuleAssembly5_Module06_Cell_1_electricalModel3 - intrm_sf_mf_72;
    out->mLOG.mX[7034UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7035UL] = t4657->mX.mX[864UL];
    out->mLOG.mX[7036UL] = t4657->mX.mX[864UL];
    out->mLOG.mX[7037UL] = t4657->mX.mX[864UL];
    out->mLOG.mX[7038UL] = t4657->mX.mX[864UL];
    out->mLOG.mX[7039UL] = t4657->mX.mX[865UL] * 0.00027777777777777778;
    out->mLOG.mX[7040UL] = t4657->mX.mX[864UL];
    out->mLOG.mX[7041UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7042UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    out->mLOG.mX[7043UL] = t4657->mX.mX[866UL];
    out->mLOG.mX[7044UL] = t4657->mX.mX[866UL];
    out->mLOG.mX[7045UL] = t4657->mX.mX[1539UL];
    out->mLOG.mX[7046UL] = intrm_sf_mf_72;
    for (t2499 = 867UL; t2499 - 867UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 6180UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[7052UL] = t4657->mX.mX[1538UL];
    out->mLOG.mX[7053UL] = t4657->mX.mX[1540UL] * 1000.0;
    out->mLOG.mX[7054UL] = t4657->mX.mX[1539UL];
    out->mLOG.mX[7055UL] = intrm_sf_mf_67;
    out->mLOG.mX[7056UL] = t4657->mX.mX[1537UL];
    out->mLOG.mX[7057UL] = t4657->mX.mX[865UL];
    out->mLOG.mX[7058UL] = t4657->mX.mX[864UL];
    out->mLOG.mX[7059UL] = t4657->mX.mX[866UL];
    out->mLOG.mX[7060UL] = t4657->mX.mX[1537UL];
    out->mLOG.mX[7061UL] = t4657->mX.mX[1538UL];
    out->mLOG.mX[7062UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7063UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    out->mLOG.mX[7064UL] = t4657->mX.mX[866UL];
    out->mLOG.mX[7065UL] = t3853;
    out->mLOG.mX[7066UL] = intrm_sf_mf_72;
    out->mLOG.mX[7067UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly6_Module18_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly6_Module18_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[867UL] * t4657->mX.mX[867UL] * 0.0 + t4657->mX.mX[868UL] * t4657->mX.mX[868UL] * 0.0) + t4657->mX.mX[869UL] * t4657->mX.mX[869UL] * 0.0) + t4657->mX.mX[870UL] * t4657->mX.mX[870UL] * 0.0) + t4657->mX.mX[871UL] * t4657->mX.mX[871UL] * 0.0) * 0.001;
    out->mLOG.mX[7068UL] = t4657->mX.mX[1539UL];
    out->mLOG.mX[7069UL] = t4657->mX.mX[1539UL];
    out->mLOG.mX[7070UL] = t4657->mX.mX[864UL];
    out->mLOG.mX[7071UL] = t3855 * 1000.0;
    out->mLOG.mX[7072UL] = t4657->mX.mX[864UL];
    out->mLOG.mX[7073UL] = t4657->mX.mX[864UL];
    out->mLOG.mX[7074UL] = t4657->mX.mX[1540UL] * 1000.0;
    out->mLOG.mX[7075UL] = intrm_sf_mf_67;
    out->mLOG.mX[7076UL] = t4657->mX.mX[864UL];
    out->mLOG.mX[7077UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7078UL] = BatteryPack_v2_ModuleAssembly6_Module18_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[7079UL] = BatteryPack_v2_ModuleAssembly6_Module18_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[7080UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    out->mLOG.mX[7081UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7082UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    out->mLOG.mX[7083UL] = intrm_sf_mf_72;
    out->mLOG.mX[7084UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[7085UL] = intrm_sf_mf_72;
    out->mLOG.mX[7086UL] = t4657->mX.mX[864UL];
    out->mLOG.mX[7087UL] = t3855 * -1000.0;
    out->mLOG.mX[7088UL] = t4657->mX.mX[864UL];
    out->mLOG.mX[7089UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7090UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    out->mLOG.mX[7091UL] = t4657->mX.mX[866UL];
    out->mLOG.mX[7092UL] = intrm_sf_mf_72;
    out->mLOG.mX[7093UL] = 0.0;
    out->mLOG.mX[7094UL] = t4657->mX.mX[1539UL];
    out->mLOG.mX[7095UL] = t4657->mX.mX[1539UL];
    out->mLOG.mX[7096UL] = t4657->mX.mX[864UL];
    out->mLOG.mX[7097UL] = intrm_sf_mf_67;
    out->mLOG.mX[7098UL] = intrm_sf_mf_72 - BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    out->mLOG.mX[7099UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7100UL] = t4657->mX.mX[872UL];
    out->mLOG.mX[7101UL] = t4657->mX.mX[872UL];
    out->mLOG.mX[7102UL] = t4657->mX.mX[872UL];
    out->mLOG.mX[7103UL] = t4657->mX.mX[872UL];
    out->mLOG.mX[7104UL] = t4657->mX.mX[873UL] * 0.00027777777777777778;
    out->mLOG.mX[7105UL] = t4657->mX.mX[872UL];
    out->mLOG.mX[7106UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7107UL] = t3669;
    out->mLOG.mX[7108UL] = t4657->mX.mX[874UL];
    out->mLOG.mX[7109UL] = t4657->mX.mX[874UL];
    out->mLOG.mX[7110UL] = t4657->mX.mX[1543UL];
    out->mLOG.mX[7111UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    for (t2499 = 875UL; t2499 - 875UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 6237UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[7117UL] = t4657->mX.mX[1542UL];
    out->mLOG.mX[7118UL] = t4657->mX.mX[1544UL] * 1000.0;
    out->mLOG.mX[7119UL] = t4657->mX.mX[1543UL];
    out->mLOG.mX[7120UL] = zc_int324;
    out->mLOG.mX[7121UL] = t4657->mX.mX[1541UL];
    out->mLOG.mX[7122UL] = t4657->mX.mX[873UL];
    out->mLOG.mX[7123UL] = t4657->mX.mX[872UL];
    out->mLOG.mX[7124UL] = t4657->mX.mX[874UL];
    out->mLOG.mX[7125UL] = t4657->mX.mX[1541UL];
    out->mLOG.mX[7126UL] = t4657->mX.mX[1542UL];
    out->mLOG.mX[7127UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7128UL] = t3669;
    out->mLOG.mX[7129UL] = t4657->mX.mX[874UL];
    out->mLOG.mX[7130UL] = BatteryPack_v2_ModuleAssembly6_Module19_Cell_1_electricalModel0;
    out->mLOG.mX[7131UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    out->mLOG.mX[7132UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly6_Module19_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly6_Module19_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[875UL] * t4657->mX.mX[875UL] * 0.0 + t4657->mX.mX[876UL] * t4657->mX.mX[876UL] * 0.0) + t4657->mX.mX[877UL] * t4657->mX.mX[877UL] * 0.0) + t4657->mX.mX[878UL] * t4657->mX.mX[878UL] * 0.0) + t4657->mX.mX[879UL] * t4657->mX.mX[879UL] * 0.0) * 0.001;
    out->mLOG.mX[7133UL] = t4657->mX.mX[1543UL];
    out->mLOG.mX[7134UL] = t4657->mX.mX[1543UL];
    out->mLOG.mX[7135UL] = t4657->mX.mX[872UL];
    out->mLOG.mX[7136UL] = t3860 * 1000.0;
    out->mLOG.mX[7137UL] = t4657->mX.mX[872UL];
    out->mLOG.mX[7138UL] = t4657->mX.mX[872UL];
    out->mLOG.mX[7139UL] = t4657->mX.mX[1544UL] * 1000.0;
    out->mLOG.mX[7140UL] = zc_int324;
    out->mLOG.mX[7141UL] = t4657->mX.mX[872UL];
    out->mLOG.mX[7142UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7143UL] = BatteryPack_v2_ModuleAssembly6_Module19_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[7144UL] = BatteryPack_v2_ModuleAssembly6_Module19_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[7145UL] = t3669;
    out->mLOG.mX[7146UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7147UL] = t3669;
    out->mLOG.mX[7148UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    out->mLOG.mX[7149UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[7150UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    out->mLOG.mX[7151UL] = t4657->mX.mX[872UL];
    out->mLOG.mX[7152UL] = t3860 * -1000.0;
    out->mLOG.mX[7153UL] = t4657->mX.mX[872UL];
    out->mLOG.mX[7154UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7155UL] = t3669;
    out->mLOG.mX[7156UL] = t4657->mX.mX[874UL];
    out->mLOG.mX[7157UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3;
    out->mLOG.mX[7158UL] = 0.0;
    out->mLOG.mX[7159UL] = t4657->mX.mX[1543UL];
    out->mLOG.mX[7160UL] = t4657->mX.mX[1543UL];
    out->mLOG.mX[7161UL] = t4657->mX.mX[872UL];
    out->mLOG.mX[7162UL] = zc_int324;
    out->mLOG.mX[7163UL] = BatteryPack_v2_ModuleAssembly5_Module05_Cell_1_electricalModel3 - t3669;
    out->mLOG.mX[7164UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7165UL] = t4657->mX.mX[880UL];
    out->mLOG.mX[7166UL] = t4657->mX.mX[880UL];
    out->mLOG.mX[7167UL] = t4657->mX.mX[880UL];
    out->mLOG.mX[7168UL] = t4657->mX.mX[880UL];
    out->mLOG.mX[7169UL] = t4657->mX.mX[881UL] * 0.00027777777777777778;
    out->mLOG.mX[7170UL] = t4657->mX.mX[880UL];
    out->mLOG.mX[7171UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7172UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[7173UL] = t4657->mX.mX[882UL];
    out->mLOG.mX[7174UL] = t4657->mX.mX[882UL];
    out->mLOG.mX[7175UL] = t4657->mX.mX[1547UL];
    out->mLOG.mX[7176UL] = t3669;
    for (t2499 = 883UL; t2499 - 883UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 6294UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[7182UL] = t4657->mX.mX[1546UL];
    out->mLOG.mX[7183UL] = t4657->mX.mX[1548UL] * 1000.0;
    out->mLOG.mX[7184UL] = t4657->mX.mX[1547UL];
    out->mLOG.mX[7185UL] = t3654;
    out->mLOG.mX[7186UL] = t4657->mX.mX[1545UL];
    out->mLOG.mX[7187UL] = t4657->mX.mX[881UL];
    out->mLOG.mX[7188UL] = t4657->mX.mX[880UL];
    out->mLOG.mX[7189UL] = t4657->mX.mX[882UL];
    out->mLOG.mX[7190UL] = t4657->mX.mX[1545UL];
    out->mLOG.mX[7191UL] = t4657->mX.mX[1546UL];
    out->mLOG.mX[7192UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7193UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[7194UL] = t4657->mX.mX[882UL];
    out->mLOG.mX[7195UL] = t3863;
    out->mLOG.mX[7196UL] = t3669;
    out->mLOG.mX[7197UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3867 > 8.200000000000002E-8 ? t3867 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[883UL] * t4657->mX.mX[883UL] * 0.0 + t4657->mX.mX[884UL] * t4657->mX.mX[884UL] * 0.0) + t4657->mX.mX[885UL] * t4657->mX.mX[885UL] * 0.0) + t4657->mX.mX[886UL] * t4657->mX.mX[886UL] * 0.0) + t4657->mX.mX[887UL] * t4657->mX.mX[887UL] * 0.0) * 0.001;
    out->mLOG.mX[7198UL] = t4657->mX.mX[1547UL];
    out->mLOG.mX[7199UL] = t4657->mX.mX[1547UL];
    out->mLOG.mX[7200UL] = t4657->mX.mX[880UL];
    out->mLOG.mX[7201UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[7202UL] = t4657->mX.mX[880UL];
    out->mLOG.mX[7203UL] = t4657->mX.mX[880UL];
    out->mLOG.mX[7204UL] = t4657->mX.mX[1548UL] * 1000.0;
    out->mLOG.mX[7205UL] = t3654;
    out->mLOG.mX[7206UL] = t4657->mX.mX[880UL];
    out->mLOG.mX[7207UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7208UL] = BatteryPack_v2_ModuleAssembly6_Module20_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[7209UL] = BatteryPack_v2_ModuleAssembly6_Module20_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[7210UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[7211UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7212UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[7213UL] = t3669;
    out->mLOG.mX[7214UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[7215UL] = t3669;
    out->mLOG.mX[7216UL] = t4657->mX.mX[880UL];
    out->mLOG.mX[7217UL] = BatteryPack_v2_ModuleAssembly6_Module20_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[7218UL] = t4657->mX.mX[880UL];
    out->mLOG.mX[7219UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7220UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[7221UL] = t4657->mX.mX[882UL];
    out->mLOG.mX[7222UL] = t3669;
    out->mLOG.mX[7223UL] = 0.0;
    out->mLOG.mX[7224UL] = t4657->mX.mX[1547UL];
    out->mLOG.mX[7225UL] = t4657->mX.mX[1547UL];
    out->mLOG.mX[7226UL] = t4657->mX.mX[880UL];
    out->mLOG.mX[7227UL] = t3654;
    out->mLOG.mX[7228UL] = t3669 - BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[7229UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7230UL] = t4657->mX.mX[888UL];
    out->mLOG.mX[7231UL] = t4657->mX.mX[888UL];
    out->mLOG.mX[7232UL] = t4657->mX.mX[888UL];
    out->mLOG.mX[7233UL] = t4657->mX.mX[888UL];
    out->mLOG.mX[7234UL] = t4657->mX.mX[889UL] * 0.00027777777777777778;
    out->mLOG.mX[7235UL] = t4657->mX.mX[888UL];
    out->mLOG.mX[7236UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7237UL] = t3374;
    out->mLOG.mX[7238UL] = t4657->mX.mX[890UL];
    out->mLOG.mX[7239UL] = t4657->mX.mX[890UL];
    out->mLOG.mX[7240UL] = t4657->mX.mX[1551UL];
    out->mLOG.mX[7241UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    for (t2499 = 891UL; t2499 - 891UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 6351UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[7247UL] = t4657->mX.mX[1550UL];
    out->mLOG.mX[7248UL] = t4657->mX.mX[1552UL] * 1000.0;
    out->mLOG.mX[7249UL] = t4657->mX.mX[1551UL];
    out->mLOG.mX[7250UL] = BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3;
    out->mLOG.mX[7251UL] = t4657->mX.mX[1549UL];
    out->mLOG.mX[7252UL] = t4657->mX.mX[889UL];
    out->mLOG.mX[7253UL] = t4657->mX.mX[888UL];
    out->mLOG.mX[7254UL] = t4657->mX.mX[890UL];
    out->mLOG.mX[7255UL] = t4657->mX.mX[1549UL];
    out->mLOG.mX[7256UL] = t4657->mX.mX[1550UL];
    out->mLOG.mX[7257UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7258UL] = t3374;
    out->mLOG.mX[7259UL] = t4657->mX.mX[890UL];
    out->mLOG.mX[7260UL] = t3868;
    out->mLOG.mX[7261UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[7262UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly6_Module21_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly6_Module21_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[891UL] * t4657->mX.mX[891UL] * 0.0 + t4657->mX.mX[892UL] * t4657->mX.mX[892UL] * 0.0) + t4657->mX.mX[893UL] * t4657->mX.mX[893UL] * 0.0) + t4657->mX.mX[894UL] * t4657->mX.mX[894UL] * 0.0) + t4657->mX.mX[895UL] * t4657->mX.mX[895UL] * 0.0) * 0.001;
    out->mLOG.mX[7263UL] = t4657->mX.mX[1551UL];
    out->mLOG.mX[7264UL] = t4657->mX.mX[1551UL];
    out->mLOG.mX[7265UL] = t4657->mX.mX[888UL];
    out->mLOG.mX[7266UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[7267UL] = t4657->mX.mX[888UL];
    out->mLOG.mX[7268UL] = t4657->mX.mX[888UL];
    out->mLOG.mX[7269UL] = t4657->mX.mX[1552UL] * 1000.0;
    out->mLOG.mX[7270UL] = BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3;
    out->mLOG.mX[7271UL] = t4657->mX.mX[888UL];
    out->mLOG.mX[7272UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7273UL] = BatteryPack_v2_ModuleAssembly6_Module21_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[7274UL] = BatteryPack_v2_ModuleAssembly6_Module21_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[7275UL] = t3374;
    out->mLOG.mX[7276UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7277UL] = t3374;
    out->mLOG.mX[7278UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[7279UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[7280UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[7281UL] = t4657->mX.mX[888UL];
    out->mLOG.mX[7282UL] = BatteryPack_v2_ModuleAssembly6_Module21_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[7283UL] = t4657->mX.mX[888UL];
    out->mLOG.mX[7284UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7285UL] = t3374;
    out->mLOG.mX[7286UL] = t4657->mX.mX[890UL];
    out->mLOG.mX[7287UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3;
    out->mLOG.mX[7288UL] = 0.0;
    out->mLOG.mX[7289UL] = t4657->mX.mX[1551UL];
    out->mLOG.mX[7290UL] = t4657->mX.mX[1551UL];
    out->mLOG.mX[7291UL] = t4657->mX.mX[888UL];
    out->mLOG.mX[7292UL] = BatteryPack_v2_ModuleAssembly2_Module14_Cell_1_electricalModel3;
    out->mLOG.mX[7293UL] = BatteryPack_v2_ModuleAssembly5_Module04_Cell_1_electricalModel3 - t3374;
    out->mLOG.mX[7294UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7295UL] = t4657->mX.mX[896UL];
    out->mLOG.mX[7296UL] = t4657->mX.mX[896UL];
    out->mLOG.mX[7297UL] = t4657->mX.mX[896UL];
    out->mLOG.mX[7298UL] = t4657->mX.mX[896UL];
    out->mLOG.mX[7299UL] = t4657->mX.mX[897UL] * 0.00027777777777777778;
    out->mLOG.mX[7300UL] = t4657->mX.mX[896UL];
    out->mLOG.mX[7301UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7302UL] = zc_int334;
    out->mLOG.mX[7303UL] = t4657->mX.mX[898UL];
    out->mLOG.mX[7304UL] = t4657->mX.mX[898UL];
    out->mLOG.mX[7305UL] = t4657->mX.mX[1555UL];
    out->mLOG.mX[7306UL] = t3374;
    for (t2499 = 899UL; t2499 - 899UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 6408UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[7312UL] = t4657->mX.mX[1554UL];
    out->mLOG.mX[7313UL] = t4657->mX.mX[1556UL] * 1000.0;
    out->mLOG.mX[7314UL] = t4657->mX.mX[1555UL];
    out->mLOG.mX[7315UL] = intrm_sf_mf_69;
    out->mLOG.mX[7316UL] = t4657->mX.mX[1553UL];
    out->mLOG.mX[7317UL] = t4657->mX.mX[897UL];
    out->mLOG.mX[7318UL] = t4657->mX.mX[896UL];
    out->mLOG.mX[7319UL] = t4657->mX.mX[898UL];
    out->mLOG.mX[7320UL] = t4657->mX.mX[1553UL];
    out->mLOG.mX[7321UL] = t4657->mX.mX[1554UL];
    out->mLOG.mX[7322UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7323UL] = zc_int334;
    out->mLOG.mX[7324UL] = t4657->mX.mX[898UL];
    out->mLOG.mX[7325UL] = BatteryPack_v2_ModuleAssembly6_Module22_Cell_1_electricalModel0;
    out->mLOG.mX[7326UL] = t3374;
    out->mLOG.mX[7327UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly6_Module22_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly6_Module22_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[899UL] * t4657->mX.mX[899UL] * 0.0 + t4657->mX.mX[900UL] * t4657->mX.mX[900UL] * 0.0) + t4657->mX.mX[901UL] * t4657->mX.mX[901UL] * 0.0) + t4657->mX.mX[902UL] * t4657->mX.mX[902UL] * 0.0) + t4657->mX.mX[903UL] * t4657->mX.mX[903UL] * 0.0) * 0.001;
    out->mLOG.mX[7328UL] = t4657->mX.mX[1555UL];
    out->mLOG.mX[7329UL] = t4657->mX.mX[1555UL];
    out->mLOG.mX[7330UL] = t4657->mX.mX[896UL];
    out->mLOG.mX[7331UL] = t3875 * 1000.0;
    out->mLOG.mX[7332UL] = t4657->mX.mX[896UL];
    out->mLOG.mX[7333UL] = t4657->mX.mX[896UL];
    out->mLOG.mX[7334UL] = t4657->mX.mX[1556UL] * 1000.0;
    out->mLOG.mX[7335UL] = intrm_sf_mf_69;
    out->mLOG.mX[7336UL] = t4657->mX.mX[896UL];
    out->mLOG.mX[7337UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7338UL] = BatteryPack_v2_ModuleAssembly6_Module22_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[7339UL] = BatteryPack_v2_ModuleAssembly6_Module22_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[7340UL] = zc_int334;
    out->mLOG.mX[7341UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7342UL] = zc_int334;
    out->mLOG.mX[7343UL] = t3374;
    out->mLOG.mX[7344UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[7345UL] = t3374;
    out->mLOG.mX[7346UL] = t4657->mX.mX[896UL];
    out->mLOG.mX[7347UL] = t3875 * -1000.0;
    out->mLOG.mX[7348UL] = t4657->mX.mX[896UL];
    out->mLOG.mX[7349UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7350UL] = zc_int334;
    out->mLOG.mX[7351UL] = t4657->mX.mX[898UL];
    out->mLOG.mX[7352UL] = t3374;
    out->mLOG.mX[7353UL] = 0.0;
    out->mLOG.mX[7354UL] = t4657->mX.mX[1555UL];
    out->mLOG.mX[7355UL] = t4657->mX.mX[1555UL];
    out->mLOG.mX[7356UL] = t4657->mX.mX[896UL];
    out->mLOG.mX[7357UL] = intrm_sf_mf_69;
    out->mLOG.mX[7358UL] = t3374 - zc_int334;
    out->mLOG.mX[7359UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7360UL] = t4657->mX.mX[904UL];
    out->mLOG.mX[7361UL] = t4657->mX.mX[904UL];
    out->mLOG.mX[7362UL] = t4657->mX.mX[904UL];
    out->mLOG.mX[7363UL] = t4657->mX.mX[904UL];
    out->mLOG.mX[7364UL] = t4657->mX.mX[905UL] * 0.00027777777777777778;
    out->mLOG.mX[7365UL] = t4657->mX.mX[904UL];
    out->mLOG.mX[7366UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7367UL] = t4657->mX.mX[906UL];
    out->mLOG.mX[7368UL] = t4657->mX.mX[906UL];
    out->mLOG.mX[7369UL] = t4657->mX.mX[1559UL];
    out->mLOG.mX[7370UL] = zc_int334;
    for (t2499 = 907UL; t2499 - 907UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 6464UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[7376UL] = t4657->mX.mX[1558UL];
    out->mLOG.mX[7377UL] = t4657->mX.mX[1560UL] * 1000.0;
    out->mLOG.mX[7378UL] = t4657->mX.mX[1559UL];
    out->mLOG.mX[7379UL] = zc_int334;
    out->mLOG.mX[7380UL] = t4657->mX.mX[1557UL];
    out->mLOG.mX[7381UL] = t4657->mX.mX[905UL];
    out->mLOG.mX[7382UL] = t4657->mX.mX[904UL];
    out->mLOG.mX[7383UL] = t4657->mX.mX[906UL];
    out->mLOG.mX[7384UL] = t4657->mX.mX[1557UL];
    out->mLOG.mX[7385UL] = t4657->mX.mX[1558UL];
    out->mLOG.mX[7386UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7387UL] = t4657->mX.mX[906UL];
    out->mLOG.mX[7388UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel0;
    out->mLOG.mX[7389UL] = zc_int334;
    out->mLOG.mX[7390UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly6_Module23_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly6_Module23_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[907UL] * t4657->mX.mX[907UL] * 0.0 + t4657->mX.mX[908UL] * t4657->mX.mX[908UL] * 0.0) + t4657->mX.mX[909UL] * t4657->mX.mX[909UL] * 0.0) + t4657->mX.mX[910UL] * t4657->mX.mX[910UL] * 0.0) + t4657->mX.mX[911UL] * t4657->mX.mX[911UL] * 0.0) * 0.001;
    out->mLOG.mX[7391UL] = t4657->mX.mX[1559UL];
    out->mLOG.mX[7392UL] = t4657->mX.mX[1559UL];
    out->mLOG.mX[7393UL] = t4657->mX.mX[904UL];
    out->mLOG.mX[7394UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel5 * 1000.0;
    out->mLOG.mX[7395UL] = t4657->mX.mX[904UL];
    out->mLOG.mX[7396UL] = t4657->mX.mX[904UL];
    out->mLOG.mX[7397UL] = t4657->mX.mX[1560UL] * 1000.0;
    out->mLOG.mX[7398UL] = zc_int334;
    out->mLOG.mX[7399UL] = t4657->mX.mX[904UL];
    out->mLOG.mX[7400UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7401UL] = BatteryPack_v2_ModuleAssembly6_Module23_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[7402UL] = BatteryPack_v2_ModuleAssembly6_Module23_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[7403UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7404UL] = zc_int334;
    out->mLOG.mX[7405UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[7406UL] = zc_int334;
    out->mLOG.mX[7407UL] = t4657->mX.mX[904UL];
    out->mLOG.mX[7408UL] = BatteryPack_v2_ModuleAssembly6_Module23_Cell_1_electricalModel5 * -1000.0;
    out->mLOG.mX[7409UL] = t4657->mX.mX[904UL];
    out->mLOG.mX[7410UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7411UL] = t4657->mX.mX[906UL];
    out->mLOG.mX[7412UL] = zc_int334;
    out->mLOG.mX[7413UL] = 0.0;
    out->mLOG.mX[7414UL] = t4657->mX.mX[1559UL];
    out->mLOG.mX[7415UL] = t4657->mX.mX[1559UL];
    out->mLOG.mX[7416UL] = t4657->mX.mX[904UL];
    out->mLOG.mX[7417UL] = zc_int334;
    out->mLOG.mX[7418UL] = zc_int334;
    out->mLOG.mX[7419UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7420UL] = t4657->mX.mX[912UL];
    out->mLOG.mX[7421UL] = t4657->mX.mX[912UL];
    out->mLOG.mX[7422UL] = t4657->mX.mX[912UL];
    out->mLOG.mX[7423UL] = t4657->mX.mX[912UL];
    out->mLOG.mX[7424UL] = t4657->mX.mX[913UL] * 0.00027777777777777778;
    out->mLOG.mX[7425UL] = t4657->mX.mX[912UL];
    out->mLOG.mX[7426UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7427UL] = zc_int360;
    out->mLOG.mX[7428UL] = t4657->mX.mX[914UL];
    out->mLOG.mX[7429UL] = t4657->mX.mX[914UL];
    out->mLOG.mX[7430UL] = t4657->mX.mX[1563UL];
    out->mLOG.mX[7431UL] = intrm_sf_mf_80;
    for (t2499 = 915UL; t2499 - 915UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 6517UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[7437UL] = t4657->mX.mX[1562UL];
    out->mLOG.mX[7438UL] = t4657->mX.mX[1564UL] * 1000.0;
    out->mLOG.mX[7439UL] = t4657->mX.mX[1563UL];
    out->mLOG.mX[7440UL] = BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3;
    out->mLOG.mX[7441UL] = t4657->mX.mX[1561UL];
    out->mLOG.mX[7442UL] = t4657->mX.mX[913UL];
    out->mLOG.mX[7443UL] = t4657->mX.mX[912UL];
    out->mLOG.mX[7444UL] = t4657->mX.mX[914UL];
    out->mLOG.mX[7445UL] = t4657->mX.mX[1561UL];
    out->mLOG.mX[7446UL] = t4657->mX.mX[1562UL];
    out->mLOG.mX[7447UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7448UL] = zc_int360;
    out->mLOG.mX[7449UL] = t4657->mX.mX[914UL];
    out->mLOG.mX[7450UL] = BatteryPack_v2_ModuleAssembly6_Module_1_1_Cell_1_electricalMod0;
    out->mLOG.mX[7451UL] = intrm_sf_mf_80;
    out->mLOG.mX[7452UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly6_Module_1_1_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly6_Module_1_1_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[915UL] * t4657->mX.mX[915UL] * 0.0 + t4657->mX.mX[916UL] * t4657->mX.mX[916UL] * 0.0) + t4657->mX.mX[917UL] * t4657->mX.mX[917UL] * 0.0) + t4657->mX.mX[918UL] * t4657->mX.mX[918UL] * 0.0) + t4657->mX.mX[919UL] * t4657->mX.mX[919UL] * 0.0) * 0.001;
    out->mLOG.mX[7453UL] = t4657->mX.mX[1563UL];
    out->mLOG.mX[7454UL] = t4657->mX.mX[1563UL];
    out->mLOG.mX[7455UL] = t4657->mX.mX[912UL];
    out->mLOG.mX[7456UL] = t3885 * 1000.0;
    out->mLOG.mX[7457UL] = t4657->mX.mX[912UL];
    out->mLOG.mX[7458UL] = t4657->mX.mX[912UL];
    out->mLOG.mX[7459UL] = t4657->mX.mX[1564UL] * 1000.0;
    out->mLOG.mX[7460UL] = BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3;
    out->mLOG.mX[7461UL] = t4657->mX.mX[912UL];
    out->mLOG.mX[7462UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7463UL] = BatteryPack_v2_ModuleAssembly6_Module_1_1_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[7464UL] = BatteryPack_v2_ModuleAssembly6_Module_1_1_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[7465UL] = zc_int360;
    out->mLOG.mX[7466UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7467UL] = zc_int360;
    out->mLOG.mX[7468UL] = intrm_sf_mf_80;
    out->mLOG.mX[7469UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[7470UL] = intrm_sf_mf_80;
    out->mLOG.mX[7471UL] = t4657->mX.mX[912UL];
    out->mLOG.mX[7472UL] = t3885 * -1000.0;
    out->mLOG.mX[7473UL] = t4657->mX.mX[912UL];
    out->mLOG.mX[7474UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7475UL] = zc_int360;
    out->mLOG.mX[7476UL] = t4657->mX.mX[914UL];
    out->mLOG.mX[7477UL] = intrm_sf_mf_80;
    out->mLOG.mX[7478UL] = 0.0;
    out->mLOG.mX[7479UL] = t4657->mX.mX[1563UL];
    out->mLOG.mX[7480UL] = t4657->mX.mX[1563UL];
    out->mLOG.mX[7481UL] = t4657->mX.mX[912UL];
    out->mLOG.mX[7482UL] = BatteryPack_v2_ModuleAssembly2_Module12_Cell_1_electricalModel3;
    out->mLOG.mX[7483UL] = intrm_sf_mf_80 - zc_int360;
    out->mLOG.mX[7484UL] = intrm_sf_mf_80;
    out->mLOG.mX[7485UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7486UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7487UL] = t4657->mX.mX[920UL];
    out->mLOG.mX[7488UL] = t4657->mX.mX[920UL];
    out->mLOG.mX[7489UL] = t4657->mX.mX[920UL];
    out->mLOG.mX[7490UL] = t4657->mX.mX[920UL];
    out->mLOG.mX[7491UL] = t4657->mX.mX[921UL] * 0.00027777777777777778;
    out->mLOG.mX[7492UL] = t4657->mX.mX[920UL];
    out->mLOG.mX[7493UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7494UL] = t3994;
    out->mLOG.mX[7495UL] = t4657->mX.mX[922UL];
    out->mLOG.mX[7496UL] = t4657->mX.mX[922UL];
    out->mLOG.mX[7497UL] = t4657->mX.mX[1567UL];
    out->mLOG.mX[7498UL] = intrm_sf_mf_115;
    for (t2499 = 923UL; t2499 - 923UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 6576UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[7504UL] = t4657->mX.mX[1566UL];
    out->mLOG.mX[7505UL] = t4657->mX.mX[1568UL] * 1000.0;
    out->mLOG.mX[7506UL] = t4657->mX.mX[1567UL];
    out->mLOG.mX[7507UL] = zc_int661;
    out->mLOG.mX[7508UL] = t4657->mX.mX[1565UL];
    out->mLOG.mX[7509UL] = t4657->mX.mX[921UL];
    out->mLOG.mX[7510UL] = t4657->mX.mX[920UL];
    out->mLOG.mX[7511UL] = t4657->mX.mX[922UL];
    out->mLOG.mX[7512UL] = t4657->mX.mX[1565UL];
    out->mLOG.mX[7513UL] = t4657->mX.mX[1566UL];
    out->mLOG.mX[7514UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7515UL] = t3994;
    out->mLOG.mX[7516UL] = t4657->mX.mX[922UL];
    out->mLOG.mX[7517UL] = t3888;
    out->mLOG.mX[7518UL] = intrm_sf_mf_115;
    out->mLOG.mX[7519UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3892 > 8.200000000000002E-8 ? t3892 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[923UL] * t4657->mX.mX[923UL] * 0.0 + t4657->mX.mX[924UL] * t4657->mX.mX[924UL] * 0.0) + t4657->mX.mX[925UL] * t4657->mX.mX[925UL] * 0.0) + t4657->mX.mX[926UL] * t4657->mX.mX[926UL] * 0.0) + t4657->mX.mX[927UL] * t4657->mX.mX[927UL] * 0.0) * 0.001;
    out->mLOG.mX[7520UL] = t4657->mX.mX[1567UL];
    out->mLOG.mX[7521UL] = t4657->mX.mX[1567UL];
    out->mLOG.mX[7522UL] = t4657->mX.mX[920UL];
    out->mLOG.mX[7523UL] = BatteryPack_v2_ModuleAssembly_23_Module02_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[7524UL] = t4657->mX.mX[920UL];
    out->mLOG.mX[7525UL] = t4657->mX.mX[920UL];
    out->mLOG.mX[7526UL] = t4657->mX.mX[1568UL] * 1000.0;
    out->mLOG.mX[7527UL] = zc_int661;
    out->mLOG.mX[7528UL] = t4657->mX.mX[920UL];
    out->mLOG.mX[7529UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7530UL] = BatteryPack_v2_ModuleAssembly_23_Module02_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[7531UL] = BatteryPack_v2_ModuleAssembly_23_Module02_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[7532UL] = t3994;
    out->mLOG.mX[7533UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7534UL] = t3994;
    out->mLOG.mX[7535UL] = intrm_sf_mf_115;
    out->mLOG.mX[7536UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[7537UL] = intrm_sf_mf_115;
    out->mLOG.mX[7538UL] = t4657->mX.mX[920UL];
    out->mLOG.mX[7539UL] = BatteryPack_v2_ModuleAssembly_23_Module02_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[7540UL] = t4657->mX.mX[920UL];
    out->mLOG.mX[7541UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7542UL] = t3994;
    out->mLOG.mX[7543UL] = t4657->mX.mX[922UL];
    out->mLOG.mX[7544UL] = intrm_sf_mf_115;
    out->mLOG.mX[7545UL] = 0.0;
    out->mLOG.mX[7546UL] = t4657->mX.mX[1567UL];
    out->mLOG.mX[7547UL] = t4657->mX.mX[1567UL];
    out->mLOG.mX[7548UL] = t4657->mX.mX[920UL];
    out->mLOG.mX[7549UL] = zc_int661;
    out->mLOG.mX[7550UL] = intrm_sf_mf_115 - t3994;
    out->mLOG.mX[7551UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7552UL] = t4657->mX.mX[928UL];
    out->mLOG.mX[7553UL] = t4657->mX.mX[928UL];
    out->mLOG.mX[7554UL] = t4657->mX.mX[928UL];
    out->mLOG.mX[7555UL] = t4657->mX.mX[928UL];
    out->mLOG.mX[7556UL] = t4657->mX.mX[929UL] * 0.00027777777777777778;
    out->mLOG.mX[7557UL] = t4657->mX.mX[928UL];
    out->mLOG.mX[7558UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7559UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    out->mLOG.mX[7560UL] = t4657->mX.mX[930UL];
    out->mLOG.mX[7561UL] = t4657->mX.mX[930UL];
    out->mLOG.mX[7562UL] = t4657->mX.mX[1571UL];
    out->mLOG.mX[7563UL] = t3994;
    for (t2499 = 931UL; t2499 - 931UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 6633UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[7569UL] = t4657->mX.mX[1570UL];
    out->mLOG.mX[7570UL] = t4657->mX.mX[1572UL] * 1000.0;
    out->mLOG.mX[7571UL] = t4657->mX.mX[1571UL];
    out->mLOG.mX[7572UL] = zc_int576;
    out->mLOG.mX[7573UL] = t4657->mX.mX[1569UL];
    out->mLOG.mX[7574UL] = t4657->mX.mX[929UL];
    out->mLOG.mX[7575UL] = t4657->mX.mX[928UL];
    out->mLOG.mX[7576UL] = t4657->mX.mX[930UL];
    out->mLOG.mX[7577UL] = t4657->mX.mX[1569UL];
    out->mLOG.mX[7578UL] = t4657->mX.mX[1570UL];
    out->mLOG.mX[7579UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7580UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    out->mLOG.mX[7581UL] = t4657->mX.mX[930UL];
    out->mLOG.mX[7582UL] = BatteryPack_v2_ModuleAssembly_23_Module03_Cell_1_electricalMod0;
    out->mLOG.mX[7583UL] = t3994;
    out->mLOG.mX[7584UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3897 > 8.200000000000002E-8 ? t3897 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[931UL] * t4657->mX.mX[931UL] * 0.0 + t4657->mX.mX[932UL] * t4657->mX.mX[932UL] * 0.0) + t4657->mX.mX[933UL] * t4657->mX.mX[933UL] * 0.0) + t4657->mX.mX[934UL] * t4657->mX.mX[934UL] * 0.0) + t4657->mX.mX[935UL] * t4657->mX.mX[935UL] * 0.0) * 0.001;
    out->mLOG.mX[7585UL] = t4657->mX.mX[1571UL];
    out->mLOG.mX[7586UL] = t4657->mX.mX[1571UL];
    out->mLOG.mX[7587UL] = t4657->mX.mX[928UL];
    out->mLOG.mX[7588UL] = t3895 * 1000.0;
    out->mLOG.mX[7589UL] = t4657->mX.mX[928UL];
    out->mLOG.mX[7590UL] = t4657->mX.mX[928UL];
    out->mLOG.mX[7591UL] = t4657->mX.mX[1572UL] * 1000.0;
    out->mLOG.mX[7592UL] = zc_int576;
    out->mLOG.mX[7593UL] = t4657->mX.mX[928UL];
    out->mLOG.mX[7594UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7595UL] = BatteryPack_v2_ModuleAssembly_23_Module03_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[7596UL] = BatteryPack_v2_ModuleAssembly_23_Module03_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[7597UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    out->mLOG.mX[7598UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7599UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    out->mLOG.mX[7600UL] = t3994;
    out->mLOG.mX[7601UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[7602UL] = t3994;
    out->mLOG.mX[7603UL] = t4657->mX.mX[928UL];
    out->mLOG.mX[7604UL] = t3895 * -1000.0;
    out->mLOG.mX[7605UL] = t4657->mX.mX[928UL];
    out->mLOG.mX[7606UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7607UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    out->mLOG.mX[7608UL] = t4657->mX.mX[930UL];
    out->mLOG.mX[7609UL] = t3994;
    out->mLOG.mX[7610UL] = 0.0;
    out->mLOG.mX[7611UL] = t4657->mX.mX[1571UL];
    out->mLOG.mX[7612UL] = t4657->mX.mX[1571UL];
    out->mLOG.mX[7613UL] = t4657->mX.mX[928UL];
    out->mLOG.mX[7614UL] = zc_int576;
    out->mLOG.mX[7615UL] = t3994 - BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    out->mLOG.mX[7616UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7617UL] = t4657->mX.mX[936UL];
    out->mLOG.mX[7618UL] = t4657->mX.mX[936UL];
    out->mLOG.mX[7619UL] = t4657->mX.mX[936UL];
    out->mLOG.mX[7620UL] = t4657->mX.mX[936UL];
    out->mLOG.mX[7621UL] = t4657->mX.mX[937UL] * 0.00027777777777777778;
    out->mLOG.mX[7622UL] = t4657->mX.mX[936UL];
    out->mLOG.mX[7623UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7624UL] = t3989;
    out->mLOG.mX[7625UL] = t4657->mX.mX[938UL];
    out->mLOG.mX[7626UL] = t4657->mX.mX[938UL];
    out->mLOG.mX[7627UL] = t4657->mX.mX[1575UL];
    out->mLOG.mX[7628UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    for (t2499 = 939UL; t2499 - 939UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 6690UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[7634UL] = t4657->mX.mX[1574UL];
    out->mLOG.mX[7635UL] = t4657->mX.mX[1576UL] * 1000.0;
    out->mLOG.mX[7636UL] = t4657->mX.mX[1575UL];
    out->mLOG.mX[7637UL] = t3894;
    out->mLOG.mX[7638UL] = t4657->mX.mX[1573UL];
    out->mLOG.mX[7639UL] = t4657->mX.mX[937UL];
    out->mLOG.mX[7640UL] = t4657->mX.mX[936UL];
    out->mLOG.mX[7641UL] = t4657->mX.mX[938UL];
    out->mLOG.mX[7642UL] = t4657->mX.mX[1573UL];
    out->mLOG.mX[7643UL] = t4657->mX.mX[1574UL];
    out->mLOG.mX[7644UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7645UL] = t3989;
    out->mLOG.mX[7646UL] = t4657->mX.mX[938UL];
    out->mLOG.mX[7647UL] = t3898;
    out->mLOG.mX[7648UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    out->mLOG.mX[7649UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly_23_Module04_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly_23_Module04_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[939UL] * t4657->mX.mX[939UL] * 0.0 + t4657->mX.mX[940UL] * t4657->mX.mX[940UL] * 0.0) + t4657->mX.mX[941UL] * t4657->mX.mX[941UL] * 0.0) + t4657->mX.mX[942UL] * t4657->mX.mX[942UL] * 0.0) + t4657->mX.mX[943UL] * t4657->mX.mX[943UL] * 0.0) * 0.001;
    out->mLOG.mX[7650UL] = t4657->mX.mX[1575UL];
    out->mLOG.mX[7651UL] = t4657->mX.mX[1575UL];
    out->mLOG.mX[7652UL] = t4657->mX.mX[936UL];
    out->mLOG.mX[7653UL] = BatteryPack_v2_ModuleAssembly_23_Module04_Cell_1_electricalMod5 * 1000.0;
    out->mLOG.mX[7654UL] = t4657->mX.mX[936UL];
    out->mLOG.mX[7655UL] = t4657->mX.mX[936UL];
    out->mLOG.mX[7656UL] = t4657->mX.mX[1576UL] * 1000.0;
    out->mLOG.mX[7657UL] = t3894;
    out->mLOG.mX[7658UL] = t4657->mX.mX[936UL];
    out->mLOG.mX[7659UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7660UL] = BatteryPack_v2_ModuleAssembly_23_Module04_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[7661UL] = BatteryPack_v2_ModuleAssembly_23_Module04_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[7662UL] = t3989;
    out->mLOG.mX[7663UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7664UL] = t3989;
    out->mLOG.mX[7665UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    out->mLOG.mX[7666UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[7667UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    out->mLOG.mX[7668UL] = t4657->mX.mX[936UL];
    out->mLOG.mX[7669UL] = BatteryPack_v2_ModuleAssembly_23_Module04_Cell_1_electricalMod5 * -1000.0;
    out->mLOG.mX[7670UL] = t4657->mX.mX[936UL];
    out->mLOG.mX[7671UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7672UL] = t3989;
    out->mLOG.mX[7673UL] = t4657->mX.mX[938UL];
    out->mLOG.mX[7674UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3;
    out->mLOG.mX[7675UL] = 0.0;
    out->mLOG.mX[7676UL] = t4657->mX.mX[1575UL];
    out->mLOG.mX[7677UL] = t4657->mX.mX[1575UL];
    out->mLOG.mX[7678UL] = t4657->mX.mX[936UL];
    out->mLOG.mX[7679UL] = t3894;
    out->mLOG.mX[7680UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_electricalMod3 - t3989;
    out->mLOG.mX[7681UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7682UL] = t4657->mX.mX[944UL];
    out->mLOG.mX[7683UL] = t4657->mX.mX[944UL];
    out->mLOG.mX[7684UL] = t4657->mX.mX[944UL];
    out->mLOG.mX[7685UL] = t4657->mX.mX[944UL];
    out->mLOG.mX[7686UL] = t4657->mX.mX[945UL] * 0.00027777777777777778;
    out->mLOG.mX[7687UL] = t4657->mX.mX[944UL];
    out->mLOG.mX[7688UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7689UL] = zc_int655;
    out->mLOG.mX[7690UL] = t4657->mX.mX[946UL];
    out->mLOG.mX[7691UL] = t4657->mX.mX[946UL];
    out->mLOG.mX[7692UL] = t4657->mX.mX[1579UL];
    out->mLOG.mX[7693UL] = t3989;
    for (t2499 = 947UL; t2499 - 947UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 6747UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[7699UL] = t4657->mX.mX[1578UL];
    out->mLOG.mX[7700UL] = t4657->mX.mX[1580UL] * 1000.0;
    out->mLOG.mX[7701UL] = t4657->mX.mX[1579UL];
    out->mLOG.mX[7702UL] = zc_int579;
    out->mLOG.mX[7703UL] = t4657->mX.mX[1577UL];
    out->mLOG.mX[7704UL] = t4657->mX.mX[945UL];
    out->mLOG.mX[7705UL] = t4657->mX.mX[944UL];
    out->mLOG.mX[7706UL] = t4657->mX.mX[946UL];
    out->mLOG.mX[7707UL] = t4657->mX.mX[1577UL];
    out->mLOG.mX[7708UL] = t4657->mX.mX[1578UL];
    out->mLOG.mX[7709UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7710UL] = zc_int655;
    out->mLOG.mX[7711UL] = t4657->mX.mX[946UL];
    out->mLOG.mX[7712UL] = t3903;
    out->mLOG.mX[7713UL] = t3989;
    out->mLOG.mX[7714UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3907 > 8.200000000000002E-8 ? t3907 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[947UL] * t4657->mX.mX[947UL] * 0.0 + t4657->mX.mX[948UL] * t4657->mX.mX[948UL] * 0.0) + t4657->mX.mX[949UL] * t4657->mX.mX[949UL] * 0.0) + t4657->mX.mX[950UL] * t4657->mX.mX[950UL] * 0.0) + t4657->mX.mX[951UL] * t4657->mX.mX[951UL] * 0.0) * 0.001;
    out->mLOG.mX[7715UL] = t4657->mX.mX[1579UL];
    out->mLOG.mX[7716UL] = t4657->mX.mX[1579UL];
    out->mLOG.mX[7717UL] = t4657->mX.mX[944UL];
    out->mLOG.mX[7718UL] = t3905 * 1000.0;
    out->mLOG.mX[7719UL] = t4657->mX.mX[944UL];
    out->mLOG.mX[7720UL] = t4657->mX.mX[944UL];
    out->mLOG.mX[7721UL] = t4657->mX.mX[1580UL] * 1000.0;
    out->mLOG.mX[7722UL] = zc_int579;
    out->mLOG.mX[7723UL] = t4657->mX.mX[944UL];
    out->mLOG.mX[7724UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7725UL] = BatteryPack_v2_ModuleAssembly_23_Module05_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[7726UL] = BatteryPack_v2_ModuleAssembly_23_Module05_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[7727UL] = zc_int655;
    out->mLOG.mX[7728UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7729UL] = zc_int655;
    out->mLOG.mX[7730UL] = t3989;
    out->mLOG.mX[7731UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[7732UL] = t3989;
    out->mLOG.mX[7733UL] = t4657->mX.mX[944UL];
    out->mLOG.mX[7734UL] = t3905 * -1000.0;
    out->mLOG.mX[7735UL] = t4657->mX.mX[944UL];
    out->mLOG.mX[7736UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7737UL] = zc_int655;
    out->mLOG.mX[7738UL] = t4657->mX.mX[946UL];
    out->mLOG.mX[7739UL] = t3989;
    out->mLOG.mX[7740UL] = 0.0;
    out->mLOG.mX[7741UL] = t4657->mX.mX[1579UL];
    out->mLOG.mX[7742UL] = t4657->mX.mX[1579UL];
    out->mLOG.mX[7743UL] = t4657->mX.mX[944UL];
    out->mLOG.mX[7744UL] = zc_int579;
    out->mLOG.mX[7745UL] = t3989 - zc_int655;
    out->mLOG.mX[7746UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7747UL] = t4657->mX.mX[952UL];
    out->mLOG.mX[7748UL] = t4657->mX.mX[952UL];
    out->mLOG.mX[7749UL] = t4657->mX.mX[952UL];
    out->mLOG.mX[7750UL] = t4657->mX.mX[952UL];
    out->mLOG.mX[7751UL] = t4657->mX.mX[953UL] * 0.00027777777777777778;
    out->mLOG.mX[7752UL] = t4657->mX.mX[952UL];
    out->mLOG.mX[7753UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7754UL] = t3984;
    out->mLOG.mX[7755UL] = t4657->mX.mX[954UL];
    out->mLOG.mX[7756UL] = t4657->mX.mX[954UL];
    out->mLOG.mX[7757UL] = t4657->mX.mX[1583UL];
    out->mLOG.mX[7758UL] = zc_int655;
    for (t2499 = 955UL; t2499 - 955UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 6804UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[7764UL] = t4657->mX.mX[1582UL];
    out->mLOG.mX[7765UL] = t4657->mX.mX[1584UL] * 1000.0;
    out->mLOG.mX[7766UL] = t4657->mX.mX[1583UL];
    out->mLOG.mX[7767UL] = zc_int586;
    out->mLOG.mX[7768UL] = t4657->mX.mX[1581UL];
    out->mLOG.mX[7769UL] = t4657->mX.mX[953UL];
    out->mLOG.mX[7770UL] = t4657->mX.mX[952UL];
    out->mLOG.mX[7771UL] = t4657->mX.mX[954UL];
    out->mLOG.mX[7772UL] = t4657->mX.mX[1581UL];
    out->mLOG.mX[7773UL] = t4657->mX.mX[1582UL];
    out->mLOG.mX[7774UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7775UL] = t3984;
    out->mLOG.mX[7776UL] = t4657->mX.mX[954UL];
    out->mLOG.mX[7777UL] = t3908;
    out->mLOG.mX[7778UL] = zc_int655;
    out->mLOG.mX[7779UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly_23_Module06_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly_23_Module06_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[955UL] * t4657->mX.mX[955UL] * 0.0 + t4657->mX.mX[956UL] * t4657->mX.mX[956UL] * 0.0) + t4657->mX.mX[957UL] * t4657->mX.mX[957UL] * 0.0) + t4657->mX.mX[958UL] * t4657->mX.mX[958UL] * 0.0) + t4657->mX.mX[959UL] * t4657->mX.mX[959UL] * 0.0) * 0.001;
    out->mLOG.mX[7780UL] = t4657->mX.mX[1583UL];
    out->mLOG.mX[7781UL] = t4657->mX.mX[1583UL];
    out->mLOG.mX[7782UL] = t4657->mX.mX[952UL];
    out->mLOG.mX[7783UL] = t3910 * 1000.0;
    out->mLOG.mX[7784UL] = t4657->mX.mX[952UL];
    out->mLOG.mX[7785UL] = t4657->mX.mX[952UL];
    out->mLOG.mX[7786UL] = t4657->mX.mX[1584UL] * 1000.0;
    out->mLOG.mX[7787UL] = zc_int586;
    out->mLOG.mX[7788UL] = t4657->mX.mX[952UL];
    out->mLOG.mX[7789UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7790UL] = BatteryPack_v2_ModuleAssembly_23_Module06_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[7791UL] = BatteryPack_v2_ModuleAssembly_23_Module06_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[7792UL] = t3984;
    out->mLOG.mX[7793UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7794UL] = t3984;
    out->mLOG.mX[7795UL] = zc_int655;
    out->mLOG.mX[7796UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[7797UL] = zc_int655;
    out->mLOG.mX[7798UL] = t4657->mX.mX[952UL];
    out->mLOG.mX[7799UL] = t3910 * -1000.0;
    out->mLOG.mX[7800UL] = t4657->mX.mX[952UL];
    out->mLOG.mX[7801UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7802UL] = t3984;
    out->mLOG.mX[7803UL] = t4657->mX.mX[954UL];
    out->mLOG.mX[7804UL] = zc_int655;
    out->mLOG.mX[7805UL] = 0.0;
    out->mLOG.mX[7806UL] = t4657->mX.mX[1583UL];
    out->mLOG.mX[7807UL] = t4657->mX.mX[1583UL];
    out->mLOG.mX[7808UL] = t4657->mX.mX[952UL];
    out->mLOG.mX[7809UL] = zc_int586;
    out->mLOG.mX[7810UL] = zc_int655 - t3984;
    out->mLOG.mX[7811UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7812UL] = t4657->mX.mX[960UL];
    out->mLOG.mX[7813UL] = t4657->mX.mX[960UL];
    out->mLOG.mX[7814UL] = t4657->mX.mX[960UL];
    out->mLOG.mX[7815UL] = t4657->mX.mX[960UL];
    out->mLOG.mX[7816UL] = t4657->mX.mX[961UL] * 0.00027777777777777778;
    out->mLOG.mX[7817UL] = t4657->mX.mX[960UL];
    out->mLOG.mX[7818UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7819UL] = zc_int653;
    out->mLOG.mX[7820UL] = t4657->mX.mX[962UL];
    out->mLOG.mX[7821UL] = t4657->mX.mX[962UL];
    out->mLOG.mX[7822UL] = t4657->mX.mX[1587UL];
    out->mLOG.mX[7823UL] = t3984;
    for (t2499 = 963UL; t2499 - 963UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 6861UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[7829UL] = t4657->mX.mX[1586UL];
    out->mLOG.mX[7830UL] = t4657->mX.mX[1588UL] * 1000.0;
    out->mLOG.mX[7831UL] = t4657->mX.mX[1587UL];
    out->mLOG.mX[7832UL] = BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3;
    out->mLOG.mX[7833UL] = t4657->mX.mX[1585UL];
    out->mLOG.mX[7834UL] = t4657->mX.mX[961UL];
    out->mLOG.mX[7835UL] = t4657->mX.mX[960UL];
    out->mLOG.mX[7836UL] = t4657->mX.mX[962UL];
    out->mLOG.mX[7837UL] = t4657->mX.mX[1585UL];
    out->mLOG.mX[7838UL] = t4657->mX.mX[1586UL];
    out->mLOG.mX[7839UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7840UL] = zc_int653;
    out->mLOG.mX[7841UL] = t4657->mX.mX[962UL];
    out->mLOG.mX[7842UL] = t3913;
    out->mLOG.mX[7843UL] = t3984;
    out->mLOG.mX[7844UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3917 > 8.200000000000002E-8 ? t3917 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[963UL] * t4657->mX.mX[963UL] * 0.0 + t4657->mX.mX[964UL] * t4657->mX.mX[964UL] * 0.0) + t4657->mX.mX[965UL] * t4657->mX.mX[965UL] * 0.0) + t4657->mX.mX[966UL] * t4657->mX.mX[966UL] * 0.0) + t4657->mX.mX[967UL] * t4657->mX.mX[967UL] * 0.0) * 0.001;
    out->mLOG.mX[7845UL] = t4657->mX.mX[1587UL];
    out->mLOG.mX[7846UL] = t4657->mX.mX[1587UL];
    out->mLOG.mX[7847UL] = t4657->mX.mX[960UL];
    out->mLOG.mX[7848UL] = BatteryPack_v2_ModuleAssembly_23_Module07_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[7849UL] = t4657->mX.mX[960UL];
    out->mLOG.mX[7850UL] = t4657->mX.mX[960UL];
    out->mLOG.mX[7851UL] = t4657->mX.mX[1588UL] * 1000.0;
    out->mLOG.mX[7852UL] = BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3;
    out->mLOG.mX[7853UL] = t4657->mX.mX[960UL];
    out->mLOG.mX[7854UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7855UL] = BatteryPack_v2_ModuleAssembly_23_Module07_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[7856UL] = BatteryPack_v2_ModuleAssembly_23_Module07_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[7857UL] = zc_int653;
    out->mLOG.mX[7858UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7859UL] = zc_int653;
    out->mLOG.mX[7860UL] = t3984;
    out->mLOG.mX[7861UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[7862UL] = t3984;
    out->mLOG.mX[7863UL] = t4657->mX.mX[960UL];
    out->mLOG.mX[7864UL] = BatteryPack_v2_ModuleAssembly_23_Module07_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[7865UL] = t4657->mX.mX[960UL];
    out->mLOG.mX[7866UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7867UL] = zc_int653;
    out->mLOG.mX[7868UL] = t4657->mX.mX[962UL];
    out->mLOG.mX[7869UL] = t3984;
    out->mLOG.mX[7870UL] = 0.0;
    out->mLOG.mX[7871UL] = t4657->mX.mX[1587UL];
    out->mLOG.mX[7872UL] = t4657->mX.mX[1587UL];
    out->mLOG.mX[7873UL] = t4657->mX.mX[960UL];
    out->mLOG.mX[7874UL] = BatteryPack_v2_ModuleAssembly_23_Module05_Cell_1_electricalMod3;
    out->mLOG.mX[7875UL] = t3984 - zc_int653;
    out->mLOG.mX[7876UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7877UL] = t4657->mX.mX[968UL];
    out->mLOG.mX[7878UL] = t4657->mX.mX[968UL];
    out->mLOG.mX[7879UL] = t4657->mX.mX[968UL];
    out->mLOG.mX[7880UL] = t4657->mX.mX[968UL];
    out->mLOG.mX[7881UL] = t4657->mX.mX[969UL] * 0.00027777777777777778;
    out->mLOG.mX[7882UL] = t4657->mX.mX[968UL];
    out->mLOG.mX[7883UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7884UL] = zc_int652;
    out->mLOG.mX[7885UL] = t4657->mX.mX[970UL];
    out->mLOG.mX[7886UL] = t4657->mX.mX[970UL];
    out->mLOG.mX[7887UL] = t4657->mX.mX[1591UL];
    out->mLOG.mX[7888UL] = zc_int653;
    for (t2499 = 971UL; t2499 - 971UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 6918UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[7894UL] = t4657->mX.mX[1590UL];
    out->mLOG.mX[7895UL] = t4657->mX.mX[1592UL] * 1000.0;
    out->mLOG.mX[7896UL] = t4657->mX.mX[1591UL];
    out->mLOG.mX[7897UL] = zc_int588;
    out->mLOG.mX[7898UL] = t4657->mX.mX[1589UL];
    out->mLOG.mX[7899UL] = t4657->mX.mX[969UL];
    out->mLOG.mX[7900UL] = t4657->mX.mX[968UL];
    out->mLOG.mX[7901UL] = t4657->mX.mX[970UL];
    out->mLOG.mX[7902UL] = t4657->mX.mX[1589UL];
    out->mLOG.mX[7903UL] = t4657->mX.mX[1590UL];
    out->mLOG.mX[7904UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7905UL] = zc_int652;
    out->mLOG.mX[7906UL] = t4657->mX.mX[970UL];
    out->mLOG.mX[7907UL] = BatteryPack_v2_ModuleAssembly_23_Module08_Cell_1_electricalMod0;
    out->mLOG.mX[7908UL] = zc_int653;
    out->mLOG.mX[7909UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3922 > 8.200000000000002E-8 ? t3922 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[971UL] * t4657->mX.mX[971UL] * 0.0 + t4657->mX.mX[972UL] * t4657->mX.mX[972UL] * 0.0) + t4657->mX.mX[973UL] * t4657->mX.mX[973UL] * 0.0) + t4657->mX.mX[974UL] * t4657->mX.mX[974UL] * 0.0) + t4657->mX.mX[975UL] * t4657->mX.mX[975UL] * 0.0) * 0.001;
    out->mLOG.mX[7910UL] = t4657->mX.mX[1591UL];
    out->mLOG.mX[7911UL] = t4657->mX.mX[1591UL];
    out->mLOG.mX[7912UL] = t4657->mX.mX[968UL];
    out->mLOG.mX[7913UL] = t3920 * 1000.0;
    out->mLOG.mX[7914UL] = t4657->mX.mX[968UL];
    out->mLOG.mX[7915UL] = t4657->mX.mX[968UL];
    out->mLOG.mX[7916UL] = t4657->mX.mX[1592UL] * 1000.0;
    out->mLOG.mX[7917UL] = zc_int588;
    out->mLOG.mX[7918UL] = t4657->mX.mX[968UL];
    out->mLOG.mX[7919UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7920UL] = BatteryPack_v2_ModuleAssembly_23_Module08_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[7921UL] = BatteryPack_v2_ModuleAssembly_23_Module08_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[7922UL] = zc_int652;
    out->mLOG.mX[7923UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7924UL] = zc_int652;
    out->mLOG.mX[7925UL] = zc_int653;
    out->mLOG.mX[7926UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[7927UL] = zc_int653;
    out->mLOG.mX[7928UL] = t4657->mX.mX[968UL];
    out->mLOG.mX[7929UL] = t3920 * -1000.0;
    out->mLOG.mX[7930UL] = t4657->mX.mX[968UL];
    out->mLOG.mX[7931UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7932UL] = zc_int652;
    out->mLOG.mX[7933UL] = t4657->mX.mX[970UL];
    out->mLOG.mX[7934UL] = zc_int653;
    out->mLOG.mX[7935UL] = 0.0;
    out->mLOG.mX[7936UL] = t4657->mX.mX[1591UL];
    out->mLOG.mX[7937UL] = t4657->mX.mX[1591UL];
    out->mLOG.mX[7938UL] = t4657->mX.mX[968UL];
    out->mLOG.mX[7939UL] = zc_int588;
    out->mLOG.mX[7940UL] = zc_int653 - zc_int652;
    out->mLOG.mX[7941UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7942UL] = t4657->mX.mX[976UL];
    out->mLOG.mX[7943UL] = t4657->mX.mX[976UL];
    out->mLOG.mX[7944UL] = t4657->mX.mX[976UL];
    out->mLOG.mX[7945UL] = t4657->mX.mX[976UL];
    out->mLOG.mX[7946UL] = t4657->mX.mX[977UL] * 0.00027777777777777778;
    out->mLOG.mX[7947UL] = t4657->mX.mX[976UL];
    out->mLOG.mX[7948UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7949UL] = zc_int651;
    out->mLOG.mX[7950UL] = t4657->mX.mX[978UL];
    out->mLOG.mX[7951UL] = t4657->mX.mX[978UL];
    out->mLOG.mX[7952UL] = t4657->mX.mX[1595UL];
    out->mLOG.mX[7953UL] = zc_int652;
    for (t2499 = 979UL; t2499 - 979UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 6975UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[7959UL] = t4657->mX.mX[1594UL];
    out->mLOG.mX[7960UL] = t4657->mX.mX[1596UL] * 1000.0;
    out->mLOG.mX[7961UL] = t4657->mX.mX[1595UL];
    out->mLOG.mX[7962UL] = zc_int595;
    out->mLOG.mX[7963UL] = t4657->mX.mX[1593UL];
    out->mLOG.mX[7964UL] = t4657->mX.mX[977UL];
    out->mLOG.mX[7965UL] = t4657->mX.mX[976UL];
    out->mLOG.mX[7966UL] = t4657->mX.mX[978UL];
    out->mLOG.mX[7967UL] = t4657->mX.mX[1593UL];
    out->mLOG.mX[7968UL] = t4657->mX.mX[1594UL];
    out->mLOG.mX[7969UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7970UL] = zc_int651;
    out->mLOG.mX[7971UL] = t4657->mX.mX[978UL];
    out->mLOG.mX[7972UL] = t3923;
    out->mLOG.mX[7973UL] = zc_int652;
    out->mLOG.mX[7974UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3927 > 8.200000000000002E-8 ? t3927 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[979UL] * t4657->mX.mX[979UL] * 0.0 + t4657->mX.mX[980UL] * t4657->mX.mX[980UL] * 0.0) + t4657->mX.mX[981UL] * t4657->mX.mX[981UL] * 0.0) + t4657->mX.mX[982UL] * t4657->mX.mX[982UL] * 0.0) + t4657->mX.mX[983UL] * t4657->mX.mX[983UL] * 0.0) * 0.001;
    out->mLOG.mX[7975UL] = t4657->mX.mX[1595UL];
    out->mLOG.mX[7976UL] = t4657->mX.mX[1595UL];
    out->mLOG.mX[7977UL] = t4657->mX.mX[976UL];
    out->mLOG.mX[7978UL] = BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod5 * 1000.0;
    out->mLOG.mX[7979UL] = t4657->mX.mX[976UL];
    out->mLOG.mX[7980UL] = t4657->mX.mX[976UL];
    out->mLOG.mX[7981UL] = t4657->mX.mX[1596UL] * 1000.0;
    out->mLOG.mX[7982UL] = zc_int595;
    out->mLOG.mX[7983UL] = t4657->mX.mX[976UL];
    out->mLOG.mX[7984UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[7985UL] = BatteryPack_v2_ModuleAssembly_23_Module09_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[7986UL] = BatteryPack_v2_ModuleAssembly_23_Module09_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[7987UL] = zc_int651;
    out->mLOG.mX[7988UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7989UL] = zc_int651;
    out->mLOG.mX[7990UL] = zc_int652;
    out->mLOG.mX[7991UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[7992UL] = zc_int652;
    out->mLOG.mX[7993UL] = t4657->mX.mX[976UL];
    out->mLOG.mX[7994UL] = BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod5 * -1000.0;
    out->mLOG.mX[7995UL] = t4657->mX.mX[976UL];
    out->mLOG.mX[7996UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[7997UL] = zc_int651;
    out->mLOG.mX[7998UL] = t4657->mX.mX[978UL];
    out->mLOG.mX[7999UL] = zc_int652;
    out->mLOG.mX[8000UL] = 0.0;
    out->mLOG.mX[8001UL] = t4657->mX.mX[1595UL];
    out->mLOG.mX[8002UL] = t4657->mX.mX[1595UL];
    out->mLOG.mX[8003UL] = t4657->mX.mX[976UL];
    out->mLOG.mX[8004UL] = zc_int595;
    out->mLOG.mX[8005UL] = zc_int652 - zc_int651;
    out->mLOG.mX[8006UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8007UL] = t4657->mX.mX[984UL];
    out->mLOG.mX[8008UL] = t4657->mX.mX[984UL];
    out->mLOG.mX[8009UL] = t4657->mX.mX[984UL];
    out->mLOG.mX[8010UL] = t4657->mX.mX[984UL];
    out->mLOG.mX[8011UL] = t4657->mX.mX[985UL] * 0.00027777777777777778;
    out->mLOG.mX[8012UL] = t4657->mX.mX[984UL];
    out->mLOG.mX[8013UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8014UL] = zc_int650;
    out->mLOG.mX[8015UL] = t4657->mX.mX[986UL];
    out->mLOG.mX[8016UL] = t4657->mX.mX[986UL];
    out->mLOG.mX[8017UL] = t4657->mX.mX[1599UL];
    out->mLOG.mX[8018UL] = zc_int651;
    for (t2499 = 987UL; t2499 - 987UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 7032UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[8024UL] = t4657->mX.mX[1598UL];
    out->mLOG.mX[8025UL] = t4657->mX.mX[1600UL] * 1000.0;
    out->mLOG.mX[8026UL] = t4657->mX.mX[1599UL];
    out->mLOG.mX[8027UL] = zc_int598;
    out->mLOG.mX[8028UL] = t4657->mX.mX[1597UL];
    out->mLOG.mX[8029UL] = t4657->mX.mX[985UL];
    out->mLOG.mX[8030UL] = t4657->mX.mX[984UL];
    out->mLOG.mX[8031UL] = t4657->mX.mX[986UL];
    out->mLOG.mX[8032UL] = t4657->mX.mX[1597UL];
    out->mLOG.mX[8033UL] = t4657->mX.mX[1598UL];
    out->mLOG.mX[8034UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8035UL] = zc_int650;
    out->mLOG.mX[8036UL] = t4657->mX.mX[986UL];
    out->mLOG.mX[8037UL] = BatteryPack_v2_ModuleAssembly_23_Module10_Cell_1_electricalMod0;
    out->mLOG.mX[8038UL] = zc_int651;
    out->mLOG.mX[8039UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3932 > 8.200000000000002E-8 ? t3932 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[987UL] * t4657->mX.mX[987UL] * 0.0 + t4657->mX.mX[988UL] * t4657->mX.mX[988UL] * 0.0) + t4657->mX.mX[989UL] * t4657->mX.mX[989UL] * 0.0) + t4657->mX.mX[990UL] * t4657->mX.mX[990UL] * 0.0) + t4657->mX.mX[991UL] * t4657->mX.mX[991UL] * 0.0) * 0.001;
    out->mLOG.mX[8040UL] = t4657->mX.mX[1599UL];
    out->mLOG.mX[8041UL] = t4657->mX.mX[1599UL];
    out->mLOG.mX[8042UL] = t4657->mX.mX[984UL];
    out->mLOG.mX[8043UL] = t3930 * 1000.0;
    out->mLOG.mX[8044UL] = t4657->mX.mX[984UL];
    out->mLOG.mX[8045UL] = t4657->mX.mX[984UL];
    out->mLOG.mX[8046UL] = t4657->mX.mX[1600UL] * 1000.0;
    out->mLOG.mX[8047UL] = zc_int598;
    out->mLOG.mX[8048UL] = t4657->mX.mX[984UL];
    out->mLOG.mX[8049UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8050UL] = BatteryPack_v2_ModuleAssembly_23_Module10_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[8051UL] = BatteryPack_v2_ModuleAssembly_23_Module10_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[8052UL] = zc_int650;
    out->mLOG.mX[8053UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8054UL] = zc_int650;
    out->mLOG.mX[8055UL] = zc_int651;
    out->mLOG.mX[8056UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[8057UL] = zc_int651;
    out->mLOG.mX[8058UL] = t4657->mX.mX[984UL];
    out->mLOG.mX[8059UL] = t3930 * -1000.0;
    out->mLOG.mX[8060UL] = t4657->mX.mX[984UL];
    out->mLOG.mX[8061UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8062UL] = zc_int650;
    out->mLOG.mX[8063UL] = t4657->mX.mX[986UL];
    out->mLOG.mX[8064UL] = zc_int651;
    out->mLOG.mX[8065UL] = 0.0;
    out->mLOG.mX[8066UL] = t4657->mX.mX[1599UL];
    out->mLOG.mX[8067UL] = t4657->mX.mX[1599UL];
    out->mLOG.mX[8068UL] = t4657->mX.mX[984UL];
    out->mLOG.mX[8069UL] = zc_int598;
    out->mLOG.mX[8070UL] = zc_int651 - zc_int650;
    out->mLOG.mX[8071UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8072UL] = t4657->mX.mX[992UL];
    out->mLOG.mX[8073UL] = t4657->mX.mX[992UL];
    out->mLOG.mX[8074UL] = t4657->mX.mX[992UL];
    out->mLOG.mX[8075UL] = t4657->mX.mX[992UL];
    out->mLOG.mX[8076UL] = t4657->mX.mX[993UL] * 0.00027777777777777778;
    out->mLOG.mX[8077UL] = t4657->mX.mX[992UL];
    out->mLOG.mX[8078UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8079UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    out->mLOG.mX[8080UL] = t4657->mX.mX[994UL];
    out->mLOG.mX[8081UL] = t4657->mX.mX[994UL];
    out->mLOG.mX[8082UL] = t4657->mX.mX[1603UL];
    out->mLOG.mX[8083UL] = zc_int650;
    for (t2499 = 995UL; t2499 - 995UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 7089UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[8089UL] = t4657->mX.mX[1602UL];
    out->mLOG.mX[8090UL] = t4657->mX.mX[1604UL] * 1000.0;
    out->mLOG.mX[8091UL] = t4657->mX.mX[1603UL];
    out->mLOG.mX[8092UL] = zc_int601;
    out->mLOG.mX[8093UL] = t4657->mX.mX[1601UL];
    out->mLOG.mX[8094UL] = t4657->mX.mX[993UL];
    out->mLOG.mX[8095UL] = t4657->mX.mX[992UL];
    out->mLOG.mX[8096UL] = t4657->mX.mX[994UL];
    out->mLOG.mX[8097UL] = t4657->mX.mX[1601UL];
    out->mLOG.mX[8098UL] = t4657->mX.mX[1602UL];
    out->mLOG.mX[8099UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8100UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    out->mLOG.mX[8101UL] = t4657->mX.mX[994UL];
    out->mLOG.mX[8102UL] = BatteryPack_v2_ModuleAssembly_23_Module11_Cell_1_electricalMod0;
    out->mLOG.mX[8103UL] = zc_int650;
    out->mLOG.mX[8104UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly_23_Module11_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly_23_Module11_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[995UL] * t4657->mX.mX[995UL] * 0.0 + t4657->mX.mX[996UL] * t4657->mX.mX[996UL] * 0.0) + t4657->mX.mX[997UL] * t4657->mX.mX[997UL] * 0.0) + t4657->mX.mX[998UL] * t4657->mX.mX[998UL] * 0.0) + t4657->mX.mX[999UL] * t4657->mX.mX[999UL] * 0.0) * 0.001;
    out->mLOG.mX[8105UL] = t4657->mX.mX[1603UL];
    out->mLOG.mX[8106UL] = t4657->mX.mX[1603UL];
    out->mLOG.mX[8107UL] = t4657->mX.mX[992UL];
    out->mLOG.mX[8108UL] = BatteryPack_v2_ModuleAssembly_23_Module11_Cell_1_electricalMod5 * 1000.0;
    out->mLOG.mX[8109UL] = t4657->mX.mX[992UL];
    out->mLOG.mX[8110UL] = t4657->mX.mX[992UL];
    out->mLOG.mX[8111UL] = t4657->mX.mX[1604UL] * 1000.0;
    out->mLOG.mX[8112UL] = zc_int601;
    out->mLOG.mX[8113UL] = t4657->mX.mX[992UL];
    out->mLOG.mX[8114UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8115UL] = BatteryPack_v2_ModuleAssembly_23_Module11_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[8116UL] = BatteryPack_v2_ModuleAssembly_23_Module11_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[8117UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    out->mLOG.mX[8118UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8119UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    out->mLOG.mX[8120UL] = zc_int650;
    out->mLOG.mX[8121UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[8122UL] = zc_int650;
    out->mLOG.mX[8123UL] = t4657->mX.mX[992UL];
    out->mLOG.mX[8124UL] = BatteryPack_v2_ModuleAssembly_23_Module11_Cell_1_electricalMod5 * -1000.0;
    out->mLOG.mX[8125UL] = t4657->mX.mX[992UL];
    out->mLOG.mX[8126UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8127UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    out->mLOG.mX[8128UL] = t4657->mX.mX[994UL];
    out->mLOG.mX[8129UL] = zc_int650;
    out->mLOG.mX[8130UL] = 0.0;
    out->mLOG.mX[8131UL] = t4657->mX.mX[1603UL];
    out->mLOG.mX[8132UL] = t4657->mX.mX[1603UL];
    out->mLOG.mX[8133UL] = t4657->mX.mX[992UL];
    out->mLOG.mX[8134UL] = zc_int601;
    out->mLOG.mX[8135UL] = zc_int650 - BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    out->mLOG.mX[8136UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8137UL] = t4657->mX.mX[1000UL];
    out->mLOG.mX[8138UL] = t4657->mX.mX[1000UL];
    out->mLOG.mX[8139UL] = t4657->mX.mX[1000UL];
    out->mLOG.mX[8140UL] = t4657->mX.mX[1000UL];
    out->mLOG.mX[8141UL] = t4657->mX.mX[1001UL] * 0.00027777777777777778;
    out->mLOG.mX[8142UL] = t4657->mX.mX[1000UL];
    out->mLOG.mX[8143UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8144UL] = t3969;
    out->mLOG.mX[8145UL] = t4657->mX.mX[1002UL];
    out->mLOG.mX[8146UL] = t4657->mX.mX[1002UL];
    out->mLOG.mX[8147UL] = t4657->mX.mX[1607UL];
    out->mLOG.mX[8148UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    for (t2499 = 1003UL; t2499 - 1003UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 7146UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[8154UL] = t4657->mX.mX[1606UL];
    out->mLOG.mX[8155UL] = t4657->mX.mX[1608UL] * 1000.0;
    out->mLOG.mX[8156UL] = t4657->mX.mX[1607UL];
    out->mLOG.mX[8157UL] = zc_int600;
    out->mLOG.mX[8158UL] = t4657->mX.mX[1605UL];
    out->mLOG.mX[8159UL] = t4657->mX.mX[1001UL];
    out->mLOG.mX[8160UL] = t4657->mX.mX[1000UL];
    out->mLOG.mX[8161UL] = t4657->mX.mX[1002UL];
    out->mLOG.mX[8162UL] = t4657->mX.mX[1605UL];
    out->mLOG.mX[8163UL] = t4657->mX.mX[1606UL];
    out->mLOG.mX[8164UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8165UL] = t3969;
    out->mLOG.mX[8166UL] = t4657->mX.mX[1002UL];
    out->mLOG.mX[8167UL] = BatteryPack_v2_ModuleAssembly_23_Module12_Cell_1_electricalMod0;
    out->mLOG.mX[8168UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    out->mLOG.mX[8169UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3942 > 8.200000000000002E-8 ? t3942 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[1003UL] * t4657->mX.mX[1003UL] * 0.0 + t4657->mX.mX[1004UL] * t4657->mX.mX[1004UL] * 0.0) + t4657->mX.mX[1005UL] * t4657->mX.mX[1005UL] * 0.0) + t4657->mX.mX[1006UL] * t4657->mX.mX[1006UL] * 0.0) + t4657->mX.mX[1007UL] * t4657->mX.mX[1007UL] * 0.0) * 0.001;
    out->mLOG.mX[8170UL] = t4657->mX.mX[1607UL];
    out->mLOG.mX[8171UL] = t4657->mX.mX[1607UL];
    out->mLOG.mX[8172UL] = t4657->mX.mX[1000UL];
    out->mLOG.mX[8173UL] = BatteryPack_v2_ModuleAssembly_23_Module12_Cell_1_electricalMod5 * 1000.0;
    out->mLOG.mX[8174UL] = t4657->mX.mX[1000UL];
    out->mLOG.mX[8175UL] = t4657->mX.mX[1000UL];
    out->mLOG.mX[8176UL] = t4657->mX.mX[1608UL] * 1000.0;
    out->mLOG.mX[8177UL] = zc_int600;
    out->mLOG.mX[8178UL] = t4657->mX.mX[1000UL];
    out->mLOG.mX[8179UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8180UL] = BatteryPack_v2_ModuleAssembly_23_Module12_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[8181UL] = BatteryPack_v2_ModuleAssembly_23_Module12_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[8182UL] = t3969;
    out->mLOG.mX[8183UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8184UL] = t3969;
    out->mLOG.mX[8185UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    out->mLOG.mX[8186UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[8187UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    out->mLOG.mX[8188UL] = t4657->mX.mX[1000UL];
    out->mLOG.mX[8189UL] = BatteryPack_v2_ModuleAssembly_23_Module12_Cell_1_electricalMod5 * -1000.0;
    out->mLOG.mX[8190UL] = t4657->mX.mX[1000UL];
    out->mLOG.mX[8191UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8192UL] = t3969;
    out->mLOG.mX[8193UL] = t4657->mX.mX[1002UL];
    out->mLOG.mX[8194UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3;
    out->mLOG.mX[8195UL] = 0.0;
    out->mLOG.mX[8196UL] = t4657->mX.mX[1607UL];
    out->mLOG.mX[8197UL] = t4657->mX.mX[1607UL];
    out->mLOG.mX[8198UL] = t4657->mX.mX[1000UL];
    out->mLOG.mX[8199UL] = zc_int600;
    out->mLOG.mX[8200UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_electricalMod3 - t3969;
    out->mLOG.mX[8201UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8202UL] = t4657->mX.mX[1008UL];
    out->mLOG.mX[8203UL] = t4657->mX.mX[1008UL];
    out->mLOG.mX[8204UL] = t4657->mX.mX[1008UL];
    out->mLOG.mX[8205UL] = t4657->mX.mX[1008UL];
    out->mLOG.mX[8206UL] = t4657->mX.mX[1009UL] * 0.00027777777777777778;
    out->mLOG.mX[8207UL] = t4657->mX.mX[1008UL];
    out->mLOG.mX[8208UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8209UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    out->mLOG.mX[8210UL] = t4657->mX.mX[1010UL];
    out->mLOG.mX[8211UL] = t4657->mX.mX[1010UL];
    out->mLOG.mX[8212UL] = t4657->mX.mX[1611UL];
    out->mLOG.mX[8213UL] = t3969;
    for (t2499 = 1011UL; t2499 - 1011UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 7203UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[8219UL] = t4657->mX.mX[1610UL];
    out->mLOG.mX[8220UL] = t4657->mX.mX[1612UL] * 1000.0;
    out->mLOG.mX[8221UL] = t4657->mX.mX[1611UL];
    out->mLOG.mX[8222UL] = zc_int607;
    out->mLOG.mX[8223UL] = t4657->mX.mX[1609UL];
    out->mLOG.mX[8224UL] = t4657->mX.mX[1009UL];
    out->mLOG.mX[8225UL] = t4657->mX.mX[1008UL];
    out->mLOG.mX[8226UL] = t4657->mX.mX[1010UL];
    out->mLOG.mX[8227UL] = t4657->mX.mX[1609UL];
    out->mLOG.mX[8228UL] = t4657->mX.mX[1610UL];
    out->mLOG.mX[8229UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8230UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    out->mLOG.mX[8231UL] = t4657->mX.mX[1010UL];
    out->mLOG.mX[8232UL] = t3943;
    out->mLOG.mX[8233UL] = t3969;
    out->mLOG.mX[8234UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly_23_Module13_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly_23_Module13_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[1011UL] * t4657->mX.mX[1011UL] * 0.0 + t4657->mX.mX[1012UL] * t4657->mX.mX[1012UL] * 0.0) + t4657->mX.mX[1013UL] * t4657->mX.mX[1013UL] * 0.0) + t4657->mX.mX[1014UL] * t4657->mX.mX[1014UL] * 0.0) + t4657->mX.mX[1015UL] * t4657->mX.mX[1015UL] * 0.0) * 0.001;
    out->mLOG.mX[8235UL] = t4657->mX.mX[1611UL];
    out->mLOG.mX[8236UL] = t4657->mX.mX[1611UL];
    out->mLOG.mX[8237UL] = t4657->mX.mX[1008UL];
    out->mLOG.mX[8238UL] = BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[8239UL] = t4657->mX.mX[1008UL];
    out->mLOG.mX[8240UL] = t4657->mX.mX[1008UL];
    out->mLOG.mX[8241UL] = t4657->mX.mX[1612UL] * 1000.0;
    out->mLOG.mX[8242UL] = zc_int607;
    out->mLOG.mX[8243UL] = t4657->mX.mX[1008UL];
    out->mLOG.mX[8244UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8245UL] = BatteryPack_v2_ModuleAssembly_23_Module13_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[8246UL] = BatteryPack_v2_ModuleAssembly_23_Module13_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[8247UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    out->mLOG.mX[8248UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8249UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    out->mLOG.mX[8250UL] = t3969;
    out->mLOG.mX[8251UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[8252UL] = t3969;
    out->mLOG.mX[8253UL] = t4657->mX.mX[1008UL];
    out->mLOG.mX[8254UL] = BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[8255UL] = t4657->mX.mX[1008UL];
    out->mLOG.mX[8256UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8257UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    out->mLOG.mX[8258UL] = t4657->mX.mX[1010UL];
    out->mLOG.mX[8259UL] = t3969;
    out->mLOG.mX[8260UL] = 0.0;
    out->mLOG.mX[8261UL] = t4657->mX.mX[1611UL];
    out->mLOG.mX[8262UL] = t4657->mX.mX[1611UL];
    out->mLOG.mX[8263UL] = t4657->mX.mX[1008UL];
    out->mLOG.mX[8264UL] = zc_int607;
    out->mLOG.mX[8265UL] = t3969 - BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    out->mLOG.mX[8266UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8267UL] = t4657->mX.mX[1016UL];
    out->mLOG.mX[8268UL] = t4657->mX.mX[1016UL];
    out->mLOG.mX[8269UL] = t4657->mX.mX[1016UL];
    out->mLOG.mX[8270UL] = t4657->mX.mX[1016UL];
    out->mLOG.mX[8271UL] = t4657->mX.mX[1017UL] * 0.00027777777777777778;
    out->mLOG.mX[8272UL] = t4657->mX.mX[1016UL];
    out->mLOG.mX[8273UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8274UL] = zc_int646;
    out->mLOG.mX[8275UL] = t4657->mX.mX[1018UL];
    out->mLOG.mX[8276UL] = t4657->mX.mX[1018UL];
    out->mLOG.mX[8277UL] = t4657->mX.mX[1615UL];
    out->mLOG.mX[8278UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    for (t2499 = 1019UL; t2499 - 1019UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 7260UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[8284UL] = t4657->mX.mX[1614UL];
    out->mLOG.mX[8285UL] = t4657->mX.mX[1616UL] * 1000.0;
    out->mLOG.mX[8286UL] = t4657->mX.mX[1615UL];
    out->mLOG.mX[8287UL] = zc_int606;
    out->mLOG.mX[8288UL] = t4657->mX.mX[1613UL];
    out->mLOG.mX[8289UL] = t4657->mX.mX[1017UL];
    out->mLOG.mX[8290UL] = t4657->mX.mX[1016UL];
    out->mLOG.mX[8291UL] = t4657->mX.mX[1018UL];
    out->mLOG.mX[8292UL] = t4657->mX.mX[1613UL];
    out->mLOG.mX[8293UL] = t4657->mX.mX[1614UL];
    out->mLOG.mX[8294UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8295UL] = zc_int646;
    out->mLOG.mX[8296UL] = t4657->mX.mX[1018UL];
    out->mLOG.mX[8297UL] = BatteryPack_v2_ModuleAssembly_23_Module14_Cell_1_electricalMod0;
    out->mLOG.mX[8298UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    out->mLOG.mX[8299UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly_23_Module14_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly_23_Module14_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[1019UL] * t4657->mX.mX[1019UL] * 0.0 + t4657->mX.mX[1020UL] * t4657->mX.mX[1020UL] * 0.0) + t4657->mX.mX[1021UL] * t4657->mX.mX[1021UL] * 0.0) + t4657->mX.mX[1022UL] * t4657->mX.mX[1022UL] * 0.0) + t4657->mX.mX[1023UL] * t4657->mX.mX[1023UL] * 0.0) * 0.001;
    out->mLOG.mX[8300UL] = t4657->mX.mX[1615UL];
    out->mLOG.mX[8301UL] = t4657->mX.mX[1615UL];
    out->mLOG.mX[8302UL] = t4657->mX.mX[1016UL];
    out->mLOG.mX[8303UL] = BatteryPack_v2_ModuleAssembly_23_Module14_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[8304UL] = t4657->mX.mX[1016UL];
    out->mLOG.mX[8305UL] = t4657->mX.mX[1016UL];
    out->mLOG.mX[8306UL] = t4657->mX.mX[1616UL] * 1000.0;
    out->mLOG.mX[8307UL] = zc_int606;
    out->mLOG.mX[8308UL] = t4657->mX.mX[1016UL];
    out->mLOG.mX[8309UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8310UL] = BatteryPack_v2_ModuleAssembly_23_Module14_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[8311UL] = BatteryPack_v2_ModuleAssembly_23_Module14_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[8312UL] = zc_int646;
    out->mLOG.mX[8313UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8314UL] = zc_int646;
    out->mLOG.mX[8315UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    out->mLOG.mX[8316UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[8317UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    out->mLOG.mX[8318UL] = t4657->mX.mX[1016UL];
    out->mLOG.mX[8319UL] = BatteryPack_v2_ModuleAssembly_23_Module14_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[8320UL] = t4657->mX.mX[1016UL];
    out->mLOG.mX[8321UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8322UL] = zc_int646;
    out->mLOG.mX[8323UL] = t4657->mX.mX[1018UL];
    out->mLOG.mX[8324UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3;
    out->mLOG.mX[8325UL] = 0.0;
    out->mLOG.mX[8326UL] = t4657->mX.mX[1615UL];
    out->mLOG.mX[8327UL] = t4657->mX.mX[1615UL];
    out->mLOG.mX[8328UL] = t4657->mX.mX[1016UL];
    out->mLOG.mX[8329UL] = zc_int606;
    out->mLOG.mX[8330UL] = BatteryPack_v2_ModuleAssembly_23_Module18_Cell_1_electricalMod3 - zc_int646;
    out->mLOG.mX[8331UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8332UL] = t4657->mX.mX[1024UL];
    out->mLOG.mX[8333UL] = t4657->mX.mX[1024UL];
    out->mLOG.mX[8334UL] = t4657->mX.mX[1024UL];
    out->mLOG.mX[8335UL] = t4657->mX.mX[1024UL];
    out->mLOG.mX[8336UL] = t4657->mX.mX[1025UL] * 0.00027777777777777778;
    out->mLOG.mX[8337UL] = t4657->mX.mX[1024UL];
    out->mLOG.mX[8338UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8339UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    out->mLOG.mX[8340UL] = t4657->mX.mX[1026UL];
    out->mLOG.mX[8341UL] = t4657->mX.mX[1026UL];
    out->mLOG.mX[8342UL] = t4657->mX.mX[1619UL];
    out->mLOG.mX[8343UL] = zc_int646;
    for (t2499 = 1027UL; t2499 - 1027UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 7317UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[8349UL] = t4657->mX.mX[1618UL];
    out->mLOG.mX[8350UL] = t4657->mX.mX[1620UL] * 1000.0;
    out->mLOG.mX[8351UL] = t4657->mX.mX[1619UL];
    out->mLOG.mX[8352UL] = BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3;
    out->mLOG.mX[8353UL] = t4657->mX.mX[1617UL];
    out->mLOG.mX[8354UL] = t4657->mX.mX[1025UL];
    out->mLOG.mX[8355UL] = t4657->mX.mX[1024UL];
    out->mLOG.mX[8356UL] = t4657->mX.mX[1026UL];
    out->mLOG.mX[8357UL] = t4657->mX.mX[1617UL];
    out->mLOG.mX[8358UL] = t4657->mX.mX[1618UL];
    out->mLOG.mX[8359UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8360UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    out->mLOG.mX[8361UL] = t4657->mX.mX[1026UL];
    out->mLOG.mX[8362UL] = BatteryPack_v2_ModuleAssembly_23_Module15_Cell_1_electricalMod0;
    out->mLOG.mX[8363UL] = zc_int646;
    out->mLOG.mX[8364UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly_23_Module15_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly_23_Module15_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[1027UL] * t4657->mX.mX[1027UL] * 0.0 + t4657->mX.mX[1028UL] * t4657->mX.mX[1028UL] * 0.0) + t4657->mX.mX[1029UL] * t4657->mX.mX[1029UL] * 0.0) + t4657->mX.mX[1030UL] * t4657->mX.mX[1030UL] * 0.0) + t4657->mX.mX[1031UL] * t4657->mX.mX[1031UL] * 0.0) * 0.001;
    out->mLOG.mX[8365UL] = t4657->mX.mX[1619UL];
    out->mLOG.mX[8366UL] = t4657->mX.mX[1619UL];
    out->mLOG.mX[8367UL] = t4657->mX.mX[1024UL];
    out->mLOG.mX[8368UL] = BatteryPack_v2_ModuleAssembly_23_Module15_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[8369UL] = t4657->mX.mX[1024UL];
    out->mLOG.mX[8370UL] = t4657->mX.mX[1024UL];
    out->mLOG.mX[8371UL] = t4657->mX.mX[1620UL] * 1000.0;
    out->mLOG.mX[8372UL] = BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3;
    out->mLOG.mX[8373UL] = t4657->mX.mX[1024UL];
    out->mLOG.mX[8374UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8375UL] = BatteryPack_v2_ModuleAssembly_23_Module15_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[8376UL] = BatteryPack_v2_ModuleAssembly_23_Module15_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[8377UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    out->mLOG.mX[8378UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8379UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    out->mLOG.mX[8380UL] = zc_int646;
    out->mLOG.mX[8381UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[8382UL] = zc_int646;
    out->mLOG.mX[8383UL] = t4657->mX.mX[1024UL];
    out->mLOG.mX[8384UL] = BatteryPack_v2_ModuleAssembly_23_Module15_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[8385UL] = t4657->mX.mX[1024UL];
    out->mLOG.mX[8386UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8387UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    out->mLOG.mX[8388UL] = t4657->mX.mX[1026UL];
    out->mLOG.mX[8389UL] = zc_int646;
    out->mLOG.mX[8390UL] = 0.0;
    out->mLOG.mX[8391UL] = t4657->mX.mX[1619UL];
    out->mLOG.mX[8392UL] = t4657->mX.mX[1619UL];
    out->mLOG.mX[8393UL] = t4657->mX.mX[1024UL];
    out->mLOG.mX[8394UL] = BatteryPack_v2_ModuleAssembly_23_Module09_Cell_1_electricalMod3;
    out->mLOG.mX[8395UL] = zc_int646 - BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    out->mLOG.mX[8396UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8397UL] = t4657->mX.mX[1032UL];
    out->mLOG.mX[8398UL] = t4657->mX.mX[1032UL];
    out->mLOG.mX[8399UL] = t4657->mX.mX[1032UL];
    out->mLOG.mX[8400UL] = t4657->mX.mX[1032UL];
    out->mLOG.mX[8401UL] = t4657->mX.mX[1033UL] * 0.00027777777777777778;
    out->mLOG.mX[8402UL] = t4657->mX.mX[1032UL];
    out->mLOG.mX[8403UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8404UL] = t3959;
    out->mLOG.mX[8405UL] = t4657->mX.mX[1034UL];
    out->mLOG.mX[8406UL] = t4657->mX.mX[1034UL];
    out->mLOG.mX[8407UL] = t4657->mX.mX[1623UL];
    out->mLOG.mX[8408UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    for (t2499 = 1035UL; t2499 - 1035UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 7374UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[8414UL] = t4657->mX.mX[1622UL];
    out->mLOG.mX[8415UL] = t4657->mX.mX[1624UL] * 1000.0;
    out->mLOG.mX[8416UL] = t4657->mX.mX[1623UL];
    out->mLOG.mX[8417UL] = zc_int612;
    out->mLOG.mX[8418UL] = t4657->mX.mX[1621UL];
    out->mLOG.mX[8419UL] = t4657->mX.mX[1033UL];
    out->mLOG.mX[8420UL] = t4657->mX.mX[1032UL];
    out->mLOG.mX[8421UL] = t4657->mX.mX[1034UL];
    out->mLOG.mX[8422UL] = t4657->mX.mX[1621UL];
    out->mLOG.mX[8423UL] = t4657->mX.mX[1622UL];
    out->mLOG.mX[8424UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8425UL] = t3959;
    out->mLOG.mX[8426UL] = t4657->mX.mX[1034UL];
    out->mLOG.mX[8427UL] = t3958;
    out->mLOG.mX[8428UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    out->mLOG.mX[8429UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3962 > 8.200000000000002E-8 ? t3962 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[1035UL] * t4657->mX.mX[1035UL] * 0.0 + t4657->mX.mX[1036UL] * t4657->mX.mX[1036UL] * 0.0) + t4657->mX.mX[1037UL] * t4657->mX.mX[1037UL] * 0.0) + t4657->mX.mX[1038UL] * t4657->mX.mX[1038UL] * 0.0) + t4657->mX.mX[1039UL] * t4657->mX.mX[1039UL] * 0.0) * 0.001;
    out->mLOG.mX[8430UL] = t4657->mX.mX[1623UL];
    out->mLOG.mX[8431UL] = t4657->mX.mX[1623UL];
    out->mLOG.mX[8432UL] = t4657->mX.mX[1032UL];
    out->mLOG.mX[8433UL] = BatteryPack_v2_ModuleAssembly_23_Module16_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[8434UL] = t4657->mX.mX[1032UL];
    out->mLOG.mX[8435UL] = t4657->mX.mX[1032UL];
    out->mLOG.mX[8436UL] = t4657->mX.mX[1624UL] * 1000.0;
    out->mLOG.mX[8437UL] = zc_int612;
    out->mLOG.mX[8438UL] = t4657->mX.mX[1032UL];
    out->mLOG.mX[8439UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8440UL] = BatteryPack_v2_ModuleAssembly_23_Module16_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[8441UL] = BatteryPack_v2_ModuleAssembly_23_Module16_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[8442UL] = t3959;
    out->mLOG.mX[8443UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8444UL] = t3959;
    out->mLOG.mX[8445UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    out->mLOG.mX[8446UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[8447UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    out->mLOG.mX[8448UL] = t4657->mX.mX[1032UL];
    out->mLOG.mX[8449UL] = BatteryPack_v2_ModuleAssembly_23_Module16_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[8450UL] = t4657->mX.mX[1032UL];
    out->mLOG.mX[8451UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8452UL] = t3959;
    out->mLOG.mX[8453UL] = t4657->mX.mX[1034UL];
    out->mLOG.mX[8454UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3;
    out->mLOG.mX[8455UL] = 0.0;
    out->mLOG.mX[8456UL] = t4657->mX.mX[1623UL];
    out->mLOG.mX[8457UL] = t4657->mX.mX[1623UL];
    out->mLOG.mX[8458UL] = t4657->mX.mX[1032UL];
    out->mLOG.mX[8459UL] = zc_int612;
    out->mLOG.mX[8460UL] = BatteryPack_v2_ModuleAssembly_23_Module17_Cell_1_electricalMod3 - t3959;
    out->mLOG.mX[8461UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8462UL] = t4657->mX.mX[1040UL];
    out->mLOG.mX[8463UL] = t4657->mX.mX[1040UL];
    out->mLOG.mX[8464UL] = t4657->mX.mX[1040UL];
    out->mLOG.mX[8465UL] = t4657->mX.mX[1040UL];
    out->mLOG.mX[8466UL] = t4657->mX.mX[1041UL] * 0.00027777777777777778;
    out->mLOG.mX[8467UL] = t4657->mX.mX[1040UL];
    out->mLOG.mX[8468UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8469UL] = zc_int643;
    out->mLOG.mX[8470UL] = t4657->mX.mX[1042UL];
    out->mLOG.mX[8471UL] = t4657->mX.mX[1042UL];
    out->mLOG.mX[8472UL] = t4657->mX.mX[1627UL];
    out->mLOG.mX[8473UL] = t3959;
    for (t2499 = 1043UL; t2499 - 1043UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 7431UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[8479UL] = t4657->mX.mX[1626UL];
    out->mLOG.mX[8480UL] = t4657->mX.mX[1628UL] * 1000.0;
    out->mLOG.mX[8481UL] = t4657->mX.mX[1627UL];
    out->mLOG.mX[8482UL] = zc_int615;
    out->mLOG.mX[8483UL] = t4657->mX.mX[1625UL];
    out->mLOG.mX[8484UL] = t4657->mX.mX[1041UL];
    out->mLOG.mX[8485UL] = t4657->mX.mX[1040UL];
    out->mLOG.mX[8486UL] = t4657->mX.mX[1042UL];
    out->mLOG.mX[8487UL] = t4657->mX.mX[1625UL];
    out->mLOG.mX[8488UL] = t4657->mX.mX[1626UL];
    out->mLOG.mX[8489UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8490UL] = zc_int643;
    out->mLOG.mX[8491UL] = t4657->mX.mX[1042UL];
    out->mLOG.mX[8492UL] = t3963;
    out->mLOG.mX[8493UL] = t3959;
    out->mLOG.mX[8494UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly_23_Module17_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly_23_Module17_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[1043UL] * t4657->mX.mX[1043UL] * 0.0 + t4657->mX.mX[1044UL] * t4657->mX.mX[1044UL] * 0.0) + t4657->mX.mX[1045UL] * t4657->mX.mX[1045UL] * 0.0) + t4657->mX.mX[1046UL] * t4657->mX.mX[1046UL] * 0.0) + t4657->mX.mX[1047UL] * t4657->mX.mX[1047UL] * 0.0) * 0.001;
    out->mLOG.mX[8495UL] = t4657->mX.mX[1627UL];
    out->mLOG.mX[8496UL] = t4657->mX.mX[1627UL];
    out->mLOG.mX[8497UL] = t4657->mX.mX[1040UL];
    out->mLOG.mX[8498UL] = t3965 * 1000.0;
    out->mLOG.mX[8499UL] = t4657->mX.mX[1040UL];
    out->mLOG.mX[8500UL] = t4657->mX.mX[1040UL];
    out->mLOG.mX[8501UL] = t4657->mX.mX[1628UL] * 1000.0;
    out->mLOG.mX[8502UL] = zc_int615;
    out->mLOG.mX[8503UL] = t4657->mX.mX[1040UL];
    out->mLOG.mX[8504UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8505UL] = BatteryPack_v2_ModuleAssembly_23_Module17_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[8506UL] = BatteryPack_v2_ModuleAssembly_23_Module17_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[8507UL] = zc_int643;
    out->mLOG.mX[8508UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8509UL] = zc_int643;
    out->mLOG.mX[8510UL] = t3959;
    out->mLOG.mX[8511UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[8512UL] = t3959;
    out->mLOG.mX[8513UL] = t4657->mX.mX[1040UL];
    out->mLOG.mX[8514UL] = t3965 * -1000.0;
    out->mLOG.mX[8515UL] = t4657->mX.mX[1040UL];
    out->mLOG.mX[8516UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8517UL] = zc_int643;
    out->mLOG.mX[8518UL] = t4657->mX.mX[1042UL];
    out->mLOG.mX[8519UL] = t3959;
    out->mLOG.mX[8520UL] = 0.0;
    out->mLOG.mX[8521UL] = t4657->mX.mX[1627UL];
    out->mLOG.mX[8522UL] = t4657->mX.mX[1627UL];
    out->mLOG.mX[8523UL] = t4657->mX.mX[1040UL];
    out->mLOG.mX[8524UL] = zc_int615;
    out->mLOG.mX[8525UL] = t3959 - zc_int643;
    out->mLOG.mX[8526UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8527UL] = t4657->mX.mX[1048UL];
    out->mLOG.mX[8528UL] = t4657->mX.mX[1048UL];
    out->mLOG.mX[8529UL] = t4657->mX.mX[1048UL];
    out->mLOG.mX[8530UL] = t4657->mX.mX[1048UL];
    out->mLOG.mX[8531UL] = t4657->mX.mX[1049UL] * 0.00027777777777777778;
    out->mLOG.mX[8532UL] = t4657->mX.mX[1048UL];
    out->mLOG.mX[8533UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8534UL] = t3954;
    out->mLOG.mX[8535UL] = t4657->mX.mX[1050UL];
    out->mLOG.mX[8536UL] = t4657->mX.mX[1050UL];
    out->mLOG.mX[8537UL] = t4657->mX.mX[1631UL];
    out->mLOG.mX[8538UL] = zc_int643;
    for (t2499 = 1051UL; t2499 - 1051UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 7488UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[8544UL] = t4657->mX.mX[1630UL];
    out->mLOG.mX[8545UL] = t4657->mX.mX[1632UL] * 1000.0;
    out->mLOG.mX[8546UL] = t4657->mX.mX[1631UL];
    out->mLOG.mX[8547UL] = zc_int618;
    out->mLOG.mX[8548UL] = t4657->mX.mX[1629UL];
    out->mLOG.mX[8549UL] = t4657->mX.mX[1049UL];
    out->mLOG.mX[8550UL] = t4657->mX.mX[1048UL];
    out->mLOG.mX[8551UL] = t4657->mX.mX[1050UL];
    out->mLOG.mX[8552UL] = t4657->mX.mX[1629UL];
    out->mLOG.mX[8553UL] = t4657->mX.mX[1630UL];
    out->mLOG.mX[8554UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8555UL] = t3954;
    out->mLOG.mX[8556UL] = t4657->mX.mX[1050UL];
    out->mLOG.mX[8557UL] = t3968;
    out->mLOG.mX[8558UL] = zc_int643;
    out->mLOG.mX[8559UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly_23_Module18_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly_23_Module18_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[1051UL] * t4657->mX.mX[1051UL] * 0.0 + t4657->mX.mX[1052UL] * t4657->mX.mX[1052UL] * 0.0) + t4657->mX.mX[1053UL] * t4657->mX.mX[1053UL] * 0.0) + t4657->mX.mX[1054UL] * t4657->mX.mX[1054UL] * 0.0) + t4657->mX.mX[1055UL] * t4657->mX.mX[1055UL] * 0.0) * 0.001;
    out->mLOG.mX[8560UL] = t4657->mX.mX[1631UL];
    out->mLOG.mX[8561UL] = t4657->mX.mX[1631UL];
    out->mLOG.mX[8562UL] = t4657->mX.mX[1048UL];
    out->mLOG.mX[8563UL] = t3970 * 1000.0;
    out->mLOG.mX[8564UL] = t4657->mX.mX[1048UL];
    out->mLOG.mX[8565UL] = t4657->mX.mX[1048UL];
    out->mLOG.mX[8566UL] = t4657->mX.mX[1632UL] * 1000.0;
    out->mLOG.mX[8567UL] = zc_int618;
    out->mLOG.mX[8568UL] = t4657->mX.mX[1048UL];
    out->mLOG.mX[8569UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8570UL] = BatteryPack_v2_ModuleAssembly_23_Module18_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[8571UL] = BatteryPack_v2_ModuleAssembly_23_Module18_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[8572UL] = t3954;
    out->mLOG.mX[8573UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8574UL] = t3954;
    out->mLOG.mX[8575UL] = zc_int643;
    out->mLOG.mX[8576UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[8577UL] = zc_int643;
    out->mLOG.mX[8578UL] = t4657->mX.mX[1048UL];
    out->mLOG.mX[8579UL] = t3970 * -1000.0;
    out->mLOG.mX[8580UL] = t4657->mX.mX[1048UL];
    out->mLOG.mX[8581UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8582UL] = t3954;
    out->mLOG.mX[8583UL] = t4657->mX.mX[1050UL];
    out->mLOG.mX[8584UL] = zc_int643;
    out->mLOG.mX[8585UL] = 0.0;
    out->mLOG.mX[8586UL] = t4657->mX.mX[1631UL];
    out->mLOG.mX[8587UL] = t4657->mX.mX[1631UL];
    out->mLOG.mX[8588UL] = t4657->mX.mX[1048UL];
    out->mLOG.mX[8589UL] = zc_int618;
    out->mLOG.mX[8590UL] = zc_int643 - t3954;
    out->mLOG.mX[8591UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8592UL] = t4657->mX.mX[1056UL];
    out->mLOG.mX[8593UL] = t4657->mX.mX[1056UL];
    out->mLOG.mX[8594UL] = t4657->mX.mX[1056UL];
    out->mLOG.mX[8595UL] = t4657->mX.mX[1056UL];
    out->mLOG.mX[8596UL] = t4657->mX.mX[1057UL] * 0.00027777777777777778;
    out->mLOG.mX[8597UL] = t4657->mX.mX[1056UL];
    out->mLOG.mX[8598UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8599UL] = zc_int641;
    out->mLOG.mX[8600UL] = t4657->mX.mX[1058UL];
    out->mLOG.mX[8601UL] = t4657->mX.mX[1058UL];
    out->mLOG.mX[8602UL] = t4657->mX.mX[1635UL];
    out->mLOG.mX[8603UL] = t3954;
    for (t2499 = 1059UL; t2499 - 1059UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 7545UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[8609UL] = t4657->mX.mX[1634UL];
    out->mLOG.mX[8610UL] = t4657->mX.mX[1636UL] * 1000.0;
    out->mLOG.mX[8611UL] = t4657->mX.mX[1635UL];
    out->mLOG.mX[8612UL] = zc_int625;
    out->mLOG.mX[8613UL] = t4657->mX.mX[1633UL];
    out->mLOG.mX[8614UL] = t4657->mX.mX[1057UL];
    out->mLOG.mX[8615UL] = t4657->mX.mX[1056UL];
    out->mLOG.mX[8616UL] = t4657->mX.mX[1058UL];
    out->mLOG.mX[8617UL] = t4657->mX.mX[1633UL];
    out->mLOG.mX[8618UL] = t4657->mX.mX[1634UL];
    out->mLOG.mX[8619UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8620UL] = zc_int641;
    out->mLOG.mX[8621UL] = t4657->mX.mX[1058UL];
    out->mLOG.mX[8622UL] = t3973;
    out->mLOG.mX[8623UL] = t3954;
    out->mLOG.mX[8624UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3977 > 8.200000000000002E-8 ? t3977 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[1059UL] * t4657->mX.mX[1059UL] * 0.0 + t4657->mX.mX[1060UL] * t4657->mX.mX[1060UL] * 0.0) + t4657->mX.mX[1061UL] * t4657->mX.mX[1061UL] * 0.0) + t4657->mX.mX[1062UL] * t4657->mX.mX[1062UL] * 0.0) + t4657->mX.mX[1063UL] * t4657->mX.mX[1063UL] * 0.0) * 0.001;
    out->mLOG.mX[8625UL] = t4657->mX.mX[1635UL];
    out->mLOG.mX[8626UL] = t4657->mX.mX[1635UL];
    out->mLOG.mX[8627UL] = t4657->mX.mX[1056UL];
    out->mLOG.mX[8628UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[8629UL] = t4657->mX.mX[1056UL];
    out->mLOG.mX[8630UL] = t4657->mX.mX[1056UL];
    out->mLOG.mX[8631UL] = t4657->mX.mX[1636UL] * 1000.0;
    out->mLOG.mX[8632UL] = zc_int625;
    out->mLOG.mX[8633UL] = t4657->mX.mX[1056UL];
    out->mLOG.mX[8634UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8635UL] = BatteryPack_v2_ModuleAssembly_23_Module19_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[8636UL] = BatteryPack_v2_ModuleAssembly_23_Module19_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[8637UL] = zc_int641;
    out->mLOG.mX[8638UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8639UL] = zc_int641;
    out->mLOG.mX[8640UL] = t3954;
    out->mLOG.mX[8641UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[8642UL] = t3954;
    out->mLOG.mX[8643UL] = t4657->mX.mX[1056UL];
    out->mLOG.mX[8644UL] = BatteryPack_v2_ModuleAssembly_23_Module19_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[8645UL] = t4657->mX.mX[1056UL];
    out->mLOG.mX[8646UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8647UL] = zc_int641;
    out->mLOG.mX[8648UL] = t4657->mX.mX[1058UL];
    out->mLOG.mX[8649UL] = t3954;
    out->mLOG.mX[8650UL] = 0.0;
    out->mLOG.mX[8651UL] = t4657->mX.mX[1635UL];
    out->mLOG.mX[8652UL] = t4657->mX.mX[1635UL];
    out->mLOG.mX[8653UL] = t4657->mX.mX[1056UL];
    out->mLOG.mX[8654UL] = zc_int625;
    out->mLOG.mX[8655UL] = t3954 - zc_int641;
    out->mLOG.mX[8656UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8657UL] = t4657->mX.mX[1064UL];
    out->mLOG.mX[8658UL] = t4657->mX.mX[1064UL];
    out->mLOG.mX[8659UL] = t4657->mX.mX[1064UL];
    out->mLOG.mX[8660UL] = t4657->mX.mX[1064UL];
    out->mLOG.mX[8661UL] = t4657->mX.mX[1065UL] * 0.00027777777777777778;
    out->mLOG.mX[8662UL] = t4657->mX.mX[1064UL];
    out->mLOG.mX[8663UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8664UL] = t3949;
    out->mLOG.mX[8665UL] = t4657->mX.mX[1066UL];
    out->mLOG.mX[8666UL] = t4657->mX.mX[1066UL];
    out->mLOG.mX[8667UL] = t4657->mX.mX[1639UL];
    out->mLOG.mX[8668UL] = zc_int641;
    for (t2499 = 1067UL; t2499 - 1067UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 7602UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[8674UL] = t4657->mX.mX[1638UL];
    out->mLOG.mX[8675UL] = t4657->mX.mX[1640UL] * 1000.0;
    out->mLOG.mX[8676UL] = t4657->mX.mX[1639UL];
    out->mLOG.mX[8677UL] = zc_int628;
    out->mLOG.mX[8678UL] = t4657->mX.mX[1637UL];
    out->mLOG.mX[8679UL] = t4657->mX.mX[1065UL];
    out->mLOG.mX[8680UL] = t4657->mX.mX[1064UL];
    out->mLOG.mX[8681UL] = t4657->mX.mX[1066UL];
    out->mLOG.mX[8682UL] = t4657->mX.mX[1637UL];
    out->mLOG.mX[8683UL] = t4657->mX.mX[1638UL];
    out->mLOG.mX[8684UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8685UL] = t3949;
    out->mLOG.mX[8686UL] = t4657->mX.mX[1066UL];
    out->mLOG.mX[8687UL] = t3978;
    out->mLOG.mX[8688UL] = zc_int641;
    out->mLOG.mX[8689UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3982 > 8.200000000000002E-8 ? t3982 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[1067UL] * t4657->mX.mX[1067UL] * 0.0 + t4657->mX.mX[1068UL] * t4657->mX.mX[1068UL] * 0.0) + t4657->mX.mX[1069UL] * t4657->mX.mX[1069UL] * 0.0) + t4657->mX.mX[1070UL] * t4657->mX.mX[1070UL] * 0.0) + t4657->mX.mX[1071UL] * t4657->mX.mX[1071UL] * 0.0) * 0.001;
    out->mLOG.mX[8690UL] = t4657->mX.mX[1639UL];
    out->mLOG.mX[8691UL] = t4657->mX.mX[1639UL];
    out->mLOG.mX[8692UL] = t4657->mX.mX[1064UL];
    out->mLOG.mX[8693UL] = BatteryPack_v2_ModuleAssembly_23_Module20_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[8694UL] = t4657->mX.mX[1064UL];
    out->mLOG.mX[8695UL] = t4657->mX.mX[1064UL];
    out->mLOG.mX[8696UL] = t4657->mX.mX[1640UL] * 1000.0;
    out->mLOG.mX[8697UL] = zc_int628;
    out->mLOG.mX[8698UL] = t4657->mX.mX[1064UL];
    out->mLOG.mX[8699UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8700UL] = BatteryPack_v2_ModuleAssembly_23_Module20_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[8701UL] = BatteryPack_v2_ModuleAssembly_23_Module20_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[8702UL] = t3949;
    out->mLOG.mX[8703UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8704UL] = t3949;
    out->mLOG.mX[8705UL] = zc_int641;
    out->mLOG.mX[8706UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[8707UL] = zc_int641;
    out->mLOG.mX[8708UL] = t4657->mX.mX[1064UL];
    out->mLOG.mX[8709UL] = BatteryPack_v2_ModuleAssembly_23_Module20_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[8710UL] = t4657->mX.mX[1064UL];
    out->mLOG.mX[8711UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8712UL] = t3949;
    out->mLOG.mX[8713UL] = t4657->mX.mX[1066UL];
    out->mLOG.mX[8714UL] = zc_int641;
    out->mLOG.mX[8715UL] = 0.0;
    out->mLOG.mX[8716UL] = t4657->mX.mX[1639UL];
    out->mLOG.mX[8717UL] = t4657->mX.mX[1639UL];
    out->mLOG.mX[8718UL] = t4657->mX.mX[1064UL];
    out->mLOG.mX[8719UL] = zc_int628;
    out->mLOG.mX[8720UL] = zc_int641 - t3949;
    out->mLOG.mX[8721UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8722UL] = t4657->mX.mX[1072UL];
    out->mLOG.mX[8723UL] = t4657->mX.mX[1072UL];
    out->mLOG.mX[8724UL] = t4657->mX.mX[1072UL];
    out->mLOG.mX[8725UL] = t4657->mX.mX[1072UL];
    out->mLOG.mX[8726UL] = t4657->mX.mX[1073UL] * 0.00027777777777777778;
    out->mLOG.mX[8727UL] = t4657->mX.mX[1072UL];
    out->mLOG.mX[8728UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8729UL] = zc_int639;
    out->mLOG.mX[8730UL] = t4657->mX.mX[1074UL];
    out->mLOG.mX[8731UL] = t4657->mX.mX[1074UL];
    out->mLOG.mX[8732UL] = t4657->mX.mX[1643UL];
    out->mLOG.mX[8733UL] = t3949;
    for (t2499 = 1075UL; t2499 - 1075UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 7659UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[8739UL] = t4657->mX.mX[1642UL];
    out->mLOG.mX[8740UL] = t4657->mX.mX[1644UL] * 1000.0;
    out->mLOG.mX[8741UL] = t4657->mX.mX[1643UL];
    out->mLOG.mX[8742UL] = zc_int631;
    out->mLOG.mX[8743UL] = t4657->mX.mX[1641UL];
    out->mLOG.mX[8744UL] = t4657->mX.mX[1073UL];
    out->mLOG.mX[8745UL] = t4657->mX.mX[1072UL];
    out->mLOG.mX[8746UL] = t4657->mX.mX[1074UL];
    out->mLOG.mX[8747UL] = t4657->mX.mX[1641UL];
    out->mLOG.mX[8748UL] = t4657->mX.mX[1642UL];
    out->mLOG.mX[8749UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8750UL] = zc_int639;
    out->mLOG.mX[8751UL] = t4657->mX.mX[1074UL];
    out->mLOG.mX[8752UL] = BatteryPack_v2_ModuleAssembly_23_Module21_Cell_1_electricalMod0;
    out->mLOG.mX[8753UL] = t3949;
    out->mLOG.mX[8754UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly_23_Module21_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly_23_Module21_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[1075UL] * t4657->mX.mX[1075UL] * 0.0 + t4657->mX.mX[1076UL] * t4657->mX.mX[1076UL] * 0.0) + t4657->mX.mX[1077UL] * t4657->mX.mX[1077UL] * 0.0) + t4657->mX.mX[1078UL] * t4657->mX.mX[1078UL] * 0.0) + t4657->mX.mX[1079UL] * t4657->mX.mX[1079UL] * 0.0) * 0.001;
    out->mLOG.mX[8755UL] = t4657->mX.mX[1643UL];
    out->mLOG.mX[8756UL] = t4657->mX.mX[1643UL];
    out->mLOG.mX[8757UL] = t4657->mX.mX[1072UL];
    out->mLOG.mX[8758UL] = BatteryPack_v2_ModuleAssembly_23_Module21_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[8759UL] = t4657->mX.mX[1072UL];
    out->mLOG.mX[8760UL] = t4657->mX.mX[1072UL];
    out->mLOG.mX[8761UL] = t4657->mX.mX[1644UL] * 1000.0;
    out->mLOG.mX[8762UL] = zc_int631;
    out->mLOG.mX[8763UL] = t4657->mX.mX[1072UL];
    out->mLOG.mX[8764UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8765UL] = BatteryPack_v2_ModuleAssembly_23_Module21_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[8766UL] = BatteryPack_v2_ModuleAssembly_23_Module21_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[8767UL] = zc_int639;
    out->mLOG.mX[8768UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8769UL] = zc_int639;
    out->mLOG.mX[8770UL] = t3949;
    out->mLOG.mX[8771UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[8772UL] = t3949;
    out->mLOG.mX[8773UL] = t4657->mX.mX[1072UL];
    out->mLOG.mX[8774UL] = BatteryPack_v2_ModuleAssembly_23_Module21_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[8775UL] = t4657->mX.mX[1072UL];
    out->mLOG.mX[8776UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8777UL] = zc_int639;
    out->mLOG.mX[8778UL] = t4657->mX.mX[1074UL];
    out->mLOG.mX[8779UL] = t3949;
    out->mLOG.mX[8780UL] = 0.0;
    out->mLOG.mX[8781UL] = t4657->mX.mX[1643UL];
    out->mLOG.mX[8782UL] = t4657->mX.mX[1643UL];
    out->mLOG.mX[8783UL] = t4657->mX.mX[1072UL];
    out->mLOG.mX[8784UL] = zc_int631;
    out->mLOG.mX[8785UL] = t3949 - zc_int639;
    out->mLOG.mX[8786UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8787UL] = t4657->mX.mX[1080UL];
    out->mLOG.mX[8788UL] = t4657->mX.mX[1080UL];
    out->mLOG.mX[8789UL] = t4657->mX.mX[1080UL];
    out->mLOG.mX[8790UL] = t4657->mX.mX[1080UL];
    out->mLOG.mX[8791UL] = t4657->mX.mX[1081UL] * 0.00027777777777777778;
    out->mLOG.mX[8792UL] = t4657->mX.mX[1080UL];
    out->mLOG.mX[8793UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8794UL] = intrm_sf_mf_126;
    out->mLOG.mX[8795UL] = t4657->mX.mX[1082UL];
    out->mLOG.mX[8796UL] = t4657->mX.mX[1082UL];
    out->mLOG.mX[8797UL] = t4657->mX.mX[1647UL];
    out->mLOG.mX[8798UL] = zc_int639;
    for (t2499 = 1083UL; t2499 - 1083UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 7716UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[8804UL] = t4657->mX.mX[1646UL];
    out->mLOG.mX[8805UL] = t4657->mX.mX[1648UL] * 1000.0;
    out->mLOG.mX[8806UL] = t4657->mX.mX[1647UL];
    out->mLOG.mX[8807UL] = t3939;
    out->mLOG.mX[8808UL] = t4657->mX.mX[1645UL];
    out->mLOG.mX[8809UL] = t4657->mX.mX[1081UL];
    out->mLOG.mX[8810UL] = t4657->mX.mX[1080UL];
    out->mLOG.mX[8811UL] = t4657->mX.mX[1082UL];
    out->mLOG.mX[8812UL] = t4657->mX.mX[1645UL];
    out->mLOG.mX[8813UL] = t4657->mX.mX[1646UL];
    out->mLOG.mX[8814UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8815UL] = intrm_sf_mf_126;
    out->mLOG.mX[8816UL] = t4657->mX.mX[1082UL];
    out->mLOG.mX[8817UL] = BatteryPack_v2_ModuleAssembly_23_Module22_Cell_1_electricalMod0;
    out->mLOG.mX[8818UL] = zc_int639;
    out->mLOG.mX[8819UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (t3992 > 8.200000000000002E-8 ? t3992 : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[1083UL] * t4657->mX.mX[1083UL] * 0.0 + t4657->mX.mX[1084UL] * t4657->mX.mX[1084UL] * 0.0) + t4657->mX.mX[1085UL] * t4657->mX.mX[1085UL] * 0.0) + t4657->mX.mX[1086UL] * t4657->mX.mX[1086UL] * 0.0) + t4657->mX.mX[1087UL] * t4657->mX.mX[1087UL] * 0.0) * 0.001;
    out->mLOG.mX[8820UL] = t4657->mX.mX[1647UL];
    out->mLOG.mX[8821UL] = t4657->mX.mX[1647UL];
    out->mLOG.mX[8822UL] = t4657->mX.mX[1080UL];
    out->mLOG.mX[8823UL] = BatteryPack_v2_ModuleAssembly_23_Module22_Cell_1_electricalMod5 * 1000.0;
    out->mLOG.mX[8824UL] = t4657->mX.mX[1080UL];
    out->mLOG.mX[8825UL] = t4657->mX.mX[1080UL];
    out->mLOG.mX[8826UL] = t4657->mX.mX[1648UL] * 1000.0;
    out->mLOG.mX[8827UL] = t3939;
    out->mLOG.mX[8828UL] = t4657->mX.mX[1080UL];
    out->mLOG.mX[8829UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8830UL] = BatteryPack_v2_ModuleAssembly_23_Module22_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[8831UL] = BatteryPack_v2_ModuleAssembly_23_Module22_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[8832UL] = intrm_sf_mf_126;
    out->mLOG.mX[8833UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8834UL] = intrm_sf_mf_126;
    out->mLOG.mX[8835UL] = zc_int639;
    out->mLOG.mX[8836UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[8837UL] = zc_int639;
    out->mLOG.mX[8838UL] = t4657->mX.mX[1080UL];
    out->mLOG.mX[8839UL] = BatteryPack_v2_ModuleAssembly_23_Module22_Cell_1_electricalMod5 * -1000.0;
    out->mLOG.mX[8840UL] = t4657->mX.mX[1080UL];
    out->mLOG.mX[8841UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8842UL] = intrm_sf_mf_126;
    out->mLOG.mX[8843UL] = t4657->mX.mX[1082UL];
    out->mLOG.mX[8844UL] = zc_int639;
    out->mLOG.mX[8845UL] = 0.0;
    out->mLOG.mX[8846UL] = t4657->mX.mX[1647UL];
    out->mLOG.mX[8847UL] = t4657->mX.mX[1647UL];
    out->mLOG.mX[8848UL] = t4657->mX.mX[1080UL];
    out->mLOG.mX[8849UL] = t3939;
    out->mLOG.mX[8850UL] = zc_int639 - intrm_sf_mf_126;
    out->mLOG.mX[8851UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8852UL] = t4657->mX.mX[1088UL];
    out->mLOG.mX[8853UL] = t4657->mX.mX[1088UL];
    out->mLOG.mX[8854UL] = t4657->mX.mX[1088UL];
    out->mLOG.mX[8855UL] = t4657->mX.mX[1088UL];
    out->mLOG.mX[8856UL] = t4657->mX.mX[1089UL] * 0.00027777777777777778;
    out->mLOG.mX[8857UL] = t4657->mX.mX[1088UL];
    out->mLOG.mX[8858UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8859UL] = zc_int481;
    out->mLOG.mX[8860UL] = t4657->mX.mX[1090UL];
    out->mLOG.mX[8861UL] = t4657->mX.mX[1090UL];
    out->mLOG.mX[8862UL] = t4657->mX.mX[1651UL];
    out->mLOG.mX[8863UL] = intrm_sf_mf_126;
    for (t2499 = 1091UL; t2499 - 1091UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 7773UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[8869UL] = t4657->mX.mX[1650UL];
    out->mLOG.mX[8870UL] = t4657->mX.mX[1652UL] * 1000.0;
    out->mLOG.mX[8871UL] = t4657->mX.mX[1651UL];
    out->mLOG.mX[8872UL] = BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3;
    out->mLOG.mX[8873UL] = t4657->mX.mX[1649UL];
    out->mLOG.mX[8874UL] = t4657->mX.mX[1089UL];
    out->mLOG.mX[8875UL] = t4657->mX.mX[1088UL];
    out->mLOG.mX[8876UL] = t4657->mX.mX[1090UL];
    out->mLOG.mX[8877UL] = t4657->mX.mX[1649UL];
    out->mLOG.mX[8878UL] = t4657->mX.mX[1650UL];
    out->mLOG.mX[8879UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8880UL] = zc_int481;
    out->mLOG.mX[8881UL] = t4657->mX.mX[1090UL];
    out->mLOG.mX[8882UL] = t3993;
    out->mLOG.mX[8883UL] = intrm_sf_mf_126;
    out->mLOG.mX[8884UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly_23_Module23_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly_23_Module23_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[1091UL] * t4657->mX.mX[1091UL] * 0.0 + t4657->mX.mX[1092UL] * t4657->mX.mX[1092UL] * 0.0) + t4657->mX.mX[1093UL] * t4657->mX.mX[1093UL] * 0.0) + t4657->mX.mX[1094UL] * t4657->mX.mX[1094UL] * 0.0) + t4657->mX.mX[1095UL] * t4657->mX.mX[1095UL] * 0.0) * 0.001;
    out->mLOG.mX[8885UL] = t4657->mX.mX[1651UL];
    out->mLOG.mX[8886UL] = t4657->mX.mX[1651UL];
    out->mLOG.mX[8887UL] = t4657->mX.mX[1088UL];
    out->mLOG.mX[8888UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_thermalModel_Q * 1000.0;
    out->mLOG.mX[8889UL] = t4657->mX.mX[1088UL];
    out->mLOG.mX[8890UL] = t4657->mX.mX[1088UL];
    out->mLOG.mX[8891UL] = t4657->mX.mX[1652UL] * 1000.0;
    out->mLOG.mX[8892UL] = BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3;
    out->mLOG.mX[8893UL] = t4657->mX.mX[1088UL];
    out->mLOG.mX[8894UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8895UL] = BatteryPack_v2_ModuleAssembly_23_Module23_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[8896UL] = BatteryPack_v2_ModuleAssembly_23_Module23_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[8897UL] = zc_int481;
    out->mLOG.mX[8898UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8899UL] = zc_int481;
    out->mLOG.mX[8900UL] = intrm_sf_mf_126;
    out->mLOG.mX[8901UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[8902UL] = intrm_sf_mf_126;
    out->mLOG.mX[8903UL] = t4657->mX.mX[1088UL];
    out->mLOG.mX[8904UL] = BatteryPack_v2_ModuleAssembly_23_Module23_Cell_1_thermalModel_Q * -1000.0;
    out->mLOG.mX[8905UL] = t4657->mX.mX[1088UL];
    out->mLOG.mX[8906UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8907UL] = zc_int481;
    out->mLOG.mX[8908UL] = t4657->mX.mX[1090UL];
    out->mLOG.mX[8909UL] = intrm_sf_mf_126;
    out->mLOG.mX[8910UL] = 0.0;
    out->mLOG.mX[8911UL] = t4657->mX.mX[1651UL];
    out->mLOG.mX[8912UL] = t4657->mX.mX[1651UL];
    out->mLOG.mX[8913UL] = t4657->mX.mX[1088UL];
    out->mLOG.mX[8914UL] = BatteryPack_v2_ModuleAssembly_23_Module13_Cell_1_electricalMod3;
    out->mLOG.mX[8915UL] = intrm_sf_mf_126 - zc_int481;
    out->mLOG.mX[8916UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8917UL] = t4657->mX.mX[1096UL];
    out->mLOG.mX[8918UL] = t4657->mX.mX[1096UL];
    out->mLOG.mX[8919UL] = t4657->mX.mX[1096UL];
    out->mLOG.mX[8920UL] = t4657->mX.mX[1096UL];
    out->mLOG.mX[8921UL] = t4657->mX.mX[1097UL] * 0.00027777777777777778;
    out->mLOG.mX[8922UL] = t4657->mX.mX[1096UL];
    out->mLOG.mX[8923UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8924UL] = intrm_sf_mf_115;
    out->mLOG.mX[8925UL] = t4657->mX.mX[1098UL];
    out->mLOG.mX[8926UL] = t4657->mX.mX[1098UL];
    out->mLOG.mX[8927UL] = t4657->mX.mX[1655UL];
    out->mLOG.mX[8928UL] = BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3;
    for (t2499 = 1099UL; t2499 - 1099UL < 5UL; t2499++) {
        out->mLOG.mX[t2499 + 7830UL] = t4657->mX.mX[t2499];
    }
    out->mLOG.mX[8934UL] = t4657->mX.mX[1654UL];
    out->mLOG.mX[8935UL] = t4657->mX.mX[1656UL] * 1000.0;
    out->mLOG.mX[8936UL] = t4657->mX.mX[1655UL];
    out->mLOG.mX[8937UL] = zc_int457;
    out->mLOG.mX[8938UL] = t4657->mX.mX[1653UL];
    out->mLOG.mX[8939UL] = t4657->mX.mX[1097UL];
    out->mLOG.mX[8940UL] = t4657->mX.mX[1096UL];
    out->mLOG.mX[8941UL] = t4657->mX.mX[1098UL];
    out->mLOG.mX[8942UL] = t4657->mX.mX[1653UL];
    out->mLOG.mX[8943UL] = t4657->mX.mX[1654UL];
    out->mLOG.mX[8944UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8945UL] = intrm_sf_mf_115;
    out->mLOG.mX[8946UL] = t4657->mX.mX[1098UL];
    out->mLOG.mX[8947UL] = t3998;
    out->mLOG.mX[8948UL] = BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3;
    out->mLOG.mX[8949UL] = t4657->mU.mX[0UL] * t4657->mU.mX[0UL] * (BatteryPack_v2_ModuleAssembly_23_Module_1_1_numCyclesCell > 8.200000000000002E-8 ? BatteryPack_v2_ModuleAssembly_23_Module_1_1_numCyclesCell : 8.200000000000002E-8) * 0.001 + ((((t4657->mX.mX[1099UL] * t4657->mX.mX[1099UL] * 0.0 + t4657->mX.mX[1100UL] * t4657->mX.mX[1100UL] * 0.0) + t4657->mX.mX[1101UL] * t4657->mX.mX[1101UL] * 0.0) + t4657->mX.mX[1102UL] * t4657->mX.mX[1102UL] * 0.0) + t4657->mX.mX[1103UL] * t4657->mX.mX[1103UL] * 0.0) * 0.001;
    out->mLOG.mX[8950UL] = t4657->mX.mX[1655UL];
    out->mLOG.mX[8951UL] = t4657->mX.mX[1655UL];
    out->mLOG.mX[8952UL] = t4657->mX.mX[1096UL];
    out->mLOG.mX[8953UL] = BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_thermalModel * 1000.0;
    out->mLOG.mX[8954UL] = t4657->mX.mX[1096UL];
    out->mLOG.mX[8955UL] = t4657->mX.mX[1096UL];
    out->mLOG.mX[8956UL] = t4657->mX.mX[1656UL] * 1000.0;
    out->mLOG.mX[8957UL] = zc_int457;
    out->mLOG.mX[8958UL] = t4657->mX.mX[1096UL];
    out->mLOG.mX[8959UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8960UL] = BatteryPack_v2_ModuleAssembly_23_Module_1_1_AmbientResistor_Q * 1000.0;
    out->mLOG.mX[8961UL] = BatteryPack_v2_ModuleAssembly_23_Module_1_1_AmbientResistor_Q * 25000.0;
    out->mLOG.mX[8962UL] = intrm_sf_mf_115;
    out->mLOG.mX[8963UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8964UL] = intrm_sf_mf_115;
    out->mLOG.mX[8965UL] = BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3;
    out->mLOG.mX[8966UL] = -t4657->mU.mX[0UL];
    out->mLOG.mX[8967UL] = BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3;
    out->mLOG.mX[8968UL] = t4657->mX.mX[1096UL];
    out->mLOG.mX[8969UL] = BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_thermalModel * -1000.0;
    out->mLOG.mX[8970UL] = t4657->mX.mX[1096UL];
    out->mLOG.mX[8971UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8972UL] = intrm_sf_mf_115;
    out->mLOG.mX[8973UL] = t4657->mX.mX[1098UL];
    out->mLOG.mX[8974UL] = BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3;
    out->mLOG.mX[8975UL] = 0.0;
    out->mLOG.mX[8976UL] = t4657->mX.mX[1655UL];
    out->mLOG.mX[8977UL] = t4657->mX.mX[1655UL];
    out->mLOG.mX[8978UL] = t4657->mX.mX[1096UL];
    out->mLOG.mX[8979UL] = zc_int457;
    out->mLOG.mX[8980UL] = BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3 - intrm_sf_mf_115;
    out->mLOG.mX[8981UL] = BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3;
    out->mLOG.mX[8982UL] = zc_int481;
    out->mLOG.mX[8983UL] = BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3;
    out->mLOG.mX[8984UL] = BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3;
    out->mLOG.mX[8985UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8986UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8987UL] = -BatteryPack_v2_ModuleAssembly_23_Module_1_1_Cell_1_electricalM3;
    out->mLOG.mX[8988UL] = -149.2835 + zc_int452 * 1000.0;
    out->mLOG.mX[8989UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8990UL] = -149.2835 + zc_int452 * 1000.0;
    out->mLOG.mX[8991UL] = (t4657->mX.mX[1104UL] * 0.00050950000000000008 - 0.1492835) * 1962.708537782139;
    out->mLOG.mX[8992UL] = t4657->mU.mX[0UL];
    out->mLOG.mX[8993UL] = t4657->mX.mX[1104UL];
    out->mLOG.mX[8994UL] = t4657->mX.mX[1104UL];
(void)LC;
    (void)out;
    return 0;}
