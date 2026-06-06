#include <bits/stdc++.h>
#define ull unsigned long long int

using namespace std;
int main()
{
	ull n;
	cin >> n;
	ull total;
	ull no_of_invalid_ways;
	ull answer;
	if (n == 1){
			cout << 0 << endl;
	}
	else if (n == 2){
		cout << 0 << endl;
		cout << 6 << endl;
	}
	if (n > 2){
		cout << 0 << endl;
		cout << 6 << endl;
		for(ull i = 3; i <= n; i++){
			total = ((i*i)*((i*i)-1))/2;
			no_of_invalid_ways = 2*2*(i-2)*(i-1);
			answer = total - no_of_invalid_ways;
			cout << answer << endl;
		}
	}
	

}