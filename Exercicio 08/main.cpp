#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int n1, n2, n3;
	
	cout << "Informe o primeiro lado do triangulo: ";
	cin >> n1;
	cout << "Informe o segundo lado do triangulo: ";
	cin >> n2;
	cout << "Informe o terceiro lado do triangulo: ";
	cin >> n3;
	
	if (n1 + n2 > n3 || n2 + n3 > n1 || n1 + n3 > n2)
	{	
		if (n1 == n2 && n2 == n3)
		{
			cout << "Triangulo Equilatero";
		}
		else if (n1 == n2 || n1 == n3 || n2 == n3)
		{
			cout << "Triangulo Isosceles";
		}
		else 
		{
			cout << "Triangulo Escaleno";
		}
	}
	else
	{
		cout << "Impossivel formar triangulo.";
	}
	
	return 0;
}
