#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    printf("\n**************************\n");
    printf("* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303                  *\n");
    printf("* Programa JPA-24 - Pode votar?                                       *\n");
    printf("************************\n");

    int idade;
    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16)
        printf("\nVoce PODE votar!\n");
    else
        printf("\nVocê NAO pode votar.\n");

    return 0;
}