#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    printf("\n**************************\n");
    printf("* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303                  *\n");
    printf("* Programa JPA-37 - Soma de numeros ate digitar zero                  *\n");
    printf("************************\n");

    float num, soma = 0;
    printf("\nDigite numeros (0 para encerrar):\n");
    scanf("%f", &num);
    while (num != 0) {
        soma += num;
        scanf("%f", &num);
    }

    printf("\nSoma total: %.2f\n", soma);

    return 0;
}