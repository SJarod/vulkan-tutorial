#pragma once

#include <glad/vulkan.h>
#include <GLFW/glfw3.h>


// Window System Integration

inline void init_wsi()
{
    glfwInit();
}
inline void terminate_wsi()
{
    glfwTerminate();
}


// Window creation

inline GLFWwindow* create_window()
{
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	GLFWwindow* window = glfwCreateWindow(1366, 768, "Vulkan Tutorial", nullptr, nullptr);
    return window;
}
inline void destroy_window(GLFWwindow* window)
{
	glfwDestroyWindow(window);
}


// Window surface

/**
 * return success
 */
inline void wsi_create_presentation_surface(void* instance, void* window, void* surface)
{
	if (glfwCreateWindowSurface(*(VkInstance*)instance, (GLFWwindow*)window, nullptr, (VkSurfaceKHR*)surface) != VK_SUCCESS)
		throw std::exception("Failed to create window surface");
}