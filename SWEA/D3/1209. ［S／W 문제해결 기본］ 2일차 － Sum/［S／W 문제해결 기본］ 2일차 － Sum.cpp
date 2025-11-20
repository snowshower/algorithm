#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int test_case;
	int T = 10;
	int n, result = 0;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> n;
		vector<vector<int>> v(100, vector<int>(100));

		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				cin >> v[i][j];
			}
		}

		int cnt1 = 0, cnt2 = 0, sum = 0;
		for (int i = 0, j = 0; i < 100; i++, j++) {
			cnt1 += v[i][j];
		}
		for (int i = 0, j = 100; i < 100; i++, j--) {
			cnt2 += v[i][j];
		}
		result = max(cnt1, cnt2);

		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				sum += v[i][j];
			}
			result = max(result, sum);
			sum = 0;
		}

		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				sum += v[j][i];
			}
			result = max(result, sum);
			sum = 0;
		}

		cout << "#" << test_case << " " << result << "\n";
	}
	return 0;
}