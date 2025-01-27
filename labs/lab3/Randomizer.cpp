#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Randomizer.h"

using namespace std;

Randomizer* Randomizer::instance_ = nullptr;
Randomizer& Randomizer::getInstance(){
	if(instance_ == nullptr){
		instance_ = new Randomizer;
	}
	return *instance_;
}

Randomizer::Randomizer(){
	srand(time(NULL));
}

int Randomizer::nextInt(int high){
	return (rand() % high);
}

int Randomizer::nextInt(int low, int high){
	return ((rand() % (high - low)) + low);
}

int Randomizer::die(int sides){
	return ((rand() % sides) + 1);
}

double Randomizer::nextDouble(){
	return(double(rand() % 10000) / 10000);
}

char Randomizer::randomChar(const string& s){
	return s[rand() % s.length()];
}

