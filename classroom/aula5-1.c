#include <stdio.h>

void print_int(void *x) {
    int *pInt = (int*)x;
    printf("%d", *pInt);
}

void print_float(void *x) {
    float *pFloat = (float*)x;
    printf("%.2f", *pFloat);
}

void print_string(void *x) {
    char *pString = (char*)x;
    printf("%s", pString);
}

void print_array(void *arr,
                 unsigned int size,
                 unsigned int n,
                 void (*print)(void*)) {
    for (int i = 0; i < n; i++) {
        print(arr + i * size);
        if (i < n - 1)
            putchar(',');
    }
    putchar('\n');
}

int main() {
    int v[] = {1, 2, 3, 4, 5};
    print_array(v, sizeof(int), 5, print_int);

    float f[] = {1.1F, 2.2F, 3.3F, 4.4F};
    print_array(f, sizeof(float), 4, print_float);

    char strings[][10] = {"abc", "def", "ghi"};
    print_array(strings, sizeof(char) * 10, 3, print_string);

    return 0;
}