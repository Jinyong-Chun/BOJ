#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);

	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 0; i < n ; i++) {
		cout << i+1 << '\n';
	}
	return 0;
}