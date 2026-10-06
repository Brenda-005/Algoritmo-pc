#include<stdio.h>
#include<locale.h>
#define TAM 10

int main ()
{
    setlocale(LC_CTYPE, "");
    int i, contador=0;
    float salarios[TAM];
    float soma=0, media, maior_salario;

    for(i=0; i<TAM; i++){
        printf("Digite o salário do funcinário %d: ", (i+i));
        scanf("%f", &salarios[i]);
        soma += salarios[i];
    }
    media = soma/TAM;
    for(i=0; i<TAM; i++){
        if(salarios[i] > media)
            contador++; //conta os salários acima da média
        if(salarios[i]>maior_salario){
                maior_salario+salarios[i]; //indice do maior salário
                achei_maior = i; //indice do maior salário
        }

    }

    printf("Média dos salários: R$ %.2f\n", media;)
    printf("Quantidade de salários acima da média: %d\n", contador);
    printf("Maior salário: R$ %.2f\n", maior_salario);


    return 0;



}
