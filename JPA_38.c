#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    printf("\n**************************\n");
    printf("* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303                  *\n");
    printf("* Programa JPA-38 - Senha correta                                     *\n");
    printf("************************\n");

    int senha, tentativa;
    senha = 1234;

    printf("\nDigite a senha: ");
    scanf("%d", &tentativa);
    while (tentativa != senha) {
        printf("Senha incorreta! Tente novamente: ");
        scanf("%d", &tentativa);
    }

    printf("\nAcesso liberado!\n");

    return 0;
}