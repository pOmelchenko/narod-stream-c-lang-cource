#!/usr/bin/env bash

gcc -Wall -E main.c -o main.i
gcc -Wall -E ariph.c -o ariph.i
gcc -Wall -E utils.c -o utils.i
gcc -masm=intel -g3 -Wall -S main.i -o main.s
gcc -masm=intel -g3 -Wall -S ariph.i -o ariph.s
gcc -masm=intel -g3 -Wall -S utils.i -o utils.s
gcc -g3 -Wall -c main.c
gcc -g3 -Wall -c ariph.c
gcc -g3 -Wall -c utils.c
gcc -Wall main.o ariph.o utils.o -o main
