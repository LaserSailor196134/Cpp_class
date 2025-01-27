#include <iostream>

using namespace std;

double average(int *arr, int n){
	int total = 0;
	for(int i = 0; i < n; i++){
		total += arr[i];
	}
	return(double(total) / n);
}

int main(){
	int arr[5] = {1, 2, 5, 7, 4};
	double avg = average(arr, 5);
	cout << avg << endl;
}
