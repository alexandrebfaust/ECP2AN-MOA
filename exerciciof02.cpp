/*
17/09/2018
Exerc�cio 01

*/
#include <iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	 float num1,calc;
	 setlocale(LC_ALL,"Portuguese");
	 printf("Informe um valor: ");
	 scanf("%f",&num1);
	 calc=num1*100;
	 printf("Valor em centimetros � %f \n",calc);
	 system("Pause>>null");
}

