/*
Exercicio
Alexandre Baldan Faust - 21/11/2018
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
const int produtos=6, supermercados=5;
int contA, contP;
float preco[produtos][supermercados];
float somaprecos[produtos];

setlocale(LC_ALL,"Portuguese");

printf("Digite o preco de %i produtos\n",produtos);
for(contA=0;contA<produtos;contA++)//linhas
{
	printf("\n\nPreco do produto %i\n",contA+1);
	for(contP=0;contP<supermercados;contP++)//colunas
	{
		printf("Digite o preco no supermercado %i: ",contP+1);
		scanf("%f", &preco[contA][contP]);
		somaprecos[contA]=somaprecos[contA]+preco[contA][contP];
	}
somaprecos[contA]=somaprecos[contA]/supermercados;
	
}
	printf("\n\n\nMedia do preco dos produtos\n");
for(contA=0;contA<produtos;contA++)//linha	
{
	printf("Produto %i: %f\n",contA,somaprecos[contA]);
}

}

