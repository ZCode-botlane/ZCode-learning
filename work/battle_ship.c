#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define LINHA_HAB 3
#define COLUNA_HAB 5
#define TAMANHO 3
int tabuleiro[LINHAS][COLUNAS];

int posicaoNavio(int valor)
{
    int posicao = valor;
    return valor;
}

void ativacaoHB(int matriz1[LINHAS][COLUNAS], int matriz2[LINHA_HAB][COLUNA_HAB], int origemX, int origemY) {
    for (int i = 0; i < LINHA_HAB; i++) {
        for (int j = 0; j < COLUNA_HAB; j++) {
            if (origemX + i < LINHAS && origemY + j < COLUNAS) {
                matriz1[origemX + i][origemY + j] = matriz2[i][j];
            }
        }
    }
}

int habilidades()
{
    int cone[3][5];
    int cruz[3][5];
    int octaedro[3][5];

    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j<5; j++)
        {
            octaedro[i][j] = 0;
            octaedro[0][2] = 5;
            octaedro[1][1] = 5;
            octaedro[1][2] = 5;
            octaedro[1][3] = 5;
            octaedro[2][2] = 5;

            cone[i][j] = 0;
            cone[0][2] = 5;
            cone[1][1] = 5;
            cone[1][2] = 5;
            cone[1][3] = 5;
            cone[2][j] = 5;

            cruz[i][j] = 0;
            cruz[0][2] = 5;
            cruz[1][j] = 5;
            cruz[2][2] = 5;
        }
   
    }

    for(int i = 0; i<LINHAS; i++)
    {
        for(int j = 0; j<COLUNAS; j++)
        {
            ativacaoHB(tabuleiro, cone, 7,1);
            ativacaoHB(tabuleiro, octaedro, 3,2);
        }
    }
    
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
        for(int j = 0; j<TAMANHO; j++)
        {
            int linha_1 = 1;
            int coluna_1 = j+1;
            tabuleiro[linha_1][coluna_1] = navio1[i];
            int posicaoN1 = tabuleiro[linha_1][coluna_1];
            
            int linha_2 = i+3;
            int coluna_2 = 1;
            tabuleiro[linha_2][coluna_2] = navio2[i];
            int posicaoN2 = tabuleiro[linha_2][coluna_2];

            int linha_3 = i+6;
            int coluna_3 = i+6;
            tabuleiro[linha_3][coluna_3] = navio3[i];
            int posicaoN3 = tabuleiro[linha_3][coluna_3];

            int linha_4 = i+3;
            int coluna_4 = i+7;
            tabuleiro[linha_4][coluna_4] = navio4[i];
            int posicaoN4 = tabuleiro[linha_3][coluna_3];
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
            habilidades();
            if(tabuleiro[i][j] == 0)
            {
                navios();
            }
            
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
    printf("\n");
    return 0;
}