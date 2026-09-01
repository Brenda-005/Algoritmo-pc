#include <stdio.h>
#include<locale.h>
#include <math.h>

int main() {

    setlocale(LC_CTYPE, "");
    int x1, y1, x2, y2, distancia;

    printf("Digite a coordenada x do 1º ponto: ");
    scanf("%d", &x1);

    printf(" Digite a coordenada y do 1º ponto: ");
    scanf("%d", &y1);

    printf("Digite a coordenada x do 2º ponto: ");
    scanf("%d", &x2);

    printf("Digite a coordenada y do 2º ponto: ");
    scanf("%d", &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distância entre os pontos é %d\n", distancia);

    return 0;
}
