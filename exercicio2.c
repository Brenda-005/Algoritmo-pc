#include<stdio.h>
#include<locale.h>
#include<math.h>

int main ()
{
    setlocale(LC_CTYPE, "");
    int nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);

   media = (nota1 + nota2)/2;

   if (media >= 6){
    printf("Parabéns! Você foi aprovado com media: %d", media);
   } else {
    printf("Você foi reprovado!");
   }

    return 0;
}
