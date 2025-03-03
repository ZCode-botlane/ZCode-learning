#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int leitura()
{
    int valor;
    printf("JOGO DE JOKENPO\n\nEscolha uma jogada:\n1.Pedra\n2.Papel\n3.Tesoura\n");
    scanf("%d", &valor);

    return valor;
}

void comparacao(int jogador, int maquina)
{
    if(jogador == maquina)
    {
        printf("### Empate! ###");
    }else if(jogador == 1 && maquina == 3 ||
            jogador == 2 && maquina == 1 ||
            jogador == 3 && maquina == 2)
    {
        printf("### Jogador vence! ###\n\n");
    }else{
        printf("### Jogador perde! ###\n\n");
    }
}

void jokenpo(int escolha, char ID[8])
{
    switch (escolha)
    {
    case 1:

        printf("%s: Pedra\n", ID);
        break;

    case 2:

        printf("%s: Papel\n", ID);
        break;

    case 3:

        printf("%s: Tesoura\n", ID);
        break;

    default:

        printf("%s: Invalido\n", ID);
        break;
    }

}

int main()
{
    char IDJ[8] = "jogador";
    char IDM[8] = "maquina";
    int jogador;
    int maquina;

    srand(time(0));
    maquina = rand() % 3+1;
    jogador = leitura();
    jokenpo(jogador,IDJ);
    jokenpo(maquina,IDM);
    comparacao(jogador,maquina);

}