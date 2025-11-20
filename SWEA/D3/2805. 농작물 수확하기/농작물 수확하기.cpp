#include<iostream>
#include<vector>
#include<algorithm>
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
		int N;
		cin >> N;
		int sum = 0;
		if (N == 1) {
			int n;
			cin >> n;
			cout << "#" << test_case << " " << n << "\n";
			continue;
		}
		vector<string> s;
		string c;
		for (int i = 0; i < N; i++) {
			cin >> c;
			s.push_back(c);
		}

		vector<vector<int>> v(N, vector<int>(N));
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				v[i][j]=stoi(s[i].substr(j, 1));
			}
		}

		int mid = N / 2;

		for (int i = 0; i < mid + 1; i++) {
			for (int j = mid - i; j < mid + i + 1; j++) {
				sum += v[i][j];
			}
		}
		for (int i = mid + 1; i < N; i++) {
			for (int j = i - mid; j < 3 * mid - i + 1; j++) {
				sum += v[i][j];
			}
		}

		cout << "#" << test_case << " " << sum << "\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}