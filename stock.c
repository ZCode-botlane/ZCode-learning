#include <stdio.h>

int unsigned leitura(char ID[20])
{
    //lendo o valor recebido pelo usuario
    int unsigned valor;
    printf("Digite o valor do(a) %s: ", ID);
    scanf("%u", &valor);

    return valor;
}

void comparacao(char ID[20], int unsigned valor, int unsigned comparacao)
{
    //fazendo a comparacao e analisa dos valores
    if(valor > comparacao)
    {
        printf("%s está acima de %u\n", ID,comparacao);
    } else {
        printf("%s está abaixo de %u\n", ID,comparacao);
    }
}

int main()
{
    //declaração das variaveis principais
    char estoqueID[20] = "estoque";
    int unsigned estoque;
    int unsigned estoqueMinimo = 1500;

    char temperaturaID[20] = "temperatura";
    int unsigned temperatura;
    int unsigned temperaturaMaxima = 30;

    char umidadeID[20] = "umidade";
    int unsigned umidade;
    int unsigned umidadeMaxima = 50;

    //Leitura dos valores
    estoque = leitura(estoqueID);
    temperatura = leitura(temperaturaID);
    umidade = leitura(umidadeID);

    //comparacao dos valores
    comparacao(estoqueID, estoque, estoqueMinimo);
    comparacao(temperaturaID, temperatura, temperaturaMaxima);
    comparacao(umidadeID, umidade, umidadeMaxima);

    return 0;
}
    