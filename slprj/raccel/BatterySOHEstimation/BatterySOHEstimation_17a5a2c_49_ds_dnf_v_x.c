#include "ne_ds.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_sys_struct.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_dnf_v_x.h"
#include "BatterySOHEstimation_17a5a2c_49_ds.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_externals.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T BatterySOHEstimation_17a5a2c_49_ds_dnf_v_x(const NeDynamicSystem *LC, const NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
    static boolean_T _cg_const_1[1657] = { true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, true, false, true, true, false };
    int32_T i;
    (void)t1;
    (void)LC;
    for (i = 0; i < 1657; i++) {
        out->mDNF_V_X.mX[i] = _cg_const_1[i];
    }
(void)LC;
    (void)out;
    return 0;}