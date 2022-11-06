cmake_minimum_required(VERSION 3.18)

project(main VERSION 23.2.0)

set(CMAKE_C_STANDARD 11)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY build_prjct)

include_directories(.)

add_executable(main main.c utils.c)

add_compile_options(
        -Wall
        -g3
)
