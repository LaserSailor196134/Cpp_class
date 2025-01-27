#include <iostream>
#include <stdexcept>

using namespace std;

int main(){
	int input = 0;
	int total = 0;
	int smallest = 100;
	int counter = 0;
	float avg;
	while(true){
		if(!(cin >> input)){
			cout << "no integer value found." << endl;
			return 1;
		}
		if(input == -1 || input > 100){
			break;
		}
		if(input < smallest){
			smallest = input;
		}
		total += input;
		counter++;
	}
	avg = float(total) / counter; //calculates the average
	cout << "the smallest value is " << smallest << endl;
	cout << "the average value is " << avg << endl;
	return 0;
}
