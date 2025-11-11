#include <iostream>
#include <string>
using namespace std;

class Lamp
{
private: 
	bool _on;

public:
	Lamp() : _on(false)
	{
		cout << "lamppu luotu";
	}
	~Lamp()
	{
		cout << "lamppu tuhottu";
	}
	
	void paalla()
	{
		_on = true;
		cout << "lamppu päällä";
	}
	void pois()
	{
		_on = false;
		cout << "lamppu pois päältä";
	}

};
int main()
{
	{
		Lamp x;
		x.paalla();
		x.pois();
	}
	
}