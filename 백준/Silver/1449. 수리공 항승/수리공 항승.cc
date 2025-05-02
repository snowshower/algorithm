#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int main() {
	//입출력 속도 향상
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> v;
	int N, L, w, cnt = 0, result = 1;
	cin >> N >> L;
	for (int i = 0; i < N; i++) {
		cin >> w;
		v.push_back(w);
	}
	sort(v.begin(), v.end());
	cnt = v[0] + L - 1;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] > cnt) {
			cnt = v[i] + L - 1;
			result++;
		}
	}	

	cout << result << '\n';
	
	return 0;
}