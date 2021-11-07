#include <iostream>
#include <cstring>
#include <algorithm>

// 原题：https://www.luogu.com.cn/problem/P6568

using namespace std;

int main()
{
	int n, k; cin >> n >> k;
	int arr[n+1] = {0, };
	for(int i = 1; i <= n; i++) {
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}

	int ans = 0;
	for(int i = k+1; i <= n; i++) {
		ans = max(arr[i] - arr[i-k-1], ans);
	}

	cout << ans;

	return 0;
}