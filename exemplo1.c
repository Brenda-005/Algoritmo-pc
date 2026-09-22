#include<stdio.h>
#include<locale.h>n

int main()
{
    setlocale(LC_CTYPE, "");
    int i, num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("Tabuada do %d", num)0;

    for(i=0; i<=10; i++){
            printf("\n%d * %d + %d", num, i (num*i));
    }
    printf("\nAgora terminou!!! O i é igual a %d: ", i);

    return 0;
}
