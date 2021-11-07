#include <iostream>
#include <cstring>
#include <algorithm>
#include <map>
#include <queue>
#include <deque>

//原题：https://www.luogu.com.cn/problem/P1678

typedef long long ll;
const int N = 1e6+10;

using namespace std;
ll arr[N];

int main()
{
	ll m, n; cin >> m >> n;

	for(int i = 1; i <= m; i++) {
		cin >> arr[i];
	}
	
	sort(arr + 1, arr + m + 1);

	int sum = 0;
	for(int i = 0; i < n; i++) {
		int x;	cin >> x;
		int l = 1, r = m;
		while(l < r) {
			int mid = (l + r) / 2;
			if(x > arr[mid]) {
				l = mid + 1;
			} else {
				r = mid;
			}
		}
		if(x <= arr[1]) {
			sum += arr[1] - x;
		} else {
			sum += min(abs(x-arr[l]), abs(x-arr[l-1]));
		}
	}

	cout << sum;

	return 0;
}