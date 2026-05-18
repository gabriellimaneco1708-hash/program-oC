#include <stdio.h>

int main() {
    // ============================================
    // VARIÁVEIS DO TABULEIRO
    // ============================================
    // Tabuleiro 10x10 (10 linhas, 10 colunas)
    int tabuleiro[10][10];
    
    // Tamanho do navio (3 posições)
    const int tamanho_navio = 3;
    
    // Contadores para loops
    int linha, coluna;
    
    // ============================================
    // INICIALIZAR TABULEIRO COM 0 (ÁGUA)
    // ============================================
    for (linha = 0; linha < 10; linha++) {
        for (coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }
    
    // ============================================
    // DECLARAR OS NAVIOS (VETORES)
    // ============================================
    // Navio 1: Horizontal (3 posições)
    int navio_horizontal[3] = {3, 3, 3};
    
    // Navio 2: Vertical (3 posições)
    int navio_vertical[3] = {3, 3, 3};
    
    // ============================================
    // COORDENADAS DOS NAVIOS
    // ============================================
    // Navio horizontal: começa na linha 2, coluna 0
    int linha_inicial_h = 2;
    int coluna_inicial_h = 0;
    
    // Navio vertical: começa na linha 4, coluna 5
    int linha_inicial_v = 4;
    int coluna_inicial_v = 5;
    
    // ============================================
    // POSICIONAR NAVIO HORIZONTAL
    // ============================================
    // Copia cada posição do vetor para o tabuleiro
    for (coluna = 0; coluna < tamanho_navio; coluna++) {
        tabuleiro[linha_inicial_h][coluna_inicial_h + coluna] = navio_horizontal[coluna];
    }
    
    // ============================================
    // POSICIONAR NAVIO VERTICAL
    // ============================================
    // Copia cada posição do vetor para o tabuleiro
    for (linha = 0; linha < tamanho_navio; linha++) {
        tabuleiro[linha_inicial_v + linha][coluna_inicial_v] = navio_vertical[linha];
    }
    
    // ============================================
    // EXIBIR O TABULEIRO
    // ============================================
    // Imprime cabeçalho (números das colunas)
    printf("   0 1 2 3 4 5 6 7 8 9\n");
    printf("   -----------------\n");
    
    // Loop para mostrar cada linha
    for (linha = 0; linha < 10; linha++) {
        // Imprime número da linha
        printf("%d |", linha);
        
        // Loop para mostrar cada coluna
        for (coluna = 0; coluna < 10; coluna++) {
            // Imprime o valor com um espaço
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    
    return 0;
}