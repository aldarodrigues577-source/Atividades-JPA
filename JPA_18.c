#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "");

    printf("\n*************************************************************");
    printf("\n* Aluno: Alda Rodrigues de Almeida Neta - RA 0028303       *");
    printf("\n* Programa JPA-18 - Login Simples                          *");
    printf("\n*************************************************************\n");

    char usuario[50], senha[50];
    char usuario_correto[] = "aluno";
    char senha_correta[] = "biblioteca123";

    printf("\nUsuario: ");
    scanf("%s", usuario);
    printf("Senha: ");
    scanf("%s", senha);

    if (strcmp(usuario, usuario_correto) == 0 && strcmp(senha, senha_correta) == 0) {
        printf("\nAcesso PERMITIDO! Bem-vindo a biblioteca digital!\n");
    } else {
        printf("\nAcesso NEGADO! Usuario ou senha incorretos.\n");
    }

    printf("\n*************************************************************\n");

    return 0;
}