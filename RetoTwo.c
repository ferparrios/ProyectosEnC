#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  int x = 5;
  int y;
  printf("Ingresa un numero para ver si es igual que el de la PC \n");
  scanf("Ingresa el numero: %i", &y);
  
  if(y == x){
    printf("El numero es el mismo, Adivinaste!");
  }else{
    printf("Tu numero no es el correcto");
  }
  return 0;
}