#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main() {
	ll n;
	cin >> n;
	ll sum = (n*(n+1))/2;
	vector <ll> set1;
	vector <ll> set2;
	ll sum_set_1 = 0;
	ll sum_set_2 = 0;
	if (sum % 2 != 0) {
		cout << "NO";
	}
	else {
		cout << "YES" << endl;
		for (ll i = n; i >= 1; i--) {
			sum_set_1 += i;
			if (sum_set_1 <= (sum/2)){
				set1.push_back(i);
			}
			else {
				sum_set_1 -= i;
				sum_set_2 += i;
				set2.push_back(i); 
			}
		}
		cout << set1.size() << endl;
		for (ll i = 0; i < set1.size(); i++) {
			cout << set1[i] << " ";
		}
		cout << endl;
		cout << set2.size() << endl;
		for (ll i = 0; i < set2.size(); i++) {
			cout << set2[i] << " ";
		}
	}
}