#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int answer = 0;

	for (int i = 0; i < N; ++i) {
		string a;
		cin >> a;

		char current = a[0];
		vector<char> again;
		again.push_back(a[0]);
		bool endwell = true;

		for (int j = 1; j < a.length(); ++j) {
			if (current == a[j]) {
				continue;
			}
			else {
				for (int k = 0; k < again.size(); ++k) {
					if (again[k] == a[j]) {
						endwell = false;
						break;
					}
				}

				if (endwell) {
					current = a[j];
					again.push_back(a[j]);
				}
				else {
					break;
				}

			}
		}

		if (endwell) {
			++answer;
		}

	}

	cout << answer;

	return 0;
}