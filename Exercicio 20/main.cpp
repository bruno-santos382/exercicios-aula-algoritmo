#include <iostream>
#include <cstring>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

bool addChar(char str[], int size, char ch, int pos)
{
	int len = strlen(str);
	
	if (pos < 0 || pos >= len)
	{
		return false;
	}
	
	for (int i = len - 1; i >= pos; i--)
	{
		str[i + 1] = str[i];
	}
	
	str[pos] = ch;
	
	cout << "array size: " << (sizeof(str)) << endl;
	
	str[min(size - 1, len + 1)] = '\0';
	
	return true;
}

int main(int argc, char** argv) 
{
	char str[100];	
	
	cout << "Digite uma string: ";
	cin.getline(str, 100);
	
	char ch;
	cout << "Digite o caractere a ser inserido: ";
	cin >> ch;
	
	int pos;
	cout << "Digite a posicao onde sera inserido: ";
	cin >> pos;
	pos = pos - 1;
	
	if (addChar(str, sizeof(str) / sizeof(char), ch, pos))
	{
		cout << "String modificada: " << endl;
		cout << str;
	}
	else
	{
		cout << "Erro ao inserir caractere.";
	}

	return 0;
}
