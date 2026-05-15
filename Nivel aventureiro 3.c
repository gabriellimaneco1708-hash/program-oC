/**
 * Movimentação de Peças no Tabuleiro de Xadrez
 * Inclui: Torre, Bispo, Rainha e Cavalo
 * O Cavalo move-se em "L": 2 casas para baixo, 1 casa para a esquerda
 */

#include <stdio.h>

int main() {

    /* ==================== TORRE ==================== */
    // A Torre se move em linha reta (horizontal ou vertical)
    int torreMovimentos = 5;
    int i = 0;

    printf("=== Torre ===\n");
    // Loop while para mover a Torre para a direita
    while (i < torreMovimentos) {
        printf("Direita\n");
        i++;
    }

    /* ==================== BISPO ==================== */
    // O Bispo se move na diagonal
    int bispoMovimentos = 5;

    printf("\n=== Bispo ===\n");
    // Loop do-while para mover o Bispo na diagonal (cima-direita)
    int j = 0;
    do {
        printf("Cima\n");
        printf("Direita\n");
        j++;
    } while (j < bispoMovimentos);

    /* ==================== RAINHA ==================== */
    // A Rainha combina movimentos da Torre e do Bispo
    int rainhaMovimentos = 8;

    printf("\n=== Rainha ===\n");
    // Loop for para mover a Rainha para a esquerda
    for (int k = 0; k < rainhaMovimentos; k++) {
        printf("Esquerda\n");
    }

    /* ==================== CAVALO ==================== */
    // O Cavalo se move em "L":
    //   - 2 casas para baixo  (loop for)
    //   - 1 casa para a esquerda (loop while dentro do for)

    // Constantes que definem o movimento do Cavalo
    int cavaloBaixo    = 2; // número de casas para baixo
    int cavaloEsquerda = 1; // número de casas para a esquerda

    printf("\n=== Cavalo ===\n");

    // Loop externo (for): controla as 2 casas para baixo
    for (int passo = 0; passo < cavaloBaixo; passo++) {
        printf("Baixo\n");

        // Loop interno (while): na última iteração do for,
        // executa o movimento para a esquerda
        int esq = 0;
        while (esq < cavaloEsquerda && passo == cavaloBaixo - 1) {
            printf("Esquerda\n");
            esq++;
        }
    }

    return 0;
}