#include <stdio.h>
#include <stdlib.h>

int main()
{
   /**Realiza un programa que determine si un numero ingresado por el usuario es positivon negativo o cero**/

   //determinamos la variable numero aplicamos un scanf para que el usuario pueda escribir un numero
   int numero;
   printf("ingrese un numero");
   scanf("%d",&numero);
   //aplicamos el if para decir que si el numero es mayor que 0 es positivo
   if(numero > 0){
    printf("el numero es positivo");
   }
   //aplicamos el else if para decir que si el numero es menor que 0 es negativo
   else if(numero < 0){
    printf("el numero es negativo");
   }
   //y aplicamos else para decir que 0 es 0
   else{
    printf("el numero es cero");
   }



    return 0;
}
