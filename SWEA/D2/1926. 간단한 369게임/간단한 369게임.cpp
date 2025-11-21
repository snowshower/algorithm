#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cstring>
#include<utility>

using namespace std;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		string s = to_string(i);
		int clap = 0;

		for (char c : s) {
			if (c == '3' || c == '6' || c == '9') {
				clap++;
			}
		}

		if (clap > 0) {
			for (int i = 0; i < clap; i++) {
				cout << "-";
			}
			cout << " ";
		}
		else
			cout << i << " ";
	}
	return 0;
}