#include <iostream>
#include <vector>
using namespace std;
int main() {
	int N, K;
	cin >> N >> K;
	int i = 1;
	int cnt = 0;
	while (i <= N) {
		if (N % i == 0) {
			cnt++;
			if (cnt == K) {
				cout << i << endl;
				break;
			}
		}
		i++;
	}
	if (cnt < K) cout << 0 << endl;

	return 0;
}