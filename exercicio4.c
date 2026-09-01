#include<stdio.h>
#include<locale.h>
#include<math.h>

int main ()
{
    setlocale(LC_CTYPE, "");
    float peso, altura, imc;

    printf("Digite seu peso em kg: " );
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu imc é: %.2f\n", imc);

    if (imc < 20.0){
        printf("Você está na categoria Abaixo do peso.");
    }
    else if (imc < 25.0){
        printf("Você está na categoria Peso normal.");
    }
    else if (imc < 30.0){
        printf("Você está na categoria Sobrepeso.");
    }
    else if (imc < 40.0)
    {
        printf("Você está na categoria Obeso.");
    }
    else{
        printf("Você está na categoria Peso morbido.");
    }

    return 0;

}
