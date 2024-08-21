#include "InsertionSort.h"

int main() {
    int sorted_list1[100000];
    sorted_list(sorted_list1, 100000);
    insertion_sort(sorted_list1, 100000);
    show_list(sorted_list1, 100000);
}