#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Realiza un programa que determine si un numero ingresado por el usuario es positivon negativo o cero
   int numero;
   printf("ingrese un numero");
   scanf("%d",&numero);
   if(numero > 0){
    printf("el numero es positivo");
   }
   else if(numero < 0){
    printf("el numero es negativo");
   }
   else{
    printf("el numero es cero");
   }



    return 0;
}
