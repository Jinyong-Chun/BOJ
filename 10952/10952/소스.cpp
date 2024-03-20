#include <iostream>
using namespace std;

int main() {
	int A, B;
	ios_base::sync_with_stdio(false);

	while (cin >> A >> B) {
		if (A == 0 && B == 0) {
			break;
		}
		cout << A + B << endl;
	}
	return 0;
}