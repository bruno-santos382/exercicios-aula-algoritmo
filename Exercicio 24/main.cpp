#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) 
{
	int numbers[10];
	int size = sizeof(numbers) / sizeof(numbers[0]);
	int id = 0;
	
	while (id < size)
	{
		int numero;
		cout << "[" << id + 1 << "/" << size << "] Digite um numero: ";
		cin >> numero;	
		
		bool repetido = false;
		
		for (int i = 0; i < id; i++)
		{
			if (numbers[i] == numero)
			{
				cout << "Numero repetido." << endl;
				repetido = true;
				break;
			}
		}
		
		if (!repetido)
		{
			numbers[id++] = numero;
		}
	}
	
	for (int i = 0; i < size; i++)
	{
		cout << "numero[" << i << "] = " << numbers[i] << endl;
	}
	
	return 0;
}
