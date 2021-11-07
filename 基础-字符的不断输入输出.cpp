#include <iostream>
#include <cstring>
#include <algorithm>

//原题：https://pintia.cn/problem-sets/994805046380707840/problems/994805143738892288

using namespace std;

int main()
{
	int iTimes[10] = {0, };

	char ch;	ch = cin.get();
	while(ch != '\n') {
		iTimes[ch-48]++;
		ch = cin.get();
	}

	for(int i = 0; i < 10; i++) {
		if(iTimes[i] != 0) {
			cout << i << ":" << iTimes[i] << "\n";
		}
	}

	return 0;
}