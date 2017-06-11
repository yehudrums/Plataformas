#!/usr/bin/env python3

# maximun from three arguments
# Yehudy Román Hernández_B15810

def maximo(a,b,c):
	# 'c' is maximum
	# two possibilities
	# 1. c is maximum b is minimum
	# 2. c is maximum a is minimum
	if c>a:
		if a>b:
			print('\nEl mayor es {0}'.format(c))
			print('El menor es {0}\n'.format(b))
		else:
			if b>c:
				print('\nEl mayor es {0}'.format(b))
				print('El menor es {0}\n'.format(a))
			else:
				print('\nEl mayor es {0}'.format(c))
				print('El menor es {0}\n'.format(a))	
	# 'a' is maximum
	# two possibilities
	# 1. a is maximum b is minimum
	# 2. a is maximum c is minimum
	else:
		if a>b:
			if b>c:
				print('\nEl mayor es {0}'.format(a))
				print('El menor es {0}\n'.format(c))
			else:
				print('\nEl mayor es {0}'.format(a))
				print('El menor es {0}\n'.format(b))

		# 'b' is maximum
		# two possibilities
		# 1. b is maximum c is minimum
		# 2. b is maximum a is minimum
		else:
			if a>c:
				print('\nEl mayor es {0}'.format(b))
				print('El menor es {0}\n'.format(c))
			else:
				print('El mayor es {0}'.format(b))
				print('El menor es {0}'.format(a))
	return

maximo(1,2,6)
maximo(4,3,8)

maximo(3,10,7)
maximo(15,22,11)

maximo(9,6,3)
maximo(8,2,5)
