#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    //Declara��o de variaveis:
    
    int n1, n2, n3;

    //------------------------CODIGO--------------------------//
    printf("Insira 3 n�meros, insira um e presione enter para adicionar outro:\n");
    scanf("%d",&n1);
    printf("\n");
    scanf("%d",&n2);
    printf("\n");
    scanf("%d",&n3);

    printf("Os numeros escolhidos foram: %d, %d, %d\n", n1, n2, n3);

    if (n1 > n2 && n1 > n3)
     {
       printf("%d � o maior n�mero\n",  n1);
     }
    else
    {
        if (n2 > n1 && n2 > n3)
         {
            printf("%d � o maior n�mero\n", n2);
         }
       else
         {
            printf("%d � o maior n�mero\n", n3);
         }
    }
    
  

    system("pause");

    return 0;
}