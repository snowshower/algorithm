#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M, a, b;
	cin >> N >> M;
	vector<int>A(N);
	vector<int>B(M);
	vector<int>merge;
	for (int i = 0; i < N; i++) {
		cin >> a;
		A[i] = a;
		merge.push_back(a);
	}
	for (int i = 0; i < M; i++) {
		cin >> b;
		B[i] = b;
		merge.push_back(b);
	}

	sort(merge.begin(), merge.end());
	for (int i = 0; i < merge.size(); i++)
		cout << merge[i] << " ";

	
	
	return 0;
}