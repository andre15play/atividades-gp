#include <stdio.h>

int main()
{
   int Cel, Fareh, resultado;

   printf("Digite um valor na escala celsius:\n");
   scanf("%d",&Cel);

   resultado=(Cel*1.8)+32;
      printf("A Temperatura em Farenheit eh:%d",resultado);
    return 0;
}