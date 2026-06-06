#include <bits/stdc++.h>
using namespace std;

vector<string> generate_gray_code(int n)
{
    // Base case
    if (n == 1)
    {
        return {"0", "1"};
    }

    // Get gray code for n-1 bits
    vector<string> gray_code_minus_one = generate_gray_code(n - 1);

    // Mirror the previous list
    vector<string> mirror;

    for (int i = gray_code_minus_one.size() - 1; i >= 0; --i)
    {
        mirror.push_back(gray_code_minus_one[i]);
    }

    // Create new gray code list
    vector<string> new_code;

    // Add 0 in front of original list
    for (int i = 0; i < gray_code_minus_one.size(); i++)
    {
        new_code.push_back("0" + gray_code_minus_one[i]);
    }

    // Add 1 in front of mirrored list
    for (int i = 0; i < mirror.size(); i++)
    {
        new_code.push_back("1" + mirror[i]);
    }

    return new_code;
}

int main()
{
    int n;
    cin >> n;

    vector<string> code;

    code = generate_gray_code(n);

    for (auto it : code)
    {
        cout << it << endl;
    }
}