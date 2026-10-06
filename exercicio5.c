#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float notas[3][4];
    float medias[3];
    float soma;
    int i, j;
    int maior_estudante = 0;

    // Leitura das notas
    for (i = 0; i < 3; i++)
    {
        soma = 0;

        for (j = 0; j < 4; j++)
        {
            printf("Digite a %dª nota do %dº estudante: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);

            soma += notas[i][j];
        }

        // Calcula a média do estudante
        medias[i] = soma / 4;
    }

    // Exibe as médias
    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf("Média do estudante %d: %.2f\n", i + 1, medias[i]);
    }

    // Identifica a maior média
    for (i = 1; i < 3; i++)
    {
        if (medias[i] > medias[maior_estudante])
        {
            maior_estudante = i;
        }
    }

    printf("Maior média: estudante %d - %.2f\n",
           maior_estudante + 1, medias[maior_estudante]);

    return 0;
}
