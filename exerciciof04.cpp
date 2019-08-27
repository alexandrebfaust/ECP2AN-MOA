/*
17/09/2018
Exercício 04

*/
#include <iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	 float tempfarenheit,tempcelsius;
	 setlocale(LC_ALL,"Portuguese");
	 printf("Informe a temperatura em Farenheit: ");
	 scanf("%f",&tempfarenheit);
	 tempcelsius=(5*(tempfarenheit-32)/9);
	 printf("\n ------------------\n RESULTADOS \n ------------------\n");
	 printf("Temperatura em Celsius: %f \n",tempcelsius);
	 system("Pause>>null");
}

