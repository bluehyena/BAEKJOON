#include <iostream>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	char chess[51][51];
	char chessW[9][9];
	char chessB[9][9];
	int realwDifNum = 1000000;
	int realbDifNum = 1000000;
	string line;

	for (int i = 1; i < 9; ++i) {
		for (int j = 1; j < 9; ++j) {
			if ((i + j) % 2 == 0) {
				chessW[i][j] = 'W';
				chessB[i][j] = 'B';
			}
			else {
				chessW[i][j] = 'B';
				chessB[i][j] = 'W';
			}
		}
	}

	for (int i = 1; i <= N; ++i) {
		cin >> line;
		for (int j = 1; j <= M; ++j) {
			chess[i][j] = line[j - 1];
		}
	}

	for (int k = 1; k <= abs(N - 7); ++k) {
		for (int l = 1; l <= abs(M - 7); ++l) {	
			int wDifNum = 0;
			int bDifNum = 0;
			int a = 1;
			for (int i = k; i < k + 8; ++i) {
				int b = 1;
				for (int j = l; j < l + 8; ++j) {
					if (chess[i][j] != chessW[a][b]) {
						++wDifNum;
					}
					if (chess[i][j] != chessB[a][b]) {
						++bDifNum;
					}
					++b;
				}
				++a;
			}
			realwDifNum = min(wDifNum, realwDifNum);
			realbDifNum = min(bDifNum, realbDifNum);
		}
	}
	cout << min(realwDifNum, realbDifNum);
	return 0;
}