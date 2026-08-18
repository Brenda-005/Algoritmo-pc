#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    float peso, agua;
    printf("Digite a massa corporal (em kg): ");
    scanf("%f", &peso);
    agua = peso * 35 / 1000;
    printf("Quantidade aproximada de agua recomendada por dia: %.1f litros\n", agua);

    return 0;

}
