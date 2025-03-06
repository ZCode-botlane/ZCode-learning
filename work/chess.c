#include <stdio.h>

int main()
{
    int peca;
    int casas;

    printf("digite uma peça(1.torre,2.bispo,3.rainha,4.cavalo): ");
    scanf("%d", &peca);
    printf("digite o numero de casas: ");
    scanf("%d", &casas);

    if(peca == 1)
    {
        for(int i=0;i<=casas;i++)
        {
            printf("cima\n");
        }
    }else if(peca == 2)
    {
        for(int i=0;i<=casas;i++)
        {
            printf("cima,direita\n");
        }
    }else if(peca == 3)
    {
        for(int i=0;i<=casas;i++)
        {
            printf("esquerda\n");
        }
    }else if(peca == 4)
    {
        for(int i = 1; i<=casas; i++)
        {
            printf("baixo \n");
            for(int j = casas; j == i; j++)
            {
                printf("esquerda\n");
            }
    
        }
    }
     
    return 0;

}