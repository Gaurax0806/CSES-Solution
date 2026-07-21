#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long digits = 1;
        long long no_of_digits = 9;
        long long total_digits = 0;

        while (n - (total_digits + (digits * no_of_digits)) > 0)
        {
            total_digits += digits * no_of_digits;
            digits++;
            no_of_digits *= 10;
        }

        n = n - total_digits;

        long long start_digit = 1;
        for (long long i = 1; i < digits; i++)
        {
            start_digit *= 10;
        }

        long long active_digit = start_digit + n / digits - 1;

        if (n % digits == 0)
        {
            cout << active_digit % 10 << '\n';
        }
        else
        {
            active_digit++;
            long long x = digits - (n % digits);

            while (x--)
            {
                active_digit /= 10;
            }

            cout << active_digit % 10 << '\n';
        }
    }

    return 0;
}