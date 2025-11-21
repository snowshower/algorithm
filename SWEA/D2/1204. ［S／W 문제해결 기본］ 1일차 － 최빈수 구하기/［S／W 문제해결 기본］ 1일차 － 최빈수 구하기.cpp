#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<utility>

using namespace std;

bool compare(pair<int, int> a, pair<int, int>b) {
	if (a.second != b.second)
		return a.second > b.second;

	return a.first > b.first;
}

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
		vector<int> v(1000);
		for (int i = 0; i < v.size(); i++) {
			cin >> v[i];
		}

		sort(v.begin(), v.end());

		vector<pair<int, int>> ans;
		
		int cnt = 0;

		for (int i = 0; i < v.size(); i++) {
			cnt = count(v.begin(), v.end(), v[i]);
			ans.push_back({ v[i], cnt });
		}

		sort(ans.begin(), ans.end(), compare);

		int result = ans[0].first;

		cout << "#" << test_case << " " << result << "\n";
		

	}
	return 0;
}