#include <stdio.h>
#include <stdlib.h>

// Função pra mostrar o tabuleiro bonitinho
void mostrarTabuleiro(int tabuleiro[10][10]) {
    printf("\n   0 1 2 3 4 5 6 7 8 9\n");  // números das colunas
    printf("  ---------------------\n");
    
    for (int i = 0; i < 10; i++) {
        printf("%d |", i);  // número da linha
        for (int j = 0; j < 10; j++) {
            if (tabuleiro[i][j] == 0) {
                printf("~ ");  // água
            } else if (tabuleiro[i][j] == 3) {
                printf("N ");  // navio
            } else if (tabuleiro[i][j] == 5) {
                printf("X ");  // área afetada!
            } else {
                printf("%d ", tabuleiro[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
}

// Função pra criar MATRIZ CONE (aponta pra baixo)
void criarCone(int matriz[5][5]) {
    // Zera tudo primeiro
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = 0;  // tudo fora da área
        }
    }
    
    // Agora desenha o cone
    // Linha 0 (topo) - só 1 ponto no meio
    matriz[0][2] = 1;
    
    // Linha 1 - 3 pontos
    matriz[1][1] = 1;
    matriz[1][2] = 1;
    matriz[1][3] = 1;
    
    // Linha 2 - 5 pontos (base)
    matriz[2][0] = 1;
    matriz[2][1] = 1;
    matriz[2][2] = 1;
    matriz[2][3] = 1;
    matriz[2][4] = 1;
    
    // Linha 3 - 5 pontos
    matriz[3][0] = 1;
    matriz[3][1] = 1;
    matriz[3][2] = 1;
    matriz[3][3] = 1;
    matriz[3][4] = 1;
    
    // Linha 4 - 5 pontos
    matriz[4][0] = 1;
    matriz[4][1] = 1;
    matriz[4][2] = 1;
    matriz[4][3] = 1;
    matriz[4][4] = 1;
}

// Função pra criar MATRIZ CRUZ
void criarCruz(int matriz[5][5]) {
    // Zera tudo
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = 0;
        }
    }
    
    // Desenha cruz
    // Linha do meio (horizontal)
    matriz[2][0] = 1;
    matriz[2][1] = 1;
    matriz[2][2] = 1;
    matriz[2][3] = 1;
    matriz[2][4] = 1;
    
    // Coluna do meio (vertical)
    matriz[0][2] = 1;
    matriz[1][2] = 1;
    matriz[2][2] = 1;
    matriz[3][2] = 1;
    matriz[4][2] = 1;
}

// Função pra criar MATRIZ OCTAEDRO (formato de losango)
void criarOctaedro(int matriz[5][5]) {
    // Zera tudo
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = 0;
        }
    }
    
    // Desenha losango (octaedro visto de frente)
    // Aumenta linha por linha até o meio, depois diminui
    // Linha 0 - 1 ponto (topo)
    matriz[0][2] = 1;
    
    // Linha 1 - 3 pontos
    matriz[1][1] = 1;
    matriz[1][2] = 1;
    matriz[1][3] = 1;
    
    // Linha 2 - 5 pontos (meio)
    matriz[2][0] = 1;
    matriz[2][1] = 1;
    matriz[2][2] = 1;
    matriz[2][3] = 1;
    matriz[2][4] = 1;
    
    // Linha 3 - 3 pontos
    matriz[3][1] = 1;
    matriz[3][2] = 1;
    matriz[3][3] = 1;
    
    // Linha 4 - 1 ponto (embaixo)
    matriz[4][2] = 1;
}

// Função pra colar a habilidade no tabuleiro
void aplicarHabilidade(int tabuleiro[10][10], int habilidade[5][5], 
                     int linhaOrigem, int colunaOrigem) {
    
    // A matriz de habilidade é 5x5, então o centro tá na posição [2][2]
    int offset = 2;  // deslocamento do centro
    
    // Loop pra percorrer a matriz de habilidade
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            // Se essa posição da habilidade tá ativa (valor 1)
            if (habilidade[i][j] == 1) {
                // Calcula onde fica no tabuleiro
                int linhaTab = linhaOrigem - offset + i;
                int colunaTab = colunaOrigem - offset + j;
                
                // Verifica se tá dentro do tabuleiro (0 a 9)
                if (linhaTab >= 0 && linhaTab < 10 && 
                    colunaTab >= 0 && colunaTab < 10) {
                    
                    // Só marca se não tiver navio (3)
                    // Ai não sobrescreve o navio!
                    if (tabuleiro[linhaTab][colunaTab] != 3) {
                        tabuleiro[linhaTab][colunaTab] = 5;  // área afetada!
                    }
                }
            }
        }
    }
}

int main() {
    // ============ CRIA O TABULEIRO 10x10 ============
    int tabuleiro[10][10];
    
    // Inicializa tudo com água (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    
    // ============ COLOCA ALGUNS NAVIOS (valor 3) ============
    // Navio 1
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    
    // Navio 2
    tabuleiro[5][6] = 3;
    tabuleiro[6][6] = 3;
    
    // Navio 3
    tabuleiro[7][1] = 3;
    tabuleiro[8][1] = 3;
    tabuleiro[9][1] = 3;
    
    // ============ CRIA AS HABILIDADES ============
    int cone[5][5];
    int cruz[5][5];
    int octaedro[5][5];
    
    criarCone(cone);
    criarCruz(cruz);
    criarOctaedro(octaedro);
    
    // ============ TESTA SÓ O CONE PRIMEIRO ============
    printf("=== TABULEIRO SÓ COM NAVIOS ===\n");
    mostrarTabuleiro(tabuleiro);
    
    // Cria tabuleiro novo pra testar habilidade
    int tabuleiroComHabilidade[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiroComHabilidade[i][j] = tabuleiro[i][j];
        }
    }
    
    // Aplica habilidade CONE na posição (3, 3)
    printf("=== HABILIDADE CONE (origem linha=3, coluna=3) ===\n");
    aplicarHabilidade(tabuleiroComHabilidade, cone, 3, 3);
    mostrarTabuleiro(tabuleiroComHabilidade);
    
    // ============ TESTA A CRUZ ============
    // Copia tabuleiro de novo
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiroComHabilidade[i][j] = tabuleiro[i][j];
        }
    }
    
    printf("=== HABILIDADE CRUZ (origem linha=5, coluna=5) ===\n");
    aplicarHabilidade(tabuleiroComHabilidade, cruz, 5, 5);
    mostrarTabuleiro(tabuleiroComHabilidade);
    
    // ============ TESTA O OCTAEDRO ============
    // Copia tabuleiro de novo
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiroComHabilidade[i][j] = tabuleiro[i][j];
        }
    }
    
    printf("=== HABILIDADE OCTAEDRO (origem linha=4, coluna=4) ===\n");
    aplicarHabilidade(tabuleiroComHabilidade, octaedro, 4, 4);
    mostrarTabuleiro(tabuleiroComHabilidade);
    
    return 0;
}