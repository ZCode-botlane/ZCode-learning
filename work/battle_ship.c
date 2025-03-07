#include <stdio.h>

int tabuleiro[10][10];
int navio1[3] = {3, 3, 3};
int navio2[3] = {3, 3, 3};

void tabuleiroPosition (int coluna)
{
    printf("\n");
    
    //exibindo a coluna numerada de 1 a 10
    if(coluna != 10)
    {
        printf(" %d ", coluna);
    }else
    {
        printf("%d ", coluna);
    }

    //exibindo na tela o tabuleiro
    for(int i = 0; i<10; i++)
    {
        if(coluna == 4 )
        {
            tabuleiro[coluna][3] = navio1[0];
            tabuleiro[coluna][4] = navio1[1];
            tabuleiro[coluna][5] = navio1[2];
            printf("%d ", tabuleiro[coluna][i]);

        }else if(i == 7)
        {
            tabuleiro[6][i] = navio2[0];
            tabuleiro[7][i] = navio2[1];
            tabuleiro[8][i] = navio2[2];
            printf("%d ", tabuleiro[coluna][i]);
        }else{
        tabuleiro[coluna][i] = 0;
        printf("%d ", tabuleiro[coluna][i]);
        }
    }
}

int main()
{
    char linhas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
    
    //exibindo as linhas de A a J
    printf("   ");
    for(int i = 0; i<=10; i++)
    {
        printf("%c ", linhas[i]);
    }

    //controlando a posição do tabuleiro
    for(int i = 1; i<=10; i++)
    {
        tabuleiroPosition(i);
    }

    return 0;
}