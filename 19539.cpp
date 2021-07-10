#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> vec;
	int a;

	long long one = 0;
	long long two = 0;

	for (int i = 0; i < N; ++i) {
		cin >> a;
		if (a == 1) {
			++one;
		}
		else if (a == 2) {
			++two;
		}
		vec.push_back(a);
	}

	for (int i = 0; i < N; ++i) {
		if (vec[i] > 2) {
			if (vec[i] >= 6 && vec[i] % 6 == 0) {
				two += (vec[i] / 6) * 3;
			}
			else if (vec[i] >= 6 && vec[i] % 6 == 1) {
				one += 1;
				two += (vec[i] / 6) * 3;
			}
			else if (vec[i] >= 6 && vec[i] % 6 == 2) {
				two += ((vec[i] / 6) * 3) + 1;
			}
			else if (vec[i] >= 6 && vec[i] % 6 == 3) {
				two += ((vec[i] / 6) * 3) + 1;
				++one;
			}
			else if (vec[i] >= 6 && vec[i] % 6 == 4) {
				two += ((vec[i] / 6) * 3) + 2;
			}
			else if (vec[i] >= 6 && vec[i] % 6 == 5) {
				two += ((vec[i] / 6) * 3) + 2;
				++one;
			}
			else if (vec[i] % 3 == 0) {
				one += vec[i] / 3;
				two += vec[i] / 3;
			}
			else if (vec[i] % 3 == 1) {
				two += (vec[i] / 3) + 1;
			}
			else if (vec[i] % 3 == 2) {
				one += vec[i] / 3;
				two += (vec[i] / 3) + 1;
			}
		}
	}

	bool isItYes = false;
	
	while (one < two) {
		--two;
		++one;
		++one;
	}

	if (one == two) {
		isItYes = true;
	}

	if (isItYes) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}