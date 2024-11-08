#include <stdio.h>

int main()
{
   int valor;

   printf("Digite um valor:\n");
   scanf("%d",&valor);

   if(valor % 2 == 0){
   	printf("O valor eh par");
   }
   else {
      printf("Eh impar");
   }
    return 0;
}
