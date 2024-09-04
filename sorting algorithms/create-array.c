#include <stdio.h>
#include "mylib.h"

#define TEN_HUNDRED 10000
#define HUNDRED_THOUSAND 100000
#define MILLION 1000000

int main() {
    int size, op;
    printf("Tamanho: ");
    scanf("%d", &size);

    int arr[size];
    create_random_list(arr, size);
    puts("Array criado com sucesso!");
    write_data(arr, size);
    puts("Array salvo com sucesso!");

    /* printf("conferir se o array ta tudo ok? (0:nao, 1:sim) ");
    if (scanf("%d", &op) && op == 1) {
        show_list(arr, size);
    } */
}