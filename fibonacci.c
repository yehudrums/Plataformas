/*
* \file fibonacci.c
* \brief computes the Fibonacci sucession
* 
* Fibonacci is an infinite sucession, based 
* on the fact that the "next" terms in the
* progession equals the sum of the two previous terms.
*
* \author Yehudy José Román Hernández
* \bug nada que ver
*
*/
  
#include <stdio.h>
#include <math.h>
  
/*variables*/
int a,b,c,N;
int i;

int main(void) {
	/*ask for natural value*/
        printf("\n*******Sucesión de Fibonacci*******\n");
        printf("\n***Aplica para números naturales***\n");
        printf("\nIngrese un número entero N: ");
        scanf("%d", &N);
        
	/*computes sucession for trivial cases*/
	if(N==0)
	{
        printf("\nEl término %d en la sucesión de Fibonacci es: 0\n", N);
        }
        	else if(N==1)
        	{
        	printf("\nEl término %d en la sucesión de Fibonacci es: 0\n", N);
        	}
        	else if(N==2)
        	{
		printf("\nEl término %d en la sucesión de Fibonacci es: 1\n", N);
        	}
                else if(N==3)
                {
                printf("\nEl término %d en la sucesión de Fibonacce es: 1\n", N);
                }
	else
        {
	/*variables init*/
        a=0;
       	b=1;
        /*computes the sucession*/
        	for(i=0; i<=N-3; i++)
                {
                c = a+b;
		a = b;
		b = c;
                }
                /*prints the N term of Fibonacci sucession*/
                printf("\nEl término %d en la sucesión de Fibonacci es: %d \n", N,c);
                }
 
return 0;
}
                               
