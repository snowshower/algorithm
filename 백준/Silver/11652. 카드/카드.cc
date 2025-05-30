#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
	//입출력 속도 향상
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    
	int n;
	cin >> n;
	vector<long long> v(n);
	for (int i = 0; i < v.size(); i++)
		cin >> v[i];

	sort(v.begin(), v.end());

	long long result = v[0];
	int maxcnt = 1, curcnt = 1;
	for (int i = 1; i < v.size(); ++i) {
		if (v[i] == v[i - 1])
			curcnt++;
		else
			curcnt = 1;

		if (curcnt > maxcnt) {
			maxcnt = curcnt;
			result = v[i];
		}
	}

	cout << result << '\n';

	return 0;
}