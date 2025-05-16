#include <stdio.h>

#define texto "Preencha os dados para continuar."

int main(){

    printf("%s\n", texto);
    
    int idade = 0;
    float altura = 0.0;
    char Nome[50] = "";

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    printf("Digite sua altura:\n");
    scanf("%f", &altura);

    printf("Digite seu nome:\n");
    scanf("%s", &Nome);

    printf("Dados do usuario:\n");

    printf("Nome: %s\n", Nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);

    system("pause");





}