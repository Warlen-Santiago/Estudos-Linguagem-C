#include <stdio.h> // inclus�o da biblioteca de printf e scanf
#include <stdlib.h> // biblioteca do system
#include <locale.h> // biblioteca do suporte a pt-br (acentua��o e cidil�a)

int main()
{
    setlocale(LC_ALL,"portuguese"); // comando para ativa��o do suporte a pt-br

    // declara��o de variaveis

    int condicao = 1; //Variavel utilizada no nosso sistema de loop do-while

    // comandos

    do // inicio do-while
    {
        printf("N�mero %d\n", condicao); // bloco de comandos
        condicao++; // atribuidor da vriavel para quebra do loop

    } while (condicao <=10); // condi�a� de repeti��o dol oop

    return 0;
    
}