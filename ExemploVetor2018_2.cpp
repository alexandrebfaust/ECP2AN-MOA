/*
FUP que leia 10 notas, calcule a média da turma e ao final:
- Mostrar as 10 notas;
- Mostrar a média da turma;
- Mostrar a quantidade alunos que tem a nota abaixo da média
da turma;
- Mostrar a quantidade de alunos com nota menor do que 7;

*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	const int TAM=10;
	int i, quantMedia=0,quant7=0;
	float media=0, nota[TAM],menorNota;
	setlocale(LC_ALL,"Portuguese");
	cout<<"Informe "<<TAM<<" notas\n";
	for(i=0;i<TAM;i++)
	{
		do{
			cout<<"Informe a nota do aluno "<<i+1<<"\n";
			cin>>nota[i];
			if(nota[i]<0 || nota[i]>10)
				cout<<"ERROOOOOOOOOOO\n";
		}while(nota[i]<0 || nota[i]>10);
		if(i==0)
			menorNota=nota[i];
		else
		{			
			if(nota[i]<menorNota)
				menorNota=nota[i];
		}
	
	
		media+=nota[i];
		if(nota[i]<7)
			quant7++;
	}
	media=media/TAM;
	cout<<"A média da turma é "<<media<<"\n";
	for(i=0;i<TAM;i++)
	{
		cout<<"Nota do aluno "<<i+1<<" : "<<nota[i]<<"\n";
		if(nota[i]<media)
			quantMedia++;
	}
	cout<<"A quantidade de alunos com nota abaixo da média da turma é "<<quantMedia<<"\n";
	cout<<"A quantidade de alunos com nota menor que 7 é "<<quant7<<"\n";
    system("Pause>>null");
}



