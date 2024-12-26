/* Model Name: Mesh_Hero_V3 */
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

#ifndef __3D_MESH_HERO_V3_H__
#define __3D_MESH_HERO_V3_H__

// HEAD
static POINT point_HEAD[76] = {
   {toFIXED(-0.000001), toFIXED(-0.939855), toFIXED( 2.776923)},
   {toFIXED(-0.000001), toFIXED(-1.984166), toFIXED( 2.190807)},
   {toFIXED(-0.000001), toFIXED(-0.809555), toFIXED(-1.430286)},
   {toFIXED(-0.202175), toFIXED(-0.481062), toFIXED(-1.432370)},
   {toFIXED(-0.000001), toFIXED( 0.692013), toFIXED(-1.653085)},
   {toFIXED(-0.000001), toFIXED( 0.932803), toFIXED(-1.178030)},
   {toFIXED(-0.000001), toFIXED( 0.253262), toFIXED(-1.427559)},
   {toFIXED(-0.000001), toFIXED(-1.069964), toFIXED(-1.369329)},
   {toFIXED(-0.000001), toFIXED(-2.341621), toFIXED( 1.076280)},
   {toFIXED(-0.000001), toFIXED(-2.403614), toFIXED(-0.021715)},
   {toFIXED(-0.000001), toFIXED(-1.774919), toFIXED(-1.100252)},
   {toFIXED(-1.040719), toFIXED( 1.032401), toFIXED( 1.777433)},
   {toFIXED(-0.782243), toFIXED( 1.495209), toFIXED( 0.655389)},
   {toFIXED(-0.617451), toFIXED( 1.466271), toFIXED(-1.055628)},
   {toFIXED(-1.155118), toFIXED( 0.710485), toFIXED( 0.278008)},
   {toFIXED(-0.751967), toFIXED(-0.946656), toFIXED( 2.625381)},
   {toFIXED(-0.776738), toFIXED(-1.932757), toFIXED( 2.094450)},
   {toFIXED(-0.662038), toFIXED(-0.989340), toFIXED(-1.376797)},
   {toFIXED(-0.223394), toFIXED( 0.679202), toFIXED(-1.640218)},
   {toFIXED(-0.425097), toFIXED( 0.694106), toFIXED(-1.343631)},
   {toFIXED(-0.865141), toFIXED( 0.792439), toFIXED(-1.149603)},
   {toFIXED(-1.117305), toFIXED( 0.715044), toFIXED(-0.330815)},
   {toFIXED(-1.286741), toFIXED(-0.032865), toFIXED(-0.074085)},
   {toFIXED(-0.279533), toFIXED( 0.237252), toFIXED(-1.395782)},
   {toFIXED(-0.240764), toFIXED( 0.100029), toFIXED(-1.203121)},
   {toFIXED(-0.903719), toFIXED(-0.526511), toFIXED(-1.185071)},
   {toFIXED(-0.918435), toFIXED(-0.006195), toFIXED(-1.162869)},
   {toFIXED(-0.614787), toFIXED( 1.701976), toFIXED(-0.544469)},
   {toFIXED(-1.195287), toFIXED(-0.766736), toFIXED(-0.520436)},
   {toFIXED(-0.714467), toFIXED(-1.341844), toFIXED(-1.345421)},
   {toFIXED(-0.861664), toFIXED(-2.295621), toFIXED( 0.911397)},
   {toFIXED(-1.199023), toFIXED(-1.671409), toFIXED( 1.841710)},
   {toFIXED(-1.265622), toFIXED(-1.870001), toFIXED( 0.402657)},
   {toFIXED(-0.715792), toFIXED(-2.306033), toFIXED(-0.173771)},
   {toFIXED(-0.854826), toFIXED(-1.780065), toFIXED(-0.916188)},
   {toFIXED(-0.000001), toFIXED( 3.629012), toFIXED( 2.782840)},
   {toFIXED(-0.751967), toFIXED( 3.298061), toFIXED( 2.632437)},
   {toFIXED(-0.000001), toFIXED( 1.460017), toFIXED(-1.117748)},
   {toFIXED(-1.657674), toFIXED(-0.672386), toFIXED( 1.838203)},
   {toFIXED(-1.724273), toFIXED(-0.870978), toFIXED( 0.399150)},
   {toFIXED(-1.723544), toFIXED( 1.863698), toFIXED( 1.789168)},
   {toFIXED(-1.790143), toFIXED( 1.899913), toFIXED( 0.468468)},
   {toFIXED(-1.379347), toFIXED( 2.313049), toFIXED(-0.736361)},
   {toFIXED(-0.000001), toFIXED( 1.726450), toFIXED(-0.457948)},
   {toFIXED( 0.202173), toFIXED(-0.481062), toFIXED(-1.432370)},
   {toFIXED( 1.040797), toFIXED( 1.032401), toFIXED( 1.777433)},
   {toFIXED( 0.782241), toFIXED( 1.495209), toFIXED( 0.655389)},
   {toFIXED( 0.617449), toFIXED( 1.466271), toFIXED(-1.055628)},
   {toFIXED( 1.155116), toFIXED( 0.710485), toFIXED( 0.278008)},
   {toFIXED( 0.751965), toFIXED(-0.946656), toFIXED( 2.625381)},
   {toFIXED( 0.776736), toFIXED(-1.932757), toFIXED( 2.094450)},
   {toFIXED( 0.662036), toFIXED(-0.989340), toFIXED(-1.376797)},
   {toFIXED( 0.223393), toFIXED( 0.679276), toFIXED(-1.619041)},
   {toFIXED( 0.425095), toFIXED( 0.694106), toFIXED(-1.343631)},
   {toFIXED( 0.865139), toFIXED( 0.792439), toFIXED(-1.149603)},
   {toFIXED( 1.117303), toFIXED( 0.715044), toFIXED(-0.330815)},
   {toFIXED( 1.286739), toFIXED(-0.032865), toFIXED(-0.074085)},
   {toFIXED( 0.279531), toFIXED( 0.237252), toFIXED(-1.395782)},
   {toFIXED( 0.240762), toFIXED( 0.100029), toFIXED(-1.203121)},
   {toFIXED( 0.903717), toFIXED(-0.526511), toFIXED(-1.185071)},
   {toFIXED( 0.918433), toFIXED(-0.006195), toFIXED(-1.162869)},
   {toFIXED( 0.614785), toFIXED( 1.701976), toFIXED(-0.544469)},
   {toFIXED( 1.195285), toFIXED(-0.766736), toFIXED(-0.520436)},
   {toFIXED( 0.714465), toFIXED(-1.341844), toFIXED(-1.345421)},
   {toFIXED( 0.861662), toFIXED(-2.295621), toFIXED( 0.911397)},
   {toFIXED( 1.199021), toFIXED(-1.671409), toFIXED( 1.841710)},
   {toFIXED( 1.265619), toFIXED(-1.869573), toFIXED( 0.524638)},
   {toFIXED( 0.715790), toFIXED(-2.306033), toFIXED(-0.173771)},
   {toFIXED( 0.854824), toFIXED(-1.780065), toFIXED(-0.916188)},
   {toFIXED( 0.751965), toFIXED( 3.298061), toFIXED( 2.632437)},
   {toFIXED( 1.657672), toFIXED(-0.672386), toFIXED( 1.838203)},
   {toFIXED( 1.724271), toFIXED(-0.870549), toFIXED( 0.521131)},
   {toFIXED( 1.723543), toFIXED( 1.863698), toFIXED( 1.789168)},
   {toFIXED( 1.790141), toFIXED( 1.899913), toFIXED( 0.468468)},
   {toFIXED( 1.379345), toFIXED( 2.313049), toFIXED(-0.736361)},
   {toFIXED(-0.000001), toFIXED( 1.611921), toFIXED( 0.409542)},
};

static POLYGON polygon_HEAD[74] = {
   {{ 0.904920, -0.415032,  0.094175}, { 27,  12,  14,  13}},
   {{ 0.104354,  0.947887, -0.301032}, { 16,   1,   8,  30}},
   {{ 0.655131,  0.001687, -0.755513}, { 38,  40,  36,  15}},
   {{ 0.154360,  0.474801, -0.866451}, { 15,   0,   1,  16}},
   {{ 0.115025, -0.038172,  0.992629}, {  3,   6,  23,   3}},
   {{ 0.260878, -0.893949,  0.364414}, { 18,   4,   5,  19}},
   {{ 0.139114, -0.719674,  0.680233}, {  5,  20,  19,   5}},
   {{ 0.884775, -0.439671,  0.154476}, { 20,  13,  14,  21}},
   {{ 0.948617, -0.088807,  0.303709}, { 26,  20,  21,  22}},
   {{ 0.815183,  0.197584,  0.544460}, { 18,  19,  23,  18}},
   {{ 0.051536,  0.467602,  0.882435}, { 23,   6,   4,  18}},
   {{ 0.979761,  0.190496, -0.061476}, { 24,   3,  23,  19}},
   {{ 0.221433, -0.206850,  0.952985}, { 26,  25,   3,  24}},
   {{ 0.073124, -0.141870,  0.987181}, { 20,   5,  37,  13}},
   {{ 0.006915,  0.148382,  0.988906}, { 29,   7,   2,  17}},
   {{ 0.898061, -0.439116,  0.025757}, { 11,  14,  12,  11}},
   {{ 0.723230,  0.665560, -0.184306}, { 31,  16,  30,  32}},
   {{ 0.660829,  0.324271, -0.676870}, { 16,  31,  38,  15}},
   {{ 0.095911,  0.995035, -0.026592}, { 30,   8,   9,  33}},
   {{ 0.060560,  0.845062,  0.531228}, { 33,   9,  10,  34}},
   {{ 0.021563,  0.519237,  0.854358}, { 34,  10,   7,  29}},
   {{ 0.908918,  0.049203,  0.414062}, { 28,  42,  41,  39}},
   {{ 0.878516,  0.272364,  0.392463}, { 34,  28,  39,  32}},
   {{ 0.856049,  0.098926,  0.507340}, { 29,  17,  25,  28}},
   {{-0.014475, -0.002566,  0.999892}, {  3,   2,   6,   3}},
   {{ 0.337185, -0.204594,  0.918938}, { 17,   3,  25,  17}},
   {{ 0.203216,  0.108032,  0.973156}, { 20,  26,  24,  19}},
   {{ 0.067516,  0.047875,  0.996569}, {  3,  17,   2,   3}},
   {{ 0.196530,  0.001443, -0.980497}, { 35,   0,  15,  36}},
   {{ 0.724424,  0.662748,  0.189670}, { 34,  32,  30,  33}},
   {{ 0.937231, -0.049610,  0.345162}, { 25,  26,  22,  28}},
   {{ 0.904458,  0.414888, -0.099113}, { 38,  31,  32,  39}},
   {{ 0.998454,  0.024975, -0.049659}, { 40,  38,  39,  41}},
   {{ 0.893844,  0.133096,  0.428169}, { 28,  34,  29,  28}},
   {{ 0.977762, -0.201180,  0.059220}, { 21,  14,  22,  21}},
   {{ 0.005785, -0.919050,  0.394100}, { 43,  27,  13,  37}},
   {{-0.904920, -0.415032,  0.094175}, { 48,  46,  61,  47}},
   {{-0.104354,  0.947887, -0.301032}, {  8,   1,  50,  64}},
   {{-0.655131,  0.001687, -0.755513}, { 69,  72,  70,  49}},
   {{-0.154360,  0.474801, -0.866451}, {  1,   0,  49,  50}},
   {{-0.115025, -0.038172,  0.992629}, { 44,  57,   6,  44}},
   {{-0.268194, -0.887626,  0.374422}, {  5,   4,  52,  53}},
   {{-0.139114, -0.719674,  0.680233}, {  5,  53,  54,   5}},
   {{-0.884775, -0.439671,  0.154476}, { 48,  47,  54,  55}},
   {{-0.948617, -0.088807,  0.303709}, { 55,  54,  60,  56}},
   {{-0.797123,  0.188498,  0.573640}, { 52,  57,  53,  52}},
   {{-0.090854,  0.447515,  0.889649}, {  4,   6,  57,  52}},
   {{-0.979761,  0.190496, -0.061476}, { 57,  44,  58,  53}},
   {{-0.221433, -0.206850,  0.952985}, { 44,  59,  60,  58}},
   {{-0.073124, -0.141870,  0.987181}, { 37,   5,  54,  47}},
   {{-0.006915,  0.148382,  0.988906}, {  2,   7,  63,  51}},
   {{-0.898050, -0.439136,  0.025811}, { 45,  46,  48,  45}},
   {{-0.711945,  0.674745, -0.194561}, { 64,  50,  65,  66}},
   {{-0.660829,  0.324271, -0.676870}, { 70,  65,  50,  49}},
   {{-0.095911,  0.995035, -0.026592}, {  9,   8,  64,  67}},
   {{-0.060560,  0.845062,  0.531228}, { 10,   9,  67,  68}},
   {{-0.021563,  0.519237,  0.854358}, {  7,  10,  68,  63}},
   {{-0.916239,  0.057347,  0.396506}, { 73,  74,  62,  71}},
   {{-0.889410,  0.283257,  0.358771}, { 71,  62,  68,  66}},
   {{-0.856049,  0.098926,  0.507340}, { 59,  51,  63,  62}},
   {{ 0.014475, -0.002566,  0.999892}, { 44,   6,   2,  44}},
   {{-0.337185, -0.204594,  0.918938}, { 51,  59,  44,  51}},
   {{-0.203216,  0.108032,  0.973156}, { 58,  60,  54,  53}},
   {{-0.067516,  0.047875,  0.996569}, { 44,   2,  51,  44}},
   {{-0.196530,  0.001443, -0.980497}, { 49,   0,  35,  69}},
   {{-0.743825,  0.642536,  0.184041}, { 64,  66,  68,  67}},
   {{-0.937231, -0.049610,  0.345162}, { 56,  60,  59,  62}},
   {{-0.903624,  0.414474, -0.108053}, { 66,  65,  70,  71}},
   {{-0.998370,  0.023791, -0.051874}, { 71,  70,  72,  73}},
   {{-0.893844,  0.133096,  0.428169}, { 62,  63,  68,  62}},
   {{-0.977762, -0.201180,  0.059220}, { 55,  56,  48,  55}},
   {{-0.005785, -0.919050,  0.394100}, { 47,  61,  43,  37}},
   {{ 0.082914, -0.985733, -0.146481}, { 12,  27,  43,  75}},
   {{-0.082914, -0.985733, -0.146481}, { 43,  61,  46,  75}},
};

static ATTR attribute_HEAD[74] = {
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 7,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // DarkRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(10,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),        // FlamingRed
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),          // Skin.001
};

static jo_3d_mesh     mesh_HEAD = { 
   .data =
   {
       point_HEAD,
        76,
       polygon_HEAD,
        74,
       attribute_HEAD,
   }
};

static __jo_force_inline void      display_HEAD_mesh(void){
   jo_3d_mesh_draw(&mesh_HEAD);
}

// L_CALF
static POINT point_L_CALF[53] = {
   {toFIXED( 0.336264), toFIXED(-5.184571), toFIXED( 1.433100)},
   {toFIXED( 1.080781), toFIXED(-5.034123), toFIXED( 1.106721)},
   {toFIXED(-0.971955), toFIXED(-5.100778), toFIXED( 0.648141)},
   {toFIXED(-0.472135), toFIXED(-5.198469), toFIXED( 1.545034)},
   {toFIXED(-0.929962), toFIXED(-4.832001), toFIXED(-0.952380)},
   {toFIXED( 0.570078), toFIXED(-3.129004), toFIXED( 1.512429)},
   {toFIXED(-0.289544), toFIXED(-2.501662), toFIXED(-0.431972)},
   {toFIXED( 1.007310), toFIXED(-2.506772), toFIXED(-0.334653)},
   {toFIXED( 1.276194), toFIXED(-2.979482), toFIXED( 1.188058)},
   {toFIXED(-1.067649), toFIXED(-3.045725), toFIXED( 0.732299)},
   {toFIXED(-0.233347), toFIXED(-3.142815), toFIXED( 1.623674)},
   {toFIXED(-1.025913), toFIXED(-2.764580), toFIXED( 0.053442)},
   {toFIXED(-0.896142), toFIXED(-3.703387), toFIXED(-0.009511)},
   {toFIXED(-0.938136), toFIXED(-3.945115), toFIXED( 0.689177)},
   {toFIXED( 1.080781), toFIXED(-3.851282), toFIXED( 1.142976)},
   {toFIXED(-0.438316), toFIXED(-3.997663), toFIXED( 1.460000)},
   {toFIXED( 0.370083), toFIXED(-3.989688), toFIXED( 1.359281)},
   {toFIXED(-0.494860), toFIXED(-3.515781), toFIXED(-0.878476)},
   {toFIXED( 0.810023), toFIXED(-3.467684), toFIXED(-0.414756)},
   {toFIXED( 0.612322), toFIXED(-1.774507), toFIXED( 1.916716)},
   {toFIXED(-0.372903), toFIXED(-1.219770), toFIXED(-0.358252)},
   {toFIXED( 1.113440), toFIXED(-1.217486), toFIXED(-0.246584)},
   {toFIXED( 1.460373), toFIXED(-1.630678), toFIXED( 1.533453)},
   {toFIXED(-0.877822), toFIXED(-1.744456), toFIXED( 1.018020)},
   {toFIXED(-0.308495), toFIXED(-1.781005), toFIXED( 2.045030)},
   {toFIXED(-0.829989), toFIXED(-1.479773), toFIXED( 0.218562)},
   {toFIXED( 0.354613), toFIXED( 1.474857), toFIXED( 1.385041)},
   {toFIXED(-0.626561), toFIXED( 2.153658), toFIXED(-0.365323)},
   {toFIXED( 0.592818), toFIXED( 2.149210), toFIXED(-0.280600)},
   {toFIXED( 0.856342), toFIXED( 1.576889), toFIXED( 1.174011)},
   {toFIXED(-0.777275), toFIXED( 1.519217), toFIXED( 0.777243)},
   {toFIXED(-0.344824), toFIXED( 1.462828), toFIXED( 1.481889)},
   {toFIXED(-0.740942), toFIXED( 1.763974), toFIXED( 0.186249)},
   {toFIXED( 0.220142), toFIXED( 4.785860), toFIXED( 1.730659)},
   {toFIXED(-0.800850), toFIXED( 4.347488), toFIXED( 0.325221)},
   {toFIXED( 0.798853), toFIXED( 4.448820), toFIXED( 0.376695)},
   {toFIXED( 0.592491), toFIXED( 4.784965), toFIXED( 1.547917)},
   {toFIXED(-0.753261), toFIXED( 4.780829), toFIXED( 0.709941)},
   {toFIXED(-0.415874), toFIXED( 4.785656), toFIXED( 1.688693)},
   {toFIXED( 0.518091), toFIXED( 3.992715), toFIXED(-3.210994)},
   {toFIXED(-0.713245), toFIXED( 4.044528), toFIXED(-3.319690)},
   {toFIXED( 0.336035), toFIXED( 4.760291), toFIXED(-3.456443)},
   {toFIXED(-0.665247), toFIXED( 4.759841), toFIXED(-3.548115)},
   {toFIXED(-0.864521), toFIXED( 4.772328), toFIXED(-1.014358)},
   {toFIXED( 0.736354), toFIXED( 4.772401), toFIXED(-0.999957)},
   {toFIXED(-0.732396), toFIXED( 3.513742), toFIXED(-1.646168)},
   {toFIXED( 0.877748), toFIXED( 3.533031), toFIXED(-1.561562)},
   {toFIXED(-0.828082), toFIXED( 4.765409), toFIXED(-2.417458)},
   {toFIXED(-0.805012), toFIXED( 3.870941), toFIXED(-2.533451)},
   {toFIXED( 0.884963), toFIXED( 3.851603), toFIXED(-2.448654)},
   {toFIXED( 0.872170), toFIXED( 4.765690), toFIXED(-2.361153)},
   {toFIXED( 1.080781), toFIXED(-3.851282), toFIXED( 1.142976)},
   {toFIXED( 0.776204), toFIXED(-4.847353), toFIXED(-0.962137)},
};

static POLYGON polygon_L_CALF[50] = {
   {{ 0.985027,  0.132582,  0.110195}, {  9,  13,  12,  11}},
   {{ 0.780998,  0.039879, -0.623259}, { 10,  15,  13,   9}},
   {{-0.130269,  0.209713, -0.969046}, {  5,  16,  15,  10}},
   {{ 0.781942, -0.185494,  0.595113}, { 11,  12,  17,   6}},
   {{-0.383607,  0.190934, -0.903543}, {  8,  14,  16,   5}},
   {{-0.202560, -0.213531,  0.955706}, {  6,  17,  18,   7}},
   {{-0.347680, -0.009866, -0.937561}, { 14,   1,   0,  16}},
   {{-0.129329, -0.061971, -0.989663}, { 16,   0,   3,  15}},
   {{ 0.855854, -0.034202, -0.516086}, { 15,   3,   2,  13}},
   {{ 0.998772, -0.041336,  0.027306}, { 13,   2,   4,  12}},
   {{ 0.685127, -0.097223,  0.721907}, { 25,  11,   6,  20}},
   {{-0.440882,  0.273962, -0.854732}, { 22,   8,   5,  19}},
   {{ 0.805207,  0.119540, -0.580820}, { 24,  10,   9,  23}},
   {{ 0.988914, -0.148404,  0.005122}, { 23,   9,  11,  25}},
   {{-0.135151,  0.286653, -0.948454}, { 19,   5,  10,  24}},
   {{-0.074797, -0.061964,  0.995272}, { 20,   6,   7,  21}},
   {{ 0.998357, -0.026966,  0.050553}, { 30,  23,  25,  32}},
   {{-0.133711, -0.170654, -0.976216}, { 26,  19,  24,  31}},
   {{-0.072395, -0.002237,  0.997374}, { 27,  20,  21,  28}},
   {{-0.098681, -0.895964,  0.433026}, { 34,  35,  36,  37}},
   {{ 0.886014,  0.024796,  0.462995}, { 32,  25,  20,  27}},
   {{-0.369804, -0.175277, -0.912427}, { 29,  22,  19,  26}},
   {{ 0.861787, -0.070562, -0.502338}, { 31,  24,  23,  30}},
   {{ 0.909487,  0.015299, -0.415450}, { 38,  31,  30,  37}},
   {{ 0.999899,  0.006297, -0.012752}, { 37,  30,  32,  34}},
   {{-0.041671,  0.081632, -0.995791}, { 33,  26,  31,  38}},
   {{-0.999688, -0.014327,  0.020474}, { 36,  35,  28,  29}},
   {{ 0.000001, -0.999988,  0.004926}, { 41,  50,  47,  42}},
   {{-0.977837, -0.159135,  0.136057}, { 22,  29,  28,  21}},
   {{ 0.977483,  0.011332,  0.210709}, { 32,  27,  34,  32}},
   {{-0.416757,  0.074528, -0.905958}, { 36,  29,  26,  33}},
   {{-0.976563,  0.074274,  0.202009}, { 21,   7,   8,  22}},
   {{-0.956735,  0.189947,  0.220406}, {  8,   7,  18,  51}},
   {{-0.078573,  0.297003,  0.951638}, { 42,  40,  39,  41}},
   {{ 0.991346, -0.006193,  0.131127}, { 42,  47,  48,  40}},
   {{ 0.010808,  0.980285,  0.197291}, { 40,  48,  49,  39}},
   {{-0.899368, -0.063581,  0.432544}, { 39,  49,  50,  41}},
   {{-0.997530,  0.038465, -0.058778}, { 46,  28,  35,  44}},
   {{-0.047185,  0.683320,  0.728593}, { 45,  27,  28,  46}},
   {{ 0.995965,  0.089675, -0.003342}, { 43,  34,  27,  45}},
   {{ 0.036007, -0.963018, -0.267019}, { 44,  35,  34,  43}},
   {{-0.996263, -0.050132, -0.070333}, { 49,  46,  44,  50}},
   {{-0.018283,  0.934139,  0.356441}, { 48,  45,  46,  49}},
   {{ 0.997288,  0.073455, -0.004518}, { 47,  43,  45,  48}},
   {{ 0.000002, -0.999988,  0.004931}, { 50,  44,  43,  47}},
   {{ 0.000002, -0.999988,  0.004926}, { 36,  33,  38,  37}},
   {{ 0.000000,  0.000000,  1.000000}, { 18,  51,  14,  18}},
   {{-0.987939, -0.021875,  0.153290}, { 18,  52,   1,  51}},
   {{-0.886357,  0.312200, -0.341911}, { 17,   4,  12,  17}},
   {{ 0.144008,  0.198377, -0.969489}, { 17,  18,  52,   4}},
};

static ATTR attribute_L_CALF[50] = {
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
};

static jo_3d_mesh     mesh_L_CALF = { 
   .data =
   {
       point_L_CALF,
        53,
       polygon_L_CALF,
        50,
       attribute_L_CALF,
   }
};

static __jo_force_inline void      display_L_CALF_mesh(void){
   jo_3d_mesh_draw(&mesh_L_CALF);
}

// L_FARM
static POINT point_L_FARM[42] = {
   {toFIXED(-3.438246), toFIXED(-0.654173), toFIXED( 0.377491)},
   {toFIXED(-3.359992), toFIXED( 0.744895), toFIXED(-0.043608)},
   {toFIXED(-3.677277), toFIXED(-0.669511), toFIXED(-0.446583)},
   {toFIXED(-3.569108), toFIXED(-0.322654), toFIXED( 0.988244)},
   {toFIXED(-3.635828), toFIXED( 0.559589), toFIXED( 0.767238)},
   {toFIXED(-3.759321), toFIXED( 0.142971), toFIXED(-0.726324)},
   {toFIXED(-2.260609), toFIXED(-0.958065), toFIXED( 0.424915)},
   {toFIXED(-1.901698), toFIXED( 1.058915), toFIXED(-0.146088)},
   {toFIXED(-2.297526), toFIXED(-0.992468), toFIXED(-0.712863)},
   {toFIXED(-2.148172), toFIXED(-0.462766), toFIXED( 1.268030)},
   {toFIXED(-2.240297), toFIXED( 0.856383), toFIXED( 0.962379)},
   {toFIXED(-2.410810), toFIXED( 0.234351), toFIXED(-1.099635)},
   {toFIXED(-0.161961), toFIXED(-0.686598), toFIXED( 0.251527)},
   {toFIXED(-0.115100), toFIXED( 0.706064), toFIXED(-0.155001)},
   {toFIXED(-0.397062), toFIXED(-0.702237), toFIXED(-0.558995)},
   {toFIXED(-0.290671), toFIXED(-0.344503), toFIXED( 0.852159)},
   {toFIXED(-0.356296), toFIXED( 0.566335), toFIXED( 0.634576)},
   {toFIXED(-0.477758), toFIXED( 0.136598), toFIXED(-0.834334)},
   {toFIXED( 1.585605), toFIXED(-0.363735), toFIXED(-0.002166)},
   {toFIXED( 1.610388), toFIXED( 0.372826), toFIXED(-0.217173)},
   {toFIXED( 1.461261), toFIXED(-0.372004), toFIXED(-0.430840)},
   {toFIXED( 1.517530), toFIXED(-0.182806), toFIXED( 0.315502)},
   {toFIXED( 1.482823), toFIXED( 0.298926), toFIXED( 0.200424)},
   {toFIXED( 1.418582), toFIXED( 0.071643), toFIXED(-0.576463)},
   {toFIXED( 2.813807), toFIXED(-0.698216), toFIXED( 0.218098)},
   {toFIXED( 2.874642), toFIXED( 1.109776), toFIXED(-0.309666)},
   {toFIXED( 2.508589), toFIXED(-0.718514), toFIXED(-0.834143)},
   {toFIXED( 2.748989), toFIXED(-0.181050), toFIXED( 0.675922)},
   {toFIXED( 2.682364), toFIXED( 0.743701), toFIXED( 0.455015)},
   {toFIXED( 2.403829), toFIXED( 0.370481), toFIXED(-1.191596)},
   {toFIXED( 3.679785), toFIXED(-0.281754), toFIXED( 0.018873)},
   {toFIXED( 3.716244), toFIXED( 0.801857), toFIXED(-0.297441)},
   {toFIXED( 3.496852), toFIXED(-0.293919), toFIXED(-0.611784)},
   {toFIXED( 3.203582), toFIXED(-0.259727), toFIXED( 0.540283)},
   {toFIXED( 3.163648), toFIXED( 0.295209), toFIXED( 0.548180)},
   {toFIXED( 3.434067), toFIXED( 0.358765), toFIXED(-0.826021)},
   {toFIXED(-1.285250), toFIXED( 0.937166), toFIXED(-0.149163)},
   {toFIXED(-1.590240), toFIXED( 0.756305), toFIXED( 0.849274)},
   {toFIXED(-1.507259), toFIXED(-0.421961), toFIXED( 1.124538)},
   {toFIXED(-1.536490), toFIXED(-0.864398), toFIXED( 0.365089)},
   {toFIXED(-1.641789), toFIXED(-0.892326), toFIXED(-0.659772)},
   {toFIXED(-1.743829), toFIXED( 0.200623), toFIXED(-1.008095)},
};

static POLYGON polygon_L_FARM[38] = {
   {{ 0.211489, -0.791856,  0.572920}, {  7,   1,   5,  11}},
   {{ 0.233037,  0.970773, -0.057392}, {  8,   2,   0,   6}},
   {{-0.199847, -0.238423, -0.950377}, { 15,  38,  37,  16}},
   {{-0.188270, -0.955104, -0.228761}, { 16,  37,  36,  13}},
   {{ 0.241910,  0.322292,  0.915209}, { 11,   5,   2,   8}},
   {{ 0.206188,  0.851705, -0.481753}, {  6,   0,   3,   9}},
   {{ 0.211544, -0.968941, -0.128073}, { 10,   4,   1,   7}},
   {{ 0.174045, -0.217225, -0.960480}, {  9,   3,   4,  10}},
   {{-0.118489,  0.299363,  0.946754}, { 23,  17,  14,  20}},
   {{-0.116624, -0.729597,  0.673860}, { 19,  13,  17,  23}},
   {{-0.139079,  0.990279,  0.002288}, { 14,  40,  39,  12}},
   {{-0.134104, -0.718955,  0.681997}, { 13,  36,  41,  17}},
   {{-0.118481,  0.294897,  0.948155}, { 17,  41,  40,  14}},
   {{-0.158530,  0.850204, -0.502017}, { 12,  39,  38,  15}},
   {{ 0.275222, -0.204568, -0.939364}, { 27,  21,  22,  28}},
   {{ 0.434070, -0.876371, -0.208704}, { 28,  22,  19,  25}},
   {{-0.227544,  0.824378, -0.518291}, { 18,  12,  15,  21}},
   {{-0.192544, -0.954498, -0.227731}, { 22,  16,  13,  19}},
   {{-0.256113, -0.242013, -0.935861}, { 21,  15,  16,  22}},
   {{-0.177035,  0.983672,  0.032374}, { 20,  14,  12,  18}},
   {{-0.319511,  0.267635,  0.909002}, { 35,  29,  26,  32}},
   {{-0.255126, -0.669615,  0.697515}, { 31,  25,  29,  35}},
   {{ 0.277972,  0.955468, -0.099061}, { 26,  20,  18,  24}},
   {{ 0.483899, -0.780451,  0.395901}, { 25,  19,  23,  29}},
   {{ 0.430587,  0.318603,  0.844445}, { 29,  23,  20,  26}},
   {{ 0.247626,  0.740793, -0.624426}, { 24,  18,  21,  27}},
   {{-0.772600, -0.119023, -0.623637}, { 30,  33,  34,  31}},
   {{-0.936024,  0.089789,  0.340290}, { 32,  30,  31,  35}},
   {{-0.337262,  0.733439, -0.590188}, { 30,  24,  27,  33}},
   {{-0.373332, -0.732276, -0.569557}, { 34,  28,  25,  31}},
   {{-0.129203, -0.150402, -0.980146}, { 33,  27,  28,  34}},
   {{-0.411978,  0.905463,  0.102035}, { 32,  26,  24,  30}},
   {{-0.157297,  0.858351, -0.488356}, { 39,   6,   9,  38}},
   {{-0.118401,  0.289950,  0.949690}, { 41,  11,   8,  40}},
   {{-0.133884, -0.714404,  0.686805}, { 36,   7,  11,  41}},
   {{-0.139156,  0.990081, -0.019385}, { 40,   8,   6,  39}},
   {{-0.188388, -0.954484, -0.231234}, { 37,  10,   7,  36}},
   {{-0.199858, -0.235260, -0.951162}, { 38,   9,  10,  37}},
};

static ATTR attribute_L_FARM[38] = {
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
};

static jo_3d_mesh     mesh_L_FARM = { 
   .data =
   {
       point_L_FARM,
        42,
       polygon_L_FARM,
        38,
       attribute_L_FARM,
   }
};

static __jo_force_inline void      display_L_FARM_mesh(void){
   jo_3d_mesh_draw(&mesh_L_FARM);
}

// L_THIGH
static POINT point_L_THIGH[19] = {
   {toFIXED(-1.245872), toFIXED(-1.252027), toFIXED(-1.531077)},
   {toFIXED(-0.926484), toFIXED(-1.075718), toFIXED( 1.543150)},
   {toFIXED(-1.260912), toFIXED(-1.116369), toFIXED(-0.015684)},
   {toFIXED( 0.611452), toFIXED(-1.272498), toFIXED( 1.299445)},
   {toFIXED( 0.703669), toFIXED(-2.209751), toFIXED(-0.728526)},
   {toFIXED( 1.396677), toFIXED(-1.831414), toFIXED( 0.114819)},
   {toFIXED( 0.262351), toFIXED( 1.692579), toFIXED( 0.949475)},
   {toFIXED(-0.469526), toFIXED( 2.285621), toFIXED(-0.977446)},
   {toFIXED( 0.634608), toFIXED( 2.222345), toFIXED(-0.623119)},
   {toFIXED( 0.892328), toFIXED( 1.819882), toFIXED( 0.673308)},
   {toFIXED(-0.746291), toFIXED( 1.822013), toFIXED( 0.284378)},
   {toFIXED( 1.495339), toFIXED(-0.809538), toFIXED( 0.423809)},
   {toFIXED(-1.026258), toFIXED( 0.155352), toFIXED( 0.933792)},
   {toFIXED( 0.748207), toFIXED(-0.637305), toFIXED( 1.185856)},
   {toFIXED( 1.002516), toFIXED(-0.288926), toFIXED(-0.845115)},
   {toFIXED(-0.788303), toFIXED( 0.381689), toFIXED(-1.436671)},
   {toFIXED(-0.809073), toFIXED( 2.002849), toFIXED(-0.292698)},
   {toFIXED(-1.178096), toFIXED( 0.320964), toFIXED(-0.229171)},
   {toFIXED( 0.703669), toFIXED(-2.209751), toFIXED(-0.728526)},
};

static POLYGON polygon_L_THIGH[12] = {
   {{-0.340689, -0.147065,  0.928603}, {  7,  15,  14,   8}},
   {{-0.104430, -0.357446, -0.928077}, {  1,  12,  13,   3}},
   {{-0.599613, -0.129562, -0.789733}, {  9,  11,  13,   6}},
   {{ 0.961623, -0.220996, -0.162610}, { 10,  12,  17,  16}},
   {{-0.957440, -0.199925,  0.208180}, { 14,  11,   9,   8}},
   {{ 0.247174, -0.197520, -0.948626}, { 12,  10,   6,  13}},
   {{ 0.982862, -0.048589, -0.177825}, { 12,   1,   2,  17}},
   {{-0.738437,  0.181490, -0.649440}, { 11,   5,   3,  13}},
   {{-0.319862,  0.073962,  0.944573}, { 15,   0,   4,  14}},
   {{ 0.924132, -0.212312,  0.317653}, {  7,  16,  17,  15}},
   {{ 0.974776, -0.165726,  0.149488}, { 15,  17,   2,   0}},
   {{-0.866388,  0.084859,  0.492108}, { 11,  14,   4,   5}},
};

static ATTR attribute_L_THIGH[12] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
};

static jo_3d_mesh mesh_L_THIGH = {
    .data =
        {
            point_L_THIGH,
            19,
            polygon_L_THIGH,
            12,
            attribute_L_THIGH,
        }};

static __jo_force_inline void display_L_THIGH_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L_THIGH);
}

// L_UARM
static POINT point_L_UARM[12] = {
   {toFIXED(-1.803820), toFIXED(-0.372663), toFIXED( 0.795642)},
   {toFIXED(-1.802343), toFIXED(-0.805969), toFIXED(-0.707556)},
   {toFIXED(-1.995831), toFIXED(-1.011133), toFIXED( 0.306497)},
   {toFIXED(-1.690169), toFIXED( 0.838909), toFIXED( 0.887159)},
   {toFIXED(-1.663595), toFIXED( 0.132724), toFIXED(-0.670952)},
   {toFIXED(-1.614734), toFIXED( 0.906126), toFIXED(-0.058504)},
   {toFIXED( 1.544899), toFIXED(-0.441404), toFIXED( 0.086515)},
   {toFIXED( 1.615294), toFIXED( 0.670158), toFIXED(-0.248049)},
   {toFIXED( 2.008014), toFIXED(-0.453591), toFIXED(-0.568214)},
   {toFIXED( 1.427180), toFIXED(-0.178012), toFIXED( 0.571761)},
   {toFIXED( 2.049800), toFIXED( 0.522934), toFIXED( 0.396171)},
   {toFIXED( 1.925303), toFIXED( 0.191928), toFIXED(-0.790469)},
};

static POLYGON polygon_L_UARM[6] = {
   {{-0.123480,  0.990155,  0.065917}, {  8,   1,   2,   6}},
   {{-0.102090, -0.004427, -0.994765}, {  9,   0,   3,  10}},
   {{ 0.015851, -0.676253,  0.736499}, {  7,   5,   4,  11}},
   {{-0.009153,  0.116707,  0.993124}, { 11,   4,   1,   8}},
   {{-0.126539,  0.732784, -0.668592}, {  6,   2,   0,   9}},
   {{-0.089419, -0.989532, -0.113272}, { 10,   3,   5,   7}},
};

static ATTR attribute_L_UARM[6] = {
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
};

static jo_3d_mesh     mesh_L_UARM = { 
   .data =
   {
       point_L_UARM,
        12,
       polygon_L_UARM,
         6,
       attribute_L_UARM,
   }
};

static __jo_force_inline void      display_L_UARM_mesh(void){
   jo_3d_mesh_draw(&mesh_L_UARM);
}

// LOWER
static POINT point_LOWER[29] = {
   {toFIXED( 1.647912), toFIXED(-1.280132), toFIXED(-1.893326)},
   {toFIXED( 1.647912), toFIXED( 0.148165), toFIXED( 1.174390)},
   {toFIXED( 1.647912), toFIXED(-2.268039), toFIXED(-0.452244)},
   {toFIXED( 2.387592), toFIXED( 2.410413), toFIXED( 1.022748)},
   {toFIXED( 2.387592), toFIXED( 1.394419), toFIXED(-1.388265)},
   {toFIXED( 2.009315), toFIXED(-1.953860), toFIXED(-1.114848)},
   {toFIXED( 1.750079), toFIXED(-1.240236), toFIXED( 0.571840)},
   {toFIXED(-0.001308), toFIXED( 0.130340), toFIXED( 1.569127)},
   {toFIXED(-0.001308), toFIXED(-2.641407), toFIXED( 0.348319)},
   {toFIXED( 3.116129), toFIXED( 1.843936), toFIXED(-0.386254)},
   {toFIXED(-0.001308), toFIXED(-0.378066), toFIXED(-2.269486)},
   {toFIXED( 2.700792), toFIXED(-0.168025), toFIXED(-0.294486)},
   {toFIXED(-0.001308), toFIXED(-1.904008), toFIXED( 0.874492)},
   {toFIXED(-0.001308), toFIXED( 2.532328), toFIXED(-2.341806)},
   {toFIXED(-0.001308), toFIXED( 1.127438), toFIXED( 1.530805)},
   {toFIXED(-0.001308), toFIXED(-1.025416), toFIXED( 1.380110)},
   {toFIXED( 1.828614), toFIXED(-0.545610), toFIXED( 0.959510)},
   {toFIXED( 1.020203), toFIXED( 2.738365), toFIXED( 1.255153)},
   {toFIXED(-1.650529), toFIXED(-1.280132), toFIXED(-1.893326)},
   {toFIXED(-1.650529), toFIXED( 0.148165), toFIXED( 1.174390)},
   {toFIXED(-1.650529), toFIXED(-2.268039), toFIXED(-0.452244)},
   {toFIXED(-2.390209), toFIXED( 2.410413), toFIXED( 1.022748)},
   {toFIXED(-2.390209), toFIXED( 1.394419), toFIXED(-1.388265)},
   {toFIXED(-2.011932), toFIXED(-1.953860), toFIXED(-1.114848)},
   {toFIXED(-1.752696), toFIXED(-1.240236), toFIXED( 0.571840)},
   {toFIXED(-3.080804), toFIXED( 1.843936), toFIXED(-0.386254)},
   {toFIXED(-2.703409), toFIXED(-0.168025), toFIXED(-0.294486)},
   {toFIXED(-1.831231), toFIXED(-0.545610), toFIXED( 0.959510)},
   {toFIXED(-1.022820), toFIXED( 2.738365), toFIXED( 1.255153)},
};

static POLYGON polygon_LOWER[29] = {
   {{-0.406730,  0.616008, -0.674614}, {  2,   8,  12,   6}},
   {{-0.815180,  0.349808, -0.461645}, { 11,   6,  16,  11}},
   {{-0.318368,  0.480041, -0.817436}, { 12,  15,  16,   6}},
   {{-0.851425,  0.152879, -0.501701}, {  9,  11,   3,   9}},
   {{-0.249083,  0.183336, -0.950971}, {  1,  16,  15,   7}},
   {{-0.785358,  0.161295, -0.597660}, {  1,   3,  11,  16}},
   {{-0.838181,  0.444028, -0.316689}, {  2,   6,  11,   5}},
   {{ 0.406730,  0.616008, -0.674614}, { 12,   8,  20,  24}},
   {{ 0.815180,  0.349808, -0.461645}, { 26,  27,  24,  26}},
   {{ 0.318368,  0.480041, -0.817436}, { 27,  15,  12,  24}},
   {{ 0.865566,  0.140434, -0.480701}, { 25,  21,  26,  25}},
   {{ 0.249083,  0.183336, -0.950971}, { 15,  27,  19,   7}},
   {{ 0.785358,  0.161295, -0.597660}, { 26,  21,  19,  27}},
   {{ 0.838181,  0.444028, -0.316689}, { 23,  26,  24,  20}},
   {{ 0.845872,  0.181541,  0.501541}, { 26,  22,  25,  26}},
   {{-0.832844,  0.195545,  0.517815}, { 11,   9,   4,  11}},
   {{-0.868400,  0.137024,  0.476556}, {  0,   5,  11,   4}},
   {{-0.326264, -0.029995,  0.944803}, { 13,  10,   0,   4}},
   {{ 0.326264, -0.029995,  0.944803}, { 18,  10,  13,  22}},
   {{ 0.868400,  0.137024,  0.476556}, { 26,  23,  18,  22}},
   {{ 0.000000,  0.903572,  0.428436}, { 23,  20,   2,   5}},
   {{ 0.000000,  0.384876,  0.922968}, {  0,  10,  18,   0}},
   {{ 0.000000,  0.906282,  0.422674}, { 20,   8,   2,  20}},
   {{ 0.000000,  0.756147,  0.654402}, {  5,   0,  18,  23}},
   {{ 0.000000, -0.168662, -0.985674}, { 17,  14,  28,  17}},
   {{-0.169991, -0.010471, -0.985390}, {  3,   1,  17,   3}},
   {{-0.227135, -0.028228, -0.973454}, { 14,  17,   1,   7}},
   {{ 0.169991, -0.010471, -0.985390}, { 19,  21,  28,  19}},
   {{ 0.227135, -0.028228, -0.973454}, {  7,  19,  28,  14}},
};

static ATTR attribute_LOWER[29] = {
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),       // DarkRed.001
};

static jo_3d_mesh     mesh_LOWER = { 
   .data =
   {
       point_LOWER,
        29,
       polygon_LOWER,
        29,
       attribute_LOWER,
   }
};

static __jo_force_inline void      display_LOWER_mesh(void){
   jo_3d_mesh_draw(&mesh_LOWER);
}

// R_CALF
static POINT point_R_CALF[53] = {
   {toFIXED(-0.336264), toFIXED(-5.184571), toFIXED( 1.433100)},
   {toFIXED(-1.080781), toFIXED(-5.034123), toFIXED( 1.106721)},
   {toFIXED( 0.971956), toFIXED(-5.100778), toFIXED( 0.648141)},
   {toFIXED( 0.472135), toFIXED(-5.198469), toFIXED( 1.545034)},
   {toFIXED( 0.929962), toFIXED(-4.832001), toFIXED(-0.952380)},
   {toFIXED(-0.570078), toFIXED(-3.129004), toFIXED( 1.512429)},
   {toFIXED( 0.289544), toFIXED(-2.501662), toFIXED(-0.431972)},
   {toFIXED(-1.007310), toFIXED(-2.506772), toFIXED(-0.334653)},
   {toFIXED(-1.276194), toFIXED(-2.979482), toFIXED( 1.188058)},
   {toFIXED( 1.067649), toFIXED(-3.045725), toFIXED( 0.732299)},
   {toFIXED( 0.233347), toFIXED(-3.142815), toFIXED( 1.623674)},
   {toFIXED( 1.025914), toFIXED(-2.764580), toFIXED( 0.053442)},
   {toFIXED( 0.896143), toFIXED(-3.703387), toFIXED(-0.009511)},
   {toFIXED( 0.938136), toFIXED(-3.945115), toFIXED( 0.689177)},
   {toFIXED(-1.080781), toFIXED(-3.851282), toFIXED( 1.142976)},
   {toFIXED( 0.438316), toFIXED(-3.997663), toFIXED( 1.460000)},
   {toFIXED(-0.370083), toFIXED(-3.989688), toFIXED( 1.359281)},
   {toFIXED( 0.494861), toFIXED(-3.515781), toFIXED(-0.878476)},
   {toFIXED(-0.810023), toFIXED(-3.467684), toFIXED(-0.414756)},
   {toFIXED(-0.612322), toFIXED(-1.774507), toFIXED( 1.916716)},
   {toFIXED( 0.372903), toFIXED(-1.219770), toFIXED(-0.358252)},
   {toFIXED(-1.113440), toFIXED(-1.217486), toFIXED(-0.246584)},
   {toFIXED(-1.460373), toFIXED(-1.630678), toFIXED( 1.533453)},
   {toFIXED( 0.877822), toFIXED(-1.744456), toFIXED( 1.018020)},
   {toFIXED( 0.308495), toFIXED(-1.781005), toFIXED( 2.045030)},
   {toFIXED( 0.829989), toFIXED(-1.479773), toFIXED( 0.218562)},
   {toFIXED(-0.354613), toFIXED( 1.474857), toFIXED( 1.385041)},
   {toFIXED( 0.626561), toFIXED( 2.153658), toFIXED(-0.365323)},
   {toFIXED(-0.592818), toFIXED( 2.149210), toFIXED(-0.280600)},
   {toFIXED(-0.856342), toFIXED( 1.576889), toFIXED( 1.174011)},
   {toFIXED( 0.777276), toFIXED( 1.519217), toFIXED( 0.777243)},
   {toFIXED( 0.344824), toFIXED( 1.462828), toFIXED( 1.481889)},
   {toFIXED( 0.740942), toFIXED( 1.763974), toFIXED( 0.186249)},
   {toFIXED(-0.220142), toFIXED( 4.785860), toFIXED( 1.730659)},
   {toFIXED( 0.800851), toFIXED( 4.347488), toFIXED( 0.325221)},
   {toFIXED(-0.798853), toFIXED( 4.448820), toFIXED( 0.376695)},
   {toFIXED(-0.592491), toFIXED( 4.784965), toFIXED( 1.547917)},
   {toFIXED( 0.753261), toFIXED( 4.780829), toFIXED( 0.709941)},
   {toFIXED( 0.415874), toFIXED( 4.785656), toFIXED( 1.688693)},
   {toFIXED(-0.518091), toFIXED( 3.992715), toFIXED(-3.210994)},
   {toFIXED( 0.713246), toFIXED( 4.044528), toFIXED(-3.319690)},
   {toFIXED(-0.336035), toFIXED( 4.760291), toFIXED(-3.456443)},
   {toFIXED( 0.665247), toFIXED( 4.759841), toFIXED(-3.548115)},
   {toFIXED( 0.864521), toFIXED( 4.772328), toFIXED(-1.014358)},
   {toFIXED(-0.736354), toFIXED( 4.772401), toFIXED(-0.999957)},
   {toFIXED( 0.732397), toFIXED( 3.513742), toFIXED(-1.646168)},
   {toFIXED(-0.877748), toFIXED( 3.533031), toFIXED(-1.561562)},
   {toFIXED( 0.828082), toFIXED( 4.765409), toFIXED(-2.417458)},
   {toFIXED( 0.805012), toFIXED( 3.870941), toFIXED(-2.533451)},
   {toFIXED(-0.884963), toFIXED( 3.851603), toFIXED(-2.448654)},
   {toFIXED(-0.872170), toFIXED( 4.765690), toFIXED(-2.361153)},
   {toFIXED(-1.080781), toFIXED(-3.851282), toFIXED( 1.142976)},
   {toFIXED(-0.776204), toFIXED(-4.847353), toFIXED(-0.962137)},
};

static POLYGON polygon_R_CALF[50] = {
   {{-0.985027,  0.132582,  0.110195}, { 12,  13,   9,  11}},
   {{-0.780998,  0.039878, -0.623259}, { 13,  15,  10,   9}},
   {{ 0.130269,  0.209713, -0.969046}, { 15,  16,   5,  10}},
   {{-0.781941, -0.185495,  0.595113}, { 17,  12,  11,   6}},
   {{ 0.383607,  0.190934, -0.903543}, { 16,  14,   8,   5}},
   {{ 0.202560, -0.213531,  0.955706}, { 18,  17,   6,   7}},
   {{ 0.347680, -0.009866, -0.937561}, {  0,   1,  14,  16}},
   {{ 0.129329, -0.061971, -0.989663}, {  3,   0,  16,  15}},
   {{-0.855854, -0.034202, -0.516086}, {  2,   3,  15,  13}},
   {{-0.998772, -0.041336,  0.027306}, {  4,   2,  13,  12}},
   {{-0.685127, -0.097223,  0.721907}, {  6,  11,  25,  20}},
   {{ 0.440882,  0.273962, -0.854732}, {  5,   8,  22,  19}},
   {{-0.805207,  0.119540, -0.580820}, {  9,  10,  24,  23}},
   {{-0.988914, -0.148404,  0.005122}, { 11,   9,  23,  25}},
   {{ 0.135151,  0.286653, -0.948454}, { 10,   5,  19,  24}},
   {{ 0.074797, -0.061964,  0.995272}, {  7,   6,  20,  21}},
   {{-0.998357, -0.026966,  0.050553}, { 25,  23,  30,  32}},
   {{ 0.133711, -0.170654, -0.976216}, { 24,  19,  26,  31}},
   {{ 0.072394, -0.002237,  0.997374}, { 21,  20,  27,  28}},
   {{ 0.098681, -0.895963,  0.433026}, { 36,  35,  34,  37}},
   {{-0.886014,  0.024796,  0.462995}, { 20,  25,  32,  27}},
   {{ 0.369804, -0.175277, -0.912427}, { 19,  22,  29,  26}},
   {{-0.861787, -0.070562, -0.502338}, { 23,  24,  31,  30}},
   {{-0.909487,  0.015299, -0.415450}, { 30,  31,  38,  37}},
   {{-0.999899,  0.006297, -0.012752}, { 32,  30,  37,  34}},
   {{ 0.041671,  0.081632, -0.995791}, { 31,  26,  33,  38}},
   {{ 0.999688, -0.014327,  0.020474}, { 28,  35,  36,  29}},
   {{-0.000001, -0.999988,  0.004926}, { 47,  50,  41,  42}},
   {{ 0.977837, -0.159135,  0.136057}, { 28,  29,  22,  21}},
   {{-0.977483,  0.011332,  0.210709}, { 32,  34,  27,  32}},
   {{ 0.416757,  0.074528, -0.905958}, { 26,  29,  36,  33}},
   {{ 0.976563,  0.074274,  0.202009}, {  8,   7,  21,  22}},
   {{ 0.956735,  0.189947,  0.220406}, { 18,   7,   8,  51}},
   {{ 0.078573,  0.297004,  0.951638}, { 39,  40,  42,  41}},
   {{-0.991346, -0.006193,  0.131127}, { 48,  47,  42,  40}},
   {{-0.010808,  0.980285,  0.197291}, { 49,  48,  40,  39}},
   {{ 0.899368, -0.063581,  0.432544}, { 50,  49,  39,  41}},
   {{ 0.997530,  0.038465, -0.058778}, { 35,  28,  46,  44}},
   {{ 0.047185,  0.683320,  0.728593}, { 28,  27,  45,  46}},
   {{-0.995965,  0.089675, -0.003342}, { 27,  34,  43,  45}},
   {{-0.036007, -0.963018, -0.267019}, { 34,  35,  44,  43}},
   {{ 0.996263, -0.050132, -0.070333}, { 44,  46,  49,  50}},
   {{ 0.018283,  0.934139,  0.356441}, { 46,  45,  48,  49}},
   {{-0.997288,  0.073455, -0.004518}, { 45,  43,  47,  48}},
   {{-0.000002, -0.999988,  0.004931}, { 43,  44,  50,  47}},
   {{-0.000002, -0.999988,  0.004926}, { 38,  33,  36,  37}},
   {{ 0.000000,  0.000000,  1.000000}, { 18,  14,  51,  18}},
   {{ 0.987939, -0.021875,  0.153290}, {  1,  52,  18,  51}},
   {{ 0.886357,  0.312200, -0.341911}, { 17,  12,   4,  17}},
   {{-0.144008,  0.198377, -0.969489}, { 52,  18,  17,   4}},
};

static ATTR attribute_R_CALF[50] = {
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
};

static jo_3d_mesh     mesh_R_CALF = { 
   .data =
   {
       point_R_CALF,
        53,
       polygon_R_CALF,
        50,
       attribute_R_CALF,
   }
};

static __jo_force_inline void      display_R_CALF_mesh(void){
   jo_3d_mesh_draw(&mesh_R_CALF);
}

// R_FARM
static POINT point_R_FARM[48] = {
   {toFIXED( 3.330631), toFIXED(-0.647594), toFIXED( 0.371264)},
   {toFIXED( 3.252605), toFIXED( 0.751544), toFIXED(-0.049614)},
   {toFIXED( 3.569649), toFIXED(-0.662852), toFIXED(-0.452816)},
   {toFIXED( 3.461558), toFIXED(-0.316184), toFIXED( 0.982067)},
   {toFIXED( 3.651824), toFIXED( 0.149659), toFIXED(-0.732430)},
   {toFIXED( 2.153055), toFIXED(-0.952001), toFIXED( 0.418696)},
   {toFIXED( 1.794145), toFIXED( 1.064978), toFIXED(-0.152307)},
   {toFIXED( 2.189972), toFIXED(-0.986404), toFIXED(-0.719083)},
   {toFIXED( 2.040618), toFIXED(-0.456703), toFIXED( 1.261811)},
   {toFIXED( 2.132743), toFIXED( 0.862446), toFIXED( 0.956159)},
   {toFIXED( 2.303255), toFIXED( 0.240415), toFIXED(-1.105854)},
   {toFIXED( 0.054408), toFIXED(-0.680535), toFIXED( 0.245307)},
   {toFIXED( 0.007546), toFIXED( 0.712127), toFIXED(-0.161220)},
   {toFIXED( 0.289509), toFIXED(-0.696173), toFIXED(-0.565215)},
   {toFIXED( 0.183119), toFIXED(-0.338440), toFIXED( 0.845940)},
   {toFIXED( 0.248742), toFIXED( 0.572398), toFIXED( 0.628356)},
   {toFIXED( 0.370206), toFIXED( 0.142662), toFIXED(-0.840553)},
   {toFIXED(-1.693157), toFIXED(-0.357671), toFIXED(-0.008385)},
   {toFIXED(-1.717941), toFIXED( 0.378890), toFIXED(-0.223392)},
   {toFIXED(-1.568814), toFIXED(-0.365941), toFIXED(-0.437060)},
   {toFIXED(-1.625084), toFIXED(-0.176742), toFIXED( 0.309282)},
   {toFIXED(-1.590376), toFIXED( 0.304990), toFIXED( 0.194205)},
   {toFIXED(-1.526134), toFIXED( 0.077707), toFIXED(-0.582682)},
   {toFIXED(-2.896967), toFIXED(-0.755062), toFIXED( 0.268172)},
   {toFIXED(-2.962711), toFIXED( 1.198885), toFIXED(-0.302199)},
   {toFIXED(-2.567107), toFIXED(-0.776999), toFIXED(-0.869016)},
   {toFIXED(-2.856543), toFIXED(-0.174987), toFIXED( 0.669703)},
   {toFIXED(-2.789916), toFIXED( 0.749765), toFIXED( 0.448796)},
   {toFIXED(-2.453892), toFIXED( 0.399911), toFIXED(-1.255324)},
   {toFIXED(-3.832852), toFIXED(-0.304981), toFIXED( 0.052863)},
   {toFIXED(-3.872256), toFIXED( 0.866109), toFIXED(-0.288986)},
   {toFIXED(-3.635153), toFIXED(-0.318127), toFIXED(-0.628706)},
   {toFIXED(-3.311135), toFIXED(-0.253664), toFIXED( 0.534064)},
   {toFIXED(-3.271201), toFIXED( 0.301273), toFIXED( 0.541961)},
   {toFIXED(-3.567299), toFIXED( 0.387247), toFIXED(-0.860237)},
   {toFIXED( 1.071925), toFIXED( 0.922340), toFIXED(-0.155910)},
   {toFIXED( 1.371149), toFIXED( 0.745197), toFIXED( 0.823647)},
   {toFIXED( 1.289737), toFIXED(-0.408896), toFIXED( 1.093698)},
   {toFIXED( 1.304692), toFIXED(-0.842263), toFIXED( 0.348605)},
   {toFIXED( 1.421723), toFIXED(-0.869080), toFIXED(-0.656883)},
   {toFIXED( 1.521833), toFIXED( 0.200899), toFIXED(-0.998608)},
   {toFIXED( 0.641657), toFIXED( 0.837363), toFIXED(-0.158057)},
   {toFIXED( 0.799273), toFIXED(-0.776886), toFIXED( 0.306847)},
   {toFIXED( 1.056296), toFIXED( 0.177357), toFIXED(-0.934716)},
   {toFIXED( 0.917423), toFIXED( 0.675344), toFIXED( 0.744702)},
   {toFIXED( 0.842394), toFIXED(-0.380414), toFIXED( 0.993543)},
   {toFIXED( 0.964033), toFIXED(-0.799183), toFIXED(-0.619827)},
   {toFIXED( 3.502871), toFIXED( 0.578257), toFIXED( 0.719400)},
};

static POLYGON polygon_R_FARM[44] = {
   {{-0.211215, -0.791851,  0.573028}, {  4,   1,   6,  10}},
   {{-0.233446,  0.970674, -0.057405}, {  0,   2,   7,   5}},
   {{ 0.199842, -0.239626, -0.950075}, { 44,  45,  14,  15}},
   {{ 0.188225, -0.955333, -0.227836}, { 41,  44,  15,  12}},
   {{-0.242079,  0.322252,  0.915178}, {  2,   4,  10,   7}},
   {{-0.206473,  0.851692, -0.481653}, {  3,   0,   5,   8}},
   {{ 0.118489,  0.299363,  0.946754}, { 13,  16,  22,  19}},
   {{ 0.116624, -0.729597,  0.673860}, { 16,  12,  18,  22}},
   {{ 0.139033,  0.990233,  0.010378}, { 42,  46,  13,  11}},
   {{ 0.134186, -0.720660,  0.680179}, { 43,  41,  12,  16}},
   {{ 0.118511,  0.296787,  0.947562}, { 46,  43,  16,  13}},
   {{ 0.158989,  0.847044, -0.507188}, { 45,  42,  11,  14}},
   {{-0.275222, -0.204568, -0.939364}, { 21,  20,  26,  27}},
   {{-0.458281, -0.849224, -0.262291}, { 18,  21,  27,  24}},
   {{ 0.227544,  0.824378, -0.518291}, { 14,  11,  17,  20}},
   {{ 0.192544, -0.954498, -0.227731}, { 12,  15,  21,  18}},
   {{ 0.256113, -0.242013, -0.935861}, { 15,  14,  20,  21}},
   {{ 0.177035,  0.983672,  0.032373}, { 11,  13,  19,  17}},
   {{ 0.319511,  0.267635,  0.909002}, { 25,  28,  34,  31}},
   {{ 0.255125, -0.669616,  0.697514}, { 28,  24,  30,  34}},
   {{-0.335160,  0.935085, -0.115257}, { 17,  19,  25,  23}},
   {{-0.528772, -0.767948,  0.361465}, { 22,  18,  24,  28}},
   {{-0.483106,  0.314667,  0.817064}, { 19,  22,  28,  25}},
   {{-0.287024,  0.679259, -0.675443}, { 20,  17,  23,  26}},
   {{ 0.727488, -0.130549, -0.673586}, { 33,  32,  29,  30}},
   {{ 0.936024,  0.089789,  0.340290}, { 30,  29,  31,  34}},
   {{ 0.344474,  0.645854, -0.681329}, { 26,  23,  29,  32}},
   {{ 0.347432, -0.703000, -0.620549}, { 24,  27,  33,  30}},
   {{ 0.129203, -0.150402, -0.980146}, { 27,  26,  32,  33}},
   {{ 0.411977,  0.905463,  0.102035}, { 23,  25,  31,  29}},
   {{ 0.157360,  0.857948, -0.489042}, {  8,   5,  38,  37}},
   {{ 0.118405,  0.290197,  0.949614}, {  7,  10,  40,  39}},
   {{ 0.133895, -0.714634,  0.686564}, { 10,   6,  35,  40}},
   {{ 0.139155,  0.990102, -0.018286}, {  5,   7,  39,  38}},
   {{ 0.188382, -0.954516, -0.231109}, {  6,   9,  36,  35}},
   {{ 0.199857, -0.235418, -0.951123}, {  9,   8,  37,  36}},
   {{ 0.158123,  0.852951, -0.497465}, { 37,  38,  42,  45}},
   {{ 0.118454,  0.293241,  0.948672}, { 39,  40,  43,  46}},
   {{ 0.134031, -0.717446,  0.683599}, { 40,  35,  41,  43}},
   {{ 0.139112,  0.990265, -0.004883}, { 38,  39,  46,  42}},
   {{ 0.188309, -0.954899, -0.229580}, { 35,  36,  44,  41}},
   {{ 0.199851, -0.237366, -0.950640}, { 36,  37,  45,  44}},
   {{-0.188544, -0.233537, -0.953893}, {  3,   8,   9,  47}},
   {{-0.210817, -0.969126, -0.127870}, { 47,   9,   6,   1}},
};

static ATTR attribute_R_FARM[44] = {
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
};

static jo_3d_mesh     mesh_R_FARM = { 
   .data =
   {
       point_R_FARM,
        48,
       polygon_R_FARM,
        44,
       attribute_R_FARM,
   }
};

static __jo_force_inline void      display_R_FARM_mesh(void){
   jo_3d_mesh_draw(&mesh_R_FARM);
}

// R_THIGH
static POINT point_R_THIGH[19] = {
   {toFIXED( 1.245872), toFIXED(-1.252027), toFIXED(-1.531077)},
   {toFIXED( 0.926484), toFIXED(-1.075718), toFIXED( 1.543150)},
   {toFIXED( 1.260912), toFIXED(-1.116369), toFIXED(-0.015684)},
   {toFIXED(-0.611452), toFIXED(-1.272498), toFIXED( 1.299445)},
   {toFIXED(-0.703669), toFIXED(-2.209751), toFIXED(-0.728526)},
   {toFIXED(-1.396677), toFIXED(-1.831414), toFIXED( 0.114819)},
   {toFIXED(-0.262351), toFIXED( 1.692579), toFIXED( 0.949475)},
   {toFIXED( 0.469526), toFIXED( 2.285621), toFIXED(-0.977446)},
   {toFIXED(-0.634608), toFIXED( 2.222345), toFIXED(-0.623119)},
   {toFIXED(-0.892328), toFIXED( 1.819882), toFIXED( 0.673308)},
   {toFIXED( 0.746291), toFIXED( 1.822013), toFIXED( 0.284378)},
   {toFIXED(-1.495339), toFIXED(-0.809538), toFIXED( 0.423809)},
   {toFIXED( 1.026258), toFIXED( 0.155352), toFIXED( 0.933792)},
   {toFIXED(-0.748207), toFIXED(-0.637305), toFIXED( 1.185856)},
   {toFIXED(-1.002516), toFIXED(-0.288926), toFIXED(-0.845115)},
   {toFIXED( 0.788304), toFIXED( 0.381689), toFIXED(-1.436671)},
   {toFIXED( 0.809073), toFIXED( 2.002849), toFIXED(-0.292698)},
   {toFIXED( 1.178096), toFIXED( 0.320964), toFIXED(-0.229171)},
   {toFIXED(-0.703669), toFIXED(-2.209751), toFIXED(-0.728526)},
};

static POLYGON polygon_R_THIGH[12] = {
   {{ 0.340689, -0.147065,  0.928603}, { 14,  15,   7,   8}},
   {{ 0.104430, -0.357446, -0.928077}, { 13,  12,   1,   3}},
   {{ 0.599613, -0.129562, -0.789733}, { 13,  11,   9,   6}},
   {{-0.961623, -0.220996, -0.162610}, { 17,  12,  10,  16}},
   {{ 0.957440, -0.199925,  0.208180}, {  9,  11,  14,   8}},
   {{-0.247174, -0.197520, -0.948626}, {  6,  10,  12,  13}},
   {{-0.982862, -0.048589, -0.177825}, {  2,   1,  12,  17}},
   {{ 0.738437,  0.181490, -0.649440}, {  3,   5,  11,  13}},
   {{ 0.319862,  0.073962,  0.944573}, {  4,   0,  15,  14}},
   {{-0.924132, -0.212312,  0.317653}, { 17,  16,   7,  15}},
   {{-0.974776, -0.165726,  0.149488}, {  2,  17,  15,   0}},
   {{ 0.866388,  0.084859,  0.492108}, {  4,  14,  11,   5}},
};

static ATTR attribute_R_THIGH[12] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
    ATTRIBUTE(Dual_Plane, SORT_CEN, 0, C_RGB(31, 13, 3), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight), // Skin
};

static jo_3d_mesh mesh_R_THIGH = {
    .data =
        {
            point_R_THIGH,
            19,
            polygon_R_THIGH,
            12,
            attribute_R_THIGH,
        }};

static __jo_force_inline void display_R_THIGH_mesh(void)
{
    jo_3d_mesh_draw(&mesh_R_THIGH);
}

// R_UARM
static POINT point_R_UARM[12] = {
   {toFIXED( 1.798159), toFIXED(-0.367628), toFIXED( 0.795546)},
   {toFIXED( 1.757555), toFIXED(-0.800654), toFIXED(-0.707711)},
   {toFIXED( 2.096447), toFIXED(-1.070413), toFIXED( 0.306544)},
   {toFIXED( 1.684703), toFIXED( 0.843947), toFIXED( 0.887246)},
   {toFIXED( 1.657994), toFIXED( 0.138001), toFIXED(-0.670971)},
   {toFIXED( 1.609265), toFIXED( 0.911319), toFIXED(-0.058405)},
   {toFIXED(-1.550596), toFIXED(-0.435843), toFIXED( 0.086445)},
   {toFIXED(-1.620786), toFIXED( 0.675777), toFIXED(-0.247944)},
   {toFIXED(-2.013736), toFIXED(-0.447967), toFIXED(-0.568289)},
   {toFIXED(-1.432818), toFIXED(-0.172538), toFIXED( 0.571731)},
   {toFIXED(-2.055296), toFIXED( 0.528426), toFIXED( 0.396250)},
   {toFIXED(-1.930892), toFIXED( 0.197577), toFIXED(-0.790443)},
};

static POLYGON polygon_R_UARM[6] = {
   {{ 0.130429,  0.987388,  0.089741}, {  2,   1,   8,   6}},
   {{ 0.102079, -0.004298, -0.994767}, {  3,   0,   9,  10}},
   {{-0.015919, -0.676339,  0.736418}, {  4,   5,   7,  11}},
   {{ 0.009208,  0.116337,  0.993167}, {  1,   4,  11,   8}},
   {{ 0.130628,  0.715999, -0.685771}, {  0,   2,   6,   9}},
   {{ 0.089312, -0.989519, -0.113471}, {  5,   3,  10,   7}},
};

static ATTR attribute_R_UARM[6] = {
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
};

static jo_3d_mesh     mesh_R_UARM = { 
   .data =
   {
       point_R_UARM,
        12,
       polygon_R_UARM,
         6,
       attribute_R_UARM,
   }
};

static __jo_force_inline void      display_R_UARM_mesh(void){
   jo_3d_mesh_draw(&mesh_R_UARM);
}

// SHOULDER
static POINT point_SHOULDER[76] = {
   {toFIXED( 0.000000), toFIXED(-1.378978), toFIXED(-0.108004)},
   {toFIXED( 0.000000), toFIXED( 2.306524), toFIXED(-1.474227)},
   {toFIXED( 0.000000), toFIXED(-0.072819), toFIXED( 1.694100)},
   {toFIXED( 0.000000), toFIXED( 2.895008), toFIXED( 0.955074)},
   {toFIXED( 0.000000), toFIXED( 0.103560), toFIXED(-1.135411)},
   {toFIXED( 0.000000), toFIXED( 1.526707), toFIXED( 1.500373)},
   {toFIXED( 0.000000), toFIXED(-1.523074), toFIXED( 1.130145)},
   {toFIXED( 0.000000), toFIXED( 1.849301), toFIXED(-2.076019)},
   {toFIXED( 0.000000), toFIXED( 0.888981), toFIXED(-2.059768)},
   {toFIXED( 0.000000), toFIXED(-0.500764), toFIXED(-0.584834)},
   {toFIXED( 0.000000), toFIXED( 1.418597), toFIXED(-2.203590)},
   {toFIXED( 0.000000), toFIXED( 0.652285), toFIXED(-1.824265)},
   {toFIXED( 0.000000), toFIXED(-1.123806), toFIXED( 1.568658)},
   {toFIXED( 0.000895), toFIXED(-1.552346), toFIXED(-0.124025)},
   {toFIXED( 0.000895), toFIXED(-1.930825), toFIXED( 1.045331)},
   {toFIXED(-2.737967), toFIXED(-0.593898), toFIXED( 1.304202)},
   {toFIXED(-1.415617), toFIXED( 2.469542), toFIXED( 0.380108)},
   {toFIXED(-3.122247), toFIXED(-1.026924), toFIXED(-0.199055)},
   {toFIXED(-1.590128), toFIXED( 2.057920), toFIXED(-1.182173)},
   {toFIXED(-3.016707), toFIXED(-1.232255), toFIXED( 0.814966)},
   {toFIXED(-2.863176), toFIXED( 0.617678), toFIXED( 1.395902)},
   {toFIXED(-1.900295), toFIXED( 2.172454), toFIXED(-0.413489)},
   {toFIXED(-2.892653), toFIXED(-0.088268), toFIXED(-0.162314)},
   {toFIXED(-2.946429), toFIXED( 0.685049), toFIXED( 0.450251)},
   {toFIXED(-1.728142), toFIXED(-1.138062), toFIXED(-0.052218)},
   {toFIXED(-2.039275), toFIXED(-1.276566), toFIXED( 0.899710)},
   {toFIXED(-1.372433), toFIXED(-0.492635), toFIXED( 1.520914)},
   {toFIXED(-1.780942), toFIXED( 0.765759), toFIXED( 1.248424)},
   {toFIXED(-1.883615), toFIXED( 0.243432), toFIXED(-0.785551)},
   {toFIXED(-2.306835), toFIXED( 0.837264), toFIXED( 0.267475)},
   {toFIXED(-1.933189), toFIXED( 1.596950), toFIXED(-1.223676)},
   {toFIXED(-1.467446), toFIXED(-0.374831), toFIXED(-0.430099)},
   {toFIXED(-0.631427), toFIXED(-1.322554), toFIXED(-0.079809)},
   {toFIXED(-0.931121), toFIXED( 0.172151), toFIXED(-0.933814)},
   {toFIXED(-2.032880), toFIXED( 0.674087), toFIXED(-1.015933)},
   {toFIXED(-0.790358), toFIXED(-0.978192), toFIXED(-0.270612)},
   {toFIXED(-1.870650), toFIXED( 2.042951), toFIXED(-0.797474)},
   {toFIXED(-1.724728), toFIXED(-1.012095), toFIXED( 1.379169)},
   {toFIXED(-0.799941), toFIXED(-1.463305), toFIXED( 1.013841)},
   {toFIXED(-1.005640), toFIXED(-2.016643), toFIXED( 0.928039)},
   {toFIXED(-0.741311), toFIXED(-1.652945), toFIXED( 0.046281)},
   {toFIXED(-2.065382), toFIXED( 1.106276), toFIXED(-1.175291)},
   {toFIXED( 0.000000), toFIXED(-0.310181), toFIXED(-0.758466)},
   {toFIXED(-1.598691), toFIXED(-0.179852), toFIXED(-0.542196)},
   {toFIXED(-0.944360), toFIXED(-0.474973), toFIXED(-0.618780)},
   {toFIXED(-0.000895), toFIXED(-1.552346), toFIXED(-0.124025)},
   {toFIXED(-0.000895), toFIXED(-1.930825), toFIXED( 1.045331)},
   {toFIXED( 2.737967), toFIXED(-0.593898), toFIXED( 1.304202)},
   {toFIXED( 1.415617), toFIXED( 2.469542), toFIXED( 0.380108)},
   {toFIXED( 3.122247), toFIXED(-1.026924), toFIXED(-0.199055)},
   {toFIXED( 1.590128), toFIXED( 2.057920), toFIXED(-1.182173)},
   {toFIXED( 3.016707), toFIXED(-1.232255), toFIXED( 0.814966)},
   {toFIXED( 2.863176), toFIXED( 0.617678), toFIXED( 1.395902)},
   {toFIXED( 1.900295), toFIXED( 2.172454), toFIXED(-0.413489)},
   {toFIXED( 2.892653), toFIXED(-0.088268), toFIXED(-0.162314)},
   {toFIXED( 2.946429), toFIXED( 0.685049), toFIXED( 0.450251)},
   {toFIXED( 1.728142), toFIXED(-1.138062), toFIXED(-0.052218)},
   {toFIXED( 2.039275), toFIXED(-1.276566), toFIXED( 0.899710)},
   {toFIXED( 1.372433), toFIXED(-0.492635), toFIXED( 1.520914)},
   {toFIXED( 1.780942), toFIXED( 0.765759), toFIXED( 1.248424)},
   {toFIXED( 1.883615), toFIXED( 0.243432), toFIXED(-0.785551)},
   {toFIXED( 2.306835), toFIXED( 0.837264), toFIXED( 0.267475)},
   {toFIXED( 1.933189), toFIXED( 1.596950), toFIXED(-1.223676)},
   {toFIXED( 1.467446), toFIXED(-0.374831), toFIXED(-0.430099)},
   {toFIXED( 0.631428), toFIXED(-1.322554), toFIXED(-0.079809)},
   {toFIXED( 0.931122), toFIXED( 0.172151), toFIXED(-0.933814)},
   {toFIXED( 2.032880), toFIXED( 0.674087), toFIXED(-1.015933)},
   {toFIXED( 0.790358), toFIXED(-0.978192), toFIXED(-0.270612)},
   {toFIXED( 1.870651), toFIXED( 2.042951), toFIXED(-0.797474)},
   {toFIXED( 1.724728), toFIXED(-1.012095), toFIXED( 1.379169)},
   {toFIXED( 0.799942), toFIXED(-1.463305), toFIXED( 1.013841)},
   {toFIXED( 1.005640), toFIXED(-2.016643), toFIXED( 0.928039)},
   {toFIXED( 0.741312), toFIXED(-1.652945), toFIXED( 0.046281)},
   {toFIXED( 2.065382), toFIXED( 1.106276), toFIXED(-1.175291)},
   {toFIXED( 1.598691), toFIXED(-0.179852), toFIXED(-0.542196)},
   {toFIXED( 0.944361), toFIXED(-0.474973), toFIXED(-0.618780)},
};

static POLYGON polygon_SHOULDER[80] = {
   {{ 0.996836, -0.006657,  0.079203}, { 21,  28,  36,  21}},
   {{ 0.123620,  0.541055,  0.831852}, { 33,  44,  42,   4}},
   {{ 0.756284, -0.373808,  0.536938}, { 36,  41,  18,  36}},
   {{ 0.371132, -0.424222, -0.826013}, {  3,   5,  27,  16}},
   {{ 0.181191, -0.133057, -0.974405}, {  5,   2,  26,  27}},
   {{ 0.173627,  0.809716, -0.560548}, { 37,  38,  25,  37}},
   {{ 0.119351,  0.760962, -0.637725}, { 38,  37,  12,  38}},
   {{ 0.812222, -0.415195, -0.409765}, { 16,  27,  29,  21}},
   {{ 0.047168,  0.983103,  0.176872}, { 17,  19,  25,  24}},
   {{ 0.262991,  0.607801,  0.749275}, { 22,  31,  43,  28}},
   {{ 0.148651, -0.981851, -0.117775}, { 20,  23,  29,  27}},
   {{ 0.486334, -0.601940,  0.633362}, { 23,  22,  28,  29}},
   {{ 0.937389, -0.056240, -0.343712}, { 41,  36,  34,  41}},
   {{ 0.211840, -0.242885,  0.946642}, {  1,  18,  30,   1}},
   {{ 0.189046,  0.768070,  0.611825}, {  4,  11,  33,   4}},
   {{ 0.247826,  0.660012,  0.709201}, { 28,  33,  11,  34}},
   {{ 0.357462,  0.487589,  0.796541}, { 41,  34,  11,   8}},
   {{ 0.066453,  0.484860,  0.872063}, { 35,  32,   0,   9}},
   {{ 0.130945,  0.443272,  0.886771}, { 31,  24,  32,  35}},
   {{ 0.230171,  0.495378,  0.837628}, { 28,  43,  44,  33}},
   {{ 0.911190, -0.070414,  0.405924}, { 28,  21,  29,  28}},
   {{ 0.830859, -0.009672, -0.556398}, { 34,  36,  28,  34}},
   {{ 0.142181,  0.169673, -0.975190}, { 26,  37,  15,  26}},
   {{ 0.100852,  0.144839, -0.984302}, { 12,  37,  26,   2}},
   {{ 0.034874, -0.065458, -0.997246}, { 27,  26,  15,  20}},
   {{ 0.209323,  0.648094, -0.732228}, { 15,  37,  25,  19}},
   {{ 0.148648,  0.974533,  0.167894}, { 24,  25,  38,  32}},
   {{ 0.134805,  0.183587,  0.973716}, {  0,  32,  40,  13}},
   {{ 0.151366,  0.730900, -0.665488}, { 38,  12,   6,  38}},
   {{ 0.124745,  0.147594, -0.981150}, { 38,   6,  14,  39}},
   {{ 0.936546, -0.328918,  0.121218}, { 32,  38,  39,  40}},
   {{ 0.347561, -0.746611,  0.567251}, {  7,   1,  30,   7}},
   {{ 0.417769, -0.258027,  0.871144}, { 30,  10,   7,  30}},
   {{ 0.362668, -0.187719, -0.912816}, { 41,  30,  18,  41}},
   {{ 0.429050,  0.113233,  0.896156}, { 30,  41,   8,  10}},
   {{ 0.990925,  0.114395, -0.070572}, { 23,  20,  15,  22}},
   {{ 0.952935, -0.249934, -0.171604}, { 19,  17,  22,  15}},
   {{ 0.067154,  0.177460,  0.981834}, { 22,  17,  24,  31}},
   {{ 0.369408,  0.611937,  0.699336}, { 43,  31,  35,  44}},
   {{-0.012407,  0.599261,  0.800457}, { 44,  35,   9,  42}},
   {{-0.996836, -0.006657,  0.079203}, { 53,  68,  60,  53}},
   {{-0.123620,  0.541055,  0.831852}, { 42,  75,  65,   4}},
   {{-0.756284, -0.373808,  0.536938}, { 68,  50,  73,  68}},
   {{-0.371132, -0.424222, -0.826012}, { 59,   5,   3,  48}},
   {{-0.181191, -0.133057, -0.974405}, { 58,   2,   5,  59}},
   {{-0.173627,  0.809716, -0.560548}, { 69,  57,  70,  69}},
   {{-0.119351,  0.760962, -0.637725}, { 70,  12,  69,  70}},
   {{-0.812222, -0.415195, -0.409765}, { 61,  59,  48,  53}},
   {{-0.047168,  0.983103,  0.176872}, { 57,  51,  49,  56}},
   {{-0.262991,  0.607801,  0.749275}, { 74,  63,  54,  60}},
   {{-0.148651, -0.981851, -0.117775}, { 61,  55,  52,  59}},
   {{-0.486334, -0.601940,  0.633362}, { 60,  54,  55,  61}},
   {{-0.937390, -0.056240, -0.343712}, { 73,  66,  68,  73}},
   {{-0.211840, -0.242885,  0.946642}, {  1,  62,  50,   1}},
   {{-0.189046,  0.768070,  0.611825}, {  4,  65,  11,   4}},
   {{-0.247826,  0.660012,  0.709201}, { 11,  65,  60,  66}},
   {{-0.357462,  0.487589,  0.796541}, { 11,  66,  73,   8}},
   {{-0.066453,  0.484860,  0.872063}, {  0,  64,  67,   9}},
   {{-0.130945,  0.443272,  0.886771}, { 64,  56,  63,  67}},
   {{-0.230171,  0.495378,  0.837628}, { 75,  74,  60,  65}},
   {{-0.911190, -0.070414,  0.405923}, { 60,  61,  53,  60}},
   {{-0.830860, -0.009672, -0.556398}, { 66,  60,  68,  66}},
   {{-0.142181,  0.169673, -0.975190}, { 58,  47,  69,  58}},
   {{-0.100852,  0.144839, -0.984302}, { 58,  69,  12,   2}},
   {{-0.034874, -0.065458, -0.997246}, { 47,  58,  59,  52}},
   {{-0.209323,  0.648094, -0.732228}, { 57,  69,  47,  51}},
   {{-0.148648,  0.974533,  0.167894}, { 70,  57,  56,  64}},
   {{-0.134805,  0.183587,  0.973716}, { 72,  64,   0,  45}},
   {{-0.151366,  0.730900, -0.665488}, { 70,   6,  12,  70}},
   {{-0.124745,  0.147594, -0.981150}, { 46,   6,  70,  71}},
   {{-0.936546, -0.328918,  0.121218}, { 71,  70,  64,  72}},
   {{-0.347561, -0.746611,  0.567251}, {  7,  62,   1,   7}},
   {{-0.417769, -0.258027,  0.871144}, { 62,   7,  10,  62}},
   {{-0.362667, -0.187718, -0.912817}, { 73,  50,  62,  73}},
   {{-0.429050,  0.113233,  0.896155}, {  8,  73,  62,  10}},
   {{-0.990925,  0.114395, -0.070572}, { 47,  52,  55,  54}},
   {{-0.952935, -0.249934, -0.171604}, { 54,  49,  51,  47}},
   {{-0.067154,  0.177460,  0.981834}, { 56,  49,  54,  63}},
   {{-0.369408,  0.611937,  0.699336}, { 67,  63,  74,  75}},
   {{ 0.012407,  0.599261,  0.800457}, {  9,  67,  75,  42}},
};

static ATTR attribute_SHOULDER[80] = {
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 4,  1,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),           // Leather
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(31, 13,  3), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Skin
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB(14,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),               // Red
};

static jo_3d_mesh     mesh_SHOULDER = { 
   .data =
   {
       point_SHOULDER,
        76,
       polygon_SHOULDER,
        80,
       attribute_SHOULDER,
   }
};

static __jo_force_inline void      display_SHOULDER_mesh(void){
   jo_3d_mesh_draw(&mesh_SHOULDER);
}

// TORSO
static POINT point_TORSO[34] = {
   {toFIXED( 1.649220), toFIXED( 1.549754), toFIXED(-0.589210)},
   {toFIXED( 1.649220), toFIXED( 0.561846), toFIXED( 0.851873)},
   {toFIXED( 2.010623), toFIXED( 0.876025), toFIXED( 0.189268)},
   {toFIXED( 0.000000), toFIXED( 0.188478), toFIXED( 1.652435)},
   {toFIXED( 0.000000), toFIXED( 2.451773), toFIXED(-0.978605)},
   {toFIXED( 1.419784), toFIXED(-0.989652), toFIXED( 1.033113)},
   {toFIXED( 1.594294), toFIXED(-1.401274), toFIXED(-0.529169)},
   {toFIXED( 1.904462), toFIXED(-1.286740), toFIXED( 0.239515)},
   {toFIXED( 0.000000), toFIXED(-1.152670), toFIXED(-0.821223)},
   {toFIXED( 0.000000), toFIXED(-0.564186), toFIXED( 1.608078)},
   {toFIXED( 1.534502), toFIXED( 0.235272), toFIXED(-0.589527)},
   {toFIXED( 1.874817), toFIXED(-1.416243), toFIXED(-0.144470)},
   {toFIXED( 1.514656), toFIXED(-0.588109), toFIXED(-0.564145)},
   {toFIXED( 1.831998), toFIXED( 0.218742), toFIXED( 0.220622)},
   {toFIXED( 1.522002), toFIXED( 0.220250), toFIXED( 0.974336)},
   {toFIXED( 1.772563), toFIXED( 0.826307), toFIXED(-0.193143)},
   {toFIXED( 1.760971), toFIXED( 0.008332), toFIXED(-0.170302)},
   {toFIXED(-1.649220), toFIXED( 1.549754), toFIXED(-0.589210)},
   {toFIXED(-1.649220), toFIXED( 0.561846), toFIXED( 0.851873)},
   {toFIXED(-2.010623), toFIXED( 0.876025), toFIXED( 0.189268)},
   {toFIXED(-1.419784), toFIXED(-0.989652), toFIXED( 1.033113)},
   {toFIXED(-1.594294), toFIXED(-1.401274), toFIXED(-0.529169)},
   {toFIXED(-1.904462), toFIXED(-1.286740), toFIXED( 0.239515)},
   {toFIXED(-1.534502), toFIXED( 0.235272), toFIXED(-0.589527)},
   {toFIXED(-1.874817), toFIXED(-1.416243), toFIXED(-0.144470)},
   {toFIXED(-1.514656), toFIXED(-0.588109), toFIXED(-0.564145)},
   {toFIXED(-1.831998), toFIXED( 0.218742), toFIXED( 0.220622)},
   {toFIXED(-1.522002), toFIXED( 0.220250), toFIXED( 0.974336)},
   {toFIXED(-1.772563), toFIXED( 0.826307), toFIXED(-0.193143)},
   {toFIXED(-1.760971), toFIXED( 0.008332), toFIXED(-0.170302)},
   {toFIXED(-0.797147), toFIXED(-1.276972), toFIXED(-0.675196)},
   {toFIXED( 0.797147), toFIXED(-1.276972), toFIXED(-0.675196)},
   {toFIXED(-0.824610), toFIXED( 2.000763), toFIXED(-0.783908)},
   {toFIXED( 0.824610), toFIXED( 2.000763), toFIXED(-0.783908)},
};

static POLYGON polygon_TORSO[28] = {
   {{-0.889796, -0.003303, -0.456347}, { 13,   7,   5,  14}},
   {{ 0.192293,  0.038681,  0.980575}, {  8,   4,  32,  30}},
   {{-0.192293,  0.038681,  0.980575}, { 33,   4,   8,  31}},
   {{-0.883415,  0.100014,  0.457795}, { 15,   2,   0,  10}},
   {{-0.872281,  0.031045,  0.488019}, { 12,  16,  15,  10}},
   {{-0.934946,  0.132639,  0.329064}, { 16,  13,   2,  15}},
   {{-0.899731,  0.217191, -0.378565}, {  2,  13,  14,   1}},
   {{-0.397653, -0.174820, -0.900728}, {  3,   1,  14,   3}},
   {{-0.390310,  0.013566, -0.920583}, {  5,   9,   3,  14}},
   {{-0.184111,  0.034123,  0.982313}, { 10,  33,  31,  10}},
   {{-0.807846, -0.053901,  0.586924}, { 16,  12,   6,  11}},
   {{-0.986135, -0.060345,  0.154584}, { 16,  11,   7,  13}},
   {{ 0.889796, -0.003303, -0.456347}, { 20,  22,  26,  27}},
   {{ 0.883415,  0.100014,  0.457795}, { 17,  19,  28,  23}},
   {{ 0.872281,  0.031046,  0.488019}, { 28,  29,  25,  23}},
   {{ 0.934946,  0.132639,  0.329064}, { 19,  26,  29,  28}},
   {{ 0.899731,  0.217191, -0.378565}, { 27,  26,  19,  18}},
   {{ 0.397652, -0.174820, -0.900728}, {  3,  27,  18,   3}},
   {{ 0.390310,  0.013566, -0.920583}, {  3,   9,  20,  27}},
   {{ 0.807846, -0.053901,  0.586924}, { 21,  25,  29,  24}},
   {{ 0.986135, -0.060345,  0.154583}, { 22,  24,  29,  26}},
   {{ 0.185349,  0.034741,  0.982058}, { 23,  25,  30,  23}},
   {{-0.176351,  0.025054,  0.984008}, { 31,   6,  12,  31}},
   {{-0.219917,  0.018957,  0.975334}, { 10,   0,  33,  10}},
   {{-0.185349,  0.034741,  0.982058}, { 31,  12,  10,  31}},
   {{ 0.184111,  0.034123,  0.982313}, { 30,  32,  23,  30}},
   {{ 0.219917,  0.018957,  0.975334}, { 32,  17,  23,  32}},
   {{ 0.176351,  0.025054,  0.984008}, { 25,  21,  30,  25}},
};

static ATTR attribute_TORSO[28] = {
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
   ATTRIBUTE(Dual_Plane, SORT_CEN,           No_Texture, C_RGB( 0,  0,  0), CL32KRGB | No_Gouraud,            CL32KRGB|MESHoff, sprPolygon, UseLight),              // Hair
};

static jo_3d_mesh     mesh_TORSO = { 
   .data =
   {
       point_TORSO,
        34,
       polygon_TORSO,
        28,
       attribute_TORSO,
   }
};

static __jo_force_inline void      display_TORSO_mesh(void){
   jo_3d_mesh_draw(&mesh_TORSO);
}

#endif
