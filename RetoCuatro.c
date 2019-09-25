#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  double calificacion;

  printf("Ingresa la nota del estudiante: \n");
  scanf(" %lf", &calificacion);

  if (calificacion >= 90)
  {
    printf("El alumno esta super aprobado :D \n");
  }
  else if (calificacion >= 60)
  {
    printf("El alumno esta aprobado \n");
  }else
  {
    printf("El alumno esta super desaprobado :v \n");
  }
  
  
  
  
  
  
  return 0;
}