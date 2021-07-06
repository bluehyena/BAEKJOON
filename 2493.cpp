#include <iostream>
#include <vector>
#include <stack>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int N;
	std::cin >> N;

	std::vector<int> vec;
	int a;

	for (int i = 1; i <= N; ++i) {
		std::cin >> a;
		vec.push_back(a);
	}

	std::stack<std::pair<int, int>> stk; // value , idx
	stk.push(std::make_pair(vec[0], 1));
	std::cout << "0 ";

	for (int i = 1; i < vec.size(); ++i) {
		if (stk.top().first < vec[i]) { // top 6  tower 9     top 9, 2 tower 7, 3    8 4
			while (!stk.empty()) {
				stk.pop();
				if (stk.empty()) {
					break;
				}
				if (stk.top().first > vec[i]) {
					std::cout << stk.top().second << " ";
					stk.push(std::make_pair(vec[i], i + 1));
					break;
				}
			}
			if (stk.empty()) {
				std::cout << "0 ";
				stk.push(std::make_pair(vec[i], i + 1));
			}
		}
		else {
			std::cout << stk.top().second << " ";
			stk.push(std::make_pair(vec[i], i+1));
		}
	}

	return 0;
}