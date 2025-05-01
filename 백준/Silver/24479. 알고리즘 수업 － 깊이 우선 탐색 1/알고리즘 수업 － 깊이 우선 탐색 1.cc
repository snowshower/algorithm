#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 100001;
vector<int>graph[MAX];
bool visited[MAX];
int result[MAX];
int cnt = 1;

void dfs(int n) {
	visited[n] = true;
	result[n] = cnt++;
	for (int i : graph[n]) {
		if (!visited[i]) {
			dfs(i);
		}
	}

}

int main() {
	//입출력 속도 향상
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M, R, u, v;
	cin >> N >> M >> R;
	for (int i = 0; i < M; i++) {
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	for (int i = 1; i <= N; ++i) {
		sort(graph[i].begin(), graph[i].end());
	}

	dfs(R);

	for (int i = 1; i <= N; ++i)
		cout << result[i] << '\n';

	return 0;
}