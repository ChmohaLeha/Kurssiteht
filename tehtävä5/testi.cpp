#include <iostream>
#include <string>
using namespace std;

int main()
{
	int luku = 3;

	while (luku <= 1000)
	{
		std::cout << luku << '\n';
		luku += 3;
	}
	return 0;
}