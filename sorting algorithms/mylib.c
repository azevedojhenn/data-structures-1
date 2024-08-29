//
// Created by jhennifer on 28/08/24.
//

#include "mylib.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void create_random_list(int *list, int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; ++i) {
        list[i] = 1 + rand() % 100;
    }
}

void show_list(int *list, int size)
{
    for (int i = 0; i < size; ++i) {
        printf("\nlist[%d] = %d", i, list[i]);
    }
    puts("\n\n");
}

void read_data(int *list, int size)
{
    for (int i = 0; i < size; ++i) {
        printf("list[%d] = ", i);
        scanf("%d", &list[i]);
    }
}

void write_data(int *list, int size)
{
    for (int i = 0; i < size; ++i) {
        printf("\nlist[%d] = %d", i, list[i]);
    }
    puts("\n\n");
}