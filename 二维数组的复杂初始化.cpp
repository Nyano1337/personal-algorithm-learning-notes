#include <iostream>
#include <cstring>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
	int n;	cin >> n;
	int len = pow(2, n);
	int matrix[len][len+2];
	int **p = nullptr;
	p = (int **)malloc(sizeof(int *) *len);

	for (int i = 0; i < len*(len+2); i++)
	{
		*((int*)matrix + i) = 1;
	}

	for(int i = 0; i < len; i++) {
		for(int j = 0; j < len+2; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}