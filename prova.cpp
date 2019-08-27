/*
Atividade - A1
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main() {

	int qntdhab=2, maioridade=0, somasalarios=0, mediasalarios=0, qntdhabfilsal=0, cont;
	int salarios[qntdhab];
	int idades[qntdhab];
	int filhos[qntdhab];
	float perhabfilsal;

	for(cont=0;cont<qntdhab;cont++){
		cout<<"Pesquisa numero: "<<cont+1;
		cout<<"\nInforme o seu salario R$: ";
		cin>>salarios[cont];
		
		cout<<"\nInforme a sua idade: ";
		cin>>idades[cont];
		
		cout<<"\nInforme a sua quantidade de filhos: ";
		cin>>filhos[cont];

		system("cls"); //limpar tela
	}

	for(cont=0;cont<qntdhab;cont++){
	//GERAR RELATORIO
		//FORMULAS
		//Calcula a media dos salarios
		somasalarios+=salarios[cont];
		mediasalarios=somasalarios/qntdhab;
		//Guarda a maior idade
		if(maioridade<idades[cont]){
			maioridade=idades[cont];
		}
		//Guarda a qntd de hab com mais de 3 filhos e salario menor que 500
		if(salarios[cont]<=500 && filhos[cont]>=3){
			qntdhabfilsal=qntdhabfilsal+1;
		}
	}
	//Calcula percentual de hab com mais de 3 filhos e salario menor que 500
	perhabfilsal=(qntdhabfilsal/qntdhab)*100;

	cout<<"\n---Relatorio da pesquisa---";
	cout<<"\nSalario medio: R$"<<mediasalarios;
	cout<<"\nMaior idade: "<<maioridade;
	cout<<"\nPercentual de hab. com mais de 3 filhos e salario menor que R$500: "<<perhabfilsal<<"% ou "<<qntdhabfilsal<<" habitante(s).";

	system("Pause>>null");
}
