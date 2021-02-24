#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string arr[1001];
string arr2[1001];

bool Decending(string a, string b) {
	if (a.length() == b.length()) {
		return a > b;
	}
	return a.length() > b.length();
}

bool Decending2(string a, string b) {
	string A, B;

	A.append(a);
	A.append(b);
	B.append(b);
	B.append(a);

	return A > B;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K, N;
	cin >> K >> N;

	for (int i = 0; i < K; ++i) {
		cin >> arr[i];
	}

	sort(arr, arr + K, Decending);

	for (int i = 0; i < K; ++i) {
		arr2[i] = arr[i];
	}
	for (int i = K; i < N; ++i) {
		arr2[i] = arr[0];
	}

	sort(arr2, arr2 + N, Decending2);

	string answer;

	for (int i = 0; i < N; ++i) {
		answer.append(arr2[i]);
	}

	cout << answer;

	return 0;
}