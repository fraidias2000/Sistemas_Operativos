#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[] )
{
    kill(atoi(argv[2]),atoi(argv[1])); //atoi sirve para transformar un string en int
    return 0;
}
