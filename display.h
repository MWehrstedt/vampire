#ifndef __DISPLAY_H_
#define __DISPLAY_H_
#include "hero.h"
#include "vars.h"
#include "cd/MESHES/levelsTest.h"
#include "levels.h"
#include "collision.h"

static void (*const level1Geometry[])(void) = {
    display_L1Chk1_mesh,
    display_L1Chk2_mesh,
    display_L1Chk3_mesh
};


void draw();
void display_initGameplayCamera();
void display_initGraphics(short levelId);
jo_palette *display_handlePalette(void);
#endif
