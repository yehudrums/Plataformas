#!/usr/bin/env python3

# takes a list and returns a copy
# of the list with the first and last elements
# Yehudy Román Hernández_B15810

def first_last(lista):
	
	# 'array' is a copy of 'lista'
	array = lista
	
	# lenght of 'list' && 'array'
	n = len(lista)
	
	# save the first and last elements in 'array'
	for element in array:
		if element == array[0]:
			first = element
		if element == array[n-1]:
			last = element
	
	newList = [first, last]

	# prints 'lista'
	print('\nLista original: {0}\n'.format(lista))
	
	# prints 'newList' with the first 
	# and last elements in 'lista'
	print('\nNueva lista: {0}\n'.format(newList))
	
	return newList

a = [1,3,46,7,'f', 00, 1, 10, 11, 'q', 'pid']
first_last(a)
