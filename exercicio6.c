#include <stdio.h>
#include <locale.h>

int main() {

     setlocale(LC_CTYPE, "");
    int opcao, mes, quantidade;
    float consumo, total, maior;
    FILE *arquivo;

    do {
        printf("\n--- Menu ---\n");
        printf("1- Cadastrar consumo\n");
        printf("2- Exibir relatorio\n");
        printf("3- Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            arquivo = fopen("energia.txt", "a");
            if (arquivo == NULL) {
                printf("Erro ao abrir ficheiro para cadastro.\n");
                continue;
            }
            printf("Mes (numero): ");
            scanf("%d", &mes);
            printf("Consumo em kWh: ");
            scanf("%f", &consumo);
            fprintf(arquivo, "%d %.2f\n", mes, consumo);
            fclose(arquivo);
            printf("Consumo registado!\n");
        }
        else if (opcao == 2) {
            arquivo = fopen("energia.txt", "r");
            if (arquivo == NULL) {
                printf("Nao existem dados registados.\n");
                continue;
            }

            quantidade = 0;
            total = 0.0;
            maior = -1.0;

            while (fscanf(arquivo, "%d %f", &mes, &consumo) == 2) {
                quantidade++;
                total += consumo;
                if (consumo > maior) {
                    maior = consumo;
                }
            }
            fclose(arquivo);

            if (quantidade > 0) {
                printf("\n--- Relatorio ---\n");
                printf("Registos: %d\n", quantidade);
                printf("Total de consumo: %.2f kWh\n", total);
                printf("Media de consumo: %.2f kWh\n", total / quantidade);
                printf("Maior consumo: %.2f kWh\n", maior);
            } else {
                printf("O ficheiro esta vazio.\n");
            }
        }
        else if (opcao != 3) {
            printf("Opcao invalida.\n");
        }

    } while (opcao != 3);

    return 0;
}
