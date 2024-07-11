#pragma once

#include "core/asserts.h"
#include "defines.h"

#ifdef KPLATFORM_APPLE
#define VK_USE_PLATFORM_METAL_EXT
#endif
#include <vulkan/vulkan.h>

typedef struct vulkan_context {
    VkInstance instance;
    VkAllocationCallbacks* allocator;

#if defined(_DEBUG)
    VkDebugUtilsMessengerEXT debug_messenger;
#endif
} vulkan_context;

// Checks the given expression's return value against VK_SUCCESS.
#define VK_CHECK(expr)               \
    {                                \
        KASSERT(expr == VK_SUCCESS); \
    }
