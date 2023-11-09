#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Escribir un Programa para imprimir la tabla de multiplicar de un numero dado

    //declaramos la variable numero, y hacemos que el usuario escriba un numero que el scanf va a permitir que el usuario pueda escribir
    int numero;
    printf("ingresa un numero");
    scanf("%d",&numero);
    //declaramos la variable k con un valor de 0 hasta 10 que no se pase de 10 
    for(int k = 0; k <= 10; k = k + 1)
     printf("%d x %d = %d\n", numero, k, k*numero);



    return 0;
}
