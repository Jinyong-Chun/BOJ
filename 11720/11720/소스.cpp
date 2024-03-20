#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	string c;
	cin >> c;
	
	int sum=0 ;

	for (char digit : c) {
		sum += digit - '0';
	}
	cout << sum;
	return 0;
}