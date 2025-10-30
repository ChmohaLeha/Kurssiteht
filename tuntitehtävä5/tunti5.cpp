#include <iostream>
using namespace std;

int main()
{
	int x = 4;

	int* y = &x;
	int** z = &y;

	**z = 200;

	cout << x << "\n";


}