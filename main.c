/*
**  For Jenny, my Queen
*/

/*
** Jo Sega Saturn Engine
** Copyright (c) 2012-2017, Johannes Fetz (johannesfetz@gmail.com)
** All rights reserved.
**
** Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are met:
**     * Redistributions of source code must retain the above copyright
**       notice, this list of conditions and the following disclaimer.
**     * Redistributions in binary form must reproduce the above copyright
**       notice, this list of conditions and the following disclaimer in the
**       documentation and/or other materials provided with the distribution.
**     * Neither the name of the Johannes Fetz nor the
**       names of its contributors may be used to endorse or promote products
**       derived from this software without specific prior written permission.
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
** ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
** WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
** DISCLAIMED. IN NO EVENT SHALL Johannes Fetz BE LIABLE FOR ANY
** DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
** (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
** LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
** ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
** SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include <jo/jo.h>
#include "vars.h"
#include "display.h"
#include "hero.h"
#include "input.h"
#include "vars.h"

void initGameplay()
{

    jo_printf(0, 3, "                         ");
    jo_printf(0, 4, "                         ");
    jo_printf(0, 5, "                         ");
    jo_printf(0, 6, "                         ");
    jo_printf(0, 7, "                         ");
    jo_printf(0, 8, "                         ");
    jo_printf(0, 9, "                         ");

    hero = (hero_t){
        .counter = 0,
        .currentKeyframe = 0,
        .x = toFIXED(-300),
        .y = toFIXED(-15),
        .hitbox = (hitbox_t){
            .width = toFIXED(9),
            .height = toFIXED(24),
            .depth = toFIXED(11)},
        .health = 8};

    hero.hitbox.x = hero.x - (hero.hitbox.width / 2);
    hero.hitbox.y = hero.y - (hero.hitbox.height / 2);
    herostate = IDLE;

    printDebug = false;
    currentLevel = &level1;
    currentLevelHitboxes = level01Hitboxes;
    currentLevelDynamicHitboxes = level01DynamicHitboxes;
}

void update(void)
{
    switch (gamestate)
    {
    case GAMEPLAY:
        updateHero();
        break;
    case ANIMTEST:
        camera.x = hero.x;
        camera.y = hero.y;
        break;
    default:
        break;
    }
}

void jo_main(void)
{
    jo_core_init(JO_COLOR_Cyan);

    gamestate = MAINMENU;
    // initBackgroundGfx(0);
    // initGameplay();
    // initGameplayCamera();

    jo_core_add_callback(handleInput);
    jo_core_add_callback(update);
    jo_core_add_callback(draw);
    jo_core_run();
}

/*
** END OF FILE
*/
