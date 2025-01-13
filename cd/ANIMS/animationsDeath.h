/* Model Name: Mesh_Death */
/* Total Objects : 15 */
/*
    -DEATH_HEAD
    -DEATH_L_CALF
    -DEATH_L_FARM
    -DEATH_L_THIGH
    -DEATH_L_UARM
    -DEATH_LOWER
    -DEATH_R_CALF
    -DEATH_R_FARM
    -DEATH_R_THIGH
    -DEATH_R_UAM
    -DEATH_SHOULDER
    -DEATH_TORSO
*/

#ifndef __3D_ANIM_DEATH_H__
#define __3D_ANIM_DEATH_H__

// typedef struct
// {
//     FIXED startframe;
//     FIXED length;
//     FIXED DEATH_HEAD_translation[3];
//     short DEATH_HEAD_rotation[3];
//     FIXED DEATH_L_CALF_translation[3];
//     short DEATH_L_CALF_rotation[3];
//     FIXED DEATH_L_FARM_translation[3];
//     short DEATH_L_FARM_rotation[3];
//     FIXED DEATH_L_THIGH_translation[3];
//     short DEATH_L_THIGH_rotation[3];
//     FIXED DEATH_L_UARM_translation[3];
//     short DEATH_L_UARM_rotation[3];
//     FIXED DEATH_LOWER_translation[3];
//     short DEATH_LOWER_rotation[3];
//     FIXED DEATH_R_CALF_translation[3];
//     short DEATH_R_CALF_rotation[3];
//     FIXED DEATH_R_FARM_translation[3];
//     short DEATH_R_FARM_rotation[3];
//     FIXED DEATH_R_THIGH_translation[3];
//     short DEATH_R_THIGH_rotation[3];
//     FIXED DEATH_R_UAM_translation[3];
//     short DEATH_R_UAM_rotation[3];
//     FIXED DEATH_SHOULDER_translation[3];
//     short DEATH_SHOULDER_rotation[3];
//     FIXED DEATH_TORSO_translation[3];
//     short DEATH_TORSO_rotation[3];
// } mesh_death_keyframe_t;

const anim_hero_keyframe_t mesh_death_frames[] = {
    {
        .startframe = toFIXED(0),
        .length = toFIXED(1),
        .HEAD_translation = {toFIXED(-0.046836), toFIXED(-6.980582), toFIXED(0.408625)},
        .HEAD_rotation = {0, 0, 0},
        .L_CALF_translation = {toFIXED(1.350112), toFIXED(10.460874), toFIXED(0.324066)},
        .L_CALF_rotation = {0, 0, 0},
        .L_FARM_translation = {toFIXED(9.228349), toFIXED(-4.271014), toFIXED(0.588171)},
        .L_FARM_rotation = {0, 0, 0},
        .L_THIGH_translation = {toFIXED(0.954622), toFIXED(5.023600), toFIXED(0.728940)},
        .L_THIGH_rotation = {0, 0, 0},
        .L_UARM_translation = {toFIXED(4.099681), toFIXED(-4.337215), toFIXED(0.815111)},
        .L_UARM_rotation = {0, 0, 0},
        .LOWER_translation = {toFIXED(0.269585), toFIXED(1.737938), toFIXED(0.554039)},
        .LOWER_rotation = {0, 0, 0},
        .R_CALF_translation = {toFIXED(-1.411734), toFIXED(10.446838), toFIXED(0.323997)},
        .R_CALF_rotation = {0, 0, 0},
        .R_FARM_translation = {toFIXED(-9.061336), toFIXED(-4.271030), toFIXED(0.591421)},
        .R_FARM_rotation = {0, 0, 0},
        .R_THIGH_translation = {toFIXED(-1.429124), toFIXED(4.226895), toFIXED(0.834943)},
        .R_THIGH_rotation = {0, 0, 0},
        .R_UARM_translation = {toFIXED(-4.161303), toFIXED(-4.337215), toFIXED(0.815111)},
        .R_UARM_rotation = {0, 0, 0},
        .SHOULDER_translation = {toFIXED(-0.030811), toFIXED(-3.922811), toFIXED(0.135092)},
        .SHOULDER_rotation = {0, 0, 0},
        .TORSO_translation = {toFIXED(-0.030810), toFIXED(-0.962963), toFIXED(-0.213245)},
        .TORSO_rotation = {0, 0, 0},
    },
};

const animation_t anim_death = {
    .id = 0,
    .length = toFIXED(1),
    .loop = true,
    .frames = mesh_death_frames,
    .play = true
    };

#endif
