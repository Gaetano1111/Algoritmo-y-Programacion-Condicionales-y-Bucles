#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Escriba un programa para imprimir el siguiente patron numerico usando un bucle

   //declaramos la variable i y le damos un valor de 1 y que hasta 5 
   for(int i = 1;i <= 5; i++){
   //declaramos la variable j y le damos un valor de 1 y que no sea mayor que i 
   for(int j = 1; j <= i; j++){
        printf("%d",j);
    }
        printf("\n");
   }




    return 0;
}
