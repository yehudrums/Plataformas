/**
* \file burbuja.c
* \brief Método de la burbuja.
* 
* Solicita al usuario que ingrese el tamaño del arreglo
* y los valores a almacenar en cada uno de los
* elementos del arreglo, el programa los ordena
* de manera descendente e imprime el arreglo
* una vez que ha sido ordenado.
*
* \author Yehudy Román Hernández
*
**/
 
#include <stdio.h>
 
int main()
{
	
	/*array init, variables && swap init*/
	int array[100];
	int N, a, b;
	int swap;

	/*asks for lenght of array*/
  	printf("\nIngrese el tamaño del arreglo: \n");
	printf("\nRecomendación: que no exceda los 10 elementos\n");
	scanf("%d", &N);

	/*asks for values for each element of array*/
	printf("\nIngrese %d valores para cada uno de los elementos del arreglo\n", N);
 
	/*updates array with values recieved*/
	for (a = 0; a < N; a++)
	scanf("%d", &array[a]);
 
	/*bubble sorting*/
  	for (a = 0 ; a < ( N - 1 ); a++)
	{
		for (b = 0 ; b < N - a - 1; b++)
		{
			/*descending fashion*/
			if (array[b] < array[b+1])
			{
        		swap       = array[b];
        		array[b]   = array[b+1];
        		array[b+1] = swap;
      			}
    		}
  	}
 	
	/*prints sorted array*/
	printf("\nArreglo ordenado de forma descendente:\n");
	for (a=0 ; a<N ; a++ )
	printf("%d\n", array[a]);

return 0;
}
