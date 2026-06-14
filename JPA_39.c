#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    printf("\n**************************\n");
    printf("* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303                  *\n");
    printf("* Programa JPA-39 - Verificar se um numero e positivo                 *\n");
    printf("************************\n");

    float num;
    printf("\nDigite um numero positivo: ");
    scanf("%f", &num);
    while (num <= 0) {
        printf("Numero invalido! Digite um numero positivo: ");
        scanf("%f", &num);
    }

    printf("\nNumero valido: %.2f\n", num);

    return 0;
}