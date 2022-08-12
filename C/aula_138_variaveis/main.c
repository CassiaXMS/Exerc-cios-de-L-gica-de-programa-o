#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int idade;
    double salario, altura;
    char genero;
    char nome[50];//vetor de  50 caracteres

    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    genero = 'F';

    strcpy(nome, "Maria Silva"); //funcao para trabalhar com texto

    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);//mascara lf para double
    printf("ALTURA = %.2lf\n", altura);
    printf("GENERO = %c\n", genero);//%c para caracteres
    printf("NOME = %s\n", nome);//%s para texto (string)

    return 0;
}
