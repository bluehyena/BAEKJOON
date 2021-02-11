#include <iostream>

using namespace std;

int arr[101];

int main() {
	int N, M;
	int mini = 9999999;
	cin >> N >> M;
	for (int i = 1; i <= N; ++i) {
		cin >> arr[i];
	}
	for (int i = 1; i <= N; ++i) {
		for (int j = i + 1; j <= N; ++j) {
			for (int k = j + 1; k <= N; ++k) {
				if (M - (arr[i] + arr[j] + arr[k]) >= 0) {
					mini = min(mini, M - (arr[i] + arr[j] + arr[k]));
				}
			}
		}
	}
	cout << M - mini;
	return 0;
}