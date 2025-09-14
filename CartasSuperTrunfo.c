#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[2], estado2[2];
  char cidade[100], cidade2[100];
  char cod_carta[4], cod_carta2[4];
  int populacao, populacao2;
  int pontos_tur, pontos_tur2;
  float area, area2;
  float pib, pib2;

  // Explicação pro usuário.
  printf("Bem-vindo! Nesse programa voce deve preencher duas cartas do Super Trunfo.\n\n");
  printf("Serao apenas 7 informacoes simples para cada carta:\n");
  printf("\n1 - Estado: digite uma letra de 'A' a 'H' que ira representa UM dos oitos estados.");
  printf("\n2 - Codigo da carta: digite a letra do estado e adicione um numero de 01 a 04.");
  printf("\n 2.1 - Exemplo: A01, B02, etc.");
  printf("\n3 - Nome da Cidade: digite qualquer nome para sua cidade.");
  printf("\n 3.1 - Observação: se o nome tiver mais de uma palavra, use underline no lugar do espaço.");
  printf("\n       Exemplo: Rio_de_Janeiro");
  printf("\n4 - Populacao: digite o numero de habitantes que moram da cidade.");
  printf("\n5 - Area: digite a area (em quilômetros quadrados) da cidade.");
  printf("\n6 - PIB: digite o Produto Interno Bruto da cidade (em bilhões).");
  printf("\n 6.1 - Exemplo: 123.45, 678.90 (em bilhões)");
  printf("\n7 - Numero de Pontos Turisticos: digite a quantidade de pontos turisticos da cidade.\n\n");

  // Área para entrada de dados
  // Carta 1.
  printf("# CARTA 1 #\n");
  printf("# Estado: ");
  scanf("%s", estado);
  printf("# Codigo da Carta: ");
  scanf("%s", cod_carta);
  printf("# Nome da Cidade: ");
  scanf("%s", cidade);
  printf("# Populacao: ");
  scanf("%d", &populacao);
  printf("# Area: ");
  scanf("%f", &area);
  printf("# PIB: ");
  scanf("%f", &pib);
  printf("# Numeros de Pontos Turisticos: ");
  scanf("%d", &pontos_tur);

  // Carta 2.
  printf("\n# CARTA 2 #\n");
  printf("# Estado: ");
  scanf("%s", estado2);
  printf("# Codigo da Carta: ");
  scanf("%s", cod_carta2);
  printf("# Nome da Cidade: ");
  scanf("%s", cidade2);
  printf("# Populacao: ");
  scanf("%d", &populacao2);
  printf("# Area: ");
  scanf("%f", &area2);
  printf("# PIB: ");
  scanf("%f", &pib2);
  printf("# Numeros de Pontos Turisticos: ");
  scanf("%d", &pontos_tur2);

  // Área para exibição dos dados da cidade
  printf("\n- CARTA 1");
  printf("\n- Estado: %s", estado);
  printf("\n- Codigo da Carta: %s", cod_carta);
  printf("\n- Nome da Cidade: %s", cidade);
  printf("\n- Populacao: %d", populacao);
  printf("\n- Area: %.2f", area);
  printf("\n- PIB: %.2f bilhoes de reais", pib);
  printf("\n- Numeros de Pontos Turisticos: %d", pontos_tur);

  printf("\n\n- CARTA 2");
  printf("\n- Estado: %s", estado2);
  printf("\n- Codigo da Carta: %s", cod_carta2);
  printf("\n- Nome da Cidade: %s", cidade2);
  printf("\n- Populacao: %d", populacao2);
  printf("\n- Area: %.2f", area2);
  printf("\n- PIB: %.2f bilhoes de reais", pib2);
  printf("\n- Numeros de Pontos Turisticos: %d", pontos_tur2);

return 0;
} 
