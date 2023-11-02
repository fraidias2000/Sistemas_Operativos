#include <stdio.h>
#include <stdlib.h>

int main()
{
    int direccion = 5;
    int *p = &direccion;
    printf("%p",p);
    return 0;
}
