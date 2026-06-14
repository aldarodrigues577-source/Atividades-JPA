# include<stdio.h>
# include<stdlib.h>
int main() {
    printf("\n* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303 *");
    printf("\n* Programa JPA-49 - Pedir senha ate acertar...       *");
    printf("\n");

    int senha;
    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha != 1111)
            printf("Senha incorreta! Tente novamente.\n");
    } while (senha != 1111);

    printf("Acesso liberado!\n");
    return 0;
}