/*
17/09/2018
Exercício 06

*/
#include <iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	 float altura,pesoideal;
	 setlocale(LC_ALL,"Portuguese");
	 printf("Informe a sua altura: ");
	 scanf("%f",&altura);
	 pesoideal=(72.7*altura)-58;
	 printf("\n ------------------\n RESULTADOS \n ------------------\n");
	 printf("Seu peso ideal é: %f \n",pesoideal);
	 system("Pause>>null");
}
