#include<stdio.h>
#include<locale.h>
#include<math.h>

int main ()
{
    setlocale(LC_CTYPE, "");
    float valorCompra, taxa, totalFinanciado, valorParcela;
    int parcelas;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    printf("Digite a quantidade de parcelas (2, 4, 6 ou 8): ");
    scanf("%d", &parcelas);

    switch (parcelas) {
        case 2:
            taxa = 3;
            break;

        case 4:
            taxa = 7;
            break;

        case 6:
            taxa = 9;
            break;

        case 8:
            taxa = 12;
            break;

        default:
            printf("Quantidade de parcelas invalida!!!\n");
            return 0;
    }

    totalFinanciado = valorCompra + (valorCompra * taxa / 100);
    valorParcela = totalFinanciado / parcelas;

    printf("\nValor total financiado: R$ %.2f\n", totalFinanciado);
    printf("Valor de cada parcela: R$ %.2f\n", valorParcela);

    return 0;
}
