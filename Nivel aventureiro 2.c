#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
} Carta;

void exibirMenu() {
    printf("\n============================\n");
    printf("SUPER TRUNFO - ATTRIBUTES\n");
    printf("============================\n");
    printf("1 - Populacao\n");
    printf("2 - Area (km2)\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade (MENOR vence)\n");
    printf("============================\n");
    printf("Escolha (1-5): ");
}

int compararCartas(Carta c1, Carta c2, int atributo) {
    switch(atributo) {
        case 1: // Populacao - maior vence
            if (c1.populacao > c2.populacao) return 1;
            if (c1.populacao < c2.populacao) return 2;
            return 0;
        case 2: // Area - maior vence
            if (c1.area > c2.area) return 1;
            if (c1.area < c2.area) return 2;
            return 0;
        case 3: // PIB - maior vence
            if (c1.pib > c2.pib) return 1;
            if (c1.pib < c2.pib) return 2;
            return 0;
        case 4: // Pontos - maior vence
            if (c1.pontos_turisticos > c2.pontos_turisticos) return 1;
            if (c1.pontos_turisticos < c2.pontos_turisticos) return 2;
            return 0;
        case 5: // Densidade - MENOR vence
            if (c1.densidade < c2.densidade) return 1;
            if (c1.densidade > c2.densidade) return 2;
            return 0;
        default:
            printf("Invalido! Usando populacao.\n");
            return 1;
    }
}

void exibirResultado(Carta c1, Carta c2, int atributo, int vencedor) {
    printf("\n========== RESULTADO ==========\n");
    printf("Carta 1: %s\n", c1.nome);
    printf("Carta 2: %s\n", c2.nome);
    printf("Atributo: ");
    
    switch(atributo) {
        case 1: printf("POPULACAO\n"); break;
        case 2: printf("AREA\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("PONTOS TURISTICOS\n"); break;
        case 5: printf("DENSIDADE\n"); break;
        default: printf("POPULACAO\n"); break;
    }
    
    // Mostra valores
    switch(atributo) {
        case 1:
            printf("%s: %d\n", c1.nome, c1.populacao);
            printf("%s: %d\n", c2.nome, c2.populacao);
            break;
        case 2:
            printf("%s: %.0f km2\n", c1.nome, c1.area);
            printf("%s: %.0f km2\n", c2.nome, c2.area);
            break;
        case 3:
            printf("%s: $%.0f bi\n", c1.nome, c1.pib);
            printf("%s: $%.0f bi\n", c2.nome, c2.pib);
            break;
        case 4:
            printf("%s: %d pts\n", c1.nome, c1.pontos_turisticos);
            printf("%s: %d pts\n", c2.nome, c2.pontos_turisticos);
            break;
        case 5:
            printf("%s: %.1f hab/km2\n", c1.nome, c1.densidade);
            printf("%s: %.1f hab/km2\n", c2.nome, c2.densidade);
            break;
    }
    
    if (vencedor == 0)
        printf("RESULTADO: EMPATE!\n");
    else if (vencedor == 1)
        printf("VENCEDOR: %s!\n", c1.nome);
    else
        printf("VENCEDOR: %s!\n", c2.nome);
    
    printf("============================\n");
}

int main() {
    Carta brasil = {"Brasil", 214000000, 8515767.0, 1876.0, 25, 25.1};
    Carta japao  = {"Japao", 125000000, 377975.0, 4979.0, 35, 330.8};
    
    int opcao;
    
    printf("=== SUPER TRUNFO ===\n");
    printf("Brasil vs Japao\n\n");
    
    do {
        exibirMenu();
        scanf("%d", &opcao);
        
        int vencedor = compararCartas(brasil, japao, opcao);
        exibirResultado(brasil, japao, opcao, vencedor);
        
        printf("Jogar de novo? (1=SIM, 0=NAO): ");
        scanf("%d", &opcao);
    } while(opcao == 1);
    
    printf("FIM DE JOGO!\n");
    return 0;
}