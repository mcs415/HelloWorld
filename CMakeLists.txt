cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)

project(HelloWorld)

include_directories(include)

add_library(HelloWorld
    include/Log.h
    src/Main.cpp
    src/Log.cpp
)

target_include_directories(
  HelloWorld
  PUBLIC
    "include"
)

add_executable(hello_world
  src/Main.cpp
)

target_link_libraries(hello_world HelloWorld)
