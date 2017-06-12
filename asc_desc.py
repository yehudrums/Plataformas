#!/usr/bin/env python3

'''Ordering the elements of a list
   in ascending or descending fashion

   References:
	[1] http://interactivepython.org/runestone/static/pythonds/SortSearch/TheBubbleSort.html
'''

def bubbleSort1(alist):
	for passnum in range(len(alist)-1,0,-1):
		for i in range(passnum):
			if alist[i]>alist[i+1]:
				temp = alist[i]
				alist[i] = alist[i+1]
				alist[i+1] = temp
	return alist

def bubbleSort2(alist):
	for passnum in range(len(alist)-1,0,-1):
		for i in range(passnum):
			if alist[i]<alist[i+1]:
				temp = alist[i]
				alist[i] = alist[i+1]
				alist[i+1] = temp
	
	return alist

alist = [54,26,93,17,77,31,44,55,20]

fashion = str(input('\nAscendente = a, descendente = d: '))
if fashion == 'a':
	alist = bubbleSort1(alist)
	print(alist)
elif fashion == 'd':
	alist = bubbleSort2(alist)
	print(alist)
