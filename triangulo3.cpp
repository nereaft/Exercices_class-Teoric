

#include <stdio.h>
#include <stdlib.h>
/*
   *
  ***
 *****
********

 */

int main(int argc, char *argv[]){
	int altura = atoi(argv[1]);
	/* una fila entera del 1er cud.*/
	for(int fila=0; fila<altura; fila++){
		for (int col=0; col<altura;col++)
			if(fila + col>=altura-1)
				printf("*");
			else
				printf(" ");
		/* una fila entera del 2do cuad. */
		for (int col=0; col<altura;col++)
			if(fila >=col)
				printf("*");

		printf("\n");
	}


	return EXIT_SUCCESS;
}

