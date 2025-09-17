#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //Declaração de variáveis para a Carta 1
  char estado1;
  char codigoCarta1[4];
  char nomeCidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  float densidadePopulacional1;
  float pibPerCapita1;

  //Declaração de variáveis para a Carta 2
  char estado2;
  char codigoCarta2[4];
  char nomeCidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapita2;

  // Área para entrada de dados
  //CADASTRO DA CARTA 1
  printf("---- Cadastro da Carta 1 ----\n");
  printf ("Digite o estado (A a H): ");
  scanf("%c", &estado1);

  printf("Digite o codigo da carta (ex: A01): ");
  scanf("%s", codigoCarta1);

  printf("Digite o nome da cidade: ");
  scanf("%[^\n]", nomeCidade1);

  printf("Digite a populacao: ");
  scanf("%d", &populacao1);

  printf("Digite a area em km2: ");
  scanf("%f", &area1);

  printf("Digite o PIB em bilhoes de reais: ");
  scanf("%f", &pib1);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos1);

  // Calcula a densidade populacional
  densidadePopulacional1 = (float)populacao1 / area1;

  // Calcula o PIB per capita
  pibPerCapita1 = (float)pib1 / populacao1;

  printf("\n");

  //CADASTRO DA CARTA 2
  printf("---- Cadastro da Carta 2 ----\n");
  printf ("Digite o estado (A a H): ");
  scanf("%c", &estado2);

  printf("Digite o codigo da carta (ex: B01): ");
  scanf("%s", codigoCarta2);

  printf("Digite o nome da cidade: ");
  scanf("%[^\n]", nomeCidade2);

  printf("Digite a populacao: ");
  scanf("%d", &populacao2);

  printf("Digite a area em km2: ");
  scanf("%f", &area2);

  printf("Digite o PIB em bilhoes de reais: ");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos2);

  // Calcula a densidade populacional
  densidadePopulacional2 = (float)populacao2 / area2;

  // Calcula o PIB per capita
    pibPerCapita2 = (float)pib2 / populacao2;

  printf("\n");

  // ---- IRFORMAÇÕES DA CARTA 1 ----
  printf("---- Iformacoes da Carta 1 ----\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigoCarta1);
  printf("Nome da Cidade: %\n", nomeCidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("Numero de pontos Turisticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
  printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

  printf("\n");

  // ---- IRFORMAÇÕES DA CARTA 2 ----
  printf("---- Iformacoes da Carta 2 ----\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigoCarta2);
  printf("Nome da Cidade: %\n", nomeCidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("Numero de pontos Turisticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    
return 0;
} 
