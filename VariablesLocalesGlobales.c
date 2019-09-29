#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


char publicText[] = {"Texto en una variable global"};//esta variable esta afuera de la funcion por lo tanto es una variable global

void check(){

  printf("\n Imprimir desde la funcion check");

  printf("Variable global");
  printf("%s", publicText);

  printf("Variable Local \n");
  //printf("%s", privateText);//esta es una variable local por lo que no se puede llamar


}

int main(){

  printf("Variables Globales \n");

  char privateText[] = {"Texto en una variable local \n"};//esta variable local solo se lee desde la fguncion en la que se encuentra  

  printf("Variable global: \n");
  printf("%s", publicText);

  printf("Variblae local \n");
  //printf("%s", privateText);

  check();

  return 0;
}