#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	//입출력 속도 향상
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M, K, n;
	cin >> N >> M;
	vector<vector<int>> v1(N, vector<int>(M, 0));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> n;
			v1[i][j] = n;
		}
	}
	cin >> M >> K;
	vector<vector<int>> v2(M, vector<int>(K, 0));
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < K; j++) {
			cin >> n;
			v2[i][j] = n;
		}
	}

	vector<vector<int>> v3(N, vector<int>(K, 0));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			for (int k = 0; k < M; k++)
				v3[i][j] += v1[i][k] * v2[k][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			cout << v3[i][j] << " ";
		}
		cout << endl;
	}
	

	return 0;
}