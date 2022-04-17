cmake_minimum_required(VERSION 3.22)
project(main C)

set(CMAKE_C_STANDARD 99)

include_directories(.)

add_executable(main
        main.c)
