#include <iostream>
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int matrix[3][3];
	
	cout << "Preencha os valores da matriz 3x3:" << endl;
	
	for (int coluna = 0; coluna < 3; coluna++)
	{
		for (int linha = 0; linha < 3; linha++)
		{
			cout << "Linha " << linha + 1 << ", coluna " << coluna + 1 << ": ";
			cin >> matrix[linha][coluna];
		}
	}
	
	cout << "\nMatriz original:" << endl;
	
	for (int coluna = 0; coluna < 3; coluna++)
	{		
		cout << "[";
		
		for (int linha = 0; linha < 3; linha++)
		{
			cout << setw(4) << matrix[linha][coluna];
		}
		
		cout << setw(4) << "]" << endl;
	}
	
	cout << "\nTranposta:" << endl;
	
	for (int coluna = 0; coluna < 3; coluna++)
	{		
		cout << "[";
		
		for (int linha = 0; linha < 3; linha++)
		{
			cout << setw(4) << matrix[coluna][linha];
		}
		
		cout << setw(4) << "]" << endl;
	}
	
	return 0;
}
