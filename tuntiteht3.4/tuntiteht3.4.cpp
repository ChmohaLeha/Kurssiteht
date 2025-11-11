#include <iostream>
using namespace std;

class Box
{
private:
	int _size;

public:
	Box() : _size(0) {}

	void set_size(int s)
	{
		_size = s;
	}
	void show_size() const
	{
		cout << "Laatikko koko = " << _size << endl;
	}
};

int main()
{
	Box* b = new Box();
	b->set_size(23);
	b->show_size();
	delete b;
}
