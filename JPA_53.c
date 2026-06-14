# include<stdio.h>
# include<stdlib.h>
# include<locale.h>
int main() {
    setlocale(LC_ALL, "");
    printf("\n* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303 *");
    printf("\n* Programa JPA-53 - Confirmar saida com s...         *");
    printf("\n");

    char opcao;
    do {
        printf("\n--- MENU ---\n");
        printf("1 - Cadastrar\n");
        printf("2 - Listar\n");
        printf("Deseja sair? (s para sair): ");
        scanf(" %c", &opcao);
    } while (opcao != 's');

    printf("Sistema encerrado.\n");
    return 0;
}