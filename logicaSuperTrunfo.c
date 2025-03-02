#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {         
    char R;
    char Codigoc1[20] = "R01";
    char Cidade1[20] = "Rio_de_janeiro";
    int populacao = 674800; 
    float Area1 = 1200.25;
    float Pib1 = 3000.50;
    int Turismo = 30;
    float Pibpc1 = Pib1 / populacao;
    float Dp1 = populacao / Area1;

    char S;
    char codigoc[20] = "SP01";
    char cidade2[20] = "Sao_Paulo";
    int Populacao = 12325000;
    float Area2 = 1521.11;
    float pib = 699.28;
    int Pt = 50;
    float Pibpc2 = pib / Populacao;
    float Dp2 = Populacao / Area2;

    int Menu;

    printf("***Super Trunfo***\n\n");
    printf("1. Iniciar\n");
    printf("2. Ver regras\n");
    printf("3. Ver as cartas\n");
    printf("4. Sair\n");
    scanf("%d", &Menu);

    switch(Menu) {
        case 1:
            printf("Escolha uma carta\n 1. Carta1\n 2. Carta2\n");
            scanf("%d", &Menu);
            switch(Menu) {
                case 1:
                    printf("Escolha um atributo: 1.População %d\n 2.Area %f\n 3.Pib %f\n 4.Pontos turisticos %d\n 5.Densidade Populacional %f\n 6.Pib per capita %f\n", populacao, Area1, Pib1, Turismo, Dp1, Pibpc1);
                    scanf("%d", &Menu);
                    break;
                case 2:
                    printf("Escolha um atributo: 1.População %d\n 2.Area %f\n 3.Pib %f\n 4.Pontos turisticos %d\n 5.Densidade Populacional %f\n 6.Pib per capita %f\n", Populacao, Area2, pib, Pt, Dp2, Pibpc2);
                    scanf("%d", &Menu);
                    break;
                default:
                    printf("Opção invalida\n");
                    break;
            }

            switch(Menu) {
                case 1:
                    if (populacao > Populacao) {
                        printf("Carta1 vence\n");
                    } else {
                        printf("Carta2 vence\n");
                    }
                    break;
                case 2:
                    if (Area1 > Area2) {
                        printf("Carta1 vence\n");
                    } else {
                        printf("Carta2 vence\n");
                    }
                    break;
                case 3:
                    if (Pib1 > pib) {
                        printf("Carta1 vence\n");
                    } else {
                        printf("Carta2 vence\n");
                    }
                    break;
                case 4:
                    if (Turismo > Pt) {
                        printf("Carta1 vence\n");
                    } else {
                        printf("Carta2 vence\n");
                    }
                    break;
                case 5:
                    if (Dp1 < Dp2) {
                        printf("Carta1 vence\n");
                    } else {
                        printf("Carta2 vence\n");
                    }
                    break;
                case 6:
                    if (Pibpc1 > Pibpc2) {
                        printf("Carta1 vence\n");
                    } else {
                        printf("Carta2 vence\n");
                    }
                    break;
                default:
                    printf("Opção invalida\n");
                    break;
            }
            break;
        case 2:
            printf("As regras são: A carta com maior valor vence, exceto densidade populacional, onde o menor valor vence.\n");
            break;
        case 3:
            printf("Estado: %c\n, Codigo_da_carta: %s\n, Cidade: %s\n Populaçao: %d habitantes\n ,Area: %f km\n, Pib: %f\n, Pontos_Turisticos: %d\n ", R, Codigoc1, Cidade1, populacao, Area1, Pib1, Turismo);
            printf("Densidade Populacional: %f\n", Dp1);
            printf("Pib per capita: %f\n\n", Pibpc1);

            printf("Estado: %c\n, Codigo_da_carta: %s\n, Cidade: %s\n, Populaçao: %d habitantes\n, Area: %f km\n, Pib: %f\n, Pontos_Turisticos: %d ", S, codigoc, cidade2, Populacao, Area2, pib, Pt);
            printf("Densidade Populacional: %f\n", Dp2);
            printf("Pib per capita: %f\n\n", Pibpc2);
            break;
        case 4:
            printf("Saindo****\n");
            break;
        default:
            printf("Opção invalida\n");
            break;
    }

    return 0;
}