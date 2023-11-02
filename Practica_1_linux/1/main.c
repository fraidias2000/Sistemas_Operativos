#include <stdio.h>
#include <stdlib.h>

int main(){
    int fp = 0;
    char buffer [50];
    int tamanyo = read(0,buffer,50);
        while(tamanyo > 0){
            write(1,buffer,50);//escribe sobre la salida estandar
            read(0,buffer,50); //lee sobre la entrada estandar
        }
    return 0;
    }




