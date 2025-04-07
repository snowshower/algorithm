#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	//입출력 속도 향상
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, t, x, cnt = 0;
	cin >> n;
	vector<int> v1(n);
	for (int i = 0; i < n; i++) {
		cin >> t;
		v1[i] = t;
	}
	cin >> x;

	vector<int>v2(n);
	for (int i = 0; i < n; i++)
		v2[i] = x - v1[i];	
	
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	reverse(v2.begin(), v2.end());

	for (int i = 0; i < n; i++) {
		if (binary_search(v1.begin()+i+1, v1.end(), v2[i])) {
			cnt++;
		}
		/*
		if (find(v1.begin() + i + 1, v1.end(), v2[i]) != v1.end()) {
			cnt++;
		}
		*/
	}

	cout << cnt;




	return 0;
}