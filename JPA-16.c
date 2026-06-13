#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    printf("\n*************************************************************");
    printf("\n* Aluno: Alda Rodrigues de Almeida Neta - RA 0028303       *");
    printf("\n* Programa JPA-16 - Multiplo de 3 e/ou 5                  *");
    printf("\n*************************************************************\n");

    int pedido;

    printf("\nDigite o numero do pedido: ");
    scanf("%d", &pedido);

    if (pedido % 3 == 0 && pedido % 5 == 0) {
        printf("\nParabens! Voce ganhou os DOIS brindes: refrigerante e sobremesa!\n");
    } else if (pedido % 3 == 0) {
        printf("\nParabens! Voce ganhou um REFRIGERANTE!\n");
    } else if (pedido % 5 == 0) {
        printf("\nParabens! Voce ganhou uma SOBREMESA!\n");
    } else {
        printf("\nDesculpe, voce nao ganhou nenhum brinde.\n");
    }

    printf("\n*************************************************************\n");

    return 0;
}