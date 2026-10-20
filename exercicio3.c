#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_CTYPE, "");
    char linha[100];
    // O modo "r" (read) é utilizado para leitura do ficheiro
    FILE *arquivo = fopen("tabuada.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o ficheiro. Certifique-se que foi criado.\n");
        return 1;
    }

    // fgets() lê a linha do ficheiro até ao limite de caracteres ou nova linha
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }

    fclose(arquivo);
    return 0;
}
