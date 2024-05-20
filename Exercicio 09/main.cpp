#include <iostream>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	double a, b, c;
	
	cout << "Informe o valor de A: ";
	cin >> a;
	
	if (a == 0)
	{
		cout << "A equacao nao e de segundo grau.";
		
		return 0;
	}
	
	cout << "Informe o valor de B: ";
	cin >> b;
	
	cout << "Informe o valor de C: ";
	cin >> c;
	
	double delta = pow(b, 2) - 4 * a * c;
	
	if (delta < 0)
	{
		cout << "A equacao nao possui raizes reais.";
	}
	else if (delta > 0)
	{
		cout << "A equacao possui duas raizes reais.";
	}
	else
	{
		cout << "A equacao possui apenas uma raiz real.";
	}
	
	
	return 0;
}
