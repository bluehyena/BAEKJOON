#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	deque<int> dq;
	string command;

	int N;
	cin >> N;
	int X;

	for (int i = 0; i < N; ++i) {
		cin >> command;
		if (command == "push_front") {
			cin >> X;
			dq.push_front(X);
		}
		else if (command == "push_back") {
			cin >> X;
			dq.push_back(X);
		}
		else if (command == "pop_front") {
			if (dq.empty()) {
				cout << -1;
			}
			else {
				cout << dq.front();
				dq.pop_front();
			}
		}
		else if (command == "pop_back") {
			if (dq.empty()) {
				cout << -1;
			}
			else {
				cout << dq.back();
				dq.pop_back();
			}
		}
		else if (command == "size") {
			cout << dq.size();
		}
		else if (command == "empty") {
			if (dq.empty()) {
				cout << 1;
			}
			else {
				cout << 0;
			}
		}
		else if (command == "front") {
			if (dq.empty()) {
				cout << -1;
			}
			else {
				cout << dq.front();
			}
		}
		else if (command == "back") {
			if (dq.empty()) {
				cout << -1;
			}
			else {
				cout << dq.back();
			}
		}
	}

	return 0;
}