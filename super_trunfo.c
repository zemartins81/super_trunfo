#include <stdio.h>

int main() {
  char estado1[] = "SC", estado2[] = "RS";
  char codigo1[] = "A01", codigo2[] = "B02";
  char cidade1[] = "Florianópolis", cidade2[] = "porto Alegre";
  unsigned long int populacao1 = 12325000, populacao2 = 6748000;
  float area1 = 1521.11, area2 = 1200.25;
  float pib1 = 700.0, pib2 = 350.0;
  int pontosTuristicos1 = 50, pontosTuristicos2 = 30;
  float densidade1, densidade2;
  float pibPerCapita1, pibPerCapita2;
  float superPoder1, superPoder2;

  densidade1 = (float)populacao1 / area1;
  densidade2 = (float)populacao2 / area2;

  pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
  pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

  superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
  superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

  printf("\n=== Carta 1 ===\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
  printf("Super Poder: %.2f\n", superPoder1);

  printf("\n=== Carta 2 ===\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
  printf("Super Poder: %.2f\n", superPoder2);

  int opcao1, opcao2;
  float valor1_c1 = 0, valor1_c2 = 0;
  float valor2_c1 = 0, valor2_c2 = 0;
  float soma1, soma2;
  char nomeAtributo1[30] = "";
  char nomeAtributo2[30] = "";

  printf("\n=== Escolha do Primeiro Atributo ===\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Pontos Turísticos\n");
  printf("5. Densidade Populacional\n");
  printf("6. PIB per Capita\n");
  printf("7. Super Poder\n");
  printf("Escolha o primeiro atributo: ");
  scanf("%d", &opcao1);

  switch (opcao1) {
    case 1:
      valor1_c1 = (float)populacao1;
      valor1_c2 = (float)populacao2;
      sprintf(nomeAtributo1, "População");
      break;
    case 2:
      valor1_c1 = area1;
      valor1_c2 = area2;
      sprintf(nomeAtributo1, "Área");
      break;
    case 3:
      valor1_c1 = pib1;
      valor1_c2 = pib2;
      sprintf(nomeAtributo1, "PIB");
      break;
    case 4:
      valor1_c1 = (float)pontosTuristicos1;
      valor1_c2 = (float)pontosTuristicos2;
      sprintf(nomeAtributo1, "Pontos Turísticos");
      break;
    case 5:
      valor1_c1 = densidade1;
      valor1_c2 = densidade2;
      sprintf(nomeAtributo1, "Densidade Populacional");
      break;
    case 6:
      valor1_c1 = pibPerCapita1;
      valor1_c2 = pibPerCapita2;
      sprintf(nomeAtributo1, "PIB per Capita");
      break;
    case 7:
      valor1_c1 = superPoder1;
      valor1_c2 = superPoder2;
      sprintf(nomeAtributo1, "Super Poder");
      break;
    default:
      printf("Opção inválida!\n");
      return 1;
  }

  printf("\n=== Escolha do Segundo Atributo ===\n");
  printf("1. População%s\n", opcao1 == 1 ? " (já escolhido)" : "");
  printf("2. Área%s\n", opcao1 == 2 ? " (já escolhido)" : "");
  printf("3. PIB%s\n", opcao1 == 3 ? " (já escolhido)" : "");
  printf("4. Pontos Turísticos%s\n", opcao1 == 4 ? " (já escolhido)" : "");
  printf("5. Densidade Populacional%s\n", opcao1 == 5 ? " (já escolhido)" : "");
  printf("6. PIB per Capita%s\n", opcao1 == 6 ? "já escolhido)" : "");
  printf("7. Super Poder%s\n", opcao1 == 7 ? " (já escolhido)" : "");
  printf("Escolha o segundo atributo: ");
  scanf("%d", &opcao2);

  if (opcao2 == opcao1) {
    printf("Erro: Você não pode escolher o mesmo atributo duas vezes!\n");
    return 1;
  }

  switch (opcao2) {
    case 1:
      valor2_c1 = (float)populacao1;
      valor2_c2 = (float)populacao2;
      sprintf(nomeAtributo2, "População");
      break;
    case 2:
      valor2_c1 = area1;
      valor2_c2 = area2;
      sprintf(nomeAtributo2, "Área");
      break;
    case 3:
      valor2_c1 = pib1;
      valor2_c2 = pib2;
      sprintf(nomeAtributo2, "PIB");
      break;
    case 4:
      valor2_c1 = (float)pontosTuristicos1;
      valor2_c2 = (float)pontosTuristicos2;
      sprintf(nomeAtributo2, "Pontos Turísticos");
      break;
    case 5:
      valor2_c1 = densidade1;
      valor2_c2 = densidade2;
      sprintf(nomeAtributo2, "Densidade Populacional");
      break;
    case 6:
      valor2_c1 = pibPerCapita1;
      valor2_c2 = pibPerCapita2;
      sprintf(nomeAtributo2, "PIB per Capita");
      break;
    case 7:
      valor2_c1 = superPoder1;
      valor2_c2 = superPoder2;
      sprintf(nomeAtributo2, "Super Poder");
      break;
    default:
      printf("Opção inválida!\n");
      return 1;
  }

  int vitorias1 = 0, vitorias2 = 0;

  printf("\n=== Resultado da Comparação ===\n");
  printf("Carta 1: %s\n", cidade1);
  printf("Carta 2: %s\n", cidade2);
  printf("\nAtributos escolhidos: %s e %s\n", nomeAtributo1, nomeAtributo2);

  printf("\n%s:\n", nomeAtributo1);
  printf("  %s: %.2f\n", cidade1, valor1_c1);
  printf("  %s: %.2f\n", cidade2, valor1_c2);
  if (opcao1 == 5) {
    if (valor1_c1 < valor1_c2) {
      printf("  Vencedor: %s\n", cidade1);
      vitorias1++;
    } else if (valor1_c2 < valor1_c1) {
      printf("  Vencedor: %s\n", cidade2);
      vitorias2++;
    } else {
      printf("  Vencedor: Empate\n");
    }
  } else {
    if (valor1_c1 > valor1_c2) {
      printf("  Vencedor: %s\n", cidade1);
      vitorias1++;
    } else if (valor1_c2 > valor1_c1) {
      printf("  Vencedor: %s\n", cidade2);
      vitorias2++;
    } else {
      printf("  Vencedor: Empate\n");
    }
  }

  printf("\n%s:\n", nomeAtributo2);
  printf("  %s: %.2f\n", cidade1, valor2_c1);
  printf("  %s: %.2f\n", cidade2, valor2_c2);
  if (opcao2 == 5) {
    if (valor2_c1 < valor2_c2) {
      printf("  Vencedor: %s\n", cidade1);
      vitorias1++;
    } else if (valor2_c2 < valor2_c1) {
      printf("  Vencedor: %s\n", cidade2);
      vitorias2++;
    } else {
      printf("  Vencedor: Empate\n");
    }
  } else {
    if (valor2_c1 > valor2_c2) {
      printf("  Vencedor: %s\n", cidade1);
      vitorias1++;
    } else if (valor2_c2 > valor2_c1) {
      printf("  Vencedor: %s\n", cidade2);
      vitorias2++;
    } else {
      printf("  Vencedor: Empate\n");
    }
  }

  soma1 = valor1_c1 + valor2_c1;
  soma2 = valor1_c2 + valor2_c2;

  printf("\nSoma dos atributos:\n");
  printf("  %s: %.2f\n", cidade1, soma1);
  printf("  %s: %.2f\n", cidade2, soma2);
  if (soma1 > soma2) {
    printf("  Vencedor: %s\n", cidade1);
    vitorias1++;
  } else if (soma2 > soma1) {
    printf("  Vencedor: %s\n", cidade2);
    vitorias2++;
  } else {
    printf("  Vencedor: Empate\n");
  }

  printf("\nPlacar Final:\n");
  printf("  %s: %d vitória(s)\n", cidade1, vitorias1);
  printf("  %s: %d vitória(s)\n", cidade2, vitorias2);

  if (vitorias1 > vitorias2) {
    printf("\nResultado Final: %s venceu!\n", cidade1);
  } else if (vitorias2 > vitorias1) {
    printf("\nResultado Final: %s venceu!\n", cidade2);
  } else {
    printf("\nResultado Final: Empate!\n");
  }

  return 0;
}
