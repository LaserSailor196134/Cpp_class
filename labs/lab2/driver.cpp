#include <iostream>
#include "Country.h"

using namespace std;

int main(){
	cout << "no countries created, number of countries: " << Country::numberOfCountries() << endl;
	Country* country1 = new Country("Canada", 40000000);
	cout << "one country created, number of countries: " << Country::numberOfCountries() << endl;
	Country* country2 = new Country("USA", 350000000);
	//Country* country3 = new Country(country2); copying
	//Country country4 = *country2; copying
	cout << "another country created, number of countries: " << Country::numberOfCountries() << endl;
	cout << "USA population: " << country2->getPopulation() << endl;
	cout << "Canada name: " << country1->getName() << endl;
	delete(country1);
	country1 = NULL;
 	cout << "one country deleted, number of countries: " << Country::numberOfCountries() << endl;
}
