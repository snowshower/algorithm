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
		int n, k;
		cin >> n >> k;
		vector<vector<int>> v(n, vector<int>(n));
		int x;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> x;
				v[i][j] = x;
			}
		}

		int ans = 0;
		
		for (int i = 0; i < n; i++) {
			int cnt = 0;
			for (int j = 0; j < n; j++) {
				if (v[i][j] == 1) cnt++;
				else {
					if (cnt == k) ans++;
					cnt = 0;
				}
			}
			if (cnt == k)ans++;
		}

		for (int i = 0; i < n; i++) {
			int cnt = 0;
			for (int j = 0; j < n; j++) {
				if (v[j][i] == 1) cnt++;
				else {
					if (cnt == k) ans++;
					cnt = 0;
				}
			}
			if (cnt == k) ans++;
		}

		cout << "#" << test_case << " " << ans << "\n";

	}
	return 0;
}