#pragma once

#include "defines.h"

// Application configuration.
typedef struct application_config {
    // Window starting position x axis, if applicable.
    i16 start_pos_x;

    // Window starting position y axis, if applicable.
    i16 start_pos_y;

    // Window starting width, if applicable.
    i16 start_width;

    // Window starting height, if applicable.
    i16 start_height;

    // The application name used in windowing, if applicable.
    char* name;

} application_config;

typedef struct game {
    // The application configuration.
    application_config app_config;

    // Function pointer to game's initialize function.
    b8 (*initialize)(struct game* game_inst);

    // Function pointer to game's update function.
    b8 (*update)(struct game* game_inst, f32 delta_time);

    // Function pointer to game's render function.
    b8 (*render)(struct game* game_inst, f32 delta_time);

    // Function pointer to handle resizes, if applicable.
    void (*on_resize)(struct game* game_inst, u32 width, u32 height);

    // Game-specific game state. Created and managed by the game.
    void* state;

} game;
