#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string N;
	cin >> N;

	stack<char> stk;
	int answer = 0;
	int tmp = 1;

	for (int i = 0; i < N.length(); ++i) {
		if (N[i] == '(') {
			tmp *= 2;
			stk.push(N[i]);
		}
		else if (N[i] == '[') {
			tmp *= 3;
			stk.push(N[i]);
		}
		else if (N[i] == ')') {
			if (stk.empty()) {
				stk.push(N[i]);
			}
			else if (N[i - 1] == '(') {
				stk.pop();
				answer += tmp;
				tmp /= 2;
			}
			else if (stk.top() == '(') {
				stk.pop();
				tmp /= 2;
			}
		}
		else if (N[i] == ']') {
			if (stk.empty()) {
				stk.push(N[i]);
			}
			else if (N[i - 1] == '[') {
				stk.pop();
				answer += tmp;
				tmp /= 3;
			}
			else if (stk.top() == '[') {
				stk.pop();
				tmp /= 3;
			}
		}
	}

	if (stk.empty()) {
		cout << answer;
	}
	else {
		cout << 0;
	}

	return 0;
}