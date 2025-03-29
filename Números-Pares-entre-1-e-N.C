#include <stdio.h>

int main() {
    int N, i;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    printf("Números pares entre 1 e %d:\n", N);
    for (i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
