#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float valor_hora;
	cout << "Informe o valor em reais por hora trabalhada: ";
	cin >> valor_hora;
	
	float horas_trabalhadas;
	cout << "Informe o total de horas trabalhadas no mes: ";
	cin >> horas_trabalhadas;
	
	float total_bruto = valor_hora * horas_trabalhadas;
	float total_ir = total_bruto * 0.11;
	float total_inss = total_bruto * 0.08;
	float total_sindicato = total_bruto * 0.05;
	float total_liquidado = total_bruto - total_ir - total_inss - total_sindicato;
	
	cout << "+ Salario Bruto : R$ " << total_bruto << endl;
	cout << "- IR (11%) : R$ " << total_ir << end;
	cout << "- INSS (8%) : R$ " << total_inss << end;
	cout << "- Sindicato (5%) : R$ " << total_sindicato << end;
	cout << "= Salario Liquido : R$ " << total_liquidado << end;
	
	return 0;
}
