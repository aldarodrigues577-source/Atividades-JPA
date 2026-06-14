# include<stdio.h>
# include<stdlib.h>
int main() {
    printf("\n* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303 *");
    printf("\n* Programa JPA-44 - Contar digitos de um numero...   *");
    printf("\n");

    int n, digitos = 0;
    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    int temp = n;
    while (temp > 0) {
        digitos++;
        temp = temp / 10;
    }

    printf("O numero %d possui %d digito(s).\n", n, digitos);
    return 0;
}