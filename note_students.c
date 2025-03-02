#include <stdio.h>


float lerValores()
{
    float valor;
    printf("Digite o valor: ");
    scanf("%f", &valor);

    return valor;
}

float calcularValores(float x,float y)
{
    float divisao = (x + y)/2;

    return divisao;
}   

int main()
{
    float nota1;
    float nota2;
    float media;
    nota1 = lerValores();
    nota2 = lerValores();
    media = calcularValores(nota1, nota2);

    printf("A média do aluno é: %.1f \n", media);

    return 0;
}
