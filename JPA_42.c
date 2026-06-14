# include<stdio.h>
# include<stdlib.h>
# include<locale.h>
int main() {
    setlocale(LC_ALL, "");
    printf("\n* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303 *");
    printf("\n* Programa JPA-42 - Quantidade de ímpares...         *");
    printf("\n");

    int n, i = 1, impares = 0;
    while (i <= 10) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &n);
        if (n % 2 != 0) impares++;
        i++;
    }

    printf("Quantidade de ímpares: %d\n", impares);
    return 0;
}