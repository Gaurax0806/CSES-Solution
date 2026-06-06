#include <bits/stdc++.h>
#define ull unsigned long long int

using namespace std;
int main()
{
	int n;
	cin >> n;
	int count = 0;
	for (int i = 5; i <= n; i = i + 5){
		int x = i;
		while (x%5 == 0 && x > 1){
			count++;
			// cout << x << " ";
			x = x / 5;
		}
	}
	cout << count;
}