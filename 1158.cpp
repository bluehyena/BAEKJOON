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

	cout << "<";

	for (int i = 1; i <= N; ++i) {
		q.push(i);
	}

	cout << q.front();

	int tmp;

	while (true) {
		for (int i = 0; i < K - 1; ++i) {
			tmp = q.front();
			q.pop();
			q.push(tmp);
		}
		cout << q.front();
		q.pop();
		if (!q.size()) {
			break;
		}
		cout << ", ";
	}
	 
	cout << ">";

	return 0;
}