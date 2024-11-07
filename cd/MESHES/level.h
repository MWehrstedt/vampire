/* Model Name: Room */
/* Total Objects : 1 */
/*
    - Cube
*/

#ifndef __3D_ROOMMESH_H__
#define __3D_ROOMMESH_H__

// CUBE
static POINT point_Cube[8] = {
    {toFIXED(10.000), toFIXED(101.000), toFIXED(30.000)},   //  10.00000, 101.00002,  30.00000
    {toFIXED(10.000), toFIXED(101.000), toFIXED(-30.000)},  //  10.00000, 100.99997, -30.00000
    {toFIXED(10.000), toFIXED(1.000), toFIXED(30.000)},     //  10.00000,   1.00000,  30.00000
    {toFIXED(10.000), toFIXED(1.000), toFIXED(-30.000)},    //  10.00000,   1.00000, -30.00000
    {toFIXED(110.000), toFIXED(101.000), toFIXED(30.000)},  // 110.00000, 100.99999,  30.00000
    {toFIXED(110.000), toFIXED(101.000), toFIXED(-30.000)}, // 110.00000, 101.00004, -30.00000
    {toFIXED(110.000), toFIXED(1.000), toFIXED(30.000)},    // 110.00000,   1.00000,  30.00000
    {toFIXED(110.000), toFIXED(1.000), toFIXED(-30.000)},   // 110.00000,   1.00000, -30.00000
};

static POLYGON polygon_Cube[5] = {
    {{-1.000000, -0.000000, 0.000000}, {2, 0, 1, 3}},
    {{0.000000, 1.000000, 0.000000}, {6, 2, 3, 7}},
    {{1.000000, -0.000000, 0.000000}, {4, 6, 7, 5}},
    {{0.000000, -1.000000, 0.000000}, {0, 4, 5, 1}},
    {{0.000000, -0.000000, 1.000000}, {5, 7, 3, 1}},
};

static ATTR attribute_Cube[5] = {
    ATTRIBUTE(Dual_Plane, SORT_MAX, No_Texture, C_RGB(31, 2, 2), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, No_Texture, C_RGB(31, 2, 2), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, No_Texture, C_RGB(31, 2, 2), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, No_Texture, C_RGB(31, 2, 2), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, No_Texture, C_RGB(31, 2, 2), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
};

jo_3d_mesh mesh_Cube = {
    .data =
        {
            point_Cube,
            8,
            polygon_Cube,
            5,
            attribute_Cube,
        }};

static __jo_force_inline void display_Cube_mesh(void)
{
    jo_3d_mesh_draw(&mesh_Cube);
}

// CUBESMALL
static POINT point_CubeSmall[8] = {
    {toFIXED(70.000), toFIXED(1.000), toFIXED(-30.000)},   //  70.00000,   1.00000, -30.00000
    {toFIXED(70.000), toFIXED(-15.000), toFIXED(-30.000)}, //  70.00000, -15.00000, -30.00000
    {toFIXED(50.000), toFIXED(1.000), toFIXED(-30.000)},   //  50.00000,   1.00000, -30.00000
    {toFIXED(50.000), toFIXED(-15.000), toFIXED(-30.000)}, //  50.00000, -15.00000, -30.00000
    {toFIXED(70.000), toFIXED(1.000), toFIXED(30.000)},    //  70.00001,   1.00000,  30.00000
    {toFIXED(70.000), toFIXED(-15.000), toFIXED(30.000)},  //  70.00001, -15.00000,  30.00000
    {toFIXED(50.000), toFIXED(6.860), toFIXED(30.000)},    //  50.00000,   6.85970,  30.00000
    {toFIXED(50.000), toFIXED(-15.000), toFIXED(30.000)},  //  50.00000, -15.00000,  30.00000
};

static POLYGON polygon_CubeSmall[5] = {
    {{-1.000000, -0.000000, 0.000000}, {2, 0, 1, 3}},
    {{0.000000, 1.000000, 0.000000}, {6, 2, 3, 7}},
    {{-0.000000, -1.000000, 0.000000}, {0, 4, 5, 1}},
    {{-0.048259, -0.144776, -0.988287}, {0, 2, 6, 4}},
    {{0.000000, -0.000000, 1.000000}, {5, 7, 3, 1}},
};

static ATTR attribute_CubeSmall[5] = {
    ATTRIBUTE(Dual_Plane, SORT_MAX, 5, C_RGB(204, 204, 204), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, 6, C_RGB(204, 204, 204), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, 7, C_RGB(204, 204, 204), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, 8, C_RGB(204, 204, 204), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, 9, C_RGB(204, 204, 204), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
};

jo_3d_mesh mesh_CubeSmall = {
    .data =
        {
            point_CubeSmall,
            8,
            polygon_CubeSmall,
            5,
            attribute_CubeSmall,
        }};

static __jo_force_inline void display_CubeSmall_mesh(void)
{
    jo_3d_mesh_draw(&mesh_CubeSmall);
}

// CUBELEFT
static POINT point_CubeLeft[8] = {
    {toFIXED(-110.000), toFIXED(101.000), toFIXED(30.000)},  // -110.00000, 101.00002,  30.00000
    {toFIXED(-110.000), toFIXED(101.000), toFIXED(-30.000)}, // -110.00000, 100.99997, -30.00000
    {toFIXED(-110.000), toFIXED(1.000), toFIXED(30.000)},    // -110.00000,   1.00000,  30.00000
    {toFIXED(-110.000), toFIXED(1.000), toFIXED(-30.000)},   // -110.00000,   1.00000, -30.00000
    {toFIXED(-10.000), toFIXED(101.000), toFIXED(30.000)},   // -10.00000, 100.99999,  30.00000
    {toFIXED(-10.000), toFIXED(101.000), toFIXED(-30.000)},  // -10.00000, 101.00004, -30.00000
    {toFIXED(-10.000), toFIXED(1.000), toFIXED(30.000)},     // -10.00000,   1.00000,  30.00000
    {toFIXED(-10.000), toFIXED(1.000), toFIXED(-30.000)},    //  -9.99998,   1.00000, -30.00000
};

static POLYGON polygon_CubeLeft[5] = {
    {{-1.000000, 0.000000, 0.000000}, {2, 0, 1, 3}},
    {{0.000000, -1.000000, 0.000000}, {6, 2, 3, 7}},
    {{1.000000, 0.000000, 0.000000}, {4, 6, 7, 5}},
    {{-0.000000, 1.000000, 0.000000}, {0, 4, 5, 1}},
    {{0.000000, -0.000000, -1.000000}, {5, 7, 3, 1}},
};

static ATTR attribute_CubeLeft[5] = {
    ATTRIBUTE(Dual_Plane, SORT_MAX, 5, C_RGB(31, 2, 2), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, 6, C_RGB(31, 2, 2), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, 7, C_RGB(31, 2, 2), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, 8, C_RGB(31, 2, 2), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, 9, C_RGB(31, 2, 2), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
};

jo_3d_mesh mesh_CubeLeft = {
    .data =
        {
            point_CubeLeft,
            8,
            polygon_CubeLeft,
            5,
            attribute_CubeLeft,
        }};

static __jo_force_inline void display_CubeLeft_mesh(void)
{
    jo_3d_mesh_draw(&mesh_CubeLeft);
}

// CUBESMALLLEFT
static POINT point_CubeSmallLeft[8] = {
    {toFIXED(-50.000), toFIXED(1.000), toFIXED(-30.000)},   // -50.00000,   1.00000, -30.00000
    {toFIXED(-50.000), toFIXED(-15.000), toFIXED(-30.000)}, // -50.00000, -15.00000, -30.00000
    {toFIXED(-70.000), toFIXED(1.000), toFIXED(-30.000)},   // -70.00000,   1.00000, -30.00000
    {toFIXED(-70.000), toFIXED(-15.000), toFIXED(-30.000)}, // -70.00000, -15.00000, -30.00000
    {toFIXED(-50.000), toFIXED(1.000), toFIXED(30.000)},    // -49.99999,   1.00000,  30.00000
    {toFIXED(-50.000), toFIXED(-15.000), toFIXED(30.000)},  // -49.99999, -15.00000,  30.00000
    {toFIXED(-70.000), toFIXED(6.860), toFIXED(30.000)},    // -70.00000,   6.85970,  30.00000
    {toFIXED(-70.000), toFIXED(-15.000), toFIXED(30.000)},  // -70.00000, -15.00000,  30.00000
};

static POLYGON polygon_CubeSmallLeft[5] = {
    {{0.000000, 0.000000, -1.000000}, {2, 0, 1, 3}},
    {{-1.000000, 0.000000, -0.000000}, {6, 2, 3, 7}},
    {{1.000000, 0.000000, -0.000000}, {0, 4, 5, 1}},
    {{0.144776, 0.988287, -0.048259}, {0, 2, 6, 4}},
    {{-0.000000, -1.000000, 0.000000}, {5, 7, 3, 1}},
};

static ATTR attribute_CubeSmallLeft[5] = {
    ATTRIBUTE(Dual_Plane, SORT_MAX, 15, C_RGB(204, 204, 204), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, 16, C_RGB(204, 204, 204), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, 17, C_RGB(204, 204, 204), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, 18, C_RGB(204, 204, 204), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
    ATTRIBUTE(Dual_Plane, SORT_MAX, 19, C_RGB(204, 204, 204), CL32KRGB | No_Gouraud, CL32KRGB | No_Gouraud, sprPolygon, UseLight),
};

jo_3d_mesh mesh_CubeSmallLeft = {
    .data =
        {
            point_CubeSmallLeft,
            8,
            polygon_CubeSmallLeft,
            5,
            attribute_CubeSmallLeft,
        }};

static __jo_force_inline void display_CubeSmallLeft_mesh(void)
{
    jo_3d_mesh_draw(&mesh_CubeSmallLeft);
}

#endif
