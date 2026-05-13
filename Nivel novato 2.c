#include <stdio.h>
#include <string.h>

// Estrutura pra representar uma carta do Super Trunfo
typedef struct {
    char estado[50];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;  // Calculada depois
    float pib_per_capita;          // Calculada depois
} Carta;

// Função pra calcular densidade populacional (pop / area)
void calcularDensidade(Carta *carta) {
    if (carta->area > 0) {
        carta->densidade_populacional = (float)carta->populacao / carta->area;
    } else {
        carta->densidade_populacional = 0;
    }
}

// Função pra calcular PIB per capita (pib / pop)
void calcularPibPerCapita(Carta *carta) {
    if (carta->populacao > 0) {
        carta->pib_per_capita = carta->pib / (float)carta->populacao;
    } else {
        carta->pib_per_capita = 0;
    }
}

// Função principal de comparação (escolhi POPULAÇÃO como atributo)
void compararCartas(Carta carta1, Carta carta2) {
    printf("\n=== COMPARAÇÃO DE CARTAS (Atributo: População) ===\n\n");
    
    // Mostra dados da Carta 1
    printf("Carta 1 - %s (%s): %d habitantes\n", 
           carta1.cidade, carta1.estado, carta1.populacao);
    
    // Mostra dados da Carta 2
    printf("Carta 2 - %s (%s): %d habitantes\n", 
           carta2.cidade, carta2.estado, carta2.populacao);
    
    // Lógica de comparação: maior população vence
    if (carta1.populacao > carta2.populacao) {
        printf("\n🏆 RESULTADO: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("\n🏆 RESULTADO: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("\n🤝 EMPATE! As duas cartas têm a mesma população.\n");
    }
    
    printf("==============================================\n");
}

int main() {
    // Carta 1: São Paulo (dados reais aproximados)
    Carta sp = {"São Paulo", "SP001", "São Paulo", 12300000, 1521.11, 699999.0, 15};
    
    // Carta 2: Rio de Janeiro (dados reais aproximados)
    Carta rj = {"Rio de Janeiro", "RJ001", "Rio de Janeiro", 6748000, 1267.0, 352000.0, 20};
    
    // Calcula os atributos derivados pra cada carta
    calcularDensidade(&sp);
    calcularPibPerCapita(&sp);
    calcularDensidade(&rj);
    calcularPibPerCapita(&rj);
    
    // Mostra infos completas das cartas (pra deixar bonitinho)
    printf("=== DADOS DAS CARTAS CADASTRADAS ===\n");
    printf("Carta 1: %s (%s)\n", sp.cidade, sp.estado);
    printf("  População: %d\n", sp.populacao);
    printf("  Área: %.2f km²\n", sp.area);
    printf("  PIB: R$ %.0f\n", sp.pib);
    printf("  Pontos turísticos: %d\n", sp.pontos_turisticos);
    printf("  Densidade: %.0f hab/km²\n", sp.densidade_populacional);
    printf("  PIB per capita: R$ %.2f\n\n", sp.pib_per_capita);
    
    printf("Carta 2: %s (%s)\n", rj.cidade, rj.estado);
    printf("  População: %d\n", rj.populacao);
    printf("  Área: %.2f km²\n", rj.area);
    printf("  PIB: R$ %.0f\n", rj.pib);
    printf("  Pontos turísticos: %d\n", rj.pontos_turisticos);
    printf("  Densidade: %.0f hab/km²\n", rj.densidade_populacional);
    printf("  PIB per capita: R$ %.2f\n\n", rj.pib_per_capita);
    
    // Faz a comparação!
    compararCartas(sp, rj);
    
    printf("\nPrograma finalizado! 👋\n");
    return 0;
}