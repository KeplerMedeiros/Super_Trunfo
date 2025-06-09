#include <stdio.h>

int main (){
    char estado1[20];
    char cod_carta1[3];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pt_turistico1;
    float densidade1;
    float pib_capita1;
    float super_poder1;

    printf("Digite o Estado da carta 1:\n");
    scanf("%s", &estado1);
    printf("Digite o Codigo da carta 1:\n");
    scanf("%s", &cod_carta1);
    printf("Digite a cidade da carta 1:\n");
    scanf("%s", &cidade1);
    printf("Digite a populacao da carta 1:\n");
    scanf("%u", &populacao1);
    printf("Digite a area da carta 1:\n");
    scanf("%f", &area1);
    printf("Digite o PIB da carta 1:\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos da carta 1:\n");
    scanf("%d", &pt_turistico1);
    densidade1 = populacao1 / area1;
    pib_capita1 = (pib1*1000000000) / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + (float) pt_turistico1 + pib_capita1 + (1/densidade1);


    char estado2[20];
    char cod_carta2[3];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pt_turistico2;
    float densidade2;
    float pib_capita2;
    float super_poder2;

    printf("Digite o Estado da carta 2:\n");
    scanf("%s", &estado2);
    printf("Digite o Codigo da carta 2:\n");
    scanf("%s", &cod_carta2);
    printf("Digite a cidade da carta 2:\n");
    scanf("%s", &cidade2);
    printf("Digite a populacao da carta 2:\n");
    scanf("%u", &populacao2);
    printf("Digite a area da carta 2:\n");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 2:\n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos da carta 2:\n");
    scanf("%d", &pt_turistico2);
    densidade2 = populacao2 / area2;
    pib_capita2 = (pib2*1000000000) / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + (float) pt_turistico2 + pib_capita2 + (1/densidade2);
    printf("\n");

    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Codigo: %s \n", cod_carta1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area: %.2f km2 \n", area1);
    printf("PIB: %.2f bilhoes de reais \n", pib1);
    printf("Numero de pontos turisticos: %d \n", pt_turistico1);
    printf("Densidade Populacional: %.2f \n", densidade1);
    printf("PIB per capita: %.2f \n", pib_capita1);
    printf("Super poder: %.2f\n", super_poder1);
    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s \n", cod_carta2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %.2f km2 \n", area2);
    printf("PIB: %.2f bilhoes de reais \n", pib2);
    printf("Numero de pontos turisticos: %d \n", pt_turistico2);
    printf("Densidade Populacional: %.2f \n", densidade2);
    printf("PIB per capita: %.2f \n", pib_capita2);
    printf("Super poder: %.2f\n", super_poder2);
    printf("\n");

    int resultadoPopulacao = populacao1 > populacao2;
    int resultadoArea = area1 > area2;
    int resultadoPib = pib1 > pib2;
    int resultadoPtTuristico = pt_turistico1 > pt_turistico2;
    int resultadoDensidade = densidade1 > densidade2;
    int resultadoPibCapita = pib_capita1 > pib_capita2;
    int resultadoSuperPoder = super_poder1 > super_poder2;

    printf("Comparacao de Cartas:\n");

    printf("Populacao: ");
    if (resultadoPopulacao == 1) {
        printf("Carta 1 venceu (%d)\n", resultadoPopulacao);
    } else {
        printf("Carta 2 venceu (%d)\n", resultadoPopulacao);
    }

    printf("Area: ");
    if (resultadoArea == 1) {
        printf("Carta 1 venceu (%d)\n", resultadoArea);
    } else {
        printf("Carta 2 venceu (%d)\n", resultadoArea);
    }

    printf("PIB: ");
    if (resultadoPib == 1) {
        printf("Carta 1 venceu (%d)\n", resultadoPib);
    } else {
        printf("Carta 2 venceu (%d)\n", resultadoPib);
    }

    printf("Pontos Turisticos: ");
    if (resultadoPtTuristico == 1) {
        printf("Carta 1 venceu (%d)\n", resultadoPtTuristico);
    } else {
        printf("Carta 2 venceu (%d)\n", resultadoPtTuristico);
    }

    printf("Densidade Populacional: ");
    if (resultadoDensidade == 0) {
        printf("Carta 1 venceu (%d)\n", resultadoDensidade);
    } else {
        printf("Carta 2 venceu (%d)\n", resultadoDensidade);
    }

    printf("PIB per capita: ");
    if (resultadoPibCapita == 1) {
        printf("Carta 1 venceu (%d)\n", resultadoPibCapita);
    } else {
        printf("Carta 2 venceu (%d)\n", resultadoPibCapita);
    }

    printf("Super Poder: ");
    if (resultadoSuperPoder == 1) {
        printf("Carta 1 venceu (%d)\n", resultadoSuperPoder);
    } else {
        printf("Carta 2 venceu (%d)\n", resultadoSuperPoder);
    }

    return 0;    
}
