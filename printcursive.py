#!/usr/bin/env python3

'''Yehudy Román Hernández_B15810

   This function originates an array
   with random values'''
def listOrigin(k):
	count = 0
	array = []
	while count != k:
		h = random()
		array.append(h)
		count = count+1
	return array

'''Reuse of the function random(). Here is used for create
   the numbers that will be puted into the array'''
def random():
	from random import randint	
	x = randint(0,28)
	return x


'''This is the function corresponding to the recursive
   printing of each element of the array'''
def printcursive(array):

	last = len(array) 
	for i in range(0,last):
		print(array[i])


'''call to the functions'''
size = int(input("De qué tamaño desea la lista?: "))
go = listOrigin(size)
printcursive(go)
