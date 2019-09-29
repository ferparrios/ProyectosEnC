#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  int arrregloBi[3][4] = {
    {3,-2,0,3},
    {5,-4,3,6},
    {9,10,3,4}
  };

  int suma1, suma2, suma3;

  suma1 = arrregloBi[0][0] + arrregloBi[0][1] + arrregloBi[0][2] + arrregloBi[0][3];
  suma2 = arrregloBi[1][0] + arrregloBi[1][1] + arrregloBi[1][2] + arrregloBi[1][3];
  suma3 = arrregloBi[2][0] + arrregloBi[2][1] + arrregloBi[2][2] + arrregloBi[2][3];

  printf("La suma de los elementos de la primera fila es: %i \n", suma1);
  printf("La suma de los elementos de la segunda fila es: %i \n", suma2);
  printf("La suma de los elementos de la tercera fila es: %i \n", suma3);



  return 0;
}