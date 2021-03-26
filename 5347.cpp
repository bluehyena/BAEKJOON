#include <iostream>

using namespace std;

long gcd(long a, long b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

long lcm(long a, long b) {
	return a * b / gcd(a, b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	long a, b;

	for (int i = 0; i < N; ++i) {
		cin >> a >> b;
		cout << lcm(a, b) << '\n';
	}

	return 0;
}