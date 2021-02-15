#include <iostream>

using namespace std;
int dp[10001] = { 1,1 };

int main() {
	int N;
	cin >> N;

	for (int i = 2; i <= N; ++i) {
		dp[i] = (dp[i - 1] % 10007) + (dp[i - 2] % 10007);
	}

	cout << dp[N] % 10007;

	return 0;
}