# include<stdio.h>
# include<stdlib.h>
int main() {
    printf("\n* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303 *");
    printf("\n* Programa JPA-47 - Tabuada de um numero...          *");
    printf("\n");

    int n, i = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);

    do {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 10);

    return 0;
}