#define LASKUT

class Laskutoimitus {
public:
	virtual double laske(double x, double y) = 0;
	virtual ~Laskutoimitus() {}

};

class Yhteen : public Laskutoimitus {
public:
	double laske(double x, double y) override {
		return x + y;
	}
};

class Kerto : public Laskutoimitus {
public:
	double laske(double x, double y) override {
		return x * y;
	}
};

