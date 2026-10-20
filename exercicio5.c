#include <stdio.h>
#include <locale.h>
int main() {

    setlocale(LC_CTYPE, "");
    int codigo, qtd_vendas = 0;
    float valor, total = 0.0, maior = -1.0;

    FILE *arquivo = fopen("vendas.txt", "r");

    if (arquivo == NULL) {
        printf("Ficheiro vendas.txt nao encontrado.\n");
        return 1;
    }

    while (fscanf(arquivo, "%d %f", &codigo, &valor) == 2) {
        qtd_vendas++;
        total += valor;
        if (valor > maior) {
            maior = valor;
        }
    }

    fclose(arquivo);

    if (qtd_vendas > 0) {
        printf("Quantidade de vendas: %d\n", qtd_vendas);
        printf("Total vendido: R$ %.2f\n", total);
        printf("Maior venda: R$ %.2f\n", maior);
    }

    return 0;
}
