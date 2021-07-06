#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	cin >> N >> K;

	queue<int> q;

	for (int i = 0; i < N; ++i) {
		q.push(i + 1);
	}

	cout << "<";

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < K - 1; ++j) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		q.pop();
		if (!q.empty()) {
			cout << ", ";
		}
	}

	cout << ">";

	return 0;
}