#include <iostream>
#include <string>

using namespace std;

class Customer{
	public:
		Customer();
		string getLastName() const;
		string getFirstName() const;
		string getAddress1() const;
		string getAddress2() const;
		string getCity() const;
		string getProvince() const;
		string getPostalCode() const;
		string getAmountOwed() const;
		void readFrom(istream& is);
		void writeTo() const;
	private:
		string lastName;
		string firstName;
		string address1;
		string address2;
		string city;
		string province;
		string postalCode;
		string amountOwed;
};
