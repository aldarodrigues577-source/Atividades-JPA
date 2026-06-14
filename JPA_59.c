# include<stdio.h>
# include<stdlib.h>
# include<locale.h>
int main() {
    setlocale(LC_ALL, "");
    printf("\n* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303 *");
    printf("\n* Programa JPA-59 - Assistente de Direcao GPS...     *");
    printf("\n");

    char dir;
    printf("Digite a direcao (N, S, L, O): ");
    scanf(" %c", &dir);

    switch (dir) {
        case 'N':
            printf("Seguir para o Norte.\n");
            break;
        case 'S':
            printf("Seguir para o Sul.\n");
            break;
        case 'L':
            printf("Virar a Leste (Direita).\n");
            break;
        case 'O':
            printf("Virar a Oeste (Esquerda).\n");
            break;
        default:
            printf("Comando invalido! Pare o robo.\n");
    }

    return 0;
}