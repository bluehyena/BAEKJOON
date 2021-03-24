#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <pair<int, int>> vec;

bool Ascending6(pair<int, int> a, pair<int, int> b) {
	return a.first < b.first;
}

bool Ascending1(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	int a, b;

	int least = -1, sixM = 0, masaka = 0;

	for (int i = 0; i < M; ++i) {
		cin >> a >> b;
		vec.push_back(make_pair(a, b));
	}

	sort(vec.begin(), vec.end(), Ascending1);

	for (int i = 0; i < N; ++i) {
		masaka += vec[0].second;
	}

	sort(vec.begin(), vec.end(), Ascending6);

	while (N > 0) {
		sixM += vec[0].first;
		
		if (N < 6) {
			least = sixM - vec[0].first;
			sort(vec.begin(), vec.end(), Ascending1);
			
			for (int i = N; i > 0; --i) {
				least += vec[0].second;
			}
			break;
		}
		N -= 6;
	}

	if (least == -1) {
		least = sixM;
	}

	cout << min(masaka, min(least, sixM));

	return 0;
}