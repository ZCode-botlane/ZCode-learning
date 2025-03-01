#include <stdio.h>

int main()
{
    //primeira carta (variaveis)
    int populacao1;
    float area1;
    float pib1;
    char estado1;
    char codigo1 [20],cidade1 [50];
    //envio das informações para as variaveis
    printf("Digite uma letra de algum estado1 (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta começando pela letra referente ao estado (ex: A01,B04,C07): ");
    scanf("%s", codigo1);
    printf("Digite a quantidade de pessoas habitando nesse estado: ");
    scanf("%d", &populacao1);
    printf("Digite o tamanho da area em km2 do seu estado: ");
    scanf("%f", &area1);
    printf("Digite o pib de seu estado: ");
    scanf("%f", &pib1);
    printf("Digite uma cidade do seu estado escolhido: \n");
    scanf("%s", cidade1);

    //segunda carta (variaveis)
    int populacao2;
    float area2;
    float pib2;
    char estado2;
    char codigo2 [20],cidade2 [50];
    //envio das informações para as variaveis
    printf("Digite uma letra de outro estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta começando pela letra referente ao estado (ex: A01,B04,C07): ");
    scanf("%s", codigo2);
    printf("Digite a quantidade de pessoas habitando nesse estado: ");
    scanf("%d", &populacao2);
    printf("Digite o tamanho da area em km2 do seu estado: ");
    scanf("%f", &area2);
    printf("Digite o pib de seu estado: ");
    scanf("%f", &pib2);
    printf("Digite uma cidade do seu estado escolhido: ");
    scanf("%s", cidade2);
    //print das informações das cartas
    printf("CARTA01 \nEstado: %c\nCodigo: %s\nCidade: %s\nPopulação: %d\nArea: %f\nPIB: %f\n\n", estado1,codigo1,cidade1,populacao1,area1,pib1);
    printf("CARTA02 \nEstado: %c\nCodigo: %s\nCidade: %s\nPopulação: %d\nArea: %f\nPIB: %f\n", estado2,codigo2,cidade2,populacao2,area2,pib2);

    
}
