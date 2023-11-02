#include <stdio.h>
int main (){
	int status;
	
	int proceso_finalizado;
	
	if(fork() == 0){
		printf("Soy el hijo con id: %d \n",getpid());
		pause();
		exit(0);
	}
	
	proceso_finalizado = wait(&status);
	printf("El proceso con id %d lo ha matado la orden: %d \n", proceso_finalizado, status);
	return 0;


}
