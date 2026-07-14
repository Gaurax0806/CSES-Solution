#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void th(int disc, int start, int end, int aux)
{
    if (disc == 1)
    {
        cout << start << " " << end << endl;
        return;
    }
    th(disc - 1, start, aux, end);
    cout << start << " " << end << endl;
    th(disc - 1, aux, end, start);
}
int main()
{
    int n;
    cin >> n;
    cout << (1 << n) - 1 << endl;
    th(n, 1, 3, 2);
}