#include <stdio.h>
#include<locale.h>

int main() {

    setlocale(LC_CTYPE, "");
    float nota, soma = 0, media, maior;

    for (int i = 1; i <= 5; i++) {
        printf("Digite a nota do %dº estudante: ", i);
        scanf("%f", &nota);

        soma += nota;

        // Na primeira nota, ela será considerada a maior
        if (i == 1 || nota > maior) {
            maior = nota;
        }
    }

    media = soma / 5;

    printf("Media da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);

    return 0;
}
