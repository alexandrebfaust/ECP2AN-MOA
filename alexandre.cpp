/*
Atividade - A1
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main() {

	int sair, opcao, opcaoclube, opcaosal, opcaonas, opcaocontinuar, numpesquisa, menu=0, numtorF=0, numtorMD=0, numtorOC=0, numnasF=0, numnasOC=0, somasal=0, somasalF=0, mediasalF=0, numnasFtorMD=0, numnasOCtorF=0, continuar, continuarfim;
	
	do{
		system("cls"); //limpa tela
		cout<<"Data Folha 2018\n";
		cout<<"1 - Iniciar pesquisa\n";
		cout<<"2 - Exibir Estatistica\n";
		cout<<"Escolha uma opcao: ";
		cin>>opcao;
		
		switch(opcao){
		case 1:
			do{
				system("cls"); //limpar tela
				do{
					cout<<"Entre os clubes a seguir, qual de sua preferencia?\n";
					cout<<"1 - Figueirense\n";
					cout<<"2 - Marcilio Dias\n";
					cout<<"3 - Outros Clubes\n";
					cout<<"Escolha uma opcao: ";
					cin>>opcaoclube;
					if(opcaoclube == 1){
						numtorF++;
						continuar = 1;
					}
					else if(opcaoclube == 2){
						numtorMD++;
						continuar = 1;
					}
					else if(opcaoclube == 3){
						numtorOC++;
						continuar = 1;
					}
					else{
						cout<<"\nOpcao invalida!\n\n\n";
						continuar = 0;
					}
				}while(continuar = 0);
				
				continuar = 9;
				
				do{
					cout<<"\n\n";
					cout<<"Qual o valor do seu salario?\n";
					cout<<"Informe seu salario R$: ";
					cin>>opcaosal;
					somasal+=opcaosal;
					if(opcaoclube==1){
						somasalF+=opcaosal;
						mediasalF=somasalF/numtorF;
					}
					continuar = 0;
				}while(continuar = 0);
				
				continuar = 9;
				
				do{
					cout<<"\n\n";
					cout<<"Qual o local de nascimento?\n";
					cout<<"1 - Florianopolis\n";
					cout<<"2 - Outras Cidades\n";
					cout<<"Informe sua cidade de nascimento: ";
					cin>>opcaonas;
					if(opcaonas == 1 && opcaoclube == 2){
						numnasFtorMD++;
					}
					else if(opcaonas == 2 && opcaoclube == 1){
						numnasOCtorF++;
					}
					else if(opcaonas == 1){
						numnasF++;
						continuar = 1;
					}
					else if(opcaonas == 2){
						numnasOC++;
						continuar = 1;
					}
					else{
						cout<<"\nOpcao invalida!\n\n\n";
						continuar = 0;
					}
				}while(continuar = 0);
				
				numpesquisa++;
				
				do{
					cout<<"\n\n\nTerminou a pesquisa numero: "<<numpesquisa<<"\n";
					cout<<"Digite 0 para sair: ";
					cin>>opcaocontinuar;
					if(opcaocontinuar==0){
						continuarfim=1;
						sair=1;
					}
					else{
						cout<<"\nOpcao invalida!\n\n\n";
						continuarfim = 0;
					}
				}while(continuarfim=0);
				
			}while(sair=0);
		break;
		
		case 2:
			if(opcao==2){
				do{
					system("cls"); //limpa tela
					cout<<"\n---------------------------------------";
					cout<<"\nNUMERO DE TORCEDORES POR CLUBE";
					cout<<"\n-Figueirense: "<<numtorF;
					cout<<"\n-Marcilio Dias: "<<numtorMD;
					cout<<"\n-Outros Clubes: "<<numtorOC;
					cout<<"\n---------------------------------------";
					cout<<"\nSALARIO TOTAL: R$"<<somasal;
					cout<<"\nSalario medio da torcida do Figueirense: R$"<<mediasalF;
					cout<<"\n---------------------------------------";
					cout<<"\nNumero de pessoas nascidas em Florianopolis e que torcem para o Marcilio Dias: "<<numnasFtorMD;
					cout<<"\nNumero de pessoas nascidas em Outras Cidades e que torcem para o Figueirense: "<<numnasOCtorF;
					cout<<"\n---------------------------------------";
					cout<<"\nDigite 0 para sair: ";
					cin>>continuar;
				}while(continuar=0);
				
			}
		break;
		
		default :	
			cout<<"\nOpcao invalida!\n\n\n";
			menu = 0;
		}
		
	} while(menu == 0);
	cout<<"\nsaiu\n";
	
		system("Pause>>null");
}
