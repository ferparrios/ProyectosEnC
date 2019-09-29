#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(){
  printf("Cadena de Caracteres \n");

  char nameC[50];

  int size;

  printf("Ingresar el nombre con gets: \n");

  gets(nameC);//obtiene la cadena de caracteres

  printf("El nombre es: ");

  puts(nameC); //imprime la cadena directamente

  size = strlen(nameC);//en c no existen los strings

  printf("\n El tamano de la cadena es: %i \n", size);

  return 0;
  
  }