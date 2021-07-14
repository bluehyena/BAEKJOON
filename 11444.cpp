#include<iostream>
#include<vector>

using namespace std;

typedef vector<vector<long long>> matrix;
const long long divi = 1000000007;

long long n;

matrix operator * (matrix& a, matrix& b)
{
	matrix c(2, vector<long long>(2));

	for (int i = 0; i <= 1; ++i)
		for (int j = 0; j <= 1; ++j) {
			for (int k = 0; k <= 1; ++k)
				c[i][j] += a[i][k] * b[k][j];

			c[i][j] %= divi;
		}
	return c;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	matrix ans = { {1,0}, {0,1} };
	matrix a = { {1,1}, {1,0} };

	while (n > 0)
	{
		if (n % 2 == 1)
			ans = ans * a;
		a = a * a;
		n /= 2;
	}

	cout << ans[0][1];
}