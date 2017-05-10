/*
* \file variables_sum
* \brief Suma de dos variables.
* 
* El programa toma dos números ingresados por el usuario
* los suma y el resultado lo imprime en pantalla.
*
* \author Yehudy Román Hernández
* 
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	/*variables*/
	float a,b,c;
	
	/*ask for values*/
	printf("\nIngrese el valor de a: ");
	scanf("%f", &a);
 
	printf("\nIngrese el valor de b: ");
	scanf("%f", &b);

	/*sum of values*/
	c = a+b;

	/*show result*/
	printf("\nLa suma de a=%f y b=%f es: %f \n", a,b,c);

return 0;
}
