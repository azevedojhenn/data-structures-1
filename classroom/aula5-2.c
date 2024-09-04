#include "stdio.h"
#include "aula5.h"

int main() {
    Pto *umPonto = pto_create(2.4566, 6.877654);
    //A prox linha nao funciona, se descomentar.
    //printf("%f",umPonto->x);
    pto_print(umPonto);

    // use todas as funções de aula5.h e mostre alguns resultados
    pto_destroy(umPonto);


    return 0;
}