#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv)
{
	int numbers[100];
	int id = 0;
	
	for (int i = 0; id < 100; i++)
	{
		if (i % 7 != 0 || i % 10 == 7)
		{
			numbers[id] = i;
			id += 1;
			cout << "numero[" << id << "] = " << i << endl;
		}
	}
	
	return 0;
}
