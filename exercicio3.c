#include <stdio.h>
#include<locale.h>

int main() {

    setlocale(LC_CTYPE, "");
    int primeiro, segundo;
    int soma, subtracao, multiplicacao;

    printf("Digite o primeiro número: ");
    scanf("%d", &primeiro);

    printf("Digite o segundo número: ");
    scanf("%d", &segundo);

    soma = primeiro + segundo;
    subtracao = primeiro - segundo;
    multiplicacao = primeiro * segundo;

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);

    return 0;
}
