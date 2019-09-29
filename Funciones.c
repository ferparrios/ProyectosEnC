#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//void no regresa nada es igual a poner return 0

int Addition(int a, int b){

  int res = a + b; //o podemos poner return a + b, sin necesidad de declarar la variable
  return res;
}

int Potencia(int a, int b){
  int pot = (a)^b;
  return pot;
}

int main(){
  printf("Funciones \n");

  // int additionRes = Addition(3, 4);

  // printf("Resultado es: %i", additionRes);

  int potenciaRes = Potencia(2, 3);
  printf("Resultado es %i", potenciaRes);





  return 0;
}