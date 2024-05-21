#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int limite;
	cout << "Informe o numero maximo: ";
	cin >> limite;
	
	for (int i = 0, a = 0, b = 1; i < limite; i++)
	{
		cout << a << " ";
		
		int temp = a;
		a = b;
		b = temp + b;
	}
	
	return 0;
}
