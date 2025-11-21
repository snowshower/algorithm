#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>

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
		vector<vector<int>> v(n, vector<int>(n));

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> v[i][j];
			}
		}

		int max_fly = 0;

		for (int i = 0; i <= n - m; i++) {
			for (int j = 0; j <= n - m; j++) {
				int current_fly = 0;

				for (int x = 0; x < m; x++) {
					for (int y = 0; y < m; y++) {
						current_fly += v[i + x][j + y];
					}
				}
				max_fly = max(max_fly, current_fly);
			}
		}

		cout << "#" << test_case << " " << max_fly << "\n";
	}
	return 0;
}