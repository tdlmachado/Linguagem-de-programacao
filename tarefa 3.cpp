#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main() {
    int quantidade, i, j, qtd_notas;
    float notas[10], pesos[10], sm, smp, media;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidade);

    for (i = 1; i <= quantidade; i++) {
        printf("\n\tAluno %d", i);
        printf("\nDigite a quantidade de notas desse aluno: ");
        scanf("%d", &qtd_notas);

        sm = 0;
        smp = 0;

        for (j = 0; j < qtd_notas; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[j]);

            printf("Peso da nota %d: ", j + 1);
            scanf("%f", &pesos[j]);

            sm += notas[j] * pesos[j];
            smp += pesos[j];
        }

        media = sm / smp;

        printf("Média do aluno %d: %.2f\n", i, media);  // <- AGORA está dentro do loop!

        if (media >= 7) {
            printf("Resultado: Aprovado!\n");
        } else if (media > 3 && media < 7) {
            printf("Resultado: Exame!\n");
        } else {
            printf("Resultado: Reprovado!\n");
        }
    }

    return 0;
}

