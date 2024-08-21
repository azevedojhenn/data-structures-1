cmake_minimum_required(VERSION 3.27)
project(data_structures C)

set(CMAKE_C_STANDARD 11)

add_executable(data_structures main.c
        "1- Insertion Sort/InsertionSort.c"
        "1- Insertion Sort/InsertionSort.h"
        "1- Insertion Sort/OneHundredThousand.c"
        "1- Insertion Sort/OneMillion.c"
)
