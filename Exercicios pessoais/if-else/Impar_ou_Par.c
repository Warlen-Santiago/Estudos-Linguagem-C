#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    //Declaração de variaveis:

    int numero;

    //------------------------CODIGO--------------------------//
    printf("Adicione um número inteiro:\n");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("Esse número é Par!\n");
    }
    else
    {
        printf("Esse número é impar!\n");
    }
    


    system("pause");

    return 0;
}