#include <stdio.h>
#include<locale.h>
#include <math.h>

int main() {

    setlocale(LC_CTYPE, "");
    float largura;
    float comprimento;
    float valorCaixa;
    float area;
    int caixas;
    float custoTotal;

    printf("Qual e a largura da area (em metros)? ");
    scanf("%f", &largura);

    printf("Qual e o comprimento da area em metros? ");
    scanf("%f", &comprimento);

    printf("Qual e o valor de cada caixa? ");
    scanf("%f", &valorCaixa);

    area = largura * comprimento;

    caixas = (int)ceil(area / 2.5);

    custoTotal = caixas * valorCaixa;

    printf("Area total a ser revestida: %.2f m2\n", area);
    printf("Quantidade de caixas necessarias: %d\n", caixas);
    printf("Custo total da compra: R$ %.2f\n", custoTotal);

    return 0;
}
