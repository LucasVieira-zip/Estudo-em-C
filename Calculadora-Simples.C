#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operacao;

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao);
    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);

    if (operacao == '+') {
        resultado = num1 + num2;
    } else if (operacao == '-') {
        resultado = num1 - num2;
    } else if (operacao == '*') {
        resultado = num1 * num2;
    } else if (operacao == '/') {
        if (num2 == 0) {
            printf("Erro: divisão por zero!\n");
            return 1;
        }
        resultado = num1 / num2;
    } else {
        printf("Operação inválida!\n");
        return 1;
    }

    printf("Resultado: %.2f\n", resultado);
    return 0;
}
