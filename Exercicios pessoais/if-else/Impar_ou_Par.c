#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    //Declara��o de variaveis:

    int numero;

    //------------------------CODIGO--------------------------//
    printf("Adicione um n�mero inteiro:\n");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("Esse n�mero � Par!\n");
    }
    else
    {
        printf("Esse n�mero � impar!\n");
    }
    


    system("pause");

    return 0;
}