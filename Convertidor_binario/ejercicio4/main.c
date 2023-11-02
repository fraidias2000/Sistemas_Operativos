#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i = 0;
    int resultado =0;


    char numero_binario[50];
    printf("Dime el numero binario ");
    gets(numero_binario);


    while(numero_binario[i]!= '\0'){

        resultado = resultado*2 + numero_binario[i] - '0';
        i++;
    }

    printf("%d \n",resultado);

    return 0;
}
