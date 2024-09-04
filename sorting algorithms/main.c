#include <string.h>
#include "mylib.h"
#include "stdio.h"
#include "stdlib.h"

#define MAX_INPUT_SIZE 100

int main() {
    /* while(1) { */
        char input[MAX_INPUT_SIZE];
        int choices[MAX_INPUT_SIZE];
        int num_choices = 0, size;

        printf("\nAlgoritmos de Ordenacao\n"
               "\nEscolha qual quer visualizar: "
               "\n(1) Insertion Sort"
               "\n(2) Selection Sort"
               "\n(3) Bubble Sort"
               "\n(4) Quick Sort"
               "\n(5) Merge Sort"
               "\n(6) Binary Search"
               "\n(7) Interpolation Search"
               "\n\n Digite aqui, separado por espacos: "
        );

        fgets(input, sizeof(input), stdin);

        // Usa strtok para separar os valores com base em espaços
        char *token = strtok(input, " ");
        while (token != NULL) {
            choices[num_choices++] = atoi(token); // Converte para inteiro e armazena
            token = strtok(NULL, " "); // Continua no próximo token
        }

        printf("\nDeseja conferir o tempo de execucao do array de quantos elentos?"
               "\n( ) 10.000"
               "\n( ) 100.000"
               "\n( ) 1.000.000"
               "\n\nDigite aqui: ");
        scanf("%d", &size);

        int arr[size];
        read_data(arr, size);

        for (int i = 0; i < num_choices; i++) {
            switch (choices[i]) {
                case 1:
                    sort_exec_time(insertion_sort, arr, size, "Insertion Sort");
                    break;
                case 2:
                    sort_exec_time(insertion_sort, arr, size, "Selection Sort\n");
                    break;
                case 3:
                    sort_exec_time(insertion_sort, arr, size, "Bubble Sort\n");
                    break;
                case 4:
                    sort_exec_time(insertion_sort, arr, size, "Quick Sort\n");
                    break;
                case 5:
                    sort_exec_time(insertion_sort, arr, size, "Merge Sort\n");
                    break;
                case 6:
                    sort_exec_time(insertion_sort, arr, size, "Binary Search\n");
                    break;
                case 7:
                    sort_exec_time(insertion_sort, arr, size, "Interpolation Search\n");
                    break;
                default:
                    puts("Opção inválida\n");
                    break;
            }

        }

        /*
        if(num_choices == 1 && choices[0] == 0) {
            printf("Tem certeza que deseja sair? (1) Sim (0) Nao\n");
            scanf("%d", &answer);
            if(answer == 1) {
                break;
            }
        }
    } */
    return 0;
}
