#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int busca_caractere(string str, char ch)
{
	for (int i = 0; i < str.size(); i++)
	{
		if (ch == str[i])
		{
		 	return i;
		}
	}
	
	return -1;
}

int main(int argc, char** argv) {
	string str;
	cout << "Digite uma string: ";
	cin >> str;
	
	char ch;
	cout << "Digite o caractere para busca: ";
	cin >> ch;
	
	int char_pos = busca_caractere(str, ch);
	
	if (char_pos == -1)
	{
		cout << "Nao encontrado" << endl;;
	}
	else
	{
		cout << "Encontrado na posicao " << (char_pos + 1) << endl;
	}
	
	return 0;
}
