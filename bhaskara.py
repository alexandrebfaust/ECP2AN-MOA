import sys
import time

a = int(input('Digite o valor de A: '))

if a == '0':
	print('Nao e segundo grau.')
else:
	b = int(input('Digite o valor de B: '))
	c = int(input('Digite o valor de C: '))

delta1=((b * b)-4*a*c)

if delta1 <= 0:
        print('Nao tem raiz com valor negativo.')
else:
        print(delta1)
        delta21 = (-b+sqrt(delta1))
        delta21a = (delta21)/2*a
        print(delta21)




time.sleep(10)
