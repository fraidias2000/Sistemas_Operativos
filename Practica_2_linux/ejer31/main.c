#include <sys/wait.h>
#include <sys/types.h>
#include "error.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    int pidh;
    printf("\n Inicio prueba \n");
    fflush(stdout);
    if ((pidh = fork()) == 0){//hijo
            fprintf(stderr, "\n\t Soy el hijo: %d\n", getpid());
            fprintf(stderr, "\n\t fork() me devuelve: %d\n", pidh);
            sleep(10);
            exit(1);
            return 0;
    }
    if(wait(NULL) == -1){
        printf("error en wait");
    }
    fprintf(stdout, "\n\t Soy el padre: %d\n", getpid());
    fprintf(stdout, "\n\t fork() me devuelve: %d\n", pidh);//Devuelve el id del hijo
    exit(0);

}
