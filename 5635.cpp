#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool Ascending(pair < pair<string, int>, pair<int, int>> a, pair < pair<string, int>, pair<int, int>> b) {
	if (a.second.second == b.second.second) {
		if (a.second.first == b.second.first) {
			return a.first.second < b.first.second;
		}
		return a.second.first < b.second.first;
	}
	return a.second.second < b.second.second;
}

vector<pair< pair<string, int>, pair<int, int>>> vec;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	string name;
	int day, month, year;

	pair < pair<string, int>, pair<int, int> > students;

	for (int i = 0; i < N; ++i) {
		cin >> name >> day >> month >> year;
		vec.push_back(make_pair(make_pair(name, day), make_pair(month, year)));
	}
	
	sort(vec.begin(), vec.end(), Ascending);

	cout << vec[N - 1].first.first << '\n' << vec[0].first.first;

	return 0;
}