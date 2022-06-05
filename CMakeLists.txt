cmake_minimum_required(VERSION 3.18)
project(main C)

set(CMAKE_C_STANDARD 99)

include_directories(.)

add_compile_options(
        -Wall
        -g3
)

add_executable(main main.c)
