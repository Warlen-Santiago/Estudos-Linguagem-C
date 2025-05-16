#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    //Declaração de variaveis:

    int vetor[5] = { 10, 20, 30, 40, 50}; /*Quando criamos um vetor podemos inicializalo de forma mais pratica logo de cara
    essa inicialização é feita com o sinal de atribuição '=' e declarada ente '{}' som o que vai ser armazenado separado
    por , e colocado sequencialmente em o que ira ficar em cada casa, lembrando que elas comçam pelo digito '0'*/
    int soma;



    //------------------------CODIGO--------------------------//

    //Para utilizar a casa de um vetor é a mesma coisa da utilização de uma variavel, mudando somente pela especificação da casa 
    // Ex: vetor[0], vetor[1], vetor[3], é interessante destacar que os vetores começam a partir do digito zero

    soma = vetor[0] + vetor[1] + vetor[2] + vetor[3] + vetor[4];

    printf("Resultado = %d\n", soma/5);




    system("pause");

    return 0;
}