#include <stdio.h>

float calcularValores(int valor1, float valor2)
{
    float resultado;
    resultado = (float) valor1/valor2;

    return resultado;
}

int main()
{
    //primeira carta (variaveis)
    int unsigned populacao1;
    float area1;
    float pib1;
    char estado1;
    char codigo1 [20],cidade1 [50];
    int unsigned turistico1;
    float densidade1;
    float pibCapital1;
    float superPoder1;
    //envio das informações para as variaveis
    printf("Digite uma letra de algum estado1 (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta começando pela letra referente ao estado (ex: A01,B04,C07): ");
    scanf("%s", codigo1);
    printf("Digite a quantidade de pessoas habitando nesse estado: ");
    scanf("%u", &populacao1);
    printf("Digite o tamanho da area em km2 do seu estado: ");
    scanf("%f", &area1);
    printf("Digite o pib de seu estado: ");
    scanf("%f", &pib1);
    printf("Digite uma cidade do seu estado escolhido: ");
    scanf("%s", cidade1);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%u", &turistico1);
    densidade1 = calcularValores(populacao1, area1);
    pibCapital1 = calcularValores(pib1,populacao1);
    superPoder1 = (populacao1+area1+pib1+turistico1+pibCapital1)+1/densidade1;

    //segunda carta (variaveis)
    int unsigned populacao2;
    float area2;
    float pib2;
    char estado2;
    char codigo2 [20],cidade2 [50];
    int unsigned turistico2;
    float densidade2;
    float pibCapital2;
    float superPoder2;

    //envio das informações para as variaveis
    printf("\nDigite uma letra de outro estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta começando pela letra referente ao estado (ex: A01,B04,C07): ");
    scanf("%s", codigo2);
    printf("Digite a quantidade de pessoas habitando nesse estado: ");
    scanf("%u", &populacao2);
    printf("Digite o tamanho da area em km2 do seu estado: ");
    scanf("%f", &area2);
    printf("Digite o pib de seu estado: ");
    scanf("%f", &pib2);
    printf("Digite uma cidade do seu estado escolhido: ");
    scanf("%s", cidade2);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%u", &turistico2);
    densidade2 = calcularValores(populacao2, area2);
    pibCapital2 = calcularValores(pib2,populacao2);
    superPoder2 = (populacao2+area2+pib2+turistico2+pibCapital2)+1/densidade2;

    //print das informações das cartas
    printf("\nCARTA01 \nEstado: %c\nCodigo: %s\nCidade: %s\nPopulação: %d\nArea: %f\nPIB: %f\nDensidade Populacional: %f\nPIB per Capita: %f\nSuper poder: %f\n\n", estado1, codigo1, cidade1, populacao1, area1, pib1, densidade1, pibCapital1, superPoder1);
    printf("CARTA02 \nEstado: %c\nCodigo: %s\nCidade: %s\nPopulação: %d\nArea: %f\nPIB: %f\nDensidade Populacional: %f\nPIB per Capita: %f\nSuper poder: %f\n\n", estado2, codigo2, cidade2, populacao2, area2, pib2, densidade2, pibCapital2,superPoder2);

    //comparação das cartas
    int populacao = populacao1 > populacao2;
    int area = area1 > area2;
    int pib = pib1 > pib2;
    int densidade = densidade1 > densidade2;
    int pibCapital = pibCapital1 > pibCapital2;
    int superPoder = superPoder1 > superPoder2;

    //print das comparações das cartas
    printf("CARTA01 x CARTA02\nPopulação: %d\nArea: %d\nPIB: %d\nDensidade Populacional: %d\nPIB per Capita: %d\nSuper poder: %d\n\n", populacao, area, pib, densidade, pibCapital, superPoder);
}
