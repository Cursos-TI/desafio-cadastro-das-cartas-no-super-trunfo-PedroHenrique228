#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontoTuristico1, pontoTuristico2;
    float densPop1, densPop2;
    float pibPerCapta1, pibPerCapta2;

    //Dados Carta 1
    printf("Insira o estado da Carta 1: ");
    scanf("%c", &estado1);

    printf("Insira o código da Carta 1: ");
    scanf("%s", codigo1);

    printf("Insira o nome da cidade da Carta 1: ");
    scanf(" %[^\n]%*c", nomeCidade1);

    printf("Insira a população da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Insira a área em km² da Carta 1: ");
    scanf("%f", &area1);

    printf("Insira o PIB em bilhões da Carta 1: ");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontoTuristico1);

    densPop1 = (populacao1/area1);

    pibPerCapta1 = (pib1*1000000000/populacao1);

    //Dados Carta 2
    printf("Insira o estado da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Insira o código da Carta 2: ");
    scanf("%s", codigo2);

    printf("Insira o nome da cidade da Carta 2: ");
    scanf(" %[^\n]%*c", nomeCidade2);

    printf("Insira a população da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Insira a área em km² da Carta 2: ");
    scanf("%f", &area2);

    printf("Insira o PIB em bilhões da Carta 2: ");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontoTuristico2);

    densPop2 = (populacao2/area2);

    pibPerCapta2 = (pib2*1000000000/populacao2);

    //Print carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %0.2f km²\n", area1);
    printf("PIB: %0.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristico1);
    printf("Densidade Populacional: %0.2f\n", densPop1);
    printf("PIB per capita: %0.2f reais\n", pibPerCapta1);

    //Print carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %0.2f km²\n", area2);
    printf("PIB: %0.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristico2);
    printf("Densidade Populacional: %0.2f\n", densPop2);
    printf("PIB per capita: %0.2f reais\n", pibPerCapta2);

    return 0;
}
