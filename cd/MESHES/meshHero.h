/* Model Name: Mesh_Hero_V4 */
/* Total Objects : 14 */
/*
    -Camera
    -HEAD
    -L_CALF
    -L_FARM
    -L_THIGH
    -L_UARM
    -Light
    -LOWER
    -R_CALF
    -R_FARM
    -R_THIGH
    -R_UARM
    -SHOULDER
    -TORSO
*/

#ifndef __3D_MESH_HERO_V4_H__
#define __3D_MESH_HERO_V4_H__

// HEAD
static POINT point_HEAD[65] = {
    {toFIXED(-0.000001), toFIXED(-0.840165), toFIXED(2.771977)},
    {toFIXED(-0.000001), toFIXED(-1.756475), toFIXED(2.180417)},
    {toFIXED(-0.000001), toFIXED(-0.732420), toFIXED(-1.434470)},
    {toFIXED(0.000649), toFIXED(-0.416531), toFIXED(-1.434060)},
    {toFIXED(-0.000001), toFIXED(0.616774), toFIXED(-1.649449)},
    {toFIXED(-0.000001), toFIXED(0.755969), toFIXED(-1.122140)},
    {toFIXED(-0.000184), toFIXED(0.229696), toFIXED(-1.425228)},
    {toFIXED(-0.000001), toFIXED(-0.977876), toFIXED(-1.374916)},
    {toFIXED(-0.000001), toFIXED(-2.065828), toFIXED(1.064038)},
    {toFIXED(-0.000001), toFIXED(-2.115232), toFIXED(-0.034266)},
    {toFIXED(-0.000001), toFIXED(-1.556879), toFIXED(-1.109505)},
    {toFIXED(-0.915328), toFIXED(1.162985), toFIXED(1.143070)},
    {toFIXED(-0.782243), toFIXED(1.312804), toFIXED(0.663187)},
    {toFIXED(-0.617451), toFIXED(1.295367), toFIXED(-1.047957)},
    {toFIXED(-1.155118), toFIXED(0.564609), toFIXED(0.512793)},
    {toFIXED(-0.751967), toFIXED(-0.845439), toFIXED(2.620403)},
    {toFIXED(-0.776738), toFIXED(-1.710779), toFIXED(2.084330)},
    {toFIXED(-0.662038), toFIXED(-0.864222), toFIXED(-1.381944)},
    {toFIXED(-0.223394), toFIXED(0.605439), toFIXED(-1.636650)},
    {toFIXED(-0.865141), toFIXED(0.702792), toFIXED(-1.145450)},
    {toFIXED(-1.117305), toFIXED(0.630838), toFIXED(-0.327077)},
    {toFIXED(-1.286741), toFIXED(-0.113911), toFIXED(-0.064516)},
    {toFIXED(-0.280000), toFIXED(0.215125), toFIXED(-1.396317)},
    {toFIXED(-0.903719), toFIXED(-0.457801), toFIXED(-1.187804)},
    {toFIXED(-0.614787), toFIXED(1.500403), toFIXED(-0.535575)},
    {toFIXED(-1.195287), toFIXED(-0.672334), toFIXED(-0.524432)},
    {toFIXED(-0.714467), toFIXED(-1.174594), toFIXED(-1.352410)},
    {toFIXED(-0.793628), toFIXED(-2.024571), toFIXED(0.899398)},
    {toFIXED(-1.199023), toFIXED(-1.479591), toFIXED(1.832957)},
    {toFIXED(-1.265622), toFIXED(-1.647611), toFIXED(0.392887)},
    {toFIXED(-0.715792), toFIXED(-2.028641), toFIXED(-0.185810)},
    {toFIXED(-0.854826), toFIXED(-1.562271), toFIXED(-0.925471)},
    {toFIXED(-0.000001), toFIXED(3.180703), toFIXED(2.801751)},
    {toFIXED(-0.751967), toFIXED(2.890151), toFIXED(2.649622)},
    {toFIXED(-1.380349), toFIXED(-0.600370), toFIXED(1.834667)},
    {toFIXED(-1.446947), toFIXED(-0.768389), toFIXED(0.394597)},
    {toFIXED(-1.723544), toFIXED(1.631777), toFIXED(1.798874)},
    {toFIXED(1.040797), toFIXED(0.900238), toFIXED(1.782799)},
    {toFIXED(0.782241), toFIXED(1.312804), toFIXED(0.663187)},
    {toFIXED(0.617449), toFIXED(1.295367), toFIXED(-1.047957)},
    {toFIXED(1.155116), toFIXED(0.623967), toFIXED(0.281714)},
    {toFIXED(0.751965), toFIXED(-0.845439), toFIXED(2.620403)},
    {toFIXED(0.776736), toFIXED(-1.710779), toFIXED(2.084330)},
    {toFIXED(0.662036), toFIXED(-0.864222), toFIXED(-1.381944)},
    {toFIXED(0.223394), toFIXED(0.605439), toFIXED(-1.636650)},
    {toFIXED(0.865139), toFIXED(0.702792), toFIXED(-1.145450)},
    {toFIXED(1.117303), toFIXED(0.630838), toFIXED(-0.327077)},
    {toFIXED(1.286739), toFIXED(-0.028575), toFIXED(-0.074256)},
    {toFIXED(0.279531), toFIXED(0.215348), toFIXED(-1.394525)},
    {toFIXED(0.903717), toFIXED(-0.457801), toFIXED(-1.187804)},
    {toFIXED(0.614785), toFIXED(1.500403), toFIXED(-0.535575)},
    {toFIXED(0.793626), toFIXED(-2.024571), toFIXED(0.899398)},
    {toFIXED(1.199021), toFIXED(-1.479591), toFIXED(1.832957)},
    {toFIXED(1.265619), toFIXED(-1.647805), toFIXED(0.514869)},
    {toFIXED(0.715790), toFIXED(-2.028641), toFIXED(-0.185810)},
    {toFIXED(0.854824), toFIXED(-1.562271), toFIXED(-0.925471)},
    {toFIXED(0.751965), toFIXED(2.890151), toFIXED(2.649622)},
    {toFIXED(1.657672), toFIXED(-0.600370), toFIXED(1.834667)},
    {toFIXED(1.724271), toFIXED(-0.768584), toFIXED(0.516578)},
    {toFIXED(1.723543), toFIXED(1.631777), toFIXED(1.798874)},
    {toFIXED(1.790141), toFIXED(1.669847), toFIXED(0.478382)},
    {toFIXED(1.379345), toFIXED(2.039087), toFIXED(-0.724273)},
    {toFIXED(-1.528486), toFIXED(1.057525), toFIXED(0.933456)},
    {toFIXED(-0.287222), toFIXED(0.618320), toFIXED(-1.253870)},
    {toFIXED(0.287222), toFIXED(0.618320), toFIXED(-1.253870)},
};

static POLYGON polygon_HEAD[61] = {
    {{0.854892, 0.109246, 0.507174}, {26, 17, 23, 25}},
    {{0.210989, -0.868854, 0.447857}, {18, 5, 19, 63}},
    {{0.944950, -0.176287, 0.275667}, {13, 20, 23, 19}},
    {{-0.204337, -0.190088, 0.960267}, {49, 3, 2, 43}},
    {{-0.689123, 0.707620, 0.156154}, {51, 53, 55, 54}},
    {{0.891619, 0.148320, 0.427805}, {25, 31, 26, 25}},
    {{0.887519, -0.455833, 0.067274}, {12, 11, 14, 24}},
    {{0.702115, 0.039595, -0.710962}, {34, 36, 33, 15}},
    {{-0.210988, -0.868855, 0.447856}, {45, 5, 44, 64}},
    {{-0.871116, -0.489951, 0.033236}, {40, 37, 38, 50}},
    {{0.670944, 0.723847, 0.160874}, {31, 29, 27, 30}},
    {{-0.030147, 0.235680, 0.971363}, {7, 43, 2, 7}},
    {{-0.666220, 0.348820, -0.659147}, {52, 41, 57, 52}},
    {{-0.655129, 0.006399, -0.755490}, {56, 59, 57, 41}},
    {{-0.779972, 0.177096, 0.600234}, {49, 43, 55, 49}},
    {{0.980983, 0.152748, 0.119749}, {34, 62, 36, 34}},
    {{0.964487, -0.054842, 0.258376}, {21, 35, 25, 21}},
    {{-0.871771, -0.477024, 0.111644}, {40, 50, 39, 46}},
    {{0.044943, 0.510029, 0.858982}, {4, 18, 22, 6}},
    {{0.977048, 0.201634, -0.068711}, {29, 35, 34, 28}},
    {{0.998020, 0.027939, 0.056347}, {35, 21, 62, 34}},
    {{0.055132, 0.871265, 0.487707}, {31, 30, 9, 10}},
    {{0.196529, 0.007457, -0.980470}, {15, 33, 32, 0}},
    {{-0.943670, -0.070469, 0.323296}, {47, 46, 45, 49}},
    {{-0.882728, 0.275833, 0.380404}, {53, 58, 49, 55}},
    {{-0.304920, -0.116656, 0.945206}, {49, 45, 64, 48}},
    {{0.204202, -0.190488, 0.960217}, {23, 17, 2, 3}},
    {{-0.096488, 0.960557, -0.260807}, {51, 8, 1, 42}},
    {{-0.055132, 0.871265, 0.487707}, {55, 10, 9, 54}},
    {{-0.632680, 0.756251, -0.166735}, {53, 51, 42, 52}},
    {{-0.003197, -0.013669, 0.999902}, {22, 3, 48, 6}},
    {{0.735449, 0.259008, -0.626123}, {34, 15, 16, 28}},
    {{-0.196529, 0.007457, -0.980470}, {32, 56, 41, 0}},
    {{-0.088791, 0.995824, -0.021222}, {54, 9, 8, 51}},
    {{0.096488, 0.960557, -0.260807}, {27, 16, 1, 8}},
    {{0.149451, 0.527310, -0.836426}, {16, 15, 0, 1}},
    {{-0.882160, -0.407560, 0.235985}, {39, 45, 46, 39}},
    {{0.000000, -0.928424, 0.371521}, {50, 24, 13, 39}},
    {{-0.913225, 0.065540, 0.402151}, {58, 60, 61, 49}},
    {{0.000000, -0.162342, 0.986735}, {13, 19, 45, 39}},
    {{0.643312, 0.749132, -0.157962}, {29, 28, 16, 27}},
    {{-0.620514, 0.400067, -0.674469}, {52, 42, 41, 52}},
    {{0.088791, 0.995824, -0.021222}, {30, 27, 8, 9}},
    {{-0.260366, 0.054601, 0.963965}, {48, 3, 49, 48}},
    {{0.930234, -0.108743, 0.350485}, {20, 21, 25, 23}},
    {{0.933060, 0.208453, 0.293165}, {35, 29, 31, 25}},
    {{0.016422, 0.156729, 0.987505}, {2, 17, 26, 7}},
    {{-0.048083, 0.511390, 0.858002}, {48, 44, 4, 6}},
    {{-0.149451, 0.527310, -0.836426}, {42, 1, 0, 41}},
    {{-0.881791, 0.460193, -0.103284}, {57, 58, 53, 52}},
    {{0.000000, -0.987975, -0.154612}, {12, 24, 50, 38}},
    {{-0.135344, 0.472004, 0.871146}, {55, 43, 7, 10}},
    {{0.032691, 0.578823, 0.814798}, {7, 26, 31, 10}},
    {{-0.998286, 0.027338, -0.051742}, {59, 60, 58, 57}},
    {{0.870975, -0.485945, 0.072521}, {24, 14, 20, 13}},
    {{0.306774, -0.117764, 0.944469}, {63, 19, 23, 22}},
    {{0.989260, -0.110205, -0.096019}, {14, 11, 21, 20}},
    {{0.259831, 0.057849, 0.963920}, {23, 3, 22, 23}},
    {{0.985332, -0.040885, 0.165678}, {18, 63, 22, 18}},
    {{-0.985417, -0.039004, 0.165629}, {48, 64, 44, 48}},
    {{0.000000, -0.966880, 0.255230}, {5, 18, 4, 44}},
};

static ATTR attribute_HEAD[61] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed 19 0 0
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
};

static jo_3d_mesh mesh_HEAD = {
    .data =
        {
            point_HEAD,
            65,
            polygon_HEAD,
            61,
            attribute_HEAD,
        }};

static __jo_force_inline void display_HEAD_mesh(void)
{
    jo_3d_mesh_draw(&mesh_HEAD);
}

// L_CALF
static POINT point_L_CALF[47] = {
    {toFIXED(0.336264), toFIXED(-4.805432), toFIXED(1.405907)},
    {toFIXED(1.080781), toFIXED(-4.653266), toFIXED(1.080327)},
    {toFIXED(-0.971955), toFIXED(-4.717501), toFIXED(0.621401)},
    {toFIXED(-0.472135), toFIXED(-4.819920), toFIXED(1.517767)},
    {toFIXED(-0.929962), toFIXED(-4.440288), toFIXED(-0.977680)},
    {toFIXED(1.041927), toFIXED(-3.478787), toFIXED(1.495759)},
    {toFIXED(-0.412420), toFIXED(-2.841201), toFIXED(-0.445306)},
    {toFIXED(0.633764), toFIXED(-2.846823), toFIXED(-0.348016)},
    {toFIXED(-0.975491), toFIXED(-3.391396), toFIXED(0.716080)},
    {toFIXED(-0.233347), toFIXED(-3.493184), toFIXED(1.606930)},
    {toFIXED(-0.933756), toFIXED(-3.106674), toFIXED(0.038714)},
    {toFIXED(-0.896142), toFIXED(-4.045136), toFIXED(-0.029189)},
    {toFIXED(-0.938136), toFIXED(-4.290546), toFIXED(0.668215)},
    {toFIXED(-0.438316), toFIXED(-4.347158), toFIXED(1.438750)},
    {toFIXED(0.370083), toFIXED(-4.338652), toFIXED(1.338075)},
    {toFIXED(-0.494860), toFIXED(-3.852951), toFIXED(-0.897152)},
    {toFIXED(0.810023), toFIXED(-3.807300), toFIXED(-0.433185)},
    {toFIXED(1.240424), toFIXED(-1.980593), toFIXED(1.524684)},
    {toFIXED(-0.495780), toFIXED(-1.559715), toFIXED(-0.364828)},
    {toFIXED(0.739895), toFIXED(-1.558020), toFIXED(-0.253149)},
    {toFIXED(-0.877822), toFIXED(-2.091651), toFIXED(1.008659)},
    {toFIXED(-0.308495), toFIXED(-2.133615), toFIXED(2.035461)},
    {toFIXED(-0.829989), toFIXED(-1.822755), toFIXED(0.210607)},
    {toFIXED(1.121756), toFIXED(0.682469), toFIXED(1.181925)},
    {toFIXED(-0.408659), toFIXED(1.267347), toFIXED(-0.354346)},
    {toFIXED(0.928681), toFIXED(1.262453), toFIXED(-0.269648)},
    {toFIXED(-0.600332), toFIXED(0.626889), toFIXED(0.784858)},
    {toFIXED(-0.167881), toFIXED(0.566786), toFIXED(1.489197)},
    {toFIXED(-0.563999), toFIXED(0.874761), toFIXED(0.195163)},
    {toFIXED(0.959074), toFIXED(3.935872), toFIXED(1.572763)},
    {toFIXED(-0.552229), toFIXED(3.936403), toFIXED(0.347964)},
    {toFIXED(1.165436), toFIXED(3.936380), toFIXED(0.399928)},
    {toFIXED(-0.504640), toFIXED(3.936235), toFIXED(0.734777)},
    {toFIXED(-0.167253), toFIXED(3.935811), toFIXED(1.713541)},
    {toFIXED(0.881397), toFIXED(3.315940), toFIXED(-3.190454)},
    {toFIXED(-0.403186), toFIXED(3.245449), toFIXED(-3.298765)},
    {toFIXED(0.817303), toFIXED(3.938043), toFIXED(-3.431657)},
    {toFIXED(-0.355188), toFIXED(3.938082), toFIXED(-3.523330)},
    {toFIXED(-0.615900), toFIXED(3.936983), toFIXED(-0.989542)},
    {toFIXED(1.102938), toFIXED(3.936977), toFIXED(-0.975141)},
    {toFIXED(-0.555454), toFIXED(2.634168), toFIXED(-1.628001)},
    {toFIXED(1.172653), toFIXED(2.653008), toFIXED(-1.543295)},
    {toFIXED(-0.579461), toFIXED(3.937592), toFIXED(-2.392659)},
    {toFIXED(-0.556391), toFIXED(2.996039), toFIXED(-2.513388)},
    {toFIXED(1.251546), toFIXED(2.976255), toFIXED(-2.428694)},
    {toFIXED(1.194517), toFIXED(3.937567), toFIXED(-2.336353)},
    {toFIXED(0.776204), toFIXED(-4.455588), toFIXED(-0.987518)},
};

static POLYGON polygon_L_CALF[45] = {
    {{0.965220, -0.016732, 0.260903}, {28, 24, 30, 28}},
    {{-0.254785, 0.199607, -0.946172}, {5, 1, 0, 14}},
    {{-0.987986, -0.067384, 0.139081}, {1, 16, 46, 1}},
    {{-0.768551, 0.599852, -0.222502}, {15, 4, 11, 15}},
    {{-0.981281, -0.131797, 0.140418}, {16, 1, 5, 7}},
    {{-0.000000, -1.000000, -0.000434}, {29, 32, 30, 31}},
    {{-0.996237, -0.032616, -0.080296}, {39, 45, 44, 41}},
    {{-0.997722, 0.054529, -0.039718}, {39, 41, 25, 31}},
    {{0.792141, -0.065991, 0.606760}, {18, 22, 10, 6}},
    {{-0.219545, -0.266023, 0.938633}, {7, 6, 15, 16}},
    {{0.853808, -0.137238, -0.502173}, {26, 27, 21, 20}},
    {{0.839704, -0.157783, 0.519617}, {6, 10, 11, 15}},
    {{-0.000000, -1.000000, -0.000434}, {29, 33, 32, 29}},
    {{-0.999914, 0.012891, -0.002211}, {23, 29, 31, 25}},
    {{-0.100866, 0.235400, -0.966650}, {13, 9, 5, 14}},
    {{-0.000000, -1.000000, -0.000434}, {38, 42, 45, 39}},
    {{-0.959014, 0.092933, 0.267685}, {17, 19, 7, 5}},
    {{-0.221407, 0.163450, -0.961386}, {21, 17, 5, 9}},
    {{-0.085975, 0.331759, 0.939438}, {34, 36, 37, 35}},
    {{0.821945, 0.142569, -0.551435}, {8, 20, 21, 9}},
    {{0.131749, 0.413009, -0.901147}, {4, 15, 16, 46}},
    {{-0.043599, 0.678756, 0.733069}, {41, 40, 24, 25}},
    {{0.996122, -0.082939, 0.029351}, {22, 20, 8, 10}},
    {{0.851187, -0.082543, -0.518332}, {12, 13, 3, 2}},
    {{0.996568, 0.035959, 0.074561}, {10, 8, 12, 11}},
    {{-0.076093, 0.004780, 0.997089}, {19, 25, 24, 18}},
    {{0.994830, -0.098787, 0.023550}, {28, 26, 20, 22}},
    {{0.999738, -0.016609, -0.015743}, {30, 32, 26, 28}},
    {{0.996745, 0.066553, -0.045487}, {24, 40, 38, 30}},
    {{-0.185663, 0.086382, -0.978809}, {33, 29, 23, 27}},
    {{-0.975617, 0.026748, 0.217844}, {25, 19, 17, 23}},
    {{-0.037764, 0.932107, 0.360208}, {44, 34, 35, 43}},
    {{0.909356, -0.002260, -0.416013}, {32, 33, 27, 26}},
    {{0.999334, 0.030318, 0.020305}, {43, 42, 38, 40}},
    {{0.800813, -0.002759, -0.598909}, {12, 8, 9, 13}},
    {{0.981204, -0.002707, 0.192952}, {43, 35, 37, 42}},
    {{0.927458, -0.058948, 0.369252}, {24, 28, 22, 18}},
    {{-0.017004, 0.932746, 0.360132}, {41, 44, 43, 40}},
    {{-0.091106, -0.066975, 0.993586}, {19, 18, 6, 7}},
    {{-0.929374, -0.036559, 0.367324}, {36, 34, 44, 45}},
    {{-0.126953, -0.144247, -0.981364}, {3, 13, 14, 0}},
    {{-0.000000, -1.000000, -0.000434}, {37, 36, 45, 42}},
    {{0.000000, -1.000000, -0.000434}, {38, 39, 31, 30}},
    {{-0.259753, -0.156877, -0.952847}, {27, 23, 17, 21}},
    {{0.995018, -0.098721, 0.013923}, {12, 2, 4, 11}},
};

static ATTR attribute_L_CALF[45] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
};

static jo_3d_mesh mesh_L_CALF = {
    .data =
        {
            point_L_CALF,
            47,
            polygon_L_CALF,
            45,
            attribute_L_CALF,
        }};

static __jo_force_inline void display_L_CALF_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L_CALF);
}

// L_FARM
static POINT point_L_FARM[34] = {
    {toFIXED(-3.579432), toFIXED(-0.654883), toFIXED(0.146185)},
    {toFIXED(-3.567194), toFIXED(0.744976), toFIXED(-0.014888)},
    {toFIXED(-3.567194), toFIXED(-0.667285), toFIXED(-0.425316)},
    {toFIXED(-3.792357), toFIXED(-0.325764), toFIXED(0.610720)},
    {toFIXED(-3.585990), toFIXED(0.557562), toFIXED(0.406970)},
    {toFIXED(-3.567194), toFIXED(0.146661), toFIXED(-0.700769)},
    {toFIXED(-0.155860), toFIXED(-0.688054), toFIXED(0.272694)},
    {toFIXED(-0.108999), toFIXED(0.706733), toFIXED(-0.126484)},
    {toFIXED(-0.390962), toFIXED(-0.699418), toFIXED(-0.537899)},
    {toFIXED(-0.284571), toFIXED(-0.349131), toFIXED(0.875122)},
    {toFIXED(-0.350195), toFIXED(0.562842), toFIXED(0.662345)},
    {toFIXED(-0.471658), toFIXED(0.140858), toFIXED(-0.808810)},
    {toFIXED(1.591705), toFIXED(-0.363856), toFIXED(0.020708)},
    {toFIXED(1.616488), toFIXED(0.373828), toFIXED(-0.190412)},
    {toFIXED(1.467361), toFIXED(-0.369865), toFIXED(-0.408005)},
    {toFIXED(1.523631), toFIXED(-0.184605), toFIXED(0.339325)},
    {toFIXED(1.488924), toFIXED(0.297727), toFIXED(0.226790)},
    {toFIXED(1.424683), toFIXED(0.074544), toFIXED(-0.551286)},
    {toFIXED(2.819908), toFIXED(-0.699495), toFIXED(0.239205)},
    {toFIXED(2.880743), toFIXED(1.008859), toFIXED(-0.278926)},
    {toFIXED(2.514689), toFIXED(-0.714244), toFIXED(-0.813129)},
    {toFIXED(2.724097), toFIXED(-0.262711), toFIXED(0.563697)},
    {toFIXED(2.684163), toFIXED(0.444436), toFIXED(0.574385)},
    {toFIXED(2.409929), toFIXED(0.376622), toFIXED(-1.164834)},
    {toFIXED(3.685885), toFIXED(-0.281989), toFIXED(0.042179)},
    {toFIXED(3.635927), toFIXED(0.729204), toFIXED(-0.268350)},
    {toFIXED(3.502953), toFIXED(-0.290827), toFIXED(-0.588534)},
    {toFIXED(3.440167), toFIXED(0.362978), toFIXED(-0.799326)},
    {toFIXED(-1.279149), toFIXED(0.937802), toFIXED(-0.119428)},
    {toFIXED(-1.584140), toFIXED(0.751678), toFIXED(0.878042)},
    {toFIXED(-1.501159), toFIXED(-0.428024), toFIXED(1.147089)},
    {toFIXED(-1.530390), toFIXED(-0.866450), toFIXED(0.385317)},
    {toFIXED(-1.635689), toFIXED(-0.888973), toFIXED(-0.639677)},
    {toFIXED(-1.737729), toFIXED(0.205798), toFIXED(-0.982232)},
};

static POLYGON polygon_L_FARM[31] = {
    {{-0.409467, 0.484490, -0.773050}, {18, 21, 24, 18}},
    {{-0.556122, -0.171012, -0.813316}, {21, 22, 25, 24}},
    {{0.240956, 0.730808, -0.638639}, {15, 21, 18, 12}},
    {{0.106122, -0.769592, 0.629655}, {28, 1, 5, 33}},
    {{-0.256113, -0.237075, -0.937124}, {10, 16, 15, 9}},
    {{-0.116624, -0.733140, 0.670003}, {11, 17, 13, 7}},
    {{0.430587, 0.314145, 0.846113}, {14, 20, 23, 17}},
    {{-0.192544, -0.953283, -0.232761}, {13, 16, 10, 7}},
    {{-0.319512, 0.262837, 0.910400}, {20, 26, 27, 23}},
    {{-0.199847, -0.233407, -0.951621}, {29, 10, 9, 30}},
    {{0.452950, -0.812724, 0.366492}, {17, 23, 19, 13}},
    {{-0.118489, 0.294366, 0.948319}, {14, 17, 11, 8}},
    {{0.108334, 0.993719, -0.028053}, {32, 2, 0, 31}},
    {{-0.158530, 0.852840, -0.497526}, {30, 9, 6, 31}},
    {{0.226984, -0.230432, -0.946245}, {30, 3, 4, 29}},
    {{0.152059, 0.847882, -0.507912}, {31, 0, 3, 30}},
    {{-0.253568, -0.730514, 0.634076}, {23, 27, 25, 19}},
    {{0.137421, 0.311757, 0.940172}, {33, 5, 2, 32}},
    {{0.277972, 0.955977, -0.094022}, {18, 20, 14, 12}},
    {{-0.139079, 0.990253, 0.007510}, {6, 8, 32, 31}},
    {{-0.953128, 0.029737, 0.301104}, {25, 27, 26, 24}},
    {{-0.411978, 0.904912, 0.106808}, {24, 26, 20, 18}},
    {{-0.134104, -0.722541, 0.678197}, {33, 11, 7, 28}},
    {{-0.227544, 0.827099, -0.513936}, {9, 15, 12, 6}},
    {{-0.277364, -0.770694, -0.573673}, {22, 19, 25, 22}},
    {{-0.188270, -0.953884, -0.233795}, {7, 10, 29, 28}},
    {{0.233529, -0.068396, -0.969941}, {22, 21, 15, 16}},
    {{-0.177035, 0.983488, 0.037560}, {12, 14, 8, 6}},
    {{-0.118481, 0.289892, 0.949697}, {8, 11, 33, 32}},
    {{0.316804, -0.876982, -0.361301}, {19, 22, 16, 13}},
    {{0.106911, -0.967259, -0.230174}, {29, 4, 1, 28}},
};

static ATTR attribute_L_FARM[31] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
};

static jo_3d_mesh mesh_L_FARM = {
    .data =
        {
            point_L_FARM,
            34,
            polygon_L_FARM,
            31,
            attribute_L_FARM,
        }};

static __jo_force_inline void display_L_FARM_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L_FARM);
}

// L_THIGH
static POINT point_L_THIGH[18] = {
    {toFIXED(-0.857076), toFIXED(-2.110335), toFIXED(-1.043792)},
    {toFIXED(-0.694125), toFIXED(-2.108316), toFIXED(1.206836)},
    {toFIXED(-1.430956), toFIXED(-2.109348), toFIXED(0.056670)},
    {toFIXED(0.616586), toFIXED(-2.108271), toFIXED(1.256541)},
    {toFIXED(0.453635), toFIXED(-2.110291), toFIXED(-0.994087)},
    {toFIXED(1.190466), toFIXED(-2.109259), toFIXED(0.156079)},
    {toFIXED(0.249726), toFIXED(2.762989), toFIXED(0.921079)},
    {toFIXED(-0.451517), toFIXED(2.761331), toFIXED(-0.926455)},
    {toFIXED(0.606402), toFIXED(2.761636), toFIXED(-0.586948)},
    {toFIXED(0.853334), toFIXED(2.762751), toFIXED(0.655307)},
    {toFIXED(-0.716697), toFIXED(2.762417), toFIXED(0.283796)},
    {toFIXED(1.495339), toFIXED(-1.699971), toFIXED(0.419149)},
    {toFIXED(-1.026258), toFIXED(0.150425), toFIXED(0.934599)},
    {toFIXED(0.748207), toFIXED(-0.643550), toFIXED(1.182479)},
    {toFIXED(1.002515), toFIXED(-1.172675), toFIXED(-0.847012)},
    {toFIXED(-0.788303), toFIXED(-0.498949), toFIXED(-1.435024)},
    {toFIXED(-0.776851), toFIXED(2.761920), toFIXED(-0.270299)},
    {toFIXED(-1.178096), toFIXED(0.322168), toFIXED(-0.227475)},
};

static POLYGON polygon_L_THIGH[15] = {
    {{-0.755739, -0.063526, -0.651785}, {13, 9, 11, 13}},
    {{0.985502, -0.131774, -0.106871}, {12, 16, 10, 12}},
    {{-0.640070, 0.691722, -0.334411}, {3, 11, 5, 3}},
    {{-0.958721, -0.125975, 0.254921}, {8, 14, 11, 9}},
    {{-0.798138, 0.358455, 0.484237}, {5, 11, 14, 4}},
    {{-0.400279, -0.116251, -0.908990}, {13, 6, 9, 13}},
    {{0.977058, -0.151178, -0.150007}, {12, 17, 16, 12}},
    {{0.902465, -0.138408, 0.407921}, {15, 7, 16, 17}},
    {{0.921675, -0.008529, 0.387869}, {0, 15, 17, 2}},
    {{0.073056, -0.088456, -0.993397}, {3, 1, 12, 13}},
    {{-0.695994, 0.026260, -0.717567}, {3, 13, 11, 3}},
    {{-0.327842, -0.093886, 0.940056}, {14, 8, 7, 15}},
    {{0.932425, -0.026988, -0.360354}, {17, 12, 1, 2}},
    {{0.276378, -0.126778, -0.952650}, {13, 12, 10, 6}},
    {{-0.171340, 0.134997, 0.975919}, {14, 15, 0, 4}},
};

static ATTR attribute_L_THIGH[15] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
};

static jo_3d_mesh mesh_L_THIGH = {
    .data =
        {
            point_L_THIGH,
            18,
            polygon_L_THIGH,
            15,
            attribute_L_THIGH,
        }};

static __jo_force_inline void display_L_THIGH_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L_THIGH);
}

// L_UARM
static POINT point_L_UARM[12] = {
    {toFIXED(-0.927046), toFIXED(-0.295596), toFIXED(1.000395)},
    {toFIXED(-1.296502), toFIXED(-0.671545), toFIXED(-0.592351)},
    {toFIXED(-1.115279), toFIXED(-0.954733), toFIXED(0.316047)},
    {toFIXED(-0.920036), toFIXED(0.646730), toFIXED(0.776343)},
    {toFIXED(-1.289492), toFIXED(0.270780), toFIXED(-0.816403)},
    {toFIXED(-1.101259), toFIXED(0.929918), toFIXED(-0.132055)},
    {toFIXED(1.236641), toFIXED(-0.739609), toFIXED(0.105350)},
    {toFIXED(1.236641), toFIXED(0.764422), toFIXED(-0.289341)},
    {toFIXED(1.236641), toFIXED(-0.534507), toFIXED(-0.644588)},
    {toFIXED(1.236641), toFIXED(-0.192695), toFIXED(0.657942)},
    {toFIXED(1.236641), toFIXED(0.559320), toFIXED(0.460596)},
    {toFIXED(1.236641), toFIXED(0.217508), toFIXED(-0.841933)},
};

static POLYGON polygon_L_UARM[8] = {
    {{-0.139636, -0.251341, -0.957773}, {0, 10, 9, 0}},
    {{-0.126923, 0.731637, -0.669774}, {0, 6, 2, 0}},
    {{0.010921, 0.241299, 0.970389}, {1, 8, 11, 4}},
    {{-0.150083, -0.227639, -0.962110}, {0, 3, 10, 0}},
    {{-0.082678, -0.958408, -0.273164}, {7, 10, 3, 5}},
    {{-0.143633, 0.703379, -0.696152}, {0, 9, 6, 0}},
    {{-0.005926, -0.715526, 0.698561}, {4, 11, 7, 5}},
    {{-0.053470, 0.956310, 0.287425}, {2, 6, 8, 1}},
};

static ATTR attribute_L_UARM[8] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
};

static jo_3d_mesh mesh_L_UARM = {
    .data =
        {
            point_L_UARM,
            12,
            polygon_L_UARM,
            8,
            attribute_L_UARM,
        }};

static __jo_force_inline void display_L_UARM_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L_UARM);
}

// LOWER
static POINT point_LOWER[29] = {
    {toFIXED(1.647912), toFIXED(-2.158339), toFIXED(-1.900436)},
    {toFIXED(1.647912), toFIXED(-0.746240), toFIXED(1.174770)},
    {toFIXED(1.647912), toFIXED(-2.779417), toFIXED(-0.464919)},
    {toFIXED(2.387592), toFIXED(1.371714), toFIXED(1.035190)},
    {toFIXED(2.387592), toFIXED(1.038013), toFIXED(-1.381051)},
    {toFIXED(2.009315), toFIXED(-2.461749), toFIXED(-1.125857)},
    {toFIXED(1.750079), toFIXED(-2.131444), toFIXED(0.564907)},
    {toFIXED(-0.001308), toFIXED(-0.953448), toFIXED(1.464271)},
    {toFIXED(-0.001308), toFIXED(-2.934693), toFIXED(0.333464)},
    {toFIXED(3.116129), toFIXED(0.957738), toFIXED(-0.376910)},
    {toFIXED(-0.001308), toFIXED(-1.254303), toFIXED(-2.271833)},
    {toFIXED(2.700792), toFIXED(-1.054680), toFIXED(-0.295753)},
    {toFIXED(-0.001308), toFIXED(-2.621358), toFIXED(0.793693)},
    {toFIXED(-0.001308), toFIXED(1.656433), toFIXED(-2.328805)},
    {toFIXED(-0.001308), toFIXED(0.231141), toFIXED(1.536343)},
    {toFIXED(-0.001308), toFIXED(-1.874181), toFIXED(1.268952)},
    {toFIXED(1.828614), toFIXED(-1.438871), toFIXED(0.956234)},
    {toFIXED(1.020203), toFIXED(1.698398), toFIXED(1.226655)},
    {toFIXED(-1.650529), toFIXED(-2.158339), toFIXED(-1.900436)},
    {toFIXED(-1.650529), toFIXED(-0.746240), toFIXED(1.174770)},
    {toFIXED(-1.650529), toFIXED(-2.779417), toFIXED(-0.464919)},
    {toFIXED(-2.390209), toFIXED(1.371714), toFIXED(1.035190)},
    {toFIXED(-2.390209), toFIXED(1.038013), toFIXED(-1.381051)},
    {toFIXED(-2.011932), toFIXED(-2.461749), toFIXED(-1.125857)},
    {toFIXED(-1.752696), toFIXED(-2.131444), toFIXED(0.564907)},
    {toFIXED(-3.080804), toFIXED(0.994236), toFIXED(-0.321939)},
    {toFIXED(-2.703409), toFIXED(-1.054680), toFIXED(-0.295753)},
    {toFIXED(-1.831231), toFIXED(-1.438871), toFIXED(0.956234)},
    {toFIXED(-1.022820), toFIXED(1.698398), toFIXED(1.226655)},
};

static POLYGON polygon_LOWER[23] = {
    {{0.832282, 0.170805, -0.527383}, {26, 19, 27, 24}},
    {{0.205888, 0.221449, -0.953190}, {7, 15, 27, 19}},
    {{-0.192169, -0.028523, -0.980947}, {3, 1, 14, 17}},
    {{-0.842582, 0.143157, 0.519194}, {9, 4, 0, 11}},
    {{-0.871232, 0.152982, 0.466424}, {11, 0, 5, 11}},
    {{0.871232, 0.152982, 0.466424}, {18, 26, 23, 18}},
    {{-0.000000, -0.206516, -0.978443}, {14, 28, 17, 14}},
    {{0.192169, -0.028523, -0.980947}, {21, 28, 14, 19}},
    {{0.255731, 0.508747, -0.822058}, {12, 24, 27, 15}},
    {{0.179863, 0.059739, -0.981876}, {19, 14, 7, 19}},
    {{0.305067, 0.809637, -0.501420}, {24, 12, 8, 20}},
    {{-0.305067, 0.809637, -0.501420}, {6, 2, 8, 12}},
    {{0.812727, 0.196053, -0.548669}, {21, 19, 26, 25}},
    {{0.321484, -0.032718, 0.946350}, {13, 22, 18, 10}},
    {{0.852768, 0.134150, 0.504767}, {26, 18, 22, 25}},
    {{-0.255731, 0.508747, -0.822058}, {16, 6, 12, 15}},
    {{-0.205888, 0.221449, -0.953190}, {7, 1, 16, 15}},
    {{-0.820910, 0.523508, -0.228137}, {11, 5, 2, 6}},
    {{-0.321484, -0.032718, 0.946350}, {0, 4, 13, 10}},
    {{0.820910, 0.523508, -0.228138}, {20, 23, 26, 24}},
    {{-0.179863, 0.059739, -0.981876}, {1, 7, 14, 1}},
    {{-0.811047, 0.197372, -0.550678}, {9, 11, 1, 3}},
    {{-0.832282, 0.170805, -0.527383}, {6, 16, 1, 11}},
};

static ATTR attribute_LOWER[23] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
};

static jo_3d_mesh mesh_LOWER = {
    .data =
        {
            point_LOWER,
            29,
            polygon_LOWER,
            23,
            attribute_LOWER,
        }};

static __jo_force_inline void display_LOWER_mesh(void)
{
    jo_3d_mesh_draw(&mesh_LOWER);
}

// R_CALF
static POINT point_R_CALF[47] = {
    {toFIXED(0.336264), toFIXED(-4.805432), toFIXED(1.405907)},
    {toFIXED(1.080781), toFIXED(-4.653266), toFIXED(1.080327)},
    {toFIXED(-0.971955), toFIXED(-4.717501), toFIXED(0.621401)},
    {toFIXED(-0.472135), toFIXED(-4.819920), toFIXED(1.517767)},
    {toFIXED(-0.929962), toFIXED(-4.440288), toFIXED(-0.977680)},
    {toFIXED(1.041927), toFIXED(-3.478787), toFIXED(1.495759)},
    {toFIXED(-0.412420), toFIXED(-2.841201), toFIXED(-0.445306)},
    {toFIXED(0.633764), toFIXED(-2.846823), toFIXED(-0.348016)},
    {toFIXED(-0.975491), toFIXED(-3.391396), toFIXED(0.716080)},
    {toFIXED(-0.233347), toFIXED(-3.493184), toFIXED(1.606930)},
    {toFIXED(-0.933756), toFIXED(-3.106674), toFIXED(0.038714)},
    {toFIXED(-0.896142), toFIXED(-4.045136), toFIXED(-0.029189)},
    {toFIXED(-0.938136), toFIXED(-4.290546), toFIXED(0.668215)},
    {toFIXED(-0.438316), toFIXED(-4.347158), toFIXED(1.438750)},
    {toFIXED(0.370083), toFIXED(-4.338652), toFIXED(1.338075)},
    {toFIXED(-0.494860), toFIXED(-3.852951), toFIXED(-0.897152)},
    {toFIXED(0.810023), toFIXED(-3.807300), toFIXED(-0.433185)},
    {toFIXED(1.240424), toFIXED(-1.980593), toFIXED(1.524684)},
    {toFIXED(-0.495780), toFIXED(-1.559715), toFIXED(-0.364828)},
    {toFIXED(0.739895), toFIXED(-1.558020), toFIXED(-0.253149)},
    {toFIXED(-0.877822), toFIXED(-2.091651), toFIXED(1.008659)},
    {toFIXED(-0.308495), toFIXED(-2.133615), toFIXED(2.035461)},
    {toFIXED(-0.829989), toFIXED(-1.822755), toFIXED(0.210607)},
    {toFIXED(1.121756), toFIXED(0.682469), toFIXED(1.181925)},
    {toFIXED(-0.408659), toFIXED(1.267347), toFIXED(-0.354346)},
    {toFIXED(0.928681), toFIXED(1.262453), toFIXED(-0.269648)},
    {toFIXED(-0.600332), toFIXED(0.626889), toFIXED(0.784858)},
    {toFIXED(-0.167881), toFIXED(0.566786), toFIXED(1.489197)},
    {toFIXED(-0.563999), toFIXED(0.874761), toFIXED(0.195163)},
    {toFIXED(0.959074), toFIXED(3.935872), toFIXED(1.572763)},
    {toFIXED(-0.552229), toFIXED(3.936403), toFIXED(0.347964)},
    {toFIXED(1.165436), toFIXED(3.936380), toFIXED(0.399928)},
    {toFIXED(-0.504640), toFIXED(3.936235), toFIXED(0.734777)},
    {toFIXED(-0.167253), toFIXED(3.935811), toFIXED(1.713541)},
    {toFIXED(0.881397), toFIXED(3.315940), toFIXED(-3.190454)},
    {toFIXED(-0.403186), toFIXED(3.245449), toFIXED(-3.298765)},
    {toFIXED(0.817303), toFIXED(3.938043), toFIXED(-3.431657)},
    {toFIXED(-0.355188), toFIXED(3.938082), toFIXED(-3.523330)},
    {toFIXED(-0.615900), toFIXED(3.936983), toFIXED(-0.989542)},
    {toFIXED(1.102938), toFIXED(3.936977), toFIXED(-0.975141)},
    {toFIXED(-0.555454), toFIXED(2.634168), toFIXED(-1.628001)},
    {toFIXED(1.172653), toFIXED(2.653008), toFIXED(-1.543295)},
    {toFIXED(-0.579461), toFIXED(3.937592), toFIXED(-2.392659)},
    {toFIXED(-0.556391), toFIXED(2.996039), toFIXED(-2.513388)},
    {toFIXED(1.251546), toFIXED(2.976255), toFIXED(-2.428694)},
    {toFIXED(1.194517), toFIXED(3.937567), toFIXED(-2.336353)},
    {toFIXED(0.776204), toFIXED(-4.455588), toFIXED(-0.987518)},
};

static POLYGON polygon_R_CALF[45] = {
    {{0.965220, -0.016732, 0.260903}, {28, 24, 30, 28}},
    {{-0.254785, 0.199607, -0.946172}, {5, 1, 0, 14}},
    {{-0.987986, -0.067384, 0.139081}, {1, 16, 46, 1}},
    {{-0.768551, 0.599852, -0.222502}, {15, 4, 11, 15}},
    {{-0.981281, -0.131797, 0.140418}, {16, 1, 5, 7}},
    {{-0.000000, -1.000000, -0.000434}, {29, 32, 30, 31}},
    {{-0.996237, -0.032616, -0.080296}, {39, 45, 44, 41}},
    {{-0.997722, 0.054529, -0.039718}, {39, 41, 25, 31}},
    {{0.792141, -0.065991, 0.606760}, {18, 22, 10, 6}},
    {{-0.219545, -0.266023, 0.938633}, {7, 6, 15, 16}},
    {{0.853808, -0.137238, -0.502173}, {26, 27, 21, 20}},
    {{0.839704, -0.157783, 0.519617}, {6, 10, 11, 15}},
    {{-0.000000, -1.000000, -0.000434}, {29, 33, 32, 29}},
    {{-0.999914, 0.012891, -0.002211}, {23, 29, 31, 25}},
    {{-0.100866, 0.235400, -0.966650}, {13, 9, 5, 14}},
    {{-0.000000, -1.000000, -0.000434}, {38, 42, 45, 39}},
    {{-0.959014, 0.092933, 0.267685}, {17, 19, 7, 5}},
    {{-0.221407, 0.163450, -0.961386}, {21, 17, 5, 9}},
    {{-0.085975, 0.331759, 0.939438}, {34, 36, 37, 35}},
    {{0.821945, 0.142569, -0.551435}, {8, 20, 21, 9}},
    {{0.131749, 0.413009, -0.901147}, {4, 15, 16, 46}},
    {{-0.043599, 0.678756, 0.733069}, {41, 40, 24, 25}},
    {{0.996122, -0.082939, 0.029351}, {22, 20, 8, 10}},
    {{0.851187, -0.082543, -0.518332}, {12, 13, 3, 2}},
    {{0.996568, 0.035959, 0.074561}, {10, 8, 12, 11}},
    {{-0.076093, 0.004780, 0.997089}, {19, 25, 24, 18}},
    {{0.994830, -0.098787, 0.023550}, {28, 26, 20, 22}},
    {{0.999738, -0.016609, -0.015743}, {30, 32, 26, 28}},
    {{0.996745, 0.066553, -0.045487}, {24, 40, 38, 30}},
    {{-0.185663, 0.086382, -0.978809}, {33, 29, 23, 27}},
    {{-0.975617, 0.026748, 0.217844}, {25, 19, 17, 23}},
    {{-0.037764, 0.932107, 0.360208}, {44, 34, 35, 43}},
    {{0.909356, -0.002260, -0.416013}, {32, 33, 27, 26}},
    {{0.999334, 0.030318, 0.020305}, {43, 42, 38, 40}},
    {{0.800813, -0.002759, -0.598909}, {12, 8, 9, 13}},
    {{0.981204, -0.002707, 0.192952}, {43, 35, 37, 42}},
    {{0.927458, -0.058948, 0.369252}, {24, 28, 22, 18}},
    {{-0.017004, 0.932746, 0.360132}, {41, 44, 43, 40}},
    {{-0.091106, -0.066975, 0.993586}, {19, 18, 6, 7}},
    {{-0.929374, -0.036559, 0.367324}, {36, 34, 44, 45}},
    {{-0.126953, -0.144247, -0.981364}, {3, 13, 14, 0}},
    {{-0.000000, -1.000000, -0.000434}, {37, 36, 45, 42}},
    {{0.000000, -1.000000, -0.000434}, {38, 39, 31, 30}},
    {{-0.259753, -0.156877, -0.952847}, {27, 23, 17, 21}},
    {{0.995018, -0.098721, 0.013923}, {12, 2, 4, 11}},
};

static ATTR attribute_R_CALF[45] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
};

static jo_3d_mesh mesh_R_CALF = {
    .data =
        {
            point_R_CALF,
            47,
            polygon_R_CALF,
            45,
            attribute_R_CALF,
        }};

static __jo_force_inline void display_R_CALF_mesh(void)
{
    jo_3d_mesh_draw(&mesh_R_CALF);
}

// R_FARM
static POINT point_R_FARM[40] = {
    {toFIXED(3.458138), toFIXED(-0.647990), toFIXED(0.089192)},
    {toFIXED(3.456460), toFIXED(0.751672), toFIXED(-0.023942)},
    {toFIXED(3.456460), toFIXED(-0.660578), toFIXED(-0.434597)},
    {toFIXED(3.696063), toFIXED(-0.319018), toFIXED(0.560785)},
    {toFIXED(3.456460), toFIXED(0.153396), toFIXED(-0.709922)},
    {toFIXED(2.147992), toFIXED(-0.785271), toFIXED(0.435452)},
    {toFIXED(1.789082), toFIXED(0.861793), toFIXED(-0.125069)},
    {toFIXED(2.184908), toFIXED(-0.808339), toFIXED(-0.702490)},
    {toFIXED(2.035555), toFIXED(-0.385118), toFIXED(1.281128)},
    {toFIXED(2.127680), toFIXED(0.691801), toFIXED(0.982331)},
    {toFIXED(2.298192), toFIXED(0.193654), toFIXED(-1.082885)},
    {toFIXED(0.049345), toFIXED(-0.681941), toFIXED(0.263424)},
    {toFIXED(0.636595), toFIXED(0.838064), toFIXED(-0.131930)},
    {toFIXED(0.284446), toFIXED(-0.693305), toFIXED(-0.547169)},
    {toFIXED(0.178056), toFIXED(-0.343018), toFIXED(0.865852)},
    {toFIXED(0.243679), toFIXED(0.568955), toFIXED(0.653075)},
    {toFIXED(0.365143), toFIXED(0.146971), toFIXED(-0.818080)},
    {toFIXED(-1.698220), toFIXED(-0.357743), toFIXED(0.011438)},
    {toFIXED(-1.723004), toFIXED(0.379941), toFIXED(-0.199682)},
    {toFIXED(-1.573877), toFIXED(-0.363751), toFIXED(-0.417275)},
    {toFIXED(-1.630147), toFIXED(-0.178492), toFIXED(0.330055)},
    {toFIXED(-1.595439), toFIXED(0.303841), toFIXED(0.217520)},
    {toFIXED(-1.531198), toFIXED(0.080657), toFIXED(-0.560556)},
    {toFIXED(-2.902030), toFIXED(-0.756586), toFIXED(0.285895)},
    {toFIXED(-2.967774), toFIXED(0.946679), toFIXED(-0.273936)},
    {toFIXED(-2.572170), toFIXED(-0.772526), toFIXED(-0.851392)},
    {toFIXED(-2.861606), toFIXED(-0.178637), toFIXED(0.690479)},
    {toFIXED(-2.794979), toFIXED(0.428558), toFIXED(0.474738)},
    {toFIXED(-2.458955), toFIXED(0.406405), toFIXED(-1.231488)},
    {toFIXED(-3.837915), toFIXED(-0.305376), toFIXED(0.072963)},
    {toFIXED(-3.753865), toFIXED(0.679851), toFIXED(-0.262537)},
    {toFIXED(-3.640216), toFIXED(-0.314927), toFIXED(-0.608666)},
    {toFIXED(-3.439324), toFIXED(0.256146), toFIXED(0.273676)},
    {toFIXED(-3.572362), toFIXED(0.391658), toFIXED(-0.836474)},
    {toFIXED(1.366086), toFIXED(0.740721), toFIXED(0.849275)},
    {toFIXED(1.284674), toFIXED(-0.414780), toFIXED(1.113235)},
    {toFIXED(1.299628), toFIXED(-0.844212), toFIXED(0.365867)},
    {toFIXED(1.416659), toFIXED(-0.865726), toFIXED(-0.639748)},
    {toFIXED(1.516770), toFIXED(0.206040), toFIXED(-0.975826)},
    {toFIXED(3.458138), toFIXED(0.576008), toFIXED(0.443789)},
};

static POLYGON polygon_R_FARM[38] = {
    {{-0.222653, 0.861785, -0.455798}, {8, 3, 0, 5}},
    {{0.158617, 0.852254, -0.498502}, {11, 14, 35, 36}},
    {{0.470819, -0.198467, -0.859617}, {26, 29, 32, 27}},
    {{0.068843, -0.800683, 0.595120}, {6, 38, 10, 6}},
    {{-0.039107, -0.989390, -0.139919}, {34, 6, 9, 34}},
    {{0.251994, -0.767566, -0.589356}, {30, 24, 27, 30}},
    {{0.177036, 0.983487, 0.037560}, {17, 11, 13, 19}},
    {{0.227544, 0.827100, -0.513936}, {17, 20, 14, 11}},
    {{-0.448438, -0.842587, 0.298244}, {24, 28, 22, 18}},
    {{0.411977, 0.904913, 0.106808}, {29, 23, 25, 31}},
    {{0.118489, 0.294366, 0.948319}, {19, 13, 16, 22}},
    {{0.319511, 0.262837, 0.910401}, {33, 31, 25, 28}},
    {{-0.381705, -0.217632, -0.898297}, {9, 39, 3, 8}},
    {{-0.335160, 0.935680, -0.110324}, {23, 17, 19, 25}},
    {{0.235593, -0.806398, 0.542419}, {30, 33, 28, 24}},
    {{-0.253741, 0.342473, 0.904615}, {7, 2, 4, 10}},
    {{0.139072, 0.990241, 0.009037}, {11, 36, 37, 13}},
    {{0.957875, 0.009564, 0.287027}, {31, 33, 30, 29}},
    {{-0.139614, -0.804846, 0.576829}, {6, 10, 4, 1}},
    {{-0.101606, -0.976073, -0.192245}, {6, 1, 39, 9}},
    {{0.192024, -0.953703, -0.231469}, {18, 12, 15, 21}},
    {{0.576063, -0.442293, -0.687407}, {32, 29, 30, 27}},
    {{-0.278080, -0.882903, -0.378356}, {24, 18, 21, 27}},
    {{0.414756, 0.502182, -0.758808}, {23, 29, 26, 23}},
    {{-0.483106, 0.310353, 0.818712}, {28, 25, 19, 22}},
    {{0.099518, -0.980192, -0.171231}, {15, 12, 6, 34}},
    {{-0.250310, -0.257890, -0.933187}, {27, 21, 20, 26}},
    {{0.069530, -0.762324, 0.643450}, {38, 6, 12, 16}},
    {{-0.110420, 0.993603, -0.023661}, {5, 0, 2, 7}},
    {{-0.287024, 0.682812, -0.671852}, {23, 26, 20, 17}},
    {{-0.071640, 0.997095, -0.025883}, {36, 5, 7, 37}},
    {{0.256113, -0.237075, -0.937124}, {20, 21, 15, 14}},
    {{0.118487, 0.290248, 0.949588}, {13, 37, 38, 16}},
    {{0.019228, 0.887408, -0.460584}, {36, 35, 8, 5}},
    {{0.199846, -0.233634, -0.951565}, {14, 15, 34, 35}},
    {{0.094240, 0.316424, 0.943925}, {37, 7, 10, 38}},
    {{0.119642, -0.725795, 0.677427}, {18, 22, 16, 12}},
    {{0.185657, -0.253733, -0.949290}, {35, 34, 9, 8}},
};

static ATTR attribute_R_FARM[38] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
};

static jo_3d_mesh mesh_R_FARM = {
    .data =
        {
            point_R_FARM,
            40,
            polygon_R_FARM,
            38,
            attribute_R_FARM,
        }};

static __jo_force_inline void display_R_FARM_mesh(void)
{
    jo_3d_mesh_draw(&mesh_R_FARM);
}

// R_THIGH
static POINT point_R_THIGH[18] = {
    {toFIXED(0.855131), toFIXED(-2.122271), toFIXED(-1.043781)},
    {toFIXED(0.692610), toFIXED(-2.120252), toFIXED(1.206847)},
    {toFIXED(1.427496), toFIXED(-2.121284), toFIXED(0.056681)},
    {toFIXED(-0.614640), toFIXED(-2.120208), toFIXED(1.256551)},
    {toFIXED(-0.452120), toFIXED(-2.122227), toFIXED(-0.994076)},
    {toFIXED(-1.187006), toFIXED(-2.121195), toFIXED(0.156090)},
    {toFIXED(-0.249392), toFIXED(2.762988), toFIXED(0.920022)},
    {toFIXED(0.451041), toFIXED(2.761332), toFIXED(-0.925379)},
    {toFIXED(-0.605656), toFIXED(2.761636), toFIXED(-0.586264)},
    {toFIXED(-0.852304), toFIXED(2.762750), toFIXED(0.654557)},
    {toFIXED(0.715915), toFIXED(2.762416), toFIXED(0.282344)},
    {toFIXED(-1.495339), toFIXED(-0.811762), toFIXED(0.419534)},
    {toFIXED(1.026258), toFIXED(0.150425), toFIXED(0.934599)},
    {toFIXED(-0.748207), toFIXED(-0.643550), toFIXED(1.182479)},
    {toFIXED(-1.002515), toFIXED(-1.172675), toFIXED(-0.847012)},
    {toFIXED(0.788304), toFIXED(-0.498949), toFIXED(-1.435024)},
    {toFIXED(0.776000), toFIXED(2.761920), toFIXED(-0.269980)},
    {toFIXED(1.178096), toFIXED(0.322168), toFIXED(-0.227475)},
};

static POLYGON polygon_R_THIGH[14] = {
    {{0.720426, -0.070608, -0.689928}, {9, 13, 11, 9}},
    {{0.849242, 0.288890, -0.441962}, {11, 3, 5, 11}},
    {{-0.980221, -0.144536, -0.135191}, {16, 17, 12, 10}},
    {{0.876197, 0.259245, 0.406289}, {11, 5, 4, 14}},
    {{0.400279, -0.116251, -0.908990}, {9, 6, 13, 9}},
    {{0.944424, -0.141776, 0.296584}, {14, 8, 9, 11}},
    {{-0.902465, -0.138408, 0.407921}, {15, 17, 16, 7}},
    {{-0.073286, -0.087898, -0.993430}, {3, 13, 12, 1}},
    {{0.710960, 0.029062, -0.702632}, {11, 13, 3, 11}},
    {{0.327842, -0.093886, 0.940056}, {7, 8, 14, 15}},
    {{-0.932749, -0.025774, -0.359604}, {17, 2, 1, 12}},
    {{-0.276700, -0.126938, -0.952536}, {12, 13, 6, 10}},
    {{-0.922041, -0.007421, 0.387022}, {0, 2, 17, 15}},
    {{0.171799, 0.133841, 0.975998}, {14, 4, 0, 15}},
};

static ATTR attribute_R_THIGH[14] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, No_Palet, No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
};

static jo_3d_mesh mesh_R_THIGH = {
    .data =
        {
            point_R_THIGH,
            18,
            polygon_R_THIGH,
            14,
            attribute_R_THIGH,
        }};

static __jo_force_inline void display_R_THIGH_mesh(void)
{
    jo_3d_mesh_draw(&mesh_R_THIGH);
}

// R_UARM
static POINT point_R_UARM[12] = {
    {toFIXED(0.957909), toFIXED(-0.254654), toFIXED(1.054439)},
    {toFIXED(1.317626), toFIXED(-0.657328), toFIXED(-0.621643)},
    {toFIXED(1.165199), toFIXED(-0.948168), toFIXED(0.340530)},
    {toFIXED(0.903046), toFIXED(0.729700), toFIXED(0.806176)},
    {toFIXED(1.262763), toFIXED(0.327026), toFIXED(-0.869906)},
    {toFIXED(1.055473), toFIXED(1.020540), toFIXED(-0.155996)},
    {toFIXED(-1.238708), toFIXED(-0.788203), toFIXED(0.105078)},
    {toFIXED(-1.238708), toFIXED(0.715828), toFIXED(-0.289612)},
    {toFIXED(-1.238708), toFIXED(-0.583101), toFIXED(-0.644859)},
    {toFIXED(-1.238708), toFIXED(-0.241289), toFIXED(0.657670)},
    {toFIXED(-1.238708), toFIXED(0.510726), toFIXED(0.460325)},
    {toFIXED(-1.238708), toFIXED(0.168914), toFIXED(-0.842204)},
};

static POLYGON polygon_R_UARM[6] = {
    {{-0.141163, 0.954184, 0.263828}, {7, 10, 3, 5}},
    {{-0.174828, 0.239562, 0.955011}, {10, 9, 0, 3}},
    {{-0.052903, 0.709080, -0.703141}, {4, 11, 7, 5}},
    {{0.003262, -0.248479, -0.968632}, {1, 8, 11, 4}},
    {{-0.030660, -0.959330, -0.280616}, {2, 6, 8, 1}},
    {{-0.121138, -0.719000, 0.684372}, {2, 0, 9, 6}},
};

static ATTR attribute_R_UARM[6] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 1, C_RGB(7, 7, 7), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight),          // Grey
    ATTRIBUTE(Dual_Plane, SORT_CEN, 1, C_RGB(7, 7, 7), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight),          // Grey
};

static jo_3d_mesh mesh_R_UARM = {
    .data =
        {
            point_R_UARM,
            12,
            polygon_R_UARM,
            6,
            attribute_R_UARM,
        }};

static __jo_force_inline void display_R_UARM_mesh(void)
{
    jo_3d_mesh_draw(&mesh_R_UARM);
}

// SHOULDER
static POINT point_SHOULDER[69] = {
    {toFIXED(0.000000), toFIXED(-1.378390), toFIXED(-0.115274)},
    {toFIXED(0.000000), toFIXED(2.314267), toFIXED(-1.462043)},
    {toFIXED(0.000000), toFIXED(-0.081752), toFIXED(1.693693)},
    {toFIXED(0.000000), toFIXED(2.889932), toFIXED(0.970328)},
    {toFIXED(0.000000), toFIXED(0.109473), toFIXED(-1.216752)},
    {toFIXED(0.000000), toFIXED(1.518774), toFIXED(1.508403)},
    {toFIXED(0.000000), toFIXED(1.860224), toFIXED(-2.066237)},
    {toFIXED(0.000000), toFIXED(0.899831), toFIXED(-2.055051)},
    {toFIXED(0.000000), toFIXED(-0.568761), toFIXED(-0.563699)},
    {toFIXED(0.000000), toFIXED(1.430198), toFIXED(-2.196078)},
    {toFIXED(0.000000), toFIXED(0.661896), toFIXED(-1.820800)},
    {toFIXED(0.000000), toFIXED(-1.132062), toFIXED(1.562710)},
    {toFIXED(-0.000768), toFIXED(-1.711024), toFIXED(-0.132278)},
    {toFIXED(-2.712549), toFIXED(-0.736189), toFIXED(1.452024)},
    {toFIXED(-1.415617), toFIXED(2.467504), toFIXED(0.393127)},
    {toFIXED(-2.783464), toFIXED(-0.780635), toFIXED(-0.234098)},
    {toFIXED(-1.590128), toFIXED(2.064126), toFIXED(-1.171304)},
    {toFIXED(-2.677706), toFIXED(-1.172846), toFIXED(0.618655)},
    {toFIXED(-2.853151), toFIXED(0.228101), toFIXED(1.432519)},
    {toFIXED(-1.900295), toFIXED(2.174605), toFIXED(-0.402027)},
    {toFIXED(-2.924066), toFIXED(0.183655), toFIXED(-0.253603)},
    {toFIXED(-2.958910), toFIXED(0.688023), toFIXED(0.579705)},
    {toFIXED(-1.728142), toFIXED(-1.137771), toFIXED(-0.058219)},
    {toFIXED(-2.039275), toFIXED(-1.281293), toFIXED(0.892966)},
    {toFIXED(-1.372433), toFIXED(-0.500648), toFIXED(1.518295)},
    {toFIXED(-1.780942), toFIXED(0.759165), toFIXED(1.252445)},
    {toFIXED(-1.883615), toFIXED(0.247571), toFIXED(-0.784257)},
    {toFIXED(-2.371295), toFIXED(0.835842), toFIXED(0.271887)},
    {toFIXED(-1.933189), toFIXED(1.603470), toFIXED(-1.116474)},
    {toFIXED(-1.467446), toFIXED(-0.372606), toFIXED(-0.485902)},
    {toFIXED(-0.631428), toFIXED(-1.322115), toFIXED(-0.086782)},
    {toFIXED(-0.931122), toFIXED(0.176946), toFIXED(-1.075112)},
    {toFIXED(-2.032880), toFIXED(0.679435), toFIXED(-1.012364)},
    {toFIXED(-0.790358), toFIXED(-0.976751), toFIXED(-0.275766)},
    {toFIXED(-1.870650), toFIXED(2.047128), toFIXED(-0.786689)},
    {toFIXED(-1.724728), toFIXED(-1.019354), toFIXED(1.373813)},
    {toFIXED(-0.648786), toFIXED(-1.627986), toFIXED(1.006041)},
    {toFIXED(-0.815606), toFIXED(-2.180863), toFIXED(0.917323)},
    {toFIXED(-0.601238), toFIXED(-1.812521), toFIXED(0.037494)},
    {toFIXED(-2.065382), toFIXED(1.112561), toFIXED(-1.055863)},
    {toFIXED(0.000000), toFIXED(-0.116696), toFIXED(-0.920257)},
    {toFIXED(-0.944360), toFIXED(-0.471650), toFIXED(-0.562018)},
    {toFIXED(2.712549), toFIXED(-0.736189), toFIXED(1.452024)},
    {toFIXED(1.415617), toFIXED(2.467504), toFIXED(0.393127)},
    {toFIXED(2.783464), toFIXED(-0.780635), toFIXED(-0.234098)},
    {toFIXED(1.590128), toFIXED(2.064126), toFIXED(-1.171304)},
    {toFIXED(2.677706), toFIXED(-1.172846), toFIXED(0.618655)},
    {toFIXED(2.853151), toFIXED(0.228101), toFIXED(1.432519)},
    {toFIXED(1.900295), toFIXED(2.174605), toFIXED(-0.402027)},
    {toFIXED(2.924066), toFIXED(0.183655), toFIXED(-0.253603)},
    {toFIXED(2.958910), toFIXED(0.688023), toFIXED(0.579705)},
    {toFIXED(1.728142), toFIXED(-1.137771), toFIXED(-0.058219)},
    {toFIXED(2.039275), toFIXED(-1.281293), toFIXED(0.892966)},
    {toFIXED(1.724728), toFIXED(-1.019354), toFIXED(1.373813)},
    {toFIXED(1.780942), toFIXED(0.759165), toFIXED(1.252445)},
    {toFIXED(1.883615), toFIXED(0.247571), toFIXED(-0.784257)},
    {toFIXED(2.371295), toFIXED(0.835842), toFIXED(0.271887)},
    {toFIXED(1.933189), toFIXED(1.603470), toFIXED(-1.116474)},
    {toFIXED(1.467446), toFIXED(-0.372606), toFIXED(-0.485902)},
    {toFIXED(0.631428), toFIXED(-1.322115), toFIXED(-0.086782)},
    {toFIXED(0.931122), toFIXED(0.176946), toFIXED(-1.075112)},
    {toFIXED(2.032880), toFIXED(0.679435), toFIXED(-1.012364)},
    {toFIXED(0.790358), toFIXED(-0.976751), toFIXED(-0.275766)},
    {toFIXED(1.870651), toFIXED(2.047128), toFIXED(-0.786689)},
    {toFIXED(0.648702), toFIXED(-1.627986), toFIXED(1.006041)},
    {toFIXED(0.815521), toFIXED(-2.180863), toFIXED(0.917323)},
    {toFIXED(0.601154), toFIXED(-1.812521), toFIXED(0.037494)},
    {toFIXED(2.065382), toFIXED(1.112561), toFIXED(-1.055863)},
    {toFIXED(0.944361), toFIXED(-0.471650), toFIXED(-0.562018)},
};

static POLYGON polygon_SHOULDER[70] = {
    {{-0.375877, -0.753357, 0.539602}, {50, 56, 55, 49}},
    {{0.853229, -0.383225, 0.353750}, {16, 34, 39, 28}},
    {{0.241062, 0.777297, -0.581119}, {35, 36, 23, 35}},
    {{-0.154126, 0.474230, 0.866805}, {51, 58, 68, 62}},
    {{-0.025558, 0.123710, -0.991989}, {24, 2, 53, 11}},
    {{0.182730, -0.019085, 0.982978}, {1, 16, 28, 1}},
    {{-0.281431, 0.546104, 0.789029}, {60, 58, 55, 61}},
    {{-0.259367, 0.828817, -0.495774}, {46, 52, 53, 42}},
    {{0.000541, 0.267988, -0.963422}, {24, 35, 13, 24}},
    {{0.372450, -0.741913, 0.557536}, {6, 1, 28, 6}},
    {{0.453415, -0.257629, 0.853254}, {28, 9, 6, 28}},
    {{0.928604, -0.064446, 0.365432}, {34, 19, 27, 26}},
    {{-0.853229, -0.383225, 0.353750}, {67, 63, 45, 57}},
    {{0.181191, -0.127917, -0.975093}, {24, 25, 5, 2}},
    {{0.126427, 0.476495, -0.870040}, {35, 24, 11, 36}},
    {{0.989220, -0.127070, 0.072773}, {37, 38, 30, 36}},
    {{0.824485, -0.004426, -0.565867}, {39, 34, 26, 32}},
    {{-0.182730, -0.019085, 0.982978}, {1, 57, 45, 1}},
    {{-0.306173, 0.576737, 0.757385}, {60, 61, 10, 60}},
    {{-0.108745, 0.515233, 0.850123}, {51, 62, 59, 51}},
    {{-0.171064, 0.713192, -0.679775}, {64, 11, 53, 52}},
    {{-0.372450, -0.741913, 0.557536}, {6, 57, 1, 6}},
    {{-0.453415, -0.257629, 0.853254}, {57, 6, 9, 57}},
    {{-0.928604, -0.064446, 0.365432}, {63, 55, 56, 48}},
    {{-0.091413, 0.675647, 0.731536}, {4, 40, 68, 60}},
    {{-0.466877, 0.112742, 0.877106}, {9, 7, 67, 57}},
    {{0.194860, 0.950918, 0.240383}, {30, 22, 23, 36}},
    {{0.340350, 0.583223, 0.737572}, {29, 26, 20, 29}},
    {{0.306173, 0.576738, 0.757385}, {31, 10, 32, 31}},
    {{0.117154, -0.059323, -0.991340}, {47, 42, 53, 54}},
    {{-0.072302, 0.489520, 0.868989}, {8, 0, 59, 62}},
    {{0.108745, 0.515233, 0.850123}, {22, 30, 33, 22}},
    {{-0.225423, 0.601618, 0.766316}, {58, 60, 68, 58}},
    {{0.072302, 0.489520, 0.868989}, {8, 33, 30, 0}},
    {{-0.109541, 0.241695, 0.964149}, {49, 58, 51, 44}},
    {{-0.194855, 0.950921, 0.240375}, {59, 64, 52, 51}},
    {{0.225423, 0.601618, 0.766316}, {29, 41, 31, 29}},
    {{0.152720, 0.133093, 0.979266}, {38, 12, 0, 30}},
    {{-0.989232, -0.126992, 0.072759}, {59, 66, 65, 64}},
    {{-0.793493, -0.432978, -0.427666}, {48, 56, 54, 43}},
    {{-0.260206, -0.895563, -0.360914}, {54, 56, 50, 47}},
    {{-0.059373, 0.563101, 0.824253}, {40, 8, 62, 68}},
    {{-0.392482, 0.367913, 0.842970}, {7, 10, 61, 67}},
    {{0.438977, -0.328224, -0.836402}, {14, 3, 5, 14}},
    {{0.793493, -0.432978, -0.427666}, {19, 14, 25, 27}},
    {{0.178311, 0.937532, 0.298728}, {22, 15, 17, 23}},
    {{-0.340350, 0.583223, 0.737572}, {49, 55, 58, 49}},
    {{0.260206, -0.895563, -0.360915}, {25, 18, 21, 27}},
    {{0.375877, -0.753357, 0.539602}, {26, 27, 21, 20}},
    {{0.392482, 0.367913, 0.842970}, {7, 39, 32, 10}},
    {{0.059373, 0.563101, 0.824253}, {40, 41, 33, 8}},
    {{0.154126, 0.474230, 0.866805}, {22, 33, 41, 29}},
    {{-0.005888, -0.128686, -0.991668}, {18, 25, 24, 13}},
    {{0.259367, 0.828817, -0.495774}, {17, 13, 35, 23}},
    {{-0.167780, -0.061838, -0.983883}, {54, 53, 5, 54}},
    {{0.091413, 0.675647, 0.731536}, {4, 31, 41, 40}},
    {{-0.152528, 0.133386, 0.979257}, {0, 12, 66, 59}},
    {{0.466877, 0.112742, 0.877106}, {9, 28, 39, 7}},
    {{-0.371132, -0.419860, -0.828238}, {3, 43, 54, 5}},
    {{-0.178311, 0.937532, 0.298728}, {51, 52, 46, 44}},
    {{-0.824485, -0.004426, -0.565866}, {67, 61, 55, 63}},
    {{0.281431, 0.546105, 0.789029}, {26, 29, 31, 32}},
    {{-0.239567, -0.111651, -0.964438}, {2, 5, 53, 2}},
    {{0.321844, -0.479487, -0.816400}, {14, 5, 25, 14}},
    {{-0.000000, 0.737937, 0.674869}, {31, 4, 60, 10}},
    {{0.109541, 0.241695, 0.964150}, {20, 15, 22, 29}},
    {{-0.988383, 0.146751, -0.039543}, {50, 46, 42, 47}},
    {{-0.987890, 0.146434, -0.051291}, {44, 46, 50, 49}},
    {{0.988383, 0.146751, -0.039543}, {13, 17, 21, 18}},
    {{0.987890, 0.146434, -0.051291}, {21, 17, 15, 20}},
};

static ATTR attribute_SHOULDER[70] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
};

static jo_3d_mesh mesh_SHOULDER = {
    .data =
        {
            point_SHOULDER,
            69,
            polygon_SHOULDER,
            70,
            attribute_SHOULDER,
        }};

static __jo_force_inline void display_SHOULDER_mesh(void)
{
    jo_3d_mesh_draw(&mesh_SHOULDER);
}

// TORSO
static POINT point_TORSO[28] = {
    {toFIXED(1.649220), toFIXED(0.714764), toFIXED(-0.543970)},
    {toFIXED(1.649220), toFIXED(0.545021), toFIXED(0.854835)},
    {toFIXED(0.000000), toFIXED(0.545737), toFIXED(1.653078)},
    {toFIXED(0.000000), toFIXED(1.568690), toFIXED(-0.966047)},
    {toFIXED(1.419784), toFIXED(-0.995086), toFIXED(1.027879)},
    {toFIXED(1.594294), toFIXED(-1.398464), toFIXED(-0.536551)},
    {toFIXED(1.904462), toFIXED(-1.287985), toFIXED(0.232726)},
    {toFIXED(0.000000), toFIXED(-1.148324), toFIXED(-0.827290)},
    {toFIXED(0.000000), toFIXED(-0.572658), toFIXED(1.605080)},
    {toFIXED(1.534502), toFIXED(0.238378), toFIXED(-0.588278)},
    {toFIXED(1.874817), toFIXED(-1.415462), toFIXED(-0.151936)},
    {toFIXED(1.831998), toFIXED(0.217576), toFIXED(0.221772)},
    {toFIXED(1.522002), toFIXED(0.215109), toFIXED(0.975484)},
    {toFIXED(1.755045), toFIXED(0.009231), toFIXED(-0.170256)},
    {toFIXED(-1.649220), toFIXED(0.714764), toFIXED(-0.543970)},
    {toFIXED(-1.649220), toFIXED(0.545021), toFIXED(0.854835)},
    {toFIXED(-1.419784), toFIXED(-0.995086), toFIXED(1.027879)},
    {toFIXED(-1.594294), toFIXED(-1.398464), toFIXED(-0.536551)},
    {toFIXED(-1.904462), toFIXED(-1.287985), toFIXED(0.232726)},
    {toFIXED(-1.534502), toFIXED(0.238378), toFIXED(-0.588278)},
    {toFIXED(-1.874817), toFIXED(-1.415462), toFIXED(-0.151936)},
    {toFIXED(-1.831998), toFIXED(0.217576), toFIXED(0.221772)},
    {toFIXED(-1.522002), toFIXED(0.215109), toFIXED(0.975484)},
    {toFIXED(-1.766767), toFIXED(-0.025832), toFIXED(-0.179712)},
    {toFIXED(-0.797147), toFIXED(-1.273394), toFIXED(-0.681920)},
    {toFIXED(0.797147), toFIXED(-1.273394), toFIXED(-0.681920)},
    {toFIXED(-0.824610), toFIXED(1.116660), toFIXED(-0.773731)},
    {toFIXED(0.824610), toFIXED(1.116660), toFIXED(-0.773731)},
};

static POLYGON polygon_TORSO[20] = {
    {{0.938321, 0.020826, 0.345138}, {19, 14, 21, 23}},
    {{-0.430171, -0.159091, -0.888618}, {2, 1, 12, 2}},
    {{0.221118, 0.027124, 0.974870}, {24, 26, 14, 19}},
    {{0.844596, -0.032802, 0.534398}, {17, 19, 23, 20}},
    {{-0.937504, 0.042332, 0.345391}, {0, 9, 13, 11}},
    {{-0.852867, -0.038108, 0.520736}, {13, 9, 5, 10}},
    {{0.430171, -0.159091, -0.888618}, {2, 22, 15, 2}},
    {{0.175598, 0.024687, 0.984152}, {17, 24, 19, 17}},
    {{-0.175598, 0.024687, 0.984152}, {5, 9, 25, 5}},
    {{0.889796, -0.000896, -0.456358}, {22, 16, 18, 21}},
    {{-0.188164, 0.045305, 0.981092}, {25, 27, 3, 7}},
    {{-0.984716, -0.062979, 0.162379}, {11, 13, 10, 6}},
    {{0.388971, 0.015335, -0.921122}, {16, 22, 2, 8}},
    {{0.987301, -0.059588, 0.147264}, {21, 18, 20, 23}},
    {{0.188163, 0.045305, 0.981092}, {24, 7, 3, 26}},
    {{-0.903884, 0.212850, -0.371063}, {12, 1, 11, 12}},
    {{-0.889796, -0.000896, -0.456358}, {12, 11, 6, 4}},
    {{0.903885, 0.212849, -0.371063}, {21, 15, 22, 21}},
    {{-0.388971, 0.015335, -0.921122}, {2, 12, 4, 8}},
    {{-0.221118, 0.027124, 0.974870}, {25, 9, 0, 27}},
};

static ATTR attribute_TORSO[20] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
};

static jo_3d_mesh mesh_TORSO = {
    .data =
        {
            point_TORSO,
            28,
            polygon_TORSO,
            20,
            attribute_TORSO,
        }};

static __jo_force_inline void display_TORSO_mesh(void)
{
    jo_3d_mesh_draw(&mesh_TORSO);
}

#endif
