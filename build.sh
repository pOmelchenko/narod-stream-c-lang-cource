#!/usr/bin/env bash

gcc -Wall -E main.c -o main.i
gcc -masm=intel -g3 -Wall -S main.i -o main.s
gcc -g3 -Wall -c main.c
gcc -Wall main.o -o main
