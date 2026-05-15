#include <stdio.h>

int main() {
    // === VARIÁVEIS CARTA 1 ===
    char estado1;
    char codigo1[4];      // A01, B02...
    char nome[50];        
    int populacao1;
    float area1;
    float pib1;
    int pontosTur1;
    
    // === VARIÁVEIS CARTA 2 ===
    char estado2;
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTur2;
    
    printf("🏆 SUPER TRUNFO - CADASTRO 🏆\n\n");
    
    // === CARTA 1 ===
    printf("📄 CARTA 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);          
    
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);            
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome);           
    
    printf("População: ");
    scanf("%d", &populacao1);         
    
    printf("Área (km²): ");
    scanf("%f", &area1);
    
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTur1);
    
    printf("\n✅ Carta 1 OK!\n\n");
    
    // === CARTA 2 ===
    printf("📄 CARTA 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (km²): ");
    scanf("%f", &area2);
    
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTur2);
    
    // === MOSTRAR RESULTADO ===
    printf("\n🎉 RESULTADO:\n");
    printf("===========\n\n");
    
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bi\n", pib1);
    printf("Pontos: %d\n\n", pontosTur1);
    
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bi\n", pib2);
    printf("Pontos: %d\n", pontosTur2);
    
    return 0;
}