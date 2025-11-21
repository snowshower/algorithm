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
		string s;
		cin >> s;
		
		int ans = 0;

		for (int i = 0, j = s.length() - 1; i < s.length(); i++, j--) {
			if (s[i] == s[j])
				ans = 1;
			else
				ans = 0; break;
		}

		cout << "#" << test_case << " " << ans << "\n";
	}
	return 0;
}