#ifndef __ANIM_SAMPLE_H__
#define __ANIM_SAMPLE_H__

const keyframe_t anim_sample_frames[] = {
    {
        .startframe = toFIXED(0),
        .length = toFIXED(20),
        .baseTranslation = { toFIXED(0), toFIXED(0), toFIXED(0)},
        .translation = { toFIXED(0), toFIXED(0), toFIXED(5)},
        .baseRotation = { 0, 0, 0 },
        .rotation = { 0, 10, 50 }
    },
    {
        .startframe = toFIXED(20),
        .length = toFIXED(20),
        .baseTranslation = { toFIXED(0), toFIXED(0), toFIXED(5)},
        .translation = { toFIXED(0), toFIXED(0), toFIXED(7) },
        .baseRotation = { 0, 10, 50 },
        .rotation = { 0, 30, 50 }
    },
    {
        .startframe = toFIXED(40),
        .length = toFIXED(20),
        .baseTranslation = { toFIXED(0), toFIXED(0), toFIXED(7)},
        .translation = { toFIXED(0), toFIXED(0), toFIXED(8) },
        .baseRotation = { 0, 30, 50 },
        .rotation = { 0, 40, 50 }
    },
    {
        .startframe = toFIXED(60),
        .length = toFIXED(60),
        .baseTranslation = { toFIXED(0), toFIXED(0), toFIXED(8)},
        .translation = { toFIXED(0), toFIXED(0), toFIXED(0) },
        .baseRotation = { 0, 40, 50 },
        .rotation = { 0, 0, 0 }
    }
};

const animation_t anim_sample = {
    .id = 0,
    .loop = 1,
    .length = toFIXED(120),
    .frames = anim_sample_frames,
    .play = true
};

#endif