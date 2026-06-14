# include<stdio.h>
# include<stdlib.h>
# include<locale.h>
int main() {
    setlocale(LC_ALL, "");
    printf("\n* Aluno: ALDA RODRIGUES DE ALMEIDA NETA - RA 0028303 *");
    printf("\n* Programa JPA-58 - Calculadora de Bolso 4 Operacoes *");
    printf("\n");

    float n1, n2;
    char op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    switch (op) {
        case '+':
            printf("Resultado: %.2f\n", n1 + n2);
            break;
        case '-':
            printf("Resultado: %.2f\n", n1 - n2);
            break;
        case '*':
            printf("Resultado: %.2f\n", n1 * n2);
            break;
        case '/':
            if (n2 == 0)
                printf("Erro: divisao por zero!\n");
            else
                printf("Resultado: %.2f\n", n1 / n2);
            break;
        default:
            printf("Operacao matematica nao reconhecida\n");
    }

    return 0;
}