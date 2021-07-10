#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long N, M;
	cin >> N >> M; 

	long long a;
	long long answer = 0;

	priority_queue<long long, vector<long long>, greater<long long>> pq;

	for (long long i = 0; i < N; ++i) {
		cin >> a;
		pq.push(a);
	}

	for (long long i = 0; i < M; ++i) {
		long long tmp = 0;
		for (long long j = 0; j < 2; ++j) {
			tmp += pq.top();
			pq.pop();
		}
		pq.push(tmp);
		pq.push(tmp);
	}
	
	for (long long i = 0; i < N; ++i) {
		answer += pq.top();
		pq.pop();
	}

	cout << answer;

	return 0;
}