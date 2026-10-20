#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_CTYPE, "");
    int qtd_registros, i;
    char dia[20];
    float consumo;

    // O modo "a" (append) é usado para não apagar os registos anteriores
    FILE *arquivo = fopen("consumo.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o ficheiro!\n");
        return 1;
    }

    printf("Digite a quantidade de registros: ");
    scanf("%d", &qtd_registros);

    for (i = 0; i < qtd_registros; i++) {
        printf("Dia: ");
        scanf("%s", dia);
        printf("Consumo: ");
        scanf("%f", &consumo);

        fprintf(arquivo, "%s %.2f\n", dia, consumo);
    }

    fclose(arquivo);
    return 0;
}
