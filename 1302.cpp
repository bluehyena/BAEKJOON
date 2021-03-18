#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> bestSeller;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	
	int answer = 0;
	string a;

	for (int i = 0; i < N; ++i) {
		cin >> a;
		++bestSeller[a];
	}

	for (auto i = bestSeller.begin(); i != bestSeller.end(); ++i) {
		answer = max(answer, i->second);
	}
	
	for (auto j = bestSeller.begin(); j != bestSeller.end(); j++) {
		if (answer == j->second) {
				cout << j->first;
				return 0;
			}
		}

	return 0;
}