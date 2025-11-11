#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
	string _title;
	int _pages;

public:

	Book(const string& title, int pages)
		: _title(title), _pages(pages) {}

	Book(const Book& other)
		: _title(other._title), _pages(other._pages)
	{
		cout << "Kopioi konstruktori" << _title << endl;
	}

	void print() const
	{
		cout << "Kirja: " << _title << "/" << _pages << endl;
	}

};

int main()
{
	Book x("PASI", 360);
	Book y = x;
	x.print();
	y.print();
}