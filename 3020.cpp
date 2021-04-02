#include <iostream>
#include <algorithm>

using namespace std;

long long arr[500001];
long long under[500001], over[500001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, H;
	int a;
	cin >> N >> H;

	for (int i = 1; i <= N; ++i) {
		cin >> a;
		if (i % 2 == 1) {
			++under[a];
		}
		else {
			++over[a];
		}
	}

	for (int i = H - 2; i >= 1; --i) {
		under[i] += under[i + 1];
		over[i] += over[i + 1];
	}

	arr[1] = under[1];
	arr[H] = over[1];

	for (int i = 2; i <= H - 1; ++i) {
		arr[i] = under[i] + over[H + 1 - i];
	}

	sort(arr + 1, arr + H + 1);

	cout << arr[1] << ' ';
	cout << upper_bound(arr + 1, arr + H + 1, arr[1]) - lower_bound(arr + 1, arr + H + 1, arr[1]);

	return 0;
}