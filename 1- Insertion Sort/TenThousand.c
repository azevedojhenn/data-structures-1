#include "InsertionSort.h"

int main() {
    int sorted_list1[10000];
    sorted_list(sorted_list1, 10000);
    insertion_sort(sorted_list1, 10000);
    show_list(sorted_list1, 10000);
}