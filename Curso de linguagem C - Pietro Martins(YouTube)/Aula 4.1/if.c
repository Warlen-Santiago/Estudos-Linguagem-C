#include <stdio.h>

int main()
{

    float nota = 0;

    printf("Insira a nota do aluno:\n");
    scanf("%f", &nota);

    if (nota >= 7.0)
    {
     printf("APROVADO!\n");
    }
    
    if (nota <= 6.9)
    {
     printf("Reprovado :(\n");
    }
    
    system("pause");
}