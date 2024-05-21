#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int num;
	
	while (true)
	{
		cout << "Informe um numero: ";
		cin >> num;
		
		if (num % 2 == 1)
		{
			break;
		}
		
		cout << "Numero invalido, apenas impares permitido.";
	}
	
	for (int i = 0; i < num; i++)
	{
		for (int k = 0; k < i; k++)
		{
			cout << " ";	
		}
		
		for (int k = i; k < num - i; k++)
		{
			cout << k + 1;
		}
		
		for (int k = num - i; k < num; k++)
		{
			cout << " ";	
		}
		
		cout << endl;
	}
	
	return 0;
}
