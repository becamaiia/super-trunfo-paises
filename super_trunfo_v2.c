#include <stdio.h>
int main() {
  //Carta 1
char estado1[30];
char cidade1[30];
int populacao1;
float pib1;
float area1;
int pontos1;
//Carta 2
char estado2[30];
char cidade2[30];
int populacao2;
float pib2;
float area2;
int pontos2;
int opcao;
printf("=== Cadastro da Carta 1 ===\n");
printf("Estado: ");
scanf("%s", estado1);
printf("Cidade: ");
scanf("%s", cidade1);
printf("Populacao: ");
scanf("%d", &populacao1);
printf("PIB: ");
scanf("%f", &pib1);
printf("Area: ");
scanf("%f", &area1);
printf("Pontos turisticos: ");
scanf("%d", &pontos1);
  printf("\n=== Cadastro da Carta 2 ===\n");
printf("Estado: ");
scanf("%s", estado2);
  printf("Cidade: ");
  scanf("%s", cidade2);
  printf("Populacao: ");
  scanf("%d", &populacao2);
  printf("PIB: ");
  scanf("%f", &pib2);
  printf("Area: ");
  scanf("%f", &area2);
  printf("Pontos Turisticos: ");
  scanf("%d", &pontos2);
printf("\n=== Escolha o atributo para comparar ===\n");
printf("1 - Populacao\n");
printf("2 - PIB\n");
printf("3 - Area\n");
printf("4 - Pontos Turisticos\n");
scanf("%d", &opcao);
switch(opcao) {
case 1:
(populacao1 > populacao2) ?
  printf("Carta 1 venceu!\n"):
  printf("Carta 2 venceu!\n");
  break;
  case 2:
  (pib1 > pib2) ?
  printf("Carta 1 venceu!\n"):
  printf("Carta 2 venceu!\n");
  break;
case 3:
(area1 > area2) ?
  printf("Carta 1 venceu!\n"):
printf("Carta 2 venceu!\n");
break;
case 4:
(pontos1 > pontos2) ?
printf("Carta 1 venceu!\n"):
printf("Carta 2 venceu!\n");
break;
default:
printf("Opcao invalida!\n");
}
return 0;
}
