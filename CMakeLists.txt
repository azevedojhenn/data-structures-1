cmake_minimum_required(VERSION 3.27)
project(data_structures C)

set(CMAKE_C_STANDARD 11)

add_executable(data_structures "sorting algorithms/random-list.c"
        "sorting algorithms/a/InsertionSort.c"
        "sorting algorithms/a/InsertionSort.h"
        "sorting algorithms/mylib.h"
        "sorting algorithms/mylib.c"
        "sorting algorithms/insertion-sort.c"
)
