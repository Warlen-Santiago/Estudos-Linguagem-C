#include <stdio.h>
 
int main(){

    int idade = 0;
    float peso = 0;

    system("cls");

    printf("Digite uma idade:\n");
    scanf("%d", &idade);

    printf("Agora digite um peso:\n");
    scanf("%f", &peso);

    printf("Idade informada: %d.\n", idade);
    printf("Peso informado: %f.\n", peso);

     }