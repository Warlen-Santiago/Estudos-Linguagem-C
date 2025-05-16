#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    //Declaração de variaveis:

    int Windows, Unix, Linux, Netware, Mac, Outro;

    Windows = 0;
    Unix = 0;
    Linux = 0;
    Netware = 0;
    Mac = 0;
    Outro = 0;

    int cond = 1;



    //------------------------CODIGO--------------------------//
    system("cls");

    

    while (cond != 0)
    {
    printf("\n");

    printf("Qual o melhor sistema operacional para uso em servidores?\n");

    printf("\n");

    printf("1- Windows Server.\n2 - Unix.\n3 - Linux.\n4 - Netware.\n5 - Mac OS.\n6 - Outro.\n0 - Parar contagem.\n");
    scanf("%d", &cond);

    switch (cond)
    {
    case 1:
        printf("Você escolheu Windows Server !\n");
        Windows++;
        
        break;
    case 2:
        printf("Você escolheu Unix !\n");
        Unix++;
        
        break;
    case 3:
        printf("Você escolheu Linux !\n");
        Linux++;
        
        break;
    case 4:
        printf("Você escolheu Netware !\n");
        Netware++;
        
        break;
    case 5:
        printf("Você escolheu Mac OS !\n");
        Mac++;
        
        break;
    case 6:
        printf("Você escolheu Outro !\n");
        Outro++;
        
        break;
    case 0:
        break;
        break;
    
    default:
        printf("Escolha uma opção valida!\n");
        break;
    }
    }
    printf("\n");

    printf("Resultados:\n");

    printf("Usuarios que preferem Windows Server: %d\n", Windows);
    printf("Usuarios que preferem Unix: %d\n", Unix);
    printf("Usuarios que preferem Linux: %d\n", Linux);
    printf("Usuarios que preferem Netware: %d\n", Netware);
    printf("Usuarios que preferem Mac OS: %d\n", Mac);
    printf("Usuarios que preferem Outros: %d\n", Outro);

    


    system("pause");

    return 0;
}