#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	//입출력 속도 향상
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, K, n;
	cin >> N >> K;
	vector<int>v(N);
	for (int i = 0; i < N; i++) {
		cin >> n;
		v[i] = n;
	}
	sort(v.begin(), v.end());
	cout << v[K - 1] << endl;
	

	return 0;
}