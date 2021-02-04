#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N, A = 1;
    cin >> N;
    vector<int> vec(N);

    for (int i = 0; i < N; ++i) {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end(), greater<>());
    A = vec[0] * vec[N - 1];
    cout << A;

    return 0;
}