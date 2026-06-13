#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n************************** ");
    printf("\n* Aluno: Alda Rodrigues de ALmeida Neta - RA  0028303                                      * ");
    printf("\n* Programa JPA-21 - Numero positivo ou negativo                        * ");
    printf("\n************************** ");

    float numero;
    printf("\n\nDigite um numero: ");
    scanf("%f", &numero);

    if (numero > 0)
        printf("Lucro: o numero e positivo.\n");
    else if (numero < 0)
        printf("Prejuizo: o numero e negativo.\n");
    else
        printf("O numero e zero.\n");

    return 0;
}