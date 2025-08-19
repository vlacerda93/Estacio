#include <stdio.h>

int main()
{
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigoCarta1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // Leitura dos dados da primeira carta
    printf("Carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigoCarta1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Leitura dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigoCarta2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Exibição dos dados da primeira carta
    printf("\nDados da Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    // Exibição dos dados da segunda carta
    printf("\nDados da Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    // Dados de das cartas
    char estadosBrasil[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    char codigosCidades[8][5] = {"A01", "B02", "C03", "D04", "E01", "F02", "G03", "H04"};
    char nomesCidades[8][50] = {"São Paulo", "Rio de Janeiro", "Brasília", "Salvador", "Fortaleza", "Belo Horizonte", "Manaus", "Porto Alegre"};
    int populacoes[8] = {12325000, 6320446, 2867869, 2886698, 2452185, 2375151, 2130264, 1409351};
    float areas[8] = {1521.11, 1200.18, 5802.00, 693.00, 314.93, 331.40, 11401.09, 496.68};
    float pibs[8] = {699.28, 343.64, 164.53, 55.71, 47.35, 97.33, 55.61, 47.50};
    int pontosturisticos[8] = {50, 35, 25, 30, 20, 18, 22, 15};

    // Exibição dos dados das 8 cartas
    for (int i = 0; i < 8; i++)
    {
        printf("\nCarta %d:\n", i + 1);
        printf("Estado: %c\n", estadosBrasil[i]);
        printf("Código da Carta: %s\n", codigosCidades[i]);
        printf("Nome da Cidade: %s\n", nomesCidades[i]);
        printf("População: %d\n", populacoes[i]);
        printf("Área: %.2f km²\n", areas[i]);
        printf("PIB: %.2f bilhões de reais\n", pibs[i]);
        printf("Número de Pontos Turísticos: %d\n", pontosturisticos[i]);
    }

    return 0;
}