#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void otherCir(int a, int b);
int gcd(int a, int b);
int main() {
	//입출력 속도 향상
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, n;
	cin >> N;
	vector<int> cir(N);
	for (int i = 0; i < N; i++) {
		cin >> n;
		cir[i] = n;
	}

	for (int i = 1; i < N; i++) {
		otherCir(cir[0], cir[i]);
		cout << '\n';
	}


	return 0;
}

void otherCir(int a, int b) {
	cout << a / gcd(a, b) << "/" << b / gcd(a, b);
}

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}