#include <jo/jo.h>
#include "collision.h"
#include "vars.h"

int pc = 0;
int rc = 0;

FIXED detectCollisionX(const FIXED x1, const FIXED y1, const FIXED width1, const FIXED height1, const FIXED x2, const FIXED y2, const FIXED width2, const FIXED height2)
{
    if (jo_square_intersect(x1, y1, width1, height1, x2, y2, width2, height2))
    {
        // jo_printf(0, 6, "collision X:  %d ", jo_fixed2int(JO_MIN((x1 + width1 - x2), (x2 + width2 - x1))));
        return (JO_MIN((x1 + width1 - x2), (x2 + width2 - x1)));
    }

    return JO_FIXED_0;
}

FIXED detectCollisionY(const FIXED x1, const FIXED y1, const FIXED width1, const FIXED height1, const FIXED x2, const FIXED y2, const FIXED width2, const FIXED height2)
{   
    if (jo_square_intersect(x1, y1, width1, height1, x2, y2, width2, height2))
    {
        // jo_printf(0, 7, "collision Y:  %d ", jo_fixed2int(JO_MIN((y1 + height1 - y2), (y2 + height2 - y1))));
        return (JO_MIN((y1 + height1 - y2), (y2 + height2 - y1)));
    }

    return JO_FIXED_0;
}


FIXED detectCollision(const FIXED speedX, const FIXED speedY, const FIXED x1, const FIXED y1, const FIXED width1, const FIXED height1, const FIXED x2, const FIXED y2, const FIXED width2, const FIXED height2)
{

    // collision = (collision_t){
            //     .x = detectCollisionX(hero.hitbox.x + hero.speedX, hero.hitbox.y, hero.hitbox.width, hero.hitbox.height, level01Hitboxes[iterator].x, level01Hitboxes[iterator].y, level01Hitboxes[iterator].width, level01Hitboxes[iterator].height),
            //     .y = detectCollisionY(hero.hitbox.x, hero.hitbox.y + hero.speedY, hero.hitbox.width, hero.hitbox.height, level01Hitboxes[iterator].x, level01Hitboxes[iterator].y, level01Hitboxes[iterator].width, level01Hitboxes[iterator].height)};


    collision = (collision_t){
        .x = JO_FIXED_0,
        .y = JO_FIXED_0};

    // Horizontal collision
    if (jo_square_intersect(x1 + speedX, y1, width1, height1, x2, y2, width2, height2))
    {
        //jo_printf(0, 6, "collision X:  %d ", jo_fixed2int(JO_MIN(((x1 + speedX) + width1 - x2), (x2 + width2 - (x1 + speedX)))));        
        collision.x = JO_MIN((x1 + speedX + width1 - x2), (x2 + width2 - x1 + speedX));
    }

    // Vertical collision
    if (jo_square_intersect(x1, y1 + speedY, width1, height1, x2, y2, width2, height2))
    {
        // jo_printf(0, 7, "collision Y:  %d ", jo_fixed2int(JO_MIN((y1 + speedY + height1 - y2), (y2 + height2 - y1 + speedY))));
        collision.y = JO_MIN((y1 + speedY + height1 - y2), (y2 + height2 - y1 + speedY));
    }

    return JO_FIXED_0;
}