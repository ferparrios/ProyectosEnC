#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  printf("The Witcher \n");

  int option;
  printf("Escoge las acciones que tiene que realizar Geralt seleccionando numero del 1 al 3 \n");
  scanf("%i", &option);

  switch (option)
  {
  case 1:
    printf("Geralt te tiene que matar!, corre");
    break;

    case 2:
    printf("Geralt se matará al Ogro");
    break;

    case 3:
    printf("Geralt matará al Dragón");
    break;
  
  default:
  printf("Geralt se irá a tomar un baño :v");
    break;
  }

  return 0;
}