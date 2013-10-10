# How to run and compile c code

_Install dependency for compiling C and CPP code_

    sudo apt-get install build-essential

_Compiling a C program_

    gcc -Wall -W -Werror main.c -o [EXECUTABLE_NAME]

_Compiling a CPP program_
    
    g++ -Wall -W -Werror main.cpp -o [EXECUTABLE_NAME]

_Makefile_
There should be a makefile in every code directory, so just run
    
    make


_Execute a C/CPP program_

    ./EXECUTABLE_NAME
