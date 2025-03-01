#include <stdio.h>

int valor1;
int valor2;

void entrada()
{
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
}
float calculo_dos_valores()
{
    float soma = valor1*valor2;

    return soma;
}
void exibicao(int resultado)
{
   printf("O resultado foi: %d\n", resultado);
}

int main()
{
 
    int calculo;
    entrada(valor1, valor2);
    calculo = calculo_dos_valores(valor1,valor2);
    exibicao(calculo);
}
