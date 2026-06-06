#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll m = 1e9+7;
int main() {
	ll n;
	cin >> n;

	int no_of_ways = 1;
	for (ll i = 0; i < n; i++){
		no_of_ways = (no_of_ways*2)%m;
	}
	cout << no_of_ways << endl;

}
