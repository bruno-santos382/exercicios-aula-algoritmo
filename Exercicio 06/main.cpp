#include <iostream>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int idade;
	cout << "Informe a idade do paciente: ";
	cin >> idade;
	
	float peso;
	cout << "Informe o peso do paciente: ";
	cin >> peso;
	
	int mg;
	
	if (idade >= 12)
	{
		if (peso >= 60)
		{
			mg = 1000;
		}
		else
		{
			mg = 875;
		}
	}
	else
	{
		if (peso <= 15)
		{
			mg = 200;
		}
		else if (peso <= 30)
		{
			mg = 500;
		}
		else if (peso <= 50)
		{
			mg = 750;
		}		
	}
	
	float ml = mg / 500;
	int gotas = ceil(ml * 20);
	
	cout << "Quantas gotas do medicamento o paciente deve tomar por dose: " << gotas;
	
	return 0;
}
