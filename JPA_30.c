#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    printf("\n**************************\n");
    printf("* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303                  *\n");
    printf("* Programa JPA-30 - Fatorial de um numero                             *\n");
    printf("************************\n");

    int n, i;
    long fatorial = 1;
    printf("\nDigite um numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("\nFatorial de %d = %ld\n", n, fatorial);

    return 0;
}