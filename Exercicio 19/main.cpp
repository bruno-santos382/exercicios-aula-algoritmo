#include <iostream>
#include <cstring>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

bool removeChar(char str[], int pos)
{
	int len = strlen(str);
	
	if (pos < 0 || pos >= len)
	{
		return false;
	}
	
	for (int i = pos; i < len - 1; i++)
	{
		str[i] = str[i + 1];
	}
	
	str[len - 1] = '\0';
	
	return true;
}

int main(int argc, char** argv) {
	char str[100];
	cout << "Digite uma string: ";
	cin.getline(str, 100);
		
	int pos;
	cout << "Digite a posicao do caractere a ser removido: ";
	cin >> pos;
	pos = pos - 1;
	
	if (removeChar(str, pos))
	{
		cout << "String modificada: " << endl;
		cout << str;
	}
	else
	{
		cout << "Erro ao remover caractere.";
	}

	return 0;
}
