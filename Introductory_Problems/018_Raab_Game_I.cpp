#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        if ((a + b > n) || ((a == 0 || b == 0) && (a + b) != 0))
        {
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            int tie = n - (a+b);
            for(int i = 1; i <=n; i++){
                cout << i << " ";
            }
            cout << endl;
            for(int i = a+1; i <= (a+b); i++){
                cout << i << " ";
            }
            for(int i = 1; i <= a; i++){
                cout << i << " ";
            }
            for(int i = a+b+1; i <= n; i++){
                cout << i << " ";
            }
            cout << endl;
        }
    }
}