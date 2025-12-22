#include <stdio.h>

int main() {
  // Carta 1
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  float densidade1;
  float pibPerCapita1;

  // Carta 2
  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidade2;
  float pibPerCapita2;

  char atributo[20];

  // Entrada dos dados da Carta 1
  printf("=== Cadastro da Carta 1 ===\n");
  printf("Digite o Estado (uma letra de A-H): ");
  scanf(" %c", &estado1);

  printf("Digite o Código da Carta (ex: A01): ");
  scanf("%s", codigo1);

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", cidade1);

  printf("Digite a População: ");
  scanf("%d", &populacao1);

  printf("Digite a Área (km²): ");
  scanf("%f", &area1);

  printf("Digite o PIB (em bilhões de reais): ");
  scanf("%f", &pib1);

  printf("Digite o Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos1);

  // Entrada dos dados da Carta 2
  printf("\n=== Cadastro da Carta 2 ===\n");
  printf("Digite o Estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Digite o Código da Carta (ex: B02): ");
  scanf("%s", codigo2);

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", cidade2);

  printf("Digite a População: ");
  scanf("%d", &populacao2);

  printf("Digite a Área (km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB (em bilhões de reais): ");
  scanf("%f", &pib2);

  printf("Digite o Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos2);

  // Exibição dos dados
  printf("\n=== Carta 1 ===\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

  densidade1 = populacao1 / area1;
  printf("Densidade Demográfica: %.2f pessoas/km²\n", densidade1);

  pibPerCapita1 = pib1 / populacao1;
  printf("PIB per capita: R$ %.2f \n", pibPerCapita1);

  printf("\n=== Carta 2 ===\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

  densidade2 = populacao2 / area2;
  printf("Densidade Demográfica: %.1f pessoas/k \n: ", densidade2);

  pibPerCapita2 = pib2 / populacao2;
  printf("PIB per capita: R$ %.2f \n", pibPerCapita2);

  atributo = "população"

  printf("O atributo escolhido para comparação foi \"%s\"\n", atributo);

  if (atributo == "populacao") {
    printf("Carta 1 - %s: %i \n", estado1, populacao1);
    printf("Carta 2 - %s: %i\n", estado2, populacao2);

    if (populacao1 > populacao2) {
      printf("Carta 1 (%s) venceu!", estado1);
    }else{
      printf("Carta 2 (%s) venceu!", estado2);
    }
  }

  if (atributo == "area") {

    printf("Carta 1 - %s: %i \n", estado1, area1);
    printf("Carta 2 - %s: %i\n", estado2, area2);

     if (area1 > area2) {
      printf("Carta 1 (%s) venceu!",
        estado1);
    } else {
      printf("Carta 2 (%s) venceu!",
             estado2);
    }
  }

  if (atributo == "pib") {

    printf("Carta 1 - %s: %i \n", estado1, pib1);
    printf("Carta 2 - %s: %i\n", estado2, pib2);

    if (pib1 > pib2) {
      printf("Carta 1 (%s) venceu!",
        estado1);
    } else {
      printf("Carta 2 (%s) venceu!",
             estado2);
    }
  }

  



      return 0;
}
