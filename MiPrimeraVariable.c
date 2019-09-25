#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  int integerA;
  float floatA;
  // double doubleA;
  char letterA;
  //bool boolean = false;


  //En la siguiente linea estamos imprimiendo la variable integerA
  //printf("El valor de nuestro entero A es: %i \n, El valor de mi flotante A es: %f \n, El valor de mi double A es: %f\n, El valor de mi caracter A es: %c\n", integerA, floatA, doubleA, letterA);

  // printf("El valor de mi flotante A es: %f \n", floatA);

  // printf("El valor de mi double A es: %f \n", doubleA);

  // printf("El valor de mi caracter A es: %c \n", letterA);

  //Ingresar un valor
  printf("Ingresa el valor del entero A: ");

  scanf("%i", &integerA);

  printf("El entero A es: %i", integerA);

  printf("Ingresa el valor del flotante A: ");

  scanf("%f", &floatA);

  printf("El entero A es: %f", floatA);

  printf("Ingresa el valor del caracter A: ");

  scanf("%c", &letterA);

  printf("El entero A es: %c", letterA);

  return 0;
}