#include <stdio.h>
int main(){
    int pid;
    if (fork() == 0){ //HIJO
        pid = getppid();
        printf("\n pid padre antes = %d\n", pid);
        sleep(10); // damos tiempo a que muera el padre
        pid = getppid();
        printf(" pid padre despues = %d\n", getppid());
        exit(1);
    }
    sleep(5);
    exit(0);
}
