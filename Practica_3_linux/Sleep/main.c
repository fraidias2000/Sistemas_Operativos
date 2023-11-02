#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>
void tratamiento(size_t valorPID);

int main(int argc, char* argv[]){
    size_t valorPID = fork();
    int valorARGV = atoi(argv[1]);
    signal(SIGALRM,&tratamiento);
    if(valorPID == 0){
        printf("Me duermo %d segundos \n", valorARGV);
        alarm(valorARGV);
        pause();
        printf("Sigo despues de %d segundos\n", valorARGV);
        exit(0);

    }else if(valorPID < 0){
        write(2,"Error al crear un proceso",26);
    }
    wait(valorPID);
    return 0;
}
void tratamiento(size_t valorPID){
   //kill(valorPID,SIGCONT);
}
