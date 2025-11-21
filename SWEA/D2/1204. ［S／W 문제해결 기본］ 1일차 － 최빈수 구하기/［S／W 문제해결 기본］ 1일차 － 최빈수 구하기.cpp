#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<utility>

using namespace std;

//bool compare(pair<int, int> a, pair<int, int>b) {
//	if (a.second != b.second)
//		return a.second > b.second;
//
//	return a.first > b.first;
//}

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
		int x;
		int result[101] = { 0, };
		for (int i = 0; i < 1000; i++) {
			cin >> x;
			result[x]++;
		}

		int max = 0;
		int ans = 0;
		for (int i = 0; i < 101; i++) {
			if (max <= result[i]) {
				max = result[i];
				ans = i;
			}
		}

		cout << "#" << test_case << " " << ans << "\n";
		

	}
	return 0;
}