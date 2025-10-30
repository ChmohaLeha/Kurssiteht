#include <iostream>
using namespace std;

void summaa(int* x, int* y, int* sum)
{
	*sum = *x + *y;

}

int main()
{

	int a = 6, b = 8, summa = 0;

	summaa(&a, &b, &summa);

	cout << "Muuttujién summa:  " << a << " + " << b << " = " << summa << endl;

	return 0;
}