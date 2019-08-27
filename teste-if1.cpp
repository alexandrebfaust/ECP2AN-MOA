/*
17/09/2018
Exercício 08

*/
#include <iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	 float valora;
	 setlocale(LC_ALL,"Portuguese");
	 printf("Informe o valor de A: ");
	 scanf("%f",&valora);
	 if(valora==666){
	 	printf("WHAT A HECK");
	 	system("Pause>>null");
	 }
	 printf("\n ------------------\n RESULTADOS \n ------------------\n");
	 printf("A: %f \n",valora);
	 system("Pause>>null");
	 
}
