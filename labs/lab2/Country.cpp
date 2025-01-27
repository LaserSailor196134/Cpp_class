#include <string>
#include "Country.h"

using namespace std;

Country::Country(string name_, long population_){
	population = population_;
	name = name_;
	countries++;
}

Country::~Country(){
	countries--;
}

string Country::getName(){
	return name;
}

long Country::getPopulation(){
	return population;
}

void Country::setName(const string& name_){
	name = name_;
}
void Country::setPopulation(long population_){
	population = population_;
}

int Country::numberOfCountries(){
	return countries;
}

int Country::countries = 0;

