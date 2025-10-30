#include <iostream>
using namespace std;

void suma(int &x, int &y, int &sum)
{
	sum = x + y;

}

int hui()
{

	int a = 6, b = 8, summa = 0;

	suma(a, b, summa);

	cout << "Muuttujién summa:  " << a << " + " << b << " = " << summa << endl;

	return 0;
}