#include <stdio.h>

int main()
{
    int idade, matricula;
    float altura; 
    char nome[50];
    //idade do aluno
     printf("Digite sua idade\n");
     scanf("%d", &idade);
    //altura do aluno
     printf("Digite sua altura\n");
     scanf("%f", &altura);
    //nome do aluno
     printf("Digite seu nome\n");
     scanf("%s", &nome);
    //matricula do aluno
     printf("Digite sua matricula\n");
     scanf("%d", &matricula);

     printf("Cadastro do aluno \n");
     printf("Nome: %s\nIdade: %d\nAltura: %.2f\nMatricula: %d\n", nome, idade, altura, matricula);

     return 0;
}
