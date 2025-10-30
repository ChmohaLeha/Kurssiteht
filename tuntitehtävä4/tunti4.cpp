#include <iostream>
using namespace std;

void tuplaa(int* luku)
{
	*luku *= 2;

}



int main()
{
	int x = 43;
	tuplaa(&x);
	cout << x << "\n";

	return 0;
}