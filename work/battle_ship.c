#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define TAMANHO 3
int tabuleiro[LINHAS][COLUNAS];

int posicaoNavio(int valor)
{
    int posicao = valor;
    return valor;
}
void navios()
{
    int navio1[TAMANHO];
    int navio2[TAMANHO];
    int navio3[TAMANHO];
    int navio4[TAMANHO];

    //adicionando valor aos navios
    for (int i = 0; i<TAMANHO; i++)
    {
        navio1[i] = 3;
        navio2[i] = 3;
        navio3[i] = 3;
        navio4[i] = 3;
    }

    //adicionando os navios no tabuleiro
    for (int i = 0; i < TAMANHO; i++)
    {
        int linha_1 = 1;
        int coluna_1 = i+1;
        tabuleiro[linha_1][coluna_1] = navio1[i];
        int posicaoN1 = tabuleiro[linha_1][coluna_1];

        for (int j = 0; j < TAMANHO; j++)
        {   
            int linha_2 = j+3;
            int coluna_2 = 2;

            if(coluna_1 == coluna_2 && linha_1 == linha_2)
            {
                printf("os navios 2 e demais estão se sobrepondo");
                exit(8);
            }else{
            tabuleiro[linha_2][coluna_2] = navio2[j];
            int posicaoN2 = tabuleiro[linha_2][coluna_2];
            }
            
                for (int y = 0; y < TAMANHO; y++)
                {   
                    int linha_3 = y+1;
                    int coluna_3 = y+5;
        
                    if(coluna_1 == coluna_3 && linha_1 == linha_3 || coluna_2 == coluna_3 && linha_2 == linha_3 )
                    {
                        printf("os navios 3 e demais estão se sobrepondo");
                        exit(8);
                    }else{
                    tabuleiro[linha_3][coluna_3] = navio3[j];
                    int posicaoN2 = tabuleiro[linha_3][coluna_3];
                    }

                        for (int g = 0; g < TAMANHO; g++)
                        {   
                            int linha_4 = g+4;
                            int coluna_4 = g+5;
                
                            if(coluna_1 == coluna_4 && linha_1 == linha_4 || coluna_2 == coluna_4 && linha_2 == linha_4 || coluna_3 == coluna_4 && linha_3 == linha_4 )
                            {
                                printf("os navios 4 e demais estão se sobrepondo");
                                exit(8);
                            }else{
                            tabuleiro[linha_4][coluna_4] = navio4[j];
                            int posicaoN2 = tabuleiro[linha_4][coluna_4];
                            }
                        }
            }
        }
    }   
}

void tabuleiroPosition ()
{   
    //adicionando valor ao tabuleiro
    printf("\n");
    for(int i = 0; i<LINHAS; i++)
    {
        for(int j = 0; j<COLUNAS; j++)
        {
            tabuleiro[i][j] = 0;
            navios();
            
        }
    }

    for(int i = 0; i<LINHAS; i++)
    {   
        //exibindo a numeração das colunas
        if(i !=LINHAS-1)
        {
            printf(" %d",i+1);
        }else{
            printf("%d",i+1);
        }
        //exibindo o tabuleiro
        for(int j = 0; j<COLUNAS; j++)
        {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    char linhas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
    
    //exibindo as linhas de A a J
    printf("   ");
    for(int i = 0; i<=LINHAS; i++)
    {
        printf("%c ", linhas[i]);
    }

    //inicializando a função do tabuleiro
    tabuleiroPosition ();
    return 0;
}