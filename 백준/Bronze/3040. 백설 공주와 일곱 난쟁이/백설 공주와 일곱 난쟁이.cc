#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> hat;
	vector<int> result;
	int n, cnt = 0;
	for (int i = 0; i < 9; i++) {
		cin >> n;
		hat.push_back(n);
	}
	for (int a = 0; a < 9; a++) {
		for (int b = a + 1; b < 9; b++) {
			for (int c = b + 1; c < 9; c++) {
				for (int d = c + 1; d < 9; d++) {
					for (int e = d + 1; e < 9; e++) {
						for (int f = e + 1; f < 9; f++) {
							for (int g = f + 1; g < 9; g++) {
								cnt = hat[a] + hat[b] + hat[c] + hat[d] + hat[e] + hat[f] + hat[g];
								if (cnt == 100) {
									cout << hat[a] << endl;
									cout << hat[b] << endl;
									cout << hat[c] << endl;
									cout << hat[d] << endl;
									cout << hat[e] << endl;
									cout << hat[f] << endl;
									cout << hat[g] << endl;
									break;
									}
								}
							}
						}
					}
				}
			}
		}
	return 0;
}