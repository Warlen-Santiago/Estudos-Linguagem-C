#include <stdio.h>
#include <locale.h> //Biblioteca de linguagem pt-br
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    //Declara��o de variaveis:

    int numero;
    int antecessor, sucessor;
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    int p2, p4, p6;


    //------------------------CODIGO--------------------------//

    printf("Adicione um n�mero:\n");
    scanf("%d",&numero);

    // Antecessor e sucessor do n�mero escolhido

    antecessor = numero - 1;
    sucessor = numero + 1;

    // Tabela de multiplica��o do n�mero escolhido

    n1 = numero *1;
    n2 = numero *2;
    n3 = numero *3;
    n4 = numero *4;
    n5 = numero *5;
    n6 = numero *6;
    n7 = numero *7;
    n8 = numero *8;
    n9 = numero *9;
    n10 = numero *10;

    // Proximos tr�s n�meros contando de 2 em 2

    p2 = numero +2;
    p4 = numero +4;
    p6 = numero +6;
    
    // SAIDA DE DADOS

    printf("O n�mero escolhido foi: %d\n", numero);

    printf("Presione qualquer tecla para ver o antecessor e o sucessor desse n�mero\n");
    printf("\n");

    system("pause");

    //Antecessor e sucessor

    printf("Seu antecessor � %d\n", antecessor);
    printf("Seu sucessor � %d\n", sucessor);
    
    printf("Presione qualquer tecla para ver a tabela de multiplica��o do n�mero\n");
    printf("\n");

    system("pause");

    //Tabela de multiplica�a�

    printf("Tabela de multiplica��o do n�mero:%d\n", numero);

    printf("\n");

    printf("%d X 1 = %d\n", numero, n1);
    printf("%d X 2 = %d\n", numero, n2);
    printf("%d X 3 = %d\n", numero, n3);
    printf("%d X 4 = %d\n", numero, n4);
    printf("%d X 5 = %d\n", numero, n5);
    printf("%d X 6 = %d\n", numero, n6);
    printf("%d X 7 = %d\n", numero, n7);
    printf("%d X 8 = %d\n", numero, n8);
    printf("%d X 9 = %d\n", numero, n9);
    printf("%d X 10 = %d\n", numero, n10);

    printf("\n");

    printf("Presione qualquer tecla para ver os proximos 3 n�meros contando de 2 em 2\n");
    printf("\n");

    system("pause");

    //Contagem de 2 em 2

    printf("A contagem de 2 em 2 do n�mero %d � %d, %d, %d\n", numero, p2, p4, p6);


    system("pause");

    return 0;
}