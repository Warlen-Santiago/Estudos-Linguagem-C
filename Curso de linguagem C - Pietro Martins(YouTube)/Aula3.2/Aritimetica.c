#include <stdio.h>


int main(){
    int A, B, soma, sub, mult, divis;

    printf("Digite o primeiro valor\n");
    scanf("%d", &A);
    printf("Digite o segundo valor\n");
    scanf("%d", &B);

    soma = A + B;
    sub = A - B;
    mult = A * B;
    divis = A / B;

    printf("Resultados:\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", sub);
    printf("Multiplicacao: %d\n", mult);
    printf("Divisao: %d\n", divis);

    system("pause");
}