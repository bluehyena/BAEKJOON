#include <iostream>
#include <deque>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	int answer = 0;
	int left, right;

	deque<int> dq;

	for (int i = 1; i <= N; ++i) {
		dq.push_back(i);
	}

	for (int i = 0; i < M; ++i) {
		int num;
		cin >> num;

		for (int j = 0; j < dq.size(); ++j) {
			if (dq[j] == num) {
				left = j;
				right = dq.size() - j;
				break;
			}
		}

		if (left <= right) {
			while (true) {
				if (dq.front() == num) {
					break;
				}
				dq.push_back(dq.front());
				dq.pop_front();
				++answer;
			}
			dq.pop_front();
		}
		else {
			++answer;
			while (true) {
				if (dq.back() == num) {
					break;
				}
				dq.push_front(dq.back());
				dq.pop_back();
				++answer;	
			}
			dq.pop_back();
		}
	}

	cout << answer;

	return 0;
}