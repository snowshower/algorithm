#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);	

	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n;
		cin >> n;

		vector<vector<int>> v(n, vector<int>(n));

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> v[i][j];
			}
		}

		cout << "#" << test_case << "\n";

		for (int i = 0, k = n - 1; i < n; i++, k--) {
			for (int j = n - 1; j >= 0; j--) {
				cout << v[j][i];
			}
			cout << " ";
			for (int j = n - 1; j >= 0; j-- ) {
				cout << v[k][j];
			}
			cout << " ";
			for (int j = 0; j < n; j++) {
				cout << v[j][k];
			}
			cout << "\n";
		}
		
	}
	return 0;
}