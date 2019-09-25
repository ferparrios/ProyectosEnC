#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  printf("Arreglos Unidimensionales \n");

  int integerList[3];
  integerList[0] = 4;
  integerList[1] = 5;
  integerList[2] = 6;

  float floatList[] = {23.4, 34.5, 45.6, 21.8, 56.7};

  char charList[4];
  charList[0] = 'A';
  charList[1] = 'd';
  charList[2] = 'r';
  charList[3] = 'i';


  printf("\n Primer entero: \t\t %i", integerList[0]);
  printf("\n Primer float: \t\t %f", floatList[0]);
  printf("\n Lista de caracteres: \t %c%c%c%c. \n",charList[0], charList[1], charList[2], charList[3]);

  return 0;
}