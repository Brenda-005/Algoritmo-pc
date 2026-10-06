#include <stdio.h>
#include <locale.h>
#define TAM 8

int main()
{
    setlocale(LC_CTYPE, "");

    int i, contador = 0;
    float valores[TAM];
    float soma = 0, media;

    // Leitura dos 8 valores
    for(i = 0; i < TAM; i++)
    {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%f", &valores[i]);

        soma += valores[i];
    }

    // Calcula a média
    media = soma / TAM;

    // Conta quantos valores estão acima da média
    for(i = 0; i < TAM; i++)
    {
        if(valores[i] > media)
        {
            contador++;
        }
    }

    // Exibe os resultados
    printf("\nMédia: %.2f\n", media);
    printf("Valores acima da média: %d\n", contador);

    return 0;
}

