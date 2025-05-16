#include <stdio.h>


int main(){
    int valor = 10;

    valor++;
    printf("Valor apos incremento de +1 utilizando ++: %d\n", valor);

    valor--;
    printf("Valor apos decremento de -1 utilizando --: %d\n", valor);

    valor+= 3;
    printf("Valor apos incremento escolhido pelo usuario utilizando +=, incremento escolhido de 3: %d\n", valor);

    valor-= 3;
    printf("Valor apos decremento escolhido pelo usuario utilizando -=, decremento escolhido de 3: %d\n", valor);

    valor*= 10;
    printf("Valor apos multiplicacao escolhida pelo usuario utilizando *=, multiplicacao escolhida de 10: %d\n", valor);

    valor/= 2;
    printf("Valor apos divisao escolhida pelo usuario utilizando /=, divisao escolhida de 2: %d\n", valor);

    system("pause");
}