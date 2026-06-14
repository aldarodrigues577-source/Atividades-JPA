#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    printf("\n**************************\n");
    printf("* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303                  *\n");
    printf("* Programa JPA-36 - Contar ate 10 com while                           *\n");
    printf("************************\n");

    int i = 1;
    printf("\nNumeros de 1 a 10:\n");
    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}