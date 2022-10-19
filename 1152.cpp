#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a;
	getline(cin, a);

	int answer = 1;

	for (int i = 0; i < a.length(); ++i) {
		if (a[i] == ' ') {
			++answer;
		}
	}

	if (a[0] == ' ') {
		--answer;
	}
	
	if (a[a.length() - 1] == ' ') {
		--answer;
	}

	cout << answer;

	return 0;
}