#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


bool numero_perfeito(int num)
{
	int soma;
	
	for (int i = 1; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			soma += i;
		}
	}
	
	return soma == num;
}

int main(int argc, char** argv) {
	
	int num;
	cout << "Digite um numero: ";
	cin >> num;
	
	if (numero_perfeito(num))
	{
		cout << num << " e perfeito" << endl;
	}
	else
	{
		cout << num << " nao e perfeito" << endl;
	}
	
	return 0;
}
