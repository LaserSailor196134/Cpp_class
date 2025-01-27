#ifndef Fraction_h
#define Fraction_h
class Fraction{
public:
	Fraction(int, int);
	void add(int);
	void add(Fraction);
	void subtract(int);
	void subtract(Fraction);
	void multiply(int);
	void multiply(Fraction);
	void divide(int);
	void divide(Fraction);
	int gcd(int, int);
	void reduce();
	void printFraction();
private:
	void setTop(int);
	void setBottom(int);
	int getTop();
	int getBottom();
	int top;
	int bottom;
};
#endif //Fraction_h
