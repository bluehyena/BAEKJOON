#include <iostream>

using namespace std;

int main() {
	int N;
	string number;
	cin >> N;
	int result = 0;

	cin >> number;
	for (int i = 0; i < N; ++i) {
		result += int(number[i] - 48);
	}
	
	cout << result;

	return 0;
}