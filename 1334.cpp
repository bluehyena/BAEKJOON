#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string N;
	cin >> N;

	int zero = 0;
	int one = 0;
	int two = 0;
	int three = 0;
	int four = 0;
	int five = 0;
	int seven = 0;
	int eight = 0;
	int sixNine = 0;

	for (int i = 0; i < N.length(); ++i) {
		if (N[i] == '0') {
			++zero;
		}
		else if (N[i] == '1') {
			++one;
		}
		else if (N[i] == '2') {
			++two;
		}
		else if (N[i] == '3') {
			++three;
		}
		else if (N[i] == '4') {
			++four;
		}
		else if (N[i] == '5') {
			++five;
		}
		else if (N[i] == '6') {
			++sixNine;
		}
		else if (N[i] == '7') {
			++seven;
		}
		else if (N[i] == '8') {
			++eight;
		}
		else if (N[i] == '9') {
			++sixNine;
		}
	}

	int answer = 1;

	answer = max(answer, zero);
	answer = max(answer, one);
	answer = max(answer, two);
	answer = max(answer, three);
	answer = max(answer, four);
	answer = max(answer, five);
	answer = max(answer, seven);
	answer = max(answer, eight);

	if (sixNine % 2 == 1) {
		answer = max(answer, (sixNine / 2) + 1);
	}
	else {
		answer = max(answer, (sixNine / 2));
	}

	cout << answer;

	return 0;
}