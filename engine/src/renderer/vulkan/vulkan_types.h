#pragma once

#include <vulkan/vulkan.h>

#include "defines.h"

typedef struct vulkan_context {
    VkInstance instance;
    VkAllocationCallbacks* allocator;
} vulkan_context;
