#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Escriba un programa para usar el ciclo for para imprimir el siguiente patron numerico inverso
    //declaramos la variable i con un valor de 5 hasta el 1
    for(int i = 5;i >= 1 ; i--){
    //declaramos la variable j con un valor de 1 que no sea mayor que 1
    for(int j = 1; j <= i; j++){
        printf("%d",j);
    }
        printf("\n");
   }




    return 0;
}
