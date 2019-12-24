cmake_minimum_required (VERSION 3.5)
set(CMake_CXX_STANDARD 11)

project(HelloWorld)

add_library(HelloWorld
    src/Log.h
    src/Main.cpp
    src/Math.cpp
    src/Log.cpp
)

target_link_directories(
    HelloWorld
    PUBLIC
        "include"
)

add_compile_options(-Wall)

add_executable(hello_world
    src/Main.cpp
)

target_link_libraries(hello_world HelloWorld)
