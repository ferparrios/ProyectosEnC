#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  int valoresList[5];
  valoresList[0] = 1;
  valoresList[1] = 2;
  valoresList[2] = 3;
  valoresList[3] = 4;
  valoresList[4] = 5;

  int multi;

  multi = valoresList[0] * valoresList[1] * valoresList[2] * valoresList[3] * valoresList[4];

  printf("Este es el producto: %i", multi);






  return 0;
}