/*
20/09/2018
Esse trabalho 
*/
#include <iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{

// Se��o de Declara��es das vari�veis 
   float usuarios[999];
   int menu, qntde, cont;

// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   printf("UNISOCIESC - Universidade Sociedade Educacional de Santa Catarina\n");
   printf("1 - Inserir usuarios\n");
   printf("2 - Listar usuarios\n");
   printf("Digite a op��o: ");

    scanf("%f",&menu);
    
    if(menu=1){
    	printf("Voc� deseja cadastrar quantos usuarios?\n");
    	printf("Quantidade: ");
    	scanf("%d",&qntde);
    	for(cont=0;cont<qntde;++cont){
    		printf("\nInforme o nome do usuario %f: ", &cont);
    		scanf("%f",&usuarios[cont]);
		}
		for(cont=0;cont<qntde;++cont){
			printf("\n\nLISTA DE USUARIOS CADASTRADOS\n");
			printf("-------------------------------\n");
			printf(" N | USUARIO\n");
			for(cont=0;cont<qntde;cont++){
				printf("%f  - %f\n", &cont, &usuarios[cont]);
			}
		}
	}
	
	else{
		printf("Op��o invalida!");
		return 0;
	}

  system("Pause>>null\n");

}
