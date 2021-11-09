#include <iostream>
#include <algorithm>

// 原题: https://www.luogu.com.cn/problem/P1824

typedef unsigned long long ll;
const int N = 1e6 + 10;

using namespace std;

ll n, c;
ll arr[N];

inline bool check(int x)
{
	int last = arr[1], count = 1;
	for (int i = 2; i <= n; i++)
	{
		if (arr[i] - last > x)
		{
			count++;
			last = arr[i];
		}

		if (count >= c)
		{
			return true;
		}
	}

	return false;
}

int main()
{
	cin >> n >> c;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}

	sort(arr + 1, arr + 1 + n);

	ll left = 1, right = arr[n];
	while (left < right)
	{
		ll mid = (left + right) >> 1;

		if (check(mid))
		{
			left = mid + 1;
		}
		else
		{
			right = mid;
		}
	}

	cout << left;

	return 0;
}