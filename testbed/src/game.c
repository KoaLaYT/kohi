#include "game.h"

b8 game_initialize(game* game_inst) { return TRUE; }

b8 game_update(game* game_inst, f32 delta_time) { return TRUE; }

b8 game_render(game* game_inst, f32 delta_time) { return TRUE; }

void game_on_resize(game* game_inst, u32 width, u32 height) {}
