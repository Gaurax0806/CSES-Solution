#include <bits/stdc++.h>
#define ull unsigned long long int

using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--){
		ull y, x;
		cin >> x;
		cin >> y;
		if (y >= x){
			if (y%2 == 0){
				cout << (((y-1)*(y-1))+x) << endl;
			}
			else{
				cout << ((y*y)-(x-1)) << endl;
			}
		}
		else{
			if (x%2 == 0){
				cout << ((x*x))-(y-1) << endl;
			}
			else {
				cout << ((x-1)*(x-1))+y << endl;
			}
		}
	}
}