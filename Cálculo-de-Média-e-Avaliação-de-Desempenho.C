#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite as três notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Média: %.2f\n", media);

    if (media >= 7) {
        printf("Aprovado\n");
    } else if (media >= 5) {
        printf("Recuperação\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
