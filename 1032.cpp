#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    string s;
    cin >> s;

    string result = s;

    for (int i = 1; i < N; ++i) {
        string tmp;
        cin >> tmp;
        for (int j = 0; j < s.length(); ++j) {
            if (s[j] != tmp[j]) {
                result[j] = '?';
            }
        }
    }
    cout << result << "\n";
    return 0;
}