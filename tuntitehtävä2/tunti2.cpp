#include <iostream>
using namespace std;


int main()
{
	double x = 3.4;
	double* y = &x;

	cout << *y << endl;

	*y += 4.5;

	cout << *y << endl;

	return 0;
}