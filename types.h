#ifndef __TYPES_H_
#define __TYPES_H_

/// @brief Game state values
typedef enum
{
    MAINMENU = 0,
    GAMEPLAY = 1,
    ANIMTEST = 2,
    PAUSED = 3,
    MENU = 4
} gamestate_e;

/// @brief Hero state values
typedef enum
{
    IDLE,
    WALKING,
    ATTACK,
    JUMP,
    CROUCHING,
    HIT,
    DYING
} herostate_e;

/// @brief Enemy state values
typedef enum
{
    E_NORMAL,
    E_HURT,
    E_DYING
} enemystate_e;

/// @brief Hitbox definition
typedef struct
{
    FIXED x;
    FIXED y;
    FIXED width;
    FIXED height;
    short type;
} hitbox_t;

/// @brief Dynamic hitbox definition
typedef struct
{
    FIXED x;
    FIXED y;
    FIXED width;
    FIXED height;
    short type;
    short attribute;
    bool active;
} dynamic_hitbox_t;

/// @brief Camera
typedef struct
{
    jo_camera cam;
    FIXED x;
    FIXED y;
    FIXED z;
} camera_t;

/// @brief Gravity
typedef struct
{
    FIXED max;
    FIXED step;
} gravity_t;

/// @brief Collision
typedef struct
{
    FIXED x;
    FIXED y;
} collision_t;

/// @brief Hero animation keyframe
typedef struct
{
    FIXED startframe;
    FIXED length;
    FIXED HEAD_translation[3];
    short HEAD_rotation[3];
    FIXED L_CALF_translation[3];
    short L_CALF_rotation[3];
    FIXED L_FARM_translation[3];
    short L_FARM_rotation[3];
    FIXED L_THIGH_translation[3];
    short L_THIGH_rotation[3];
    FIXED L_UARM_translation[3];
    short L_UARM_rotation[3];
    FIXED LOWER_translation[3];
    short LOWER_rotation[3];
    FIXED R_CALF_translation[3];
    short R_CALF_rotation[3];
    FIXED R_FARM_translation[3];
    short R_FARM_rotation[3];
    FIXED R_THIGH_translation[3];
    short R_THIGH_rotation[3];
    FIXED R_UARM_translation[3];
    short R_UARM_rotation[3];
    FIXED SHOULDER_translation[3];
    short SHOULDER_rotation[3];
    FIXED TORSO_translation[3];
    short TORSO_rotation[3];
    FIXED SWORD_translation[3];
    short SWORD_rotation[3];
} anim_hero_keyframe_t;

typedef struct
{
    FIXED startframe;
    FIXED length;
    FIXED HEAD_translation[3];
    short HEAD_rotation[3];
    FIXED L_CALF_translation[3];
    short L_CALF_rotation[3];
    FIXED L_FARM_translation[3];
    short L_FARM_rotation[3];
    FIXED L_THIGH_translation[3];
    short L_THIGH_rotation[3];
    FIXED L_UARM_translation[3];
    short L_UARM_rotation[3];
    FIXED LOWER_translation[3];
    short LOWER_rotation[3];
    FIXED R_CALF_translation[3];
    short R_CALF_rotation[3];
    FIXED R_FARM_translation[3];
    short R_FARM_rotation[3];
    FIXED R_THIGH_translation[3];
    short R_THIGH_rotation[3];
    FIXED R_UAM_translation[3];
    short R_UAM_rotation[3];
    FIXED SHOULDER_translation[3];
    short SHOULDER_rotation[3];
    FIXED TORSO_translation[3];
    short TORSO_rotation[3];
} mesh_death_keyframe_t;

/// @brief Animation data
typedef struct
{
    short id;
    bool loop;
    FIXED length;
    short numberKeyframes;
    const anim_hero_keyframe_t *frames;
    bool play;
} animation_t;

/// @brief Playable hero definition
typedef struct
{
    /// @brief X position
    FIXED x;
    /// @brief y position
    FIXED y;
    /// @brief z position
    FIXED z;
    /// @brief Horizontal speed
    FIXED speedX;
    /// @brief Vertical speed
    FIXED speedY;

    /// @brief Hero state
    herostate_e state;
    /// @brief Standing on ground
    bool isGrounded;
    /// @brief Facing left
    bool isFacingLeft;
    /// @brief Player hitbox
    hitbox_t hitbox;

    /// @brief Weapon hitbox
    dynamic_hitbox_t sword;
    /// @brief Weapon frame counter
    short swordCounter;

    /// @brief Hero health
    short health;
    /// @brief I-Frame counter
    int invulnerability;

    /// @brief Current animation pointer
    const animation_t *currentAnimation;
    /// @brief Advance animation frame counter
    bool playAnimation;
    /// @brief Animation frame counter
    FIXED animationCounter;
    /// @brief Current animation keyframe
    int currentKeyframe;

} hero_t;

/// @brief Enemy
typedef struct
{
    /// @brief Type id
    short type;
    /// @brief X position
    FIXED x;
    /// @brief Y position
    FIXED y;
    /// @brief Hitbox
    hitbox_t hitbox;
    /// @brief Enemy state
    enemystate_e state;
    /// @brief Health
    short health;
    /// @brief Is active
    bool active;
    /// @brief Facing left
    bool isFacingLeft;
    /// @brief Update routine
    void (*update)(short idx);
    /// @brief Draw routine
    void (*draw)(short idx);
    /// @brief spawning hitbox id
    short hitboxId;
    /// @brief Counter until enemy spawner hitbox is set to active again
    short respawnCounter;
} enemy_t;

/// @brief Level definition
typedef struct
{
    /// @brief Current level chunk
    short currentChunk;
    /// @brief Chunk draw routine
    void (*const *display_geometry)(void);
    /// @brief Number of chunks in the level
    short chunks;
    /// @brief Number of static hitboxes
    short hitboxCount;
    /// @brief Number of dynamic hitboxes
    short dynamicHitboxCount;
    FIXED boundaryLeft;
    FIXED boundaryRight;
    FIXED boundaryTop;
    FIXED boundaryBottom;
} level_t;

#endif