/*
Atividade - A1
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main() {

	int fat=0, cont, num;
	char resp;

	while(resp!='N'){
		cout<<"\nInforme um numero para calcular o fatorial: ";
		cin>>num;
		fat=num;
		for(cont=num;cont>1;cont--){
			fat=fat*(cont-1);
		}
		cout<<"\nO fatorial do numero "<<num<<" e: "<<fat;
		
		cout<<"\n\nDeseja calcular outro fatorial?\n";
		cout<<"\nS - Sim ou N - Nao: ";
		cin>>resp;

		switch(resp){
			case 'S':
				resp=='S';
				break;
			case 'N':
				resp=='N';
				break;
			default:
				cout<<"Opcao invalida";
				break;
		}
	};
	cout<<"Ate um oto dia";
	system("Pause>>null");
}
