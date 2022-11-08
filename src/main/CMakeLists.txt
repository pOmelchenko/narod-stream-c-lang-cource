add_executable(main main.c)

add_compile_options(
        -Wall
        -g3
        -masm=intel
        -Iinc
)

target_link_libraries(main PRIVATE utils)
target_link_libraries(main PRIVATE ariph)
