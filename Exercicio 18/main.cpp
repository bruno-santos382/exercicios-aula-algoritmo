#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) 
{
	int votos[7] = {0, 0, 0, 0, 0, 0, 0};
	int total;

	cout << "Votacao:" << endl;
	cout << "1- Canditado 1" << endl;
	cout << "2- Canditado 2" << endl;
	cout << "3- Canditado 3" << endl;
	cout << "4- Canditado 4" << endl;
	cout << "5- Nulo" << endl;
	cout << "6- Branco" << endl;
	cout << endl;
	
	while (true)
	{
		int voto;
		cout << "Realize seu voto ou 0 para cancelar: ";
		cin >> voto;
		
		if (voto < 0 || voto > 6)
		{
			cout << "Opcao invalida." << endl;
			continue;
		}
		
		if (voto == 0)
		{
			break;
		}
		
		votos[voto] += 1;
		total += 1;
	}
	
	cout << endl;
	cout << "Quantidade total de votos: " << total << endl;
	
	for (int i = 1; i < 7; i++)
	{
		float percento = (votos[i] / float(total)) * 100.0;
		
		if (i == 6) 
		{
			cout << "Em branco: " << percento << "%" << endl;
		} 
		else if (i == 5)
		{
			cout << "Nulo: " << percento << "%" << endl;
		}
		else
		{
			cout << "Votos Canditado " << i << ": " << percento << "%" << endl;
		}
	}
		
	return 0;
}
