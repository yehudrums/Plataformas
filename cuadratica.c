/*
* \file cuadratica.c
* \brief solución de una ecuación cuadrática.
* 
* Toma los valores de los coeficientes ingresados por el usuario
* calcula el discriminante y con base en este resultado
* calcula e imprime las soluciones de la ecuación según sea el caso
*
* \author Yehudy Román Hernández
*
*/

#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c;
        float r;
        float d,x1,x2;
  
        /*Ask for values*/
        printf("Para una ecuación de la forma:\n");
        printf("a*x^2 + b*x + c\n");
  
        printf("Ingrese el valor de a: ");
        scanf("%f", &a);
  
        printf("Ingrese el valor de b: ");
        scanf("%f", &b);
  
        printf("Ingrese el valor de c: ");
        scanf("%f", &c);
  
        /*calculating roots*/
        d = b*b - 4*a*c;
        r = sqrt(d);
        if (d<0)
	{
        /*no real solutions*/
        printf("La ecuación no tiene soluciones reales\n");
        }
	else if (d==0)
	{
        /*repeated roots*/
	x1 = (-b/(2*a));
 	x2 = (-b/(2*a));
	/*prints the result*/
 	printf("La ecuación tiene dos soluciones reales iguales:\n");
 	printf("x1 = %f \n", x1);
 	printf("x2 = %f \n", x2);
	}
	else
	{
	/*two different roots*/	
	x1 = (-b + r)/(2*a);
	x2 = (-b - r)/(2*a);
	/*prints the result*/
	printf("La ecuación tiene dos soluciones reales diferentes:\n");
 	printf("x1 = %f \n", x1);
 	printf("x2 = %f \n", x2);
	}

return 0;
}

