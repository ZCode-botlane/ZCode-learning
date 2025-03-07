#include <stdio.h>

void andarPecas(int n, char direcao[10], int peca, char dirCavalo[6])
{
    //comando responsavel para movimentar as peças
    if(peca != 4)
    {
        if(n > 0)
        {
            printf("%s", direcao);
            if(peca == 2)
            {
                printf("esquerda\n");
            }
            andarPecas(n-1, direcao, peca, dirCavalo);
        }
    }else{
        for(int i = 1; i<=n; i++)
        {
            int j = n;
            printf("%s \n", direcao);
            while( j == i)
            {
                printf("%s\n",  dirCavalo);
                j++;
            }
    
        }
    }
}

void selecionarPecas(int peca, int casas, char dirCavalo[10])
{
    //comando responsavel para selecionar qual peça irá se mover
    switch (peca)
    {
    case (4):
        //caso seja cavalo, adicione mais uma direção
        printf("digite a segunda direção do cavalo (esquerda, direita): ");
        scanf("%s", dirCavalo);
        andarPecas(casas, "cima", peca, dirCavalo);
        break;
    case(1):
        andarPecas(casas, "cima", peca, dirCavalo);
        break;
    case(2):
        andarPecas(casas, "cima, ", peca, dirCavalo);
        break;
    case(3):
        andarPecas(casas, "esquerda", peca, dirCavalo);
        break;
    default:
        printf("Invalido");
        break;
     } 
}

int main(){

    int peca;
    int casas;
    char dirCavalo[10];

    printf("digite uma peça(1.torre,2.bispo,3.rainha,4.cavalo): ");
    scanf("%d", &peca);       
    printf("digite o numero de casas: ");
    scanf("%d", &casas);
    //inicializando a função responsavel por selecionar as peças
    selecionarPecas(peca, casas, dirCavalo);
 
    return 0;
}