#include <iostream>

using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A1, B1;
	int A2, B2;
	
	cin >> A1 >> B1;
	cin >> A2 >> B2;

	int A = (lcm(B1, B2) / B1) * A1 + (lcm(B1, B2) / B2) * A2;
	int B = lcm(B1, B2);

	int num = gcd(A, B);
	
	A /= num;
	B /= num;

	cout << A << ' ' << B;

	return 0;
}