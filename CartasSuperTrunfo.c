#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontoTuristico1, pontoTuristico2;
    float densPop1, densPop2;
    float pibPerCapta1, pibPerCapta2;
    float super1, super2;
    int escolha;
    

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

    super1 = populacao1 + area1 + pib1 + pontoTuristico1 + pibPerCapta1 + (1/densPop1);

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

    super2 = populacao2 + area2 + pib2 + pontoTuristico2 + pibPerCapta2 + (1/densPop2);

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
    printf("Super Poder: %0.2f\n", super1);

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
    printf("Super Poder: %0.2f\n", super2);

    //Comparação das cartas
    printf("\n--Comparação de Atributos--\n");
    printf("\n1-População");
    printf("\n2-Área");
    printf("\n3-PIB");
    printf("\n4-Pontos turísticos");
    printf("\n5-Densidade populacional");
    printf("\n6-PIB per capta");
    printf("\n7-Super Poder");
    printf("\nQual atributo você deseja comparar?\n");
    scanf("%d", &escolha);

    if(escolha == 1) //População
    {
        printf("\nCarta 1 - %s: %d", nomeCidade1, populacao1);
        printf("\nCarta 2 - %s: %d", nomeCidade2, populacao2);

        if(populacao1 > populacao2)
        {
            printf("\nResultado: Carta 1(%s) Venceu", nomeCidade1);
        }else{
            printf("\nResultado: Carta 2(%s) Venceu", nomeCidade2);
        }
    }
    else if(escolha == 2) //Área
    {
        printf("\nCarta 1 - %s: %0.2f", nomeCidade1, area1);
        printf("\nCarta 2 - %s: %0.2f", nomeCidade2, area2);

        if(area1 > area2)
        {
            printf("\nResultado: Carta 1(%s) Venceu", nomeCidade1);
        }else{
            printf("\nResultado: Carta 2(%s) Venceu", nomeCidade2);
        }
    } 
    else if(escolha == 3) //PIB
    {
        printf("\nCarta 1 - %s: %0.2f", nomeCidade1, pib1);
        printf("\nCarta 2 - %s: %0.2f", nomeCidade2, pib2);

        if(pib1 > pib2)
        {
            printf("\nResultado: Carta 1(%s) Venceu", nomeCidade1);
        }else{
            printf("\nResultado: Carta 2(%s) Venceu", nomeCidade2);
        }
    }
    else if(escolha == 4) //Pontos turísticos
    {
        printf("\nCarta 1 - %s: %d", nomeCidade1, pontoTuristico1);
        printf("\nCarta 2 - %s: %d", nomeCidade2, pontoTuristico2);

        if(pontoTuristico1 < pontoTuristico2)
        {
            printf("\nResultado: Carta 1(%s) Venceu", nomeCidade1);
        }else{
            printf("\nResultado: Carta 2(%s) Venceu", nomeCidade2);
        }
    }
    else if(escolha == 5) //Densidade populacional
    {
        printf("\nCarta 1 - %s: %0.2f", nomeCidade1, densPop1);
        printf("\nCarta 2 - %s: %0.2f", nomeCidade2, densPop2);

        if(densPop1 < densPop2)
        {
            printf("\nResultado: Carta 1(%s) Venceu", nomeCidade1);
        }else{
            printf("\nResultado: Carta 2(%s) Venceu", nomeCidade2);
        }   
    }
    else if(escolha == 6) //PIB per capta
    {
        printf("\nCarta 1 - %s: %0.2f", nomeCidade1, pib1);
        printf("\nCarta 2 - %s: %0.2f", nomeCidade2, pib2);

        if(pib1 < pib2)
        {
            printf("\nResultado: Carta 1(%s) Venceu", nomeCidade1);
        }else{
            printf("\nResultado: Carta 2(%s) Venceu", nomeCidade2);
        }  
    }
    else if(escolha == 7) //Super poder
    {
        printf("\nCarta 1 - %s: %0.2f", nomeCidade1, super1);
        printf("\nCarta 2 - %s: %0.2f", nomeCidade2, super2);

        if(super1 < super2)
        {
            printf("\nResultado: Carta 1(%s) Venceu", nomeCidade1);
        }else{
            printf("\nResultado: Carta 2(%s) Venceu", nomeCidade2);
        }
    }

    return 0;
}
