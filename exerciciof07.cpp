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
	 float prestacao,valor,taxa,tempo;
	 setlocale(LC_ALL,"Portuguese");
	 printf("Informe o valor: ");
	 scanf("%f",&valor);
	 printf("Informe a taxa: ");
	 scanf("%f",&taxa);
	 printf("Informe o tempo: ");
	 scanf("%f",&tempo);
	 prestacao=valor+(valor*(taxa/100)*tempo);
	 printf("\n ------------------\n RESULTADOS \n ------------------\n");
	 printf("Sua prestação é de: %f \n",prestacao);
	 system("Pause>>null");
}
