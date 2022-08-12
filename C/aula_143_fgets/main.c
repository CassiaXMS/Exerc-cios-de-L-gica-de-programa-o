#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Funcao fgets para ler texto

void limpar_entrada() { //limpa a tela
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {//nao quebra a linha e faz a leitura de texto
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}
int main()
{
    char nome1[50], nome2[50];
    int idade1, idade2;

    printf("Informe idade: ");
    scanf("%d", &idade1);
    limpar_entrada();
    printf("Informe nome: ");
    ler_texto(nome1, 50);

    printf("Informe idade: ");
    scanf("%d", &idade2);
    limpar_entrada();
    printf("Informe nome: ");
    ler_texto(nome2, 50);

    printf("Idade: %d \n", idade1);
    printf("Nome: %s\n", nome1);
    printf("Idade: %d \n", idade2);
    printf("Nome: %s\n", nome2);
    return 0;
}
