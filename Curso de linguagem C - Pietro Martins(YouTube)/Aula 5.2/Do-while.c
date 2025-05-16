#include <stdio.h> // inclusão da biblioteca de printf e scanf
#include <stdlib.h> // biblioteca do system
#include <locale.h> // biblioteca do suporte a pt-br (acentuação e cidilía)

int main()
{
    setlocale(LC_ALL,"portuguese"); // comando para ativação do suporte a pt-br

    // declaração de variaveis

    int condicao = 1; //Variavel utilizada no nosso sistema de loop do-while

    // comandos

    do // inicio do-while
    {
        printf("Número %d\n", condicao); // bloco de comandos
        condicao++; // atribuidor da vriavel para quebra do loop

    } while (condicao <=10); // condiçaõ de repetição dol oop

    return 0;
    
}