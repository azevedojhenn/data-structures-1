#include "mylib.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

// UTIL

void create_random_list(int *arr, int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; ++i) {
        arr[i] = 1 + rand() % 100;
    }
}

void show_list(int *arr, int size)
{
    for (int i = 0; i < size; ++i) {
        printf("\nlist[%d] = %d", i, arr[i]);
    }
    puts("\n\n");
}

void read_data(int *arr, int size) {
    FILE *file;
    if (size == 10000) {
        file = fopen(
                "/home/jhennifer/Repositories/data-structures-1/sorting algorithms/files/random-num-10000.out", "rb");
    } else if (size == 100000) {
        file = fopen(
                "/home/jhennifer/Repositories/data-structures-1/sorting algorithms/files/random-num-100000.out", "rb");
    } else if (size == 1000000) {
        file = fopen(
                "/home/jhennifer/Repositories/data-structures-1/sorting algorithms/files/random-num-100000.out", "rb");
    } else {
        printf("Tamanho do array inválido.\n");
        exit(1);
    }

    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    fread(arr, sizeof(int), size, file);
    fclose(file);
}

void write_data(int *arr, int size) {
    FILE *file;
    if (size == 10000) {
        file = fopen(
                "/home/jhennifer/Repositories/data-structures-1/sorting algorithms/files/random-num-10000.out", "wb");
    } else if (size == 100000) {
        file = fopen(
                "/home/jhennifer/Repositories/data-structures-1/sorting algorithms/files/random-num-100000.out", "wb");
    } else if (size == 1000000) {
        file = fopen(
                "/home/jhennifer/Repositories/data-structures-1/sorting algorithms/files/random-num-100000.out", "wb");
    } else {
        printf("Tamanho do array inválido.\n");
        exit(1);
    }

    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    fwrite(arr, sizeof(int), size, file);
    fclose(file);
}

void sort_exec_time(void (*sort_func)(int[], int),
                    int *arr,
                    int size,
                    char *sort_name) {
    clock_t start = clock();
    sort_func(arr, size);
    clock_t end = clock();
    double time_taken = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%s levou %f segundos (%.4f mili segundos) para executar.\n",
           sort_name, time_taken, time_taken*1000);
}

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// SORTING ALGORITHMS

void insertion_sort(int *arr, int size) {
    int i, j, aux;
    for (i = 1; i < size; ++i)
    {
        aux = arr[i];
        j = i - 1;

        while ((j>=0) && (aux < arr[j]))
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = aux;
    }
}

void selection_sort(int *arr, int size) {
    for (int i = 0; i < size - 1; ++i)
    {
        int min = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(&arr[min], &arr[i]);
    }
}

/*
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quick_sort (int arr[], int low, int high) {

    if (low < high) {

        // pi is the partition return index of pivot
        int pi = partition(arr, low, high);

        // Recursion calls for smaller elements
        // and greater or equals elements
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

void merge_sort(int *arr, int size) {

}
*/

void bubble_sort(int *arr, int size)
{
    int i, j, aux;
    for (i = 3; i < size; ++i)
    {
        aux = arr[i];
        j = i - 1;

        while ((j>=0) && (aux < arr[j]))
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = aux;
    }
}

/*
void binary_search(int *arr, int size) {

}

void interpolation_search(int *arr, int size) {

}
*/