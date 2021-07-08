#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int main() {
	ios::sync_with_stdio(false); // 15903
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M; 

	int a;
	int answer = 0;

	priority_queue<long long, vector<long long>, greater<long long>> pq;

	for (int i = 0; i < N; ++i) {
		cin >> a;
		pq.push(a);
	}

	for (int i = 0; i < M; ++i) {
		int tmp = 0;
		for (int j = 0; j < 2; ++j) {
			tmp += pq.top();
			pq.pop();
		}
		pq.push(tmp);
		pq.push(tmp);
	}
	
	for (int i = 0; i < N; ++i) {
		answer += pq.top();
		pq.pop();
	}

	cout << answer;

	return 0;
}