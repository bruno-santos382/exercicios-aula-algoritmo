#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

	cout << "Lojas Tabajara" << endl;
	
	double total = 0.0;
	int produtos = 0;
		
	while (true)
	{
		double valor_produto;
		
		cout << "Digite o valor do produto ou 0 para cancelar: ";
		cin >> valor_produto;
		
		produtos += 1;
		cout << "Produto " << produtos << ": R$ " << valor_produto << endl;
		
		if (valor_produto == 0.0)
		{
			break;
		}
		
		total += valor_produto;
	
	}
	
	cout << "Total: R$ " << total << endl;
	
	double dinheiro_cliente;

	while (true)
	{		
		cout << "Digite o valor em dinheiro que o cliente forneceu: ";
		cin >> dinheiro_cliente;
			
		if (dinheiro_cliente >= total)
		{
			break;
		}
		
		cout << "Dinheiro insuficiente." << endl;
	}
	
	cout << "Dinheiro: R$ " << dinheiro_cliente << endl;
	cout << "Troco: R$ " << dinheiro_cliente - total << endl;	
	
	return 0;
}
