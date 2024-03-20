#include <iostream>
using namespace std;

int main() {
	int a[8];
	for (int i = 0; i < 8; i++) {
		cin >> a[i];
	}
	int count=0;
	for (int i = 0; i < 8; i++) {
		if (a[i] == i + 1) {
			count++;
		}
		else if (a[i] == 8 - i) {
			count--;
		}
	}
	if (count==8) {
		cout << "ascending";
	}
	else if (count==-8) {
		cout << "descending";
	}
	else {
		cout << "mixed";
	}
	return 0;
}