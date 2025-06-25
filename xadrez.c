#include <stdio.h>

int main() {
    // Definindo o número de casas para cada movimento
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;

    // 1) Movimento da Torre: 5 casas para a direita
    // Usando o laço 'for'
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // 2) Movimento do Bispo: 5 casas na diagonal para cima e à direita
    // Usando o laço 'while'
    printf("Movimento do Bispo (5 casas na diagonal para cima e direita):\n");
    int casas_andadas_bispo = 0;
    while (casas_andadas_bispo < casas_bispo) {
        printf("Cima, Direita\n");
        casas_andadas_bispo++;
    }
    printf("\n");

    // 3) Movimento da Rainha: 8 casas para a esquerda
    // Usando o laço 'do-while'
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int casas_andadas_rainha = 0;
    do {
        printf("Esquerda\n");
        casas_andadas_rainha++;
    } while (casas_andadas_rainha < casas_rainha);

    return 0;
}
