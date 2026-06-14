# include<stdio.h>
# include<stdlib.h>
int main() {
    printf("\n* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303 *");
    printf("\n* Programa JPA-48 - Menu com opcao de sair...        *");
    printf("\n");

    int opcao;
    do {
        printf("\n1 - Mensagem\n");
        printf("2 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1)
            printf("Voce escolheu a mensagem!\n");
    } while (opcao != 2);

    printf("Saindo...\n");
    return 0;
}