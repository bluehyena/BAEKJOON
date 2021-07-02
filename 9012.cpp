#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin >> num;

	string parenthesis;
	bool goodEnd;

	for (int i = 0; i < num; ++i) {
		stack<char> stk;
		cin >> parenthesis;
		goodEnd = true;

		for (int i = 0; i < parenthesis.size(); ++i) {
			if (parenthesis[i] == '(') {
				stk.push('(');
			}
			else if (parenthesis[i] == ')') {
				if (stk.empty()) {
					goodEnd = false;
					break;
				}
				else {
					stk.pop();
				}
			}
		}
		if (stk.empty() && goodEnd) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << "\n";
		}
	}

	return 0;
}