#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n************************** ");
    printf("\n* Aluno: Alda Rodrigues de Almeida Neta - RA  0028303                                      * ");
    printf("\n* Programa JPA-20 - Ano bissexto                                       * ");
    printf("\n************************** ");

    int ano;
    printf("\n\nDigite um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        printf("%d e bissexto (366 dias).\n", ano);
    else
        printf("%d nao e bissexto.\n", ano);

    return 0;
}