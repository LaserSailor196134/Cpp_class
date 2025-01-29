#include <iostream>
#include "Integer7.h"

using namespace std;

Integer7::Integer7(int value){
	value_ = value;
}

int Integer7::get() const{
	return value_;
}

void Integer7::set(int value){
	value_ = value;
}

Integer7& Integer7::operator+=(const Integer7& i){
	value_ += i.value_;
	return *this;
}

Integer7& Integer7::operator+=(int v){
	value_ += v;
	return *this;
}

Integer7& Integer7::Integer7::operator++(){
	value_++;
	return *this;
}

Integer7 Integer7::Integer7::operator++(int){
	Integer7 local(value_);
	value_++;
	return local;
}

Integer7 operator+(int v, Integer7 j){
	Integer7 local(v + j.get());
	return local;
}

Integer7 operator+(Integer7 j, int v){
	Integer7 local(j.get() + v);
	return local;
}

Integer7 operator+(Integer7 j, const Integer7& i){
	Integer7 local(j.get() + i.get());
	return local;
}

istream& operator>>(istream& is, Integer7& i){
	is >> i.value_;
	return is;
}

ostream& operator<<(ostream& os, const Integer7& i){
	os << i.get();
	return os;
}

bool operator==(const Integer7& lhs, const Integer7& rhs){
	return(lhs.get() == rhs.get());
}

bool operator!=(const Integer7& lhs, const Integer7& rhs){
	return(lhs.get() != rhs.get());
}

bool operator<(const Integer7& lhs, const Integer7& rhs){
	return(lhs.get() < rhs.get());
}

bool operator>(const Integer7& lhs, const Integer7& rhs){
	return(lhs.get() > rhs.get());
}

bool operator<=(const Integer7& lhs, const Integer7& rhs){
	return(lhs.get() <= rhs.get());
}

bool operator>=(const Integer7& lhs, const Integer7& rhs){
	return (lhs.get() >= rhs.get());
}

