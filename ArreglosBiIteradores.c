#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  int integerArrayBi[4][5];

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      integerArrayBi[i][j] = ((i + j)* 100 + j);
      printf("(%i, %i): %i \n", i, j, integerArrayBi[i][j]); 
    }
    
  }
  




  return 0;
}