#include <stdio.h>
#include <locale.h>
#define PRODUTOS 3
#define DIAS 4

int main()
{
    setlocale(LC_CTYPE, "");
    int vendas[PRODUTOS][DIAS];
    int i, j;
    int totalProduto;
    int totalGeral = 0;

    // Leitura das vendas
    for(i = 0; i < PRODUTOS; i++)
    {
        for(j = 0; j < DIAS; j++)
        {
            printf("Digite a quantidade do %dº produto no %dº dia: ",
                   i + 1, j + 1);

            scanf("%d", &vendas[i][j]);
        }
    }

    // Calcula o total de cada produto
    for(i = 0; i < PRODUTOS; i++)
    {
        totalProduto = 0;

        for(j = 0; j < DIAS; j++)
        {
            totalProduto += vendas[i][j];
        }

        printf("Produto %d: %d unidades\n", i + 1, totalProduto);

        totalGeral += totalProduto;
    }

    // Exibe o total geral
    printf("Total geral: %d unidades\n", totalGeral);

    return 0;
}
