/*
Exercicio

nome: Lucas Andr� Besen
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

	cout << "se for um ave digite A \nse for um manifero digite M \nse for um R�pteis digite R \n";
	cin >> opcao1;
	opcao1 = toupper (opcao1);
	switch (opcao1)
	{
		case 'A' :
			cout << "se for ave N�o-voadores digite 1 \nse for um ave Nadadoras digite 2 \nse for ave De rapina 3\n";
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
								cout << "op�ao invalida";
						}
					
					break;
					
					case 2:
						cout << "Essa ave e um Pato";
					break;
					
					case 3:
						cout << "Essa ave e um �guia";
					break;
					default:
						cout << "op�ao invalida";	
				}
				
		break;	
		
		case 'M':
		 	cout << "se for um Quadr�pedes digite 1\nse for um B�pedes digite 2\nse for um Voadores digite 3\nse for um Aqu�ticos digite 4\n";
		 	cin >> opcao2;
			switch (opcao2)
			{
			 	case 1:
			 		cout << "se for Carn�voro digite 1\nse for Herb�voros digite 2\n";
			 		cin >> opcao2;
					switch (opcao2)
					{
						case 1:
							cout << "� um Le�o ";
						break;
						
						case 2:
							cout << "� um Cavalo";
						break;
						default: 
							cout << "op�ao invalida";
					}
				break;		
					 
				case 2:
					cout << "se for On�voros digite 1\nse for Frut�voros digite 2\n";
					cin >> opcao2;
					switch (opcao2)
					{
						case 1:
							cout << " � um Homem";
						break;
						
						case 2:
							cout <<" � um Macaco"; 
						break;
						default:
							cout << "op�ao invalida";
					}
				break;
				
				case 3:
					cout << " � um Morcego";
				break;
				
				case 4:
					cout << " � uma Baleia";
				break;
				default:
					cout << "op�ao invalida";	
			}
		break;
		
		case 'R':
			cout << "se um com casco digite 1\nse for um Carn�voros digite 2\nse for Sem patas digite 3\n";
			cin >> opcao2;
			switch (opcao2)
			{
				case 1:
					cout << " � uma Tartaruga";
				break;
				
				case 2:
					cout << " � um Crocodilo";
				break;
				
				case 3:
					cout << " � uma Cobra";
				break;	
				default :
					cout << "op�ao invalida";	
			}
		break;
		default:
			cout << " op�ao invalida";
	}
		
}

