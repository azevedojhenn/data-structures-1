#ifndef MYLIB_H
#define MYLIB_H

/**
 * Create tests Random Array List
 * @param array Pointer to the first element of the vector.
 * @param size Array size.
 */
void create_random_list(int *array, int size);

/**
 * Print the values of the array list
 * @param list Pointer to the first element of the vector.
 * @param size Array size.
 */
void show_list(int *array, int size);

/**
 * Read data from the 'file on disk' and save it into a array list
 * @param array Pointer to the first element of the vector.
 * @param size Array size.
 */
void read_data(int *array, int size);

/**
 * Write data from the array list and save it into a 'file on disk'
 * @param array Pointer to the first element of the vector.
 * @param size Array size.
 */
void write_data(int *array, int size);

/**
 * Calculates the sort execution time
 * @param sort_func Pointer to the sorting algorithm.
 * @param arr Pointer to the first element of the array.
 * @param size Array size.
 */
void sort_exec_time(void (*sort_func)(int[], int), int *arr, int size, char *sort_name);

/**
 * Insertion Sort Algorithm
 * @param arr Pointer to the first element of the array.
 * @param size Array size.
 */
void insertion_sort(int *arr, int size);

/**
 * Selection Sort Algorithm
 * @param arr Pointer to the first element of the array.
 * @param size Array size.
 */
void selection_sort(int *arr, int size);

/**
 * Quick Sort Algorithm
 * @param arr Pointer to the first element of the array.
 * @param size Array size.
 */
void quick_sort(int *arr, int size);

/**
 * Merge Sort Algorithm
 * @param v Pointer to the first element of the array.
 * @param size Array size.
 */
void merge_sort(int *arr, int size);

/**
 * Bubble Sort Algorithm
 * @param arr Pointer to the first element of the array.
 * @param size Array size.
 */
void bubble_sort(int *arr, int size);

/**
 * Shell Sort Algorithm
 * @param v Pointer to the first element of the array.
 * @param size Array size.
 */
void binary_search(int *arr, int size);

/**
 * Shell Sort Algorithm
 * @param arr Pointer to the first element of the array.
 * @param size Array size.
 */
void interpolation_search(int *arr, int size);

#endif
