#include <jo/jo.h>
#include "vars.h"

camera_t camera;
gamestate_e gamestate;
herostate_e herostate;
gravity_t gravity = {
    .step = toFIXED(0.2f),
    .max = toFIXED(5.0f)};
collision_t collision;
FIXED friction = toFIXED(0.1f);
int iterator;
