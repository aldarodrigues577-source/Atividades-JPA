#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    printf("\n**************************\n");
    printf("* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303                  *\n");
    printf("* Programa JPA-40 - Tabuada com while                                 *\n");
    printf("************************\n");

    int n, i = 1;
    printf("\nDigite um numero: ");
    scanf("%d", &n);

    printf("\nTabuada do %d:\n", n);
    while (i <= 10) {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }

    return 0;
}