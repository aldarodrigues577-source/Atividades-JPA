#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    printf("\n**************************\n");
    printf("* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303                  *\n");
    printf("* Programa JPA-29 - Numeros pares de 0 a 50                           *\n");
    printf("************************\n");

    int i;
    printf("\nNumeros pares de 0 a 50:\n");
    for (i = 0; i <= 50; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}