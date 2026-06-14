# include<stdio.h>
# include<stdlib.h>
# include<locale.h>
int main() {
    setlocale(LC_ALL, "");
    printf("\n* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303 *");
    printf("\n* Programa JPA-41 - Número primo com while...        *");
    printf("\n");

    int n, i = 1, divisores = 0;
    printf("Digite um número: ");
    scanf("%d", &n);

    while (i <= n) {
        if (n % i == 0) divisores++;
        i++;
    }

    if (divisores == 2)
        printf("%d é primo.\n", n);
    else
        printf("%d não é primo.\n", n);

    return 0;
}