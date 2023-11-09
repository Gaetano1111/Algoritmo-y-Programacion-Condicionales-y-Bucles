#include <stdio.h>
#include <stdlib.h>

int main()
{
   //
   // se declara la variable numero
   int numero;
   printf("ingrese un numero ");
   //aplicamos el scanf para que el usuario pueda escribir
   scanf("%d",&numero);
   //se usa para identificar si el numero es par y si no es par se aplica el else por lo que el numero es impar
   if(numero%2 == 0){
    printf ("el numero es par");
   }
   else{
    printf("el numero es impar");
   }



    return 0;
}
