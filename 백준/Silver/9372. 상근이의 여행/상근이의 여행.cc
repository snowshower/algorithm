#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
void up(int a, int b, vector<int>& c);
int main() {
	int T, N, M, m1, m2;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N >> M;
		for (int j = 0; j < M; j++) {
			cin >> m1 >> m2;
		}
		cout << N - 1 << endl;
	}

	return 0;
}