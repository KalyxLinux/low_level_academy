#!/bin/bash

# Build script for multi_module_programming

gcc -fdiagnostics-color=always -g main.c file.c parse.c -o bin/program

if [ $? -eq 0 ]; then
    echo "Build successful! Run with: ./bin/program <filename>"
else
    echo "Build failed!"
    exit 1
fi
