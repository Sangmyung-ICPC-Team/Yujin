#include<iostream>
#define MAX 1000

using namespace std;
int main() {
	int n;
	cin >> n;

	int A[MAX];
	for (int i = 0; i < n; i++)
		cin >> A[i];

	int dp[MAX];
	for (int i = 0; i < n; i++) {
		dp[i] = 0;
		for (int j = i-1; j >= 0; j--) {
			if (A[i] > A[j])
				dp[i] = max(dp[i], dp[j]);
		}
		dp[i] += A[i];
	}

	int mx = 0;
	for (int i = 0; i < n; i++)
		mx = max(mx, dp[i]);


	cout << mx << "\n";
	return 0;
}
