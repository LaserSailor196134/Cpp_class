#include <iostream>
#include "Fraction.h"
using namespace std;

//constructor
Fraction::Fraction(int numerator, int denominator){
	setTop(numerator);
	setBottom(denominator);
}
void Fraction::add(int num){
	num *= bottom;
	top += num;
	reduce();
}

void Fraction::add(Fraction frac){
	top *= frac.bottom;
	top += (frac.top * bottom);
	bottom *= frac.bottom;
	reduce();
}

void Fraction::subtract(int num){
	num *= bottom;
	top -= num;
	reduce();
}

void Fraction::subtract(Fraction frac){
	top *= frac.bottom;
	top -= (frac.top * bottom);
	bottom *= frac.bottom;

	reduce();
}

void Fraction::multiply(int num){
	top *= num;
	reduce();
}

void Fraction:: multiply(Fraction frac){
	top *= frac.top;
	bottom *= frac.bottom;
	reduce();
}

void Fraction::divide(int num){
	bottom *= num;
	reduce();
}

void Fraction::divide(Fraction frac){
	top *= frac.bottom;
	bottom *= frac.top;
	reduce();
}

int Fraction::gcd(int x, int y){
	if(y == 0){
		return(x);
	}
	if(x > y){
		return(gcd(y, x % y));
	}else{
		return(gcd(x, y % x));
	}
}
void Fraction::reduce(){
	int common;
	common = gcd(top, bottom);
	top /= common;
	bottom /= common;
}
void Fraction::printFraction(){
	cout << top << "/" << bottom << endl;
}
//accessors and mutators
void Fraction::setTop(int top_){
	top = top_;
}
void Fraction::setBottom(int bottom_){
	bottom = bottom_;
}
int Fraction::getTop(){
	return top;
}
int Fraction::getBottom(){
	return bottom;
}

int main(){
	Fraction myFraction = Fraction(2, 3);
	Fraction frac2 = Fraction(1, 4);
	myFraction.printFraction();
	myFraction.multiply(frac2);
	myFraction.printFraction();
	myFraction.add(frac2);
	myFraction.printFraction();
	myFraction.divide(frac2);
	myFraction.printFraction();
	myFraction.subtract(frac2);
	myFraction.printFraction();
}
