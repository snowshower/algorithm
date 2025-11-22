#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
#include<cstring>
#include<utility>

using namespace std;

int dy[] = { -1,1,0,0 };
int dx[] = { 0,0,-1,1 };
int map[16][16];
bool visited[16][16];

int bfs(int start_y, int start_x) {
	queue<pair<int, int>>q;
	q.push({ start_y, start_x });
	visited[start_y][start_x] = true;

	while (!q.empty()) {
		int cy = q.front().first;
		int cx = q.front().second;
		q.pop();

		if (map[cy][cx] == 3) return 1;

		for (int i = 0; i < 4; i++) {
			int ny = cy + dy[i];
			int nx = cx + dx[i];

			if (ny < 0 || nx < 0 || ny >= 16 || nx >= 16) continue;

			if (visited[ny][nx] == false && map[ny][nx] != 1) {
				visited[ny][nx] = true;
				q.push({ ny, nx });
			}			
		}
	}

	return 0;
}

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);	

	int test_case;
	int T;
	T = 10;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int a;
		cin >> a;

		memset(visited, 0, sizeof(visited));
		int y, x;

		for (int i = 0; i < 16; i++) {
			string s;
			cin >> s;
			for (int j = 0; j < 16; j++) {
				map[i][j] = s[j] - '0';
				if (map[i][j] == 2) {
					y = i;
					x = j;
				}
			}
		}

		cout << "#" << test_case << " " << bfs(y, x) << "\n";
	}		
	return 0;
}