#include <iostream>
using namespace std;

int summa(int* taulukko, int koko)
{
	int sum = 0;
	for (int i = 0; i < koko; i++)
	{
		sum += taulukko[i];
	}
	return sum;
}

int main()
{
	int koko;

	cout << "Anna koko: ";
	cin >> koko;

	int* taulukko = new int[koko];

	for (int i = 0; i < koko; i++)
	{
		cout << "Arvo " << i + 1 << ":";
		cin >> taulukko[i];
	}

	int sum = summa(taulukko, koko);
	cout << "Summa: " << sum << endl;

	delete[] taulukko;

	return 0;
}