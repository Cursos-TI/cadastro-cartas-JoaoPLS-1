#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    int codigo_carta1, codigo_carta2;
    char estado, estado2;
    char nomeCidade[50], nomeCidade2[50];
    int populacao, pontoTuristico, populacao2, pontoTuristico2;
    float PIB1, area1, PIB2, area2;
  // Área para entrada de dados
    printf("Digite as informacoes da carta 1: \n");

    printf("Digite o estado: \n");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta de 1 a 4: \n");
    scanf("%d", &codigo_carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade);

    printf("Digite a quantidade de habitantes: \n");
    scanf("%d", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontoTuristico);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("\nDigite as informacoes da carta 2: \n");

    printf("Digite o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta de 1 a 4: \n");
    scanf("%d", &codigo_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Digite a quantidade de habitantes: \n");
    scanf("%d", &populacao2);

    printf("Digite a area: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontoTuristico2);

  // Área para exibição dos dados da cidade
    printf("Carta 1: \n");
    printf("Codigo: %c%d \n", estado, codigo_carta1);
    printf("Estado: %c \n", estado);
    printf("Nome da cidade: %s \n", nomeCidade);
    printf("Populacao: %d \n", populacao);
    printf("Numero de Pontos turisticos: %d \n", pontoTuristico);
    printf("PIB: %.2f Bilhoes de reais\n", PIB1);
    printf("Area: %.2f Km2\n", area1);

    printf("\n\nCarta 2: \n");
    printf("Codigo: %c%d \n", estado2, codigo_carta2);
    printf("Estado: %c \n", estado2);
    printf("Nome da cidade: %s \n", nomeCidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Numero de Pontos turisticos: %d \n", pontoTuristico2);
    printf("PIB: %.2f Bilhoes de reais\n", PIB2);
    printf("Area: %.2f Km2\n", area2);

return 0;
} 
