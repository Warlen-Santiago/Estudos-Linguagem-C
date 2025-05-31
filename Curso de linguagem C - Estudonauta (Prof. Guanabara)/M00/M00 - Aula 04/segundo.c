#include <stdio.h>
#include <stdlib.h>
int main(){
    // Declaração de variaveis
    char nome[10];

    //Codigo funcional

    printf("Escreva seu nome\n:");
    scanf("%s", nome);

    printf("Prazer em te conhecer %s!\n", nome);

    system("pause");

    return 0;
}