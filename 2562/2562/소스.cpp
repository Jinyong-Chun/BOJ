#include <iostream>
using namespace std;

int main() {

	int num[9];
	int max=0;
	int max_num;
	for (int i = 0; i < 9; i++)
	{
		cin >> num[i];
		if (num[i] > max) {
			max = num[i];
			max_num = i + 1;
		}
	}
	cout << max << "\n" << max_num;
	return 0;


}