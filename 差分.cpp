#include <iostream>
#include <cstring>
#include <algorithm>

//原题：https://www.luogu.com.cn/problem/CF1501B

typedef long long ll;

using namespace std;

int main()
{
	int n; cin >> n;
	while(n--) {
		int len;
		cin >> len;

		int arr[len+1] = {0, };
		int cha[len+1] = {0, };
		for(int i = 1; i <= len; i++) {
			cin >> arr[i];
			cha[i] = arr[i] - arr[i-1];
		}
		
		for(int i = 1; i <= len; i++) {
			if(arr[i] > 1) {
				cha[max(i-arr[i]+1, 0)]++;
				cha[i+1]--;
			}
		}
		
		for(int i = 1; i <= len; i++) {
			cha[i] += cha[i-1];
			if(cha[i] > 0) {
				cout << 1 << " ";
			} else {
				cout << 0 << " ";
			}
		}
		
		cout << '\n';
	}

	return 0;
}

/*
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#define ll long long
using namespace std;
const int N = 2e5 +10;

ll t;
ll n, a[N], b[N];
int main(){
	cin >> t;
	while(t --){
		cin >> n;
		for(int i = 0; i <= n; i ++) b[i] = 0;
		for(int i = 1; i <= n; i ++){
			cin >> a[i];
			b[max(i - (a[i] - 1), 0ll)] ++;
			b[i + 1] --;
		} 
		
		for(int i = 1; i <= n; i ++){
			b[i] += b[i - 1];
			if(b[i] > 0) cout << 1 << ' ';
			else cout << 0 << ' '; 
		}
		cout << endl;
	}
	
	return 0;
}*/