#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool justNumber(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int N;
	cin >> N;

	int age;
	string name;
	vector<pair<int, string>> member;

	for (int i = 0; i < N; ++i) {
		cin >> age >> name;
		member.push_back({ age, name });
	}

	stable_sort(member.begin(), member.end(), justNumber);

	for (int i = 0; i < N; ++i) {
		cout << member[i].first << ' ' << member[i].second << '\n';
	}

	return 0;
}