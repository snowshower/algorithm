#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int cnt1 = 0;
int cnt2 = 0;
int fib(int n);
int fibonacci(int n);
int main() {
	//입출력 속도 향상
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;

	cout << fib(n) << " " << fibonacci(n) << endl;

	return 0;
}
int fib(int n) {
	if (n == 1 || n == 2) {
		cnt1++;
		return 1;
	}
	else {
		cnt1++;
		return (fib(n - 1) + fib(n - 2));
	}
}
int fibonacci(int n) {
	vector<int>f(n + 1);
	f[1] = 1;
	f[2] = 1;
	cnt2 = 0;
	for (int i = 3; i <= n; i++) {
		f[i] = f[i - 1] + f[i - 2];
		cnt2++;
	}
		
	return cnt2;
}