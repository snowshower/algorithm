#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case;
    int T;

    T=10;

    vector<int> result;
    for (test_case = 1; test_case <= T; ++test_case)
    {
        int N;
        int cnt, sum = 0;
        vector<int> v;
        int a, b, c, d;
        cin >> N;
        int x;
        for (int i = 0; i < N; i++) {
            cin >> x;
            v.push_back(x);
        }
        for (int i = 2; i < N - 2; i++) {
            a = v[i] - v[i - 1];
            b = v[i] - v[i - 2];
            c = v[i] - v[i + 1];
            d = v[i] - v[i + 2];
            cnt = min(min(a, b), min(c, d));
            if (cnt > 0) {
                sum += cnt;
            }
        }
        result.push_back(sum);
        //for (int i = 0; i < N; i++)
        //    cout << v[i] << " ";
        //cout << endl;
        v.clear();


    }
    for (int i = 0; i < result.size(); i++) {
        cout << "#" << i + 1 << " " << result[i] << "\n";
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}