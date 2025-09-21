#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Necessário para usar acentos no console

// Define a estrutura para armazenar todos os dados de uma carta
typedef struct {
    // Dados inseridos pelo usuário
    char estado;
    char codigo[4];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    // Dados calculados pelo programa
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;

int main() {
    // Configura o programa para aceitar caracteres do português (acentos, ç)
    setlocale(LC_ALL, "Portuguese");

    // Declara as duas cartas que serão comparadas
    Carta carta1, carta2;

    // --- Início da Coleta de Dados da Carta 1 ---
    printf("--- Inserir dados da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado); // Espaço antes de %c para consumir newlines
    getchar(); // Limpa o buffer de entrada

    printf("Código da Carta (ex: A01): ");
    scanf("%3s", carta1.codigo);
    getchar();

    printf("Nome da Cidade: ");
    scanf("%49[^\n]", carta1.nome_cidade); // Lê até encontrar um ENTER
    getchar();

    printf("População: ");
    scanf("%d", &carta1.populacao);
    getchar();

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    getchar();

    printf("PIB (em milhões): ");
    scanf("%f", &carta1.pib);
    getchar();

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    getchar();
    printf("\n");

    // --- Início da Coleta de Dados da Carta 2 ---
    printf("--- Inserir dados da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);
    getchar();

    printf("Código da Carta (ex: B02): ");
    scanf("%3s", carta2.codigo);
    getchar();

    printf("Nome da Cidade: ");
    scanf("%49[^\n]", carta2.nome_cidade);
    getchar();

    printf("População: ");
    scanf("%d", &carta2.populacao);
    getchar();

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    getchar();

    printf("PIB (em milhões): ");
    scanf("%f", &carta2.pib);
    getchar();

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    getchar();

    // --- Cálculos para a Carta 1 ---
    carta1.densidade_populacional = (carta1.area > 0) ? (float)carta1.populacao / carta1.area : 0;
    carta1.pib_per_capita = (carta1.populacao > 0) ? carta1.pib / (float)carta1.populacao : 0;
    carta1.super_poder = (float)carta1.populacao + carta1.area + carta1.pib +
                         (float)carta1.pontos_turisticos + carta1.pib_per_capita +
                         (1.0f / carta1.densidade_populacional);

    // --- Cálculos para a Carta 2 ---
    carta2.densidade_populacional = (carta2.area > 0) ? (float)carta2.populacao / carta2.area : 0;
    carta2.pib_per_capita = (carta2.populacao > 0) ? carta2.pib / (float)carta2.populacao : 0;
    carta2.super_poder = (float)carta2.populacao + carta2.area + carta2.pib +
                         (float)carta2.pontos_turisticos + carta2.pib_per_capita +
                         (1.0f / carta2.densidade_populacional);


    // --- Exibição dos Dados Completos das Cartas ---
    printf("\n\n--- Resumo das Cartas Inseridas ---\n");
    printf("----------------------------------------\n");
    printf("               CARTA 1\n");
    printf("----------------------------------------\n");
    printf("Cidade: %s (%s - %c)\n", carta1.nome_cidade, carta1.codigo, carta1.estado);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: R$ %.2f milhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontos_turisticos);
    printf("-> Densidade Populacional: %.2f hab/km²\n", carta1.densidade_populacional);
    printf("-> PIB per Capita: R$ %.2f milhões/hab\n", carta1.pib_per_capita);

    printf("----------------------------------------\n");
    printf("               CARTA 2\n");
    printf("----------------------------------------\n");
    printf("Cidade: %s (%s - %c)\n", carta2.nome_cidade, carta2.codigo, carta2.estado);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: R$ %.2f milhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontos_turisticos);
    printf("-> Densidade Populacional: %.2f hab/km²\n", carta2.densidade_populacional);
    printf("-> PIB per Capita: R$ %.2f milhões/hab\n", carta2.pib_per_capita);
    printf("----------------------------------------\n");


    // --- Exibição dos Resultados das Comparações ---
    printf("\n\n--- Resultados da Comparação ---\n");

    // Compara População (maior vence)
    int c1_vence = carta1.populacao > carta2.populacao;
    printf("População: Carta %d venceu (%d)\n", c1_vence ? 1 : 2, c1_vence);

    // Compara Área (maior vence)
    c1_vence = carta1.area > carta2.area;
    printf("Área: Carta %d venceu (%d)\n", c1_vence ? 1 : 2, c1_vence);

    // Compara PIB (maior vence)
    c1_vence = carta1.pib > carta2.pib;
    printf("PIB: Carta %d venceu (%d)\n", c1_vence ? 1 : 2, c1_vence);

    // Compara Pontos Turísticos (maior vence)
    c1_vence = carta1.pontos_turisticos > carta2.pontos_turisticos;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", c1_vence ? 1 : 2, c1_vence);

    // Compara Densidade Populacional (MENOR vence)
    c1_vence = carta1.densidade_populacional < carta2.densidade_populacional;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", c1_vence ? 1 : 2, c1_vence);

    // Compara PIB per Capita (maior vence)
    c1_vence = carta1.pib_per_capita > carta2.pib_per_capita;
    printf("PIB per Capita: Carta %d venceu (%d)\n", c1_vence ? 1 : 2, c1_vence);

    // Compara Super Poder (maior vence)
    c1_vence = carta1.super_poder > carta2.super_poder;
    printf("Super Poder: Carta %d venceu (%d)\n", c1_vence ? 1 : 2, c1_vence);

    return 0;
}