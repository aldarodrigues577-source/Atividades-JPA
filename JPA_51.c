# include<stdio.h>
# include<stdlib.h>
# include<locale.h>
int main() {
    setlocale(LC_ALL, "");
    printf("\n* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303 *");
    printf("\n* Programa JPA-51 - Contagem regressiva de 10 ate 1  *");
    printf("\n");

    int i = 10;
    do {
        printf("%d\n", i);
        i--;
    } while (i >= 1);

    printf("VAI!\n");
    return 0;
}