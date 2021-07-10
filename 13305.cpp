#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	long long answer = 0;

	vector<long long> distance;
	vector<long long> price;

	for (int i = 0; i < N - 1; ++i) {
		long long _distance;
		cin >> _distance;
		distance.push_back(_distance);
	}

	for (int i = 0; i < N; ++i) {
		long long _price;
		cin >> _price;
		price.push_back(_price);
	}

	long long tmp = price[0];

	for (int i = 0; i < N - 1; ++i) {
		tmp = min(tmp, price[i]);
		answer += tmp * distance[i];
	}

	cout << answer;

	return 0;
}