#include <stdio.h>

typedef struct {
    char nome[30];
    float pop;
    float area;
    float pib;
    float dens;
} Carta;

int main() {
    Carta cartas[5] = {
        {"Brasil", 212000000, 8515767, 1878000000, 25},
        {"Japao", 126000000, 377975, 4970000000, 333},
        {"Russia", 146000000, 17098246, 1694000000, 8.5},
        {"India", 1380000000, 3287263, 2875000000, 420},
        {"Australia", 26000000, 7692024, 1328000000, 3.4}
    };

    printf("Escolha carta 1 (0-4): ");
    int c1;
    scanf("%d", &c1);

    printf("Escolha carta 2 (0-4): ");
    int c2;
    scanf("%d", &c2);

    printf("Atributo 1 (1=pop 2=area 3=pib 4=dens): ");
    int a1;
    scanf("%d", &a1);

    printf("Atributo 2 (diferente do 1): ");
    int a2;
    scanf("%d", &a2);

    Carta p1 = cartas[c1];
    Carta p2 = cartas[c2];

    float v11 = a1==1 ? p1.pop : a1==2 ? p1.area : a1==3 ? p1.pib : p1.dens;
    float v12 = a2==1 ? p1.pop : a2==2 ? p1.area : a2==3 ? p1.pib : p1.dens;
    float v21 = a1==1 ? p2.pop : a1==2 ? p2.area : a1==3 ? p2.pib : p2.dens;
    float v22 = a2==1 ? p2.pop : a2==2 ? p2.area : a2==3 ? p2.pib : p2.dens;

    float soma1 = v11 + v12;
    float soma2 = v21 + v22;

    printf("\n%s vs %s\n", p1.nome, p2.nome);
    printf("Attr%d: %.0f vs %.0f\n", a1, v11, v21);
    printf("Attr%d: %.0f vs %.0f\n", a2, v12, v22);
    printf("Soma: %.0f vs %.0f\n", soma1, soma2);

    if(soma1 > soma2) {
        printf("%s VENCEU!\n", p1.nome);
    } else if(soma2 > soma1) {
        printf("%s VENCEU!\n", p2.nome);
    } else {
        printf("EMPATE!\n");
    }

    return 0;
}