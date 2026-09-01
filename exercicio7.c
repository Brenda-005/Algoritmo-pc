#include <stdio.h>
#include<locale.h>
#include <math.h>

int main() {

    setlocale(LC_CTYPE, "");
    float primeiro, segundo, terceiro, quarto, media;

    printf("Digite o primeiro valor: ");
    scanf("%f", &primeiro);

    printf("Digite o segundo valor: ");
    scanf("%f", &segundo);

    printf("Digite o terceiro valor: ");
    scanf("%f", &terceiro);

    printf("Digite o quarto valor: ");
    scanf("%f", &quarto);

    media = (primeiro + segundo + terceiro + quarto)/4;
    printf("A média aritmética é %.2f", media);

    return 0;
}
