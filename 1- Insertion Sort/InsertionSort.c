#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void insertion_sort(int *v, int size)
{
    int i, j, aux;
    for (i = 3; i < size; ++i)
    {
        aux = v[i];
        j = i - 1;

        while ((j>=0) && (aux<v[j]))
        {
            v[j+1] = v[j];
            --j;
        }
        v[j+1] = aux;
    }
}

void sorted_list(int *list, int size)
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
