# include<stdio.h>
# include<stdlib.h>
# include<locale.h>
int main() {
    setlocale(LC_ALL, "");
    printf("\n* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303 *");
    printf("\n* Programa JPA-50 - Numero positivo obrigatorio...   *");
    printf("\n");

    int n;
    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &n);

        if (n <= 0)
            printf("Valor invalido! Digite um numero maior que zero.\n");
    } while (n <= 0);

    printf("Numero valido: %d\n", n);
    return 0;
}