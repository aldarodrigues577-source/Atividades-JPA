# include<stdio.h>
# include<stdlib.h>
# include<locale.h>
int main() {
    setlocale(LC_ALL, "");
    printf("\n* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303 *");
    printf("\n* Programa JPA-43 - Soma dos pares entre 1 e 100... *");
    printf("\n");

    int soma = 0, n = 2;
    while (n <= 100) {
        soma += n;
        n += 2;
    }

    printf("Soma dos pares entre 1 e 100: %d\n", soma);
    return 0;
}