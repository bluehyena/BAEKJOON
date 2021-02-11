#include <iostream>
#include <algorithm>
using namespace std;

bool des(int a, int b) {
	return a > b;
}

int arr_a[1000001];
int arr_b[1000001];

int main() {
	int N;
	int result = 0;
	cin >> N;

	for (int i = 1; i <= N; ++i) {
		cin >> arr_a[i];
	}
	for (int i = 1; i <= N; ++i) {
		cin >> arr_b[i];
	}

	sort(arr_a + 1, arr_a + N + 1);
	sort(arr_b + 1, arr_b + N + 1, des);

	for (int i = 1; i <= N; ++i) {
		result += arr_a[i] * arr_b[i];
	}

	cout << result;
	return 0;
}