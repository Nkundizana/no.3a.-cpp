#include <iostream>
using namespace std;
int main() {
	int n, sum=0;
	
	cout << "sum of numbers till";
	cin >>n;
	for (int i=1; i<=n; i++){
		cout<< i<< " ";
		sum = sum+1;
	}
	cout << "sum ="<< sum;
	return 0;
}
