#include <bits/stdc++.h>
#define ull unsigned long long int

using namespace std;
int main()
{
	ull n;
	cin >> n;
	vector <int> v;
	int x;
	for (int i = 0; i < n-1; i++){
		cin >> x;
		v.push_back(x);
	}
	ull sum = 0;
	for(int i = 0; i < n-1; i++){
		sum += v[i];
	}
	ull real_sum = (n*(n+1))/2;
	cout << (real_sum - sum);
}