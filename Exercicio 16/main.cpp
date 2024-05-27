#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int main(int argc, char** argv) {
	
	int trigos = 1;
	
	for (int i = 0; i < 64; i++)
	{
		trigos = trigos + (i * 2);
		cout << "Quadro: " << i + 1 << ", quantidade de trigo: " << trigos << endl;
	} 
	
	return 0;
}
