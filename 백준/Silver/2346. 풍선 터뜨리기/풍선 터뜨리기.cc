#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	//입출력 속도 향상
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    
	int N, n;
	cin >> N;
	vector<pair<int, int>> v(N);
	for (int i = 0; i < N; i++) {
		cin >> n;
		v[i] = { i + 1, n };
	}

	int idx = 0;
	for (int i = 0; i < N; i++) {
		cout << v[idx].first << " ";
		int move = v[idx].second;
		v[idx].first = 0;

		if (i == N - 1) break;

		int step = abs(move);
		int way = 0;
		if (move > 0) way = 1;
		else way = -1;

		while (step > 0) {
			idx = (idx + way + N) % N;
			if (v[idx].first != 0) step--;
		}
	}
	
	
    
	return 0;
}