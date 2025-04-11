#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int main() {
	//입출력 속도 향상
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, n;
	cin >> N;
	stack<int>s;
	int cnt = 1;
	for (int i = 0; i < N; i++) {
		cin >> n;
		if (n == cnt) cnt++;
		else {
			while (!s.empty() && s.top() == cnt) {
				s.pop();
				cnt++;
			}
			s.push(n);
		}
	}
	while (!s.empty() && s.top() == cnt) {
		s.pop();
		cnt++;
	}
	
	
	if (cnt == N + 1) cout << "Nice" << endl;
	else cout << "Sad" << endl;

	return 0;
}