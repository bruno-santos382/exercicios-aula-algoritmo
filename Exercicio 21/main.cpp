#include <iostream>
#include <cstdlib>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) 
{
	int valores[20];
	int size = sizeof(valores) / sizeof(valores[0]);
	
	cout << "Valores do vetor: ";
	
	for (int i = 0; i < size; i++)
	{
		valores[i] = rand() % 100 + 1;
		cout << valores[i] << ", ";
	}
	
	cout << endl;
	
	while (true)
	{
		int buscar;
		cout << "Digite um valor para buscar ou 0 para cancelar: ";
		cin >> buscar;
		
		if (buscar == 0)
		{
			break;
		}
		
		bool encontrou = false;
		
		for (int i = 0; i < size && !encontrou; i++)
		{
			if (valores[i] == buscar)
			{
				cout << "Valor encontrado." << endl;
				encontrou = true;
			}
		}
		
		if (!encontrou)
		{
			cout << "Valor nao encontrado." << endl;	
		}
	}

	return 0;
}
