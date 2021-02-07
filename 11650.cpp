#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int N;
	cin >> N;
	int x, y;
	vector<pair<int, int>> vec;
	for (int i = 0; i < N; ++i) {
		cin >> x >> y;
		pair<int, int> p = make_pair(x, y);
		vec.push_back(p);
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < vec.size(); ++i) {
		cout << vec[i].first << " " << vec[i].second << '\n';
	}
	return 0;
}