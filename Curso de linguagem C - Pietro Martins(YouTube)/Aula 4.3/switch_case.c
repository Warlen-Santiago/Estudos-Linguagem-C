#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    //Declara��o de variaveis:

    int n;

    //------------------------CODIGO--------------------------//

    printf("MENU\n");

    printf(" 1 Batata frita\n 2 Batata cozida\n 3 batata assada\n 4 Pure de batata\n");

    printf("Selecione a op��o desejada:\n");
    scanf("%d", &n);


    switch (n)
    {
    case 1:
        printf("Voc� escolheu batata frita\n");
        break;
    case 2:
        printf("Voc� escolheu batata cozida\n");
        break;
    case 3:
        printf("Voc� escolheu batata assada\n");
        break;
    case 4:
        printf("Voc� escolheu pure de batata\n");
        break;
    default:
    printf("Selecione uma op��o valida e tente novamente");
        break;
    }


    system("pause");

    return 0;
}