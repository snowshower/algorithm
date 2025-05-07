#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int cal(string& str);
int main() {
	//입출력 속도 향상
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, x;
	cin >> N;
	vector<int>n;
	vector<int>a;		// + - * /
	for (int i = 0; i < N; i++) {
		cin >> x;
		n.push_back(x);
	}
	for (int i = 0; i < 4; i++) {
		cin >> x;
		a.push_back(x);
	}
	vector<char>alu;
	for (int j = 0; j < a[0]; j++)
		alu.push_back('+');
	for (int j = 0; j < a[1]; j++)
		alu.push_back('-');
	for (int j = 0; j < a[2]; j++)
		alu.push_back('*');
	for (int j = 0; j < a[3]; j++)
		alu.push_back('/');

	vector<string> result;
	sort(alu.begin(), alu.end());
	do {
		string tmp;
		for (int i = 0; i < alu.size(); ++i) {
			tmp += to_string(n[i]);
			tmp += alu[i];
		}
		tmp += to_string(n.back());
		result.push_back(tmp);
	} while (next_permutation(alu.begin(), alu.end()));

	int min, max;
	min = cal(result[0]);
	max = cal(result[0]);
	for (int i = 0; i < result.size(); i++) {
		if (min > cal(result[i])) min = cal(result[i]);
		if (max < cal(result[i])) max = cal(result[i]);
	}
	cout << max << '\n' << min << '\n';
	
	return 0;
}
int cal(string& str) {
	int result = 0, tmp = 0;
	char op = '+';
	for (int i = 0; i <= str.size(); ++i) {
		if (i < str.size() && isdigit(str[i]))
			tmp = tmp * 10 + (str[i] - '0');
		else if (i == str.size() || !isdigit(str[i])) {
			switch (op) {
			case '+':
				result += tmp; break;
			case '-':
				result -= tmp; break;
			case '*':
				result *= tmp; break;
			case '/':
				result /= tmp; break;
			}

			if (i < str.size()) {
				op = str[i];
				tmp = 0;
			}
		}
	}
	return result;
}