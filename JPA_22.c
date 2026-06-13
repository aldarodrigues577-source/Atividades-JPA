#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    printf("\n**************************\n");
    printf("* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303                  *\n");
    printf("* Programa JPA-22 - Par ou ímpar                                      *\n");
    printf("************************\n");

    int numero;
    printf("\nDigite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
        printf("\nO número %d é PAR.\n", numero);
    else
        printf("\nO número %d é ÍMPAR.\n", numero);

    return 0;
}