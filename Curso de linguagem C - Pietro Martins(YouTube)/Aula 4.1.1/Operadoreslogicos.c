#include <stdio.h>
#include <locale.h> //Biblioteca de suporte a PT-BR

int main()
{
   setlocale(LC_ALL, "Portuguese");

   //Declaração de variaveis

   float nota;

   //Comandos

   printf("Adicione sua nota:\n");
   scanf("%f", &nota);

   if( nota >= 2.5 && nota < 6.5) //Se a nota do aluno for maior que 2,5 e menor que 6,5 ele tem direito a fazer recuperação
   {
       printf("Você tem direito a recuperação, se dedique\n");

   }
system("pause");

return 0;
}