#include <stdio.h>
#include <signal.h>
void newhandler();
void (*syshandler)();
int main(){
    char *s;
    unsigned seg;
    syshandler = signal (SIGALRM, newhandler);
    seg = alarm(5);
    s = "Me bloqueo esperando la alarma \n";
    write(1, s, strlen(s));
    pause();
    s = "Ya me he despertado \n";
    write(1, s, strlen(s));
    exit(0);
}
void newhandler(){
    char *s;
    s = "Estamos en la rutina de servicio \n";
    write(1, s, strlen(s));
}
