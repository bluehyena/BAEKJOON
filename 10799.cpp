#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string a;
	cin >> a;
	
	stack<char> stk;
	int number = 0;

	for (int i = 0; i < a.length(); ++i) {
		if (a[i] == '(') {
			stk.push(a[i]);
		}
		else if (a[i] == ')') {
			if (a[i - 1] == ')') {
				stk.pop();
				number += 1;
			}
			else if (a[i - 1] == '(') {
				stk.pop();
				number += stk.size();
			}
		}

	}

	cout << number;

	return 0;
}