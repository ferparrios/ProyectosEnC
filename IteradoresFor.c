#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  printf("Iteradores For \n");

  int upperLim, bottomLim;

  printf("Imprimir en orden descendiente \n");

  printf("Imprimir en el limite superior \n");
  scanf("%i", &upperLim);

  printf("Imprimir en el limite inferior \n");
  scanf("%i", &bottomLim);

  for (int i = upperLim; i >= bottomLim; i--)
  {
    printf("Numero: %i \n", i);
  }
  



  return 0;
}