#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<string>> board, int h, int w);
bool check(int x, int n);
int main() {
	//입출력 속도 향상
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    int n, h, w;
    string b;
    cin >> n >> h >> w;
    vector<vector<string>> board(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b;
            board[i].push_back(b);
        }
    }
    int result = solution(board, h, w);
    cout << result << '\n';
	
	return 0;
}
int solution(vector<vector<string>> board, int h, int w) {
    int count = 0;
    vector<int>dh = { 0,1,-1,0 };
    vector<int>dw = { 1,0,0,-1 };
    int h_check = 0, w_check = 0;
    for (int i = 0; i < 4; i++) {
        h_check = h + dh[i];
        w_check = w + dw[i];
        if (check(h_check, board.size()) && check(w_check, board[0].size())) {
            if (board[h][w] == board[h_check][w_check]) {
                count++;
            }
        }
    }
    return count;
}
bool check(int x, int n) {
    return (x >= 0 && x < n);
}