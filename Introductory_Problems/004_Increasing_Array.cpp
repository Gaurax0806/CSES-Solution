#include <bits/stdc++.h>
#define ull unsigned long long int

using namespace std;
int main()
{
	int n;
	cin >> n;
	vector <ull> v;
	ull x;
	ull count = 0;
	for (int i = 0; i < n; i++){
		cin >> x;
		v.push_back(x); 
	}
	for (int i = 1; i < n; i++){
		if (v[i] > v[i-1]){
			continue;
		}
		else {
			while (v[i] < v[i-1]){
				v[i]++;
				count ++;
			}
		}
	}
	cout << count;
}
