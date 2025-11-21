#include<iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>
#include<cmath>

using namespace std;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);	

	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		vector<int> v(10);
		int x;
		for (int i = 0; i < v.size(); i++) {
			cin >> x;
			v[i] = x;
		}

		sort(v.begin(), v.end());

		int min = *min_element(v.begin(), v.end());
		int max = *max_element(v.begin(), v.end());

		for (int i = 0; i < v.size(); i++) {
			if (v[i] == min)
				v[i] = -1;
			if (v[i] == max)
				v[i] = -1;
		}

		vector<int> ans;
		for (int i = 0; i < v.size(); i++) {
			if (v[i] >= 0)
				ans.push_back(v[i]);
		}

		int avg = 0;
		for (int i = 0; i < ans.size(); i++) {
			avg += ans[i];
		}

		if (avg == 0)
			cout << "#" << test_case << " " << 0 << "\n";
		else
			cout << "#" << test_case << " " << static_cast<int>(round((double)avg / ans.size())) << "\n";


	}
	return 0;
}