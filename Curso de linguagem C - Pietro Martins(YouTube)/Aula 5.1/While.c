#include <stdio.h> // entrada e saida de dados com printf e scanf
#include <locale.h> // suporte a pt-br
#include <stdlib.h> // suporte ao system

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // parte essencial do comando de suporte a pt-br

    //Declaração de variaveis:

    int condicao = 1;

    //------------------------CODIGO--------------------------//

    while (condicao <= 10) // While é aberto com parenteces para a adição de uma condição para a repetição
    { // e com um par de chaves onde é feito o codigo que ira se repitir
        printf("%d\n", condicao);
        condicao++; /* essa condição deve ter uma atribuição ou sendo um incremento ou um decremento que em algum momento desejado 
        ira fazer com que o loop se encerre tornando a condição de repetição falsa, o codigo do while so se repete enquanto
        a condição dada a ele for verdadeira */
    }
    
    system("pause");

    return 0;
}