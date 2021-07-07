#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	string a;
	stack<char> stk;

	cin >> a;

	stk.push(a[0]);

	for (int i = 1; i < a.length(); ++i) {
		if (stk.top() < a[i] && M != 0) {
			while (stk.top() < a[i] && M != 0) {
				stk.pop();
				--M;
				if (stk.empty()) {
					break;
				}
			}
			stk.push(a[i]);
		}
		else {
			stk.push(a[i]);
		}
	}

	for (;M > 0; --M) {
		stk.pop();
	}

	vector<char> vec;

	while (!stk.empty()) {
		vec.push_back(stk.top());
		stk.pop();
	}

	for (int i = vec.size() - 1; i >= 0; --i) {
		cout << vec[i];
	}

	return 0;
}