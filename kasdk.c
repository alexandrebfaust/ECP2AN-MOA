/*
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
#include <string.h>
using namespace std;
main()
{

	int opcao, subopcao, continuar, menu;
	float matriculas[16] = {1218,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013,1014,1015};
	string nomematriculas;
	nomematriculas = "Alexandre", "Aluno 1", "Aluno 2", "Aluno 3", "Aluno 4", "Aluno 5", "Aluno 6", "Aluno 7", "Aluno 8", "Aluno 9", "Aluno 10", "Aluno 11", "Aluno 12", "Aluno 13", "Aluno 14", "Aluno 15";
	float mlogica[10] = {1218,1001,1002,1004,1006,1008,1010,1012,1014,1015};
	float mlinprog[10] = {1218,1002,1004,1005,1007,1008,1010,1013,1014,1015};
	int totalmat = (sizeof(matriculas)/sizeof(matriculas[0]));
	int totalmatlog = (sizeof(mlogica)/sizeof(mlogica[0]));
	int totalmatlpr = (sizeof(mlinprog)/sizeof(mlinprog[0]));
	
	   do{
		system("cls"); //limpa tela
		cout<<"Exibir alunos de:\n";
		cout<<"1 - Logica\n";
		cout<<"2 - Linguagem de Programacao \n";
		cout<<"3 - Ambas as Materias \n";
		cout<<"Escolha uma opcao: ";
		cin>>opcao;
		
		switch(opcao){
		case 1:
			do{
				system("cls"); //limpa tela
				cout<<"\n---------------------------------------";
				cout<<"\nLISTA DE ALUNOS DE LOGICA";
				cout<<"\n---------------------------------------\n";
				for (int m = 0; m < totalmatlog; ++m)
				{
					cout<<mlogica[m]<<"\n";
				}
				cout<<"---------------------------------------";
				cout<<"\nDigite 0 para sair: ";
				cin>>continuar;
			}while(continuar=0);
		break;
		
		case 2:
			do{
				system("cls"); //limpa tela
				cout<<"\n---------------------------------------";
				cout<<"\nLISTA DE ALUNOS DE LING PROGRAMACAO";
				cout<<"\n---------------------------------------\n";
				for (int m = 0; m < totalmatlpr; ++m)
				{
					cout<<mlinprog[m]<<"\n";
				}
				cout<<"---------------------------------------";
				cout<<"\nDigite 0 para sair: ";
				cin>>continuar;
			}while(continuar=0);
		break;

		case 3:
			do{
				system("cls"); //limpa tela
				cout<<"\n---------------------------------------";
				cout<<"\nLISTA DE ALUNOS DE AMBAS AS MATERIAS";
				cout<<"\n---------------------------------------\n";
				for (int m = 0; m < totalmat; ++m)
				{
					if(mlinprog[m] == matriculas[m]){
						if (mlogica[m] == matriculas[m]){
							cout<<matriculas[m];							
						}
					}
				}
				cout<<"\n---------------------------------------";
				cout<<"\nDigite 0 para sair: ";
				cin>>continuar;
			}while(continuar=0);
		break;
		
		default :	
			cout<<"\nOpcao invalida!\n\n\n";
			menu = 0;
		}
		
	} while(menu == 0);
	cout<<"\nsaiu\n";

    system("Pause>>null");
}
