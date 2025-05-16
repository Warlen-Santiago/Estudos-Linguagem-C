#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    //Declaração de variaveis:

    int vetor[5] = { 10, 20, 30, 40, 50}; // Vetor já inicializado com 5 casas 0,1,2,3,4
    int i; // variavel de controle do codigo de loop 'for'



    //------------------------CODIGO--------------------------//

    printf("Insira os dados que serão armazenados:\n");

    for ( i = 0; i < 5; i++)// codigo de loop 'for'
    {
        printf("Insira um dado:\n"); /* O for pode ser uilizado como entrada e saida de dados para fazer um preenchimento ou 
        utilização linear das casas de um vetor*/
        scanf("%d", &vetor[i]);


    }
    printf("\n");
    printf("Dados inseridos:\n");


    
    for ( i = 0; i < 5; i++)// codigo de loop 'for'
    {
        
        printf("%d ", vetor[i]);


    }
    printf("\n");



    system("pause");

    return 0;
}