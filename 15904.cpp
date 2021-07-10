#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	string a;
	getline(cin, a);
	stack<char> stk;

	for (int i = 0; i < a.length(); ++i) {
		if (a[i] != 'U' && a[i] != 'C' && a[i] != 'P') {
			continue;
		}
		if (stk.empty() && a[i] == 'U') {
			stk.push(a[i]);
		}
		else if (!stk.empty() && stk.top() == 'U' && a[i] == 'C') {
			stk.push(a[i]);
		}
		else if (!stk.empty() && stk.top() == 'C' && a[i] == 'P') {
			stk.push(a[i]);
		}
		else if (!stk.empty() && stk.top() == 'P' && a[i] == 'C') {
			stk.push(a[i]);
			break;
		}
	}

	if (stk.size() == 4) {
		cout << "I love UCPC";
	}
	else {
		cout << "I hate UCPC";
	}

	return 0;
}