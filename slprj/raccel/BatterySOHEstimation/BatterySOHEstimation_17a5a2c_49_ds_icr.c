#include "ne_ds.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_sys_struct.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_icr.h"
#include "BatterySOHEstimation_17a5a2c_49_ds.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_externals.h"
#include "BatterySOHEstimation_17a5a2c_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T BatterySOHEstimation_17a5a2c_49_ds_icr(const NeDynamicSystem *LC, const NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
    (void)LC;
    out->mICR.mX[0UL] = t1->mX.mX[2UL];
    out->mICR.mX[2UL] = t1->mX.mX[10UL];
    out->mICR.mX[4UL] = t1->mX.mX[18UL];
    out->mICR.mX[6UL] = t1->mX.mX[26UL];
    out->mICR.mX[8UL] = t1->mX.mX[34UL];
    out->mICR.mX[10UL] = t1->mX.mX[42UL];
    out->mICR.mX[12UL] = t1->mX.mX[50UL];
    out->mICR.mX[14UL] = t1->mX.mX[58UL];
    out->mICR.mX[16UL] = t1->mX.mX[66UL];
    out->mICR.mX[18UL] = t1->mX.mX[74UL];
    out->mICR.mX[20UL] = t1->mX.mX[82UL];
    out->mICR.mX[22UL] = t1->mX.mX[90UL];
    out->mICR.mX[24UL] = t1->mX.mX[98UL];
    out->mICR.mX[26UL] = t1->mX.mX[106UL];
    out->mICR.mX[28UL] = t1->mX.mX[114UL];
    out->mICR.mX[30UL] = t1->mX.mX[122UL];
    out->mICR.mX[32UL] = t1->mX.mX[130UL];
    out->mICR.mX[34UL] = t1->mX.mX[138UL];
    out->mICR.mX[36UL] = t1->mX.mX[146UL];
    out->mICR.mX[38UL] = t1->mX.mX[154UL];
    out->mICR.mX[40UL] = t1->mX.mX[162UL];
    out->mICR.mX[42UL] = t1->mX.mX[170UL];
    out->mICR.mX[44UL] = t1->mX.mX[178UL];
    out->mICR.mX[46UL] = t1->mX.mX[186UL];
    out->mICR.mX[48UL] = t1->mX.mX[194UL];
    out->mICR.mX[50UL] = t1->mX.mX[202UL];
    out->mICR.mX[52UL] = t1->mX.mX[210UL];
    out->mICR.mX[54UL] = t1->mX.mX[218UL];
    out->mICR.mX[56UL] = t1->mX.mX[226UL];
    out->mICR.mX[58UL] = t1->mX.mX[234UL];
    out->mICR.mX[60UL] = t1->mX.mX[242UL];
    out->mICR.mX[62UL] = t1->mX.mX[250UL];
    out->mICR.mX[64UL] = t1->mX.mX[258UL];
    out->mICR.mX[66UL] = t1->mX.mX[266UL];
    out->mICR.mX[68UL] = t1->mX.mX[274UL];
    out->mICR.mX[70UL] = t1->mX.mX[282UL];
    out->mICR.mX[72UL] = t1->mX.mX[290UL];
    out->mICR.mX[74UL] = t1->mX.mX[298UL];
    out->mICR.mX[76UL] = t1->mX.mX[306UL];
    out->mICR.mX[78UL] = t1->mX.mX[314UL];
    out->mICR.mX[80UL] = t1->mX.mX[322UL];
    out->mICR.mX[82UL] = t1->mX.mX[330UL];
    out->mICR.mX[84UL] = t1->mX.mX[338UL];
    out->mICR.mX[86UL] = t1->mX.mX[346UL];
    out->mICR.mX[88UL] = t1->mX.mX[354UL];
    out->mICR.mX[90UL] = t1->mX.mX[362UL];
    out->mICR.mX[92UL] = t1->mX.mX[370UL];
    out->mICR.mX[94UL] = t1->mX.mX[378UL];
    out->mICR.mX[96UL] = t1->mX.mX[386UL];
    out->mICR.mX[98UL] = t1->mX.mX[394UL];
    out->mICR.mX[100UL] = t1->mX.mX[402UL];
    out->mICR.mX[102UL] = t1->mX.mX[410UL];
    out->mICR.mX[104UL] = t1->mX.mX[418UL];
    out->mICR.mX[106UL] = t1->mX.mX[426UL];
    out->mICR.mX[108UL] = t1->mX.mX[434UL];
    out->mICR.mX[110UL] = t1->mX.mX[442UL];
    out->mICR.mX[112UL] = t1->mX.mX[450UL];
    out->mICR.mX[114UL] = t1->mX.mX[458UL];
    out->mICR.mX[116UL] = t1->mX.mX[466UL];
    out->mICR.mX[118UL] = t1->mX.mX[474UL];
    out->mICR.mX[120UL] = t1->mX.mX[482UL];
    out->mICR.mX[122UL] = t1->mX.mX[490UL];
    out->mICR.mX[124UL] = t1->mX.mX[498UL];
    out->mICR.mX[126UL] = t1->mX.mX[506UL];
    out->mICR.mX[128UL] = t1->mX.mX[514UL];
    out->mICR.mX[130UL] = t1->mX.mX[522UL];
    out->mICR.mX[132UL] = t1->mX.mX[530UL];
    out->mICR.mX[134UL] = t1->mX.mX[538UL];
    out->mICR.mX[136UL] = t1->mX.mX[546UL];
    out->mICR.mX[138UL] = t1->mX.mX[554UL];
    out->mICR.mX[140UL] = t1->mX.mX[562UL];
    out->mICR.mX[142UL] = t1->mX.mX[570UL];
    out->mICR.mX[144UL] = t1->mX.mX[578UL];
    out->mICR.mX[146UL] = t1->mX.mX[586UL];
    out->mICR.mX[148UL] = t1->mX.mX[594UL];
    out->mICR.mX[150UL] = t1->mX.mX[602UL];
    out->mICR.mX[152UL] = t1->mX.mX[610UL];
    out->mICR.mX[154UL] = t1->mX.mX[618UL];
    out->mICR.mX[156UL] = t1->mX.mX[626UL];
    out->mICR.mX[158UL] = t1->mX.mX[634UL];
    out->mICR.mX[160UL] = t1->mX.mX[642UL];
    out->mICR.mX[162UL] = t1->mX.mX[650UL];
    out->mICR.mX[164UL] = t1->mX.mX[658UL];
    out->mICR.mX[166UL] = t1->mX.mX[666UL];
    out->mICR.mX[168UL] = t1->mX.mX[674UL];
    out->mICR.mX[170UL] = t1->mX.mX[682UL];
    out->mICR.mX[172UL] = t1->mX.mX[690UL];
    out->mICR.mX[174UL] = t1->mX.mX[698UL];
    out->mICR.mX[176UL] = t1->mX.mX[706UL];
    out->mICR.mX[178UL] = t1->mX.mX[714UL];
    out->mICR.mX[180UL] = t1->mX.mX[722UL];
    out->mICR.mX[182UL] = t1->mX.mX[730UL];
    out->mICR.mX[184UL] = t1->mX.mX[738UL];
    out->mICR.mX[186UL] = t1->mX.mX[746UL];
    out->mICR.mX[188UL] = t1->mX.mX[754UL];
    out->mICR.mX[190UL] = t1->mX.mX[762UL];
    out->mICR.mX[192UL] = t1->mX.mX[770UL];
    out->mICR.mX[194UL] = t1->mX.mX[778UL];
    out->mICR.mX[196UL] = t1->mX.mX[786UL];
    out->mICR.mX[198UL] = t1->mX.mX[794UL];
    out->mICR.mX[200UL] = t1->mX.mX[802UL];
    out->mICR.mX[202UL] = t1->mX.mX[810UL];
    out->mICR.mX[204UL] = t1->mX.mX[818UL];
    out->mICR.mX[206UL] = t1->mX.mX[826UL];
    out->mICR.mX[208UL] = t1->mX.mX[834UL];
    out->mICR.mX[210UL] = t1->mX.mX[842UL];
    out->mICR.mX[212UL] = t1->mX.mX[850UL];
    out->mICR.mX[214UL] = t1->mX.mX[858UL];
    out->mICR.mX[216UL] = t1->mX.mX[866UL];
    out->mICR.mX[218UL] = t1->mX.mX[874UL];
    out->mICR.mX[220UL] = t1->mX.mX[882UL];
    out->mICR.mX[222UL] = t1->mX.mX[890UL];
    out->mICR.mX[224UL] = t1->mX.mX[898UL];
    out->mICR.mX[226UL] = t1->mX.mX[906UL];
    out->mICR.mX[228UL] = t1->mX.mX[914UL];
    out->mICR.mX[230UL] = t1->mX.mX[922UL];
    out->mICR.mX[232UL] = t1->mX.mX[930UL];
    out->mICR.mX[234UL] = t1->mX.mX[938UL];
    out->mICR.mX[236UL] = t1->mX.mX[946UL];
    out->mICR.mX[238UL] = t1->mX.mX[954UL];
    out->mICR.mX[240UL] = t1->mX.mX[962UL];
    out->mICR.mX[242UL] = t1->mX.mX[970UL];
    out->mICR.mX[244UL] = t1->mX.mX[978UL];
    out->mICR.mX[246UL] = t1->mX.mX[986UL];
    out->mICR.mX[248UL] = t1->mX.mX[994UL];
    out->mICR.mX[250UL] = t1->mX.mX[1002UL];
    out->mICR.mX[252UL] = t1->mX.mX[1010UL];
    out->mICR.mX[254UL] = t1->mX.mX[1018UL];
    out->mICR.mX[256UL] = t1->mX.mX[1026UL];
    out->mICR.mX[258UL] = t1->mX.mX[1034UL];
    out->mICR.mX[260UL] = t1->mX.mX[1042UL];
    out->mICR.mX[262UL] = t1->mX.mX[1050UL];
    out->mICR.mX[264UL] = t1->mX.mX[1058UL];
    out->mICR.mX[266UL] = t1->mX.mX[1066UL];
    out->mICR.mX[268UL] = t1->mX.mX[1074UL];
    out->mICR.mX[270UL] = t1->mX.mX[1082UL];
    out->mICR.mX[272UL] = t1->mX.mX[1090UL];
    out->mICR.mX[274UL] = t1->mX.mX[1098UL];
    out->mICR.mX[1UL] = t1->mX.mX[0UL] - 298.15;
    out->mICR.mX[3UL] = t1->mX.mX[8UL] - 298.15;
    out->mICR.mX[5UL] = t1->mX.mX[16UL] - 298.15;
    out->mICR.mX[7UL] = t1->mX.mX[24UL] - 298.15;
    out->mICR.mX[9UL] = t1->mX.mX[32UL] - 298.15;
    out->mICR.mX[11UL] = t1->mX.mX[40UL] - 298.15;
    out->mICR.mX[13UL] = t1->mX.mX[48UL] - 298.15;
    out->mICR.mX[15UL] = t1->mX.mX[56UL] - 298.15;
    out->mICR.mX[17UL] = t1->mX.mX[64UL] - 298.15;
    out->mICR.mX[19UL] = t1->mX.mX[72UL] - 298.15;
    out->mICR.mX[21UL] = t1->mX.mX[80UL] - 298.15;
    out->mICR.mX[23UL] = t1->mX.mX[88UL] - 298.15;
    out->mICR.mX[25UL] = t1->mX.mX[96UL] - 298.15;
    out->mICR.mX[27UL] = t1->mX.mX[104UL] - 298.15;
    out->mICR.mX[29UL] = t1->mX.mX[112UL] - 298.15;
    out->mICR.mX[31UL] = t1->mX.mX[120UL] - 298.15;
    out->mICR.mX[33UL] = t1->mX.mX[128UL] - 298.15;
    out->mICR.mX[35UL] = t1->mX.mX[136UL] - 298.15;
    out->mICR.mX[37UL] = t1->mX.mX[144UL] - 298.15;
    out->mICR.mX[39UL] = t1->mX.mX[152UL] - 298.15;
    out->mICR.mX[41UL] = t1->mX.mX[160UL] - 298.15;
    out->mICR.mX[43UL] = t1->mX.mX[168UL] - 298.15;
    out->mICR.mX[45UL] = t1->mX.mX[176UL] - 298.15;
    out->mICR.mX[47UL] = t1->mX.mX[184UL] - 298.15;
    out->mICR.mX[49UL] = t1->mX.mX[192UL] - 298.15;
    out->mICR.mX[51UL] = t1->mX.mX[200UL] - 298.15;
    out->mICR.mX[53UL] = t1->mX.mX[208UL] - 298.15;
    out->mICR.mX[55UL] = t1->mX.mX[216UL] - 298.15;
    out->mICR.mX[57UL] = t1->mX.mX[224UL] - 298.15;
    out->mICR.mX[59UL] = t1->mX.mX[232UL] - 298.15;
    out->mICR.mX[61UL] = t1->mX.mX[240UL] - 298.15;
    out->mICR.mX[63UL] = t1->mX.mX[248UL] - 298.15;
    out->mICR.mX[65UL] = t1->mX.mX[256UL] - 298.15;
    out->mICR.mX[67UL] = t1->mX.mX[264UL] - 298.15;
    out->mICR.mX[69UL] = t1->mX.mX[272UL] - 298.15;
    out->mICR.mX[71UL] = t1->mX.mX[280UL] - 298.15;
    out->mICR.mX[73UL] = t1->mX.mX[288UL] - 298.15;
    out->mICR.mX[75UL] = t1->mX.mX[296UL] - 298.15;
    out->mICR.mX[77UL] = t1->mX.mX[304UL] - 298.15;
    out->mICR.mX[79UL] = t1->mX.mX[312UL] - 298.15;
    out->mICR.mX[81UL] = t1->mX.mX[320UL] - 298.15;
    out->mICR.mX[83UL] = t1->mX.mX[328UL] - 298.15;
    out->mICR.mX[85UL] = t1->mX.mX[336UL] - 298.15;
    out->mICR.mX[87UL] = t1->mX.mX[344UL] - 298.15;
    out->mICR.mX[89UL] = t1->mX.mX[352UL] - 298.15;
    out->mICR.mX[91UL] = t1->mX.mX[360UL] - 298.15;
    out->mICR.mX[93UL] = t1->mX.mX[368UL] - 298.15;
    out->mICR.mX[95UL] = t1->mX.mX[376UL] - 298.15;
    out->mICR.mX[97UL] = t1->mX.mX[384UL] - 298.15;
    out->mICR.mX[99UL] = t1->mX.mX[392UL] - 298.15;
    out->mICR.mX[101UL] = t1->mX.mX[400UL] - 298.15;
    out->mICR.mX[103UL] = t1->mX.mX[408UL] - 298.15;
    out->mICR.mX[105UL] = t1->mX.mX[416UL] - 298.15;
    out->mICR.mX[107UL] = t1->mX.mX[424UL] - 298.15;
    out->mICR.mX[109UL] = t1->mX.mX[432UL] - 298.15;
    out->mICR.mX[111UL] = t1->mX.mX[440UL] - 298.15;
    out->mICR.mX[113UL] = t1->mX.mX[448UL] - 298.15;
    out->mICR.mX[115UL] = t1->mX.mX[456UL] - 298.15;
    out->mICR.mX[117UL] = t1->mX.mX[464UL] - 298.15;
    out->mICR.mX[119UL] = t1->mX.mX[472UL] - 298.15;
    out->mICR.mX[121UL] = t1->mX.mX[480UL] - 298.15;
    out->mICR.mX[123UL] = t1->mX.mX[488UL] - 298.15;
    out->mICR.mX[125UL] = t1->mX.mX[496UL] - 298.15;
    out->mICR.mX[127UL] = t1->mX.mX[504UL] - 298.15;
    out->mICR.mX[129UL] = t1->mX.mX[512UL] - 298.15;
    out->mICR.mX[131UL] = t1->mX.mX[520UL] - 298.15;
    out->mICR.mX[133UL] = t1->mX.mX[528UL] - 298.15;
    out->mICR.mX[135UL] = t1->mX.mX[536UL] - 298.15;
    out->mICR.mX[137UL] = t1->mX.mX[544UL] - 298.15;
    out->mICR.mX[139UL] = t1->mX.mX[552UL] - 298.15;
    out->mICR.mX[141UL] = t1->mX.mX[560UL] - 298.15;
    out->mICR.mX[143UL] = t1->mX.mX[568UL] - 298.15;
    out->mICR.mX[145UL] = t1->mX.mX[576UL] - 298.15;
    out->mICR.mX[147UL] = t1->mX.mX[584UL] - 298.15;
    out->mICR.mX[149UL] = t1->mX.mX[592UL] - 298.15;
    out->mICR.mX[151UL] = t1->mX.mX[600UL] - 298.15;
    out->mICR.mX[153UL] = t1->mX.mX[608UL] - 298.15;
    out->mICR.mX[155UL] = t1->mX.mX[616UL] - 298.15;
    out->mICR.mX[157UL] = t1->mX.mX[624UL] - 298.15;
    out->mICR.mX[159UL] = t1->mX.mX[632UL] - 298.15;
    out->mICR.mX[161UL] = t1->mX.mX[640UL] - 298.15;
    out->mICR.mX[163UL] = t1->mX.mX[648UL] - 298.15;
    out->mICR.mX[165UL] = t1->mX.mX[656UL] - 298.15;
    out->mICR.mX[167UL] = t1->mX.mX[664UL] - 298.15;
    out->mICR.mX[169UL] = t1->mX.mX[672UL] - 298.15;
    out->mICR.mX[171UL] = t1->mX.mX[680UL] - 298.15;
    out->mICR.mX[173UL] = t1->mX.mX[688UL] - 298.15;
    out->mICR.mX[175UL] = t1->mX.mX[696UL] - 298.15;
    out->mICR.mX[177UL] = t1->mX.mX[704UL] - 298.15;
    out->mICR.mX[179UL] = t1->mX.mX[712UL] - 298.15;
    out->mICR.mX[181UL] = t1->mX.mX[720UL] - 298.15;
    out->mICR.mX[183UL] = t1->mX.mX[728UL] - 298.15;
    out->mICR.mX[185UL] = t1->mX.mX[736UL] - 298.15;
    out->mICR.mX[187UL] = t1->mX.mX[744UL] - 298.15;
    out->mICR.mX[189UL] = t1->mX.mX[752UL] - 298.15;
    out->mICR.mX[191UL] = t1->mX.mX[760UL] - 298.15;
    out->mICR.mX[193UL] = t1->mX.mX[768UL] - 298.15;
    out->mICR.mX[195UL] = t1->mX.mX[776UL] - 298.15;
    out->mICR.mX[197UL] = t1->mX.mX[784UL] - 298.15;
    out->mICR.mX[199UL] = t1->mX.mX[792UL] - 298.15;
    out->mICR.mX[201UL] = t1->mX.mX[800UL] - 298.15;
    out->mICR.mX[203UL] = t1->mX.mX[808UL] - 298.15;
    out->mICR.mX[205UL] = t1->mX.mX[816UL] - 298.15;
    out->mICR.mX[207UL] = t1->mX.mX[824UL] - 298.15;
    out->mICR.mX[209UL] = t1->mX.mX[832UL] - 298.15;
    out->mICR.mX[211UL] = t1->mX.mX[840UL] - 298.15;
    out->mICR.mX[213UL] = t1->mX.mX[848UL] - 298.15;
    out->mICR.mX[215UL] = t1->mX.mX[856UL] - 298.15;
    out->mICR.mX[217UL] = t1->mX.mX[864UL] - 298.15;
    out->mICR.mX[219UL] = t1->mX.mX[872UL] - 298.15;
    out->mICR.mX[221UL] = t1->mX.mX[880UL] - 298.15;
    out->mICR.mX[223UL] = t1->mX.mX[888UL] - 298.15;
    out->mICR.mX[225UL] = t1->mX.mX[896UL] - 298.15;
    out->mICR.mX[227UL] = t1->mX.mX[904UL] - 298.15;
    out->mICR.mX[229UL] = t1->mX.mX[912UL] - 298.15;
    out->mICR.mX[231UL] = t1->mX.mX[920UL] - 298.15;
    out->mICR.mX[233UL] = t1->mX.mX[928UL] - 298.15;
    out->mICR.mX[235UL] = t1->mX.mX[936UL] - 298.15;
    out->mICR.mX[237UL] = t1->mX.mX[944UL] - 298.15;
    out->mICR.mX[239UL] = t1->mX.mX[952UL] - 298.15;
    out->mICR.mX[241UL] = t1->mX.mX[960UL] - 298.15;
    out->mICR.mX[243UL] = t1->mX.mX[968UL] - 298.15;
    out->mICR.mX[245UL] = t1->mX.mX[976UL] - 298.15;
    out->mICR.mX[247UL] = t1->mX.mX[984UL] - 298.15;
    out->mICR.mX[249UL] = t1->mX.mX[992UL] - 298.15;
    out->mICR.mX[251UL] = t1->mX.mX[1000UL] - 298.15;
    out->mICR.mX[253UL] = t1->mX.mX[1008UL] - 298.15;
    out->mICR.mX[255UL] = t1->mX.mX[1016UL] - 298.15;
    out->mICR.mX[257UL] = t1->mX.mX[1024UL] - 298.15;
    out->mICR.mX[259UL] = t1->mX.mX[1032UL] - 298.15;
    out->mICR.mX[261UL] = t1->mX.mX[1040UL] - 298.15;
    out->mICR.mX[263UL] = t1->mX.mX[1048UL] - 298.15;
    out->mICR.mX[265UL] = t1->mX.mX[1056UL] - 298.15;
    out->mICR.mX[267UL] = t1->mX.mX[1064UL] - 298.15;
    out->mICR.mX[269UL] = t1->mX.mX[1072UL] - 298.15;
    out->mICR.mX[271UL] = t1->mX.mX[1080UL] - 298.15;
    out->mICR.mX[273UL] = t1->mX.mX[1088UL] - 298.15;
    out->mICR.mX[275UL] = t1->mX.mX[1096UL] - 298.15;
(void)LC;
    (void)out;
    return 0;}