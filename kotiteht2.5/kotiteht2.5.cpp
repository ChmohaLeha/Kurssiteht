#include <iostream>
using namespace std;

void nollaa(int* tl, int koko)
{
	for (int i = 0; i < koko; i++)
	{
		tl[i] = 0;
	}

}

int main()
{
	int luku[5] = { 10, 20, 30, 40, 50 };

	cout << "alkuperäset luvut: ";
	for (int i = 0; i < 5; i++)
	{
		cout << luku[i] << " ";
	}
	cout << endl;

	nollaa(luku, 5);

	cout << "nollaukse jälkee: ";
	for (int i = 0; i < 5; i++)
	{
		cout << luku[i] << " ";
	}
	cout << endl;

	return 0;
}