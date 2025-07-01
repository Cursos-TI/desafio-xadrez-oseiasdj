#include <stdio.h>

// Função recursiva para mover a Torre para a Direita
void moverTorreDireita(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1); // chamada recursiva
}

// Função recursiva para mover a Rainha para a Esquerda
void moverRainhaEsquerda(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainhaEsquerda(casas - 1); // chamada recursiva
}

// Função recursiva para mover o Bispo na diagonal (Cima, Direita)
void moverBispoDiagonal(int casas) {
    if (casas <= 0) return;
    printf("Cima, Direita\n");
    moverBispoDiagonal(casas - 1); // chamada recursiva
}

// Função com loops aninhados complexos para movimento do Cavalo
void moverCavalo() {
    // O cavalo se move em "L" para cima e direita (2 para cima, 1 para a direita)
    // Loop simula posições de origem de onde o movimento é possível
    printf("Movimentos do Cavalo (em L: 2 cima, 1 direita):\n");

    const int linhas = 8;
    const int colunas = 8;

    for (int linha = 2; linha < linhas; linha++) { // precisa ter pelo menos 2 linhas acima
        for (int coluna = 0; coluna < colunas - 1; coluna++) { // pelo menos 1 à direita
            if (linha % 2 == 0 && coluna % 2 == 0) continue; // simula limitação de movimentos
            printf("Cavalo: 2 para Cima, 1 para Direita (de [%d,%d] para [%d,%d])\n",
                   linha, coluna, linha - 2, coluna + 1);
            if ((linha + coluna) % 3 == 0) break; // condição arbitrária para demonstrar uso de break
        }
    }
    printf("\n");
}

// Função adicional com loops aninhados para o Bispo (vertical e horizontal)
void moverBispoComLoops(int casas) {
    printf("Movimento do Bispo com Loops Aninhados (diagonal Cima, Direita):\n");

    for (int i = 0; i < casas; i++) { // vertical
        for (int j = 0; j < 1; j++) { // horizontal sempre 1 passo à direita por casa
            printf("Cima, Direita\n");
        }
    }
    printf("\n");
}

int main() {
    // Número de casas que cada peça deve andar
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;

    // 1) Movimento da Torre usando recursividade
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorreDireita(casas_torre);
    printf("\n");

    // 2) Movimento do Bispo com recursividade
    printf("Movimento do Bispo (5 casas na diagonal - recursivo):\n");
    moverBispoDiagonal(casas_bispo);
    printf("\n");

    // 3) Movimento do Bispo com loops aninhados
    moverBispoComLoops(casas_bispo);

    // 4) Movimento da Rainha com recursividade
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainhaEsquerda(casas_rainha);
    printf("\n");

    // 5) Movimento do Cavalo com loops aninhados complexos
    moverCavalo();

    return 0;
}