#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int x, int y);
int main() {
	//입출력 속도 향상
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, t;
	cin >> N;
	vector<int> tree(N);
	vector<int> add(N - 1);
	for (int i = 0; i < N; i++) {
		cin >> t;
		tree[i] = t;
	}
	for (int i = 0; i < N - 1; i++) {
		add[i] = tree[i + 1] - tree[i];
	}
	int tmp = gcd(add[0], add[1]);
	for (int i = 1; i < add.size(); i++) {
		tmp = gcd(tmp, add[i]);
	}
	
	int result = 0;
	for (int i = 0; i < add.size(); i++) {
		result += add[i] / tmp - 1;
	}
	cout << result << '\n';
	
	
	return 0;
}

int gcd(int x, int y) {
	if (y == 0) return x;
	else return gcd(y, x % y);
}