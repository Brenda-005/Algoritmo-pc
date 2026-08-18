#include<stdio.h>
#define PI 3.14159
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float perimetro, raio;
    printf("Qual a medida do raio? ");
    scanf("%f", &raio);
    perimetro = 2 * PI * raio;
    printf("O perímetro da circunferência é:%.2f", perimetro);
    return 0;
}
