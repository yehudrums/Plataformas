/*Analyses the whole array and prints
the second greater value*/

/**@file second_greater 
   @brief prints the second greater value of an array.

   The user gives the size and the values for an array
   than the program looks for the second greater value
   and prints it.

   @author Yehudy Román Hernández*/

#include<stdio.h> 
#include<math.h>


int main(void){

	int array[100];
	int N, a, b;
	int swap;	
	
	printf("\nIngrese el tamaño del arreglo\n");
	printf("\nRECOMENDACIÓN *** ¡Que no exceda 10 elementos! ***\n");
	scanf("%d", &N);
	
	/*updtating the array*/
	printf("\nIngrese los %d valores para el arreglo\n", N);
	for (a=0; a<N; a++)
	scanf("%d", &array[a]);	
   
  /*bubble sorting*/ 
	for (a = 0 ; a < ( N - 1 ); a++){
		for (b = 0 ; b < N - a - 1; b++){
                          /*descending fashion*/
                          if (array[b] < array[b+1]){
                          swap       = array[b];	
                          array[b]   = array[b+1];
                          array[b+1] = swap;
                          }
                  }
         }

        printf("El segundo valor más grande es: %d\n", array[1]);
 
return 0;
}
	
