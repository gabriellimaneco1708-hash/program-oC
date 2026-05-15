#include <stdio.h>

// Programa principal que simula movimentos das peças de xadrez
int main() {
    
    // ========================================================================
    // MOVIMENTO DA TORRE - Usa estrutura FOR
    // A Torre move-se 5 casas para a DIREITA (linha reta horizontal)
    // ========================================================================
    printf("=== MOVIMENTO DA TORRE (5 casas para a DIREITA) ===\n");
    for(int casa = 1; casa <= 5; casa++) {
        printf("Direita\n");
    }
    printf("\n");
    
    // ========================================================================
    // MOVIMENTO DO BISPO - Usa estrutura WHILE
    // O Bispo move-se 5 casas na diagonal CIMA e DIREITA
    // ========================================================================
    printf("=== MOVIMENTO DO BISPO (5 casas diagonal CIMA DIREITA) ===\n");
    int casas_bispo = 1;
    while(casas_bispo <= 5) {
        printf("Cima Direita\n");
        casas_bispo++;
    }
    printf("\n");
    
    // ========================================================================
    // MOVIMENTO DA RAINHA - Usa estrutura DO-WHILE
    // A Rainha move-se 8 casas para a ESQUERDA (linha reta horizontal)
    // ========================================================================
    printf("=== MOVIMENTO DA RAINHA (8 casas para a ESQUERDA) ===\n");
    int casas_rainha = 1;
    do {
        printf("Esquerda\n");
        casas_rainha++;
    } while(casas_rainha <= 8);
    
    printf("\n=== SIMULAÇÃO CONCLUÍDA ===\n");
    
    return 0;
}