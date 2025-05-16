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
        printf("%d ", condicao); //Bloco de comandos, com o comando que se repetirá

        if (condicao == 4)
        {
           break; /* Break é um comando de parada realacionado a um loop, ele encerra o loop relacionado por completo e segue com
           o codigo fora do loop a partir da sua execução, ele pode ser adicionado diretamente no bloco de comandos do loop porém
           isso faria com que o loop se repitisse somente uma vez, utilizando um 'if' podemos fazer com que a execução do loop pare
           onde for mais conveniente para o programador*/
        }
        
    }
    

    return 0;
    
}