#ifndef Country_h
#define Country_h
#include <string>

using namespace std;

class Country{
	public:
		Country(string, long);
		Country(const Country&);
		~Country();
		static int numberOfCountries();
		//setters and getters
		long getPopulation();
		string getName();
		void setName(const string&);
		void setPopulation(long);
	private:
		static int countries;
		long population;
		string name;
};
#endif //Country.h
