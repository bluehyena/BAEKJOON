#include <iostream>
#include <queue>
#include <map>

using namespace std;

int nodeNum[200001];
int answer[200001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	map<int, vector<int>> m;
	queue<int> q;

	for (int i = 1; i <= N; ++i) {
		int a;
		while (true) {
			cin >> a;
			if (a == 0) {
				break;
			}
			else {
				m[i].push_back(a);
			}
		}
		answer[i] = -1;
	}

	int M;
	cin >> M;

	for (int i = 0; i < M; ++i) {
		int a;
		cin >> a;
		q.push(a);
		answer[a] = 0;
	}

	for (int i = 1; i <= N; ++i) {
		nodeNum[i] = m[i].size();
	}

	while (!q.empty()) {
		int current = q.front();                       // 1 // q 1 6
		q.pop();
		for (int i = 0; i < m[current].size(); ++i) {
			int curValue = m[current][i]; // 2
			int curValueNeiborSize = m[curValue].size();
			nodeNum[curValue] -= 1;
			int cnt = answer[current] + 1;
			if (m[curValue].size() - nodeNum[curValue] >= (m[curValue].size() + 1) / 2 && answer[curValue] == -1) {
				q.push(curValue);
				answer[curValue] = cnt;
			}
		}
	}

	for (int i = 1; i <= N; ++i) {
		cout << answer[i] << " ";
	}

	return 0;
}