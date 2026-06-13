#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    printf("\n*************************************************************");
    printf("\n* Aluno: Alda Rodrigues de Almeida Neta - RA 0028303       *");
    printf("\n* Programa JPA-17 - Sensor do Parque Tematico              *");
    printf("\n*************************************************************\n");

    float altura;

    printf("\nDigite a altura da crianca em centimetros: ");
    scanf("%f", &altura);

    if (altura >= 140) {
        printf("\nLUZ VERDE - Acesso LIBERADO! Divirta-se!\n");
    } else {
        printf("\nLUZ VERMELHA - Acesso BARRADO! Altura minima e 140cm.\n");
    }

    printf("\n*************************************************************\n");

    return 0;
}