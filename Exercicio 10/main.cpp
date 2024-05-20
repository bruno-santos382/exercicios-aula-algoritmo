#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int ano;
	cout << "Informe o ano: ";
	cin >> ano;
	
	if (ano % 4 == 0 && ano % 100 != 0)
	{
		cout << "Ano bissexto";
	}
	else
	{
		cout << "Ano nao bissexto";
	}
	
	return 0;
}
