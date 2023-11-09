#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("ingresa un numero");
    scanf("%d",&numero);

    for(int k = 0; k <= 10; k = k + 1)
     printf("%d x %d = %d\n", numero, k, k*numero);



    return 0;
}
