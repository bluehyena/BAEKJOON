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
	else if (a.length() == b.length()) {
		int aNum = 0, bNum = 0;
		for (int i = 0; i < a.length(); ++i) { //48 57
			if (a[i] >= 48 && a[i] <= 57) {
				aNum += int(a[i] - 48);
			}
			if (b[i] >= 48 && b[i] <= 57) {
				bNum += int(b[i] - 48);
			}
		}
		if (aNum < bNum) {
			return 1;
		}
		else if (aNum > bNum) {
			return 0;
		}
		else {
			return a < b;
		}
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
		if (i < N - 1 && vec[i] == vec[i + 1]) {
			continue;
		}
		cout << vec[i] << '\n';
	}
	return 0;
}