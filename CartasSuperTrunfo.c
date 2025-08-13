#include <stdio.h>

int main(){

// Dados para cadastro da carta 1.
    int carta1;
    int pontos1;
    int populacao1;
    char estado1 [10];
    char cidade1 [10];
    char codigo1 [10];
    float pib1;
    float area1;
    float densidade1;
    float percapita1;

    // Dados para cadastro da carta 2.

    int carta2;
    int pontos2;
    int populacao2;
    char estado2 [10];
    char cidade2 [10];
    char codigo2 [10];
    float pib2;
    float area2;
    float densidade2;
    float percapita2;

    // Entrada dados carta 1.

    printf(" Digite qual Número da Carta (utilize apenas números): ");
    scanf("%i", &carta1);
        
    printf(" Digite qual Estado (Digite apenas uma letra de A a Z): ");
    scanf("%s", &estado1);

    printf(" Digite o Código da Carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): ");
    scanf("%s", &codigo1);

    printf(" Digite o Nome da Cidade: ");
    scanf("%s", &cidade1);
    
    printf(" Digite qual a População: ");
    scanf("%d", &populacao1);

    printf(" Digite qual a Área em km2 : ");
    scanf("%f", &area1);

    printf(" Digite PIB: ");
    scanf("%f", &pib1);

    printf(" Digite o número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    
    // Saida de dados da carta 1.

    printf("\n Carta: %i\n", carta1); 
     
    printf(" Estado: %s\n", estado1);

    printf(" Código da Carta: %s\n",codigo1);

    printf(" Cidade: %s \n", cidade1);

    printf(" População: %d milhões \n", populacao1);

    printf(" Área: %.2f km2 \n", area1);

    printf(" PIB: %.3f bilhões\n", pib1);

    printf(" Número de Pontos Turísticos: %d \n", pontos1);

    densidade1 = (float) populacao1 / area1;

    printf(" Densidade Populacional: %.2f \n",densidade1);

    percapita1 = (float) pib1 / populacao1;

    printf(" PIB per Capita: %.2f \n",percapita1);


    // Entrada de Dados carta 2.

    printf(" \n Digite qual Número da Carta (utilize apenas números): ");
    scanf("%i", &carta2);
        
    printf(" Digite qual Estado (Digite apenas uma letra de A a Z): ");
    scanf("%s", &estado2);

    printf(" Digite o Código da Carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): ");
    scanf("%s", &codigo2);

    printf(" Digite o Nome da Cidade: ");
    scanf("%s", &cidade2);
    
    printf(" Digite qual a População: ");
    scanf("%d", &populacao2);

    printf(" Digite qual a Área em km2 : ");
    scanf("%f", &area2);

    printf(" Digite PIB: ");
    scanf("%f", &pib2);

    printf(" Digite o número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Saida de dados da carta 2.

    printf("\n Carta: %i\n", carta2); 
     
    printf(" Estado: %s\n", estado2);

    printf(" Código da Carta: %s\n",codigo2);

    printf(" Cidade: %s \n", cidade2);

    printf(" População: %d milhões \n", populacao2);

    printf(" Área: %.2f km2 \n", area2);

    printf(" PIB: %.3f bilhões\n", pib2);

    printf(" Número de Pontos Turísticos: %d \n", pontos2);

    densidade2 = (float) populacao2 / area2;

    printf(" Densidade Populacional: %.2f \n",densidade2);

    percapita1 = (float) pib2 / populacao2;

    printf(" PIB per Capita: %.2f \n",percapita2);
      
    

    return 0;

}