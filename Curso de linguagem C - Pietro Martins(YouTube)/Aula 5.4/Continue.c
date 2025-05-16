#include <stdio.h> // inclusão da biblioteca de printf e scanf
#include <stdlib.h> // biblioteca do system
#include <locale.h> // biblioteca do suporte a pt-br (acentuação e cidilía)

int main()
{
    setlocale(LC_ALL,"portuguese"); // comando para ativação do suporte a pt-br

    // declaração de variaveis

    int condicao; //Variavel utilizada no nosso sistema de loop do-while

    // comandos

    for (condicao = 1; condicao <= 10; condicao++) 
    {
        if (condicao == 4)
        {
           continue;/* Ao contrario do comando 'break' o 'continue' não encerra o loop ao qual está relacionado, ele se assemelha
           mais a um pulo de um ou mais blocos especificos do loop, funcionando como um skip ele vai pular o bloco atual de comando
           do loop a partir de sua execução e executar o proximo bloco, assim como o comando 'break' ele se torna mais utilizavel
           com auxilio de um comando 'if' o qual da o programador um controle maior de quandoe por quanto tempo o 'continue' sera 
           executado */
        }
        
        printf("%d ", condicao); //Bloco de comandos, com o comando que se repetirá
        
    }
    

    return 0;
    
}