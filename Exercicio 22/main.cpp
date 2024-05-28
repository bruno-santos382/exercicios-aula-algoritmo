#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv)
{
	int valores[10];
	int size = sizeof(valores) / sizeof(valores[0]);
	
	for (int i = 0; i < size; i++)
	{
		cout << "[" << i + 1 << "/" << size << "] Digite um numero: ";
		cin >> valores[i];
	}
	
	int referencia;
	cout << "Informe um valor de referencia: ";
	cin >> referencia;
	
	int menores = 0;
	int iguais = 0;
	
	for (int i = 0; i < size; i++)
	{
		if (valores[i] < referencia)
		{
			menores += 1;
		}
		else if (valores[i] == referencia)
		{
			iguais += 1;
		}
	}
	
	if (menores == 1) 
	{
		cout << "1 numero e menor que a referencia" << endl;
	}
	else 
	{
		cout << menores << " numeros sao menores que a referencia" << endl;
	}
	
	if (iguais == 1) 
	{
		cout << "1 numero e igual a referencia" << endl;
	}
	else 
	{
		cout << iguais << " numeros sao iguais a referencia" << endl;
	}
	
	return 0;
}
