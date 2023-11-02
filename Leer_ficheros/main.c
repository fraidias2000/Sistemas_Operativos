#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main()
{
    FILE* fichero;
    fichero = creat("texto.txt",O_RDWR);
    open(fichero,O_RDWR);
    if(fichero == -1){
        write(2,"Fallo premo", 11);
    }
    write(fichero,"hola",10);
    return 0;
}
