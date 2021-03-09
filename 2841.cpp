#include <iostream>
#include <stack>

using namespace std;

int line[500001];
int flat[500001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, P;
	cin >> N >> P;

	for (int i = 0; i < N; ++i) {
		cin >> line[i] >> flat[i];
	}

	stack<int> guitar[7];
	int num = 0;

	for (int i = 0; i < N; ++i) {
		while (true) {
			if (guitar[line[i] - 1].empty()) {
				guitar[line[i] - 1].push(flat[i]);
				++num;
				break;
			}
			else if (guitar[line[i] - 1].top() < flat[i]) {
				guitar[line[i] - 1].push(flat[i]);
				++num;
				break;
			}
			else if (guitar[line[i] - 1].top() == flat[i]) {
				break;
			}
			else if (guitar[line[i] - 1].top() > flat[i]) {
				guitar[line[i] - 1].pop();
				++num;
			}
		}
	}

	cout << num;

	return 0;
}