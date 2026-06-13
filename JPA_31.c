#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    printf("\n**************************\n");
    printf("* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303                  *\n");
    printf("* Programa JPA-31 - Contagem regressiva                               *\n");
    printf("************************\n");

    int i;
    printf("\nContagem regressiva:\n");
    for (i = 10; i >= 1; i--) {
        printf("%d\n", i);
    }

    return 0;
}