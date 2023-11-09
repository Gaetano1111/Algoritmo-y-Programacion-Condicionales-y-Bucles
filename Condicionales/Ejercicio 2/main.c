#include <stdio.h>
#include <stdlib.h>

int main()
{
   //
   // se declara la variable numero
   int numero;
   printf("ingrese un numero ");
   scanf("%d",&numero);
   if(numero%2 == 0){
    printf ("el numero es par");
   }
   else{
    printf("el numero es impar");
   }



    return 0;
}
