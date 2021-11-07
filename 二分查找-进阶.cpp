#include <iostream>
#include <cstring>
#include <algorithm>
#include <map>
#include <queue>
#include <deque>

// 原题：https://www.luogu.com.cn/problem/P4058

typedef unsigned long long ll;
const int N = 2e5+10;
using namespace std;

ll n, s, l;
ll high[N], len[N];

inline bool check(ll x) {
	ll sum = 0;
	for(int i = 1; i <= n ; i++) {
		ll total = len[i] * x + high[i];
		if(total >= l)	sum += total;
		if(sum >= s)	return true;
	}

	return false;
}

int main()
{
	cin >> n >> s >> l;
	int tmp;
	for(int i = 1; i <= n; i++) {
		cin >> high[i];
		if(high[i] >= l)	tmp += high[i];
	}
	for(int i = 1; i <= n; i++) {
		cin >> len[i];
	}

	if(tmp >= s) {
		cout << 0 << endl;
		return 0;
	}

	ll left = 0, right = 1e16+10;
	while(left < right) {
		ll mid = (left+right)>>1;
		if(!check(mid)) {
			left = mid + 1;
		} else {
			right = mid;
		}
	}

	cout << left;

	return 0;
}