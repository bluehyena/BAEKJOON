#include <iostream>

using namespace std;

int main() {
	int T;
	string S;
	int R;
	
	cin >> T;

	for (int i = 1; i <= T; ++i) {
		cin >> R >> S;
		for (int j = 0; j < S.length(); ++j) {
			for (int a = 1; a <= R; ++a) {
				cout << S[j];
			}
		}
		cout << endl;
	}

	return 0;
}