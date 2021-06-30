#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int answer = 0;

	vector<int> distance;
	vector<int> price;

	for (int i = 0; i < N - 1; ++i) {
		int _distance;
		cin >> _distance;
		distance.push_back(_distance);
	}

	for (int i = 0; i < N; ++i) {
		int _price;
		cin >> _price;
		price.push_back(_price);
	}

	int tmp = price[0];

	for (int i = 0; i < N - 1; ++i) {
		tmp = min(tmp, price[i]);
		answer += tmp * distance[i];
	}

	cout << answer;

	return 0;
}