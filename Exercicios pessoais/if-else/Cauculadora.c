#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    //Declara��o de variaveis:

   float n1, n2, resultado;
   char operador;

    //------------------------CODIGO--------------------------//
    printf("***CALCULADORA***\n");

    printf("Adicione o primeiro n�mero:\n");
    scanf("%f", &n1);

    printf("\n");

    printf("Adicione o segundo n�mero:\n");
    scanf("%f", &n2);
    
    printf("\n");

    printf("Adicione o operador desejado,\n \n multiplica��o = *, divis�o = /, soma = + e subtra��o = -\n");

    printf("\n");

    scanf("%c", &operador);

    if (operador == '+')
    {
        resultado = n1 + n2;

        printf("O resutado � %.2f\n", resultado);
    }
    else
        {
            if (operador == '-')
            {
                resultado = n1 - n2; 

                printf("O resultado � %.2f\n", resultado);

            }
            
        }



    system("pause");

    return 0;
}