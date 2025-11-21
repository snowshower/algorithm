#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
#include<cstring>
#include<utility>

using namespace std;

int n, m, k;
int map[51][51];
bool visited[51][51];
int dy[] = { -1, 1,0,0 };
int dx[] = { 0,0,-1,1 };

void bfs(int start_y, int start_x) {
	queue<pair<int, int>> q;
	q.push({ start_y, start_x });
	visited[start_y][start_x] = true;

	while (!q.empty()) {
		int cy = q.front().first;
		int cx = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = cy + dy[i];
			int nx = cx + dx[i];
			
			if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
			if (visited[ny][nx] == true || map[ny][nx] == 0) continue;

			q.push({ ny, nx });
			visited[ny][nx] = true;
		}
	}

}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> m >> k;

		int x, y;

		memset(map, 0, sizeof(map));
		memset(visited, 0, sizeof(visited));

		for (int i = 0; i < k; i++) {
			cin >> x >> y;
			map[x][y] = 1;
		}

		int worm = 0;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (map[i][j] == 1 && visited[i][j] == false) {
					worm++;
					bfs(i, j);
				}
			}
		}

		cout << worm << "\n";
	}
	
	return 0;
}