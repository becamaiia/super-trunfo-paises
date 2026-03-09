#include <stdio.h>
int main() {
  char estado[65];
char cidade[96];
int populacao;
float area;
float pib;
int pontosTuristicos;
printf("Cadastro de carta - Super Trunfo\n");
printf("Digite o estado: ");
scanf("%s", estado);
printf("Digite a cidade: ");
scanf("%s", cidade);
printf("Digite a populacao: ");
scanf("%d", &populacao);
printf("Digite a area: ");
scanf("%f", &area);
printf("Digite o PIB: ");
scanf("%f", &pib);
printf("Digite o numero de pontos turisticos: ");
scanf("%d", &pontosTuristicos);
printf("\nCarta cadastrada!\n");
  printf("Estado: %s\n", estado);
  printf("Cidade: %s\n", cidade);
return 0;
}
