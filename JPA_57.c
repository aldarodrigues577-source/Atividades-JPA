# include<stdio.h>
# include<stdlib.h>
# include<locale.h>
# include<string.h>
int main() {
    setlocale(LC_ALL, "");
    printf("\n* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303 *");
    printf("\n* Programa JPA-57 - Central do Brinquedo Eletronico  *");
    printf("\n");

    char cor[20];
    printf("Digite a cor que acendeu: ");
    scanf("%s", cor);

    if (strcmp(cor, "Verde") == 0)
        printf("O urso diz: Vamos brincar la fora!\n");
    else if (strcmp(cor, "Amarelo") == 0)
        printf("O urso diz: Estou ficando com soninho...\n");
    else if (strcmp(cor, "Vermelho") == 0)
        printf("O urso diz: Estou com fome, hora do lanche!\n");
    else
        printf("Cor desconhecida\n");

    return 0;
}