#define STATE
#include <string>
using namespace std;

class Kirjo {
public:
	virtual void kirjoState(const string& filename) = 0;

};
class Luku {
public:
	virtual void lukuState(const string& filename) = 0;
};

