#include <stdio.h> // entrada e saida de dados com printf e scanf
#include <locale.h> // suporte a pt-br
#include <stdlib.h> // suporte ao system

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // parte essencial do comando de suporte a pt-br

    //Declara��o de variaveis:

    int condicao = 1;

    //------------------------CODIGO--------------------------//

    while (condicao <= 10) // While � aberto com parenteces para a adi��o de uma condi��o para a repeti��o
    { // e com um par de chaves onde � feito o codigo que ira se repitir
        printf("%d\n", condicao);
        condicao++; /* essa condi��o deve ter uma atribui��o ou sendo um incremento ou um decremento que em algum momento desejado 
        ira fazer com que o loop se encerre tornando a condi��o de repeti��o falsa, o codigo do while so se repete enquanto
        a condi��o dada a ele for verdadeira */
    }
    
    system("pause");

    return 0;
}