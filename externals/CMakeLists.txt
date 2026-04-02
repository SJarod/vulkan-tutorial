add_subdirectory(glfw)


add_subdirectory(glm)

add_library(stb INTERFACE)
target_sources(stb INTERFACE
    stb/stb_image.h
)
target_include_directories(stb INTERFACE ./stb/)

