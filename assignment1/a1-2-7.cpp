#include <iostream>

using namespace std;

int doublePower(double x, int n){
	if(n == 0){
		return 1;
	}
	if(n % 2 == 0){
		if(n == 2){
			return (x * x);
		}
		return(doublePower(x * x, n / 2));
	}else{
		return(x * doublePower(x * x, n / 2));
	}
}

int main(){
	cout << doublePower(5, 3) << endl;
	cout << doublePower(4, 4) << endl;
	cout << doublePower(3, 5) << endl;
	cout << doublePower(2, 2) << endl;
	cout << doublePower(60, 0) << endl;
	cout << doublePower(2, 9) << endl;
}
