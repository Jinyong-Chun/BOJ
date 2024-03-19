#include <iostream>
#include <string>
using namespace std;

int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
	
		int m;
		string s;
		cin >> m >> s;

		string result= "";
		for (char c : s) {
			for (int j = 0; j < m; j++) {
				result += c;

			}
			
		}
		cout << result << endl;

	}
	return 0;

}