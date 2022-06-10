cmake_minimum_required(VERSION 3.18)

project(main)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(main main.c ariph.c utils.c)

add_compile_options(
        -Wall
        -g3
)
