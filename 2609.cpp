#include <iostream>

using namespace std;

int main() {
	int a, b, maxi, mini = 1, multinum = 1;
	cin >> a >> b;
	int small = min(a, b);

	for (int i = 1; i <= small; ++i) {
		if (a % i == 0 && b % i == 0) {
			mini = i;
		}
	}

	multinum *= (a / mini) * (b / mini);
	maxi = multinum * mini;

	cout << mini << '\n' << maxi;

	return 0;
}