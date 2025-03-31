#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int main() {
	int N, cnt = 0;
	cin >> N;

	while (N--) {
		string s;
		cin >> s;
		stack<char> st;
		for (char ch : s) {
			if (!st.empty() && st.top() == ch)
				st.pop();
			else st.push(ch);
		}
		if (st.empty()) cnt++;
	}
	cout << cnt << endl;

	return 0;
}