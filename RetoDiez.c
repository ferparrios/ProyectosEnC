#include <stdio.h>
#include <stdlib.h>

float ConvertUSD(float usd)
{
    float result;

    result = (usd * 20.57)/1;

    return result;
}

float ConvertSOL(float sol)
{
    float result;

    result = (sol * 3.35)/1;

    return result;
}

int main()
{
    char inputAnswer;
    float inputAmmount;

    printf("Vamos a convertir cantidades de dinero");
    printf("\nSi quieres convertir de dolares a soles presiona S");
    printf("\nSi quieres convertir de soles a dolares presiona D");

    scanf("%c", &inputAnswer);

    printf("\nEscribe la cantidad que quieres cambiar");

    scanf("%f", &inputAmmount);

    if(inputAnswer == 'P')
    {
        printf("El resultado es: %f", ConvertUSD(inputAmmount));
    }else if(inputAnswer == 'D')
    {
        printf("El resultado es: %f", ConvertSOL(inputAmmount));
    }


    return 0;
}





