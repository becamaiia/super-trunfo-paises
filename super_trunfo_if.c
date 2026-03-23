#include <stdio.h>
int main() {
  
  // Carta 1
  char cidade1[30] = "SaoPaulo";
  char estado1[5] = "SP";
  int populacao1 = 12300000;
  float area1 = 1521.0;
  float pib1 = 699.28;

  // Carta 2
  char cidade2[30] = "RiodeJaneiro";
  char estado2[5] = "RJ";
  int populacao2 = 6000000;
  float area2 = 1200.0;
  float pib2 = 300.50;

  // Cálculos
  float densidade1 = populacao1 / area1;
  float densidade2 = populacao2 / area2;

  float pibPerCapita1 = pib1 / populacao1;
  float pibPerCapita2 = pib2 / populacao2;

 // Comparação (POPULAÇÂO)
 printf("Comparacao de cartas (Atributo: Populacao)\n\n");

 printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
 printf("Carta 2 - %s (%s): %d\n\n", cidade2, estado2, populacao2);

 if (populacao1 > populacao2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
       } else {
          printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
      }

      return 0;

 }
       
