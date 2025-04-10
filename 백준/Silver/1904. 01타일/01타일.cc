#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int fib(int n);
int main() {
	//입출력 속도 향상
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;
	cout << fib(N) << endl;


	return 0;
}
int fib(int n) {
	vector<int> f(n + 2);
	f[0] = 0;
	f[1] = 1;
	f[2] = 2;
	for (int i = 3; i <= n; i++)
		f[i] = (f[i - 1] + f[i - 2]) % 15746;
	return f[n];
}