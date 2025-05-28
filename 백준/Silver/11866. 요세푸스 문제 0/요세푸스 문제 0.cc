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
    
	int N, K;
	cin >> N >> K;
	queue<int> q;
	for (int i = 0; i < N; i++)
		q.push(i + 1);
	int tmp;
	vector<int> result;
	while (!q.empty()) {
		for (int i = 0; i < K-1; i++) {
			tmp = q.front();
			q.pop();
			q.push(tmp);
		}
		result.push_back(q.front());
		q.pop();
	}
	
	cout << "<";
	for (int i = 0; i < result.size() - 1; i++) {
		cout << result[i] << ", ";
	}
	cout << result[result.size() - 1] << ">" << '\n';


	return 0;
}