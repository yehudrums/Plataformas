/**
* @file unik_elmts.c
* @brief Prints the unique elements of a given array.
*
* The program analyses the whole array, looking for elements
* that not appear more than twice, those are the choosen elements
* for print.
*
* @author Yehudy José Román Hernández
* 
*/
 
#include <stdio.h>
 
int main(){
	int array[100], size, theOnes;	//concerning array
	int a, b, c; 		  	//concerning hobbits
 
	/*Size of array*/
	printf("\nIngrese el tamaño del arreglo\n");
	printf("***RECOMENDACIÓN: QUE NO EXCEDA LOS 10 ELEMENTOS***\n");
	printf("Tamaño del arreglo: ");
	scanf("%d", &size);
 
	/*updating values of array*/
	printf("\nIngrese los valores del arreglo: \n");
		for(a=0; a<size; a++){
        		scanf("%d", &array[a]);
    		}
	/*choosen theOnes*/
		for(a=0; a<size; a++){
	/*init the current array value*/
        theOnes = 1;
 
        	for(b=a+1; b<size; b++){
			/*search*/
            		if(array[a]==array[b]){
                	/*and destroy*/
                		for(c=b; c<size-1; c++){
                    			array[c] = array[c+1];
                		}
 
                	size--;
                	b--;
                	theOnes = 0;
            		}
        	}
 
			/*Last removal of elements*/
			if(theOnes != 1){
            			for(b=a; b<size-1; b++){
                		array[b] = array[b+1];
            			}
            		size--;
            		a--;
        		}
    		}
 
	/*Printing the choosen ones */
	printf("\nLos elementos únicos del arreglo son: \n");
	for(a=0; a<size; a++){
        	printf("%d\t", array[a]);
		printf("\n");
    	}
    return 0;
}
