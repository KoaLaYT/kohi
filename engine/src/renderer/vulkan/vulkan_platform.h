#include "defines.h"

struct platform_state;
struct vulkan_context;

b8 platform_create_vulkan_surface(struct platform_state* plat_state,
                                  struct vulkan_context* context);
