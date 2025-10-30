#include <iostream>
using namespace std;


int main()
{
	int t[5] = { 10, 20, 30, 40, 50 };

	int* y = t;
	int x = 0;

	while (x < 5)
	{
		cout << *y << "\n";
		x++;
		y++;
	}
	return 0;
}