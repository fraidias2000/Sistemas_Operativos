//COMUNICACIÓN PADRE HIJO MEDIANTE PIPE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
    int fd[2];
    pipe(fd);
    char buffer[20];

    if(fork() == 0){//hijo
        close(fd[0]);
        write(fd[1],"Hola desde hijo",20);
        close(fd[1]);
        exit(0);
    }else{//Padre
        close(fd[1]);
        read(fd[0],buffer,20);
        printf("%s",buffer);
        wait(NULL);
    }
}
