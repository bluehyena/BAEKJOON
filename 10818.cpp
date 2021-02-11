#include <iostream>

using namespace std;

int arr[1000001];

int main() {
	int N;
	cin >> N;

	int maximum = -99999999;
	int minimum = 99999999;

	for (int i = 1; i <= N; ++i) {
		cin >> arr[i];
	}
	for (int i = 1; i <= N; ++i) {
		maximum = max(arr[i], maximum);
		minimum = min(arr[i], minimum);
	}

	cout << minimum << ' ' << maximum;

	return 0;
}