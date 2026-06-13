#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    printf("\n**************************\n");
    printf("* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303                  *\n");
    printf("* Programa JPA-23 - Maior de dois números                             *\n");
    printf("************************\n");

    float a, b;
    printf("\nDigite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);

    if (a > b)
        printf("\nO maior numero é: %.2f\n", a);
    else if (b > a)
        printf("\nO maior numero é: %.2f\n", b);
    else
        printf("\nOs números são iguais.\n");

    return 0;
}