#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		int count = 0;
		int point = 1;
		for (char c : s) {
			if (c == 'O') {
				count += point;
				point++;
			}
			else{
				point = 1;
			}
		
		}
		cout << count << endl;
	}
	return 0;

}