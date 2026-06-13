#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    printf("\n**************************\n");
    printf("* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303                  *\n");
    printf("* Programa JPA-26 - Contar de 1 a 10                                  *\n");
    printf("************************\n");

    int i;
    printf("\nNumeros de 1 a 10:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    return 0;
}