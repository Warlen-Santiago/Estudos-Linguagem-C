#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    srand(time(NULL));

    //Declaração de variaveis:

    int escolha;

    int max = 3;
    int min = 1;


    int random = (rand() % (max - min + 1)) + min;



    //------------------------CODIGO--------------------------//

    system("cls");

    printf(" PEDRA - PAPEL - TESOURA\n");

    printf("\n");

    printf("Fase de escolha\n");

    printf("1.Pedra\n2.Papel\n3.Tesoura\n");
    scanf("%d",&escolha);

    switch (escolha)
    {
    case 1:
    printf("PEDRA!\n");
    
    system("pause");
    printf("PAPEL!\n");
    
    system("pause");
    printf("TESOURA!\n");
    
    system("pause");
        if (random == escolha)
        {
            printf("Deu empate!\n");
        }
        else
        {
            if (random == 2)
            {
                printf("Você Perdeu! a maquina escolheu papel\n");
            }
            else
            {
                printf("Você Venceu! a maquina escolheu tesoura\n");
            }
        }
        break;
        case 2:
    printf("PEDRA!\n");
    
    system("pause");
    printf("PAPEL!\n");
    
    system("pause");
    printf("TESOURA!\n");
    
    system("pause");
        if (random == escolha)
        {
            printf("Deu empate!\n");
        }
        else
        {
            if (random == 3)
            {
                printf("Você Perdeu! a maquina escolheu tesoura\n");
            }
            else
            {
                printf("Você Venceu! a maquina escolheu pedra\n");
            }
        }
        break;
        case 3:
    printf("PEDRA!\n");
    
    system("pause");
    printf("PAPEL!\n");
   
    system("pause");
    printf("TESOURA!\n");
    
    system("pause");
        if (random == escolha)
        {
            printf("Deu empate!\n");
        }
        else
        {
            if (random == 1)
            {
                printf("Você Perdeu! a maquina escolheu pedra\n");
            }
            else
            {
                printf("Você Venceu! a maquina escolheu papel\n");
            }
        }
        break;
    
    default:
    printf("Valor invalido:(\n");
        break;
    }


    system("pause");

    return 0;
}