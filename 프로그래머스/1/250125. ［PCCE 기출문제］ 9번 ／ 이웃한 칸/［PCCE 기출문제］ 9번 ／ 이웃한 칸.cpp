#include <vector>
#include <algorithm>
using namespace std;

bool check(int x, int n) {
    return (x >= 0 && x < n);
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