#include <bits/stdc++.h>
#define ll unsigned long long int

using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--){
		ll a, b;
		cin >> a >> b;
		if ((max(a,b) <= (min(a,b)*2)) && (a+b)%3 == 0){
			cout << "YES" << endl;	
		}
		else {
			cout << "NO" << endl;
		}

	}
}