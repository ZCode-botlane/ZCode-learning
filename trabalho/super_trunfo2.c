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

int comparacao(int unsigned carta1, int unsigned carta2, char ID[20])
{
    if (carta1 > carta2)
    {
        printf("\ncarta1 superior em %s\n", ID);
       
    } else if (carta1 == carta2) {
        printf("\ncarta2 igual a carta1 em %s\n", ID);
        
    } else {
        printf("\ncarta2 superior em %s\n", ID);

    }
}
int calculo(int valor1, int valor2)
{
    int resultado;

    resultado = valor1+valor2;
   /* if (valor1 == 1)
    {
        if (valor2 == 2)
        {
            resultado = populacao1+area1;
        } 
        if (valor2 == 3)
        {
            resultado = populacao1+pib1;
        } 
        if (valor2 == 4)
        {
            resultado = populacao1+turistico1;
        } 
        if (valor2 == 5)
        {
            resultado = populacao1+superPoder1;
        }
        if (valor2 == 6)
        {
            resultado = populacao1+(1/densidade1);
        } 
    }*/ 
    

    return resultado;
}

void menuInterativo(int escolha)
{
    char populacao[20] = "POPULAÇÃO";
    char area[20] = "AREA";
    char PIB[20] = "PIB";
    char turistico[20] = "PONTO TURISTICO";
    char superPoder[20] = "SUPER PODER";

    switch (escolha)
    {
    case 1:
        comparacao(populacao1,populacao2, populacao);
        break;
    case 2:
        comparacao(area1,area2, area);
        break;
    case 3:
        comparacao(pib1,pib2, PIB);
        break;
    case 4:
        comparacao(turistico1,turistico2, turistico);
        break;
    case 5:
        comparacao(superPoder1,superPoder2, superPoder);
        break;
    case 6:
        if (densidade1 < densidade2)
        {
            printf("carta1 vence");
        }else{
            printf("carta2 vence");
        }
        break;
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
    int escolha1;
    int escolha2;
    int soma1;
    int soma2;
    int resultado;
    printf("\nCHOQUE DE ATRIBUTOS\n\n1.População\n2.Area\n3.PIB\n4.Pontos turisticos\n5.Super poder\n6.Densidade demográdica\nescolha dois numeros: ");
    scanf("%d", &escolha1);
    scanf("%d", &escolha2);
    menuInterativo(escolha1);
    menuInterativo(escolha2);
    soma1 = (escolha1 == 1) ? populacao1 : (escolha1 == 2) ? area1 : (escolha1 == 3) ? pib1 : (escolha1 == 4) ? turistico1 : (escolha1 == 5) ? superPoder1;
    soma1 = (escolha2 == 1) ? populacao2 : (escolha2 == 2) ? area2 : (escolha2 == 3) ? pib2 : (escolha2 == 4) ? turistico2 : (escolha2 == 5) ? superPoder2;
    resultado = soma1+soma2;
    comparacao(soma1+soma2);

    //print das informações das cartas
    printf("\nCARTA01 \nEstado: %c\nCodigo: %s\nCidade: %s\nPopulação: %d\nArea: %f\nPIB: %f\nDensidade Populacional: %f\nPIB per Capita: %f\nSuper poder: %f\n\n", estado1, codigo1, cidade1, populacao1, area1, pib1, densidade1, pibCapital1, superPoder1);
    printf("CARTA02 \nEstado: %c\nCodigo: %s\nCidade: %s\nPopulação: %d\nArea: %f\nPIB: %f\nDensidade Populacional: %f\nPIB per Capita: %f\nSuper poder: %f\n\n", estado2, codigo2, cidade2, populacao2, area2, pib2, densidade2, pibCapital2,superPoder2);
}
