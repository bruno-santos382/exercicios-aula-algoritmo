#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	float valor_hora;
	cout << "Informe o valor em reais por hora trabalhada: ";
	cin >> valor_hora;
	
	float horas_trabalhadas;
	cout << "Informe o total de horas trabalhadas no mes: ";
	cin >> horas_trabalhadas;
	
	float total = valor_hora * horas_trabalhadas;
	cout << "Valor recebido no mes: " << total;
	
	return 0;
}
