#!/usr/bin/env python3

'''This function finds all the dividers
   for a given number
   Yehudy Román Hernández_B15810
'''

def dividers():
	
	print('**Cálculo de los divisores de un número entero**')
	n = int(input('Ingrese un número entero: '))
	print('\nLos divisores de {0} son:')
	
	for i in range(1,n+1):
		if n % i == 0:
			print('{0}'.format(i))

	return
dividers()		
