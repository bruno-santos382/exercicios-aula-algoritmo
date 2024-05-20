#include <iostream>
#include <algorithm>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

bool descending(int a, int b)
{
	return a > b;
}

int main(int argc, char** argv) {
	
	int nums[3];
	cout << "Informe o primeiro numero: ";
	cin >> nums[0];
	cout << "Informe o segundo numero: ";
	cin >> nums[1];
	cout << "Informe o terceiro numero: ";
	cin >> nums[2];
	
	int n = sizeof(nums) / sizeof(int);
	sort(nums, nums + n, descending);
	
	cout << "\nNumeros em ordem decrescente.\n";
	
	for (int i = 0; i < n; i++)
	{
		cout << nums[i] << endl;
	}
	
	return 0;
}
