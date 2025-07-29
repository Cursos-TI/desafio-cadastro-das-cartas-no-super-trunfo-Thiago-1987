#include <stdio.h>

int main() {
    int Carta, População, Pontos;
    char Estado[12], Código[3], Nome_Cidade[10];
    float Área, PIB;


    printf(" Digite qual Número da Carta: ");
    scanf("%i", &Carta);
        
    printf(" Digite qual Estado: ");
    scanf("%1s", &Estado);

    printf(" Digite o Código da Carta: ");
    scanf("%s", &Código);

    printf(" Digite o Nome da Cidade: ");
    scanf("%s", &Nome_Cidade);
    
    printf(" Digite qual a População: ");
    scanf("%i", &População);

    printf(" Digite qual a Área em km2 : ");
    scanf("%f", &Área);

    printf(" Digite qual o PIB: ");
    scanf("%f", &PIB);

    printf(" Digite quantos Pontos tem a Carta: ");
    scanf("%i", &Pontos);

    printf(" Carta: %i \n Estado: %s \n Código: %s \n Cidade: %s \n População: %i milhoes\n Área: %f km2 \n", Carta, Estado, Código, Nome_Cidade, População, Área);
    
    printf(" PIB: %f bilhões \n Pontos: %i\n",PIB , Pontos);
   

    
    return 0;
}
