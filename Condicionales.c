#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  printf("Condicion if\n");
    float valA, valB,valC;
    valA = valB = 100;

  printf("Primera Condicion \n");
    if(valA == valB)
    printf("Ambos son iguales");

  printf("Segunda Condicion");
    if(valA == valB){
      printf("Ambos son Iguales");
      valC = valA + valB;
      printf("Ademas la suma de ambos numeros es %f", valC);
    }
    

      return 0;

}