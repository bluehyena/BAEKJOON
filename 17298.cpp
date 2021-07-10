#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	stack<int> stk;
	vector<int> vec;

	for (int i = 0; i < N; ++i) {
		int a;
		cin >> a;
		vec.push_back(a);
	}

	vector<int> answer(vec.size(), -1);

	for (int i = 0; i < vec.size(); ++i) {
		while (!stk.empty() && vec[stk.top()] < vec[i]) {
			answer[stk.top()] = vec[i];
			stk.pop();
		}
		stk.push(i);
	}

	for (int i = 0; i < answer.size(); ++i) {
		cout << answer[i] << " ";
	}

	return 0;
}