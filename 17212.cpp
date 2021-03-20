#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int answer = 0;

	for (;N >= 7;) {
		if (N == 10) {
			N -= 10;
			++answer;
			++answer;
			break;
		}
		N -= 7;
		++answer;
	}

	for (; N >= 5;) {
		N -= 5;
		++answer;
	}

	for (; N >= 2;) {
		N -= 2;
		++answer;
	}

	for (; N >= 1;) {
		N -= 1;
		++answer;
	}

	cout << answer;

	return 0;
}