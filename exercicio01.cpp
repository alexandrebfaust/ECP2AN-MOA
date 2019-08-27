/*
17/09/2018
Exercício 00

*/
#include <iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	float num1, num2, soma;
 	setlocale(LC_ALL,"Portuguese");
 	printf("Fala dois numeros ai! !\n");
 	scanf("%f %f",&num1,&num2);
 	soma=num1+num2;
 	printf("A soma de %f + %f = %f \n",num1,num2,soma);
 	system("Pause>>null");
}

