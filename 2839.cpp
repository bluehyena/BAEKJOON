#include <iostream>

using namespace std;

int dp[5001];

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int N;
	cin >> N;

	dp[3] = 1;
	dp[5] = 1;

	for (int i = 1; i < 5001; ++i) {
		dp[i] = -1;
	}

	dp[3] = 1;
	dp[5] = 1;

	for (int i = 3; i < 5001; i += 3) {
		dp[i] = dp[i - 3] + 1;
	}

	for (int i = 5; i < 5001; i += 5) {
		dp[i] = dp[i - 5] + 1;
	}

	for (int i = 3; i < 5001; i += 3) {
		for (int j = 5; i + j < 5001; j += 5) {
			dp[i + j] = dp[i] + dp[j];
		}
	}
	
	cout << dp[N];

	return 0;
}