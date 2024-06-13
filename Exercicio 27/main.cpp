#include <iostream>
#include <algorithm>
#include <ctime>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int medidas[4][24];
	
	cout << "Informe as medidas da pulsacao dos pacientes: " << endl;
	cout << "Preencher valores aleatorios? [S/N] ";
	
	char aleatorio;
	cin >> aleatorio;
	
	if (aleatorio == 'S' || aleatorio == 's')
	{
		srand(time(0));
		
		float maior_media = 0;
		int paciente_maior_media = 0;
		
		for (int linha = 0; linha < 4; linha++)
		{		
			cout << endl;
			
			int total_medidas = 0;
			
			for (int coluna = 0; coluna < 24; coluna++)
			{
				int num = rand() % 100;
				cout << "Paciente " << linha + 1 << ", pulsacao [" << coluna + 1 << "/24]: " << num << endl;
				medidas[linha][coluna] = num;
				total_medidas += num;
			}
			
			float media = total_medidas / 24.0;
			
			if (media > maior_media)
			{
				maior_media = media;
				paciente_maior_media = linha;
			}
			
			cout << "Paciente " << linha + 1 << ", pulsacao media: " << media << endl;
		}
		
		cout << "\nO paciente " << (paciente_maior_media + 1) << " apresentou maior valor medio das pulsacoes";
	}
	else
	{
		float maior_media = 0;
		int paciente_maior_media = 0;
		
		for (int linha = 0; linha < 4; linha++)
		{
			cout << "Paciente " << linha + 1 << ": " << endl;
					
			int total_medidas = 0;
					
			for (int coluna = 0; coluna < 24; coluna++)
			{
				cout << "Pulsacao [" << coluna + 1 << "/24]: ";
				cin >> medidas[linha][coluna];
				total_medidas += medidas[linha][coluna];
			}
			
			float media = total_medidas / 24.0;
			
			if (media > maior_media)
			{
				maior_media = media;
				paciente_maior_media = linha;
			}
			
					
			cout << endl;
		}
		
		cout << "\nO paciente " << (paciente_maior_media + 1) << " apresentou maior valor medio das pulsacoes";
	}
	
	
	return 0;
}
