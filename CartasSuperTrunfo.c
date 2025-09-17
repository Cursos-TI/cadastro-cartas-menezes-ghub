#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Lógica de cálculo - Densidade Populacional e PIB per Capita
// Objetivo: No nível Aventureiro, você expandirá o sistema para incluir propriedades calculadas, permitindo uma análise mais detalhada das cartas.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[2], estado2[2];
  char cidade[100], cidade2[100];
  char cod_carta[4], cod_carta2[4];
  unsigned long int populacao, populacao2; // Adicionado 'unsigned long int' para armazenar valores maiores.
  int pontos_tur, pontos_tur2;
  int resultado; // Adicionado para mostrar o resultado da comparação.
  float area, area2;
  float pib, pib2;
  float superpoder, superpoder2; // Novo atributo das cartas.

  // Explicação pro usuário.
  printf("Bem-vindo! Nesse programa voce deve preencher duas cartas do Super Trunfo.\n\n");
  printf("Serao apenas 7 questoes simples para cada carta:\n");
  printf("\n1 - Estado: digite uma letra de 'A' a 'H' que ira representa UM dos oitos estados.");
  printf("\n2 - Codigo da carta: digite a letra do estado e adicione um numero de 01 a 04.");
  printf("\n 2.1 - Exemplo: A01, B02, etc.");
  printf("\n3 - Nome da Cidade: digite qualquer nome para sua cidade.");
  printf("\n 3.1 - Observacao: se o nome tiver mais de uma palavra, use underline no lugar do espaço.");
  printf("\n       Exemplo: Rio_de_Janeiro");
  printf("\n4 - Populacao: digite o numero de habitantes que moram da cidade.");
  printf("\n5 - Area: digite a area (em quilômetros quadrados) da cidade.");
  printf("\n6 - PIB: digite o Produto Interno Bruto da cidade (em bilhoes).");
  printf("\n 6.1 - Exemplo: 123.45, 678.90 (em bilhoes)");
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
  scanf("%ld", &populacao);
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
  scanf("%ld", &populacao2);
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
  printf("\n- Populacao: %ld", populacao);
  printf("\n- Area: %.2f", area);
  printf("\n- PIB: %.2f bilhoes de reais", pib);
  printf("\n- Numeros de Pontos Turisticos: %d", pontos_tur);
  // Cálculo da Densidade Populacional.
  float densidade = populacao / area;
  printf("\n- Densidade Populacional: %.2f hab/km (quadrado)", densidade); // Exibição do dado processado.
  // Cálculo do PIB per Capita.
  // O PIB (em bilhão) digitado pelo usuário será convertido para reais.
  float pibpcap = (pib * 1000000000.00) / populacao; // Ex.: 699.28 * 1000000000.00 = 699280000000
  printf("\n- PIB per Capita: %.2f reais", pibpcap); // Exibição do dado processado.
  // Cálculo do Super Poder.
  superpoder = populacao + area + pib + pontos_tur + pibpcap + (1.0 / densidade);
  printf("\n- Super Poder: %.2f", superpoder);

  printf("\n\n- CARTA 2");
  printf("\n- Estado: %s", estado2);
  printf("\n- Codigo da Carta: %s", cod_carta2);
  printf("\n- Nome da Cidade: %s", cidade2);
  printf("\n- Populacao: %ld", populacao2);
  printf("\n- Area: %.2f", area2);
  printf("\n- PIB: %.2f bilhoes de reais", pib2);
  printf("\n- Numeros de Pontos Turisticos: %d", pontos_tur2);
  // Cálculo da Densidade Populacional.
  float densidade2 = populacao2 / area2;
  printf("\n- Densidade Populacional: %.2f hab/km (quadrado)", densidade2);
  // Cálculo do PIB per Capita.
  float pibpcap2 = (pib2 * 1000000000.00) / populacao2;
  printf("\n- PIB per Capita: %.2f reais", pibpcap2);
  // Cálculo do Super Poder;
  superpoder2 = populacao2 + area2 + pib2 + pontos_tur2 + pibpcap2 + (1.0 / densidade2);
  printf("\n- Super Poder: %.2f", superpoder2);

  // Exibição de comparação entre a carta 1 e carta 2.
  printf("\n\n- COMPARACAO DE CARTAS.");
  printf("\n  Observacao: a CARTA 1 sera representada pelo numero '1' e a CARTA 2 pelo numero '0'.");
  printf("\n- Populacao: %d", resultado = populacao > populacao2);
  printf("\n- Area: %d", resultado = area > area2);
  printf("\n- PIB: %d", resultado =  pib > pib2);
  printf("\n- Pontos Turisticos: %d", resultado = pontos_tur > pontos_tur2);
  printf("\n- Densidade Populacional: %d", resultado = (1.0 / densidade) > (1.0 / densidade2));
  printf("\n- PIB per Capita: %d", resultado = pibpcap > pibpcap2);
  printf("\n- Super Poder: %d", resultado = superpoder > superpoder2);

return 0;
}