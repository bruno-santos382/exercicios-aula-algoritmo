#include <iostream>
#include <sstream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

bool valida_cpf(string cpf)
{
	int digitos[11];
	
	for (int i = 0; i < 11; i++)
	{
		digitos[i] = cpf[i] - '0';
	}
	
	int total_dv1 = 0;
	
	for (int i = 0; i < 9; i++)
	{
		total_dv1 += digitos[i] * (10 - i);	
	}
		
	int dv1 = 11 - (total_dv1 % 11);
	
	int total_dv2 = dv1 * 2;

	for (int i = 0; i < 9; i++)
	{
		total_dv2 += digitos[i] * (11 - i);
	}
	
	int dv2 = 11 - (total_dv2 % 11);
	
	if (digitos[9] == dv1 && digitos[10] == dv2)
	{
		return true;
	}
	
	return false;
}

int main(int argc, char** argv)
{
	string cpf;
	
	while (true)
	{
		cout << "Informe o CPF: ";
		cin >> cpf;
		
		if (cpf.length() == 11)
		{
			break;
		}
		
		cout << "CPF Invalido.";
	}
	
	if (valida_cpf(cpf))
	{
		cout << "CPF Valido.";
	}
	else
	{
		cout << "CPF Invalido.";
	}
	
	return 0;
}
