#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long double X, Y;
	cin >> X >> Y;
	
	int Z = Y * 100 / X;

	if (Z >= 99) {
		cout << -1;
	}
	else {
		int L = 0;
		int R = 1000000000;
		int M;
		int tmp;

		while (L <= R) {
			M = (L + R) / 2;
			tmp = (Y + M) * 100 / (X + M);

			if (Z < tmp) {
				R = M - 1;
			}
			else {
				L = M + 1;
			}
		}

		cout << L;
	}

	return 0;
}