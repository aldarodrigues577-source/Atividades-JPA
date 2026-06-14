#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    printf("\n**************************\n");
    printf("* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303                  *\n");
    printf("* Programa JPA-34 - Verificar se um numero e primo                    *\n");
    printf("************************\n");

    int n, i, primo = 1;
    printf("\nDigite um numero: ");
    scanf("%d", &n);

    if (n < 2) {
        primo = 0;
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo)
        printf("\nO numero %d E PRIMO.\n", n);
    else
        printf("\nO numero %d NAO e primo.\n", n);

    return 0;
}