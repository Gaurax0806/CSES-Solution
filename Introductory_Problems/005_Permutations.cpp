#include <bits/stdc++.h>
#define ull unsigned long long int

using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n <= 3 && n > 1){
		cout << "NO SOLUTION";
	}
	else {
		for (int i = 2; i <= n; i = i+2){
			cout << i << " ";
		}
		for (int i = 1; i <= n; i = i+2){
			cout << i << " ";
		}
		
	}
	
}