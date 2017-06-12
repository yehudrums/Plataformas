#!/usr/bin/env python3

'''The same riddling game as in riddle.py
   but here, "la compu" is who guess the number
   The same functions defined in riddle.py will be used
   with some changes
   By: Yehudy Román Hernández_B15810
'''

def otorgarInt():
	import sys
	print('\nAHORA VEAMOS SI LA COMPU PUEDE ADIVINAR UN NÚMERO ENTRE 0 Y 50')
	x = int(input('DEFINA EL NÚMERO SECRETO X: '))
	return x

def random():
	import random
	y = random.randint(0,50)
	print('\nLA COMPU DICE QUE EL NÚMERO SECRETO ES: {0}'.format(y))
	return y

def respuesta(x,y):
	import sys
	print('\nOPCIONES:') 
	print('ADIVINÓ = 1')
	print('ES MAYOR = 2')
	print('ES MENOR = 3')
	option = int(input('\nINGRESE EL NÚMERO SEGÚN LA OPCIÓN: '))

	if option == 1:
		print('\n¡MUY BIEN COMPU, EL JUEGO TERMINÓ!')
		exit()
	elif option == 2:
		print('\nEL NÚMERO SECRETO ES MAYOR, SORRY AHÍ')
	
	elif option == 3:
		print('\nEL NÚMERO SECRETO ES MENOR, SIGUE INTENTANDO')

def adivinanza():
	x = otorgarInt()
	y = random()
	trial = respuesta(x,y)
	
	while y != x:
		y = random()
		trial = respuesta(x,y)
	return

adivinanza()

