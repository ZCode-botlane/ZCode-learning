#include <stdio.h>
#include <stdlib.h>

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
int escolhaComparacao;

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

float calcularValores(int valor1, float valor2)
{
    float resultado;
    resultado = (float) valor1/valor2;

    return resultado;
}

void comparacao(int unsigned carta1, int unsigned carta2)
{
    if (carta1 > carta2)
    {
        printf("\n### CARTA1 VENCE ###\n");
    } else {
        printf("\n### CARTA2 VENCE ###\n");
    }
}

void menuInterativo(int escolha)
{
    switch (escolha)
    {
    case 1:
        comparacao(populacao1,populacao2);
        break;
    case 2:
        comparacao(area1,area2);
        break;
    case 3:
        comparacao(pib1,pib2);
        break;
    case 4:
        comparacao(turistico1,turistico2);
        break;
    case 5:
        comparacao(superPoder1,superPoder2);
        break;
    case 6:
        if (densidade1 < densidade2)
        {
            printf("carta1 vence");
        }else{
            printf("carta2 vence");
        }
    default:
        printf("Escolha invalida");
        break;
    }
}

int main()
{
    //envio das informações para as variaveis
    printf("Digite uma letra de algum estado (A-H): ");
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

    //envio das informações para as variaveis
    printf("Digite uma letra de algum estado (A-H): ");
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

    //comparação
    int escolha;
    printf("\nCHOQUE DE ATRIBUTOS\n\n1.População\n2.Area\n3.PIB\n4.Pontos turisticos\n5.Super poder\n6.Densidade demográdica\nescolha um numero: ");
    scanf("%d", &escolha);
    menuInterativo(escolha);

    //print das informações das cartas
    printf("\nCARTA01 \nEstado: %c\nCodigo: %s\nCidade: %s\nPopulação: %d\nArea: %f\nPIB: %f\nDensidade Populacional: %f\nPIB per Capita: %f\nSuper poder: %f\n\n", estado1, codigo1, cidade1, populacao1, area1, pib1, densidade1, pibCapital1, superPoder1);
    printf("CARTA02 \nEstado: %c\nCodigo: %s\nCidade: %s\nPopulação: %d\nArea: %f\nPIB: %f\nDensidade Populacional: %f\nPIB per Capita: %f\nSuper poder: %f\n\n", estado2, codigo2, cidade2, populacao2, area2, pib2, densidade2, pibCapital2,superPoder2);
}
