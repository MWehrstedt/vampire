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
    {toFIXED(29.729881), toFIXED(-1.068045), toFIXED(-20.320700)},
    {toFIXED(29.729929), toFIXED(-1.068045), toFIXED(35.148964)},
    {toFIXED(29.729881), toFIXED(37.571205), toFIXED(-20.320744)},
    {toFIXED(29.729881), toFIXED(37.571205), toFIXED(35.148930)},
    {toFIXED(403.162994), toFIXED(-1.068049), toFIXED(-20.320744)},
    {toFIXED(403.162994), toFIXED(-1.068049), toFIXED(35.148930)},
    {toFIXED(403.162994), toFIXED(37.571205), toFIXED(-20.320744)},
    {toFIXED(403.162994), toFIXED(37.571205), toFIXED(35.148930)},
};

static POLYGON polygon_L1Chk1_1[4] = {
    {{-1.000000, -0.000001, 0.000000}, {2, 0, 1, 3}},
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
    {toFIXED(275.014465), toFIXED(-1.068044), toFIXED(35.148964)},
    {toFIXED(275.014465), toFIXED(-1.068046), toFIXED(-20.320700)},
    {toFIXED(275.014465), toFIXED(-27.408770), toFIXED(35.148964)},
    {toFIXED(275.014465), toFIXED(-27.408773), toFIXED(-20.320700)},
    {toFIXED(345.697052), toFIXED(-1.068044), toFIXED(35.148964)},
    {toFIXED(345.697052), toFIXED(-1.068046), toFIXED(-20.320700)},
    {toFIXED(345.697052), toFIXED(-27.408770), toFIXED(35.148964)},
    {toFIXED(345.697052), toFIXED(-27.408773), toFIXED(-20.320700)},
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
    {toFIXED(402.699585), toFIXED(48.039318), toFIXED(35.148964)},
    {toFIXED(402.699585), toFIXED(48.039314), toFIXED(-20.320700)},
    {toFIXED(402.699585), toFIXED(21.698593), toFIXED(35.148964)},
    {toFIXED(402.699585), toFIXED(21.698589), toFIXED(-20.320700)},
    {toFIXED(512.827698), toFIXED(48.039318), toFIXED(35.148964)},
    {toFIXED(512.827698), toFIXED(48.039314), toFIXED(-20.320700)},
    {toFIXED(512.827698), toFIXED(21.698593), toFIXED(35.148964)},
    {toFIXED(512.827698), toFIXED(21.698589), toFIXED(-20.320700)},
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
    {toFIXED(510.146027), toFIXED(-1.068045), toFIXED(-20.320700)},
    {toFIXED(510.146088), toFIXED(-1.068045), toFIXED(35.148964)},
    {toFIXED(510.146027), toFIXED(37.571205), toFIXED(-20.320744)},
    {toFIXED(510.146027), toFIXED(37.571205), toFIXED(35.148930)},
    {toFIXED(883.579163), toFIXED(-1.068049), toFIXED(-20.320744)},
    {toFIXED(883.579163), toFIXED(-1.068049), toFIXED(35.148930)},
    {toFIXED(883.579163), toFIXED(37.571205), toFIXED(-20.320744)},
    {toFIXED(883.579163), toFIXED(37.571205), toFIXED(35.148930)},
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
    {toFIXED(608.733948), toFIXED(-21.673813), toFIXED(-0.000000)},
    {toFIXED(608.733948), toFIXED(-21.673813), toFIXED(-20.320999)},
    {toFIXED(608.733948), toFIXED(-30.185600), toFIXED(35.148998)},
    {toFIXED(608.733948), toFIXED(-30.185600), toFIXED(-20.320999)},
    {toFIXED(671.289490), toFIXED(-21.673813), toFIXED(-0.000000)},
    {toFIXED(671.289490), toFIXED(-21.673817), toFIXED(-20.320999)},
    {toFIXED(671.289490), toFIXED(-30.185600), toFIXED(35.148998)},
    {toFIXED(671.289490), toFIXED(-30.185600), toFIXED(-20.320999)},
};

static POLYGON polygon_L1Chk2_2[4] = {
    {{-1.000000, 0.000000, 0.000000}, {2, 0, 1, 3}},
    {{-0.000000, -1.000000, 0.000000}, {6, 2, 3, 7}},
    {{1.000000, 0.000000, 0.000000}, {4, 6, 7, 5}},
    {{0.000000, -0.000000, -1.000000}, {5, 7, 3, 1}},
};

static ATTR attribute_L1Chk2_2[4] = {
    ATTRIBUTE(Dual_Plane, SORT_CEN, 206, C_RGB(31, 0, 31), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 207, C_RGB(31, 0, 31), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 208, C_RGB(31, 0, 31), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_CEN, 209, C_RGB(31, 0, 31), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
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

static void display_L1Chk1_mesh(void)
{
    display_L1Chk1_1_mesh();
    display_L1Chk1_2_mesh();
    display_L1Chk1_3_mesh();
}

static void display_L1Chk2_mesh(void)
{
    display_L1Chk2_1_mesh();
    display_L1Chk2_2_mesh();
}
#endif
