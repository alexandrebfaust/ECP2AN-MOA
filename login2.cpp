/*
20/09/2018
Esse trabalho 
*/
#include <iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
#include <string.h>
using namespace std;
main()
{
	
	// Seção de Declarações das variáveis 
	string inuser;
	string inpass;
	string user;
	string pass;
	int auth;
	//int menu, qntde, cont;
	
	auth=0;
	user = "berretos";
	pass = "n1viaja";
	
	while(auth==0){
		cout<<"\n";
		cout<<"\n - - SISTEMA DE LOGIN - - \n";
		cout<<"\n--------------------------";
		cout<<"\n| User: ";
		getline(cin, inuser);
		cout<<"\n| Pass: ";
		getline(cin, inpass);
		cout<<"\n--------------------------";
		cout<<"|"<<inuser<<"|"<<inpass;
		if(user==inuser && pass==inpass){
			auth++;
			cout<<"\n- - - SEJA BEM VINDO - - -";
		}
		else{
			cout<<"\n- - - SENHA INVALIDA - - -";
		}
		cout<<"\n--------------------------";
	}
	cout<<"USUARIO LOGADO, OLA ALEXANDRE!";
	
	system("Pause>>null\n");
}
