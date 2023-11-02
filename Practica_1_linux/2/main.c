#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int fp = 0;
    char buffer [50];
    int tamanyo = read(0,buffer,50);

    if(argc == 2){ //si nos pasan un parametro
        fp = creat(argv[1],7777); //7777 concede todos los permisos
        while(tamanyo > 0){
            write(argv[1],buffer,50);
            read(0,buffer,50);
        }
    }else{ //si no nos pasan un parametro
        while(tamanyo > 0){
            write(1,buffer,50);//escribe sobre la salida estandar
            read(0,buffer,50); //lee sobre la entrada estandar
        }
    }



    return 0;
}
