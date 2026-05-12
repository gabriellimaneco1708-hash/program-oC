#include <stdio.h>

int main() {
    // ========================================
    // SUPER TRUNFO - CIDADES BRASILEIRAS
    // Nível Aventureiro: Densidade + PIB per Capita
    // ========================================

    // Dados da Carta 1
    char estado_carta1[3];      // "SP", "RJ", etc
    char codigo_carta1[5];      // "SP01", "RJ02"
    char nome_cidade1[50];      // "São Paulo"
    long long populacao_carta1; // 12.325.000 pessoas
    float area_carta1;          // 1521.11 km²
    float pib_carta1;           // 699.28 bilhões
    int pontos_turisticos1;     // 50 pontos
    float densidade_pop1;       // habitantes/km²
    float pib_per_capita1;      // reais por pessoa

    // Dados da Carta 2
    char estado_carta2[3];
    char codigo_carta2[5];
    char nome_cidade2[50];
    long long populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos2;
    float densidade_pop2;
    float pib_per_capita2;

    // ========================================
    // CADASTRO DA CARTA 1
    // ========================================
    printf("\n🔥 === CADASTRO CARTA 1 === 🔥\n");
    printf("Estado (ex: SP): ");        scanf("%s", estado_carta1);
    printf("Código (ex: SP01): ");      scanf("%s", codigo_carta1);
    printf("Nome da cidade: ");         scanf("%s", nome_cidade1);
    printf("População total: ");        scanf("%lld", &populacao_carta1);
    printf("Área em km²: ");            scanf("%f", &area_carta1);
    printf("PIB (em bilhões): ");       scanf("%f", &pib_carta1);
    printf("Pontos turísticos: ");      scanf("%d", &pontos_turisticos1);

    // Calcula densidade (pessoas/km²) e PIB per capita
    densidade_pop1 = (float)populacao_carta1 / area_carta1;
    pib_per_capita1 = (pib_carta1 * 1000000000.0f) / (float)populacao_carta1;

    // ========================================
    // CADASTRO DA CARTA 2
    // ========================================
    printf("\n🌟 === CADASTRO CARTA 2 === 🌟\n");
    printf("Estado (ex: RJ): ");        scanf("%s", estado_carta2);
    printf("Código (ex: RJ02): ");      scanf("%s", codigo_carta2);
    printf("Nome da cidade: ");         scanf("%s", nome_cidade2);
    printf("População total: ");        scanf("%lld", &populacao_carta2);
    printf("Área em km²: ");            scanf("%f", &area_carta2);
    printf("PIB (em bilhões): ");       scanf("%f", &pib_carta2);
    printf("Pontos turísticos: ");      scanf("%d", &pontos_turisticos2);

    // Calcula densidade (pessoas/km²) e PIB per capita
    densidade_pop2 = (float)populacao_carta2 / area_carta2;
    pib_per_capita2 = (pib_carta2 * 1000000000.0f) / (float)populacao_carta2;

    // ========================================
    // RESULTADO FINAL - PRONTO PRO PROFESSOR!
    // ========================================
    printf("\n🏆 === CARTAS PRONTAS PARA O SUPER TRUNFO! === 🏆\n\n");

    // Carta 1 Completa
    printf("📍 CARTA 1:\n");
    printf("Estado: %s\n", estado_carta1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lld habitantes\n", populacao_carta1);
    printf("Área: %.2f km²\n", area_carta1);
    printf("PIB: %.2f bilhões de reais\n", pib_carta1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
    printf("PIB per Capita: %.2f reais\n\n", pib_per_capita1);

    // Carta 2 Completa
    printf("📍 CARTA 2:\n");
    printf("Estado: %s\n", estado_carta2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lld habitantes\n", populacao_carta2);
    printf("Área: %.2f km²\n", area_carta2);
    printf("PIB: %.2f bilhões de reais\n", pib_carta2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    printf("\n✅ PRONTO! As cartas estão calculadas e formatadas!\n");

    return 0;
}