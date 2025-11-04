#include <iostream>
using namespace std;

int main()
{
	int koko;

	cout << "Taulukon koko: ";
	cin >> koko;

	int* taulukko = new int[koko];

	cout << "Taulukon arvot: ";
	for (int i = 0; i < koko; i++)
	{
		taulukko[i] = (i + 1) * 10;
		cout << taulukko[i] << " ";
	}
	cout << endl;

	delete[] taulukko;

	return 0;
}