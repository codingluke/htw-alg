# How to run and compile c code

## Install dependency for compiling C and CPP code

    sudo apt-get install build-essential

## Compiling a C program

    gcc -Wall -W -Werror main.c -o [EXECUTABLE_NAME]

## Compiling a CPP program
    
    g++ -Wall -W -Werror main.cpp -o [EXECUTABLE_NAME]

## Makefile
There should be a makefile in every code directory, so just run
    
    make


## Execute a C/CPP program

    ./EXECUTABLE_NAME
