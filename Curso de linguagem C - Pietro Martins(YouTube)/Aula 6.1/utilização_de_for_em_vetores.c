#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    //Declaração de variaveis:

    int vetor[5] = { 10, 20, 30, 40, 50}; // Vetor já inicializado
    int soma = 0; // variavel que guardara a soma das casas do vetor, ja inicializada
    int i; // variavel de controle do codigo de loop 'for'



    //------------------------CODIGO--------------------------//

    for ( i = 0; i < 5; i++) // codigo de loop 'for'
    {
        soma += vetor[i]; /* a atribuição de um valor a variavel 'soma', valor esse armazenado nas casas de nosso vetor
        casas de 0-4,  para especificação sem repetição das casas usamos uma variavel para identificar o digito de referencia
        da casa, variavel essa que sofre uma atribuição em loop para ir utilizando as casas de uma a uma */
    }
    

    

    printf("Resultado = %d\n", soma/5);




    system("pause");

    return 0;
}