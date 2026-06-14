# include<stdio.h>
# include<stdlib.h>
# include<locale.h>
int main() {
    setlocale(LC_ALL, "");
    printf("\n* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303 *");
    printf("\n* Programa JPA-60 - Validador de Dias Uteis...       *");
    printf("\n");

    int dia;
    printf("Digite o numero do dia (1-Domingo a 7-Sabado): ");
    scanf("%d", &dia);

    switch (dia) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("Dia Util. Acesso liberado para o trabalho.\n");
            break;
        case 1:
        case 7:
            printf("Fim de Semana. Predio fechado.\n");
            break;
        default:
            printf("Numero de dia invalido.\n");
    }

    return 0;
}