#include <iostream>
#include <iomanip>
#include <vector>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


void printar_matriz(vector<int>& matrix)
{
	cout << "[";
	
	for (size_t i = 0; i < matrix.size(); ++i)
	{
		cout << setw(4) << matrix[i];
	}
	
	cout << setw(4) << "]" << endl;
}



vector<int> somar(vector<int>& m1, vector<int>& m2)
{
	size_t size = max(m1.size(), m2.size());

	vector<int> result(size, 0);
	
	for (size_t i = 0; i < size; i++)
	{
		int num1 = (i < m1.size() ? m1[i] : 0);
		int num2 = (i < m2.size() ? m2[i] : 0);
		result[i] = num1 + num2;
	}
	
	return result;
}

vector<int> multiplicar(vector<int>& m1, vector<int>& m2)
{
	size_t size = max(m1.size(), m2.size());

	vector<int> result(size, 0);
	
	for (size_t i = 0; i < size; i++)
	{
		int num1 = (i < m1.size() ? m1[i] : 1);
		int num2 = (i < m2.size() ? m2[i] : 1);
		result[i] = num1 * num2;
	}
	
	return result;
}

int main(int argc, char** argv) {

	cout << "Digite os valores da linha 1 da matriz (um por linha / 0 - cancelar): " << endl;
	
	vector<int> m1;
	
	while (true)
	{
		int num;
		cin >> num;
		
		if (num == 0)
		{
			break;
		}
		
		m1.push_back(num);
	}
	
	cout << "\nDigite os valores da linha 2 da matriz (um por linha / 0 - cancelar): " << endl;
	
	vector<int> m2;
	
	while (true)
	{
		int num;
		cin >> num;
		
		if (num == 0)
		{
			break;
		}
		
		m2.push_back(num);
	}
	
	cout << "\nMatriz: " << endl;
	printar_matriz(m1);
	printar_matriz(m2);
	
	vector<int> somado = somar(m1, m2);
	cout << "\nMatriz (soma): " << endl;
	printar_matriz(m1);
	printar_matriz(somado);
	
	vector<int> multiplicado = multiplicar(m1, m2);
	cout << "\nMatriz (multiplicacao): " << endl;
	printar_matriz(m1);
	printar_matriz(multiplicado);
	
	return 0;
}
