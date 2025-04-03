#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, n, x;
	cin >> N;
	stack<int> st;
	for (int i = 0; i < N; i++) {
		cin >> n;
		if (n == 1) {
			cin >> x;
			st.push(x);
		}
		else if (n == 2) {
			if (st.empty()) cout << -1 << '\n';
			else {
				cout << st.top() << '\n';
				st.pop();
			}
		}
		else if (n == 3) {
			cout << st.size() << '\n';
		}
		else if (n == 4) {
			if (st.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else {
			if (st.empty()) cout << -1 << '\n';
			else cout << st.top() << '\n';
		}
	}
	
	return 0;
}