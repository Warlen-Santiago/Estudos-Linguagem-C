#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    //Declaração de variaveis:

    int cases;
    float valor = 12.50;
    int quantidade;
    float valorf;

    //------------------------CODIGO--------------------------//

    printf("Escolha seu filme:\n");

    printf(" opção 1: Vingadores 4 - da Marvel\n opção 2: Como Treinar o Seu Dragão 3\n opção 3: Dumbo\n opção 4: Shazam!\n ");

    scanf("%d", &cases);

    printf("\n");

    switch (cases)
    {
    case 1:
        printf("Você escolheu Vingadores 4 - da Marvel  \n");

         printf("insira a quantidade de ingressos desejada: \n -valor do ingresso %.2f\n", valor);

         scanf("%d", &quantidade);

         valorf = quantidade * valor;

         printf("Você escolheu %d ingresos para Vingadores 4 - da Marvel \n -Valor total: R$%.2f\n ", quantidade, valorf);
         
        
        break;

    case 2:
        printf("Você escolheu Como Treinar o Seu Dragão 3  \n");

         printf("insira a quantidade de ingressos desejada: \n -valor do ingresso %.2f\n", valor);

         scanf("%d", &quantidade);

         valorf = quantidade * valor;

         printf("Você escolheu %d ingresos para Como Treinar o Seu Dragão 3 \n -Valor total: R$%.2f\n ", quantidade, valorf);
         
        
        break;

    case 3:
        printf("Você escolheu Dumbo  \n");

         printf("insira a quantidade de ingressos desejada: \n -valor do ingresso %.2f\n", valor);

         scanf("%d", &quantidade);

         valorf = quantidade * valor;

         printf("Você escolheu %d ingresos para Dumbo \n -Valor total: R$%.2f\n ", quantidade, valorf);
         
        
        break;

    case 4:
        printf("Você escolheu Shazam!  \n");

         printf("insira a quantidade de ingressos desejada: \n -valor do ingresso %.2f\n", valor);

         scanf("%d", &quantidade);

         valorf = quantidade * valor;

         printf("Você escolheu %d ingresos para Shazam! \n -Valor total: R$%.2f\n ", quantidade, valorf);
         
        
        break;
    
    default:
         printf("Escolha uma opção valida!\n");
        break;
    }

    system("pause");

    return 0;
}