/*
17/09/2018
Exercício 03

*/
#include <iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	 float num1,num2,calc;
	 setlocale(LC_ALL,"Portuguese");
	 printf("Informe o valor da altura: ");
	 scanf("%f",&num1);
	 printf("Informe o valor do raio: ");
	 scanf("%f",&num2);
	 calc=num1*(num2*num2)*3.14159;
	 printf("O valor da volume é: %f \n",calc);
	 system("Pause>>null");
}

