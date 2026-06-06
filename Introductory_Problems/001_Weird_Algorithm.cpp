#include <bits/stdc++.h>
#define ull unsigned long long int

using namespace std;
int main()
{
    ull n;
    cin >> n;
    cout << n << " ";
    for (int i = 0; i < 1e6; i++) {
        if (n == 1){
            break;
        }
        else if (n%2 == 0){
            n /= 2;
            cout << n << " ";
        }
        else {
            n = (n*3)+1;
            cout << n << " ";
        }
    }
}