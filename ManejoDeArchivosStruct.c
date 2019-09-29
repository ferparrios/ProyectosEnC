#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//creando el struct
struct personalData
{
  char name[20];
  char lastName[20];
  int age;
};


int main(){
  printf("Estructuras de Datos - Guardar en Archivo \n");

  struct personalData person;

  FILE *archivo;
  //archivo = fopen("DatosPersonales001.dat", "wb"); //wb es para escribir en el archivo
  archivo = fopen("DatosPersonales001.dat", "rb"); //rb es para leer en un archivo

  if (archivo != NULL)
  {
  //   fflush(stdin);
  
  // printf("Leer datos: \n");
  // printf("Ingresar Nombre: \n");
  // gets(person.name);

  // printf("Ingresar Apellido: \n");
  // gets(person.lastName);

  // printf("Ingresar Edad: \n");
  // scanf("%i", &person.age);

  // printf("Imprimir Datos: \n");
  // printf("%s \n", person.name);
  // printf("%s \n", person.lastName);
  // printf("%i \n", person.age);

  // fwrite(&person, sizeof(person), 1, archivo);
  fread(&person, sizeof(person), 1, archivo);

  printf("Imprimir los datos \n");
  printf("Nombre: %s \n", person.name);
  printf("Apellido: %s \n", person.lastName);
  printf("Edad: %i \n", person.age);

  fclose(archivo);
  }else
  {
    printf("No se ha podido crear el archivo");
  }
  

  return 0;
}