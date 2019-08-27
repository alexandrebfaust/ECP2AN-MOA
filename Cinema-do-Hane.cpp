/*
Atividade A2 - Alexandre Baldan Faust - 14/12/2018
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
int letras=5, numeros=9;
int contL, contN, opcao;
char ltpoltrona[6] = "ABCDE";
int poltronas[letras][numeros];
char letra;
int numero=0, ingresso=0, opsessao=0;
float ingressoint=28.00, ingressomeia=14.50, caixa=0, caixatotal=0;
int nletra=0, vendas=0, qntdint=0, qntdmeia=0;

setlocale(LC_ALL,"Portuguese");

//limpa a tabela da sessao
for (int contL = 0; contL < letras; ++contL){
	for (int contN = 0; contN < numeros; ++contN){
		poltronas[contL][contN]=0;
	}
}

do{
		system("cls"); //limpa a tela
		cout<<"### HANE CINEMAS ### \n";
		cout<<"Caixa atual: R$"<<caixa<<"\n";
	    cout<<"1-Vender Ingresso\n";
	    cout<<"2-Ver Sessao\n";
	    cout<<"3-Encerrar Sessao\n";
	    cout<<"9-Visualizar Relatorio\n";
		cout<<"Selecione uma opcao: ";
	    cin>>opcao;
	    switch(opcao){
	    	
	    	case 1 :
	    		system("cls"); //limpa a tela
	    		cout<<"## Vender Ingresso ##\n";
	    		cout<<"-- Legenda - D=Disponivel | X=Vendido --\n";
	    		cout<<"-----------------------------------------\n";
	    		cout<<"| X | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |";
	    		for (int contL = 0; contL < letras; ++contL){
	    		cout<<"\n| "<<ltpoltrona[contL]<<" |"; //| A |
					for (int contN = 0; contN < numeros; ++contN){
						if(poltronas[contL][contN]==0){
							cout<<" D |";
						}
						else{
							cout<<" X |";
						}
					}
				}
				do{
					cout<<"\n(1 - Inteira - R$"<<ingressoint<<" | 2 - Meia - R$"<<ingressomeia<<")";
					cout<<"\nSelecione o tipo de ingresso: ";
					cin>>ingresso;
				}while(ingresso<=0||ingresso>2);
				do{
					cout<<"\nSelecione uma letra: ";
					cin>>letra;
					switch(letra){
						case 'A':
							nletra=1;
						break;
						case 'B':
							nletra=2;
						break;
						case 'C':
							nletra=3;
						break;
						case 'D':
							nletra=4;
						break;
						case 'E':
							nletra=5;
						break;
						default: 
							cout<<" Letra invalida!";
					}
				}while(nletra<=0||nletra>5);
				do{
					cout<<"\nSelecione um numero: ";
					cin>>numero;
				}while(numero<=0||numero>9);
				nletra+=-1; //ajusta para vetor
				numero+=-1; //ajusta para vetor
				if(poltronas[nletra][numero]==1){
					cout<<"\nEsta poltrona ja encontra-se ocupada! Reinicie a venda.";
				}
				else{
					poltronas[nletra][numero]=1;
					if(ingresso==1){
						caixatotal+=ingressoint;
						caixa+=ingressoint;
						qntdint++;
					}
					if(ingresso==2){
						caixatotal+=ingressomeia;
						caixa+=ingressomeia;
						qntdmeia++;
					}
					cout<<"\nIngresso vendido com sucesso!";
				}
				cout<<"\nPressione qualquer tecla para voltar.";
	    	  	system("Pause>>null");
			break;

	    	case 2:
	    		system("cls"); //limpa a tela
	    		cout<<"## Ver Sessao ##\n";
	    		cout<<"-- Legenda - D=Disponivel | X=Vendido --\n";
	    		cout<<"-----------------------------------------\n";
	    		cout<<"| X | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |";
	    		for (int contL = 0; contL < letras; ++contL){
	    		cout<<"\n| "<<ltpoltrona[contL]<<" |"; //| A |
					for (int contN = 0; contN < numeros; ++contN){
						if(poltronas[contL][contN]==0){
							cout<<" D |";
						}
						else{
							cout<<" X |";
						}
					}
				}
				cout<<"\nPressione qualquer tecla para voltar.";
	    	  	system("Pause>>null");
	    	break;
	    	
	    	case 3:
	    		system("cls"); //limpa a tela
	    		cout<<"## Encerrar Sessao ##\n";
	    		do{
				cout<<"Encerrar sessao? (1 - Sim | 2 - Não): ";
	    		cin>>opsessao;
				}while(opsessao!=1 && opsessao!=2);
				if(opsessao==1){
					//limpa a tabela da sessao
					for (int contL = 0; contL < letras; ++contL){
						for (int contN = 0; contN < numeros; ++contN){
							poltronas[contL][contN]=0;
						}
					}
					caixa=0;
				}
				else if(opsessao==2){
					break;
				}
				cout<<"Pressione qualquer tecla para voltar.";
	    	  	system("Pause>>null");
	    	break;
	    	
	    	case 9:
	    	  	system("cls"); //limpar tela
	    	  	cout<<"## RELATORIO DO CAIXA ## \n";
	    		cout<<qntdint<<"x Ingresso Inteira - R$"<<qntdint*ingressoint<<"\n";
	    		cout<<qntdmeia<<"x Ingresso Meia - R$"<<qntdmeia*ingressomeia<<"\n";
	    		cout<<"Total de vendas: R$"<<caixatotal<<"\n";
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
