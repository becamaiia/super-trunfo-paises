#include <stdio.h>
int main() {
  int opcao1, opcao2
  float valorAtributo1_carta1, valorAtributo1_carta2;
  float valorAtributo2_carta1, valorAtributo2_carta2;
  float somaCarta1, somaCarta2;

  // ---------- Carta1 ----------
  char pais1[30] = "Tailandia";
  int populacao1 = 70000000;
  float area1 = 513120.0;
  float pib1 = 543.5;
  int pontos1 = 60;
  float densidade1 = populacao1 / area1;

  // ---------- Carta2 ----------
  char pais2[30] = "Armenia";
  int populacao2 = 3000000;
  float area21 = 29743.0;
  float pib2 = 19.5;
  int pontos2 = 25;
  float densidade2 = populacao2 / area2;

  
  // ---------- Menu 1 ----------
  printf("=== Escolha o PRIMEIRO atributo===\n");
  printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade\n");
  printf("Opcao: ");
