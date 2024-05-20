#include <iostream>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int valor;
	
	while (true)
	{
		cout << "Informe a quantia do saque (minimo 10, maximo 600): ";
		cin >> valor;
		
		if (1 <= valor <= 600)
		{
			break;
		}
		
		cout << "Quantia invalida.";
	}
	
	int notas_100 = floor(valor / 100.0);
	valor -= notas_100 * 100;
	int notas_50 = floor(valor / 50.0);
	valor -= notas_50 * 50;
	int notas_10 = floor(valor / 10.0);
	valor -= notas_10 * 10;
	int notas_5 = floor(valor / 5.0);
	valor -= notas_5 * 5;
	int notas_1 = valor;
	
	cout << "Notas de 100 reais: " << notas_100 << endl;
	cout << "Notas de 50 reais: " << notas_50 << endl;
	cout << "Notas de 10 reais: " << notas_10 << endl;
	cout << "Notas de 5 reais: " << notas_5 << endl;
	cout << "Notas de 1 reais: " << notas_1 << endl;
	
	return 0;
}
