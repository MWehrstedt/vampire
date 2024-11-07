#ifndef __LEVEL1_H__
#define __LEVEL1_H__

static const hitbox_t level01Hitboxes[4] = {
    (hitbox_t){ .x = toFIXED(10.0f), .y = toFIXED(1.0f), .width = toFIXED(100.0f), .height = toFIXED(100.0f)},
    (hitbox_t){ .x = toFIXED(50.0f), .y = toFIXED(-15.0f), .width = toFIXED(20.0f), .height = toFIXED(15.0f)},
    (hitbox_t){ .x = toFIXED(-110.0f), .y = toFIXED(1.0f), .width = toFIXED(100.0f), .height = toFIXED(100.0f)},
    (hitbox_t){ .x = toFIXED(-70.0f), .y = toFIXED(-15.0f), .width = toFIXED(20.0f), .height = toFIXED(15.0f)}
};

// static const FIXED level01Hitboxes[16] = {
//     toFIXED(10.0f), toFIXED(1.0f), toFIXED(100.0f), toFIXED(100.0f),
//     toFIXED(50.0f), toFIXED(-15.0f), toFIXED(20.0f), toFIXED(16.0f),
//     toFIXED(-110.0f), toFIXED(1.0f), toFIXED(100.0f), toFIXED(100.0f),
//     toFIXED(-70.0f), toFIXED(-15.0f), toFIXED(20.0f), toFIXED(16.0f)
// };

#endif