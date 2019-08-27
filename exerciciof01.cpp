/*
17/09/2018
Exercício 01

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
	 printf("Metros: ");
	 scanf("%f",&num1);
	 calc=num1*100;
	 printf("O valor em centimetros é %f \n",calc);
	 system("Pause>>null");
}

