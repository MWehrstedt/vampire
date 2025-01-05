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
static POINT point_HEAD[73] = {
    {toFIXED(-0.000001), toFIXED(-0.840165), toFIXED(2.771977)},
    {toFIXED(-0.000001), toFIXED(-1.756475), toFIXED(2.180417)},
    {toFIXED(-0.000001), toFIXED(-0.705747), toFIXED(-1.434494)},
    {toFIXED(-0.202175), toFIXED(-0.416643), toFIXED(-1.434862)},
    {toFIXED(-0.000001), toFIXED(0.616774), toFIXED(-1.649449)},
    {toFIXED(-0.000001), toFIXED(0.826455), toFIXED(-1.173144)},
    {toFIXED(-0.000001), toFIXED(0.229587), toFIXED(-1.426217)},
    {toFIXED(-0.000001), toFIXED(-0.977876), toFIXED(-1.374916)},
    {toFIXED(-0.000001), toFIXED(-2.065828), toFIXED(1.064038)},
    {toFIXED(-0.000001), toFIXED(-2.115232), toFIXED(-0.034266)},
    {toFIXED(-0.000001), toFIXED(-1.556879), toFIXED(-1.109505)},
    {toFIXED(-1.040719), toFIXED(0.900238), toFIXED(1.782799)},
    {toFIXED(-0.782243), toFIXED(1.312804), toFIXED(0.663187)},
    {toFIXED(-0.617451), toFIXED(1.295367), toFIXED(-1.047957)},
    {toFIXED(-1.155118), toFIXED(0.564609), toFIXED(0.512793)},
    {toFIXED(-0.751967), toFIXED(-0.845439), toFIXED(2.620403)},
    {toFIXED(-0.776738), toFIXED(-1.710779), toFIXED(2.084330)},
    {toFIXED(-0.662038), toFIXED(-0.864222), toFIXED(-1.381944)},
    {toFIXED(-0.223394), toFIXED(0.605439), toFIXED(-1.636649)},
    {toFIXED(-0.425097), toFIXED(0.617164), toFIXED(-1.339988)},
    {toFIXED(-0.865141), toFIXED(0.702792), toFIXED(-1.145450)},
    {toFIXED(-1.117305), toFIXED(0.630838), toFIXED(-0.327077)},
    {toFIXED(-1.286741), toFIXED(-0.113911), toFIXED(-0.064516)},
    {toFIXED(-0.279533), toFIXED(0.215348), toFIXED(-1.394525)},
    {toFIXED(-0.240764), toFIXED(0.093678), toFIXED(-1.202582)},
    {toFIXED(-0.903719), toFIXED(-0.457801), toFIXED(-1.187804)},
    {toFIXED(-0.918435), toFIXED(0.000006), toFIXED(-1.162886)},
    {toFIXED(-0.614787), toFIXED(1.500403), toFIXED(-0.535575)},
    {toFIXED(-1.195287), toFIXED(-0.672334), toFIXED(-0.524432)},
    {toFIXED(-0.714467), toFIXED(-1.174594), toFIXED(-1.352410)},
    {toFIXED(-0.861664), toFIXED(-2.024571), toFIXED(0.899398)},
    {toFIXED(-1.199023), toFIXED(-1.479591), toFIXED(1.832957)},
    {toFIXED(-1.265622), toFIXED(-1.647611), toFIXED(0.392887)},
    {toFIXED(-0.715792), toFIXED(-2.028641), toFIXED(-0.185810)},
    {toFIXED(-0.854826), toFIXED(-1.562271), toFIXED(-0.925471)},
    {toFIXED(-0.000001), toFIXED(3.180703), toFIXED(2.801751)},
    {toFIXED(-0.751967), toFIXED(2.890151), toFIXED(2.649622)},
    {toFIXED(-0.000001), toFIXED(1.290154), toFIXED(-1.110110)},
    {toFIXED(-1.380349), toFIXED(-0.600370), toFIXED(1.834667)},
    {toFIXED(-1.446947), toFIXED(-0.768389), toFIXED(0.394597)},
    {toFIXED(-1.723544), toFIXED(1.631777), toFIXED(1.798874)},
    {toFIXED(-0.000001), toFIXED(1.521536), toFIXED(-0.448927)},
    {toFIXED(0.202173), toFIXED(-0.416643), toFIXED(-1.434862)},
    {toFIXED(1.040797), toFIXED(0.900238), toFIXED(1.782799)},
    {toFIXED(0.782241), toFIXED(1.312804), toFIXED(0.663187)},
    {toFIXED(0.617449), toFIXED(1.295367), toFIXED(-1.047957)},
    {toFIXED(1.155116), toFIXED(0.623967), toFIXED(0.281714)},
    {toFIXED(0.751965), toFIXED(-0.845439), toFIXED(2.620403)},
    {toFIXED(0.776736), toFIXED(-1.710779), toFIXED(2.084330)},
    {toFIXED(0.662036), toFIXED(-0.864222), toFIXED(-1.381944)},
    {toFIXED(0.223393), toFIXED(0.605404), toFIXED(-1.615472)},
    {toFIXED(0.425095), toFIXED(0.617164), toFIXED(-1.339988)},
    {toFIXED(0.865139), toFIXED(0.702792), toFIXED(-1.145450)},
    {toFIXED(1.117303), toFIXED(0.630838), toFIXED(-0.327077)},
    {toFIXED(1.286739), toFIXED(-0.028575), toFIXED(-0.074256)},
    {toFIXED(0.279531), toFIXED(0.215348), toFIXED(-1.394525)},
    {toFIXED(0.240762), toFIXED(0.093678), toFIXED(-1.202582)},
    {toFIXED(0.903717), toFIXED(-0.457801), toFIXED(-1.187804)},
    {toFIXED(0.918433), toFIXED(0.000006), toFIXED(-1.162886)},
    {toFIXED(0.614785), toFIXED(1.500403), toFIXED(-0.535575)},
    {toFIXED(0.861662), toFIXED(-2.024571), toFIXED(0.899398)},
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
    {toFIXED(-0.000001), toFIXED(1.416672), toFIXED(0.417953)},
    {toFIXED(-1.446583), toFIXED(1.057525), toFIXED(0.933456)},
};

static POLYGON polygon_HEAD[86] = {
    {{0.889433, -0.453958, 0.053204}, {14, 27, 12, 14}},
    {{0.792819, 0.112292, -0.599023}, {40, 15, 38, 40}},
    {{0.114994, -0.049249, 0.992145}, {3, 6, 23, 3}},
    {{0.129604, -0.765585, 0.630145}, {5, 20, 19, 5}},
    {{0.882160, -0.407560, 0.235985}, {13, 21, 20, 13}},
    {{0.954582, -0.079513, 0.287143}, {21, 26, 20, 21}},
    {{0.810712, 0.220061, 0.542513}, {18, 19, 23, 18}},
    {{0.984755, 0.128051, -0.117734}, {23, 24, 3, 23}},
    {{0.891158, -0.451998, 0.039178}, {11, 14, 12, 11}},
    {{0.836611, -0.089903, 0.540370}, {17, 28, 29, 17}},
    {{-0.014475, -0.008848, 0.999856}, {3, 2, 6, 3}},
    {{-0.230026, -0.122188, 0.965483}, {57, 42, 2, 49}},
    {{0.722517, 0.637953, 0.266430}, {32, 33, 34, 32}},
    {{0.914568, 0.007389, 0.404364}, {26, 28, 25, 26}},
    {{0.891619, 0.148320, 0.427805}, {28, 34, 29, 28}},
    {{0.976755, -0.212627, 0.027209}, {21, 14, 22, 21}},
    {{-0.868189, -0.494286, 0.043925}, {59, 46, 44, 59}},
    {{-0.654417, 0.005914, -0.756111}, {68, 47, 65, 68}},
    {{-0.114994, -0.049249, 0.992145}, {42, 55, 6, 42}},
    {{-0.107239, -0.909961, 0.400588}, {50, 5, 4, 50}},
    {{-0.129604, -0.765585, 0.630145}, {5, 51, 52, 5}},
    {{-0.820992, -0.569197, 0.044569}, {45, 53, 46, 45}},
    {{-0.793151, 0.209728, 0.571774}, {50, 55, 51, 50}},
    {{-0.984755, 0.128051, -0.117734}, {56, 55, 42, 56}},
    {{-0.026335, 0.213795, 0.976524}, {7, 49, 2, 7}},
    {{-0.873845, -0.485669, 0.022836}, {43, 44, 46, 43}},
    {{-0.666220, 0.348820, -0.659147}, {61, 47, 66, 61}},
    {{0.014475, -0.008848, 0.999856}, {42, 6, 2, 42}},
    {{-0.636505, 0.766828, 0.082683}, {62, 63, 60, 62}},
    {{-0.779972, 0.177096, 0.600234}, {57, 49, 64, 57}},
    {{-0.972037, -0.227602, 0.057806}, {53, 54, 46, 53}},
    {{0.966173, 0.151892, 0.208418}, {38, 72, 40, 38}},
    {{0.964487, -0.054842, 0.258376}, {22, 39, 28, 22}},
    {{0.987525, -0.149495, -0.049446}, {11, 22, 14, 11}},
    {{0.918055, -0.369699, 0.143167}, {14, 13, 27, 14}},
    {{0.049996, 0.510373, 0.858499}, {4, 18, 23, 6}},
    {{0.654417, 0.005914, -0.756111}, {40, 36, 15, 40}},
    {{0.977048, 0.201634, -0.068711}, {32, 39, 38, 31}},
    {{0.998860, -0.013693, 0.045725}, {39, 22, 72, 38}},
    {{0.792594, -0.609624, -0.012388}, {13, 14, 21, 13}},
    {{0.055132, 0.871265, 0.487707}, {34, 33, 9, 10}},
    {{0.196529, 0.007457, -0.980470}, {15, 36, 35, 0}},
    {{0.940974, 0.337631, 0.023959}, {23, 19, 24, 23}},
    {{-0.947494, -0.102587, 0.302872}, {54, 53, 52, 58}},
    {{-0.882728, 0.275833, 0.380404}, {62, 67, 57, 64}},
    {{-0.202900, 0.116796, 0.972209}, {52, 51, 56, 58}},
    {{0.230026, -0.122188, 0.965483}, {25, 17, 2, 3}},
    {{0.234888, -0.916500, 0.323813}, {19, 18, 4, 5}},
    {{-0.092880, 0.960197, -0.263428}, {60, 8, 1, 48}},
    {{-0.055132, 0.871265, 0.487707}, {64, 10, 9, 63}},
    {{-0.668884, 0.721392, -0.179411}, {62, 60, 48, 61}},
    {{0.073217, -0.988274, -0.133989}, {41, 71, 12, 27}},
    {{0.841983, 0.280573, 0.460808}, {17, 25, 28, 17}},
    {{0.735449, 0.259008, -0.626123}, {38, 15, 16, 31}},
    {{-0.196529, 0.007457, -0.980470}, {35, 65, 47, 0}},
    {{0.623876, 0.777321, 0.080946}, {32, 30, 33, 32}},
    {{-0.005181, -0.937280, 0.348538}, {41, 37, 45, 59}},
    {{-0.084501, 0.996247, -0.018752}, {63, 9, 8, 60}},
    {{-0.899591, -0.407067, 0.158217}, {59, 45, 46, 59}},
    {{0.092880, 0.960197, -0.263428}, {30, 16, 1, 8}},
    {{-0.656411, 0.007274, -0.754368}, {68, 66, 47, 68}},
    {{0.149451, 0.527310, -0.836426}, {16, 15, 0, 1}},
    {{-0.332484, -0.900007, 0.281855}, {50, 51, 5, 50}},
    {{-0.882160, -0.407560, 0.235985}, {45, 52, 53, 45}},
    {{-0.072896, -0.166536, 0.983337}, {52, 45, 37, 5}},
    {{-0.913225, 0.065540, 0.402151}, {67, 69, 70, 57}},
    {{-0.940974, 0.337631, 0.023958}, {56, 51, 55, 56}},
    {{0.220006, -0.239135, 0.945733}, {3, 24, 26, 25}},
    {{0.072896, -0.166536, 0.983337}, {37, 13, 20, 5}},
    {{0.680571, 0.712665, -0.170093}, {32, 31, 16, 30}},
    {{-0.620514, 0.400067, -0.674469}, {61, 48, 47, 61}},
    {{0.084501, 0.996247, -0.018752}, {33, 30, 8, 9}},
    {{-0.220006, -0.239135, 0.945733}, {58, 56, 42, 57}},
    {{0.946241, -0.103056, 0.306606}, {21, 22, 28, 26}},
    {{0.933060, 0.208453, 0.293165}, {39, 32, 34, 28}},
    {{0.015232, 0.149866, 0.988589}, {2, 17, 29, 7}},
    {{0.202900, 0.116796, 0.972209}, {24, 19, 20, 26}},
    {{-0.088362, 0.489414, 0.867564}, {55, 50, 4, 6}},
    {{-0.745725, 0.617824, 0.249375}, {62, 64, 63, 62}},
    {{-0.149451, 0.527310, -0.836426}, {48, 1, 0, 47}},
    {{-0.881791, 0.460193, -0.103284}, {66, 67, 62, 61}},
    {{0.005181, -0.937280, 0.348538}, {13, 37, 41, 27}},
    {{-0.073217, -0.988274, -0.133989}, {44, 71, 41, 59}},
    {{-0.135344, 0.472004, 0.871146}, {64, 49, 7, 10}},
    {{0.032691, 0.578823, 0.814798}, {7, 29, 34, 10}},
    {{-0.998286, 0.027338, -0.051742}, {68, 69, 67, 66}},
};

static ATTR attribute_HEAD[86] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(19, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(17, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // FlamingRed
};

static jo_3d_mesh mesh_HEAD = {
    .data =
        {
            point_HEAD,
            73,
            polygon_HEAD,
            86,
            attribute_HEAD,
        }};

static __jo_force_inline void display_HEAD_mesh(void)
{
   jo_3d_mesh_draw(&mesh_HEAD);
}

// L_CALF
static POINT point_L_CALF[53] = {
    {toFIXED(0.336264), toFIXED(-4.805432), toFIXED(1.405907)},
    {toFIXED(1.080781), toFIXED(-4.653266), toFIXED(1.080327)},
    {toFIXED(-0.971955), toFIXED(-4.717501), toFIXED(0.621401)},
    {toFIXED(-0.472135), toFIXED(-4.819920), toFIXED(1.517767)},
    {toFIXED(-0.929962), toFIXED(-4.440288), toFIXED(-0.977680)},
    {toFIXED(0.570078), toFIXED(-3.478787), toFIXED(1.495759)},
    {toFIXED(-0.289544), toFIXED(-2.841201), toFIXED(-0.445306)},
    {toFIXED(1.007310), toFIXED(-2.846823), toFIXED(-0.348016)},
    {toFIXED(1.276194), toFIXED(-2.599082), toFIXED(1.172497)},
    {toFIXED(-1.067649), toFIXED(-3.391396), toFIXED(0.716080)},
    {toFIXED(-0.233347), toFIXED(-3.493184), toFIXED(1.606930)},
    {toFIXED(-1.025913), toFIXED(-3.106674), toFIXED(0.038714)},
    {toFIXED(-0.896142), toFIXED(-4.045136), toFIXED(-0.029189)},
    {toFIXED(-0.938136), toFIXED(-4.290546), toFIXED(0.668215)},
    {toFIXED(1.080781), toFIXED(-4.016988), toFIXED(1.122582)},
    {toFIXED(-0.438316), toFIXED(-4.347158), toFIXED(1.438750)},
    {toFIXED(0.370083), toFIXED(-4.338652), toFIXED(1.338075)},
    {toFIXED(-0.494860), toFIXED(-3.852951), toFIXED(-0.897152)},
    {toFIXED(0.810023), toFIXED(-3.807300), toFIXED(-0.433185)},
    {toFIXED(0.612322), toFIXED(-2.126440), toFIXED(1.907183)},
    {toFIXED(-0.372903), toFIXED(-1.559715), toFIXED(-0.364828)},
    {toFIXED(1.113440), toFIXED(-1.558020), toFIXED(-0.253149)},
    {toFIXED(1.460373), toFIXED(-1.980593), toFIXED(1.524684)},
    {toFIXED(-0.877822), toFIXED(-2.091651), toFIXED(1.008659)},
    {toFIXED(-0.308495), toFIXED(-2.133615), toFIXED(2.035461)},
    {toFIXED(-0.829989), toFIXED(-1.822755), toFIXED(0.210607)},
    {toFIXED(0.354613), toFIXED(0.579327), toFIXED(1.392414)},
    {toFIXED(-0.626561), toFIXED(1.267347), toFIXED(-0.354346)},
    {toFIXED(0.592818), toFIXED(1.262453), toFIXED(-0.269648)},
    {toFIXED(0.856342), toFIXED(0.682469), toFIXED(1.181925)},
    {toFIXED(-0.777275), toFIXED(0.626889), toFIXED(0.784858)},
    {toFIXED(-0.344824), toFIXED(0.566786), toFIXED(1.489197)},
    {toFIXED(-0.740942), toFIXED(0.874761), toFIXED(0.195163)},
    {toFIXED(0.220142), toFIXED(3.935792), toFIXED(1.755507)},
    {toFIXED(-0.800850), toFIXED(3.936403), toFIXED(0.347964)},
    {toFIXED(0.798853), toFIXED(3.936380), toFIXED(0.399928)},
    {toFIXED(0.592491), toFIXED(3.935872), toFIXED(1.572763)},
    {toFIXED(-0.753261), toFIXED(3.936235), toFIXED(0.734777)},
    {toFIXED(-0.415874), toFIXED(3.935811), toFIXED(1.713541)},
    {toFIXED(0.518091), toFIXED(3.121386), toFIXED(-3.190279)},
    {toFIXED(-0.713245), toFIXED(3.173770), toFIXED(-3.298701)},
    {toFIXED(0.336035), toFIXED(3.938043), toFIXED(-3.431657)},
    {toFIXED(-0.665247), toFIXED(3.938082), toFIXED(-3.523330)},
    {toFIXED(-0.864521), toFIXED(3.936983), toFIXED(-0.989542)},
    {toFIXED(0.736355), toFIXED(3.936977), toFIXED(-0.975141)},
    {toFIXED(-0.732396), toFIXED(2.634168), toFIXED(-1.628001)},
    {toFIXED(0.877748), toFIXED(2.653008), toFIXED(-1.543295)},
    {toFIXED(-0.828082), toFIXED(3.937592), toFIXED(-2.392659)},
    {toFIXED(-0.805012), toFIXED(2.996039), toFIXED(-2.513388)},
    {toFIXED(0.884963), toFIXED(2.976255), toFIXED(-2.428694)},
    {toFIXED(0.872170), toFIXED(3.937567), toFIXED(-2.336353)},
    {toFIXED(1.080781), toFIXED(-3.470632), toFIXED(1.122819)},
    {toFIXED(0.776204), toFIXED(-4.455588), toFIXED(-0.987518)},
};

static POLYGON polygon_L_CALF[55] = {
    {{-0.515396, 0.100988, -0.850981}, {14, 5, 8, 14}},
    {{0.996124, -0.082305, 0.031019}, {2, 12, 13, 2}},
    {{-0.421431, 0.540254, -0.728369}, {8, 19, 22, 8}},
    {{0.977726, 0.008666, 0.209705}, {32, 27, 34, 32}},
    {{0.000000, -1.000000, -0.000434}, {33, 37, 36, 33}},
    {{0.985193, 0.000074, -0.171448}, {18, 51, 14, 18}},
    {{-0.987986, -0.067384, 0.139081}, {1, 18, 52, 1}},
    {{-0.768551, 0.599852, -0.222502}, {17, 4, 12, 17}},
    {{-0.971104, 0.198395, 0.132652}, {18, 51, 8, 7}},
    {{-0.000000, -1.000000, -0.000434}, {36, 37, 34, 35}},
    {{-0.996382, -0.047738, -0.070316}, {44, 50, 49, 46}},
    {{-0.997245, 0.036484, -0.064584}, {44, 46, 28, 35}},
    {{-0.383505, 0.252126, -0.888457}, {14, 16, 5, 14}},
    {{0.685127, -0.101028, 0.721384}, {20, 25, 11, 6}},
    {{-0.202560, -0.218567, 0.954567}, {7, 6, 17, 18}},
    {{-0.416685, 0.078193, -0.905682}, {33, 36, 29, 26}},
    {{0.860542, -0.081648, -0.502793}, {30, 31, 24, 23}},
    {{0.994506, -0.104373, 0.008023}, {2, 4, 12, 2}},
    {{0.781941, -0.188630, 0.594126}, {6, 11, 12, 17}},
    {{-0.637069, 0.242495, -0.731668}, {8, 5, 19, 8}},
    {{-0.999736, -0.013128, 0.018872}, {29, 36, 35, 28}},
    {{-0.130269, 0.214820, -0.967927}, {15, 10, 5, 16}},
    {{-0.000000, -1.000000, -0.000434}, {43, 47, 50, 44}},
    {{-0.362113, -0.203417, -0.909668}, {19, 26, 29, 22}},
    {{-0.976605, 0.104611, 0.187882}, {22, 21, 7, 8}},
    {{-0.135151, 0.291650, -0.946929}, {24, 19, 5, 10}},
    {{-0.079385, 0.275642, 0.957977}, {39, 41, 42, 40}},
    {{0.805207, 0.122601, -0.580182}, {9, 23, 24, 10}},
    {{0.131749, 0.413009, -0.901147}, {4, 17, 18, 52}},
    {{-0.047185, 0.679468, 0.732186}, {46, 45, 27, 28}},
    {{0.988914, -0.148429, 0.004340}, {25, 23, 9, 11}},
    {{0.851187, -0.082543, -0.518332}, {13, 15, 3, 2}},
    {{0.985027, 0.131999, 0.110893}, {11, 9, 13, 12}},
    {{-0.072395, -0.008863, 0.997337}, {21, 28, 27, 20}},
    {{0.998292, -0.032811, 0.048328}, {32, 30, 23, 25}},
    {{0.999933, 0.005796, -0.010054}, {34, 37, 30, 32}},
    {{0.996261, 0.083864, -0.020756}, {27, 45, 43, 34}},
    {{-0.041664, 0.085675, -0.995452}, {38, 33, 26, 31}},
    {{-0.973552, -0.191510, 0.124578}, {28, 21, 22, 29}},
    {{0.010807, 0.979231, 0.202458}, {49, 39, 40, 48}},
    {{0.909488, 0.017244, -0.415372}, {37, 38, 31, 30}},
    {{0.997499, 0.070530, -0.004597}, {48, 47, 43, 45}},
    {{0.780998, 0.043165, -0.623040}, {13, 9, 10, 15}},
    {{0.991344, -0.006500, 0.131128}, {48, 40, 42, 47}},
    {{0.884849, 0.026783, 0.465108}, {27, 32, 25, 20}},
    {{-0.018283, 0.932246, 0.361362}, {46, 49, 48, 45}},
    {{-0.345286, -0.011173, -0.938431}, {0, 16, 14, 1}},
    {{-0.074797, -0.067211, 0.994931}, {21, 20, 6, 7}},
    {{-0.899466, -0.062318, 0.432525}, {41, 39, 49, 50}},
    {{-0.126953, -0.144247, -0.981364}, {3, 15, 16, 0}},
    {{-0.000000, -1.000000, -0.000434}, {42, 41, 50, 47}},
    {{0.000000, -1.000000, -0.000434}, {43, 44, 35, 34}},
    {{-0.000000, -1.000000, -0.000434}, {33, 38, 37, 33}},
    {{-0.984949, -0.006206, 0.172733}, {1, 51, 18, 1}},
    {{-0.132503, -0.197826, -0.971240}, {31, 26, 19, 24}},
};

static ATTR attribute_L_CALF[55] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
};

static jo_3d_mesh mesh_L_CALF = {
    .data =
        {
            point_L_CALF,
            53,
            polygon_L_CALF,
            55,
            attribute_L_CALF,
        }};

static __jo_force_inline void display_L_CALF_mesh(void)
{
   jo_3d_mesh_draw(&mesh_L_CALF);
}

// L_FARM
static POINT point_L_FARM[42] = {
    {toFIXED(-3.579432), toFIXED(-0.654883), toFIXED(0.146185)},
    {toFIXED(-3.567194), toFIXED(0.744976), toFIXED(-0.014888)},
    {toFIXED(-3.567194), toFIXED(-0.667285), toFIXED(-0.425316)},
    {toFIXED(-3.792357), toFIXED(-0.325764), toFIXED(0.610720)},
    {toFIXED(-3.585990), toFIXED(0.557562), toFIXED(0.406970)},
    {toFIXED(-3.567194), toFIXED(0.146661), toFIXED(-0.700769)},
    {toFIXED(-2.254508), toFIXED(-0.791383), toFIXED(0.444722)},
    {toFIXED(-1.895597), toFIXED(0.855681), toFIXED(-0.115798)},
    {toFIXED(-2.291425), toFIXED(-0.814451), toFIXED(-0.693220)},
    {toFIXED(-2.142071), toFIXED(-0.391230), toFIXED(1.290398)},
    {toFIXED(-2.234196), toFIXED(0.685690), toFIXED(0.991602)},
    {toFIXED(-2.404709), toFIXED(0.187542), toFIXED(-1.073615)},
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
    {toFIXED(2.880743), toFIXED(1.111256), toFIXED(-0.279018)},
    {toFIXED(2.514689), toFIXED(-0.714244), toFIXED(-0.813129)},
    {toFIXED(2.755090), toFIXED(-0.184751), toFIXED(0.699750)},
    {toFIXED(2.688464), toFIXED(0.741154), toFIXED(0.483723)},
    {toFIXED(2.409929), toFIXED(0.376622), toFIXED(-1.164834)},
    {toFIXED(3.685885), toFIXED(-0.281989), toFIXED(0.042179)},
    {toFIXED(3.722344), toFIXED(0.803277), toFIXED(-0.268416)},
    {toFIXED(3.502953), toFIXED(-0.290827), toFIXED(-0.588534)},
    {toFIXED(3.209682), toFIXED(-0.262711), toFIXED(0.563697)},
    {toFIXED(3.169748), toFIXED(0.292176), toFIXED(0.574521)},
    {toFIXED(3.440167), toFIXED(0.362978), toFIXED(-0.799326)},
    {toFIXED(-1.279149), toFIXED(0.937802), toFIXED(-0.119428)},
    {toFIXED(-1.584140), toFIXED(0.751678), toFIXED(0.878042)},
    {toFIXED(-1.501159), toFIXED(-0.428024), toFIXED(1.147089)},
    {toFIXED(-1.530390), toFIXED(-0.866450), toFIXED(0.385317)},
    {toFIXED(-1.635689), toFIXED(-0.888973), toFIXED(-0.639677)},
    {toFIXED(-1.737729), toFIXED(0.205798), toFIXED(-0.982232)},
};

static POLYGON polygon_L_FARM[41] = {
    {{-0.738606, -0.040029, -0.672948}, {34, 30, 33, 34}},
    {{-0.468557, 0.756760, -0.455817}, {24, 33, 30, 24}},
    {{-0.287028, -0.001971, -0.957920}, {27, 34, 33, 27}},
    {{0.247626, 0.744076, -0.620510}, {21, 27, 24, 18}},
    {{-0.090012, 0.316364, 0.944358}, {40, 41, 11, 8}},
    {{-0.256113, -0.237075, -0.937124}, {16, 22, 21, 15}},
    {{-0.116624, -0.733140, 0.670003}, {17, 23, 19, 13}},
    {{0.003916, 0.886457, -0.462795}, {9, 38, 39, 6}},
    {{0.430587, 0.314145, 0.846113}, {20, 26, 29, 23}},
    {{-0.192544, -0.953283, -0.232761}, {19, 22, 16, 13}},
    {{-0.319512, 0.262837, 0.910400}, {26, 32, 35, 29}},
    {{-0.199847, -0.233407, -0.951621}, {37, 16, 15, 38}},
    {{0.483900, -0.782528, 0.391780}, {23, 29, 25, 19}},
    {{0.108661, 0.993831, -0.022190}, {6, 8, 2, 0}},
    {{0.109195, -0.973290, -0.201949}, {7, 10, 4, 1}},
    {{-0.118489, 0.294366, 0.948319}, {20, 23, 17, 14}},
    {{0.380197, -0.250418, -0.890360}, {4, 10, 9, 3}},
    {{-0.158530, 0.852840, -0.497526}, {38, 15, 12, 39}},
    {{0.021220, -0.797934, 0.602371}, {11, 41, 36, 7}},
    {{0.139484, -0.804817, 0.576901}, {5, 11, 7, 1}},
    {{-0.255126, -0.673284, 0.693974}, {29, 35, 31, 25}},
    {{-0.183275, -0.253245, -0.949883}, {10, 37, 38, 9}},
    {{0.277972, 0.955977, -0.094022}, {24, 26, 20, 18}},
    {{-0.139079, 0.990253, 0.007510}, {12, 14, 40, 39}},
    {{-0.936024, 0.087993, 0.340759}, {31, 35, 32, 30}},
    {{-0.411978, 0.904912, 0.106808}, {30, 32, 26, 24}},
    {{-0.134104, -0.722541, 0.678197}, {41, 17, 13, 36}},
    {{-0.227544, 0.827099, -0.513936}, {15, 21, 18, 12}},
    {{-0.373332, -0.729262, -0.573411}, {31, 34, 28, 25}},
    {{-0.784366, -0.146175, -0.602829}, {34, 31, 30, 34}},
    {{0.102722, -0.985463, -0.135319}, {36, 37, 10, 7}},
    {{-0.111433, 0.654799, -0.747544}, {24, 27, 33, 24}},
    {{-0.188270, -0.953884, -0.233795}, {13, 16, 37, 36}},
    {{-0.030238, -0.229171, -0.972916}, {27, 28, 34, 27}},
    {{0.210685, 0.860932, -0.463042}, {9, 6, 0, 3}},
    {{0.275222, -0.199612, -0.940430}, {28, 27, 21, 22}},
    {{-0.177035, 0.983488, 0.037560}, {18, 20, 14, 12}},
    {{-0.118481, 0.289892, 0.949697}, {14, 17, 41, 40}},
    {{0.434070, -0.875258, -0.213323}, {25, 28, 22, 19}},
    {{0.252722, 0.342568, 0.904864}, {8, 11, 5, 2}},
    {{0.107619, 0.993797, -0.028023}, {39, 40, 8, 6}},
};

static ATTR attribute_L_FARM[41] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
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
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Hair
};

static jo_3d_mesh mesh_L_FARM = {
    .data =
        {
            point_L_FARM,
            42,
            polygon_L_FARM,
            41,
            attribute_L_FARM,
        }};

static __jo_force_inline void display_L_FARM_mesh(void)
{
   jo_3d_mesh_draw(&mesh_L_FARM);
}

// L_THIGH
static POINT point_L_THIGH[19] = {
    {toFIXED(-1.245872), toFIXED(-1.243936), toFIXED(-1.537658)},
    {toFIXED(-0.926484), toFIXED(-1.083841), toFIXED(1.537456)},
    {toFIXED(-1.260912), toFIXED(-1.116270), toFIXED(-0.021571)},
    {toFIXED(0.611451), toFIXED(-1.279333), toFIXED(1.292717)},
    {toFIXED(0.703669), toFIXED(-2.205879), toFIXED(-0.740169)},
    {toFIXED(1.396677), toFIXED(-2.720203), toFIXED(0.104774)},
    {toFIXED(0.262351), toFIXED(3.107132), toFIXED(0.960451)},
    {toFIXED(-0.469526), toFIXED(2.229676), toFIXED(-0.967008)},
    {toFIXED(0.634608), toFIXED(2.227699), toFIXED(-0.612667)},
    {toFIXED(0.892328), toFIXED(2.220464), toFIXED(0.683864)},
    {toFIXED(-0.746291), toFIXED(3.110843), toFIXED(0.295325)},
    {toFIXED(1.495339), toFIXED(-1.699971), toFIXED(0.419149)},
    {toFIXED(-1.026258), toFIXED(0.150425), toFIXED(0.934599)},
    {toFIXED(0.748207), toFIXED(-0.643550), toFIXED(1.182479)},
    {toFIXED(1.002515), toFIXED(-1.172675), toFIXED(-0.847012)},
    {toFIXED(-0.788303), toFIXED(-0.498949), toFIXED(-1.435024)},
    {toFIXED(-0.809073), toFIXED(2.225855), toFIXED(-0.282183)},
    {toFIXED(-1.178096), toFIXED(0.322168), toFIXED(-0.227475)},
    {toFIXED(0.703669), toFIXED(-2.205879), toFIXED(-0.740169)},
};

static POLYGON polygon_L_THIGH[15] = {
    {{-0.761795, -0.073716, -0.643610}, {13, 9, 11, 13}},
    {{0.995724, -0.088316, 0.027090}, {12, 16, 10, 12}},
    {{-0.600348, 0.287959, -0.746097}, {3, 11, 5, 3}},
    {{-0.957381, -0.144038, 0.250347}, {8, 14, 11, 9}},
    {{-0.842490, 0.109788, 0.527406}, {5, 11, 14, 4}},
    {{-0.534544, -0.118777, -0.836753}, {13, 6, 9, 13}},
    {{0.969014, -0.192295, -0.155032}, {12, 17, 16, 12}},
    {{0.892722, -0.169792, 0.417395}, {15, 7, 16, 17}},
    {{0.949438, -0.224605, 0.219363}, {0, 15, 17, 2}},
    {{-0.104430, -0.352547, -0.929949}, {3, 1, 12, 13}},
    {{-0.696550, 0.025496, -0.717055}, {3, 13, 11, 3}},
    {{-0.330784, -0.110059, 0.937267}, {14, 8, 7, 15}},
    {{0.982862, -0.047651, -0.178079}, {17, 12, 1, 2}},
    {{0.280103, -0.113741, -0.953208}, {13, 12, 10, 6}},
    {{-0.294925, 0.127698, 0.946949}, {14, 15, 0, 4}},
};

static ATTR attribute_L_THIGH[15] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
};

static jo_3d_mesh mesh_L_THIGH = {
    .data =
        {
            point_L_THIGH,
            19,
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
    {toFIXED(-1.133999), toFIXED(0.223016), toFIXED(0.640793)},
    {toFIXED(-1.308456), toFIXED(-0.894514), toFIXED(-0.712311)},
    {toFIXED(-1.328988), toFIXED(-1.064497), toFIXED(0.300872)},
    {toFIXED(-0.872086), toFIXED(0.168378), toFIXED(0.887855)},
    {toFIXED(-1.133999), toFIXED(0.626831), toFIXED(-0.511284)},
    {toFIXED(-0.872086), toFIXED(0.866341), toFIXED(-0.053948)},
    {toFIXED(1.236641), toFIXED(-0.660961), toFIXED(0.082964)},
    {toFIXED(1.236641), toFIXED(0.855675), toFIXED(-0.243484)},
    {toFIXED(1.236641), toFIXED(-0.674191), toFIXED(-0.571846)},
    {toFIXED(1.236641), toFIXED(-0.304499), toFIXED(0.570125)},
    {toFIXED(1.236641), toFIXED(0.651702), toFIXED(0.399654)},
    {toFIXED(1.236641), toFIXED(0.206712), toFIXED(-0.789387)},
};

static POLYGON polygon_L_UARM[8] = {
    {{-0.068242, -0.175104, -0.982182}, {0, 10, 9, 0}},
    {{-0.123672, 0.270774, -0.954666}, {0, 6, 2, 0}},
    {{0.028184, 0.004825, 0.999591}, {1, 8, 11, 4}},
    {{-0.132742, 0.928754, 0.346114}, {0, 3, 10, 0}},
    {{0.017922, -0.868987, -0.494511}, {7, 10, 3, 5}},
    {{0.159893, 0.796645, -0.582916}, {0, 9, 6, 0}},
    {{-0.002706, -0.748276, 0.663383}, {4, 11, 7, 5}},
    {{-0.119296, 0.988639, 0.091441}, {2, 6, 8, 1}},
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
    {toFIXED(1.647912), toFIXED(-3.153832), toFIXED(-0.464583)},
    {toFIXED(2.387592), toFIXED(1.516777), toFIXED(1.035059)},
    {toFIXED(2.387592), toFIXED(1.038013), toFIXED(-1.381051)},
    {toFIXED(2.009315), toFIXED(-2.836164), toFIXED(-1.125521)},
    {toFIXED(1.750079), toFIXED(-2.131444), toFIXED(0.564907)},
    {toFIXED(-0.001308), toFIXED(-0.766146), toFIXED(1.569408)},
    {toFIXED(-0.001308), toFIXED(-3.531417), toFIXED(0.334000)},
    {toFIXED(3.116129), toFIXED(0.957738), toFIXED(-0.376910)},
    {toFIXED(-0.001308), toFIXED(-1.254303), toFIXED(-2.271833)},
    {toFIXED(2.700792), toFIXED(-1.054680), toFIXED(-0.295753)},
    {toFIXED(-0.001308), toFIXED(-2.796803), toFIXED(0.864054)},
    {toFIXED(-0.001308), toFIXED(1.656433), toFIXED(-2.328805)},
    {toFIXED(-0.001308), toFIXED(0.231141), toFIXED(1.536343)},
    {toFIXED(-0.001308), toFIXED(-1.920889), toFIXED(1.374298)},
    {toFIXED(1.828614), toFIXED(-1.438871), toFIXED(0.956234)},
    {toFIXED(1.020203), toFIXED(1.843499), toFIXED(1.269191)},
    {toFIXED(-1.650529), toFIXED(-2.158339), toFIXED(-1.900436)},
    {toFIXED(-1.650529), toFIXED(-0.746240), toFIXED(1.174770)},
    {toFIXED(-1.650529), toFIXED(-3.153832), toFIXED(-0.464583)},
    {toFIXED(-2.390209), toFIXED(1.516777), toFIXED(1.035059)},
    {toFIXED(-2.390209), toFIXED(1.038013), toFIXED(-1.381051)},
    {toFIXED(-2.011932), toFIXED(-2.836164), toFIXED(-1.125521)},
    {toFIXED(-1.752696), toFIXED(-2.131444), toFIXED(0.564907)},
    {toFIXED(-3.080804), toFIXED(0.957738), toFIXED(-0.376910)},
    {toFIXED(-2.703409), toFIXED(-1.054680), toFIXED(-0.295753)},
    {toFIXED(-1.831231), toFIXED(-1.438871), toFIXED(0.956234)},
    {toFIXED(-1.022820), toFIXED(1.843499), toFIXED(1.269191)},
};

static POLYGON polygon_LOWER[32] = {
    {{-0.815180, 0.352238, -0.459794}, {11, 6, 16, 11}},
    {{0.249083, 0.188348, -0.949991}, {7, 15, 27, 19}},
    {{0.815180, 0.352238, -0.459794}, {26, 27, 24, 26}},
    {{-0.198910, -0.012484, -0.979938}, {3, 1, 14, 17}},
    {{0.804861, 0.173822, 0.567437}, {26, 22, 25, 26}},
    {{-0.788094, 0.186312, 0.586682}, {11, 9, 4, 11}},
    {{-0.863024, 0.104808, 0.494171}, {11, 0, 5, 11}},
    {{0.863024, 0.104808, 0.494171}, {18, 26, 23, 18}},
    {{0.000000, 0.901301, 0.433194}, {2, 23, 20, 2}},
    {{0.000000, 0.380004, 0.924985}, {0, 10, 18, 0}},
    {{0.000000, 0.904040, 0.427447}, {20, 8, 2, 20}},
    {{0.000000, 0.752685, 0.658381}, {18, 5, 0, 18}},
    {{0.000000, -0.163462, -0.986550}, {17, 14, 28, 17}},
    {{0.198910, -0.012484, -0.979938}, {21, 28, 14, 19}},
    {{0.318368, 0.484345, -0.814894}, {12, 24, 27, 15}},
    {{0.232229, -0.032230, -0.972127}, {19, 14, 7, 19}},
    {{0.406731, 0.619557, -0.671356}, {24, 12, 8, 20}},
    {{-0.406731, 0.619557, -0.671356}, {6, 2, 8, 12}},
    {{0.815340, 0.184682, -0.548738}, {21, 19, 26, 25}},
    {{-0.815721, -0.030562, -0.577638}, {11, 16, 1, 11}},
    {{0.321484, -0.032718, 0.946350}, {13, 22, 18, 10}},
    {{0.000000, 0.821806, 0.569767}, {5, 18, 23, 2}},
    {{-0.318369, 0.484345, -0.814894}, {16, 6, 12, 15}},
    {{-0.249083, 0.188348, -0.949991}, {7, 1, 16, 15}},
    {{0.815721, -0.030561, -0.577638}, {19, 27, 26, 19}},
    {{-0.838181, 0.445692, -0.314343}, {11, 5, 2, 6}},
    {{-0.866206, 0.121701, 0.484640}, {11, 4, 0, 11}},
    {{-0.321484, -0.032718, 0.946350}, {0, 4, 13, 10}},
    {{0.866206, 0.121701, 0.484640}, {18, 22, 26, 18}},
    {{0.838181, 0.445692, -0.314343}, {20, 23, 26, 24}},
    {{-0.232229, -0.032230, -0.972127}, {1, 7, 14, 1}},
    {{-0.808661, 0.189695, -0.556851}, {9, 11, 1, 3}},
};

static ATTR attribute_LOWER[32] = {
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
            32,
            attribute_LOWER,
        }};

static __jo_force_inline void display_LOWER_mesh(void)
{
   jo_3d_mesh_draw(&mesh_LOWER);
}

// R_CALF
static POINT point_R_CALF[53] = {
    {toFIXED(-0.336264), toFIXED(-4.805432), toFIXED(1.405907)},
    {toFIXED(-1.080781), toFIXED(-4.653266), toFIXED(1.080327)},
    {toFIXED(0.971955), toFIXED(-4.717501), toFIXED(0.621401)},
    {toFIXED(0.472135), toFIXED(-4.819920), toFIXED(1.517767)},
    {toFIXED(0.929962), toFIXED(-4.440288), toFIXED(-0.977680)},
    {toFIXED(-0.570078), toFIXED(-3.478787), toFIXED(1.495759)},
    {toFIXED(0.289543), toFIXED(-2.841201), toFIXED(-0.445306)},
    {toFIXED(-1.007310), toFIXED(-2.846823), toFIXED(-0.348016)},
    {toFIXED(-1.276194), toFIXED(-2.599082), toFIXED(1.172497)},
    {toFIXED(1.067649), toFIXED(-3.391396), toFIXED(0.716080)},
    {toFIXED(0.233347), toFIXED(-3.493184), toFIXED(1.606930)},
    {toFIXED(1.025913), toFIXED(-3.106674), toFIXED(0.038714)},
    {toFIXED(0.896143), toFIXED(-4.045136), toFIXED(-0.029189)},
    {toFIXED(0.938136), toFIXED(-4.290546), toFIXED(0.668215)},
    {toFIXED(-1.080781), toFIXED(-4.016988), toFIXED(1.122582)},
    {toFIXED(0.438316), toFIXED(-4.347158), toFIXED(1.438750)},
    {toFIXED(-0.370084), toFIXED(-4.338652), toFIXED(1.338075)},
    {toFIXED(0.494860), toFIXED(-3.852951), toFIXED(-0.897152)},
    {toFIXED(-0.810023), toFIXED(-3.807300), toFIXED(-0.433185)},
    {toFIXED(-0.612322), toFIXED(-2.126440), toFIXED(1.907183)},
    {toFIXED(0.372903), toFIXED(-1.559715), toFIXED(-0.364828)},
    {toFIXED(-1.113440), toFIXED(-1.558020), toFIXED(-0.253149)},
    {toFIXED(-1.460373), toFIXED(-1.980593), toFIXED(1.524684)},
    {toFIXED(0.877822), toFIXED(-2.091651), toFIXED(1.008659)},
    {toFIXED(0.308495), toFIXED(-2.133615), toFIXED(2.035461)},
    {toFIXED(0.829989), toFIXED(-1.822755), toFIXED(0.210607)},
    {toFIXED(-0.354613), toFIXED(0.579327), toFIXED(1.392414)},
    {toFIXED(0.626561), toFIXED(1.267347), toFIXED(-0.354346)},
    {toFIXED(-0.592818), toFIXED(1.262453), toFIXED(-0.269648)},
    {toFIXED(-0.856342), toFIXED(0.682469), toFIXED(1.181925)},
    {toFIXED(0.777275), toFIXED(0.626889), toFIXED(0.784858)},
    {toFIXED(0.344824), toFIXED(0.566786), toFIXED(1.489197)},
    {toFIXED(0.740942), toFIXED(0.874761), toFIXED(0.195163)},
    {toFIXED(-0.220142), toFIXED(3.935792), toFIXED(1.755507)},
    {toFIXED(0.800850), toFIXED(3.936403), toFIXED(0.347964)},
    {toFIXED(-0.798853), toFIXED(3.936380), toFIXED(0.399928)},
    {toFIXED(-0.592491), toFIXED(3.935872), toFIXED(1.572763)},
    {toFIXED(0.753261), toFIXED(3.936235), toFIXED(0.734777)},
    {toFIXED(0.415874), toFIXED(3.935811), toFIXED(1.713541)},
    {toFIXED(-0.518091), toFIXED(3.121386), toFIXED(-3.190279)},
    {toFIXED(0.713245), toFIXED(3.173770), toFIXED(-3.298701)},
    {toFIXED(-0.336035), toFIXED(3.938043), toFIXED(-3.431657)},
    {toFIXED(0.665247), toFIXED(3.938082), toFIXED(-3.523330)},
    {toFIXED(0.864521), toFIXED(3.936983), toFIXED(-0.989542)},
    {toFIXED(-0.736355), toFIXED(3.936977), toFIXED(-0.975141)},
    {toFIXED(0.732397), toFIXED(2.634168), toFIXED(-1.628001)},
    {toFIXED(-0.877748), toFIXED(2.653008), toFIXED(-1.543295)},
    {toFIXED(0.828082), toFIXED(3.937592), toFIXED(-2.392659)},
    {toFIXED(0.805012), toFIXED(2.996039), toFIXED(-2.513388)},
    {toFIXED(-0.884963), toFIXED(2.976255), toFIXED(-2.428694)},
    {toFIXED(-0.872170), toFIXED(3.937567), toFIXED(-2.336353)},
    {toFIXED(-1.080781), toFIXED(-3.470632), toFIXED(1.122819)},
    {toFIXED(-0.776204), toFIXED(-4.455588), toFIXED(-0.987518)},
};

static POLYGON polygon_R_CALF[55] = {
    {{0.383505, 0.252126, -0.888457}, {14, 5, 16, 14}},
    {{-0.994506, -0.104373, 0.008023}, {2, 12, 4, 2}},
    {{0.637070, 0.242495, -0.731668}, {8, 19, 5, 8}},
    {{-0.977726, 0.008666, 0.209705}, {32, 34, 27, 32}},
    {{0.000000, -1.000000, -0.000434}, {33, 37, 38, 33}},
    {{-0.985193, 0.000074, -0.171448}, {18, 14, 51, 18}},
    {{0.987986, -0.067384, 0.139081}, {18, 1, 52, 18}},
    {{0.768551, 0.599852, -0.222502}, {17, 12, 4, 17}},
    {{0.971104, 0.198395, 0.132652}, {8, 51, 18, 7}},
    {{0.000000, -1.000000, -0.000434}, {34, 37, 36, 35}},
    {{0.996382, -0.047738, -0.070316}, {49, 50, 44, 46}},
    {{0.997245, 0.036484, -0.064584}, {44, 35, 28, 46}},
    {{0.515396, 0.100988, -0.850981}, {14, 8, 5, 14}},
    {{-0.685127, -0.101028, 0.721384}, {20, 6, 11, 25}},
    {{0.202560, -0.218567, 0.954567}, {7, 18, 17, 6}},
    {{0.416685, 0.078193, -0.905682}, {33, 26, 29, 36}},
    {{-0.860542, -0.081648, -0.502793}, {30, 23, 24, 31}},
    {{-0.996124, -0.082305, 0.031019}, {2, 13, 12, 2}},
    {{-0.781941, -0.188630, 0.594126}, {6, 17, 12, 11}},
    {{0.421431, 0.540254, -0.728369}, {8, 22, 19, 8}},
    {{0.999736, -0.013128, 0.018872}, {29, 28, 35, 36}},
    {{0.130269, 0.214820, -0.967927}, {5, 10, 15, 16}},
    {{0.000000, -1.000000, -0.000434}, {50, 47, 43, 44}},
    {{0.362113, -0.203417, -0.909668}, {29, 26, 19, 22}},
    {{0.976605, 0.104611, 0.187882}, {22, 8, 7, 21}},
    {{0.135151, 0.291650, -0.946929}, {24, 10, 5, 19}},
    {{0.079385, 0.275642, 0.957977}, {42, 41, 39, 40}},
    {{-0.805207, 0.122602, -0.580182}, {24, 23, 9, 10}},
    {{-0.131749, 0.413009, -0.901147}, {4, 52, 18, 17}},
    {{0.047185, 0.679468, 0.732186}, {46, 28, 27, 45}},
    {{-0.988914, -0.148429, 0.004340}, {25, 11, 9, 23}},
    {{-0.851187, -0.082543, -0.518332}, {13, 2, 3, 15}},
    {{-0.985027, 0.131999, 0.110893}, {11, 12, 13, 9}},
    {{0.072395, -0.008863, 0.997337}, {27, 28, 21, 20}},
    {{-0.998292, -0.032811, 0.048328}, {32, 25, 23, 30}},
    {{-0.999933, 0.005796, -0.010054}, {34, 32, 30, 37}},
    {{-0.996261, 0.083864, -0.020756}, {43, 45, 27, 34}},
    {{0.041664, 0.085675, -0.995452}, {38, 31, 26, 33}},
    {{0.973552, -0.191510, 0.124577}, {22, 21, 28, 29}},
    {{-0.010807, 0.979231, 0.202458}, {40, 39, 49, 48}},
    {{-0.909488, 0.017244, -0.415372}, {37, 30, 31, 38}},
    {{-0.997499, 0.070530, -0.004597}, {48, 45, 43, 47}},
    {{-0.780998, 0.043165, -0.623040}, {10, 9, 13, 15}},
    {{-0.991344, -0.006500, 0.131128}, {42, 40, 48, 47}},
    {{-0.884849, 0.026783, 0.465108}, {27, 20, 25, 32}},
    {{0.018283, 0.932246, 0.361362}, {48, 49, 46, 45}},
    {{0.345286, -0.011173, -0.938431}, {14, 16, 0, 1}},
    {{0.074797, -0.067212, 0.994931}, {21, 7, 6, 20}},
    {{0.899466, -0.062318, 0.432525}, {41, 50, 49, 39}},
    {{0.126953, -0.144247, -0.981364}, {16, 15, 3, 0}},
    {{0.000000, -1.000000, -0.000434}, {42, 47, 50, 41}},
    {{-0.000000, -1.000000, -0.000434}, {43, 34, 35, 44}},
    {{-0.000000, -1.000000, -0.000434}, {33, 36, 37, 33}},
    {{0.984949, -0.006206, 0.172733}, {18, 51, 1, 18}},
    {{0.132503, -0.197826, -0.971240}, {31, 24, 19, 26}},
};

static ATTR attribute_R_CALF[55] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Leather
};

static jo_3d_mesh mesh_R_CALF = {
    .data =
        {
            point_R_CALF,
            53,
            polygon_R_CALF,
            55,
            attribute_R_CALF,
        }};

static __jo_force_inline void display_R_CALF_mesh(void)
{
   jo_3d_mesh_draw(&mesh_R_CALF);
}

// R_FARM
static POINT point_R_FARM[48] = {
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
    {toFIXED(0.002483), toFIXED(0.712846), toFIXED(-0.135754)},
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
    {toFIXED(-2.967774), toFIXED(1.200342), toFIXED(-0.274163)},
    {toFIXED(-2.572170), toFIXED(-0.772526), toFIXED(-0.851392)},
    {toFIXED(-2.861606), toFIXED(-0.178637), toFIXED(0.690479)},
    {toFIXED(-2.794979), toFIXED(0.747268), toFIXED(0.474452)},
    {toFIXED(-2.458955), toFIXED(0.406405), toFIXED(-1.231488)},
    {toFIXED(-3.837915), toFIXED(-0.305376), toFIXED(0.072963)},
    {toFIXED(-3.877319), toFIXED(0.867501), toFIXED(-0.262705)},
    {toFIXED(-3.640216), toFIXED(-0.314927), toFIXED(-0.608666)},
    {toFIXED(-3.316198), toFIXED(-0.256597), toFIXED(0.554427)},
    {toFIXED(-3.276264), toFIXED(0.298290), toFIXED(0.565251)},
    {toFIXED(-3.572362), toFIXED(0.391658), toFIXED(-0.836474)},
    {toFIXED(1.066862), toFIXED(0.923028), toFIXED(-0.129335)},
    {toFIXED(1.366086), toFIXED(0.740721), toFIXED(0.849275)},
    {toFIXED(1.284674), toFIXED(-0.414780), toFIXED(1.113235)},
    {toFIXED(1.299628), toFIXED(-0.844212), toFIXED(0.365867)},
    {toFIXED(1.416659), toFIXED(-0.865726), toFIXED(-0.639748)},
    {toFIXED(1.516770), toFIXED(0.206040), toFIXED(-0.975826)},
    {toFIXED(0.636595), toFIXED(0.838064), toFIXED(-0.131930)},
    {toFIXED(0.794210), toFIXED(-0.778615), toFIXED(0.324455)},
    {toFIXED(1.051233), toFIXED(0.182162), toFIXED(-0.912058)},
    {toFIXED(0.912361), toFIXED(0.671286), toFIXED(0.769962)},
    {toFIXED(0.837331), toFIXED(-0.385770), toFIXED(1.013232)},
    {toFIXED(0.958970), toFIXED(-0.796026), toFIXED(-0.602324)},
    {toFIXED(3.458138), toFIXED(0.576008), toFIXED(0.443789)},
};

static POLYGON polygon_R_FARM[49] = {
    {{-0.222653, 0.861785, -0.455798}, {8, 3, 0, 5}},
    {{0.158989, 0.849707, -0.502714}, {11, 14, 45, 42}},
    {{0.679528, -0.034609, -0.732833}, {29, 33, 32, 29}},
    {{0.147855, 0.560217, -0.815043}, {23, 32, 26, 23}},
    {{0.030238, -0.229171, -0.972916}, {26, 33, 27, 26}},
    {{0.068843, -0.800683, 0.595120}, {6, 40, 10, 6}},
    {{-0.039107, -0.989390, -0.139919}, {36, 6, 9, 36}},
    {{0.347432, -0.699718, -0.624248}, {33, 30, 24, 27}},
    {{0.177036, 0.983487, 0.037560}, {17, 11, 13, 19}},
    {{0.158124, 0.855562, -0.492960}, {42, 45, 37, 38}},
    {{0.189787, -0.954009, -0.232052}, {15, 12, 41, 15}},
    {{0.139113, 0.990277, 0.000338}, {42, 38, 39, 46}},
    {{0.227544, 0.827100, -0.513936}, {17, 20, 14, 11}},
    {{0.199851, -0.232350, -0.951879}, {45, 44, 36, 37}},
    {{-0.528772, -0.769843, 0.357410}, {24, 28, 22, 18}},
    {{0.411977, 0.904913, 0.106808}, {29, 23, 25, 31}},
    {{0.139034, -0.724688, 0.674905}, {41, 12, 16, 41}},
    {{0.118489, 0.294366, 0.948319}, {19, 13, 16, 22}},
    {{0.319511, 0.262837, 0.910401}, {34, 31, 25, 28}},
    {{-0.381705, -0.217632, -0.898297}, {9, 47, 3, 8}},
    {{-0.335160, 0.935680, -0.110324}, {23, 17, 19, 25}},
    {{0.255126, -0.673284, 0.693973}, {30, 34, 28, 24}},
    {{-0.253741, 0.342473, 0.904615}, {7, 2, 4, 10}},
    {{0.139033, 0.990165, 0.015599}, {11, 42, 46, 13}},
    {{0.008582, -0.760781, 0.648952}, {6, 35, 43, 40}},
    {{0.936024, 0.087993, 0.340759}, {31, 34, 30, 29}},
    {{-0.139614, -0.804846, 0.576829}, {6, 10, 4, 1}},
    {{0.020286, -0.981749, -0.189094}, {36, 44, 35, 6}},
    {{-0.101606, -0.976073, -0.192245}, {6, 1, 47, 9}},
    {{0.192543, -0.953283, -0.232761}, {18, 12, 15, 21}},
    {{0.742747, -0.161048, -0.649916}, {29, 30, 33, 29}},
    {{-0.458281, -0.847829, -0.266766}, {24, 18, 21, 27}},
    {{0.458876, 0.684410, -0.566582}, {23, 29, 32, 23}},
    {{-0.483106, 0.310353, 0.818712}, {28, 25, 19, 22}},
    {{0.287028, -0.001971, -0.957920}, {26, 32, 33, 26}},
    {{0.188005, -0.953914, -0.233883}, {15, 41, 35, 44}},
    {{-0.275222, -0.199611, -0.940430}, {27, 21, 20, 26}},
    {{0.133297, -0.722553, 0.678343}, {43, 35, 41, 16}},
    {{-0.110420, 0.993603, -0.023661}, {5, 0, 2, 7}},
    {{0.118455, 0.288234, 0.950205}, {46, 39, 40, 43}},
    {{-0.287024, 0.682812, -0.671852}, {23, 26, 20, 17}},
    {{-0.071640, 0.997095, -0.025883}, {38, 5, 7, 39}},
    {{0.256113, -0.237075, -0.937124}, {20, 21, 15, 14}},
    {{0.118511, 0.291785, 0.949114}, {13, 46, 43, 16}},
    {{0.019228, 0.887408, -0.460584}, {38, 37, 8, 5}},
    {{0.199842, -0.234612, -0.951325}, {14, 15, 44, 45}},
    {{0.094240, 0.316424, 0.943925}, {39, 7, 10, 40}},
    {{0.116624, -0.733140, 0.670003}, {18, 22, 16, 12}},
    {{0.185657, -0.253733, -0.949290}, {37, 36, 9, 8}},
};

static ATTR attribute_R_FARM[49] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
};

static jo_3d_mesh mesh_R_FARM = {
    .data =
        {
            point_R_FARM,
            48,
            polygon_R_FARM,
            49,
            attribute_R_FARM,
        }};

static __jo_force_inline void display_R_FARM_mesh(void)
{
   jo_3d_mesh_draw(&mesh_R_FARM);
}

// R_THIGH
static POINT point_R_THIGH[19] = {
    {toFIXED(1.245872), toFIXED(-1.243936), toFIXED(-1.537658)},
    {toFIXED(0.926484), toFIXED(-1.083841), toFIXED(1.537456)},
    {toFIXED(1.260912), toFIXED(-1.116270), toFIXED(-0.021571)},
    {toFIXED(-0.611451), toFIXED(-1.279333), toFIXED(1.292717)},
    {toFIXED(-0.703669), toFIXED(-2.205879), toFIXED(-0.740169)},
    {toFIXED(-1.396677), toFIXED(-2.720203), toFIXED(0.104774)},
    {toFIXED(-0.262351), toFIXED(3.107132), toFIXED(0.960451)},
    {toFIXED(0.469526), toFIXED(2.229676), toFIXED(-0.967008)},
    {toFIXED(-0.634608), toFIXED(2.227699), toFIXED(-0.612667)},
    {toFIXED(-0.892328), toFIXED(2.220464), toFIXED(0.683864)},
    {toFIXED(0.746291), toFIXED(2.222634), toFIXED(0.294939)},
    {toFIXED(-1.495339), toFIXED(-0.811762), toFIXED(0.419534)},
    {toFIXED(1.026258), toFIXED(0.150425), toFIXED(0.934599)},
    {toFIXED(-0.748207), toFIXED(-0.643550), toFIXED(1.182479)},
    {toFIXED(-1.002515), toFIXED(-1.172675), toFIXED(-0.847012)},
    {toFIXED(0.788304), toFIXED(-0.498949), toFIXED(-1.435024)},
    {toFIXED(0.809073), toFIXED(2.225855), toFIXED(-0.282183)},
    {toFIXED(1.178096), toFIXED(0.322168), toFIXED(-0.227475)},
    {toFIXED(-0.703669), toFIXED(-2.205879), toFIXED(-0.740169)},
};

static POLYGON polygon_R_THIGH[14] = {
    {{0.721115, -0.083451, -0.687771}, {9, 13, 11, 9}},
    {{0.733471, 0.147359, -0.663555}, {11, 3, 5, 11}},
    {{-0.973293, -0.183064, -0.138523}, {16, 17, 12, 10}},
    {{0.866388, 0.082263, 0.492548}, {11, 5, 4, 14}},
    {{0.534544, -0.118777, -0.836753}, {9, 6, 13, 9}},
    {{0.940170, -0.165015, 0.298079}, {14, 8, 9, 11}},
    {{-0.892722, -0.169792, 0.417395}, {15, 17, 16, 7}},
    {{0.104430, -0.352547, -0.929949}, {3, 13, 12, 1}},
    {{0.710702, 0.031011, -0.702809}, {11, 13, 3, 11}},
    {{0.330784, -0.110059, 0.937267}, {7, 8, 14, 15}},
    {{-0.982862, -0.047651, -0.178079}, {17, 2, 1, 12}},
    {{-0.313016, -0.128192, -0.941056}, {12, 13, 6, 10}},
    {{-0.949438, -0.224605, 0.219363}, {0, 2, 17, 15}},
    {{0.294925, 0.127698, 0.946949}, {14, 4, 0, 15}},
};

static ATTR attribute_R_THIGH[14] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
};

static jo_3d_mesh mesh_R_THIGH = {
    .data =
        {
            point_R_THIGH,
            19,
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
    {toFIXED(1.128484), toFIXED(0.175954), toFIXED(0.640530)},
    {toFIXED(1.321720), toFIXED(-0.965473), toFIXED(-0.712708)},
    {toFIXED(1.343289), toFIXED(-1.136424), toFIXED(0.300470)},
    {toFIXED(0.870020), toFIXED(0.745544), toFIXED(0.891075)},
    {toFIXED(1.128484), toFIXED(0.579768), toFIXED(-0.511547)},
    {toFIXED(0.870020), toFIXED(0.817747), toFIXED(-0.054219)},
    {toFIXED(-1.238708), toFIXED(-0.709555), toFIXED(0.082692)},
    {toFIXED(-1.238708), toFIXED(0.807081), toFIXED(-0.243755)},
    {toFIXED(-1.238708), toFIXED(-0.722784), toFIXED(-0.572117)},
    {toFIXED(-1.238708), toFIXED(-0.353093), toFIXED(0.569854)},
    {toFIXED(-1.238708), toFIXED(0.603108), toFIXED(0.399382)},
    {toFIXED(-1.238708), toFIXED(0.158119), toFIXED(-0.789658)},
};

static POLYGON polygon_R_UARM[7] = {
    {{-0.124877, -0.267974, 0.955299}, {0, 6, 2, 0}},
    {{-0.063307, 0.983243, 0.170953}, {7, 10, 3, 5}},
    {{-0.113811, -0.071284, 0.990942}, {10, 9, 0, 3}},
    {{-0.003075, 0.748797, -0.662792}, {4, 11, 7, 5}},
    {{0.160620, -0.796550, 0.582845}, {0, 9, 6, 0}},
    {{0.028061, -0.004514, -0.999596}, {1, 8, 11, 4}},
    {{-0.127214, -0.987623, -0.091743}, {2, 6, 8, 1}},
};

static ATTR attribute_R_UARM[7] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 1, C_RGB(7, 7, 7), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight),   // Grey
};

static jo_3d_mesh mesh_R_UARM = {
    .data =
        {
            point_R_UARM,
            12,
            polygon_R_UARM,
            7,
            attribute_R_UARM,
        }};

static __jo_force_inline void display_R_UARM_mesh(void)
{
   jo_3d_mesh_draw(&mesh_R_UARM);
}

// SHOULDER
static POINT point_SHOULDER[76] = {
    {toFIXED(0.000000), toFIXED(-1.378390), toFIXED(-0.115274)},
    {toFIXED(0.000000), toFIXED(2.314267), toFIXED(-1.462043)},
    {toFIXED(0.000000), toFIXED(-0.081752), toFIXED(1.693693)},
    {toFIXED(0.000000), toFIXED(2.889932), toFIXED(0.970328)},
    {toFIXED(0.000000), toFIXED(0.109547), toFIXED(-1.134848)},
    {toFIXED(0.000000), toFIXED(1.518774), toFIXED(1.508403)},
    {toFIXED(0.000000), toFIXED(-1.529013), toFIXED(1.122098)},
    {toFIXED(0.000000), toFIXED(1.860224), toFIXED(-2.066237)},
    {toFIXED(0.000000), toFIXED(0.899831), toFIXED(-2.055051)},
    {toFIXED(0.000000), toFIXED(-0.497673), toFIXED(-0.587466)},
    {toFIXED(0.000000), toFIXED(1.430198), toFIXED(-2.196078)},
    {toFIXED(0.000000), toFIXED(0.661896), toFIXED(-1.820800)},
    {toFIXED(0.000000), toFIXED(-1.132062), toFIXED(1.562710)},
    {toFIXED(0.000895), toFIXED(-1.551670), toFIXED(-0.132209)},
    {toFIXED(0.000895), toFIXED(-1.936311), toFIXED(1.035135)},
    {toFIXED(-2.706753), toFIXED(-0.600767), toFIXED(1.301053)},
    {toFIXED(-1.415617), toFIXED(2.467504), toFIXED(0.393127)},
    {toFIXED(-2.706753), toFIXED(-1.025860), toFIXED(-0.204468)},
    {toFIXED(-1.590128), toFIXED(2.064126), toFIXED(-1.171304)},
    {toFIXED(-2.706753), toFIXED(-1.236537), toFIXED(0.808456)},
    {toFIXED(-2.929863), toFIXED(0.610308), toFIXED(1.399141)},
    {toFIXED(-1.900295), toFIXED(2.174605), toFIXED(-0.402027)},
    {toFIXED(-2.929863), toFIXED(-0.087411), toFIXED(-0.162777)},
    {toFIXED(-2.929863), toFIXED(0.682665), toFIXED(0.453858)},
    {toFIXED(-1.728142), toFIXED(-1.137771), toFIXED(-0.058219)},
    {toFIXED(-2.039275), toFIXED(-1.281293), toFIXED(0.892966)},
    {toFIXED(-1.372433), toFIXED(-0.500648), toFIXED(1.518295)},
    {toFIXED(-1.780942), toFIXED(0.759165), toFIXED(1.252445)},
    {toFIXED(-1.883615), toFIXED(0.247571), toFIXED(-0.784257)},
    {toFIXED(-2.306835), toFIXED(0.835842), toFIXED(0.271887)},
    {toFIXED(-1.933189), toFIXED(1.603381), toFIXED(-1.215237)},
    {toFIXED(-1.467446), toFIXED(-0.372558), toFIXED(-0.432069)},
    {toFIXED(-0.631428), toFIXED(-1.322115), toFIXED(-0.086782)},
    {toFIXED(-0.931122), toFIXED(0.177073), toFIXED(-0.932893)},
    {toFIXED(-2.032880), toFIXED(0.679435), toFIXED(-1.012364)},
    {toFIXED(-0.790358), toFIXED(-0.976751), toFIXED(-0.275766)},
    {toFIXED(-1.870650), toFIXED(2.047128), toFIXED(-0.786689)},
    {toFIXED(-1.724728), toFIXED(-1.019354), toFIXED(1.373813)},
    {toFIXED(-0.648786), toFIXED(-1.627986), toFIXED(1.006041)},
    {toFIXED(-0.815606), toFIXED(-2.180863), toFIXED(0.917323)},
    {toFIXED(-0.601238), toFIXED(-1.812521), toFIXED(0.037494)},
    {toFIXED(-2.065382), toFIXED(1.112459), toFIXED(-1.169440)},
    {toFIXED(0.000000), toFIXED(-0.306177), toFIXED(-0.760091)},
    {toFIXED(-1.598691), toFIXED(-0.176991), toFIXED(-0.543137)},
    {toFIXED(-0.944360), toFIXED(-0.471704), toFIXED(-0.621276)},
    {toFIXED(-0.000768), toFIXED(-1.711024), toFIXED(-0.132278)},
    {toFIXED(-0.000768), toFIXED(-2.095665), toFIXED(1.035066)},
    {toFIXED(2.706753), toFIXED(-0.600767), toFIXED(1.301053)},
    {toFIXED(1.415617), toFIXED(2.467504), toFIXED(0.393127)},
    {toFIXED(2.706753), toFIXED(-1.025860), toFIXED(-0.204468)},
    {toFIXED(1.590128), toFIXED(2.064126), toFIXED(-1.171304)},
    {toFIXED(2.706753), toFIXED(-1.236537), toFIXED(0.808456)},
    {toFIXED(2.929863), toFIXED(0.610308), toFIXED(1.399141)},
    {toFIXED(1.900295), toFIXED(2.174605), toFIXED(-0.402027)},
    {toFIXED(2.929863), toFIXED(-0.087411), toFIXED(-0.162777)},
    {toFIXED(2.929863), toFIXED(0.682665), toFIXED(0.453858)},
    {toFIXED(1.728142), toFIXED(-1.137771), toFIXED(-0.058219)},
    {toFIXED(2.039275), toFIXED(-1.281293), toFIXED(0.892966)},
    {toFIXED(1.372433), toFIXED(-0.500648), toFIXED(1.518295)},
    {toFIXED(1.780942), toFIXED(0.759165), toFIXED(1.252445)},
    {toFIXED(1.883615), toFIXED(0.247571), toFIXED(-0.784257)},
    {toFIXED(2.306835), toFIXED(0.835842), toFIXED(0.271887)},
    {toFIXED(1.933189), toFIXED(1.603381), toFIXED(-1.215237)},
    {toFIXED(1.467446), toFIXED(-0.372558), toFIXED(-0.432069)},
    {toFIXED(0.631428), toFIXED(-1.322115), toFIXED(-0.086782)},
    {toFIXED(0.931122), toFIXED(0.177073), toFIXED(-0.932893)},
    {toFIXED(2.032880), toFIXED(0.679435), toFIXED(-1.012364)},
    {toFIXED(0.790358), toFIXED(-0.976751), toFIXED(-0.275766)},
    {toFIXED(1.870651), toFIXED(2.047128), toFIXED(-0.786689)},
    {toFIXED(1.724728), toFIXED(-1.019354), toFIXED(1.373813)},
    {toFIXED(0.648702), toFIXED(-1.627986), toFIXED(1.006041)},
    {toFIXED(0.815521), toFIXED(-2.180863), toFIXED(0.917323)},
    {toFIXED(0.601154), toFIXED(-1.812521), toFIXED(0.037494)},
    {toFIXED(2.065382), toFIXED(1.112459), toFIXED(-1.169440)},
    {toFIXED(1.598691), toFIXED(-0.176991), toFIXED(-0.543137)},
    {toFIXED(0.944361), toFIXED(-0.471704), toFIXED(-0.621276)},
};

static POLYGON polygon_SHOULDER[86] = {
    {{-0.480377, -0.617431, 0.622910}, {55, 61, 60, 54}},
    {{0.756284, -0.376634, 0.534959}, {36, 41, 18, 36}},
    {{0.241062, 0.777297, -0.581119}, {37, 38, 25, 37}},
    {{-0.218798, 0.466857, 0.856838}, {56, 63, 75, 67}},
    {{-0.202837, 0.122816, 0.971480}, {63, 49, 54, 74}},
    {{0.937390, -0.054427, -0.344004}, {41, 36, 34, 41}},
    {{0.211840, -0.247874, 0.945348}, {1, 18, 30, 1}},
    {{0.189046, 0.764833, 0.615867}, {4, 11, 33, 4}},
    {{0.169437, 0.505444, 0.846060}, {33, 34, 28, 33}},
    {{-0.254425, 0.668573, -0.698769}, {51, 57, 69, 47}},
    {{0.167722, 0.569548, 0.804664}, {43, 33, 28, 43}},
    {{0.830859, -0.006738, -0.556442}, {34, 36, 28, 34}},
    {{0.145673, 0.172417, -0.974193}, {26, 37, 15, 26}},
    {{0.006393, 0.742944, -0.669323}, {38, 12, 6, 38}},
    {{0.347561, -0.749592, 0.563306}, {7, 1, 30, 7}},
    {{0.417769, -0.262616, 0.869771}, {30, 10, 7, 30}},
    {{0.362668, -0.182902, -0.913794}, {41, 30, 18, 41}},
    {{0.983555, 0.180079, 0.013784}, {15, 23, 20, 15}},
    {{0.972253, 0.229031, 0.047636}, {22, 19, 17, 22}},
    {{0.944147, -0.056231, 0.324692}, {36, 21, 29, 28}},
    {{-0.756284, -0.376634, 0.534959}, {68, 50, 73, 68}},
    {{0.181191, -0.127917, -0.975093}, {26, 27, 5, 2}},
    {{-0.241048, 0.777304, -0.581114}, {69, 57, 70, 69}},
    {{0.126427, 0.476495, -0.870040}, {37, 26, 12, 38}},
    {{0.989220, -0.127070, 0.072773}, {39, 40, 32, 38}},
    {{-0.937390, -0.054427, -0.344003}, {73, 66, 68, 73}},
    {{-0.211840, -0.247874, 0.945348}, {1, 62, 50, 1}},
    {{-0.189046, 0.764833, 0.615867}, {4, 65, 11, 4}},
    {{-0.270056, 0.697309, 0.663950}, {65, 66, 11, 65}},
    {{-0.108745, 0.515233, 0.850123}, {56, 67, 64, 56}},
    {{-0.126427, 0.476502, -0.870035}, {70, 12, 58, 69}},
    {{-0.830860, -0.006738, -0.556441}, {66, 60, 68, 66}},
    {{-0.145673, 0.172417, -0.974193}, {58, 47, 69, 58}},
    {{-0.006394, 0.742944, -0.669323}, {70, 6, 12, 70}},
    {{-0.347561, -0.749592, 0.563306}, {7, 62, 1, 7}},
    {{-0.417769, -0.262616, 0.869771}, {62, 7, 10, 62}},
    {{-0.362667, -0.182902, -0.913794}, {73, 50, 62, 73}},
    {{0.079679, 0.459357, 0.884671}, {49, 63, 56, 49}},
    {{-0.944147, -0.056231, 0.324692}, {68, 60, 61, 53}},
    {{-0.123620, 0.536661, 0.834694}, {4, 42, 75, 65}},
    {{-0.429050, 0.108505, 0.896740}, {10, 8, 73, 62}},
    {{-0.988634, 0.093124, -0.118025}, {55, 54, 51, 47}},
    {{0.194860, 0.950918, 0.240383}, {32, 24, 25, 38}},
    {{0.256605, 0.601753, 0.756338}, {43, 28, 22, 43}},
    {{-0.139829, 0.133289, -0.981164}, {71, 46, 6, 70}},
    {{0.119218, 0.158725, -0.980099}, {39, 38, 6, 14}},
    {{0.270056, 0.697309, 0.663950}, {33, 11, 34, 33}},
    {{-0.034257, -0.058981, -0.997671}, {52, 47, 58, 59}},
    {{-0.066453, 0.480255, 0.874608}, {9, 0, 64, 67}},
    {{0.108745, 0.515233, 0.850123}, {24, 32, 35, 24}},
    {{-0.306694, 0.460004, 0.833268}, {75, 63, 74, 65}},
    {{0.088696, 0.123262, -0.988402}, {26, 2, 12, 26}},
    {{0.066453, 0.480255, 0.874608}, {9, 35, 32, 0}},
    {{0.202837, 0.122816, 0.971480}, {22, 17, 31, 43}},
    {{-0.194855, 0.950921, 0.240375}, {64, 70, 57, 56}},
    {{0.306694, 0.460004, 0.833268}, {43, 31, 44, 33}},
    {{0.129872, 0.164233, 0.977835}, {40, 13, 0, 32}},
    {{-0.989232, -0.126992, 0.072759}, {64, 72, 71, 70}},
    {{-0.812222, -0.413029, -0.411949}, {53, 61, 59, 48}},
    {{-0.145971, -0.982477, -0.115891}, {59, 61, 55, 52}},
    {{-0.079679, 0.459357, 0.884671}, {17, 24, 31, 17}},
    {{0.012407, 0.595032, 0.803607}, {42, 9, 67, 75}},
    {{-0.357462, 0.483381, 0.799102}, {8, 11, 66, 73}},
    {{0.371132, -0.419860, -0.828238}, {3, 5, 27, 16}},
    {{0.812222, -0.413029, -0.411949}, {21, 16, 27, 29}},
    {{0.067010, 0.980006, 0.187344}, {24, 17, 19, 25}},
    {{-0.256605, 0.601753, 0.756338}, {54, 60, 74, 54}},
    {{0.145971, -0.982477, -0.115891}, {27, 20, 23, 29}},
    {{0.480377, -0.617431, 0.622910}, {28, 29, 23, 22}},
    {{-0.169437, 0.505444, 0.846060}, {65, 60, 66, 65}},
    {{0.357462, 0.483381, 0.799102}, {8, 41, 34, 11}},
    {{-0.012407, 0.595032, 0.803607}, {42, 44, 35, 9}},
    {{0.218798, 0.466857, 0.856838}, {24, 35, 44, 31}},
    {{-0.167722, 0.569548, 0.804664}, {74, 60, 65, 74}},
    {{-0.088696, 0.123262, -0.988402}, {12, 2, 58, 12}},
    {{0.034257, -0.058981, -0.997671}, {20, 27, 26, 15}},
    {{0.254425, 0.668573, -0.698769}, {19, 15, 37, 25}},
    {{-0.181191, -0.127917, -0.975093}, {58, 2, 5, 59}},
    {{0.123620, 0.536661, 0.834694}, {4, 33, 44, 42}},
    {{-0.152528, 0.133386, 0.979257}, {0, 45, 72, 64}},
    {{0.429050, 0.108505, 0.896740}, {10, 30, 41, 8}},
    {{-0.371132, -0.419860, -0.828238}, {3, 48, 59, 5}},
    {{-0.983555, 0.180079, 0.013784}, {47, 52, 55, 47}},
    {{0.988634, 0.093124, -0.118025}, {23, 15, 19, 22}},
    {{-0.972253, 0.229031, 0.047636}, {54, 49, 51, 54}},
    {{-0.067010, 0.980006, 0.187345}, {56, 57, 51, 49}},
};

static ATTR attribute_SHOULDER[86] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(4, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Leather
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(14, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),  // Red
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(255, 173, 96), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),   // Hair
};

static jo_3d_mesh mesh_SHOULDER = {
    .data =
        {
            point_SHOULDER,
            76,
            polygon_SHOULDER,
            86,
            attribute_SHOULDER,
        }};

static __jo_force_inline void display_SHOULDER_mesh(void)
{
   jo_3d_mesh_draw(&mesh_SHOULDER);
}

// TORSO
static POINT point_TORSO[34] = {
    {toFIXED(1.649220), toFIXED(0.714764), toFIXED(-0.543970)},
    {toFIXED(1.649220), toFIXED(0.557346), toFIXED(0.854824)},
    {toFIXED(2.010623), toFIXED(0.875015), toFIXED(0.193886)},
    {toFIXED(0.000000), toFIXED(0.179761), toFIXED(1.653406)},
    {toFIXED(0.000000), toFIXED(1.568690), toFIXED(-0.966047)},
    {toFIXED(1.419784), toFIXED(-0.995086), toFIXED(1.027879)},
    {toFIXED(1.594294), toFIXED(-1.398464), toFIXED(-0.536551)},
    {toFIXED(1.904462), toFIXED(-1.287985), toFIXED(0.232726)},
    {toFIXED(0.000000), toFIXED(-1.148324), toFIXED(-0.827290)},
    {toFIXED(0.000000), toFIXED(-0.572658), toFIXED(1.605080)},
    {toFIXED(1.534502), toFIXED(0.238378), toFIXED(-0.588278)},
    {toFIXED(1.874817), toFIXED(-1.415462), toFIXED(-0.151936)},
    {toFIXED(1.514656), toFIXED(-0.585126), toFIXED(-0.567239)},
    {toFIXED(1.831998), toFIXED(0.217576), toFIXED(0.221772)},
    {toFIXED(1.522002), toFIXED(0.215109), toFIXED(0.975484)},
    {toFIXED(1.772563), toFIXED(0.827314), toFIXED(-0.188783)},
    {toFIXED(1.760971), toFIXED(0.009231), toFIXED(-0.170256)},
    {toFIXED(-1.649220), toFIXED(0.714764), toFIXED(-0.543970)},
    {toFIXED(-1.649220), toFIXED(0.557346), toFIXED(0.854824)},
    {toFIXED(-2.010623), toFIXED(0.875015), toFIXED(0.193886)},
    {toFIXED(-1.419784), toFIXED(-0.995086), toFIXED(1.027879)},
    {toFIXED(-1.594294), toFIXED(-1.398464), toFIXED(-0.536551)},
    {toFIXED(-1.904462), toFIXED(-1.287985), toFIXED(0.232726)},
    {toFIXED(-1.534502), toFIXED(0.238378), toFIXED(-0.588278)},
    {toFIXED(-1.874817), toFIXED(-1.415462), toFIXED(-0.151936)},
    {toFIXED(-1.514656), toFIXED(-0.585126), toFIXED(-0.567239)},
    {toFIXED(-1.831998), toFIXED(0.217576), toFIXED(0.221772)},
    {toFIXED(-1.522002), toFIXED(0.215109), toFIXED(0.975484)},
    {toFIXED(-1.772563), toFIXED(-0.060895), toFIXED(-0.189168)},
    {toFIXED(-1.760971), toFIXED(0.009231), toFIXED(-0.170256)},
    {toFIXED(-0.797147), toFIXED(-1.273394), toFIXED(-0.681920)},
    {toFIXED(0.797147), toFIXED(-1.273394), toFIXED(-0.681920)},
    {toFIXED(-0.824610), toFIXED(1.116660), toFIXED(-0.773731)},
    {toFIXED(0.824610), toFIXED(1.116660), toFIXED(-0.773731)},
};

static POLYGON polygon_TORSO[36] = {
    {{0.848064, 0.016465, -0.529638}, {2, 10, 15, 2}},
    {{-0.870954, 0.033514, 0.490221}, {16, 10, 12, 16}},
    {{-0.896267, 0.227362, -0.380804}, {13, 1, 2, 13}},
    {{-0.397653, -0.170068, -0.901637}, {3, 1, 14, 3}},
    {{-0.206027, 0.039926, 0.977731}, {10, 33, 31, 10}},
    {{-0.807861, -0.057013, 0.586609}, {12, 11, 16, 12}},
    {{-0.902371, 0.244821, -0.354667}, {29, 23, 28, 29}},
    {{0.964750, 0.260551, -0.037028}, {26, 28, 19, 26}},
    {{0.905332, 0.205492, -0.371682}, {26, 18, 27, 26}},
    {{0.397652, -0.170068, -0.901637}, {3, 27, 18, 3}},
    {{0.807818, -0.056962, 0.586673}, {25, 24, 21, 25}},
    {{0.185349, 0.029561, 0.982228}, {23, 25, 30, 23}},
    {{-0.176350, 0.019864, 0.984127}, {31, 6, 12, 31}},
    {{-0.278395, -0.022267, 0.960209}, {10, 0, 33, 10}},
    {{-0.185349, 0.029561, 0.982228}, {31, 12, 10, 31}},
    {{0.206027, 0.039926, 0.977731}, {30, 32, 23, 30}},
    {{0.278395, -0.022267, 0.960209}, {32, 17, 23, 32}},
    {{0.176350, 0.019864, 0.984127}, {25, 21, 30, 25}},
    {{0.889796, -0.000896, -0.456358}, {27, 20, 22, 26}},
    {{-0.188164, 0.045305, 0.981092}, {31, 33, 4, 8}},
    {{-0.986135, -0.061159, 0.154263}, {13, 16, 11, 7}},
    {{-0.898355, 0.179024, 0.401134}, {2, 0, 10, 2}},
    {{-0.836149, 0.247934, 0.489268}, {13, 2, 15, 13}},
    {{-0.905331, 0.205492, -0.371683}, {13, 14, 1, 13}},
    {{0.390310, 0.018420, -0.920499}, {20, 27, 3, 9}},
    {{-0.807818, -0.056962, 0.586673}, {12, 6, 11, 12}},
    {{0.986135, -0.061159, 0.154263}, {26, 22, 24, 29}},
    {{0.188163, 0.045305, 0.981092}, {30, 8, 4, 32}},
    {{-0.938313, 0.021112, 0.345143}, {16, 13, 15, 10}},
    {{0.870954, 0.033514, 0.490221}, {29, 25, 23, 29}},
    {{-0.928027, 0.232010, -0.291441}, {26, 29, 28, 26}},
    {{0.896267, 0.227363, -0.380804}, {26, 19, 18, 26}},
    {{-0.889796, -0.000896, -0.456358}, {14, 13, 7, 5}},
    {{0.807861, -0.057013, 0.586609}, {25, 29, 24, 25}},
    {{0.878106, 0.076417, 0.472324}, {23, 17, 19, 28}},
    {{-0.390310, 0.018420, -0.920499}, {3, 14, 5, 9}},
};

static ATTR attribute_TORSO[36] = {
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
            34,
            polygon_TORSO,
            36,
            attribute_TORSO,
        }};

static __jo_force_inline void display_TORSO_mesh(void)
{
   jo_3d_mesh_draw(&mesh_TORSO);
}

#endif
