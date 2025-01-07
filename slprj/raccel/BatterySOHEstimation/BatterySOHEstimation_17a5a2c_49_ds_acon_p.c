#include "ne_ds.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_sys_struct.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_acon_p.h"
#include "BatterySOHEstimation_17a5a2c_49_ds.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_externals.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T BatterySOHEstimation_17a5a2c_49_ds_acon_p(const NeDynamicSystem *LC, const NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
    static int32_T _cg_const_1[1658] = { 0, 2, 2, 2, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, 4, 4, 6, 6, 6, 6, 6, 6, 6, 6, 8, 8, 8, 8, 8, 8, 8, 8, 10, 10, 10, 10, 10, 10, 10, 10, 12, 12, 12, 12, 12, 12, 12, 12, 14, 14, 14, 14, 14, 14, 14, 14, 16, 16, 16, 16, 16, 16, 16, 16, 18, 18, 18, 18, 18, 18, 18, 18, 20, 20, 20, 20, 20, 20, 20, 20, 22, 22, 22, 22, 22, 22, 22, 22, 24, 24, 24, 24, 24, 24, 24, 24, 26, 26, 26, 26, 26, 26, 26, 26, 28, 28, 28, 28, 28, 28, 28, 28, 30, 30, 30, 30, 30, 30, 30, 30, 32, 32, 32, 32, 32, 32, 32, 32, 34, 34, 34, 34, 34, 34, 34, 34, 36, 36, 36, 36, 36, 36, 36, 36, 38, 38, 38, 38, 38, 38, 38, 38, 40, 40, 40, 40, 40, 40, 40, 40, 42, 42, 42, 42, 42, 42, 42, 42, 44, 44, 44, 44, 44, 44, 44, 44, 46, 46, 46, 46, 46, 46, 46, 46, 48, 48, 48, 48, 48, 48, 48, 48, 50, 50, 50, 50, 50, 50, 50, 50, 52, 52, 52, 52, 52, 52, 52, 52, 54, 54, 54, 54, 54, 54, 54, 54, 56, 56, 56, 56, 56, 56, 56, 56, 58, 58, 58, 58, 58, 58, 58, 58, 60, 60, 60, 60, 60, 60, 60, 60, 62, 62, 62, 62, 62, 62, 62, 62, 64, 64, 64, 64, 64, 64, 64, 64, 66, 66, 66, 66, 66, 66, 66, 66, 68, 68, 68, 68, 68, 68, 68, 68, 70, 70, 70, 70, 70, 70, 70, 70, 72, 72, 72, 72, 72, 72, 72, 72, 74, 74, 74, 74, 74, 74, 74, 74, 76, 76, 76, 76, 76, 76, 76, 76, 78, 78, 78, 78, 78, 78, 78, 78, 80, 80, 80, 80, 80, 80, 80, 80, 82, 82, 82, 82, 82, 82, 82, 82, 84, 84, 84, 84, 84, 84, 84, 84, 86, 86, 86, 86, 86, 86, 86, 86, 88, 88, 88, 88, 88, 88, 88, 88, 90, 90, 90, 90, 90, 90, 90, 90, 92, 92, 92, 92, 92, 92, 92, 92, 94, 94, 94, 94, 94, 94, 94, 94, 96, 96, 96, 96, 96, 96, 96, 96, 98, 98, 98, 98, 98, 98, 98, 98, 100, 100, 100, 100, 100, 100, 100, 100, 102, 102, 102, 102, 102, 102, 102, 102, 104, 104, 104, 104, 104, 104, 104, 104, 106, 106, 106, 106, 106, 106, 106, 106, 108, 108, 108, 108, 108, 108, 108, 108, 110, 110, 110, 110, 110, 110, 110, 110, 112, 112, 112, 112, 112, 112, 112, 112, 114, 114, 114, 114, 114, 114, 114, 114, 116, 116, 116, 116, 116, 116, 116, 116, 118, 118, 118, 118, 118, 118, 118, 118, 120, 120, 120, 120, 120, 120, 120, 120, 122, 122, 122, 122, 122, 122, 122, 122, 124, 124, 124, 124, 124, 124, 124, 124, 126, 126, 126, 126, 126, 126, 126, 126, 128, 128, 128, 128, 128, 128, 128, 128, 130, 130, 130, 130, 130, 130, 130, 130, 132, 132, 132, 132, 132, 132, 132, 132, 134, 134, 134, 134, 134, 134, 134, 134, 136, 136, 136, 136, 136, 136, 136, 136, 138, 138, 138, 138, 138, 138, 138, 138, 140, 140, 140, 140, 140, 140, 140, 140, 142, 142, 142, 142, 142, 142, 142, 142, 144, 144, 144, 144, 144, 144, 144, 144, 146, 146, 146, 146, 146, 146, 146, 146, 148, 148, 148, 148, 148, 148, 148, 148, 150, 150, 150, 150, 150, 150, 150, 150, 152, 152, 152, 152, 152, 152, 152, 152, 154, 154, 154, 154, 154, 154, 154, 154, 156, 156, 156, 156, 156, 156, 156, 156, 158, 158, 158, 158, 158, 158, 158, 158, 160, 160, 160, 160, 160, 160, 160, 160, 162, 162, 162, 162, 162, 162, 162, 162, 164, 164, 164, 164, 164, 164, 164, 164, 166, 166, 166, 166, 166, 166, 166, 166, 168, 168, 168, 168, 168, 168, 168, 168, 170, 170, 170, 170, 170, 170, 170, 170, 172, 172, 172, 172, 172, 172, 172, 172, 174, 174, 174, 174, 174, 174, 174, 174, 176, 176, 176, 176, 176, 176, 176, 176, 178, 178, 178, 178, 178, 178, 178, 178, 180, 180, 180, 180, 180, 180, 180, 180, 182, 182, 182, 182, 182, 182, 182, 182, 184, 184, 184, 184, 184, 184, 184, 184, 186, 186, 186, 186, 186, 186, 186, 186, 188, 188, 188, 188, 188, 188, 188, 188, 190, 190, 190, 190, 190, 190, 190, 190, 192, 192, 192, 192, 192, 192, 192, 192, 194, 194, 194, 194, 194, 194, 194, 194, 196, 196, 196, 196, 196, 196, 196, 196, 198, 198, 198, 198, 198, 198, 198, 198, 200, 200, 200, 200, 200, 200, 200, 200, 202, 202, 202, 202, 202, 202, 202, 202, 204, 204, 204, 204, 204, 204, 204, 204, 206, 206, 206, 206, 206, 206, 206, 206, 208, 208, 208, 208, 208, 208, 208, 208, 210, 210, 210, 210, 210, 210, 210, 210, 212, 212, 212, 212, 212, 212, 212, 212, 214, 214, 214, 214, 214, 214, 214, 214, 216, 216, 216, 216, 216, 216, 216, 216, 218, 218, 218, 218, 218, 218, 218, 218, 220, 220, 220, 220, 220, 220, 220, 220, 222, 222, 222, 222, 222, 222, 222, 222, 224, 224, 224, 224, 224, 224, 224, 224, 226, 226, 226, 226, 226, 226, 226, 226, 228, 228, 228, 228, 228, 228, 228, 228, 230, 230, 230, 230, 230, 230, 230, 230, 232, 232, 232, 232, 232, 232, 232, 232, 234, 234, 234, 234, 234, 234, 234, 234, 236, 236, 236, 236, 236, 236, 236, 236, 238, 238, 238, 238, 238, 238, 238, 238, 240, 240, 240, 240, 240, 240, 240, 240, 242, 242, 242, 242, 242, 242, 242, 242, 244, 244, 244, 244, 244, 244, 244, 244, 246, 246, 246, 246, 246, 246, 246, 246, 248, 248, 248, 248, 248, 248, 248, 248, 250, 250, 250, 250, 250, 250, 250, 250, 252, 252, 252, 252, 252, 252, 252, 252, 254, 254, 254, 254, 254, 254, 254, 254, 256, 256, 256, 256, 256, 256, 256, 256, 258, 258, 258, 258, 258, 258, 258, 258, 260, 260, 260, 260, 260, 260, 260, 260, 262, 262, 262, 262, 262, 262, 262, 262, 264, 264, 264, 264, 264, 264, 264, 264, 266, 266, 266, 266, 266, 266, 266, 266, 268, 268, 268, 268, 268, 268, 268, 268, 270, 270, 270, 270, 270, 270, 270, 270, 272, 272, 272, 272, 272, 272, 272, 272, 274, 274, 274, 274, 274, 274, 274, 274, 276, 276, 276, 276, 276, 276, 276, 276, 415, 416, 417, 418, 420, 421, 422, 423, 425, 426, 427, 428, 430, 431, 432, 433, 435, 436, 437, 438, 440, 441, 442, 443, 445, 446, 447, 448, 450, 451, 452, 453, 455, 456, 457, 458, 460, 461, 462, 463, 465, 466, 467, 468, 470, 471, 472, 473, 475, 476, 477, 478, 480, 481, 482, 483, 485, 486, 487, 488, 490, 491, 492, 493, 495, 496, 497, 498, 500, 501, 502, 503, 505, 506, 507, 508, 510, 511, 512, 513, 515, 516, 517, 518, 520, 521, 522, 523, 525, 526, 527, 528, 530, 531, 532, 533, 535, 536, 537, 538, 540, 541, 542, 543, 545, 546, 547, 548, 550, 551, 552, 553, 555, 556, 557, 558, 560, 561, 562, 563, 565, 566, 567, 568, 570, 571, 572, 573, 575, 576, 577, 578, 580, 581, 582, 583, 585, 586, 587, 588, 590, 591, 592, 593, 595, 596, 597, 598, 600, 601, 602, 603, 605, 606, 607, 608, 610, 611, 612, 613, 615, 616, 617, 618, 620, 621, 622, 623, 625, 626, 627, 628, 630, 631, 632, 633, 635, 636, 637, 638, 640, 641, 642, 643, 645, 646, 647, 648, 650, 651, 652, 653, 655, 656, 657, 658, 660, 661, 662, 663, 665, 666, 667, 668, 670, 671, 672, 673, 675, 676, 677, 678, 680, 681, 682, 683, 685, 686, 687, 688, 690, 691, 692, 693, 695, 696, 697, 698, 700, 701, 702, 703, 705, 706, 707, 708, 710, 711, 712, 713, 715, 716, 717, 718, 720, 721, 722, 723, 725, 726, 727, 728, 730, 731, 732, 733, 735, 736, 737, 738, 740, 741, 742, 743, 745, 746, 747, 748, 750, 751, 752, 753, 755, 756, 757, 758, 760, 761, 762, 763, 765, 766, 767, 768, 770, 771, 772, 773, 775, 776, 777, 778, 780, 781, 782, 783, 785, 786, 787, 788, 790, 791, 792, 793, 795, 796, 797, 798, 800, 801, 802, 803, 805, 806, 807, 808, 810, 811, 812, 813, 815, 816, 817, 818, 820, 821, 822, 823, 825, 826, 827, 828, 830, 831, 832, 833, 835, 836, 837, 838, 840, 841, 842, 843, 845, 846, 847, 848, 850, 851, 852, 853, 855, 856, 857, 858, 860, 861, 862, 863, 865, 866, 867, 868, 870, 871, 872, 873, 875, 876, 877, 878, 880, 881, 882, 883, 885, 886, 887, 888, 890, 891, 892, 893, 895, 896, 897, 898, 900, 901, 902, 903, 905, 906, 907, 908, 910, 911, 912, 913, 915, 916, 917, 918, 920, 921, 922, 923, 925, 926, 927, 928, 930, 931, 932, 933, 935, 936, 937, 938, 940, 941, 942, 943, 945, 946, 947, 948, 950, 951, 952, 953, 955, 956, 957, 958, 960, 961, 962, 963, 965, 966, 967, 968, 970, 971, 972, 973, 975, 976, 977, 978, 980, 981, 982, 983, 985, 986, 987, 988, 990, 991, 992, 993, 995, 996, 997, 998, 1000, 1001, 1002, 1003, 1005, 1006, 1007, 1008, 1010, 1011, 1012, 1013, 1015, 1016, 1017, 1018, 1020, 1021, 1022, 1023, 1025, 1026, 1027, 1028, 1030, 1031, 1032, 1033, 1035, 1036, 1037, 1038, 1040, 1041, 1042, 1043, 1045, 1046, 1047, 1048, 1050, 1051, 1052, 1053, 1055, 1056, 1057, 1058, 1060, 1061, 1062, 1063, 1065, 1066, 1067, 1068, 1070, 1071, 1072, 1073, 1075, 1076, 1077, 1078, 1080, 1081, 1082, 1083, 1085, 1086, 1087, 1088, 1090, 1091, 1092, 1093, 1095, 1096, 1097, 1098, 1100, 1101, 1102, 1103, 1105 };
    static int32_T _cg_const_2[1105] = { 7, 1656, 15, 1656, 23, 1656, 31, 1656, 39, 1656, 47, 1656, 55, 1656, 63, 1656, 71, 1656, 79, 1656, 87, 1656, 95, 1656, 103, 1656, 111, 1656, 119, 1656, 127, 1656, 135, 1656, 143, 1656, 151, 1656, 159, 1656, 167, 1656, 175, 1656, 183, 1656, 191, 1656, 199, 1656, 207, 1656, 215, 1656, 223, 1656, 231, 1656, 239, 1656, 247, 1656, 255, 1656, 263, 1656, 271, 1656, 279, 1656, 287, 1656, 295, 1656, 303, 1656, 311, 1656, 319, 1656, 327, 1656, 335, 1656, 343, 1656, 351, 1656, 359, 1656, 367, 1656, 375, 1656, 383, 1656, 391, 1656, 399, 1656, 407, 1656, 415, 1656, 423, 1656, 431, 1656, 439, 1656, 447, 1656, 455, 1656, 463, 1656, 471, 1656, 479, 1656, 487, 1656, 495, 1656, 503, 1656, 511, 1656, 519, 1656, 527, 1656, 535, 1656, 543, 1656, 551, 1656, 559, 1656, 567, 1656, 575, 1656, 583, 1656, 591, 1656, 599, 1656, 607, 1656, 615, 1656, 623, 1656, 631, 1656, 639, 1656, 647, 1656, 655, 1656, 663, 1656, 671, 1656, 679, 1656, 687, 1656, 695, 1656, 703, 1656, 711, 1656, 719, 1656, 727, 1656, 735, 1656, 743, 1656, 751, 1656, 759, 1656, 767, 1656, 775, 1656, 783, 1656, 791, 1656, 799, 1656, 807, 1656, 815, 1656, 823, 1656, 831, 1656, 839, 1656, 847, 1656, 855, 1656, 863, 1656, 871, 1656, 879, 1656, 887, 1656, 895, 1656, 903, 1656, 911, 1656, 919, 1656, 927, 1656, 935, 1656, 943, 1656, 951, 1656, 959, 1656, 967, 1656, 975, 1656, 983, 1656, 991, 1656, 999, 1656, 1007, 1656, 1015, 1656, 1023, 1656, 1031, 1656, 1039, 1656, 1047, 1656, 1055, 1656, 1063, 1656, 1071, 1656, 1079, 1656, 1087, 1656, 1095, 1656, 1103, 1656, 7, 15, 23, 31, 39, 47, 55, 63, 71, 79, 87, 95, 103, 111, 119, 127, 135, 143, 151, 159, 167, 175, 183, 191, 199, 207, 215, 223, 231, 239, 247, 255, 263, 271, 279, 287, 295, 303, 311, 319, 327, 335, 343, 351, 359, 367, 375, 383, 391, 399, 407, 415, 423, 431, 439, 447, 455, 463, 471, 479, 487, 495, 503, 511, 519, 527, 535, 543, 551, 559, 567, 575, 583, 591, 599, 607, 615, 623, 631, 639, 647, 655, 663, 671, 679, 687, 695, 703, 711, 719, 727, 735, 743, 751, 759, 767, 775, 783, 791, 799, 807, 815, 823, 831, 839, 847, 855, 863, 871, 879, 887, 895, 903, 911, 919, 927, 935, 943, 951, 959, 967, 975, 983, 991, 999, 1007, 1015, 1023, 1031, 1039, 1047, 1055, 1063, 1071, 1079, 1087, 1095, 1103, 1656, 1106, 1107, 1104, 7, 1105, 1110, 1111, 1108, 15, 1109, 1114, 1115, 1112, 23, 1113, 1118, 1119, 1116, 31, 1117, 1122, 1123, 1120, 39, 1121, 1126, 1127, 1124, 47, 1125, 1130, 1131, 1128, 55, 1129, 1134, 1135, 1132, 63, 1133, 1138, 1139, 1136, 71, 1137, 1142, 1143, 1140, 79, 1141, 1146, 1147, 1144, 87, 1145, 1150, 1151, 1148, 95, 1149, 1154, 1155, 1152, 103, 1153, 1158, 1159, 1156, 111, 1157, 1162, 1163, 1160, 119, 1161, 1166, 1167, 1164, 127, 1165, 1170, 1171, 1168, 135, 1169, 1174, 1175, 1172, 143, 1173, 1178, 1179, 1176, 151, 1177, 1182, 1183, 1180, 159, 1181, 1186, 1187, 1184, 167, 1185, 1190, 1191, 1188, 175, 1189, 1194, 1195, 1192, 183, 1193, 1198, 1199, 1196, 191, 1197, 1202, 1203, 1200, 199, 1201, 1206, 1207, 1204, 207, 1205, 1210, 1211, 1208, 215, 1209, 1214, 1215, 1212, 223, 1213, 1218, 1219, 1216, 231, 1217, 1222, 1223, 1220, 239, 1221, 1226, 1227, 1224, 247, 1225, 1230, 1231, 1228, 255, 1229, 1234, 1235, 1232, 263, 1233, 1238, 1239, 1236, 271, 1237, 1242, 1243, 1240, 279, 1241, 1246, 1247, 1244, 287, 1245, 1250, 1251, 1248, 295, 1249, 1254, 1255, 1252, 303, 1253, 1258, 1259, 1256, 311, 1257, 1262, 1263, 1260, 319, 1261, 1266, 1267, 1264, 327, 1265, 1270, 1271, 1268, 335, 1269, 1274, 1275, 1272, 343, 1273, 1278, 1279, 1276, 351, 1277, 1282, 1283, 1280, 359, 1281, 1286, 1287, 1284, 367, 1285, 1290, 1291, 1288, 375, 1289, 1294, 1295, 1292, 383, 1293, 1298, 1299, 1296, 391, 1297, 1302, 1303, 1300, 399, 1301, 1306, 1307, 1304, 407, 1305, 1310, 1311, 1308, 415, 1309, 1314, 1315, 1312, 423, 1313, 1318, 1319, 1316, 431, 1317, 1322, 1323, 1320, 439, 1321, 1326, 1327, 1324, 447, 1325, 1330, 1331, 1328, 455, 1329, 1334, 1335, 1332, 463, 1333, 1338, 1339, 1336, 471, 1337, 1342, 1343, 1340, 479, 1341, 1346, 1347, 1344, 487, 1345, 1350, 1351, 1348, 495, 1349, 1354, 1355, 1352, 503, 1353, 1358, 1359, 1356, 511, 1357, 1362, 1363, 1360, 519, 1361, 1366, 1367, 1364, 527, 1365, 1370, 1371, 1368, 535, 1369, 1374, 1375, 1372, 543, 1373, 1378, 1379, 1376, 551, 1377, 1382, 1383, 1380, 559, 1381, 1386, 1387, 1384, 567, 1385, 1390, 1391, 1388, 575, 1389, 1394, 1395, 1392, 583, 1393, 1398, 1399, 1396, 591, 1397, 1402, 1403, 1400, 599, 1401, 1406, 1407, 1404, 607, 1405, 1410, 1411, 1408, 615, 1409, 1414, 1415, 1412, 623, 1413, 1418, 1419, 1416, 631, 1417, 1422, 1423, 1420, 639, 1421, 1426, 1427, 1424, 647, 1425, 1430, 1431, 1428, 655, 1429, 1434, 1435, 1432, 663, 1433, 1438, 1439, 1436, 671, 1437, 1442, 1443, 1440, 679, 1441, 1446, 1447, 1444, 687, 1445, 1450, 1451, 1448, 695, 1449, 1454, 1455, 1452, 703, 1453, 1458, 1459, 1456, 711, 1457, 1462, 1463, 1460, 719, 1461, 1466, 1467, 1464, 727, 1465, 1470, 1471, 1468, 735, 1469, 1474, 1475, 1472, 743, 1473, 1478, 1479, 1476, 751, 1477, 1482, 1483, 1480, 759, 1481, 1486, 1487, 1484, 767, 1485, 1490, 1491, 1488, 775, 1489, 1494, 1495, 1492, 783, 1493, 1498, 1499, 1496, 791, 1497, 1502, 1503, 1500, 799, 1501, 1506, 1507, 1504, 807, 1505, 1510, 1511, 1508, 815, 1509, 1514, 1515, 1512, 823, 1513, 1518, 1519, 1516, 831, 1517, 1522, 1523, 1520, 839, 1521, 1526, 1527, 1524, 847, 1525, 1530, 1531, 1528, 855, 1529, 1534, 1535, 1532, 863, 1533, 1538, 1539, 1536, 871, 1537, 1542, 1543, 1540, 879, 1541, 1546, 1547, 1544, 887, 1545, 1550, 1551, 1548, 895, 1549, 1554, 1555, 1552, 903, 1553, 1558, 1559, 1556, 911, 1557, 1562, 1563, 1560, 919, 1561, 1566, 1567, 1564, 927, 1565, 1570, 1571, 1568, 935, 1569, 1574, 1575, 1572, 943, 1573, 1578, 1579, 1576, 951, 1577, 1582, 1583, 1580, 959, 1581, 1586, 1587, 1584, 967, 1585, 1590, 1591, 1588, 975, 1589, 1594, 1595, 1592, 983, 1593, 1598, 1599, 1596, 991, 1597, 1602, 1603, 1600, 999, 1601, 1606, 1607, 1604, 1007, 1605, 1610, 1611, 1608, 1015, 1609, 1614, 1615, 1612, 1023, 1613, 1618, 1619, 1616, 1031, 1617, 1622, 1623, 1620, 1039, 1621, 1626, 1627, 1624, 1047, 1625, 1630, 1631, 1628, 1055, 1629, 1634, 1635, 1632, 1063, 1633, 1638, 1639, 1636, 1071, 1637, 1642, 1643, 1640, 1079, 1641, 1646, 1647, 1644, 1087, 1645, 1650, 1651, 1648, 1095, 1649, 1654, 1655, 1652, 1103, 1653 };
    int32_T i;
    (void)t1;
    (void)LC;
    out->mACON_P.mNumCol = 1657UL;
    out->mACON_P.mNumRow = 1657UL;
    for (i = 0; i < 1658; i++) {
        out->mACON_P.mJc[i] = _cg_const_1[i];
    }
    for (i = 0; i < 1105; i++) {
        out->mACON_P.mIr[i] = _cg_const_2[i];
    }
(void)LC;
    (void)out;
    return 0;}
