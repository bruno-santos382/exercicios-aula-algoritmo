#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int tamanho_arquivo;
	cout << "Informe o tamanho do arquivo (em MB): ";
	cin >> tamanho_arquivo;
	
	int velocidade_net;
	cout << "Informe a velocidade da internet (em Mbps): ";
	cin >> velocidade_net;
	
	int segundos = tamanho_arquivo / velocidade_net;
	int minutos = segundos / 60;
	segundos = segundos % 60;

	cout << "Tempo total para baixar o arquivo: " << minutos << " minuto(s) e " << segundos << " segundo(s)";
	
	return 0;
}
