#include <stdio.h>

int main() {
    char estado1[3], codigo1[5], nome1[50];
    long long pop1;
    float area1, pib1, dens1, pibcap1;
    int turismo1;

    char estado2[3], codigo2[5], nome2[50];
    long long pop2;
    float area2, pib2, dens2, pibcap2;
    int turismo2;

    printf("=== CADASTRO CARTA 1 ===\n");
    printf("Estado: "); scanf("%s", estado1);
    printf("Código da carta: "); scanf("%s", codigo1);
    printf("Nome da cidade: "); scanf("%s", nome1);
    printf("População: "); scanf("%lld", &pop1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (bilhões de reais): "); scanf("%f", &pib1);
    printf("Número de pontos turísticos: "); scanf("%d", &turismo1);

    dens1 = (float)pop1 / area1;
    pibcap1 = (pib1 * 1000000000.0f) / (float)pop1;

    printf("\n=== CADASTRO CARTA 2 ===\n");
    printf("Estado: "); scanf("%s", estado2);
    printf("Código da carta: "); scanf("%s", codigo2);
    printf("Nome da cidade: "); scanf("%s", nome2);
    printf("População: "); scanf("%lld", &pop2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (bilhões de reais): "); scanf("%f", &pib2);
    printf("Número de pontos turísticos: "); scanf("%d", &turismo2);

    dens2 = (float)pop2 / area2;
    pibcap2 = (pib2 * 1000000000.0f) / (float)pop2;

    printf("\n");

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lld\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", dens1);
    printf("PIB per Capita: %.2f reais\n\n", pibcap1);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lld\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", dens2);
    printf("PIB per Capita: %.2f reais\n", pibcap2);

    return 0;
}
