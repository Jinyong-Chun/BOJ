#include <iostream>
#include <climits>

using namespace std;

int main() {

	int n;
	cin >> n;
	int max = INT_MIN;
	int min = INT_MAX;

	int num;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num > max) {
			max = num;
		}
		if (num < min) {
			min = num;
		}
	}
	cout << min << " " << max;
	return 0;

}