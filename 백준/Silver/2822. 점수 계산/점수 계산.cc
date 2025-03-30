#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n, sum = 0;
	vector<int> v1(8);
	vector<int> v2(8);
	vector<int> result;
	for (int i = 0; i < 8; i++) {
		cin >> n;
		v1[i] = n;
	}
	v2 = v1;
	sort(v2.begin(), v2.end());
	int min = v2[2];

	for (int i = 0; i < 8; i++) {
		if (v1[i] > min) {
			sum += v1[i];
			result.push_back(i + 1);
		}
	}
	cout << sum << endl;
	for (int i = 0; i < 5; i++)
		cout << result[i] << " ";

	return 0;
}