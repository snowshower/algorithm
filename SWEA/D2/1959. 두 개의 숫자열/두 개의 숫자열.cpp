#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>

using namespace std;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);	

	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n, m;
		cin >> n >> m;

		vector<int> a(n);
		vector<int> b(m);

		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < m; i++)
			cin >> b[i];

		int sum = 0, ans = 0;

		if (n < m) {
			for (int i = 0; i < m - n + 1; i++) {
				for (int j = 0; j < n; j++) {
					sum += a[j] * b[j + i];
				}
				ans = max(ans, sum);
				sum = 0;
			}
		}
		else {
			for (int i = 0; i < n - m + 1; i++) {
				for (int j = 0; j < m; j++) {
					sum += b[j] * a[j + i];
				}
				ans = max(ans, sum);
				sum = 0;
			}
		}

		cout << "#" << test_case << " " << ans << "\n";
	}
	return 0;
}