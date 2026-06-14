# include<stdio.h>
# include<stdlib.h>
# include<locale.h>
int main() {
    setlocale(LC_ALL, "");
    printf("\n* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303 *");
    printf("\n* Programa JPA-54 - Validar numero entre 1 e 5...    *");
    printf("\n");

    int n;
    do {
        printf("Digite um nivel de dificuldade (1 a 5): ");
        scanf("%d", &n);

        if (n < 1 || n > 5)
            printf("Valor invalido! Digite entre 1 e 5.\n");
    } while (n < 1 || n > 5);

    printf("Nivel escolhido: %d\n", n);
    return 0;
}