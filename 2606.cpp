#include <iostream>
#include <vector>

using namespace std;

vector<int> vec[101];
bool visit[101];
int cnt = 0;

void dfs(int x) {
    if (visit[x]) {
        return;
    }
    visit[x] = true;
    ++cnt;
    for (int i = 0; i < vec[x].size(); ++i) {
        int y = vec[x][i];
        dfs(y);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        vec[x].push_back(y);
        vec[y].push_back(x);
    }

    dfs(1);
    cout << cnt - 1 << '\n';
    return 0;
}