#include <iostream>
#include <vector>

using namespace std;

vector<bool> answer;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M, N;
	cin >> M >> N;

	answer.resize(N + 1);
	answer[1] = true;

	for (int i = 2; i * i <= N; ++i) {
		if (!answer[i]) {
			for (int j = 2 * i; j <= N; j += i) {
				answer[j] = true;
			}
		}
	}

	for (int i = M; i <= N; ++i) {
		if(!answer[i]){
			cout << i << '\n';
		}
	}

	return 0;
}