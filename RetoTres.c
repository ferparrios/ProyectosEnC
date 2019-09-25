#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  int x, y;
  
  printf("Ingresa el primer numero: \n");
  scanf("%i", &x);
  printf("Ingresa el segundo numero: \n");
  scanf(" %i", &y);

  if(x < y){
    printf("El primer numero es: %i",x);
  }




  return 0;
}
