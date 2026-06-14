# include<stdio.h>
# include<stdlib.h>
# include<locale.h>
int main() {
    setlocale(LC_ALL, "");
    printf("\n* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303 *");
    printf("\n* Programa JPA-55 - Ler numeros e mostrar o maior... *");
    printf("\n");

    int n, maior = 0;
    do {
        printf("Digite um numero (negativo para sair): ");
        scanf("%d", &n);

        if (n > maior)
            maior = n;
    } while (n >= 0);

    printf("Maior numero informado: %d\n", maior);
    return 0;
}