#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {         
    
    
char R;
char Codigoc1[20] ="R01";
char Cidade1[20] ="Rio_de_janeiro";
int populacao =674800; 
float Area1 =1200.25;
float Pib1 =3000.50;
int Turismo =30;
float Pibpc1 = Pib1 / populacao;
float Dp1 =  populacao / Area1;


char S;
char codigoc[20] ="SP01";
char cidade2[20] ="Sao_Paulo";
int Populacao =12325000;
float Area2 =1521.11;
float pib =699.28;
int Pt = 50;
float Pibpc2 =pib / Populacao;
float Dp2 = Populacao / Area2;

int Menu;



printf("***Super Trunfo***\n\n");
printf("1. Iniciar\n");
printf("2. Ver regras\n");
printf("3. Ver as cartas\n");
printf("4. Sair\n");
scanf("%d", &Menu);



switch(Menu){
case 1:
printf("escolha entre carta1 e carta2\n");
printf("1.Rio de janeiro\n 2.São Paulo\n");
break;
switch(Menu){
    case 1:
    printf("Escolha um atributo: \n 1.População\n 2.Area\n 3.Pib\n 4.Pontos turisticos\n 5.Densidade Populacional\n 6.Pib per capita");
    
}

break;
case 2:
printf("As regras são:A carta com maior valor vence menos densidade populacional a qual e o menor valor que vence");
break;
case 3:
printf("Estado: %c\n, Codigo_da_carta: %s\n, Cidade: %s\n Populaçao: %d habitantes\n ,Area: %f km\n, Pib: %f\n, Pontos_Turisticos: %d\n ", R, Codigoc1, Cidade1, populacao, Area1, Pib1, Turismo);
printf("Densidade Populacional: %f\n", Dp1);
printf("Pib per capita: %f\n\n", Pibpc1);

printf("Estado: %c\n, Codigo_da_carta: %s\n, Cidade: %s\n, Populaçao: %d habitantes\n, Area: %f km\n, Pib: %f\n, Pontos_Turisticos: %d ", S, codigoc, cidade2, populacao, Area2, pib, Pt);
printf("Densidade Populacional: %f\n", Dp2);
printf("Pib per capita: %f\n\n", Pibpc2);
break;
case 4:
printf("Saindo****");
break;
default:
printf("Opção invalida");


}




}