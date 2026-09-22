#include <stdio.h>
#include<locale.h>

int main() {

    setlocale(LC_CTYPE, "");
    int opcao;
    float total = 0;

    do {
        printf("\nCafeteria Analia\n\n");
        printf("[1] X-Burger (R$ 18.90)\n");
        printf("[2] Batata frita (R$ 9.50)\n");
        printf("[3] Suco (R$ 10.00)\n");
        printf("[4] Pudim (R$ 12.00)\n");
        printf("[0] Finalizar compra\n");

        printf("\nDigite uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                total = total + 18.90;
                printf("Produto adicionado!\n");
                printf("Subtotal: R$ %.2f\n", total);
                break;

            case 2:
                total = total + 9.50;
                printf("Produto adicionado!\n");
                printf("Subtotal: R$ %.2f\n", total);
                break;

            case 3:
                total = total + 10.00;
                printf("Produto adicionado!\n");
                printf("Subtotal: R$ %.2f\n", total);
                break;

            case 4:
                total = total + 12.00;
                printf("Produto adicionado!\n");
                printf("Subtotal: R$ %.2f\n", total);
                break;

            case 0:
                printf("\nCompra finalizada!\n");
                printf("Valor total: R$ %.2f\n", total);
                break;

            default:
                printf("Codigo invalido! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
