#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    printf("\n**************************\n");
    printf("* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303                  *\n");
    printf("* Programa JPA-33 - Multiplos de 3 entre 1 e 30                       *\n");
    printf("************************\n");

    int i;
    printf("\nMultiplos de 3 entre 1 e 30:\n");
    for (i = 1; i <= 30; i++) {
        if (i % 3 == 0)
            printf("%d\n", i);
    }

    return 0;
}