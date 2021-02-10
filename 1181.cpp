#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool sort_func(string a, string b) {
	if (a.length() < b.length()) {
		return 1;
	}
	else if (a.length() > b.length()) {
		return 0;
	}
	else {
		return a < b;
	}
}

vector<string> vec;

int main() {
	int N;
	cin >> N;
	string input;
	for (int i = 0; i < N; ++i) {
		cin >> input;
		vec.push_back(input);
	}

	sort(vec.begin(), vec.end(), sort_func);

	for (int i = 0; i < N; ++i) {
		if (i < N -1 && vec[i] == vec[i + 1]) {
			continue;
		}
		cout << vec[i] << '\n';
	}
	return 0;
}