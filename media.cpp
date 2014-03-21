#include <stdio.h>
#include <stdlib.h>

#define N_ALUMNO 5
 
int main(){

  double nota,
	 media = 0;

  for (int numero_de_alumno=0;numero_de_alumno<N_ALUMNO; numero_de_alumno++){

   printf("Nota:");
   scanf(" %lf", &nota);
   media += nota;
   }
   media /= N_ALUMNO;
   printf("Media: %.2lf\n", media);

return EXIT_SUCCESS;
}
