#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int count[10] = {0};
	cin >> a >> b >> c;
	int result = a * b * c;
	while (result > 0) {
		count[result % 10]++;
		result /= 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << count[i] << endl;
	}

	return 0;

}