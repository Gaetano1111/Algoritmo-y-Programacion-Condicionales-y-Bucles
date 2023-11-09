#include <stdio.h>
#include <stdlib.h>

/**Crea un programa que calcule el promedio de tres notas ingresadas por el usuario
   y determine si el estudiante aprobo o no el curso

   si es entre 20 y 16 entonces aprobado
   si es entre 15 y 10 entonces aprobado
   si es menor a 10 entonces reprobado
   **/
int main()
{
  int calificacion;
  char nombre[20];
  printf("ingrese su calificacion");
  scanf("%d", &calificacion);
  printf("ingrese su nombre");
  scanf("%s", &nombre);
  if(calificacion >=20 || calificacion <=16){
    printf("El estudiante %s aprobo con %d",nombre,calificacion);

  }
  else if(calificacion >=15 || calificacion <=10){
    printf("El estudiante %s aprobo con %d",nombre,calificacion);
  }
  else{
    printf("reprobado");
  }





    return 0;
}
