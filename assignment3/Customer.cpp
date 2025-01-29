#include <iostream>
#include <string>
#include "Customer.h"

using namespace std;

Customer::Customer(){
	lastName = "";
	firstName = "";
	address1 = "";
	address2 = "";
	city = "";
	province = "";
	postalCode = "";
	amountOwed = "";
}

string Customer::getLastName() const{
	return lastName;
}
string Customer::getFirstName() const{
	return firstName;
}
string Customer::getAddress1() const{
	return address1;
}
string Customer::getAddress2() const{
	return address2;
}
string Customer::getCity() const{
	return city;
}
string Customer::getProvince() const{
	return province;
}
string Customer::getPostalCode() const{
	return postalCode;
}
string Customer::getAmountOwed() const{
	return amountOwed;
}

void Customer::readFrom(istream& is){
	is.ignore(256, '|');
	getline(is, firstName, '|');
	getline(is, lastName, '|');
	getline(is, address1, '|');
	getline(is, address2, '|');
	getline(is, city, '|');
	getline(is, province, '|');
	getline(is, postalCode, '|');
	getline(is, amountOwed, '|');
}

void Customer::writeTo() const{
	cout << "|" << firstName << "|" << lastName << "|" << address1 << "|" << address2 << "|" << city << "|" << province << "|";
	cout << postalCode << "|" << amountOwed << "|";
}

std::istream& operator>>(std::istream &is, Customer &c){
	c.readFrom(is);
	return is;
}

std::ostream& operator<<(std::ostream &os, Customer &c){
	c.writeTo();
	return os;
}
int main(){
	Customer c1 = Customer();
	while(cin >> c1){
		cout << c1 <<endl;
	}
}
