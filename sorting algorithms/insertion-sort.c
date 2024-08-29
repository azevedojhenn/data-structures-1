#include "mylib.h"
#include "stdio.h"

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

int main() {
    int a = 10000, b = 100000, c = 10000000;
    int sorted_list1[a], sorted_list2[b], sorted_list3[c];
    read_data(sorted_list1, 10000);
    insertion_sort(sorted_list1, 10000);
    show_list(sorted_list1, 10000);

    return 0;
}