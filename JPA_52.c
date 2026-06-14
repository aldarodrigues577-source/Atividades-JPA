# include<stdio.h>
# include<stdlib.h>
# include<locale.h>
int main() {
    setlocale(LC_ALL, "");
    printf("\n* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303 *");
    printf("\n* Programa JPA-52 - Soma ate multiplo de 10...       *");
    printf("\n");

    int n, soma = 0;
    do {
        printf("Digite um numero: ");
        scanf("%d", &n);
        soma += n;
    } while (n % 10 != 0);

    printf("Soma total: %d\n", soma);
    return 0;
}