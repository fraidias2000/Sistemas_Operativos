#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

int main()
{
    pid_t pid = fork();
    int idHijo;
    int procesoHIjo;
    int holaamigo ;//Valor arbitrario
    if(pid == 0){
            idHijo = getpid ();
            printf("EL id del proceso hijo es %d \n",getpid());
            sleep(5);
            exit(5);
    }
    //procesoHIjo = waitpid(-1,&idHijo);
    procesoHIjo = wait(&holaamigo);
    if(procesoHIjo == -1 ){
        printf("Error al finalizar el proceso");
    }else{
        printf("El proceso %d y con estado: %d se ha acabado",procesoHIjo,WEXITSTATUS(holaamigo));
    }
    return 0;
}
