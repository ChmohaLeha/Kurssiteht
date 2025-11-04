#include <iostream>
using namespace std;

void fC()
{
	cout << "C funktio" << endl;
}

void fB()
{
	cout << "B funktio" << endl;
	fC();
}

void fA()
{
	cout << "A funktio" << endl;
	fB();
}

int main()
{
	fA();
}