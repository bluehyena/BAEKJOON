#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	queue<int> q;

	for (int i = 0; i < N; ++i) {
		q.push(i + 1);
	}

	for (int i = 0; i < N - 1; ++i) {
		q.pop();
		q.push(q.front());
		q.pop();
	}

	cout << q.front();

	return 0;
}