#include <stdio.h>

int main() {
    int Carta, População, Pontos;
    char Estado[10], Código[3], Nome_Cidade[10];
    float Área, PIB;
    
    printf(" Digite qual Número da Carta: ");
    scanf("%i", &Carta);
        
    printf(" Digite qual Estado: ");
    scanf("%s", Estado);

    printf(" Digite o Código da Carta: ");
    scanf("%s", Código);

    printf(" Digite o Nome da Cidade: ");
    scanf("%s", Nome_Cidade);
    
    printf(" Digite qual a População: ");
    scanf("%i", &População);

    printf(" Digite qual a Área em km2 : ");
    scanf("%f", &Área);

    printf(" Digite qual o PIB: ");
    scanf("%f", &PIB);

    printf(" Digite quantos Pontos turístico tem a Carta: ");
    scanf("%i", &Pontos);

    printf(" Carta: %i \n Estado: %s \n Código: %s \n Cidade: %s \n População: %i milhoes\n Área: %.2f km2 \n", Carta, Estado, Código, Nome_Cidade, População, Área);
    
    printf(" PIB: %.3f bilhões \n Pontos turísticos: %i\n",PIB , Pontos);
   


    int Carta_2, População_2, Pontos_2;
    char Estado_2[10], Código_2[3], Nome_Cidade_2[10];
    float Área_2, PIB_2;
    
    printf(" Digite qual Número da Carta 2: ");
    scanf("%i", &Carta_2);
        
    printf(" Digite qual Estado 2: ");
    scanf("%s", Estado_2);

    printf(" Digite o Código da Carta _2: ");
    scanf("%s", Código_2);

    printf(" Digite o Nome da Cidade _2: ");
    scanf("%s", Nome_Cidade_2);
    
    printf(" Digite qual a População _2: ");
    scanf("%i", &População_2);

    printf(" Digite qual a Área em km2 _2 : ");
    scanf("%f", &Área_2);

    printf(" Digite qual o PIB _2: ");
    scanf("%f", &PIB_2);

    printf(" Digite quantos Pontos turístico tem a Carta _2: ");
    scanf("%i", &Pontos_2);

    printf(" Carta 2: %i \n Estado 2: %s \n Código 2: %s \n Cidade 2: %s \n População2 : %i milhoes\n Área 2: %.2f km2 \n", Carta_2, Estado_2, Código_2, Nome_Cidade_2, População_2, Área_2);
    
    printf(" PIB 2: %.3f bilhões \n Pontos turísticos 2: %i\n",PIB_2 , Pontos_2);
   
    return 0;
}
