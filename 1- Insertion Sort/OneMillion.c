#include "InsertionSort.h"

int main() {
    int sorted_list1[1000000];
    create_sorted_list(sorted_list1, 1000000);
    insertion_sort(sorted_list1, 1000000);
    show_list(sorted_list1, 1000000);
}