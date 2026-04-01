#include <stdio.h>

int main() {

// -------------- Cartas pré-definidas --------------
// Carta 1
char pais1[30] = "Brasil";
int populacao1 = 212600000;
float area1 = 8515767.0;
float pib1 = 1444.7; // em bilhões
int pontos1 = 70;
float densidade1 = populacao1 / area1;

// Carta 2
char pais2[30] = "Argentina";
int populacao2 = 44940000;
float area2 = 2780400.0;
float pib2 = 518.5; // em bilhões
int pontos2 = 45;
float densidade2 = populacao2 / area2;

// -------------- Menu --------------
int opcao;

printf("=== Super Trunfo - Comparacao de Cartas ===\n");
printf("Escolha o atributo para comparar:\n");
printf("1 - Populacao\n");
printf("2 - Area\n");
printf("3 - PIB\n");
printf("4 - Pontos Turisticos\n");
printf("5 - Densidade demográfica\n");
printf("Opcao: ");
scanf("%d", &opcao);

printf("\nComparacao de cartas\n");

switch(opcao) {
case 1: // Populacao
   printf("%s: %d\n", pais1, populacao1);
   printf("%s: %d\n", pais2, populacao2);
   if (populacao1 > populacao2)
       printf("Resultado: %s venceu!\n", pais1);
   else if (populacao2 > populacao1)
       printf("Resultado: %s venceu!\n", pais2);
   else
       printf("Empate!\n");
   break;

case 2: // Area
printf("%s: %.2f\n", pais1, area1);
   printf("%s: %.2f\n", pais2, area2);
   if (area1 > area2)
       printf("Resultado: %s venceu!\n", pais1);
   else if (area2 > area1)
       printf("Resultado: %s venceu!\n", pais2);
   else
       printf("Empate!\n");
   break;

case 3: // PIB
printf("%s: %.2f\n", pais1, pib1);
   printf("%s: %.2f\n", pais2, pib2);
   if (pib1 > pib2)
       printf("Resultado: %s venceu!\n", pais1);
   else if (pib2 > pib1)
       printf("Resultado: %s venceu!\n", pais2);
   else
       printf("Empate!\n");
   break;

case 4: // Pontos Turisticos
printf("%s: %d\n", pais1, pontos1);
   printf("%s: %d\n", pais2, pontos2);
   if (pontos1 > pontos2)
       printf("Resultado: %s venceu!\n", pais1);
   else if (pontos2 > pontos1)
       printf("Resultado: %s venceu!\n", pais2);
   else
       printf("Empate!\n");
   break;

case 5: // Densidade Demográfica (menor vence)
printf("%s: %.2f\n", pais1, densidade1);
   printf("%s: %.2f\n", pais2, densidade2);
   if (densidade1 < densidade2)
       printf("Resultado: %s venceu!\n", pais1);
   else if (densidade2 < densidade1)
       printf("Resultado: %s venceu!\n", pais2);
   else
       printf("Empate!\n");
   break;

default:
   printf("Opcao invalida!\n");
   break;
 }
     return 0;
}
