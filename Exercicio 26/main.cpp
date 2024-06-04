#include <iostream>
#include <algorithm>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int matrix[10][10];
	
	cout << "Preencha a matriz 10x10: " << endl;
	cout << "Usar valores aleatorios? [S/N] ";
	
	char aleatorio;
	cin >> aleatorio;
	
	int maior_linha;
	int maior_coluna;
	int maior_valor = 0;
	
	
	if (aleatorio == 'S' || aleatorio == 's')
	{
		
		for (int linha = 0; linha < 10; linha++)
		{		
			for (int coluna = 0; coluna < 10; coluna++)
			{
				int num = rand() % 1000;
				cout << "Linha " << linha + 1 << ", coluna " << coluna + 1 << ": " << num << endl;

				matrix[linha][coluna] = num;
				
				if (matrix[linha][coluna] > maior_valor)
				{
					maior_valor = matrix[linha][coluna];
					maior_linha = linha;
					maior_coluna = coluna;
				}
			}
		}
	}
	else
	{
		for (int linha = 0; linha < 10; linha++)
		{		
			for (int coluna = 0; coluna < 10; coluna++)
			{
				cout << "Linha " << linha + 1 << ", coluna " << coluna + 1 << ": ";
				cin >> matrix[linha][coluna];
				
				if (matrix[linha][coluna] > maior_valor)
				{
					maior_valor = matrix[linha][coluna];
					maior_linha = linha;
					maior_coluna = coluna;
				}
			}
		}
	}
	
	if (maior_valor > 0)
	{
		cout << "O maior valor na matriz e " << maior_valor << " (linha " << maior_linha + 1 << ", coluna " << maior_coluna + 1 << ")";
	}
	else
	{
		cout << "Nao foi possivel definir o maior valor na matriz.";
	}
	
	return 0;
}
