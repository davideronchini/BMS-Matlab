#include "ne_ds.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_sys_struct.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_duf_p.h"
#include "BatterySOHEstimation_17a5a2c_49_ds.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_externals.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T BatterySOHEstimation_17a5a2c_49_ds_duf_p(const NeDynamicSystem *LC, const NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
    static int32_T _cg_const_2[276] = { 1, 9, 17, 25, 33, 41, 49, 57, 65, 73, 81, 89, 97, 105, 113, 121, 129, 137, 145, 153, 161, 169, 177, 185, 193, 201, 209, 217, 225, 233, 241, 249, 257, 265, 273, 281, 289, 297, 305, 313, 321, 329, 337, 345, 353, 361, 369, 377, 385, 393, 401, 409, 417, 425, 433, 441, 449, 457, 465, 473, 481, 489, 497, 505, 513, 521, 529, 537, 545, 553, 561, 569, 577, 585, 593, 601, 609, 617, 625, 633, 641, 649, 657, 665, 673, 681, 689, 697, 705, 713, 721, 729, 737, 745, 753, 761, 769, 777, 785, 793, 801, 809, 817, 825, 833, 841, 849, 857, 865, 873, 881, 889, 897, 905, 913, 921, 929, 937, 945, 953, 961, 969, 977, 985, 993, 1001, 1009, 1017, 1025, 1033, 1041, 1049, 1057, 1065, 1073, 1081, 1089, 1097, 1105, 1109, 1113, 1117, 1121, 1125, 1129, 1133, 1137, 1141, 1145, 1149, 1153, 1157, 1161, 1165, 1169, 1173, 1177, 1181, 1185, 1189, 1193, 1197, 1201, 1205, 1209, 1213, 1217, 1221, 1225, 1229, 1233, 1237, 1241, 1245, 1249, 1253, 1257, 1261, 1265, 1269, 1273, 1277, 1281, 1285, 1289, 1293, 1297, 1301, 1305, 1309, 1313, 1317, 1321, 1325, 1329, 1333, 1337, 1341, 1345, 1349, 1353, 1357, 1361, 1365, 1369, 1373, 1377, 1381, 1385, 1389, 1393, 1397, 1401, 1405, 1409, 1413, 1417, 1421, 1425, 1429, 1433, 1437, 1441, 1445, 1449, 1453, 1457, 1461, 1465, 1469, 1473, 1477, 1481, 1485, 1489, 1493, 1497, 1501, 1505, 1509, 1513, 1517, 1521, 1525, 1529, 1533, 1537, 1541, 1545, 1549, 1553, 1557, 1561, 1565, 1569, 1573, 1577, 1581, 1585, 1589, 1593, 1597, 1601, 1605, 1609, 1613, 1617, 1621, 1625, 1629, 1633, 1637, 1641, 1645, 1649, 1653 };
    int32_T i1;
    (void)t1;
    (void)LC;
    out->mDUF_P.mNumCol = 1UL;
    out->mDUF_P.mNumRow = 1657UL;
    out->mDUF_P.mJc[0] = 0;
    out->mDUF_P.mJc[1] = 276;
    for (i1 = 0; i1 < 276; i1++) {
        out->mDUF_P.mIr[i1] = _cg_const_2[i1];
    }
(void)LC;
    (void)out;
    return 0;}
