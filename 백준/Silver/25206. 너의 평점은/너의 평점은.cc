#include <iostream>
#include <vector>
#include <string>
using namespace std;
double graderesult(string s);
int main() {
	vector<vector<string>> g(20, vector<string>(3));
	string s;
	double result = 0;
	double sum = 0;
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> s;
			g[i][j] = s;
		}
	}

	for (int i = 0; i < 20; i++) {
		if (g[i][2] != "P") {
			sum += stod(g[i][1]);
			result += graderesult(g[i][2]) * stod(g[i][1]);
		}
	}

	cout.precision(7);
	cout << result / sum << endl;

	return 0;
}
double graderesult(string s) {
	if (s == "A+")	return 4.5;
	else if (s == "A0")	return 4.0;
	else if (s == "B+")	return 3.5;
	else if (s == "B0")	return 3.0;
	else if (s == "C+")	return 2.5;
	else if (s == "C0")	return 2.0;
	else if (s == "D+")	return 1.5;
	else if (s == "D0")	return 1.0;
	else return 0.0;
}