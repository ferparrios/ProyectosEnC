#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  printf("Crear Archivos \n");

    FILE *archivo;

    archivo = fopen("archivo001.dat", "w");

    if (archivo != NULL)
    {
      printf("El archivo se ha creado exitosamente, comprueba en la carpeta que ha sido creado \n");
      fclose(archivo);
    }else
    {
      printf("El archivo no se ha creado \n");
    }
    
    




  return 0;
}