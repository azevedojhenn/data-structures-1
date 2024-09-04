#include <stdio.h>
#include "mylib.h"

int main() {
    int total;
    const int x = 10000, y = 100000, z = 1000000;

    printf("Quantos numeros? ");
    if (!scanf("%d", &total))
        printf("scanf error.");

    if (total==x){
        int a[x];
        create_random_list(a, x);
        write_data(a, x);
        return 0;
    }

    if (total==y){
        int a[y];
        create_random_list(a, y);
        write_data(a,y);
        return 0;
    }

    if (total==z){
        int a[z];
        create_random_list(a, z);
        write_data(a,z);
        return 0;
    }

    return 1;
}