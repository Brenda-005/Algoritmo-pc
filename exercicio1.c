#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_CTYPE, "");

    float manha, tarde, total;
    printf("Quantidade recebida pela manhâ? ");
    scanf("%f", &manha);

    printf("Quantidade recebida pela tarde? ");
    scanf("%f", &tarde);

    total = manha + tarde;
    printf("Total de produtos recebidos no dia: %f", total);

    return 0;

}
