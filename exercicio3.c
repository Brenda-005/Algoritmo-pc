#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int semanas;
    float meses;

    printf("Qual a quantidade de semanas de gestação? ");
    scanf("%d", &semanas);

    meses = (semanas * 7) / 30.0;

    printf("Tempo de gestação aproximado: %.1f meses\n", meses);

    return 0;
}
