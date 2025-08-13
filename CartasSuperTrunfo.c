#include <stdio.h>

int main(){

// Dados para cadastro da carta 1.
    int carta1;
    int pontos1;
    unsigned long int populacao1;
    char estado1 [10];
    char cidade1 [10];
    char codigo1 [10];
    float pib1;
    float area1;
    float densidade1;
    float percapita1;

    float resultado1 = densidade1 + percapita1;
    float super1= populacao1 + area1 + pib1 + pontos1 + percapita1 - densidade1;

    // Dados para cadastro da carta 2.

    int carta2;
    int pontos2;
    unsigned long int populacao2;
    char estado2 [10];
    char cidade2 [10];
    char codigo2 [10];
    float pib2;
    float area2;
    float densidade2;
    float percapita2;

    float resultado2 = densidade2 + percapita2;
    float super2= populacao2 + area2 + pib2 + pontos2 + percapita2 - densidade2;
    

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

    percapita2 = (float) pib2 / populacao2;

    printf(" PIB per Capita: %.2f \n",percapita2);
      
    // resultado do jogo

    printf("\n***Resultado das Cartas***\n");
    printf("\n Se atribuido o valor 1 na carta verdadeiro venceu e 0 para falso Carta perdeu \n");
    int resultadoPopulacao1 = populacao1 > populacao2;
    int resultadoPopulacao2 = populacao1 < populacao2;
    int resultadoArea1 = area1 > area2;
    int resultadoArea2 = area2 > area1;
    int resultadoPib1 = pib1 > pib2;
    int resultadoPib2 = pib2 > pib1;
    int resultadoPontos1 = pontos1 > pontos2;
    int resultadoPontos2 = pontos2 > pontos1;
    int resultadoDensida1 = densidade1 > densidade2;
    int resultadoDensidade2 = densidade2 > densidade1;
    int resultadoPibpercapita1 = percapita1 > percapita2;
    int resultadoPibpercapita2 = percapita2 > percapita1;
    int resultadoSuper1 = super1 > super2;
    int resultadoSuper2 = super2 > super1;
    
    printf("\nPopulação Vence a:\n Carta 1 (%d)\n Carta 2 (%d) \n", resultadoPopulacao1, resultadoPopulacao2);
    printf("\nÁrea Venceu a \n Carta 1 (%d) \n Carta 2 (%d)\n", resultadoArea1, resultadoArea2);
    printf("\nPIB Venceu a \n Carta 1 (%d) \n Carta 2 (%d)\n", resultadoPib1,resultadoPib2);
    printf("\nPontos Turisticos Venceu a \n Carta 1 (%d)  \n Carta 2 (%d)\n",resultadoPontos1, resultadoPontos2);
    printf("\nDensidade Populacional Venceu a \n Carta 1 (%d) \n Carta 2 (%d)\n", resultadoDensida1, resultadoDensidade2);
    printf("\nPIB per Capita Venceu a \n Carta 1 (%d) \n Carta 2 (%d)\n", resultadoPibpercapita1, resultadoPibpercapita2);  
    printf("\nSuper Poder Venceu a \n Carta 1 (%d) \n Carta 2 (%d)\n",resultadoSuper1, resultadoSuper2);   


    return 0;

}
