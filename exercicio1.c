#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_CTYPE, "");
    int numero, i;
    // Abre o ficheiro em modo "w" para reescrever/criar uma nova tabuada
    FILE *arquivo = fopen("tabuada.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o ficheiro.\n");
        return 1;
    }

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    for (i = 0; i <= 10; i++) {
        fprintf(arquivo, "%d * %d = %d\n", numero, i, numero * i);
    }

    fclose(arquivo);
    printf("Tabuada guardada com sucesso!\n");

    return 0;
}
