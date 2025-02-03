#include <jo/jo.h>
#include "collision.h"
#include "globalFunctions.h"
#include "vars.h"

FIXED collisions_detectCollisionX(const FIXED x1, const FIXED y1, const FIXED width1, const FIXED height1, const FIXED x2, const FIXED y2, const FIXED width2, const FIXED height2)
{
    if (jo_square_intersect(x1, y1, width1, height1, x2, y2, width2, height2))
    {
        // //jo_printf(0, 6, "collision X:  %d ", jo_fixed2int(JO_MIN((x1 + width1 - x2), (x2 + width2 - x1))));
        return (JO_MIN((x1 + width1 - x2), (x2 + width2 - x1)));
    }

    return JO_FIXED_0;
}

FIXED collisions_detectCollisionY(const FIXED x1, const FIXED y1, const FIXED width1, const FIXED height1, const FIXED x2, const FIXED y2, const FIXED width2, const FIXED height2)
{
    if (jo_square_intersect(x1, y1, width1, height1, x2, y2, width2, height2))
    {
        // //jo_printf(0, 7, "collision Y:  %d ", jo_fixed2int(JO_MIN((y1 + height1 - y2), (y2 + height2 - y1))));
        return (JO_MIN((y1 + height1 - y2), (y2 + height2 - y1)));
    }

    return JO_FIXED_0;
}

void global_initDynamicHitboxes(const dynamic_hitbox_t *source)
{
    for (iterator = 0; iterator < currentLevel->dynamicHitboxCount; ++iterator)
    {
        currentLevelDynamicHitboxes[iterator].x = source[iterator].x;
        currentLevelDynamicHitboxes[iterator].y = source[iterator].y;
        currentLevelDynamicHitboxes[iterator].attribute = source[iterator].attribute;
        currentLevelDynamicHitboxes[iterator].width = source[iterator].width;
        currentLevelDynamicHitboxes[iterator].height = source[iterator].height;
        currentLevelDynamicHitboxes[iterator].active = source[iterator].active;
        currentLevelDynamicHitboxes[iterator].type = source[iterator].type;
        //jo_printf(0, 7 + iterator, "%d", source[iterator].type);
    }
}