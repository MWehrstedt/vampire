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
static POINT point_L1Chk1_1[8] = {
    {toFIXED(-400.355621), toFIXED(-1.068045), toFIXED(-20.320700)},
    {toFIXED(-400.355591), toFIXED(-1.068045), toFIXED(35.148964)},
    {toFIXED(-400.355621), toFIXED(37.571205), toFIXED(-20.320744)},
    {toFIXED(-400.355621), toFIXED(37.571205), toFIXED(35.148930)},
    {toFIXED(-26.922516), toFIXED(-1.068049), toFIXED(-20.320744)},
    {toFIXED(-26.922516), toFIXED(-1.068049), toFIXED(35.148930)},
    {toFIXED(-26.922516), toFIXED(37.571205), toFIXED(-20.320744)},
    {toFIXED(-26.922516), toFIXED(37.571205), toFIXED(35.148930)},
};

static POLYGON polygon_L1Chk1_1[4] = {
    {{-1.000000, -0.000000, 0.000000}, {2, 0, 1, 3}},
    {{1.000000, -0.000000, 0.000000}, {4, 6, 7, 5}},
    {{-0.000000, -1.000000, 0.000000}, {0, 4, 5, 1}},
    {{-0.000000, -0.000001, -1.000000}, {0, 2, 6, 4}},
};

static ATTR attribute_L1Chk1_1[4] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 190, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 191, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 192, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 193, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
};

static jo_3d_mesh mesh_L1Chk1_1 = {
    .data =
        {
            point_L1Chk1_1,
            8,
            polygon_L1Chk1_1,
            4,
            attribute_L1Chk1_1,
        }};

static __jo_force_inline void display_L1Chk1_1_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk1_1);
}

// L1CHK1_2
static POINT point_L1Chk1_2[8] = {
    {toFIXED(-155.071045), toFIXED(-1.068044), toFIXED(35.148964)},
    {toFIXED(-155.071045), toFIXED(-1.068046), toFIXED(-20.320700)},
    {toFIXED(-155.071045), toFIXED(-27.408770), toFIXED(35.148964)},
    {toFIXED(-155.071045), toFIXED(-27.408773), toFIXED(-20.320700)},
    {toFIXED(-84.388458), toFIXED(-1.068044), toFIXED(35.148964)},
    {toFIXED(-84.388458), toFIXED(-1.068046), toFIXED(-20.320700)},
    {toFIXED(-84.388458), toFIXED(-27.408770), toFIXED(35.148964)},
    {toFIXED(-84.388458), toFIXED(-27.408773), toFIXED(-20.320700)},
};

static POLYGON polygon_L1Chk1_2[4] = {
    {{-1.000000, 0.000000, 0.000000}, {2, 0, 1, 3}},
    {{0.000000, -1.000000, 0.000000}, {6, 2, 3, 7}},
    {{1.000000, 0.000000, 0.000000}, {4, 6, 7, 5}},
    {{0.000000, -0.000000, -1.000000}, {5, 7, 3, 1}},
};

static ATTR attribute_L1Chk1_2[4] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 194, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 195, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 196, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 197, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
};

static jo_3d_mesh mesh_L1Chk1_2 = {
    .data =
        {
            point_L1Chk1_2,
            8,
            polygon_L1Chk1_2,
            4,
            attribute_L1Chk1_2,
        }};

static __jo_force_inline void display_L1Chk1_2_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk1_2);
}

// L1CHK1_3
static POINT point_L1Chk1_3[8] = {
    {toFIXED(-27.385925), toFIXED(48.039318), toFIXED(35.148964)},
    {toFIXED(-27.385925), toFIXED(48.039314), toFIXED(-20.320700)},
    {toFIXED(-27.385925), toFIXED(21.698593), toFIXED(35.148964)},
    {toFIXED(-27.385925), toFIXED(21.698589), toFIXED(-20.320700)},
    {toFIXED(82.742188), toFIXED(48.039318), toFIXED(35.148964)},
    {toFIXED(82.742188), toFIXED(48.039314), toFIXED(-20.320700)},
    {toFIXED(82.742188), toFIXED(21.698593), toFIXED(35.148964)},
    {toFIXED(82.742188), toFIXED(21.698589), toFIXED(-20.320700)},
};

static POLYGON polygon_L1Chk1_3[4] = {
    {{-1.000000, 0.000000, 0.000000}, {2, 0, 1, 3}},
    {{0.000000, -1.000000, 0.000000}, {6, 2, 3, 7}},
    {{1.000000, 0.000000, 0.000000}, {4, 6, 7, 5}},
    {{0.000000, -0.000000, -1.000000}, {5, 7, 3, 1}},
};

static ATTR attribute_L1Chk1_3[4] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 198, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 199, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 200, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 201, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
};

static jo_3d_mesh mesh_L1Chk1_3 = {
    .data =
        {
            point_L1Chk1_3,
            8,
            polygon_L1Chk1_3,
            4,
            attribute_L1Chk1_3,
        }};

static __jo_force_inline void display_L1Chk1_3_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk1_3);
}

// L1CHK2_1
static POINT point_L1Chk2_1[8] = {
    {toFIXED(80.060516), toFIXED(-1.068045), toFIXED(-20.320700)},
    {toFIXED(80.060577), toFIXED(-1.068045), toFIXED(35.148964)},
    {toFIXED(80.060516), toFIXED(37.571205), toFIXED(-20.320744)},
    {toFIXED(80.060516), toFIXED(37.571205), toFIXED(35.148930)},
    {toFIXED(453.493652), toFIXED(-1.068049), toFIXED(-20.320744)},
    {toFIXED(453.493652), toFIXED(-1.068049), toFIXED(35.148930)},
    {toFIXED(453.493652), toFIXED(37.571205), toFIXED(-20.320744)},
    {toFIXED(453.493652), toFIXED(37.571205), toFIXED(35.148930)},
};

static POLYGON polygon_L1Chk2_1[4] = {
    {{-1.000000, -0.000001, 0.000001}, {2, 0, 1, 3}},
    {{1.000000, -0.000000, 0.000000}, {4, 6, 7, 5}},
    {{-0.000000, -1.000000, 0.000000}, {0, 4, 5, 1}},
    {{-0.000000, -0.000001, -1.000000}, {0, 2, 6, 4}},
};

static ATTR attribute_L1Chk2_1[4] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 202, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 203, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 204, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 205, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
};

static jo_3d_mesh mesh_L1Chk2_1 = {
    .data =
        {
            point_L1Chk2_1,
            8,
            polygon_L1Chk2_1,
            4,
            attribute_L1Chk2_1,
        }};

static __jo_force_inline void display_L1Chk2_1_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk2_1);
}

// L1CHK2_2
static POINT point_L1Chk2_2[8] = {
    {toFIXED(178.648438), toFIXED(-21.673813), toFIXED(-0.000000)},
    {toFIXED(178.648438), toFIXED(-21.673813), toFIXED(-20.320999)},
    {toFIXED(178.648438), toFIXED(-30.185600), toFIXED(35.148998)},
    {toFIXED(178.648438), toFIXED(-30.185600), toFIXED(-20.320999)},
    {toFIXED(210.292450), toFIXED(-21.673813), toFIXED(-0.000000)},
    {toFIXED(210.292450), toFIXED(-21.673817), toFIXED(-20.320999)},
    {toFIXED(210.292450), toFIXED(-30.185600), toFIXED(35.148998)},
    {toFIXED(210.292450), toFIXED(-30.185600), toFIXED(-20.320999)},
};

static POLYGON polygon_L1Chk2_2[4] = {
    {{-1.000000, 0.000000, 0.000000}, {2, 0, 1, 3}},
    {{-0.000000, -1.000000, 0.000000}, {6, 2, 3, 7}},
    {{1.000000, 0.000000, 0.000000}, {4, 6, 7, 5}},
    {{0.000000, -0.000000, -1.000000}, {5, 7, 3, 1}},
};

static ATTR attribute_L1Chk2_2[4] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 206, C_RGB(31, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 207, C_RGB(31, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 208, C_RGB(31, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 209, C_RGB(31, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
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
    {toFIXED(231.972916), toFIXED(-29.943182), toFIXED(35.148998)},
    {toFIXED(231.972916), toFIXED(-29.943182), toFIXED(-20.320999)},
    {toFIXED(231.972916), toFIXED(-51.170357), toFIXED(35.148998)},
    {toFIXED(231.972916), toFIXED(-51.170357), toFIXED(-20.320999)},
    {toFIXED(300.562347), toFIXED(-29.943182), toFIXED(35.148998)},
    {toFIXED(300.562347), toFIXED(-29.943182), toFIXED(-20.320999)},
    {toFIXED(300.562347), toFIXED(-51.170357), toFIXED(35.148998)},
    {toFIXED(300.562347), toFIXED(-51.170357), toFIXED(-20.320999)},
};

static POLYGON polygon_L1Chk2_3[5] = {
    {{-1.000000, 0.000000, 0.000000}, {2, 0, 1, 3}},
    {{-0.000000, -1.000000, 0.000000}, {6, 2, 3, 7}},
    {{1.000000, 0.000000, 0.000000}, {4, 6, 7, 5}},
    {{-0.000000, 1.000000, 0.000000}, {0, 4, 5, 1}},
    {{0.000000, -0.000000, -1.000000}, {5, 7, 3, 1}},
};

static ATTR attribute_L1Chk2_3[5] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 210, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 211, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 212, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 213, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 214, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
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
    {toFIXED(330.600891), toFIXED(-29.943182), toFIXED(35.148998)},
    {toFIXED(330.600891), toFIXED(-29.943182), toFIXED(-20.231003)},
    {toFIXED(330.600891), toFIXED(-51.170357), toFIXED(35.148998)},
    {toFIXED(330.600891), toFIXED(-51.170357), toFIXED(-20.230999)},
    {toFIXED(399.190338), toFIXED(-29.943182), toFIXED(35.148998)},
    {toFIXED(399.190338), toFIXED(-29.943182), toFIXED(-20.231003)},
    {toFIXED(399.190338), toFIXED(-51.170357), toFIXED(35.148998)},
    {toFIXED(399.190338), toFIXED(-51.170357), toFIXED(-20.230999)},
};

static POLYGON polygon_L1Chk2_4[5] = {
    {{-1.000000, 0.000000, 0.000000}, {2, 0, 1, 3}},
    {{-0.000000, -1.000000, 0.000000}, {6, 2, 3, 7}},
    {{1.000000, 0.000000, 0.000000}, {4, 6, 7, 5}},
    {{-0.000000, 1.000000, 0.000000}, {0, 4, 5, 1}},
    {{0.000000, -0.000000, -1.000000}, {5, 7, 3, 1}},
};

static ATTR attribute_L1Chk2_4[5] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 215, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 216, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 217, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 218, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 219, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
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
    {toFIXED(453.489990), toFIXED(-1.068000), toFIXED(-20.320999)},
    {toFIXED(453.493988), toFIXED(-1.068000), toFIXED(35.148998)},
    {toFIXED(453.493652), toFIXED(37.944466), toFIXED(-19.102442)},
    {toFIXED(516.681335), toFIXED(-0.762073), toFIXED(35.148998)},
    {toFIXED(517.738647), toFIXED(37.944469), toFIXED(-19.102446)},
    {toFIXED(517.598450), toFIXED(-0.757619), toFIXED(-19.961769)},
};

static POLYGON polygon_L1Chk2_5[2] = {
    {{0.004841, -0.999988, -0.000000}, {1, 0, 5, 3}},
    {{0.002733, 0.026723, -0.999639}, {0, 2, 4, 5}},
};

static ATTR attribute_L1Chk2_5[2] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 220, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 221, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
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

// L1CHK3_1
static POINT point_L1Chk3_1[8] = {
    {toFIXED(430.344360), toFIXED(-179.066483), toFIXED(-20.320999)},
    {toFIXED(430.344360), toFIXED(-179.066483), toFIXED(35.148998)},
    {toFIXED(430.344360), toFIXED(-39.271072), toFIXED(-20.320999)},
    {toFIXED(430.344360), toFIXED(-39.271072), toFIXED(35.148998)},
    {toFIXED(480.334595), toFIXED(-179.066483), toFIXED(-20.320999)},
    {toFIXED(480.334595), toFIXED(-179.066483), toFIXED(35.148998)},
    {toFIXED(480.334595), toFIXED(-39.271072), toFIXED(-20.320999)},
    {toFIXED(480.334595), toFIXED(-39.271072), toFIXED(35.148998)},
};

static POLYGON polygon_L1Chk3_1[5] = {
    {{-1.000000, -0.000000, 0.000000}, {2, 0, 1, 3}},
    {{0.000000, 1.000000, 0.000000}, {6, 2, 3, 7}},
    {{1.000000, -0.000000, 0.000000}, {4, 6, 7, 5}},
    {{0.000000, 0.000000, -1.000000}, {0, 2, 6, 4}},
    {{0.000000, -0.000000, 1.000000}, {5, 7, 3, 1}},
};

static ATTR attribute_L1Chk3_1[5] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 222, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 223, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 224, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 225, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 226, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
};

static jo_3d_mesh mesh_L1Chk3_1 = {
    .data =
        {
            point_L1Chk3_1,
            8,
            polygon_L1Chk3_1,
            5,
            attribute_L1Chk3_1,
        }};

static __jo_force_inline void display_L1Chk3_1_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk3_1);
}

// L1CHK3_2
static POINT point_L1Chk3_2[7] = {
    {toFIXED(670.952026), toFIXED(-0.015158), toFIXED(-19.102453)},
    {toFIXED(670.952026), toFIXED(-0.015158), toFIXED(35.148998)},
    {toFIXED(670.952026), toFIXED(37.944481), toFIXED(-19.102453)},
    {toFIXED(670.952026), toFIXED(37.944481), toFIXED(35.148998)},
    {toFIXED(516.681335), toFIXED(-0.762073), toFIXED(35.148998)},
    {toFIXED(517.738647), toFIXED(37.944469), toFIXED(-19.102446)},
    {toFIXED(517.598450), toFIXED(-0.757619), toFIXED(-19.961769)},
};

static POLYGON polygon_L1Chk3_2[3] = {
    {{1.000000, 0.000000, -0.000000}, {2, 3, 1, 0}},
    {{0.004841, -0.999988, -0.000000}, {1, 4, 6, 0}},
    {{0.002776, 0.011203, -0.999933}, {0, 6, 5, 2}},
};

static ATTR attribute_L1Chk3_2[3] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 227, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 228, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 229, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
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
    {toFIXED(602.933960), toFIXED(-0.015137), toFIXED(35.148994)},
    {toFIXED(602.934021), toFIXED(-118.547997), toFIXED(35.148994)},
    {toFIXED(670.952332), toFIXED(-0.015137), toFIXED(35.148998)},
    {toFIXED(670.952393), toFIXED(-118.547997), toFIXED(35.149002)},
    {toFIXED(602.933960), toFIXED(-0.015137), toFIXED(-20.321001)},
    {toFIXED(602.934021), toFIXED(-118.547997), toFIXED(-20.320999)},
    {toFIXED(670.952332), toFIXED(-0.015137), toFIXED(-20.320997)},
    {toFIXED(670.952393), toFIXED(-118.547997), toFIXED(-20.320995)},
};

static POLYGON polygon_L1Chk3_3[6] = {
    {{-0.000000, 0.000000, 1.000000}, {2, 0, 1, 3}},
    {{1.000000, 0.000001, 0.000000}, {6, 2, 3, 7}},
    {{0.000000, -0.000000, -1.000000}, {4, 6, 7, 5}},
    {{-1.000000, -0.000001, 0.000000}, {0, 4, 5, 1}},
    {{-0.000000, 1.000000, 0.000000}, {0, 2, 6, 4}},
    {{0.000000, -1.000000, 0.000000}, {5, 7, 3, 1}},
};

static ATTR attribute_L1Chk3_3[6] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 230, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 231, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 232, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 233, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 234, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 235, C_RGB(0, 31, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
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
static POINT point_L1Chk3_4[8] = {
    {toFIXED(570.846436), toFIXED(-21.673813), toFIXED(-0.000000)},
    {toFIXED(570.846436), toFIXED(-21.673813), toFIXED(-20.320999)},
    {toFIXED(570.846436), toFIXED(-30.185600), toFIXED(35.148998)},
    {toFIXED(570.846436), toFIXED(-30.185600), toFIXED(-20.320999)},
    {toFIXED(602.490479), toFIXED(-21.673813), toFIXED(-0.000000)},
    {toFIXED(602.490479), toFIXED(-21.673817), toFIXED(-20.320999)},
    {toFIXED(602.490479), toFIXED(-30.185600), toFIXED(35.148998)},
    {toFIXED(602.490479), toFIXED(-30.185600), toFIXED(-20.320999)},
};

static POLYGON polygon_L1Chk3_4[4] = {
    {{-1.000000, 0.000000, 0.000000}, {2, 0, 1, 3}},
    {{-0.000000, -1.000000, 0.000000}, {6, 2, 3, 7}},
    {{1.000000, 0.000000, 0.000000}, {4, 6, 7, 5}},
    {{0.000000, -0.000000, -1.000000}, {5, 7, 3, 1}},
};

static ATTR attribute_L1Chk3_4[4] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 236, C_RGB(31, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 237, C_RGB(31, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 238, C_RGB(31, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 239, C_RGB(31, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
};

static jo_3d_mesh mesh_L1Chk3_4 = {
    .data =
        {
            point_L1Chk3_4,
            8,
            polygon_L1Chk3_4,
            4,
            attribute_L1Chk3_4,
        }};

static __jo_force_inline void display_L1Chk3_4_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk3_4);
}

// L1CHK3_5
static POINT point_L1Chk3_5[8] = {
    {toFIXED(570.846436), toFIXED(-51.328316), toFIXED(-0.000000)},
    {toFIXED(570.846436), toFIXED(-51.328316), toFIXED(-20.320999)},
    {toFIXED(570.846436), toFIXED(-59.840103), toFIXED(35.148998)},
    {toFIXED(570.846436), toFIXED(-59.840103), toFIXED(-20.320999)},
    {toFIXED(602.490479), toFIXED(-51.328316), toFIXED(-0.000000)},
    {toFIXED(602.490479), toFIXED(-51.328320), toFIXED(-20.320999)},
    {toFIXED(602.490479), toFIXED(-59.840103), toFIXED(35.148998)},
    {toFIXED(602.490479), toFIXED(-59.840103), toFIXED(-20.320999)},
};

static POLYGON polygon_L1Chk3_5[4] = {
    {{-1.000000, 0.000000, 0.000000}, {2, 0, 1, 3}},
    {{-0.000000, -1.000000, 0.000000}, {6, 2, 3, 7}},
    {{1.000000, 0.000000, 0.000000}, {4, 6, 7, 5}},
    {{0.000000, -0.000000, -1.000000}, {5, 7, 3, 1}},
};

static ATTR attribute_L1Chk3_5[4] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 240, C_RGB(31, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 241, C_RGB(31, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 242, C_RGB(31, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 243, C_RGB(31, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
};

static jo_3d_mesh mesh_L1Chk3_5 = {
    .data =
        {
            point_L1Chk3_5,
            8,
            polygon_L1Chk3_5,
            4,
            attribute_L1Chk3_5,
        }};

static __jo_force_inline void display_L1Chk3_5_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk3_5);
}

// L1CHK3_6
static POINT point_L1Chk3_6[8] = {
    {toFIXED(570.846436), toFIXED(-78.725967), toFIXED(-0.000000)},
    {toFIXED(570.846436), toFIXED(-78.725967), toFIXED(-20.320999)},
    {toFIXED(570.846436), toFIXED(-87.237762), toFIXED(35.148998)},
    {toFIXED(570.846436), toFIXED(-87.237762), toFIXED(-20.320999)},
    {toFIXED(602.490479), toFIXED(-78.725967), toFIXED(-0.000000)},
    {toFIXED(602.490479), toFIXED(-78.725975), toFIXED(-20.320999)},
    {toFIXED(602.490479), toFIXED(-87.237762), toFIXED(35.148998)},
    {toFIXED(602.490479), toFIXED(-87.237762), toFIXED(-20.320999)},
};

static POLYGON polygon_L1Chk3_6[4] = {
    {{-1.000000, 0.000000, 0.000000}, {2, 0, 1, 3}},
    {{-0.000000, -1.000000, 0.000000}, {6, 2, 3, 7}},
    {{1.000000, 0.000000, 0.000000}, {4, 6, 7, 5}},
    {{0.000000, -0.000000, -1.000000}, {5, 7, 3, 1}},
};

static ATTR attribute_L1Chk3_6[4] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 244, C_RGB(31, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 245, C_RGB(31, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 246, C_RGB(31, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 247, C_RGB(31, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
};

static jo_3d_mesh mesh_L1Chk3_6 = {
    .data =
        {
            point_L1Chk3_6,
            8,
            polygon_L1Chk3_6,
            4,
            attribute_L1Chk3_6,
        }};

static __jo_force_inline void display_L1Chk3_6_mesh(void)
{
    jo_3d_mesh_draw(&mesh_L1Chk3_6);
}

// L1CHK3_7
static POINT point_L1Chk3_7[8] = {
    {toFIXED(570.846436), toFIXED(-110.036156), toFIXED(-0.000000)},
    {toFIXED(570.846436), toFIXED(-110.036156), toFIXED(-20.320999)},
    {toFIXED(570.846436), toFIXED(-118.547943), toFIXED(35.148998)},
    {toFIXED(570.846436), toFIXED(-118.547943), toFIXED(-20.320999)},
    {toFIXED(602.490479), toFIXED(-110.036156), toFIXED(-0.000000)},
    {toFIXED(602.490479), toFIXED(-110.036163), toFIXED(-20.320999)},
    {toFIXED(602.490479), toFIXED(-118.547943), toFIXED(35.148998)},
    {toFIXED(602.490479), toFIXED(-118.547943), toFIXED(-20.320999)},
};

static POLYGON polygon_L1Chk3_7[4] = {
    {{-1.000000, 0.000000, 0.000000}, {2, 0, 1, 3}},
    {{-0.000000, -1.000000, 0.000000}, {6, 2, 3, 7}},
    {{1.000000, 0.000000, 0.000000}, {4, 6, 7, 5}},
    {{0.000000, -0.000000, -1.000000}, {5, 7, 3, 1}},
};

static ATTR attribute_L1Chk3_7[4] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 248, C_RGB(31, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 249, C_RGB(31, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 250, C_RGB(31, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 251, C_RGB(31, 0, 0), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
};

static jo_3d_mesh mesh_L1Chk3_7 = {
    .data =
        {
            point_L1Chk3_7,
            8,
            polygon_L1Chk3_7,
            4,
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
    display_L1Chk1_3_mesh();
}

static void display_L1Chk2_mesh(void)
{
    display_L1Chk1_3_mesh();
    display_L1Chk2_1_mesh();
    display_L1Chk2_2_mesh();
    display_L1Chk2_3_mesh();
    display_L1Chk2_4_mesh();
    display_L1Chk2_5_mesh();
    display_L1Chk3_1_mesh();
}

static void display_L1Chk3_mesh(void)
{
    display_L1Chk2_5_mesh();
    display_L1Chk3_1_mesh();
    display_L1Chk3_2_mesh();
    display_L1Chk3_3_mesh();
    display_L1Chk3_4_mesh();
    display_L1Chk3_4_mesh();
    display_L1Chk3_5_mesh();
    display_L1Chk3_6_mesh();
    display_L1Chk3_7_mesh();
}

#endif
