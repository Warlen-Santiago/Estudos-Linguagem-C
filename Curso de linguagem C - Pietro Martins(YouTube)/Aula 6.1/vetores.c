#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    //Declaração de variaveis:

    int vetor[5]; /* Declaração de vetores são como as declarações de variaveis, ate porque vetores são aglomerados de variaveis de 
    um tipo, a mudança da declaração é a quantidade de casas desse vetor em especifico de deve ser indicado ente o sinal de '[]' 
    com o numero de casas dentro '[5]'*/

    int soma;



    //------------------------CODIGO--------------------------//

    //Para utilizar a casa de um vetor é a mesma coisa da utilização de uma variavel, mudando somente pela especificação da casa 
    // Ex: vetor[0], vetor[1], vetor[3], é interessante destacar que os vetores começam a partir do digito zero

    vetor[0] = 10;    // Aqui temos um exemplo de atribuição das casas de um vetor
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;

    soma = vetor[0] + vetor[1] + vetor[2] + vetor[3] + vetor[4];

    printf("Resultado = %d\n", soma/5);




    system("pause");

    return 0;
}