#include <iostream>
#include <string>
using namespace std;

int main()
{
	int tuuma;
	double cm;
	cout << "Anna tuuma: ";
	cin >> tuuma;
	cm = (tuuma * 2.54);
	cout << "Tuumat senttimetrinä: " << cm;
	

	while (tuuma >= 0)
	{
		cout << "Anna tuuma: ";
		cin >> tuuma;
		cm = (tuuma * 2.54);
		cout << "Tuumat senttimetrinä: " << cm;
	}
	return 0;
	
}