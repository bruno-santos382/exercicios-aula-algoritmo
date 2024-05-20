#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int num;
	
	while (true)
	{
		cout << "Informe um numero entre 0 e 1000: ";
		cin >> num;
				
		if (1 <= num <= 1000)
		{
			break;
		}
		
		cout << "Numero invalido.\n\n";
	}
	
	
	int centenas = floor(num / 100.0);
	num -= centenas * 100;
	int dezenas = floor(num / 10.0);
	num -= dezenas * 10;
	int unidades = num;
	
	if (centenas == 1)
	{
		cout << "1 centena";
	}
	else if (centenas > 0)
	{
		cout << centenas << " centenas";
	}
	
	if (dezenas > 0)
	{
		if (centenas > 0)
		{
			if (unidades > 0)
			{
				cout << ", ";
			}
			else
			{
				cout << " e ";
			}
		}
		
		if (dezenas == 1)
		{
			cout << "1 dezena";
		}
		else
		{
			cout << dezenas << " dezenas";
		}
	}
	
	if (unidades > 0)
	{
		if (dezenas > 0 || centenas > 0)
		{
			cout << " e ";
		}
		
		if (unidades == 1)
		{
			cout << "1 unidade";
		}
		else
		{
			cout << unidades << " unidades";
		}
	}

	return 0;
}
