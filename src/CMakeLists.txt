set(component vk)

add_executable(${component})

target_sources(${component}
	PRIVATE
	main.cpp
)

find_package(Vulkan REQUIRED)

target_include_directories(${component}
	PUBLIC ${Vulkan_INCLUDE_DIR}
)
target_link_libraries(${component}
	PUBLIC ${Vulkan_LIBRARY}
	PUBLIC stb
	PUBLIC glm::glm
	PUBLIC internal
)

set(SHADER_SOURCES
	shaders/triangle.vert
	shaders/triangle.frag
)

