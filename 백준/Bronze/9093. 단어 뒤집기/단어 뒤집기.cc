#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;
int main() {
	//입출력 속도 향상
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;
	cin.ignore();
	
	while (N--) {
		string s;
		getline(cin, s);
		stack<char> st;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] != ' ') {
				st.push(s[i]);
			}
			else{
				while (!st.empty()) {
					cout << st.top();
					st.pop();
				}
				cout << " ";
			}
		}
		while (!st.empty()) {
			cout << st.top();
			st.pop();
		}
		cout << endl;
	}
	

	return 0;
}