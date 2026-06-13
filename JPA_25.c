#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    printf("\n**************************\n");
    printf("* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303                  *\n");
    printf("* Programa JPA-25 - Notas e aprovação                                 *\n");
    printf("************************\n");

    float media;
    printf("\nDigite a media final do aluno: ");
    scanf("%f", &media);

    if (media >= 7.0)
        printf("\nSituaçao: APROVADO\n");
    else if (media >= 5.0)
        printf("\nSituacao: EM RECUPERAÇAO\n");
    else
        printf("\nSituacao: REPROVADO\n");

    return 0;
}