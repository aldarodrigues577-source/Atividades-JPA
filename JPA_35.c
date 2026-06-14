#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    printf("\n**************************\n");
    printf("* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303                  *\n");
    printf("* Programa JPA-35 - Numeros de Fibonacci                              *\n");
    printf("************************\n");

    int n, i, a = 0, b = 1, temp;
    printf("\nDigite a quantidade de termos: ");
    scanf("%d", &n);

    printf("\nSequencia de Fibonacci:\n");
    for (i = 1; i <= n; i++) {
        printf("%d\n", a);
        temp = a + b;
        a = b;
        b = temp;
    }

    return 0;
}