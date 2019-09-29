#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  /* Sintaxis de los apuntadores
  float val;
  Declaracion del apuntador:
  float*apVal; resaltando el * que nos indica que es un apuntador
  Regresa la direccion de una variable
  apVal = &val; & es el operador de direccion
  Asigna el dato en la direccion de memoria guardada
  *apVal = 3.1416;
  */

  printf("Apuntadores \n");

  float val;

  float *apVal;
  apVal = &val;

  *apVal =3.1416;

  printf("El valor de la variable val es: %f \n",val);




  return 0;
}