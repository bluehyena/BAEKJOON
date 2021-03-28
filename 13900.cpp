#include <iostream>

int arr[100001];

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int N;
	std::cin >> N;

	long long answer = 0;
	long long num = 0;

	for (int i = 0; i < N; ++i) {
		std::cin >> arr[i];
		num += arr[i];
	}

	num -= arr[0];

	for (int i = 0; i < N - 1; ++i) {
		answer += num * arr[i];
		num -= arr[i + 1];
	}

	std::cout << answer;

	return 0;
}