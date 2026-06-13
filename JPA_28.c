#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    printf("\n**************************\n");
    printf("* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303                  *\n");
    printf("* Programa JPA-28 - Soma dos 100 primeiros numeros naturais            *\n");
    printf("************************\n");

    int i, soma = 0;
    for (i = 1; i <= 100; i++) {
        soma += i;
    }

    printf("\nA soma dos numeros de 1 a 100 e: %d\n", soma);

    return 0;
}