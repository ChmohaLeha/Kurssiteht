#include <iostream>
#include <string>
using namespace std;

class Point
{
private:
	int _x;
	int _y;

public:
	Point(int x, int y) : _x(x), _y(y) {}
	
	void print() const
	{
		cout << "Piste(" << _x << _y;
	}
};

int main()
{
	Point l(3, 4);
	l.print();
}

