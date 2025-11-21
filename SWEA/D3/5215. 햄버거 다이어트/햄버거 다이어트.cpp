#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<cstring>

using namespace std;

vector<pair<int, int>> v;
int max_score = 0;

void dfs(int depth, int current_score, int current_calory, int L, int N) {
	
	if (current_calory > L) return;
	if (depth == N) {
		if (current_score > max_score) {
			max_score = current_score;
		}
		return;
	}
	
	dfs(depth + 1, current_score + v[depth].first, current_calory + v[depth].second, L, N);

	dfs(depth + 1, current_score, current_calory, L, N);
}

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, L, sc, kc;
		cin >> N >> L;
		

		for (int i = 0; i < N; i++) {
			cin >> sc >> kc;
			v.push_back({ sc, kc });
		}

		dfs(0, 0, 0, L, N);


		cout << "#" << test_case << " " << max_score << "\n";

		v.clear();
		max_score = 0;
	}
	return 0;
}