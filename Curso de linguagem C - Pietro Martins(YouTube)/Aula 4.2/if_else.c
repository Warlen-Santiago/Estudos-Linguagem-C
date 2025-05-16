#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    //Declaração de variaveis:

    float nota;

    //------------------------CODIGO--------------------------//

    printf("Insira sua nota:\n");
    scanf("%f", &nota);

    if( nota >= 7 )
    {
        printf("PARABÉNS!! VOCÊ FOI APROVADO\n");
    }
    else
    {
        printf("Você foi reprovado :(\n");
    }

    system("pause");

    return 0;


}