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
int provas=30, questoes=10;
int gabarito[questoes];
int matriculas[provas][1];
int contP, contQ, opcao, menu, resposta=0, gabempty=0;

setlocale(LC_ALL,"Portuguese");

do{
		system("cls"); //limpa a tela
		cout<<"### UNISOCIESC 2018 ### \n";
	    cout<<"1-Cadastrar Gabarito\n";
	    cout<<"2-Cadastrar Resposta de Alunos\n";
	    cout<<"3-Visualizar Gabarito\n";
	    cout<<"4-Visualizar Relatorio\n";
		cout<<"Selecione uma opcao: ";
	    cin>>opcao;
	    switch(opcao){
	    	
	    	case 1 :
	    		system("cls"); //limpa a tela
	    		cout<<"## Cadastrar Gabarito ##\n";
	    		cout<<"-- Respostas de 1 a 5 --\n";
	    		for (int contQ = 0; contQ < questoes; ++contQ){
						do{
							cout<<"\nCadastre a resposta da questao "<<contQ+1<<": ";
							cin>>gabarito[contQ];
						}while(gabarito[contQ]<=0||gabarito[contQ]>=6);
						gabempty=1;
				}
				cout<<"Pressione qualquer tecla para voltar.";
	    	  	system("Pause>>null");
			break;

	    	case 2:
	    		system("cls"); //limpar tela
	    	  	cout<<"## Cadastrar Resposta de Alunos ## \n";
	    	  	if(gabempty==0){
	    	  		cout<<"Gabarito em branco! Prencha primeiro\n";
	    	  		cout<<"Pressione qualquer tecla para voltar.";
	    	  		system("Pause>>null");
	    	  		break;
				  }
	    	  	for (int contP = 0; contP < provas; ++contP){
	    	  		cout<<"\nCadastrando respostas da prova "<<contP+1<<" do aluno 00"<<contP+1<<"\n";
		    		for (int contQ = 0; contQ < questoes; ++contQ){
							do{
								cout<<"\nCadastre a resposta da questao "<<contQ+1<<": ";
								cin>>resposta;
							}while(resposta<=0||resposta>=6);
							if(resposta==gabarito[contQ]){
								matriculas[contP][1]+=1;
							}
							else{
								//nao faz nada
							}
					}
				}
	    	  	cout<<"Pressione qualquer tecla para voltar.";
	    	  	system("Pause>>null");
	    	break;
	    	
	    	case 3:
	    		system("cls"); //limpa a tela
	    		cout<<"## Visualizar Gabarito ##\n";
	    		cout<<"-- Questao | Resposta --\n";
	    		for (int contQ = 0; contQ < questoes; ++contQ){
							cout<<contQ+1<<" | "<<gabarito[contQ]<<"\n";
				}
				cout<<"Pressione qualquer tecla para voltar.";
	    	  	system("Pause>>null");
	    	break;
	    	
	    	case 4:
	    		system("cls"); //limpar tela
	    	  	cout<<"## Visulizar Relatorio ## \n";
	    	  	cout<<"-- Aluno | Nota | Situacao--\n";
	    		for (int contP = 0; contP < provas; ++contP){
	    	  		if(matriculas[contP][1]>=7){
	    	  			cout<<"00"<<contP+1<<" | "<<"Aprovado\n";
					}
					else{
						cout<<"00"<<contP+1<<" | "<<"Reprovado!\n";
					}
				}
	    	  	cout<<"Pressione qualquer tecla para voltar.";
	    	  	system("Pause>>null");
	    	break;
			
			default:
			    cout<<"Voce digitou o valor incorretamente!\n";
				cout<<"Pressione qualquer tecla para continuar.";
	    	  	system("Pause>>null");		
	    	
		}
   }while(true);
	cout<<"\nsaiu\n";

}
