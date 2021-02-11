#include <iostream>

using namespace std;

int dp[1000000];

int main() {
	int N;
	
	dp[0] = 1;
	dp[1] = 1;
	int i = 2;
	int j = 1;
	
	cin >> N;

	while(dp[i - 1] < N){
		dp[i] = dp[i - 1] + 6 * (i - 1);
		++i;
	}

	while (true) {
		if (dp[j] >= N && N > dp[j - 1]) {
			if (N == 1) {
				cout << 1;
				break;
			}
			cout << j;
			break;
		}
		++j;
	}
	return 0;
}