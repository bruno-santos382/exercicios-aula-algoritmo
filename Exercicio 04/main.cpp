#include <iostream>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	float area;
	cout << "Informe o tamanho em metros quadrados da area a ser pintada: ";
	cin >> area;
	
	float total_litros = area / 3;
	float num_latas = ceil(total_litros / 18);
	float valor_total = num_latas * 80.00;
	
	cout << "Quantidade de latas de tinta a serem compradas: " << num_latas << endl;
	cout << "Valor total a ser pago: R$ " << valor_total << endl;
	
	return 0;
}
