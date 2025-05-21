#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b);
int main() {
	//입출력 속도 향상
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    
	int N, M;
	cin >> N >> M;
	vector<string> v(N);
	for (int i = 0; i < v.size(); i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	vector<int> rep;
	string tmp = v[0];
	int cnt = 1;
	for (int i = 1; i < v.size(); i++) {
		if (v[i] == tmp) cnt++;
		else {
			rep.push_back(cnt);
			tmp = v[i];
			cnt = 1;
		}
	}
	rep.push_back(cnt);
	v.erase(unique(v.begin(), v.end()), v.end());

	
	vector<pair<int, string>> s;
	for (int i = 0; i < v.size(); i++) {
		s.push_back({ rep[i], v[i] });
	}
	
	sort(s.begin(), s.end(), cmp);
	
	for (int i = 0; i < s.size(); i++) {
		if (s[i].second.length() < M) continue;
		cout << s[i].second << "\n";
	}
	
    
	return 0;
}
bool cmp(pair<int, string> a, pair<int, string> b) {
	if (a.first != b.first) return a.first > b.first;
	if (a.second.length() != b.second.length()) return a.second.length() > b.second.length();
	return a.second < b.second;
}