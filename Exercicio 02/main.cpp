#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int n1;
	cout << "Digite um numero inteiro: ";
	cin >> n1;
	
	int n2;
	cout << "Digite um segundo numero inteiro: ";
	cin >> n2;
	
	float n3;
	cout << "Digite um numero real: ";
	cin >> n3;
	
	cout << "\nproduto do dobro do primeiro com metade do segundo: " << (n1 * 2 + n2 / 2) << endl;
	cout << "a soma do triplo do primeiro com o terceiro.: " << (n1 * 3 + n3) << endl;
	cout << "o terceiro elevado ao cubo: " << powf(n3, 3) << endl;
	
	return 0;
}
