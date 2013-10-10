# Algorithm and Datastructure practices in C

## Structure
For every practice there is a folder with the code in it.

## How to run and compile C code

__Install dependency for compiling C and CPP code__

    sudo apt-get install build-essential

__Compiling a C program__

    gcc -Wall -W -Werror main.c -o [EXECUTABLE_NAME]

__Compiling a CPP program__
    
    g++ -Wall -W -Werror main.cpp -o [EXECUTABLE_NAME]

__Makefile__

There should be a makefile in every code directory, so just run `make`.
It should compile the program to the subdirectory build


__Execute a C/CPP program__

    ./build/EXECUTABLE_NAME
