/* Model Name: Robotnik */

#ifndef __3D_ROBOTNIK_H__
#define __3D_ROBOTNIK_H__
#include <jo/jo.h>

// FOREARML
static POINT point_ForeArmL[16] = {
    {toFIXED(3.815), toFIXED(-3.237), toFIXED(3.223)}, //   3.81479,  -3.23673,   3.22288
    {toFIXED(4.173), toFIXED(-2.541), toFIXED(3.631)}, //   4.17274,  -2.54127,   3.63119
    {toFIXED(2.094), toFIXED(-2.632), toFIXED(5.050)}, //   2.09432,  -2.63248,   5.05022
    {toFIXED(2.236), toFIXED(-3.057), toFIXED(4.792)}, //   2.23610,  -3.05694,   4.79167
    {toFIXED(3.756), toFIXED(-1.882), toFIXED(3.218)}, //   3.75595,  -1.88239,   3.21811
    {toFIXED(2.201), toFIXED(-2.203), toFIXED(4.787)}, //   2.20093,  -2.20333,   4.78689
    {toFIXED(3.756), toFIXED(-1.882), toFIXED(3.218)}, //   3.75595,  -1.88239,   3.21811
    {toFIXED(3.815), toFIXED(-3.237), toFIXED(3.223)}, //   3.81479,  -3.23673,   3.22288
    {toFIXED(5.172), toFIXED(-3.187), toFIXED(2.681)}, //   5.17168,  -3.18672,   2.68082
    {toFIXED(4.118), toFIXED(-3.173), toFIXED(3.633)}, //   4.11750,  -3.17296,   3.63319
    {toFIXED(4.106), toFIXED(-2.163), toFIXED(3.165)}, //   4.10613,  -2.16271,   3.16491
    {toFIXED(5.166), toFIXED(-2.508), toFIXED(2.367)}, //   5.16560,  -2.50844,   2.36703
    {toFIXED(5.170), toFIXED(-2.508), toFIXED(2.372)}, //   5.17041,  -2.50821,   2.37219
    {toFIXED(4.106), toFIXED(-2.163), toFIXED(3.165)}, //   4.10613,  -2.16271,   3.16491
    {toFIXED(4.122), toFIXED(-3.166), toFIXED(3.638)}, //   4.12198,  -3.16569,   3.63836
    {toFIXED(5.176), toFIXED(-3.179), toFIXED(2.686)}, //   5.17616,  -3.17944,   2.68598
};

static POLYGON polygon_ForeArmL[5] = {
    {{0.538563, -0.674204, -0.505370}, {3, 0, 1, 2}},
    {{0.488977, -0.671430, 0.556851}, {2, 1, 4, 5}},
    {{-0.706407, 0.707029, -0.033162}, {5, 6, 7, 3}},
    {{-0.634707, 0.698661, -0.330183}, {11, 8, 9, 10}},
    {{0.632089, -0.698059, 0.336417}, {15, 12, 13, 14}},
};

static ATTR attribute_ForeArmL[5] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 0, 5), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 0, 5), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 0, 5), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 0, 5), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 31, 31), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
};

jo_3d_mesh mesh_ForeArmL = {
    .data =
        {
            point_ForeArmL,
            16,
            polygon_ForeArmL,
            5,
            attribute_ForeArmL,
        }};

static __jo_force_inline void display_ForeArmL_mesh(void)
{
    jo_3d_mesh_draw(&mesh_ForeArmL);
}

// FOREARMR
static POINT point_ForeArmR[18] = {
    {toFIXED(2.277), toFIXED(-3.036), toFIXED(-5.054)}, //   2.27721,  -3.03611,  -5.05438
    {toFIXED(2.014), toFIXED(-2.617), toFIXED(-5.315)}, //   2.01418,  -2.61736,  -5.31488
    {toFIXED(4.223), toFIXED(-2.520), toFIXED(-3.909)}, //   4.22299,  -2.52009,  -3.90945
    {toFIXED(3.868), toFIXED(-3.215), toFIXED(-3.498)}, //   3.86829,  -3.21543,  -3.49810
    {toFIXED(2.242), toFIXED(-2.182), toFIXED(-5.050)}, //   2.24207,  -2.18250,  -5.04958
    {toFIXED(3.809), toFIXED(-1.861), toFIXED(-3.493)}, //   3.80949,  -1.86108,  -3.49328
    {toFIXED(2.242), toFIXED(-2.182), toFIXED(-5.050)}, //   2.24207,  -2.18250,  -5.04958
    {toFIXED(2.277), toFIXED(-3.036), toFIXED(-5.054)}, //   2.27721,  -3.03611,  -5.05438
    {toFIXED(3.868), toFIXED(-3.215), toFIXED(-3.498)}, //   3.86829,  -3.21543,  -3.49810
    {toFIXED(3.809), toFIXED(-1.861), toFIXED(-3.493)}, //   3.80949,  -1.86108,  -3.49328
    {toFIXED(5.226), toFIXED(-2.487), toFIXED(-2.653)}, //   5.22585,  -2.48687,  -2.65322
    {toFIXED(4.160), toFIXED(-2.141), toFIXED(-3.443)}, //   4.16009,  -2.14138,  -3.44278
    {toFIXED(4.168), toFIXED(-3.152), toFIXED(-3.911)}, //   4.16774,  -3.15178,  -3.91082
    {toFIXED(5.229), toFIXED(-3.165), toFIXED(-2.967)}, //   5.22944,  -3.16525,  -2.96684
    {toFIXED(5.234), toFIXED(-3.158), toFIXED(-2.972)}, //   5.23388,  -3.15797,  -2.97204
    {toFIXED(4.172), toFIXED(-3.145), toFIXED(-3.916)}, //   4.17218,  -3.14450,  -3.91603
    {toFIXED(4.160), toFIXED(-2.141), toFIXED(-3.443)}, //   4.16009,  -2.14138,  -3.44278
    {toFIXED(5.231), toFIXED(-2.487), toFIXED(-2.658)}, //   5.23062,  -2.48665,  -2.65842
};

static POLYGON polygon_ForeArmR[5] = {
    {{0.537106, 0.702047, -0.467598}, {3, 0, 1, 2}},
    {{0.491087, 0.699546, 0.519105}, {2, 1, 4, 5}},
    {{-0.700776, -0.712623, -0.032896}, {9, 6, 7, 8}},
    {{-0.629144, -0.703797, -0.329920}, {13, 10, 11, 12}},
    {{0.626531, 0.703177, 0.336156}, {17, 14, 15, 16}},
};

static ATTR attribute_ForeArmR[5] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 0, 5), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 0, 5), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 0, 5), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 0, 5), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 31, 31), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
};

jo_3d_mesh mesh_ForeArmR = {
    .data =
        {
            point_ForeArmR,
            18,
            polygon_ForeArmR,
            5,
            attribute_ForeArmR,
        }};

static __jo_force_inline void display_ForeArmR_mesh(void)
{
    jo_3d_mesh_draw(&mesh_ForeArmR);
}

// HEAD
static POINT point_Head[43] = {
    {toFIXED(1.604), toFIXED(-5.336), toFIXED(0.496)},   //   1.60356,  -5.33645,   0.49630
    {toFIXED(0.524), toFIXED(-5.373), toFIXED(1.174)},   //   0.52385,  -5.37337,   1.17410
    {toFIXED(0.539), toFIXED(-5.846), toFIXED(-0.182)},  //   0.53913,  -5.84618,  -0.18153
    {toFIXED(-0.563), toFIXED(-5.411), toFIXED(0.496)},  //  -0.56292,  -5.41057,   0.49630
    {toFIXED(-0.563), toFIXED(-5.411), toFIXED(-0.859)}, //  -0.56292,  -5.41052,  -0.85932
    {toFIXED(0.524), toFIXED(-5.373), toFIXED(-1.537)},  //   0.52385,  -5.37327,  -1.53712
    {toFIXED(1.604), toFIXED(-5.336), toFIXED(-0.859)},  //   1.60356,  -5.33640,  -0.85932
    {toFIXED(0.431), toFIXED(-3.257), toFIXED(1.570)},   //   0.43090,  -3.25726,   1.56957
    {toFIXED(-0.967), toFIXED(-3.288), toFIXED(0.694)},  //  -0.96718,  -3.28796,   0.69406
    {toFIXED(-0.984), toFIXED(-4.420), toFIXED(0.736)},  //  -0.98438,  -4.41972,   0.73639
    {toFIXED(0.483), toFIXED(-4.365), toFIXED(1.654)},   //   0.48323,  -4.36453,   1.65425
    {toFIXED(1.944), toFIXED(-4.317), toFIXED(0.736)},   //   1.94413,  -4.31665,   0.73639
    {toFIXED(-0.967), toFIXED(-3.288), toFIXED(-1.057)}, //  -0.96718,  -3.28790,  -1.05694
    {toFIXED(-0.984), toFIXED(-4.420), toFIXED(-1.099)}, //  -0.98438,  -4.41965,  -1.09934
    {toFIXED(1.836), toFIXED(-3.226), toFIXED(-1.057)},  //   1.83604,  -3.22610,  -1.05693
    {toFIXED(1.836), toFIXED(-3.226), toFIXED(0.694)},   //   1.83604,  -3.22616,   0.69407
    {toFIXED(1.944), toFIXED(-4.317), toFIXED(-1.099)},  //   1.94413,  -4.31659,  -1.09934
    {toFIXED(0.431), toFIXED(-3.257), toFIXED(-1.932)},  //   0.43090,  -3.25714,  -1.93244
    {toFIXED(0.483), toFIXED(-4.364), toFIXED(-2.017)},  //   0.48323,  -4.36440,  -2.01720
    {toFIXED(2.391), toFIXED(-4.041), toFIXED(-0.068)},  //   2.39055,  -4.04107,  -0.06849
    {toFIXED(2.391), toFIXED(-4.041), toFIXED(-0.294)},  //   2.39055,  -4.04106,  -0.29443
    {toFIXED(1.907), toFIXED(-3.986), toFIXED(-0.414)},  //   1.90730,  -3.98614,  -0.41446
    {toFIXED(1.907), toFIXED(-3.986), toFIXED(0.052)},   //   1.90730,  -3.98616,   0.05154
    {toFIXED(2.374), toFIXED(-4.438), toFIXED(-0.231)},  //   2.37395,  -4.43767,  -0.23090
    {toFIXED(2.374), toFIXED(-4.438), toFIXED(-0.132)},  //   2.37395,  -4.43768,  -0.13205
    {toFIXED(1.857), toFIXED(-4.575), toFIXED(-0.061)},  //   1.85739,  -4.57519,  -0.06145
    {toFIXED(1.857), toFIXED(-4.575), toFIXED(-0.302)},  //   1.85739,  -4.57518,  -0.30151
    {toFIXED(1.943), toFIXED(-5.186), toFIXED(3.645)},   //   1.94281,  -5.18623,   3.64528
    {toFIXED(1.943), toFIXED(-5.186), toFIXED(-0.012)},  //   1.94281,  -5.18610,  -0.01205
    {toFIXED(2.062), toFIXED(-3.223), toFIXED(-0.012)},  //   2.06206,  -3.22253,  -0.01198
    {toFIXED(2.062), toFIXED(-3.223), toFIXED(3.645)},   //   2.06206,  -3.22265,   3.64535
    {toFIXED(2.062), toFIXED(-3.222), toFIXED(-4.008)},  //   2.06206,  -3.22238,  -4.00822
    {toFIXED(2.062), toFIXED(-3.223), toFIXED(-0.351)},  //   2.06206,  -3.22251,  -0.35089
    {toFIXED(1.943), toFIXED(-5.186), toFIXED(-0.351)},  //   1.94281,  -5.18609,  -0.35095
    {toFIXED(1.943), toFIXED(-5.186), toFIXED(-4.008)},  //   1.94281,  -5.18596,  -4.00829
    {toFIXED(1.943), toFIXED(-5.186), toFIXED(-4.008)},  //   1.94281,  -5.18596,  -4.00829
    {toFIXED(1.943), toFIXED(-5.186), toFIXED(-0.351)},  //   1.94281,  -5.18609,  -0.35095
    {toFIXED(2.062), toFIXED(-3.223), toFIXED(-0.351)},  //   2.06206,  -3.22251,  -0.35089
    {toFIXED(2.062), toFIXED(-3.222), toFIXED(-4.008)},  //   2.06206,  -3.22238,  -4.00822
    {toFIXED(2.062), toFIXED(-3.223), toFIXED(3.645)},   //   2.06206,  -3.22265,   3.64535
    {toFIXED(2.062), toFIXED(-3.223), toFIXED(-0.012)},  //   2.06206,  -3.22253,  -0.01198
    {toFIXED(1.943), toFIXED(-5.186), toFIXED(-0.012)},  //   1.94281,  -5.18610,  -0.01205
    {toFIXED(1.943), toFIXED(-5.186), toFIXED(3.645)},   //   1.94281,  -5.18623,   3.64528
};

static POLYGON polygon_Head[27] = {
    {{0.233838, -0.322571, -0.917207}, {0, 1, 2, 0}},
    {{-0.169485, -0.322884, -0.931139}, {1, 3, 2, 1}},
    {{-0.169485, 0.322884, -0.931139}, {4, 5, 2, 4}},
    {{0.233838, 0.322570, -0.917207}, {5, 6, 2, 5}},
    {{0.431919, 0.000000, -0.901912}, {6, 0, 2, 6}},
    {{-0.367614, -0.000000, -0.929978}, {2, 3, 4, 2}},
    {{-0.530927, -0.846487, 0.039716}, {10, 7, 8, 9}},
    {{-0.476830, -0.786105, -0.393284}, {1, 10, 9, 3}},
    {{0.505855, -0.786616, -0.354041}, {10, 1, 0, 11}},
    {{-0.999885, -0.000000, 0.015192}, {9, 8, 12, 13}},
    {{-0.920218, 0.000000, -0.391407}, {3, 9, 13, 4}},
    {{0.995124, -0.000000, 0.098633}, {11, 16, 14, 15}}, //
    {{0.526689, -0.845560, 0.087340}, {11, 15, 7, 10}},
    {{-0.530926, 0.846487, 0.039716}, {13, 12, 17, 18}},
    {{-0.476830, 0.786105, -0.393283}, {4, 13, 18, 5}},
    {{0.948508, 0.000000, -0.316753}, {11, 0, 6, 16}},
    {{0.526688, 0.845560, 0.087339}, {18, 17, 14, 16}},
    {{0.505855, 0.786617, -0.354040}, {5, 18, 16, 6}},
    {{0.112908, -0.000002, 0.993605}, {22, 19, 20, 21}},
    {{0.257242, 0.000000, -0.966347}, {26, 23, 24, 25}},
    {{0.198822, -0.962273, -0.185743}, {22, 25, 24, 19}},
    {{0.198821, 0.962273, -0.185743}, {21, 20, 23, 26}},
    {{0.999126, 0.000000, -0.041811}, {19, 24, 23, 20}},
    {{0.998161, -0.000000, -0.060619}, {27, 30, 29, 28}},
    {{0.998161, -0.000000, -0.060619}, {34, 31, 32, 33}},
    {{-0.998161, 0.000000, 0.060619}, {35, 38, 37, 36}},
    {{-0.998161, 0.000000, 0.060619}, {42, 39, 40, 41}},
};

static ATTR attribute_Head[27] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 22, 12), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 22, 12), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 22, 12), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 22, 12), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 22, 12), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 22, 12), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 22, 12), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 22, 12), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 22, 12), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 22, 12), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 22, 12), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 1, No_Palet, CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 22, 12), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 22, 12), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 22, 12), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 22, 12), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 22, 12), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 22, 12), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 22, 12), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 22, 12), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 22, 12), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 22, 12), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 22, 12), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, No_Palet, CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, No_Palet, CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, No_Palet, CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, No_Palet, CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight),
};

jo_3d_mesh mesh_Head = {
    .data =
        {
            point_Head,
            43,
            polygon_Head,
            27,
            attribute_Head,
        }};

static __jo_force_inline void display_Head_mesh(void)
{
    jo_3d_mesh_draw(&mesh_Head);
}

// SHIP
static POINT point_Ship[142] = {
    {toFIXED(6.382), toFIXED(-2.208), toFIXED(-1.537)},  //   6.38235,  -2.20760,  -1.53701
    {toFIXED(4.103), toFIXED(-2.139), toFIXED(-3.909)},  //   4.10307,  -2.13853,  -3.90933
    {toFIXED(5.250), toFIXED(-1.271), toFIXED(-5.103)},  //   5.24958,  -1.27144,  -5.10253
    {toFIXED(5.250), toFIXED(-1.272), toFIXED(4.740)},   //   5.24958,  -1.27178,   4.73980
    {toFIXED(4.103), toFIXED(-2.139), toFIXED(3.547)},   //   4.10307,  -2.13878,   3.54654
    {toFIXED(6.382), toFIXED(-2.208), toFIXED(1.188)},   //   6.38235,  -2.20769,   1.18834
    {toFIXED(0.020), toFIXED(5.444), toFIXED(-0.181)},   //   0.01969,   5.44356,  -0.18113
    {toFIXED(1.640), toFIXED(3.463), toFIXED(-5.971)},   //   1.64005,   3.46345,  -5.97080
    {toFIXED(-1.407), toFIXED(3.319), toFIXED(-5.971)},  //  -1.40668,   3.31946,  -5.97081
    {toFIXED(5.822), toFIXED(3.661), toFIXED(-1.727)},   //   5.82226,   3.66096,  -1.72744
    {toFIXED(4.292), toFIXED(3.589), toFIXED(-4.417)},   //   4.29184,   3.58872,  -4.41749
    {toFIXED(-4.058), toFIXED(3.194), toFIXED(-4.418)},  //  -4.05846,   3.19408,  -4.41750
    {toFIXED(-5.589), toFIXED(3.122), toFIXED(-1.727)},  //  -5.58888,   3.12165,  -1.72746
    {toFIXED(4.292), toFIXED(3.588), toFIXED(4.055)},    //   4.29184,   3.58843,   4.05510
    {toFIXED(5.822), toFIXED(3.661), toFIXED(1.365)},    //   5.82226,   3.66085,   1.36505
    {toFIXED(-1.407), toFIXED(3.319), toFIXED(5.608)},   //  -1.40668,   3.31906,   5.60839
    {toFIXED(1.640), toFIXED(3.463), toFIXED(5.608)},    //   1.64005,   3.46305,   5.60840
    {toFIXED(-5.589), toFIXED(3.122), toFIXED(1.365)},   //  -5.58888,   3.12155,   1.36503
    {toFIXED(-4.058), toFIXED(3.194), toFIXED(4.055)},   //  -4.05846,   3.19378,   4.05508
    {toFIXED(7.048), toFIXED(-1.187), toFIXED(1.619)},   //   7.04800,  -1.18668,   1.61906
    {toFIXED(7.048), toFIXED(-1.187), toFIXED(-1.982)},  //   7.04800,  -1.18655,  -1.98179
    {toFIXED(4.097), toFIXED(-3.362), toFIXED(2.466)},   //   4.09726,  -3.36185,   2.46625
    {toFIXED(4.103), toFIXED(-2.139), toFIXED(3.547)},   //   4.10307,  -2.13878,   3.54654
    {toFIXED(6.382), toFIXED(-2.208), toFIXED(1.188)},   //   6.38235,  -2.20769,   1.18834
    {toFIXED(6.382), toFIXED(-2.208), toFIXED(-1.537)},  //   6.38235,  -2.20760,  -1.53701
    {toFIXED(4.103), toFIXED(-2.139), toFIXED(-3.909)},  //   4.10307,  -2.13853,  -3.90933
    {toFIXED(4.097), toFIXED(-3.362), toFIXED(-2.857)},  //   4.09726,  -3.36167,  -2.85736
    {toFIXED(4.347), toFIXED(-4.007), toFIXED(0.878)},   //   4.34689,  -4.00736,   0.87761
    {toFIXED(4.347), toFIXED(-4.007), toFIXED(-1.226)},  //   4.34689,  -4.00728,  -1.22641
    {toFIXED(6.382), toFIXED(-2.208), toFIXED(1.188)},   //   6.38235,  -2.20769,   1.18834
    {toFIXED(4.103), toFIXED(-2.139), toFIXED(3.547)},   //   4.10307,  -2.13878,   3.54654
    {toFIXED(4.097), toFIXED(-3.362), toFIXED(2.466)},   //   4.09726,  -3.36185,   2.46625
    {toFIXED(4.097), toFIXED(-3.362), toFIXED(-2.857)},  //   4.09726,  -3.36167,  -2.85736
    {toFIXED(4.103), toFIXED(-2.139), toFIXED(-3.909)},  //   4.10307,  -2.13853,  -3.90933
    {toFIXED(6.382), toFIXED(-2.208), toFIXED(-1.537)},  //   6.38235,  -2.20760,  -1.53701
    {toFIXED(4.347), toFIXED(-4.007), toFIXED(0.878)},   //   4.34689,  -4.00736,   0.87761
    {toFIXED(4.347), toFIXED(-4.007), toFIXED(-1.226)},  //   4.34689,  -4.00728,  -1.22641
    {toFIXED(-5.144), toFIXED(0.740), toFIXED(-5.576)},  //  -5.14408,   0.73956,  -5.57551
    {toFIXED(-7.112), toFIXED(0.646), toFIXED(-2.151)},  //  -7.11176,   0.64645,  -2.15118
    {toFIXED(-4.554), toFIXED(-1.735), toFIXED(-5.103)}, //  -4.55356,  -1.73475,  -5.10254
    {toFIXED(-6.352), toFIXED(-1.820), toFIXED(-1.982)}, //  -6.35198,  -1.81985,  -1.98181
    {toFIXED(-3.323), toFIXED(-2.490), toFIXED(-3.909)}, //  -3.32334,  -2.48951,  -3.90935
    {toFIXED(-4.684), toFIXED(-2.554), toFIXED(-1.544)}, //  -4.68449,  -2.55392,  -1.54408
    {toFIXED(-1.443), toFIXED(-1.588), toFIXED(6.540)},  //  -1.44335,  -1.58816,   6.54021
    {toFIXED(-4.554), toFIXED(-1.735), toFIXED(4.740)},  //  -4.55356,  -1.73509,   4.73978
    {toFIXED(-3.323), toFIXED(-2.490), toFIXED(3.547)},  //  -3.32334,  -2.48977,   3.54653
    {toFIXED(-0.968), toFIXED(-2.378), toFIXED(4.909)},  //  -0.96776,  -2.37849,   4.90921
    {toFIXED(-1.738), toFIXED(0.901), toFIXED(-7.552)},  //  -1.73766,   0.90062,  -7.55244
    {toFIXED(-1.443), toFIXED(-1.588), toFIXED(-6.903)}, //  -1.44335,  -1.58769,  -6.90296
    {toFIXED(-0.968), toFIXED(-2.378), toFIXED(-5.272)}, //  -0.96776,  -2.37813,  -5.27202
    {toFIXED(2.198), toFIXED(1.087), toFIXED(-7.552)},   //   2.19770,   1.08661,  -7.55243
    {toFIXED(2.139), toFIXED(-1.418), toFIXED(-6.903)},  //   2.13938,  -1.41837,  -6.90296
    {toFIXED(1.740), toFIXED(-2.250), toFIXED(-5.272)},  //   1.74044,  -2.25014,  -5.27201
    {toFIXED(-6.352), toFIXED(-1.820), toFIXED(1.619)},  //  -6.35198,  -1.81998,   1.61904
    {toFIXED(-4.684), toFIXED(-2.554), toFIXED(1.181)},  //  -4.68449,  -2.55402,   1.18126
    {toFIXED(5.604), toFIXED(1.248), toFIXED(-5.575)},   //   5.60411,   1.24754,  -5.57549
    {toFIXED(-7.112), toFIXED(0.646), toFIXED(1.789)},   //  -7.11176,   0.64631,   1.78858
    {toFIXED(7.572), toFIXED(1.340), toFIXED(-2.151)},   //   7.57179,   1.34041,  -2.15115
    {toFIXED(-5.144), toFIXED(0.739), toFIXED(5.213)},   //  -5.14408,   0.73919,   5.21292
    {toFIXED(-1.738), toFIXED(0.900), toFIXED(7.190)},   //  -1.73766,   0.90011,   7.18986
    {toFIXED(7.572), toFIXED(1.340), toFIXED(1.789)},    //   7.57179,   1.34028,   1.78860
    {toFIXED(5.604), toFIXED(1.247), toFIXED(5.213)},    //   5.60411,   1.24716,   5.21294
    {toFIXED(2.198), toFIXED(1.086), toFIXED(7.190)},    //   2.19770,   1.08610,   7.18987
    {toFIXED(2.139), toFIXED(-1.419), toFIXED(6.540)},   //   2.13938,  -1.41883,   6.54022
    {toFIXED(1.740), toFIXED(-2.250), toFIXED(4.909)},   //   1.74044,  -2.25049,   4.90921
    {toFIXED(-4.399), toFIXED(-3.219), toFIXED(0.976)},  //  -4.39860,  -3.21906,   0.97649
    {toFIXED(-3.735), toFIXED(-3.350), toFIXED(1.231)},  //  -3.73504,  -3.35028,   1.23066
    {toFIXED(-3.425), toFIXED(-1.682), toFIXED(2.043)},  //  -3.42514,  -1.68166,   2.04267
    {toFIXED(-4.547), toFIXED(-1.735), toFIXED(1.485)},  //  -4.54651,  -1.73464,   1.48489
    {toFIXED(-4.399), toFIXED(-3.219), toFIXED(-1.339)}, //  -4.39860,  -3.21898,  -1.33935
    {toFIXED(-3.735), toFIXED(-3.350), toFIXED(-1.594)}, //  -3.73504,  -3.35019,  -1.59354
    {toFIXED(-4.547), toFIXED(-1.735), toFIXED(-1.848)}, //  -4.54651,  -1.73453,  -1.84766
    {toFIXED(-3.425), toFIXED(-1.682), toFIXED(-2.405)}, //  -3.42514,  -1.68151,  -2.40544
    {toFIXED(-3.735), toFIXED(-3.350), toFIXED(-1.594)}, //  -3.73504,  -3.35019,  -1.59354
    {toFIXED(-3.425), toFIXED(-1.682), toFIXED(-2.405)}, //  -3.42514,  -1.68151,  -2.40544
    {toFIXED(-3.425), toFIXED(-1.682), toFIXED(2.043)},  //  -3.42514,  -1.68166,   2.04267
    {toFIXED(-3.735), toFIXED(-3.350), toFIXED(1.231)},  //  -3.73504,  -3.35028,   1.23066
    {toFIXED(-4.554), toFIXED(-1.735), toFIXED(-5.103)}, //  -4.55356,  -1.73475,  -5.10254
    {toFIXED(-4.554), toFIXED(-1.735), toFIXED(4.740)},  //  -4.55356,  -1.73509,   4.73978
    {toFIXED(-4.684), toFIXED(-2.554), toFIXED(1.181)},  //  -4.68449,  -2.55402,   1.18126
    {toFIXED(-4.684), toFIXED(-2.554), toFIXED(-1.544)}, //  -4.68449,  -2.55392,  -1.54408
    {toFIXED(5.250), toFIXED(-1.271), toFIXED(-5.103)},  //   5.24958,  -1.27144,  -5.10253
    {toFIXED(-4.554), toFIXED(-1.735), toFIXED(-5.103)}, //  -4.55356,  -1.73475,  -5.10254
    {toFIXED(-0.968), toFIXED(-2.378), toFIXED(-5.272)}, //  -0.96776,  -2.37813,  -5.27202
    {toFIXED(1.740), toFIXED(-2.250), toFIXED(-5.272)},  //   1.74044,  -2.25014,  -5.27201
    {toFIXED(1.740), toFIXED(-2.250), toFIXED(4.909)},   //   1.74044,  -2.25049,   4.90921
    {toFIXED(-0.968), toFIXED(-2.378), toFIXED(4.909)},  //  -0.96776,  -2.37849,   4.90921
    {toFIXED(-4.554), toFIXED(-1.735), toFIXED(4.740)},  //  -4.55356,  -1.73509,   4.73978
    {toFIXED(5.250), toFIXED(-1.272), toFIXED(4.740)},   //   5.24958,  -1.27178,   4.73980
    {toFIXED(6.375), toFIXED(-2.208), toFIXED(-0.181)},  //   6.37529,  -2.20798,  -0.18140
    {toFIXED(6.382), toFIXED(-2.208), toFIXED(1.188)},   //   6.38235,  -2.20769,   1.18834
    {toFIXED(5.250), toFIXED(-1.272), toFIXED(4.740)},   //   5.24958,  -1.27178,   4.73980
    {toFIXED(5.250), toFIXED(-1.272), toFIXED(-0.181)},  //   5.24958,  -1.27161,  -0.18137
    {toFIXED(6.382), toFIXED(-2.208), toFIXED(-1.537)},  //   6.38235,  -2.20760,  -1.53701
    {toFIXED(5.250), toFIXED(-1.271), toFIXED(-5.103)},  //   5.24958,  -1.27144,  -5.10253
    {toFIXED(4.007), toFIXED(-1.161), toFIXED(1.661)},   //   4.00737,  -1.16074,   1.66143
    {toFIXED(4.197), toFIXED(-1.145), toFIXED(1.245)},   //   4.19746,  -1.14467,   1.24486
    {toFIXED(4.414), toFIXED(-3.177), toFIXED(1.245)},   //   4.41368,  -3.17721,   1.24479
    {toFIXED(4.224), toFIXED(-3.200), toFIXED(1.661)},   //   4.22393,  -3.20033,   1.66136
    {toFIXED(4.640), toFIXED(-1.095), toFIXED(1.351)},   //   4.64044,  -1.09547,   1.35077
    {toFIXED(4.007), toFIXED(-1.161), toFIXED(1.661)},   //   4.00737,  -1.16074,   1.66143
    {toFIXED(4.224), toFIXED(-3.200), toFIXED(1.661)},   //   4.22393,  -3.20033,   1.66136
    {toFIXED(4.857), toFIXED(-3.135), toFIXED(1.351)},   //   4.85700,  -3.13506,   1.35070
    {toFIXED(4.640), toFIXED(-1.095), toFIXED(1.351)},   //   4.64044,  -1.09547,   1.35077
    {toFIXED(4.857), toFIXED(-3.135), toFIXED(1.351)},   //   4.85700,  -3.13506,   1.35070
    {toFIXED(4.224), toFIXED(-3.200), toFIXED(-2.024)},  //   4.22393,  -3.20021,  -2.02422
    {toFIXED(4.414), toFIXED(-3.177), toFIXED(-1.608)},  //   4.41368,  -3.17711,  -1.60765
    {toFIXED(4.197), toFIXED(-1.145), toFIXED(-1.608)},  //   4.19746,  -1.14457,  -1.60758
    {toFIXED(4.007), toFIXED(-1.161), toFIXED(-2.024)},  //   4.00737,  -1.16061,  -2.02415
    {toFIXED(4.857), toFIXED(-3.135), toFIXED(-1.714)},  //   4.85700,  -3.13495,  -1.71356
    {toFIXED(4.224), toFIXED(-3.200), toFIXED(-2.024)},  //   4.22393,  -3.20021,  -2.02422
    {toFIXED(4.007), toFIXED(-1.161), toFIXED(-2.024)},  //   4.00737,  -1.16061,  -2.02415
    {toFIXED(4.640), toFIXED(-1.095), toFIXED(-1.713)},  //   4.64044,  -1.09536,  -1.71349
    {toFIXED(4.857), toFIXED(-3.135), toFIXED(-1.714)},  //   4.85700,  -3.13495,  -1.71356
    {toFIXED(4.640), toFIXED(-1.095), toFIXED(-1.713)},  //   4.64044,  -1.09536,  -1.71349
    {toFIXED(1.525), toFIXED(-3.236), toFIXED(-1.149)},  //   1.52550,  -3.23588,  -1.14872
    {toFIXED(2.656), toFIXED(-2.483), toFIXED(-1.671)},  //   2.65618,  -2.48265,  -1.67117
    {toFIXED(2.656), toFIXED(-2.483), toFIXED(1.308)},   //   2.65618,  -2.48276,   1.30836
    {toFIXED(1.525), toFIXED(-3.236), toFIXED(0.786)},   //   1.52550,  -3.23595,   0.78585
    {toFIXED(-2.767), toFIXED(-2.739), toFIXED(-1.671)}, //  -2.76728,  -2.73897,  -1.67118
    {toFIXED(-0.052), toFIXED(-2.611), toFIXED(-3.168)}, //  -0.05203,  -2.61059,  -3.16800
    {toFIXED(-0.019), toFIXED(-3.309), toFIXED(-2.123)}, //  -0.01903,  -3.30884,  -2.12307
    {toFIXED(-1.571), toFIXED(-3.382), toFIXED(-1.149)}, //  -1.57060,  -3.38220,  -1.14873
    {toFIXED(-0.103), toFIXED(-1.525), toFIXED(3.412)},  //  -0.10336,  -1.52472,   3.41241
    {toFIXED(-3.369), toFIXED(-1.679), toFIXED(1.612)},  //  -3.36872,  -1.67899,   1.61198
    {toFIXED(-2.767), toFIXED(-2.739), toFIXED(1.308)},  //  -2.76728,  -2.73908,   1.30835
    {toFIXED(-0.052), toFIXED(-2.611), toFIXED(2.805)},  //  -0.05203,  -2.61080,   2.80517
    {toFIXED(-1.571), toFIXED(-3.382), toFIXED(0.786)},  //  -1.57060,  -3.38227,   0.78585
    {toFIXED(-0.019), toFIXED(-3.309), toFIXED(1.760)},  //  -0.01903,  -3.30898,   1.76020
    {toFIXED(3.155), toFIXED(-1.371), toFIXED(-1.975)},  //   3.15495,  -1.37054,  -1.97473
    {toFIXED(3.155), toFIXED(-1.371), toFIXED(1.612)},   //   3.15495,  -1.37067,   1.61199
    {toFIXED(-3.369), toFIXED(-1.679), toFIXED(-1.975)}, //  -3.36872,  -1.67886,  -1.97474
    {toFIXED(-0.103), toFIXED(-1.524), toFIXED(-3.775)}, //  -0.10336,  -1.52447,  -3.77516
    {toFIXED(0.348), toFIXED(-1.503), toFIXED(-0.181)},  //   0.34801,  -1.50326,  -0.18137
    {toFIXED(-4.554), toFIXED(-1.735), toFIXED(-0.181)}, //  -4.55356,  -1.73492,  -0.18138
    {toFIXED(-4.554), toFIXED(-1.735), toFIXED(-5.103)}, //  -4.55356,  -1.73475,  -5.10254
    {toFIXED(0.348), toFIXED(-1.503), toFIXED(-5.103)},  //   0.34801,  -1.50309,  -5.10253
    {toFIXED(0.348), toFIXED(-1.503), toFIXED(4.740)},   //   0.34801,  -1.50344,   4.73979
    {toFIXED(-4.554), toFIXED(-1.735), toFIXED(4.740)},  //  -4.55356,  -1.73509,   4.73978
    {toFIXED(5.250), toFIXED(-1.271), toFIXED(-5.103)},  //   5.24958,  -1.27144,  -5.10253
    {toFIXED(5.250), toFIXED(-1.272), toFIXED(-0.181)},  //   5.24958,  -1.27161,  -0.18137
    {toFIXED(5.250), toFIXED(-1.272), toFIXED(4.740)},   //   5.24958,  -1.27178,   4.73980
};

static POLYGON polygon_Ship[94] = {
    {{0.321541, 0.334688, -0.885774}, {0, 1, 2, 0}},
    {{0.320501, -0.335688, -0.885772}, {3, 4, 5, 3}},
    {{-0.044490, 0.334443, 0.941365}, {6, 7, 8, 6}},
    {{0.248591, 0.167082, 0.954089}, {6, 9, 10, 6}},
    {{-0.337465, 0.167082, 0.926391}, {6, 11, 12, 6}},
    {{0.248591, -0.167081, 0.954089}, {6, 13, 14, 6}},
    {{-0.044490, -0.334442, 0.941366}, {6, 15, 16, 6}},
    {{-0.337465, -0.167081, 0.926391}, {6, 17, 18, 6}},
    {{-0.213761, -0.289654, 0.932956}, {18, 15, 6, 18}},
    {{0.124819, -0.289654, 0.948958}, {16, 13, 6, 16}},
    {{0.293672, 0.000001, 0.955906}, {14, 9, 6, 14}},
    {{0.124819, 0.289655, 0.948958}, {10, 7, 6, 10}},
    {{-0.213761, 0.289655, 0.932956}, {8, 11, 6, 8}},
    {{-0.382517, 0.000001, 0.923948}, {12, 17, 6, 12}},
    {{0.692066, -0.382145, -0.612380}, {5, 19, 3, 5}},
    {{0.689891, 0.380802, -0.615663}, {20, 0, 2, 20}},
    {{-0.601806, 0.597178, 0.530290}, {21, 22, 23, 21}},
    {{-0.608804, -0.600017, 0.518977}, {24, 25, 26, 24}},
    {{-0.578197, 0.383501, 0.720149}, {23, 27, 21, 23}},
    {{-0.581328, -0.374829, 0.722192}, {26, 28, 24, 26}},
    {{0.601806, -0.597178, -0.530290}, {29, 30, 31, 29}},
    {{0.608804, 0.600017, -0.518977}, {32, 33, 34, 32}},
    {{0.578197, -0.383501, -0.720149}, {31, 35, 29, 31}},
    {{0.581328, 0.374829, -0.722192}, {34, 36, 32, 34}},
    {{-0.744319, 0.411613, 0.525894}, {38, 12, 11, 37}},
    {{-0.826423, 0.483383, -0.288730}, {40, 38, 37, 39}},
    {{-0.343454, 0.222642, -0.912398}, {42, 40, 39, 41}},
    {{-0.180564, -0.385897, -0.904699}, {46, 43, 44, 45}},
    {{-0.444482, 0.719488, 0.533641}, {37, 11, 8, 47}},
    {{-0.472617, 0.837668, -0.273762}, {39, 37, 47, 48}},
    {{-0.180564, 0.385895, -0.904700}, {41, 39, 48, 49}},
    {{-0.025972, 0.835061, 0.549543}, {47, 8, 7, 50}},
    {{0.011875, 0.967849, -0.251251}, {48, 47, 50, 51}},
    {{0.042261, 0.445661, -0.894204}, {49, 48, 51, 52}},
    {{-0.402904, -0.000000, -0.915242}, {54, 53, 40, 42}},
    {{0.392172, 0.719488, 0.573182}, {50, 7, 10, 55}},
    {{0.496329, 0.837668, -0.227968}, {51, 50, 55, 2}},
    {{0.265052, 0.386354, -0.883446}, {52, 51, 2, 1}},
    {{-0.955679, -0.000000, -0.294412}, {53, 56, 38, 40}},
    {{0.691403, 0.411613, 0.593748}, {55, 10, 9, 57}},
    {{0.849970, 0.483383, -0.209502}, {2, 55, 57, 20}},
    {{-0.444482, -0.719488, 0.533642}, {59, 15, 18, 58}},
    {{-0.472617, -0.837668, -0.273761}, {43, 59, 58, 44}},
    {{0.979185, -0.000000, -0.202968}, {20, 57, 60, 19}},
    {{0.837701, -0.000000, -0.546130}, {19, 5, 0, 20}},
    {{0.691403, -0.411612, 0.593748}, {60, 14, 13, 61}},
    {{0.849970, -0.483384, -0.209501}, {19, 60, 61, 3}},
    {{-0.826423, -0.483384, -0.288730}, {44, 58, 56, 53}},
    {{0.392172, -0.719488, 0.573183}, {61, 13, 16, 62}},
    {{0.496329, -0.837668, -0.227967}, {3, 61, 62, 63}},
    {{0.265052, -0.386356, -0.883446}, {4, 3, 63, 64}},
    {{-0.744319, -0.411612, 0.525894}, {58, 18, 17, 56}},
    {{-0.025972, -0.835061, 0.549545}, {62, 16, 15, 59}},
    {{0.011874, -0.967849, -0.251250}, {63, 62, 59, 43}},
    {{0.042261, -0.445663, -0.894202}, {64, 63, 43, 46}},
    {{-0.343454, -0.222642, -0.912398}, {45, 44, 53, 54}},
    {{0.798492, 0.000000, 0.602005}, {60, 57, 9, 14}},
    {{-0.851710, 0.000000, 0.524014}, {38, 56, 17, 12}},
    {{-0.402157, -0.851698, -0.335976}, {68, 65, 66, 67}},
    {{-0.193984, -0.000001, -0.981005}, {66, 65, 69, 70}},
    {{-0.402157, 0.851698, -0.335977}, {69, 71, 72, 70}},
    {{-0.995073, -0.000000, -0.099149}, {69, 65, 68, 71}},
    {{0.983188, -0.000000, -0.182596}, {76, 73, 74, 75}},
    {{0.987462, -0.000000, -0.157854}, {80, 77, 78, 79}},
    {{0.009645, -0.978909, -0.204067}, {84, 81, 82, 83}},
    {{0.009645, 0.978909, -0.204067}, {88, 85, 86, 87}},
    {{-0.637534, -0.000756, -0.770422}, {92, 89, 90, 91}},
    {{-0.637529, 0.000757, -0.770426}, {94, 93, 89, 92}},
    {{-0.903975, 0.416652, -0.096073}, {98, 95, 96, 97}},
    {{0.436213, -0.898651, 0.046316}, {102, 99, 100, 101}},
    {{0.229990, 0.972886, 0.024442}, {97, 96, 103, 104}},
    {{-0.903975, -0.416653, -0.096073}, {108, 105, 106, 107}},
    {{0.436214, 0.898650, 0.046315}, {112, 109, 110, 111}},
    {{0.229989, -0.972886, 0.024444}, {107, 106, 113, 114}},
    {{-0.662384, 0.000000, 0.749165}, {24, 28, 27, 23}},
    {{0.662384, -0.000000, -0.749165}, {36, 34, 29, 35}},
    {{0.554404, 0.000000, -0.832248}, {118, 115, 116, 117}},
    {{-0.254116, 0.506028, -0.824233}, {122, 119, 120, 121}},
    {{-0.412127, -0.786896, -0.459288}, {126, 123, 124, 125}},
    {{-0.254116, -0.506029, -0.824233}, {128, 126, 125, 127}},
    {{0.331415, -0.505553, -0.796605}, {118, 117, 126, 128}},
    {{0.912434, -0.000000, -0.409223}, {116, 129, 130, 117}},
    {{0.331415, 0.505553, -0.796606}, {121, 120, 116, 115}},
    {{-0.412127, 0.786896, -0.459290}, {119, 131, 132, 120}},
    {{-0.869772, -0.000000, -0.493453}, {125, 124, 131, 119}},
    {{-0.473442, 0.000000, -0.880825}, {127, 125, 119, 122}},
    {{0.454388, -0.786457, -0.418349}, {117, 130, 123, 126}},
    {{0.454388, 0.786456, -0.418351}, {120, 132, 129, 116}},
    {{0.047209, 0.000000, -0.998885}, {128, 121, 115, 118}},
    {{0.047208, 0.000000, -0.998885}, {121, 128, 127, 122}},
    {{0.047209, -0.000000, -0.998885}, {136, 133, 134, 135}},
    {{0.047209, -0.000000, -0.998885}, {133, 137, 138, 134}},
    {{0.047209, -0.000000, -0.998885}, {133, 136, 139, 140}},
    {{0.047209, -0.000000, -0.998885}, {137, 133, 140, 141}},
};

static ATTR attribute_Ship[94] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(20, 21, 22), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(20, 21, 22), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, No_Texture, C_RGB(14, 13, 15), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, No_Texture, C_RGB(14, 13, 15), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, No_Texture, C_RGB(14, 13, 15), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, No_Texture, C_RGB(14, 13, 15), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, No_Texture, C_RGB(14, 13, 15), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, No_Texture, C_RGB(14, 13, 15), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, No_Texture, C_RGB(14, 13, 15), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, No_Texture, C_RGB(14, 13, 15), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, No_Texture, C_RGB(14, 13, 15), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, No_Texture, C_RGB(14, 13, 15), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, No_Texture, C_RGB(14, 13, 15), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, No_Texture, C_RGB(14, 13, 15), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(20, 21, 22), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(20, 21, 22), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(31, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(12, 17, 20), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(12, 17, 20), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(12, 17, 20), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(12, 17, 20), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(12, 17, 20), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(12, 17, 20), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(12, 17, 20), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(12, 17, 20), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 2, No_Palet, CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 64, C_RGB(0, 0, 31), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 65, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 66, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 67, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 68, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 69, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 70, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 71, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 72, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 73, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 74, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 75, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 76, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 77, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 78, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 79, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 80, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 81, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 82, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 83, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 84, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 85, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 86, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 87, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 88, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 89, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 90, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 91, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 92, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 93, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 94, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 95, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 96, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 97, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 98, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 99, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 100, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 101, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 102, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 103, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 104, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 105, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 106, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 107, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 108, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 109, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 110, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 111, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 112, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 113, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 114, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 115, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 116, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 117, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 118, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 119, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 120, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 121, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 122, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 123, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 124, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 125, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 126, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 127, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 128, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 129, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 130, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 131, C_RGB(165, 173, 181), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
};

jo_3d_mesh mesh_Ship = {
    .data =
        {
            point_Ship,
            142,
            polygon_Ship,
            94,
            attribute_Ship,
        }};

static __jo_force_inline void display_Ship_mesh(void)
{
    jo_3d_mesh_draw(&mesh_Ship);
}

// UPPERARML
static POINT point_UpperArmL[11] = {
    {toFIXED(0.213), toFIXED(-1.908), toFIXED(2.396)},  //   0.21256,  -1.90757,   2.39619
    {toFIXED(-0.245), toFIXED(-2.707), toFIXED(2.574)}, //  -0.24528,  -2.70673,   2.57437
    {toFIXED(0.438), toFIXED(-2.674), toFIXED(3.743)},  //   0.43765,  -2.67450,   3.74291
    {toFIXED(0.966), toFIXED(-1.752), toFIXED(3.270)},  //   0.96590,  -1.75183,   3.27038
    {toFIXED(1.051), toFIXED(-3.543), toFIXED(3.270)},  //   1.05056,  -3.54320,   3.27032
    {toFIXED(2.276), toFIXED(-3.012), toFIXED(4.664)},  //   2.27632,  -3.01173,   4.66412
    {toFIXED(2.225), toFIXED(-2.590), toFIXED(4.894)},  //   2.22515,  -2.59005,   4.89366
    {toFIXED(0.251), toFIXED(-2.721), toFIXED(1.096)},  //   0.25102,  -2.72123,   1.09591
    {toFIXED(0.966), toFIXED(-1.752), toFIXED(3.270)},  //   0.96590,  -1.75183,   3.27038
    {toFIXED(1.051), toFIXED(-3.543), toFIXED(3.270)},  //   1.05056,  -3.54320,   3.27032
    {toFIXED(2.236), toFIXED(-2.158), toFIXED(4.664)},  //   2.23599,  -2.15836,   4.66415
};

static POLYGON polygon_UpperArmL[6] = {
    {{-0.698166, -0.438810, 0.565695}, {3, 0, 1, 2}},
    {{-0.444835, -0.670516, -0.593743}, {6, 2, 4, 5}},
    {{0.885138, 0.398284, 0.240625}, {9, 7, 0, 8}},
    {{0.743770, 0.667511, 0.035151}, {5, 9, 8, 10}},
    {{-0.561914, -0.054220, -0.825417}, {2, 1, 7, 4}},
    {{-0.500674, -0.670855, 0.547064}, {10, 3, 2, 6}},
};

static ATTR attribute_UpperArmL[6] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 132, C_RGB(255, 0, 41), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 133, C_RGB(255, 0, 41), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 134, C_RGB(255, 0, 41), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 135, C_RGB(255, 0, 41), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 136, C_RGB(255, 0, 41), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 137, C_RGB(255, 0, 41), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
};

jo_3d_mesh mesh_UpperArmL = {
    .data =
        {
            point_UpperArmL,
            11,
            polygon_UpperArmL,
            6,
            attribute_UpperArmL,
        }};

static __jo_force_inline void display_UpperArmL_mesh(void)
{
    jo_3d_mesh_draw(&mesh_UpperArmL);
}

// UPPERARMR
static POINT point_UpperArmR[11] = {
    {toFIXED(0.930), toFIXED(-1.705), toFIXED(-3.523)},  //   0.92961,  -1.70477,  -3.52326
    {toFIXED(0.445), toFIXED(-2.625), toFIXED(-4.044)},  //   0.44467,  -2.62536,  -4.04383
    {toFIXED(-0.317), toFIXED(-2.661), toFIXED(-3.170)}, //  -0.31725,  -2.66140,  -3.16979
    {toFIXED(0.103), toFIXED(-1.864), toFIXED(-2.719)},  //   0.10306,  -1.86403,  -2.71863
    {toFIXED(2.034), toFIXED(-2.564), toFIXED(-5.250)},  //   2.03387,  -2.56432,  -5.24972
    {toFIXED(2.310), toFIXED(-2.975), toFIXED(-4.997)},  //   2.30997,  -2.97538,  -4.99690
    {toFIXED(1.014), toFIXED(-3.496), toFIXED(-3.523)},  //   1.01427,  -3.49614,  -3.52332
    {toFIXED(1.014), toFIXED(-3.496), toFIXED(-3.523)},  //   1.01427,  -3.49614,  -3.52332
    {toFIXED(0.930), toFIXED(-1.705), toFIXED(-3.523)},  //   0.92961,  -1.70477,  -3.52326
    {toFIXED(0.162), toFIXED(-3.116), toFIXED(-2.181)},  //   0.16221,  -3.11575,  -2.18066
    {toFIXED(2.270), toFIXED(-2.122), toFIXED(-4.997)},  //   2.26964,  -2.12201,  -4.99687
};

static POLYGON polygon_UpperArmR[6] = {
    {{-0.610547, 0.506974, 0.608449}, {3, 0, 1, 2}},
    {{-0.436820, 0.613192, -0.658168}, {1, 4, 5, 6}},
    {{0.786814, -0.600318, 0.143321}, {9, 7, 8, 3}},
    {{0.744322, -0.666894, 0.035178}, {7, 5, 10, 8}},
    {{-0.562408, 0.289125, -0.774664}, {2, 1, 6, 9}},
    {{-0.492151, 0.619360, 0.611702}, {4, 1, 0, 10}},
};

static ATTR attribute_UpperArmR[6] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 138, C_RGB(255, 0, 41), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 139, C_RGB(255, 0, 41), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 140, C_RGB(255, 0, 41), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 141, C_RGB(255, 0, 41), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 142, C_RGB(255, 0, 41), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 143, C_RGB(255, 0, 41), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
};

jo_3d_mesh mesh_UpperArmR = {
    .data =
        {
            point_UpperArmR,
            11,
            polygon_UpperArmR,
            6,
            attribute_UpperArmR,
        }};

static __jo_force_inline void display_UpperArmR_mesh(void)
{
    jo_3d_mesh_draw(&mesh_UpperArmR);
}

static __jo_force_inline void display_robotnik_mesh(void)
{
    jo_3d_mesh_draw(&mesh_ForeArmL);
    jo_3d_mesh_draw(&mesh_ForeArmR);
    jo_3d_mesh_draw(&mesh_UpperArmL);
    jo_3d_mesh_draw(&mesh_UpperArmR);
    jo_3d_mesh_draw(&mesh_Ship);
    jo_3d_mesh_draw(&mesh_Head);
}

// HITBOX
static POINT point_Hitbox[8] = {
    {toFIXED(-4.590), toFIXED(4.361), toFIXED(5.788)},   //  -4.59017,   4.36104,   5.78774
    {toFIXED(-4.590), toFIXED(4.361), toFIXED(-5.488)},  //  -4.59017,   4.36103,  -5.48765
    {toFIXED(-4.590), toFIXED(-4.685), toFIXED(5.788)},  //  -4.59017,  -4.68498,   5.78774
    {toFIXED(-4.590), toFIXED(-4.685), toFIXED(-5.488)}, //  -4.59017,  -4.68498,  -5.48765
    {toFIXED(4.696), toFIXED(4.361), toFIXED(5.788)},    //   4.69647,   4.36104,   5.78774
    {toFIXED(4.696), toFIXED(4.361), toFIXED(-5.488)},   //   4.69647,   4.36103,  -5.48765
    {toFIXED(4.696), toFIXED(-4.685), toFIXED(5.788)},   //   4.69647,  -4.68498,   5.78774
    {toFIXED(4.696), toFIXED(-4.685), toFIXED(-5.488)},  //   4.69647,  -4.68498,  -5.48765
};

static POLYGON polygon_Hitbox[6] = {
    {{-1.000000, 0.000000, 0.000000}, {2, 0, 1, 3}},
    {{0.000000, -1.000000, 0.000000}, {6, 2, 3, 7}},
    {{1.000000, 0.000000, 0.000000}, {4, 6, 7, 5}},
    {{0.000000, 1.000000, -0.000000}, {0, 4, 5, 1}},
    {{0.000000, 0.000000, 1.000000}, {0, 2, 6, 4}},
    {{0.000000, -0.000000, -1.000000}, {5, 7, 3, 1}},
};

static ATTR attribute_Hitbox[6] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(204, 204, 204), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(204, 204, 204), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(204, 204, 204), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(204, 204, 204), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(204, 204, 204), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(204, 204, 204), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight),
};

jo_3d_mesh mesh_Hitbox = {
    .data =
        {
            point_Hitbox,
            8,
            polygon_Hitbox,
            6,
            attribute_Hitbox,
        }};

static __jo_force_inline void display_Hitbox_mesh(void)
{
    jo_3d_mesh_draw(&mesh_Hitbox);
}

#endif