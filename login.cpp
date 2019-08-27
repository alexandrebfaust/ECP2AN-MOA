/*
20/09/2018
Esse trabalho 
*/
#include <iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
#include <conio.h>
using namespace std;
main()
{
	
	// Seção de Declarações das variáveis 
	char inuser[20];
	char inpass[20];
	char user[20]="alexandrefaust";
	char pass[20]="012093keei";
	//int menu, qntde, cont;
	
	
	cout<<"\n - - SISTEMA DE LOGIN - - \n";
	cout<<"\n--------------------------";
	cout<<"\n| User: ";
	cin>>inuser;
	cout<<"\n| Pass: ";
	cin>>inpass;
	cout<<"\n--------------------------";
	do{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\n - - SISTEMA DE LOGIN - - \n";
		cout<<"\n--------------------------";
		cout<<"\n| User: ";
		cin>>inuser;
		cout<<"\n| Pass: ";
		cin>>inpass;
		cout<<"\n--------------------------";
		cout<<"\n- - - SENHA INVALIDA - - -";
		cout<<"\n--------------------------";
	}
	while(user==inuser && pass==inpass);
	
	
	system("Pause>>null\n");
}
