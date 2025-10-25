#include <iostream>
#include <string>
using namespace std;

int main()
{
	int vuosi;

	cout << "Anna vuosi: ";
	cin >> vuosi;
	if (vuosi / 4 || vuosi / 100 && vuosi / 400)
	{
		cout << "Vuosi on karkausvuosi" << endl;
	}
	else
	{
		cout << "Vuosi ei ole karkausvuosi" << endl;
	}
	return 0;
}