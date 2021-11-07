#include <iostream>
#include <cstring>
#include <algorithm>
#include <map>
#include <queue>
#include <deque>

// 原题：https://www.luogu.com.cn/problem/P1090

typedef unsigned long long ll;
const int N = 1e6+10;

using namespace std;
priority_queue<ll, vector<ll>, greater<ll>> q;

int main()
{
	ll n;	cin >> n;
	for(int i = 1; i <= n; i++) {
		int tmp; cin >> tmp;
		q.push(tmp);
	}

	q.push()

	ll ans = 0;
	while(q.size() > 1) {
		ll ls = q.top();	q.pop();
		ll rs = q.top();	q.pop();
		ans += ls + rs;
		q.push(ls + rs);
	}
	
	cout << ans;

	return 0;
}