#include <stdio.h>
#include<locale.h>

int main() {

    setlocale(LC_CTYPE, "");
    char cpf[12];
    float preco, total = 0;

    // Leitura do CPF
    printf("CPF: ");
    scanf("%11s", cpf);

    // Leitura dos preços
    do {
        printf("Preco: ");
        scanf("%f", &preco);

        if (preco != 0) {
            total += preco;
        }

    } while (preco != 0);

    // Exibição do resultado
    printf("CPF: %s\n", cpf);
    printf("Total da compra: R$ %.2f\n", total);

    return 0;
}
