cmake_minimum_required(VERSION 3.18)

project(main
    VERSION 23.2.0
    DESCRIPTION "narod stream - c lang course - homework"
    LANGUAGES C
)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

add_subdirectory(src)
add_subdirectory(tests)
