#include<stdio.h>
#include<locale.h>

int main()
{
     setlocale(LC_CTYPE, "");
     float area, perimetro, comprimento, largura;
     printf("Qual o comprimento do jardim? ");
     scanf("%f", &comprimento);
     printf("Qual a largura do jardim? ");
     scanf("%f", &largura);
     perimetro = 2 * (comprimento + largura);
     area = comprimento * largura;
     printf("Perímetro do jardim: %.2f", perimetro);
     printf("Área do jardim: %.2f", area);
     return 0;
}
