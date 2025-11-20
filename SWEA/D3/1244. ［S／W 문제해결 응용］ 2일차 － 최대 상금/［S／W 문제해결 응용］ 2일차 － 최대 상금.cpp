#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

string s;
int change;
int result;

vector<vector<bool>> visited;

void dfs(int depth) {
    int current_num = stoi(s);

    if (visited[depth][current_num]) return;

    visited[depth][current_num] = true;

    if (depth == change) {
        if (stoi(s) > result) {
            result = stoi(s);
        }
        return;
    }

    for (int i = 0; i < s.size() - 1; i++) {
        for (int j = i + 1; j < s.size(); j++) {
            swap(s[i], s[j]);

            dfs(depth + 1);

            swap(s[i], s[j]);
        }
    }
}


int main(int argc, char** argv)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case;
    int T;
    

    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case)
    {
        
        result = 0;
        
        cin >> s >> change;
        
		visited=vector<vector<bool>> (11, vector<bool>(1000000, false));
        
        dfs(0);
        
        cout << "#" << test_case << " " << result << "\n";
        
        //visited.clear();
    }
    return 0;
}