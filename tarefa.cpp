#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    float nota, sm = 0, media;
    int i;

    for (i = 1; i <= 3; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        sm = sm+nota;
    }

    media = sm / 3;

    printf("\nMedia: %.2f\n", media);

    if (media >= 7) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado.\n");
    }
}
