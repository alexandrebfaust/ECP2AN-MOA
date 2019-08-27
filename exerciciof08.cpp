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
	 float valora,valorb,valorc;
	 setlocale(LC_ALL,"Portuguese");
	 printf("Informe o valor de A: ");
	 scanf("%f",&valora);
	 printf("Informe o valor de B: ");
	 scanf("%f",&valorb);
	 valorc=valorb;
	 valorb=valora;
	 valora=valorc;
	 printf("\n ------------------\n RESULTADOS \n ------------------\n");
	 printf("A: %f \n B: %f \n",valora, valorb);
	 system("Pause>>null");
	 
}
