cmake_minimum_required(VERSION 3.21)

set(CMAKE_CXX_STANDARD 20)

project(vulkan-minimal)

add_subdirectory(externals)
add_subdirectory(internal)
add_subdirectory(src)