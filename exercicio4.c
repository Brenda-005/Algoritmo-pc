#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_CTYPE, "");
    char rgm[12];
    float nota, soma = 0.0, maior = -1.0;
    int qtd_estudantes = 0, aprovados = 0;

    FILE *arquivo = fopen("notas.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o ficheiro de notas.\n");
        return 1;
    }

    // Lê os campos de acordo com a formatação (RGM como string e nota como float)
    while (fscanf(arquivo, "%11s %f", rgm, &nota) == 2) {
        qtd_estudantes++;
        soma += nota;

        if (nota > maior) {
            maior = nota;
        }

        if (nota >= 6.0) {
            aprovados++;
        }
    }

    fclose(arquivo);

    if (qtd_estudantes > 0) {
        printf("Estudantes: %d\n", qtd_estudantes);
        printf("Media da turma: %.2f\n", soma / qtd_estudantes);
        printf("Maior nota: %.2f\n", maior);
        printf("Quantidade de alunos aprovados: %d\n", aprovados);
    }

    return 0;
}
