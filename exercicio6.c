#include <stdio.h>
#include <locale.h>
#include <locale.h>
#define TAM 7

int main()
{
    setlocale(LC_ALL, "");
    float temperaturas[TAM];
    float soma = 0, media;
    float maior, menor;
    int i, acimaMedia = 0;

    // Leitura das temperaturas
    for (i = 0; i < TAM; i++)
    {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temperaturas[i]);

        soma += temperaturas[i];
    }

    // Calcula a média
    media = soma / TAM;

    // Inicializa maior e menor
    maior = temperaturas[0];
    menor = temperaturas[0];

    // Procura maior, menor e dias acima da média
    for (i = 0; i < TAM; i++)
    {
        if (temperaturas[i] > maior)
        {
            maior = temperaturas[i];
        }

        if (temperaturas[i] < menor)
        {
            menor = temperaturas[i];
        }

        if (temperaturas[i] > media)
        {
            acimaMedia++;
        }
    }

    // Exibe os resultados
    printf("\nMédia: %.2f °C\n", media);
    printf("Maior temperatura: %.2f °C\n", maior);
    printf("Menor temperatura: %.2f °C\n", menor);
    printf("Dias acima da média: %d\n", acimaMedia);

    return 0;
}
