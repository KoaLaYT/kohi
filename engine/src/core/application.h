#pragma once

#include "game_types.h"

KAPI b8 application_create(game* game_inst);

KAPI b8 application_run();

void application_get_framebuffer_size(u32* width, u32* height);
