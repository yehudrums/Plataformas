#!/usr/bin/env python3

'''Riddle game
	1. A random number is generated
	2. User tries to guess wich is the number
	3. The program compares the number 
	   from user with the ones generated in 1, 
	   and tell if it was rigth. If not, tells if it
	   was greater or lesser than the one generated.
'''

def random():
	import random
	print('\nSE HA GENERADO UN NÚMERO ENTRE 0 Y 50 DE MANERA ALEATORIA')
	x = random.randint(0,50)
	print('{0}'.format(x))
	return x

def obtenerInt():
	import sys
	print('\nEL JUEGO TERMINA CUANDO USTED ADIVINE EL NÚMERO SECRETO\n')
	y = int(input('INGRESE EL NÚMERO: '))	
	return y

def respuesta(x,y):
	if y == x:
		print('\nBuena suerte, adivinó el número secreto x = {0}'.format(x))
	else:
		if y>x:
			print('\nBuen intento, pero ingresó un número mayor al número secreto x.')
		else:
			print('\nBuen intento, pero ingresó un número menor al número secreto x.')	
	return y

def adivinanza():
	x = random()
	y = obtenerInt()
	trial = respuesta(x,y)

	# loop for the trials
	while trial != x:
		y = obtenerInt()
		trial = respuesta(x,y)

adivinanza()	
