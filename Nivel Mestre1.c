#include <stdio.h>

int main() {
    // Carta 1
    char estado1[3], codigo1[5], nome1[50];
    unsigned long int pop1;
    float area1, pib1, dens1, pibcap1, superpoder1;
    int turismo1;

    // Carta 2
    char estado2[3], codigo2[5], nome2[50];
    unsigned long int pop2;
    float area2, pib2, dens2, pibcap2, superpoder2;
    int turismo2;

    // Cadastro Carta 1
    printf("=== CADASTRO CARTA 1 ===\n");
    printf("Estado: "); scanf("%s", estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Cidade: "); scanf("%s", nome1);
    printf("População: "); scanf("%lu", &pop1);
    printf("Área km²: "); scanf("%f", &area1);
    printf("PIB bilhões: "); scanf("%f", &pib1);
    printf("Turismo: "); scanf("%d", &turismo1);

    // Cálculos Carta 1
    dens1 = (float)pop1 / area1;
    pibcap1 = (pib1 * 1000000000.0f) / (float)pop1;
    superpoder1 = (float)pop1 + area1 + pib1 + turismo1 + pibcap1 + (1.0f / dens1);

    // Cadastro Carta 2
    printf("\n=== CADASTRO CARTA 2 ===\n");
    printf("Estado: "); scanf("%s", estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Cidade: "); scanf("%s", nome2);
    printf("População: "); scanf("%lu", &pop2);
    printf("Área km²: "); scanf("%f", &area2);
    printf("PIB bilhões: "); scanf("%f", &pib2);
    printf("Turismo: "); scanf("%d", &turismo2);

    // Cálculos Carta 2
    dens2 = (float)pop2 / area2;
    pibcap2 = (pib2 * 1000000000.0f) / (float)pop2;
    superpoder2 = (float)pop2 + area2 + pib2 + turismo2 + pibcap2 + (1.0f / dens2);

    // === BATALHA SUPER TRUNFO ===
    printf("\n🏆 COMPARAÇÃO DE CARTAS 🏆\n");
    printf("==========================\n");

    // População (maior vence)
    printf("População: ");
    if (pop1 > pop2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Área (maior vence)
    printf("Área: ");
    if (area1 > area2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // PIB (maior vence)
    printf("PIB: ");
    if (pib1 > pib2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Pontos Turísticos (maior vence)
    printf("Pontos Turísticos: ");
    if (turismo1 > turismo2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Densidade (MENOR vence!)
    printf("Densidade Populacional: ");
    if (dens1 < dens2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // PIB per Capita (maior vence)
    printf("PIB per Capita: ");
    if (pibcap1 > pibcap2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Super Poder (maior vence)
    printf("Super Poder: ");
    if (superpoder1 > superpoder2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    return 0;
}