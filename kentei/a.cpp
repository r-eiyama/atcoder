#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < 3; i++)
    {
        if (!(s[i] >= '0' && s[i] <= '9'))
        {
            cout << "error" << endl;
            return 0;
        }
    }
    int n = stoi(s);
    cout << 2 * n << endl;
}