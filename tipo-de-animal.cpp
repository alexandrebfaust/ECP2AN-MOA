/*
Exercicio

nome: Lucas André Besen
turma: ECP
data:
*/

#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
main()
{
    char opcao1 ;
    int opcao2 ;

setlocale(LC_ALL,"Portuguese");

	cout << "se for um ave digite A \nse for um manifero digite M \nse for um Répteis digite R \n";
	cin >> opcao1;
	opcao1 = toupper (opcao1);
	switch (opcao1)
	{
		case 'A' :
			cout << "se for ave Não-voadores digite 1 \nse for um ave Nadadoras digite 2 \nse for ave De rapina 3\n";
			cin >> opcao2;
				switch (opcao2)
				{
					case 1:
						cout << "e uma ave Tropicais digite 1\ne uma ave Polares digite 2\n";
						cin >> opcao2;
						switch (opcao2)
						{
							case 1: 
								cout << " Essa ave e um Avestruz";
							break;
							
							case 2:
								cout << " Essa ave e um Pinguim";
							break;
							default:
								cout << "opçao invalida";
						}
					
					break;
					
					case 2:
						cout << "Essa ave e um Pato";
					break;
					
					case 3:
						cout << "Essa ave e um Águia";
					break;
					default:
						cout << "opçao invalida";	
				}
				
		break;	
		
		case 'M':
		 	cout << "se for um Quadrúpedes digite 1\nse for um Bípedes digite 2\nse for um Voadores digite 3\nse for um Aquáticos digite 4\n";
		 	cin >> opcao2;
			switch (opcao2)
			{
			 	case 1:
			 		cout << "se for Carnívoro digite 1\nse for Herbívoros digite 2\n";
			 		cin >> opcao2;
					switch (opcao2)
					{
						case 1:
							cout << "É um Leão ";
						break;
						
						case 2:
							cout << "É um Cavalo";
						break;
						default: 
							cout << "opçao invalida";
					}
				break;		
					 
				case 2:
					cout << "se for Onívoros digite 1\nse for Frutívoros digite 2\n";
					cin >> opcao2;
					switch (opcao2)
					{
						case 1:
							cout << " É um Homem";
						break;
						
						case 2:
							cout <<" É um Macaco"; 
						break;
						default:
							cout << "opçao invalida";
					}
				break;
				
				case 3:
					cout << " É um Morcego";
				break;
				
				case 4:
					cout << " É uma Baleia";
				break;
				default:
					cout << "opçao invalida";	
			}
		break;
		
		case 'R':
			cout << "se um com casco digite 1\nse for um Carnívoros digite 2\nse for Sem patas digite 3\n";
			cin >> opcao2;
			switch (opcao2)
			{
				case 1:
					cout << " É uma Tartaruga";
				break;
				
				case 2:
					cout << " É um Crocodilo";
				break;
				
				case 3:
					cout << " É uma Cobra";
				break;	
				default :
					cout << "opçao invalida";	
			}
		break;
		default:
			cout << " opçao invalida";
	}
		
}

