#include <stdio.h>

typedef struct{
    char estado;                //Letra de A a H
    char codigo[4];             //Exemplo: A01
    char nomeCidade[20];        //Nome da Cidade  
    int populacao;              //Número de habitantes
    float area;                 //Área da cidade
    float pib;                  //Produto Interno Bruto
    int pontosTuristicos;       //Quantidade de pontos turísticos
} Carta;

int main(){
    Carta carta1, carta2;
    
    printf("Digite os dados da sua primeira carta");

    //Dados da primera carta
    printf("Estado (A-H):");
    scanf(" %c", &carta1.estado); //O espaço antes do %c é importante

    printf("Codigo da carta (ex: A01): ");
    scanf(" %s", &carta1.codigo);
    
    printf("Nome da cidade:");
    scanf(" %s", &carta1.nomeCidade);

    printf("População:");
    scanf(" %s", &carta1.populacao);

    printf("Área (em km²):");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões):");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos:");
    scanf("%d", &carta1.pontosTuristicos);

    //Dados da segunda carta
    printf("Digite os dados da SEGUNDA carta:");

    printf("Estado (A-H):");
    scanf(" %c", &carta2.estado);

    printf("Codigo da carta (ex: B03):");
    scanf(" %s", &carta2.codigo);
    
    printf("Nome da cidade:");
    scanf("%s[^\n]", &carta2.nomeCidade);

    printf("População:");
    scanf("%d", &carta2.populacao);

    printf("Área (em km²):");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões):");
    scanf("%f", &carta2.pib);

    printf("Números de pontos turísticos:");
    scanf("%d", &carta2.pontosTuristicos);

    //Mostrar os dados da primera carta
    printf("\n=== PRIMEIRA CARTA ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontosTuristicos);

    //Mostrar os dados da segundo carta
    printf("\n=== SEGUNDA CARTA ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n",carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontosTuristicos);


    return 0;
}