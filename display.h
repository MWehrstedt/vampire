#ifndef __DISPLAY_H_
#define __DISPLAY_H_
#include "hero.h"
#include "vars.h"
#include "cd/MESHES/lvls_test.h"
#include "levels.h"
#include "collision.h"

static void (*const level1Geometry[])(void) = {
    display_L1Chk1_mesh,
    display_L1Chk2_mesh,
    display_L1Chk3_mesh
};


void draw();
void initGameplayCamera();
void initBackgroundGfx(short levelId);
#endif
