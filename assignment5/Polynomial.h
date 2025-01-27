#include <vector>
#include <iostream>


using namespace std;

class Polynomial{
	public:
		Polynomial();
		static void xToThePower(n);
		Polynomial& operator=(Polynomial const& p2);
		Polynomial operator+=(Polynomial const& p2);
		Polynomial operator*=(double coefficient);
		ostream& operator<<(ostream& stream, Polynomial const& p2);
		
		print(ostream&);

	private:
		vector<double> polynomial;
};
