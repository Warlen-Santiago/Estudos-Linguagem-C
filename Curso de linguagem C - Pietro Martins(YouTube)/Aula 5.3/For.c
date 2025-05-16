#include <stdio.h> // inclusão da biblioteca de printf e scanf
#include <stdlib.h> // biblioteca do system
#include <locale.h> // biblioteca do suporte a pt-br (acentuação e cidilía)

int main()
{
    setlocale(LC_ALL,"portuguese"); // comando para ativação do suporte a pt-br

    // declaração de variaveis

    int condicao; //Variavel utilizada no nosso sistema de loop do-while

    // comandos

    for (condicao = 1; condicao <= 10; condicao++) /* O comando 'for' o qual também se trata de um comando de repetição (loop)se 
    inicia abrindo parentesses em que vão sequencialmente a 
    atribuição de um valor a variavel de controle; a condiçaõ de repetição do loop; e o sistema de parada do loop seja com um 
    encremento ou decremento */
    {
        printf("%d ", condicao); //Bloco de comandos, com o comando que se repetirá
    }
    

    return 0;
    
}