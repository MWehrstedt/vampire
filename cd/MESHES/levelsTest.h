/* Model Name: Untitled */
/* Total Objects : 4 */
/*
    -L1Chk1_1
    -L1Chk1_2
    -L1Chk1_3
    -L1Chk2_1
*/

#ifndef __LVLS_TEST_H__
#define __LVLS_TEST_H__
// L1CHK1_1
static POINT point_L1Chk1_1[15] = {
    {toFIXED(-400.355621), toFIXED(1.037520), toFIXED(-3.747536)},
    {toFIXED(-400.355591), toFIXED(1.533182), toFIXED(50.004066)},
    {toFIXED(-400.355621), toFIXED(50.154396), toFIXED(-4.350646)},
    {toFIXED(-400.355621), toFIXED(40.169960), toFIXED(36.522308)},
    {toFIXED(-69.660233), toFIXED(1.533178), toFIXED(49.811405)},
    {toFIXED(-69.654404), toFIXED(50.154396), toFIXED(-4.350646)},
    {toFIXED(-69.660194), toFIXED(1.037516), toFIXED(-3.747578)},
    {toFIXED(-84.304199), toFIXED(1.037516), toFIXED(-3.747576)},
    {toFIXED(-84.304199), toFIXED(1.533178), toFIXED(49.811405)},
    {toFIXED(-84.304192), toFIXED(50.154396), toFIXED(-4.350646)},
    {toFIXED(-154.953247), toFIXED(50.154396), toFIXED(-4.350646)},
    {toFIXED(-154.953262), toFIXED(1.037517), toFIXED(-3.747567)},
    {toFIXED(-154.953262), toFIXED(1.533179), toFIXED(50.004066)},
    {toFIXED(-84.304199), toFIXED(1.176229), toFIXED(32.494656)},
    {toFIXED(-154.953262), toFIXED(1.176230), toFIXED(32.494656)},
};

static POLYGON polygon_L1Chk1_1[10] = {
    {{-1.000000, -0.000000, 0.000000}, {2, 0, 1, 3}},
    {{-0.000000, -0.012278, -0.999925}, {0, 2, 10, 11}},
    {{0.000000, -0.999788, 0.020609}, {4, 8, 13, 4}},
    {{-0.000000, -0.999993, 0.003827}, {11, 7, 13, 14}},
    {{-0.000000, -0.012277, -0.999925}, {6, 7, 9, 5}},
    {{-0.000000, -0.012277, -0.999925}, {7, 11, 10, 9}},
    {{-0.000000, -0.999993, 0.003827}, {7, 6, 13, 7}},
    {{0.013430, -0.999867, 0.009253}, {6, 4, 13, 6}},
    {{-0.000000, -0.999993, 0.003827}, {0, 11, 14, 0}},
    {{-0.000601, -0.999928, 0.011964}, {12, 1, 0, 14}},
};

static ATTR attribute_L1Chk1_1[10] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 5), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 5), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 5), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 5), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 5), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 5), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 5), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 5), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 5), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid.001
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 5), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid.001
};

static jo_3d_mesh mesh_L1Chk1_1 = {
    .data =
        {
            point_L1Chk1_1,
            15,
            polygon_L1Chk1_1,
            10,
            attribute_L1Chk1_1,
        }};

static __jo_force_inline void display_L1Chk1_1_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk1_1);
}

// L1CHK1_1A
static POINT point_L1Chk1_1a[7] = {
    {toFIXED(-26.922516), toFIXED(1.037516), toFIXED(-3.747582)},
    {toFIXED(-26.922516), toFIXED(1.533178), toFIXED(50.004066)},
    {toFIXED(-26.922516), toFIXED(50.154396), toFIXED(-4.350646)},
    {toFIXED(-26.922516), toFIXED(40.169960), toFIXED(36.522308)},
    {toFIXED(-69.660233), toFIXED(1.533178), toFIXED(50.004066)},
    {toFIXED(-69.654404), toFIXED(50.154396), toFIXED(-4.350646)},
    {toFIXED(-69.660194), toFIXED(1.037516), toFIXED(-3.747578)},
};

static POLYGON polygon_L1Chk1_1a[3] = {
    {{1.000000, -0.000000, 0.000000}, {0, 2, 3, 1}},
    {{-0.000000, -0.999958, 0.009221}, {6, 0, 1, 4}},
    {{-0.000000, -0.012277, -0.999925}, {0, 6, 5, 2}},
};

static ATTR attribute_L1Chk1_1a[3] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
};

static jo_3d_mesh mesh_L1Chk1_1a = {
    .data =
        {
            point_L1Chk1_1a,
            7,
            polygon_L1Chk1_1a,
            3,
            attribute_L1Chk1_1a,
        }};

static __jo_force_inline void display_L1Chk1_1a_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk1_1a);
}

// L1CHK1_2
static POINT point_L1Chk1_2[16] = {
    {toFIXED(-84.388458), toFIXED(-25.230955), toFIXED(17.418909)},
    {toFIXED(-155.071045), toFIXED(-25.231411), toFIXED(16.416906)},
    {toFIXED(-155.071045), toFIXED(1.441875), toFIXED(20.204292)},
    {toFIXED(-155.071045), toFIXED(1.129204), toFIXED(7.216166)},
    {toFIXED(-155.071045), toFIXED(-4.924536), toFIXED(0.420734)},
    {toFIXED(-155.071045), toFIXED(-23.925661), toFIXED(21.094057)},
    {toFIXED(-155.071045), toFIXED(-14.821644), toFIXED(28.680737)},
    {toFIXED(-155.071045), toFIXED(-12.349741), toFIXED(-0.855884)},
    {toFIXED(-155.071045), toFIXED(-20.004253), toFIXED(7.510299)},
    {toFIXED(-84.388458), toFIXED(1.441875), toFIXED(20.204292)},
    {toFIXED(-84.388458), toFIXED(-1.222800), toFIXED(1.253520)},
    {toFIXED(-84.388458), toFIXED(1.129204), toFIXED(7.216166)},
    {toFIXED(-84.388458), toFIXED(-14.821642), toFIXED(28.680737)},
    {toFIXED(-84.388458), toFIXED(-23.925930), toFIXED(20.501841)},
    {toFIXED(-84.388458), toFIXED(-22.671186), toFIXED(3.217940)},
    {toFIXED(-84.388458), toFIXED(-14.912889), toFIXED(-0.006416)},
};

static POLYGON polygon_L1Chk1_2[16] = {
    {{-1.000000, -0.000000, 0.000000}, {5, 6, 2, 5}},
    {{-0.000923, -0.947797, 0.318873}, {13, 5, 1, 0}},
    {{-0.025299, -0.947336, -0.319239}, {0, 1, 8, 14}},
    {{0.010854, 0.119264, -0.992803}, {10, 15, 7, 4}},
    {{-0.041665, -0.600504, -0.798535}, {8, 7, 15, 14}},
    {{-0.018622, 0.834903, -0.550081}, {11, 10, 4, 3}},
    {{1.000000, 0.000000, 0.000000}, {13, 9, 12, 13}},
    {{-1.000000, -0.000000, 0.000000}, {3, 1, 5, 2}},
    {{1.000000, 0.000000, 0.000000}, {0, 14, 11, 0}},
    {{1.000000, 0.000000, 0.000000}, {14, 15, 11, 14}},
    {{1.000000, 0.000000, 0.000000}, {15, 10, 11, 15}},
    {{-1.000000, 0.000000, 0.000000}, {3, 4, 7, 3}},
    {{-1.000000, 0.000000, 0.000000}, {8, 3, 7, 8}},
    {{-1.000000, -0.000000, -0.000000}, {8, 1, 3, 8}},
    {{1.000000, 0.000000, 0.000000}, {13, 0, 11, 9}},
    {{0.003166, -0.654573, 0.755993}, {5, 13, 12, 6}},
};

static ATTR attribute_L1Chk1_2[16] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(24, 15, 6), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // WoodLight
    ATTRIBUTE(Dual_Plane, SORT_CEN, 2, C_RGB(3, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight),   // Wood
    ATTRIBUTE(Dual_Plane, SORT_CEN, 2, C_RGB(3, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight),   // Wood
    ATTRIBUTE(Dual_Plane, SORT_CEN, 2, C_RGB(3, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight),   // Wood
    ATTRIBUTE(Dual_Plane, SORT_CEN, 2, C_RGB(3, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight),   // Wood
    ATTRIBUTE(Dual_Plane, SORT_CEN, 2, C_RGB(3, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight),   // Wood
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(24, 15, 6), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // WoodLight
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(24, 15, 6), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // WoodLight
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(24, 15, 6), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // WoodLight
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(24, 15, 6), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // WoodLight
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(24, 15, 6), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // WoodLight
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(24, 15, 6), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // WoodLight
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(24, 15, 6), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // WoodLight
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(24, 15, 6), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // WoodLight
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(24, 15, 6), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // WoodLight
    ATTRIBUTE(Dual_Plane, SORT_CEN, 2, C_RGB(3, 1, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprNoflip, UseLight),   // Wood
};

static jo_3d_mesh mesh_L1Chk1_2 = {
    .data =
        {
            point_L1Chk1_2,
            16,
            polygon_L1Chk1_2,
            16,
            attribute_L1Chk1_2,
        }};

static __jo_force_inline void display_L1Chk1_2_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk1_2);
}

// L1CHK1_3
static POINT point_L1Chk1_3[6] = {
    {toFIXED(-26.890093), toFIXED(50.141743), toFIXED(-4.303096)},
    {toFIXED(-27.385925), toFIXED(24.298363), toFIXED(50.004066)},
    {toFIXED(-26.890068), toFIXED(23.802696), toFIXED(-4.005099)},
    {toFIXED(80.151230), toFIXED(50.141743), toFIXED(-4.303096)},
    {toFIXED(82.742188), toFIXED(24.298363), toFIXED(50.004066)},
    {toFIXED(80.151230), toFIXED(23.802696), toFIXED(-4.005099)},
};

static POLYGON polygon_L1Chk1_3[2] = {
    {{0.000000, -0.999958, 0.009177}, {4, 1, 2, 5}},
    {{0.000000, -0.011313, -0.999936}, {3, 5, 2, 0}},
};

static ATTR attribute_L1Chk1_3[2] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
};

static jo_3d_mesh mesh_L1Chk1_3 = {
    .data =
        {
            point_L1Chk1_3,
            6,
            polygon_L1Chk1_3,
            2,
            attribute_L1Chk1_3,
        }};

static __jo_force_inline void display_L1Chk1_3_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk1_3);
}

// L1CHK2_1
static POINT point_L1Chk2_1[6] = {
    {toFIXED(116.952728), toFIXED(1.330000), toFIXED(50.222107)},
    {toFIXED(117.672729), toFIXED(39.674305), toFIXED(-3.881214)},
    {toFIXED(116.952728), toFIXED(1.330000), toFIXED(-3.747541)},
    {toFIXED(357.437408), toFIXED(1.330000), toFIXED(50.222080)},
    {toFIXED(357.404510), toFIXED(1.330000), toFIXED(-3.747576)},
    {toFIXED(357.018860), toFIXED(39.674305), toFIXED(-3.881214)},
};

static POLYGON polygon_L1Chk2_1[2] = {
    {{-0.000000, -0.003486, -0.999994}, {4, 2, 1, 5}},
    {{0.000000, -1.000000, 0.000000}, {2, 4, 3, 0}},
};

static ATTR attribute_L1Chk2_1[2] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
};

static jo_3d_mesh mesh_L1Chk2_1 = {
    .data =
        {
            point_L1Chk2_1,
            6,
            polygon_L1Chk2_1,
            2,
            attribute_L1Chk2_1,
        }};

static __jo_force_inline void display_L1Chk2_1_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk2_1);
}

// L1CHK2_1A
static POINT point_L1Chk2_1a[7] = {
    {toFIXED(80.060516), toFIXED(1.037520), toFIXED(-3.747536)},
    {toFIXED(80.060577), toFIXED(1.533182), toFIXED(50.004066)},
    {toFIXED(80.060516), toFIXED(50.184578), toFIXED(-4.351125)},
    {toFIXED(80.060516), toFIXED(50.680237), toFIXED(36.355900)},
    {toFIXED(116.952728), toFIXED(1.533181), toFIXED(50.004066)},
    {toFIXED(117.672729), toFIXED(50.184578), toFIXED(-4.351125)},
    {toFIXED(116.952728), toFIXED(1.037519), toFIXED(-3.747542)},
};

static POLYGON polygon_L1Chk2_1a[3] = {
    {{-1.000000, -0.000001, 0.000001}, {2, 0, 1, 3}},
    {{-0.000000, -0.012280, -0.999925}, {0, 2, 5, 6}},
    {{-0.000000, -0.999958, 0.009221}, {0, 6, 4, 1}},
};

static ATTR attribute_L1Chk2_1a[3] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
};

static jo_3d_mesh mesh_L1Chk2_1a = {
    .data =
        {
            point_L1Chk2_1a,
            7,
            polygon_L1Chk2_1a,
            3,
            attribute_L1Chk2_1a,
        }};

static __jo_force_inline void display_L1Chk2_1a_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk2_1a);
}

// L1CHK2_2
static POINT point_L1Chk2_2[8] = {
    {toFIXED(178.648438), toFIXED(-28.162697), toFIXED(2.155758)},
    {toFIXED(178.648438), toFIXED(-24.577120), toFIXED(-3.463160)},
    {toFIXED(178.648438), toFIXED(-32.582123), toFIXED(50.603111)},
    {toFIXED(178.648438), toFIXED(-33.088360), toFIXED(-3.366864)},
    {toFIXED(210.292450), toFIXED(-28.152121), toFIXED(15.418390)},
    {toFIXED(210.292450), toFIXED(-24.577124), toFIXED(-3.463160)},
    {toFIXED(210.292450), toFIXED(-32.582123), toFIXED(50.603111)},
    {toFIXED(210.292450), toFIXED(-33.088360), toFIXED(-3.366864)},
};

static POLYGON polygon_L1Chk2_2[4] = {
    {{-1.000000, 0.000000, 0.000000}, {2, 0, 1, 3}},
    {{0.000000, -0.999956, 0.009380}, {6, 2, 3, 7}},
    {{1.000000, 0.000000, 0.000000}, {4, 6, 7, 5}},
    {{-0.000000, -0.011313, -0.999936}, {5, 7, 3, 1}},
};

static ATTR attribute_L1Chk2_2[4] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(7, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // DarkRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(7, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // DarkRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(7, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // DarkRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(7, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // DarkRed
};

static jo_3d_mesh mesh_L1Chk2_2 = {
    .data =
        {
            point_L1Chk2_2,
            8,
            polygon_L1Chk2_2,
            4,
            attribute_L1Chk2_2,
        }};

static __jo_force_inline void display_L1Chk2_2_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk2_2);
}

// L1CHK2_3
static POINT point_L1Chk2_3[8] = {
    {toFIXED(231.972916), toFIXED(-32.412800), toFIXED(38.837128)},
    {toFIXED(231.972916), toFIXED(-33.029758), toFIXED(-3.366698)},
    {toFIXED(231.972916), toFIXED(-53.749344), toFIXED(50.843426)},
    {toFIXED(231.972916), toFIXED(-54.255585), toFIXED(-3.126550)},
    {toFIXED(300.562347), toFIXED(-32.402222), toFIXED(52.099762)},
    {toFIXED(300.562347), toFIXED(-33.029758), toFIXED(-3.366698)},
    {toFIXED(300.562347), toFIXED(-53.749344), toFIXED(50.843426)},
    {toFIXED(300.562347), toFIXED(-54.255585), toFIXED(-3.126550)},
};

static POLYGON polygon_L1Chk2_3[5] = {
    {{-1.000000, 0.000000, 0.000000}, {2, 0, 1, 3}},
    {{0.000000, -0.999956, 0.009380}, {6, 2, 3, 7}},
    {{1.000000, 0.000000, 0.000000}, {4, 6, 7, 5}},
    {{0.001155, 0.999918, -0.012741}, {0, 4, 5, 1}},
    {{0.000000, -0.011313, -0.999936}, {5, 7, 3, 1}},
};

static ATTR attribute_L1Chk2_3[5] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
};

static jo_3d_mesh mesh_L1Chk2_3 = {
    .data =
        {
            point_L1Chk2_3,
            8,
            polygon_L1Chk2_3,
            5,
            attribute_L1Chk2_3,
        }};

static __jo_force_inline void display_L1Chk2_3_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk2_3);
}

// L1CHK2_4
static POINT point_L1Chk2_4[8] = {
    {toFIXED(330.600891), toFIXED(-32.412800), toFIXED(38.837128)},
    {toFIXED(330.600891), toFIXED(-33.028748), toFIXED(-3.276706)},
    {toFIXED(330.600891), toFIXED(-53.749344), toFIXED(50.843426)},
    {toFIXED(330.600891), toFIXED(-54.254570), toFIXED(-3.036556)},
    {toFIXED(399.190338), toFIXED(-32.402222), toFIXED(52.099762)},
    {toFIXED(399.190338), toFIXED(-33.028748), toFIXED(-3.276706)},
    {toFIXED(399.190338), toFIXED(-53.749344), toFIXED(50.843426)},
    {toFIXED(399.190338), toFIXED(-54.254570), toFIXED(-3.036556)},
};

static POLYGON polygon_L1Chk2_4[5] = {
    {{-1.000000, 0.000000, 0.000000}, {2, 0, 1, 3}},
    {{0.000000, -0.999956, 0.009376}, {6, 2, 3, 7}},
    {{1.000000, 0.000000, 0.000000}, {4, 6, 7, 5}},
    {{0.001155, 0.999918, -0.012744}, {0, 4, 5, 1}},
    {{0.000000, -0.011313, -0.999936}, {5, 7, 3, 1}},
};

static ATTR attribute_L1Chk2_4[5] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
};

static jo_3d_mesh mesh_L1Chk2_4 = {
    .data =
        {
            point_L1Chk2_4,
            8,
            polygon_L1Chk2_4,
            5,
            attribute_L1Chk2_4,
        }};

static __jo_force_inline void display_L1Chk2_4_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk2_4);
}

// L1CHK2_5
static POINT point_L1Chk2_5[6] = {
    {toFIXED(453.493317), toFIXED(1.330000), toFIXED(-3.540569)},
    {toFIXED(453.493317), toFIXED(1.330000), toFIXED(50.221542)},
    {toFIXED(453.493317), toFIXED(39.867813), toFIXED(-3.729464)},
    {toFIXED(538.260376), toFIXED(1.330000), toFIXED(50.221542)},
    {toFIXED(538.031128), toFIXED(39.867813), toFIXED(-3.729464)},
    {toFIXED(538.260376), toFIXED(1.330000), toFIXED(-3.540569)},
};

static POLYGON polygon_L1Chk2_5[2] = {
    {{0.000000, -1.000000, -0.000000}, {1, 0, 5, 3}},
    {{0.000000, -0.004901, -0.999988}, {0, 2, 4, 5}},
};

static ATTR attribute_L1Chk2_5[2] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
};

static jo_3d_mesh mesh_L1Chk2_5 = {
    .data =
        {
            point_L1Chk2_5,
            6,
            polygon_L1Chk2_5,
            2,
            attribute_L1Chk2_5,
        }};

static __jo_force_inline void display_L1Chk2_5_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk2_5);
}

// L1CHK2_5A
static POINT point_L1Chk2_5a[6] = {
    {toFIXED(453.493317), toFIXED(1.330000), toFIXED(-3.540569)},
    {toFIXED(453.493317), toFIXED(1.330000), toFIXED(50.221542)},
    {toFIXED(453.493317), toFIXED(39.867813), toFIXED(-3.729464)},
    {toFIXED(357.437408), toFIXED(1.330000), toFIXED(50.221542)},
    {toFIXED(357.404510), toFIXED(1.330000), toFIXED(-3.540569)},
    {toFIXED(357.018860), toFIXED(39.867813), toFIXED(-3.729464)},
};

static POLYGON polygon_L1Chk2_5a[2] = {
    {{0.000000, -1.000000, 0.000000}, {4, 0, 1, 3}},
    {{0.000000, -0.004901, -0.999988}, {0, 4, 5, 2}},
};

static ATTR attribute_L1Chk2_5a[2] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
};

static jo_3d_mesh mesh_L1Chk2_5a = {
    .data =
        {
            point_L1Chk2_5a,
            6,
            polygon_L1Chk2_5a,
            2,
            attribute_L1Chk2_5a,
        }};

static __jo_force_inline void display_L1Chk2_5a_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk2_5a);
}

// L1CHK3_1
static POINT point_L1Chk3_1[7] = {
    {toFIXED(430.344360), toFIXED(-208.417633), toFIXED(-1.734117)},
    {toFIXED(480.334595), toFIXED(-208.417633), toFIXED(-1.734117)},
    {toFIXED(480.334595), toFIXED(-207.911377), toFIXED(52.235859)},
    {toFIXED(430.344360), toFIXED(-185.101913), toFIXED(-2.176229)},
    {toFIXED(480.334595), toFIXED(-72.706085), toFIXED(44.825871)},
    {toFIXED(480.334595), toFIXED(-72.857635), toFIXED(-2.911798)},
    {toFIXED(480.334595), toFIXED(-72.142799), toFIXED(-2.919886)},
};

static POLYGON polygon_L1Chk3_1[4] = {
    {{0.000000, -0.018959, -0.999820}, {3, 1, 0, 3}},
    {{1.000000, 0.000000, 0.000000}, {2, 1, 5, 4}},
    {{0.004792, -0.008687, -0.999951}, {3, 5, 1, 3}},
    {{1.000000, 0.000000, 0.000000}, {5, 6, 4, 5}},
};

static ATTR attribute_L1Chk3_1[4] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
};

static jo_3d_mesh mesh_L1Chk3_1 = {
    .data =
        {
            point_L1Chk3_1,
            7,
            polygon_L1Chk3_1,
            4,
            attribute_L1Chk3_1,
        }};

static __jo_force_inline void display_L1Chk3_1_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk3_1);
}

// L1CHK3_1A
static POINT point_L1Chk3_1a[9] = {
    {toFIXED(430.344360), toFIXED(-37.163063), toFIXED(-3.315641)},
    {toFIXED(430.344360), toFIXED(-36.660652), toFIXED(42.251133)},
    {toFIXED(480.334595), toFIXED(-37.163063), toFIXED(-3.315641)},
    {toFIXED(480.334595), toFIXED(-36.660652), toFIXED(42.251133)},
    {toFIXED(430.344360), toFIXED(-184.959305), toFIXED(-2.176229)},
    {toFIXED(480.334595), toFIXED(-72.706085), toFIXED(44.825871)},
    {toFIXED(480.334595), toFIXED(-72.857635), toFIXED(-2.911798)},
    {toFIXED(480.334595), toFIXED(-72.142799), toFIXED(-2.919886)},
    {toFIXED(430.344360), toFIXED(-183.500412), toFIXED(49.376522)},
};

static POLYGON polygon_L1Chk3_1a[6] = {
    {{0.000000, 0.999939, -0.011025}, {2, 0, 1, 3}},
    {{1.000000, -0.000000, 0.000000}, {7, 2, 3, 5}},
    {{-0.000000, -0.011313, -0.999936}, {7, 6, 0, 7}},
    {{0.002574, -0.007709, -0.999967}, {4, 0, 6, 4}},
    {{-0.000000, -0.011313, -0.999936}, {0, 2, 7, 0}},
    {{-1.000000, 0.000000, 0.000000}, {8, 1, 0, 4}},
};

static ATTR attribute_L1Chk3_1a[6] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
};

static jo_3d_mesh mesh_L1Chk3_1a = {
    .data =
        {
            point_L1Chk3_1a,
            9,
            polygon_L1Chk3_1a,
            6,
            attribute_L1Chk3_1a,
        }};

static __jo_force_inline void display_L1Chk3_1a_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk3_1a);
}

// L1CHK3_2
static POINT point_L1Chk3_2[7] = {
    {toFIXED(670.952026), toFIXED(1.330000), toFIXED(-3.540569)},
    {toFIXED(670.952026), toFIXED(1.330000), toFIXED(50.221542)},
    {toFIXED(670.952026), toFIXED(40.061337), toFIXED(-2.970724)},
    {toFIXED(670.952026), toFIXED(40.553791), toFIXED(49.780788)},
    {toFIXED(538.260376), toFIXED(1.330000), toFIXED(50.221542)},
    {toFIXED(538.031128), toFIXED(40.052597), toFIXED(-3.660999)},
    {toFIXED(538.260376), toFIXED(1.330000), toFIXED(-3.540569)},
};

static POLYGON polygon_L1Chk3_2[3] = {
    {{1.000000, 0.000000, -0.000000}, {2, 3, 1, 0}},
    {{-0.000000, -1.000000, 0.000000}, {1, 4, 6, 0}},
    {{0.002599, 0.005810, -0.999980}, {0, 6, 5, 2}},
};

static ATTR attribute_L1Chk3_2[3] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
};

static jo_3d_mesh mesh_L1Chk3_2 = {
    .data =
        {
            point_L1Chk3_2,
            7,
            polygon_L1Chk3_2,
            3,
            attribute_L1Chk3_2,
        }};

static __jo_force_inline void display_L1Chk3_2_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk3_2);
}

// L1CHK3_3
static POINT point_L1Chk3_3[8] = {
    {toFIXED(602.933960), toFIXED(2.586023), toFIXED(36.947594)},
    {toFIXED(602.934021), toFIXED(-115.928680), toFIXED(51.551197)},
    {toFIXED(670.952332), toFIXED(2.596600), toFIXED(50.210228)},
    {toFIXED(670.952393), toFIXED(-115.928680), toFIXED(51.551205)},
    {toFIXED(602.933960), toFIXED(2.090357), toFIXED(-3.759752)},
    {toFIXED(602.934021), toFIXED(-116.434929), toFIXED(-2.418770)},
    {toFIXED(670.952332), toFIXED(2.090358), toFIXED(-3.759748)},
    {toFIXED(670.952393), toFIXED(-116.434929), toFIXED(-2.418766)},
};

static POLYGON polygon_L1Chk3_3[6] = {
    {{-0.096821, 0.066798, 0.993058}, {2, 0, 1, 3}},
    {{1.000000, 0.000001, -0.000000}, {6, 2, 3, 7}},
    {{0.000000, -0.011313, -0.999936}, {4, 6, 7, 5}},
    {{-1.000000, -0.000001, 0.000000}, {0, 4, 5, 1}},
    {{0.000954, 0.999944, -0.010582}, {0, 2, 6, 4}},
    {{-0.000000, -0.999956, 0.009380}, {5, 7, 3, 1}},
};

static ATTR attribute_L1Chk3_3[6] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(0, 25, 3), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // Solid
};

static jo_3d_mesh mesh_L1Chk3_3 = {
    .data =
        {
            point_L1Chk3_3,
            8,
            polygon_L1Chk3_3,
            6,
            attribute_L1Chk3_3,
        }};

static __jo_force_inline void display_L1Chk3_3_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk3_3);
}

// L1CHK3_4
static POINT point_L1Chk3_4[7] = {
    {toFIXED(570.846436), toFIXED(-19.468912), toFIXED(2.045874)},
    {toFIXED(570.846436), toFIXED(-19.566933), toFIXED(-3.514721)},
    {toFIXED(570.846436), toFIXED(-27.571938), toFIXED(54.759075)},
    {toFIXED(570.846436), toFIXED(-28.078178), toFIXED(-3.418427)},
    {toFIXED(602.490479), toFIXED(-19.566936), toFIXED(-3.514721)},
    {toFIXED(602.490479), toFIXED(-27.571938), toFIXED(54.759075)},
    {toFIXED(602.490479), toFIXED(-28.078178), toFIXED(-3.418427)},
};

static POLYGON polygon_L1Chk3_4[3] = {
    {{-1.000000, 0.000000, 0.000000}, {2, 0, 1, 3}},
    {{0.000000, -0.999962, 0.008701}, {5, 2, 3, 6}},
    {{-0.000000, -0.011313, -0.999936}, {4, 6, 3, 1}},
};

static ATTR attribute_L1Chk3_4[3] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(7, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // DarkRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(7, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // DarkRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(7, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // DarkRed
};

static jo_3d_mesh mesh_L1Chk3_4 = {
    .data =
        {
            point_L1Chk3_4,
            7,
            polygon_L1Chk3_4,
            3,
            attribute_L1Chk3_4,
        }};

static __jo_force_inline void display_L1Chk3_4_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk3_4);
}

// L1CHK3_5
static POINT point_L1Chk3_5[7] = {
    {toFIXED(570.846436), toFIXED(-48.996391), toFIXED(12.281037)},
    {toFIXED(570.846436), toFIXED(-49.219540), toFIXED(-3.179236)},
    {toFIXED(570.846436), toFIXED(-57.224541), toFIXED(54.759075)},
    {toFIXED(570.846436), toFIXED(-57.730774), toFIXED(-3.082941)},
    {toFIXED(602.490479), toFIXED(-49.219543), toFIXED(-3.179236)},
    {toFIXED(602.490479), toFIXED(-57.224541), toFIXED(54.759075)},
    {toFIXED(602.490479), toFIXED(-57.730774), toFIXED(-3.082941)},
};

static POLYGON polygon_L1Chk3_5[3] = {
    {{-1.000000, 0.000000, 0.000000}, {2, 0, 1, 3}},
    {{0.000000, -0.999962, 0.008752}, {5, 2, 3, 6}},
    {{-0.000000, -0.011313, -0.999936}, {4, 6, 3, 1}},
};

static ATTR attribute_L1Chk3_5[3] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(7, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // DarkRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(7, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // DarkRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(7, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // DarkRed
};

static jo_3d_mesh mesh_L1Chk3_5 = {
    .data =
        {
            point_L1Chk3_5,
            7,
            polygon_L1Chk3_5,
            3,
            attribute_L1Chk3_5,
        }};

static __jo_force_inline void display_L1Chk3_5_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk3_5);
}

// L1CHK3_6
static POINT point_L1Chk3_6[7] = {
    {toFIXED(570.846436), toFIXED(-76.517426), toFIXED(2.691312)},
    {toFIXED(570.846436), toFIXED(-76.615440), toFIXED(-2.869282)},
    {toFIXED(570.846436), toFIXED(-84.495316), toFIXED(54.759075)},
    {toFIXED(570.846436), toFIXED(-85.126686), toFIXED(-2.772987)},
    {toFIXED(602.490479), toFIXED(-76.615448), toFIXED(-2.869282)},
    {toFIXED(602.490479), toFIXED(-84.495316), toFIXED(54.759075)},
    {toFIXED(602.490479), toFIXED(-85.126686), toFIXED(-2.772987)},
};

static POLYGON polygon_L1Chk3_6[3] = {
    {{-1.000000, 0.000000, 0.000000}, {2, 0, 1, 3}},
    {{0.000000, -0.999940, 0.010974}, {5, 2, 3, 6}},
    {{-0.000000, -0.011313, -0.999936}, {4, 6, 3, 1}},
};

static ATTR attribute_L1Chk3_6[3] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(7, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // DarkRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(7, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // DarkRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(7, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // DarkRed
};

static jo_3d_mesh mesh_L1Chk3_6 = {
    .data =
        {
            point_L1Chk3_6,
            7,
            polygon_L1Chk3_6,
            3,
            attribute_L1Chk3_6,
        }};

static __jo_force_inline void display_L1Chk3_6_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk3_6);
}

// L1CHK3_7
static POINT point_L1Chk3_7[7] = {
    {toFIXED(570.846436), toFIXED(-107.700493), toFIXED(12.945210)},
    {toFIXED(570.846436), toFIXED(-107.923630), toFIXED(-2.515067)},
    {toFIXED(570.846436), toFIXED(-115.928627), toFIXED(54.759075)},
    {toFIXED(570.846436), toFIXED(-116.434875), toFIXED(-2.418771)},
    {toFIXED(602.490479), toFIXED(-107.923637), toFIXED(-2.515066)},
    {toFIXED(602.490479), toFIXED(-115.803497), toFIXED(54.759075)},
    {toFIXED(602.490479), toFIXED(-116.434875), toFIXED(-2.418771)},
};

static POLYGON polygon_L1Chk3_7[3] = {
    {{-1.000000, 0.000000, 0.000000}, {2, 0, 1, 3}},
    {{0.001977, -0.999949, 0.009948}, {5, 2, 3, 6}},
    {{0.000000, -0.011313, -0.999936}, {4, 6, 3, 1}},
};

static ATTR attribute_L1Chk3_7[3] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(7, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // DarkRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(7, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // DarkRed
    ATTRIBUTE(Dual_Plane, SORT_CEN, No_Texture, C_RGB(7, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | MESHoff, sprPolygon, UseLight), // DarkRed
};

static jo_3d_mesh mesh_L1Chk3_7 = {
    .data =
        {
            point_L1Chk3_7,
            7,
            polygon_L1Chk3_7,
            3,
            attribute_L1Chk3_7,
        }};

static __jo_force_inline void display_L1Chk3_7_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk3_7);
}

static void display_L1Chk1_mesh(void)
{
    display_L1Chk1_1_mesh();
    display_L1Chk1_2_mesh();
    display_L1Chk1_1a_mesh();
    display_L1Chk1_3_mesh();
    display_L1Chk2_1a_mesh();
}

static void display_L1Chk2_mesh(void)
{
    display_L1Chk1_1a_mesh();
    display_L1Chk2_1a_mesh();
    display_L1Chk1_3_mesh();
    display_L1Chk2_1_mesh();
    display_L1Chk2_2_mesh();
    display_L1Chk2_3_mesh();
    display_L1Chk2_4_mesh();
    display_L1Chk2_5_mesh();
    display_L1Chk2_5a_mesh();
    display_L1Chk3_1a_mesh();
}

static void display_L1Chk3_mesh(void)
{
    display_L1Chk2_4_mesh();
    display_L1Chk2_5_mesh();
    display_L1Chk2_5a_mesh();
    display_L1Chk3_1_mesh();
    display_L1Chk3_1a_mesh();
    display_L1Chk3_2_mesh();
    display_L1Chk3_3_mesh();
    display_L1Chk3_4_mesh();
    display_L1Chk3_4_mesh();
    display_L1Chk3_5_mesh();
    display_L1Chk3_6_mesh();
    display_L1Chk3_7_mesh();
}

#endif
